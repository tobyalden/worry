package scenes;

import com.haxepunk.Scene;
import entities.Player;
import entities.Level;

class GameScene extends Scene
{

    private var world:Map<Array<Int>, String>;
    private var worldX:Int;
    private var worldY:Int;

    public function new()
    {
        super();
        world = new Map<Array<Int>, String>();
        world.set([0, 0], "maps/sanctum.tmx");

        worldX = 0;
        worldY = 0;
    }

    public override function begin()
    {
        add(new Player(40, 55));
        add(new Level("maps/sanctum.tmx"));
    }

    public override function update()
    {
      super.update();
    }
}
