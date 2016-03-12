package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.Sfx;

class Bullet extends Entity
{

    public static inline var BULLET_POWER = 10;

    private var velX:Float;
    private var velY:Float;

    private var hitSfx:Sfx;

    public function new(x:Float, y:Float, velX:Float, velY:Float)
    {
        super(x, y);
        this.velX = velX;
        this.velY = velY;
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

    public override function moveCollideY(e:Entity)
    {
        scene.remove(this);
        hitSfx.play();
        return true;
    }

    public override function update()
    {
        super.update();
        moveBy(velX, velY, "walls");
        var enemy = collide('enemy', x, y);
        if(enemy != null)
        {
          cast(enemy, ActiveEntity).damage(BULLET_POWER);
          scene.remove(this);
        }
    }
}
