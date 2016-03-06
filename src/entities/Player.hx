package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

class Player extends Entity
{
    public static inline var GRAVITY = 0.25;
    public static inline var TERMINAL_VELOCITY = 6;
    public static inline var RUN_SPEED = 3.5;
    public static inline var JUMP_POWER = 6;

    private var sprite:Spritemap;
    private var velX:Float;
    private var velY:Float;

    private var isSpinJumping:Bool;

    public function new(x:Int, y:Int)
    {
        super(x, y);
        setHitbox(12, 32, -10, -16);
        velX = 0;
        velY = 0;
        isSpinJumping = false;
        sprite = new Spritemap("graphics/player.png", 32, 48);
        sprite.add("idle", [0]);
        sprite.add("walk", [6, 7, 8], 12);
        sprite.add("jump", [9]);
        sprite.add("spinjump", [2, 3, 4, 5], 12);
        sprite.play("idle");
        graphic = sprite;
        layer = -2550;
    }

    public override function update()
    {
        var onGround = isOnGround();

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

        if(onGround)
        {
          velY = 0;
          isSpinJumping = false;
          if(Input.pressed(Key.Z))
          {
            velY = -JUMP_POWER;
            if(Input.check(Key.RIGHT) || Input.check(Key.LEFT))
            {
              isSpinJumping = true;
            }
          }
        }
        else
        {
          velY += GRAVITY;
          velY = Math.min(velY, TERMINAL_VELOCITY);
        }

        moveBy(velX, velY, "walls");

        if(!onGround)
        {
          if(isSpinJumping)
          {
            sprite.play('spinjump');
          }
          else
          {
            sprite.play('jump');
          }
        }
        else if(onGround)
        {
          if (velX != 0)
          {
            sprite.play('walk');
          }
          else
          {
            sprite.play('idle');
          }
        }

        super.update();
    }

    private function isOnGround()
    {
      return collide("walls", x, y + 1) != null;
    }

}
