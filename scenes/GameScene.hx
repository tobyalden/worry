package scenes;

import com.haxepunk.Scene;
import entities.Player;
import entities.Bullet;
import entities.Level;

class GameScene extends Scene
{

    public static inline var TILE_WIDTH = 32;

    public var currentLevel:String;

    public function new()
    {
        super();
        currentLevel = "maps/sanctum.tmx";
    }

    public override function begin()
    {
        add(new Player());
        var level = new Level(currentLevel);
        add(level);
        for(entity in level.entities)
        {
          add(entity);
          trace('Added ' + entity + " at " + entity.x + " " + entity.y);
        }
    }

    public override function update()
    {
      super.update();
    }
}
