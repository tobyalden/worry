package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

class Bullet extends Entity
{
    private var speed:Float;
    public function new(x:Float, y:Float, speed:Float)
    {
        super(x, y);
        this.speed = speed;
        graphic = Image.createRect(3, 3);
        setHitbox(3, 3);
        type = "bullet";
    }

    public override function moveCollideX(e:Entity)
    {
        scene.remove(this);
        return true;
    }

    public override function update()
    {
        super.update();
        moveBy(speed, 0, "walls");
    }
}
