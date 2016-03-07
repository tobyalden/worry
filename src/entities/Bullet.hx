package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.Sfx;

class Bullet extends Entity
{
    private var speed:Float;

    private var hitSfx:Sfx;

    public function new(x:Float, y:Float, speed:Float)
    {
        super(x, y);
        this.speed = speed;
        setHitbox(3, 3);
        type = "bullet";
        graphic = Image.createRect(3, 3);
        hitSfx = new Sfx("audio/hit.wav");
    }

    public override function moveCollideX(e:Entity)
    {
        scene.remove(this);
        hitSfx.play();
        return true;
    }

    public override function update()
    {
        super.update();
        moveBy(speed, 0, "walls");
    }
}
