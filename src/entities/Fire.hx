package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Sfx;
import scenes.GameScene;
import entities.Player;

class Fire extends ActiveEntity
{
    public function new(x:Float, y:Float)
    {
        super(x, y-32);
        setHitbox(32, 48, 0, 0);
        sprite = new Spritemap("graphics/fire.png", 32, 32);
        sprite.add("idle", [1, 2, 3], 12);
        sprite.play("idle");
        graphic = sprite;
        health = 9999;
        invincible = true;
        type = "enemy";
    }
}
