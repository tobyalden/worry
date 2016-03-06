package scenes;

import com.haxepunk.Scene;
import entities.Player;
import entities.Map;

class GameScene extends Scene
{

    public function new()
    {
        super();
    }

    public override function begin()
    {
        add(new Player(30, 50));
        add(new Map("maps/sanctum.tmx"));
    }
}
