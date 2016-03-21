package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Sfx;
import scenes.GameScene;
import entities.Player;

class LustDemon extends ActiveEntity
{
    public static inline var ACTIVE_RANGE = 250;
    public static inline var SPEED = 0.025;
    public static inline var MAX_VELOCITY = 0.6;

    private var chasing:Bool;

    public function new(x:Float, y:Float)
    {
        super(x, y-64);
        setHitbox(100, 100, 0, 0);
        chasing = false;
        sprite = new Spritemap("graphics/lust_demon.png", 100, 100);
        sprite.add("idle", [0, 1, 2, 3, 4], 10);
        sprite.play("idle");
        graphic = sprite;
        health = 1000;
        type = "enemy";
    }

    public override function update()
    {
        super.update();
        var player:Entity = scene.getInstance('player');

        if(chasing || distanceFrom(player) < ACTIVE_RANGE)
        {
          chasing = true;
          if(centerX < player.centerX)
          {
            velX += SPEED;
          }
          else
          {
            velX -= SPEED;
            sprite.flipped = true;
          }
          if(y < player.y)
          {
            velY += SPEED;
            sprite.flipped = false;
          }
          else
          {
            velY -= SPEED;
          }

          if(velX > MAX_VELOCITY)
          {
            velX = MAX_VELOCITY;
          }
          if(velY > MAX_VELOCITY)
          {
            velY = MAX_VELOCITY;
          }
        }

        moveBy(velX, velY, "none");
    }

}
