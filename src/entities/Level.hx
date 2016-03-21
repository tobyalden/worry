package entities;

import com.haxepunk.tmx.TmxEntity;
import com.haxepunk.tmx.TmxMap;
import com.haxepunk.Entity;
import entities.Hopper;

class Level extends TmxEntity
{

  public var entities:Array<Entity>;

  public function new(filename:String)
  {
      super(filename);
      entities = new Array<Entity>();
      loadGraphic("graphics/tiles.png", ["main"]);
      loadMask("main", "walls");
      map = TmxMap.loadFromFile(filename);
      for(entity in map.getObjectGroup("entities").objects)
      {
        if(entity.type == "hopper")
        {
          entities.push(new Hopper(entity.x, entity.y));
        }
        if(entity.type == "pinkbrother")
        {
          entities.push(new PinkBrother(entity.x, entity.y));
        }
        if(entity.type == "brute")
        {
          entities.push(new Brute(entity.x, entity.y));
        }
        if(entity.type == "lustdemon")
        {
          entities.push(new LustDemon(entity.x, entity.y));
        }
      }
      name = "level";
  }

}
