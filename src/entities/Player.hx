package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

class Player extends Entity
{
    public function new(x:Int, y:Int)
    {
        super(x, y);
        setHitbox(32, 32);
        graphic = new Image("graphics/block.png");
    }

    public override function update()
    {
        if (Input.check(Key.LEFT))
        {
            moveBy(-2, 0, "walls");
        }

        if (Input.check(Key.RIGHT))
        {
            moveBy(2, 0, "walls");
        }

        super.update();
    }

}
