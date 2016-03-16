package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Sfx;
import scenes.GameScene;
import entities.Player;

class Mother extends ActiveEntity
{

    public static inline var BOB_SPEED = 0.05;

    private var bob:Float;

    public function new()
    {
        super(0, 0);
        setHitbox(32, 48, 0, 0);
        sprite = new Spritemap("graphics/mother.png", 32, 48);
        sprite.add("idle", [1]);
        sprite.play("idle");
        graphic = sprite;
        health = 9999;
        bob = 0;
        invincible = true;
        type = "enemy";
    }

    public override function update()
    {
        super.update();
        bob += BOB_SPEED;
        if(bob > Math.PI*2)
        {
          bob -= Math.PI*2;
        }
        var player:Player = cast(scene.getInstance('player'), Player);
        sprite.alpha = player.motherTimer / Player.MOTHER_VISITATION_TIME;
        x = player.x - 30;
        y = player.y - 30 + Math.sin(bob);
    }

}
