package entities;

import flash.system.System;
import com.haxepunk.Entity;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Data;
import com.haxepunk.utils.Key;
import com.haxepunk.Sfx;
import entities.Bullet;
import scenes.GameScene;

class Player extends ActiveEntity
{
    public static inline var GRAVITY = 0.25;
    public static inline var TERMINAL_VELOCITY = 6;
    public static inline var RUN_SPEED = 3.5;
    public static inline var JUMP_POWER = 6;
    public static inline var JUMP_CANCEL_VELOCITY = 4;
    public static inline var STANDING_JUMP_SPEED_PERCENTAGE = 0.92;
    public static inline var BULLET_SPEED = 6;

    public static inline var GAME_START_X = 2874;
    public static inline var GAME_START_Y = 2160;

    public static inline var DEBUG = true;

    private var onGround:Bool;
    private var isSpinJumping:Bool;
    private var isLookingUp:Bool;

    private var walkSfx:Sfx;
    private var jumpSfx:Sfx;
    private var spinJumpSfx:Sfx;
    private var landSfx:Sfx;
    private var shootSfx:Sfx;

    public function new()
    {
        Data.load('worrysave');
        x = Data.read('saveX', GAME_START_X);
        y = Data.read('saveY', GAME_START_Y);
        super(x, y);
        setHitbox(12, GameScene.TILE_WIDTH, -10, -16);
        velX = 0;
        velY = 0;
        onGround = false;
        isSpinJumping = false;
        isLookingUp = false;
        sprite = new Spritemap("graphics/player.png", GameScene.TILE_WIDTH, 48);
        sprite.add("idle", [0]);
        sprite.add("walk", [6, 7, 8], 12);
        sprite.add("jump", [9]);
        sprite.add("spinjump", [2, 3, 4, 5], 12);
        sprite.add("idle_up", [10], 12);
        sprite.add("walk_up", [11, 12, 13], 12);
        sprite.add("jump_up", [14]);
        sprite.flipped = Data.read('saveFacing', false);
        sprite.play("idle");
        graphic = sprite;
        layer = -2550;
        walkSfx = new Sfx("audio/walk.wav");
        jumpSfx = new Sfx("audio/jump.wav");
        spinJumpSfx = new Sfx("audio/spinjump.wav");
        landSfx = new Sfx("audio/land.wav");
        shootSfx = new Sfx("audio/shoot.wav");
        name = "player";
    }

    public override function moveCollideY(e:Entity)
    {
      velY = -0.1;
      return true;
    }

    public override function update()
    {
        isLookingUp = Input.check(Key.UP) && !isSpinJumping;

        if(onGround != isOnGround())
        {
          onGround = isOnGround();
          landSfx.play();
        }

        // RUNNING
        if (Input.check(Key.LEFT))
        {
          velX = -RUN_SPEED;
          sprite.flipped = true;
        }
        else if (Input.check(Key.RIGHT))
        {
          velX = RUN_SPEED;
          sprite.flipped = false;
        }
        else if(!isSpinJumping)
        {
          velX = 0;
        }

        // JUMPING
        if(onGround)
        {
          velY = 0;
          isSpinJumping = false;
          if(Input.pressed(Key.Z))
          {
            velY = -JUMP_POWER;
            jumpSfx.play();
            if((Input.check(Key.RIGHT) || Input.check(Key.LEFT)) && !Input.check(Key.UP))
            {
              isSpinJumping = true;
            }
          }
        }
        else
        {
          if(!isSpinJumping)
          {
            velX *= STANDING_JUMP_SPEED_PERCENTAGE;
          }
          velY += GRAVITY;
          velY = Math.min(velY, TERMINAL_VELOCITY);
          if(!Input.check(Key.Z) && velY < -JUMP_CANCEL_VELOCITY)
          {
            velY = -JUMP_CANCEL_VELOCITY;
          }
        }

        // SHOOTING
        if(Input.pressed(Key.X))
        {
          shootSfx.play();
          if(isLookingUp)
          {
            if(sprite.flipped)
            {
              scene.add(new Bullet(x + 15, y + 11, 0, -BULLET_SPEED));
            }
            else
            {
              scene.add(new Bullet(x + 14, y + 11, 0, -BULLET_SPEED));
            }
          }
          else
          {
            if(sprite.flipped)
            {
              scene.add(new Bullet(x + 7, y + 25, -BULLET_SPEED, 0));
            }
            else
            {
              scene.add(new Bullet(x + 26, y + 25, BULLET_SPEED, 0));
            }
          }

        }

        moveBy(velX, velY, "walls");
        animate();

        // CAMERA
        scene.camera.x = Math.floor(centerX/HXP.screen.width)*HXP.screen.width;
        scene.camera.y = Math.floor(centerY/HXP.screen.height)*HXP.screen.height;

        // SAVING
        if(Input.pressed(Key.ESCAPE))
        {
          Data.write("saveX", x);
          Data.write("saveY", y);
          Data.write("saveFacing", sprite.flipped);
          Data.save('worrysave');
          System.exit(0);
        }

        // DEBUG
        if(DEBUG)
        {
          if(Input.pressed(Key.W))
          {
            moveBy(0, -HXP.screen.height);
          }
          if(Input.pressed(Key.A))
          {
            moveBy(-HXP.screen.height, 0);
          }
          if(Input.pressed(Key.S))
          {
            moveBy(0, HXP.screen.height);
          }
          if(Input.pressed(Key.D))
          {
            moveBy(HXP.screen.height, 0);
          }
          if(Input.pressed(Key.R))
          {
            x = GAME_START_X;
            y = GAME_START_Y;
          }
          if(Input.pressed(Key.P))
          {
            trace(x + ' ' + y);
          }
          unstuck();
        }

        super.update();
    }

    private function animate()
    {
      if(!onGround)
      {
        walkSfx.stop();
        if(isSpinJumping)
        {
          sprite.play('spinjump');
          if(!spinJumpSfx.playing)
          {
            spinJumpSfx.loop();
          }
        }
        else
        {
          if(isLookingUp)
          {
            sprite.play('jump_up');
          }
          else
          {
            sprite.play('jump');
          }
        }
      }
      else if(onGround)
      {
        spinJumpSfx.stop();
        if (velX != 0)
        {
          if(isLookingUp)
          {
            sprite.play('walk_up');
          }
          else
          {
            sprite.play('walk');
          }
          if(!walkSfx.playing)
          {
            walkSfx.loop();
          }
        }
        else
        {
          if(isLookingUp)
          {
            sprite.play('idle_up');
          }
          else
          {
            sprite.play('idle');
          }
          walkSfx.stop();
        }
      }
    }

}
