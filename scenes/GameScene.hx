package scenes;

import com.haxepunk.Scene;
import entities.Player;
import entities.Level;

class GameScene extends Scene
{

    public var currentLevel:String;

    public function new()
    {
        super();
        currentLevel = "maps/sanctum.tmx";
    }

    public override function begin()
    {
        add(new Player());
        add(new Level(currentLevel));
    }

    public override function update()
    {
      super.update();
    }
}
