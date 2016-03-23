package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.Sfx;
import scenes.GameScene;
import entities.Player;

class PowerUp extends Entity
{

    private var sprite:Spritemap;

    public function new(x:Float, y:Float)
    {
        super(x, y-64);
        setHitbox(73, 82, 0, 0);
        sprite = new Spritemap("graphics/powerups.png", 73, 82);
        sprite.add("idle", [0, 1, 2], 3);
        sprite.play("idle");
        graphic = sprite;
        type = "powerup";
    }

    public override function update()
    {
        super.update();
        /*var player:Entity = scene.getInstance('player');*/
    }
}
