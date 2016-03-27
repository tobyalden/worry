package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Sfx;
import scenes.GameScene;
import entities.Player;

class LawnMower extends ActiveEntity
{
    public static inline var SPEED = 0.1;

    public function new(x:Float, y:Float)
    {
        super(x, y-64);
        setHitbox(73, 82, 0, 0);
        sprite = new Spritemap("graphics/powerups.png", 73, 82);
        sprite.add("idle", [0, 1, 2], 3);
        sprite.play("idle");
        graphic = sprite;
        type = "enemy";
    }

    public override function update()
    {
        super.update();
        var player:Entity = scene.getInstance('player');

        if(isOnGround())
        {
          velX = 0;
          velY = 0;
          
          if(x < player.x)
          {
            velX = SPEED;
            sprite.flipped = true;
          }
          else
          {
            velX = -SPEED;
            sprite.flipped = false;
          }

        }
        else
        {
          velY += Player.GRAVITY;
        }

        moveBy(velX, velY, "walls");
    }

}
