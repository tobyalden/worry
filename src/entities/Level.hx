package entities;

import com.haxepunk.tmx.TmxEntity;

class Level extends TmxEntity
{

  private var filename:String;

  public function new(filename:String)
  {
      super(filename);
      loadGraphic("graphics/tiles.png", ["main"]);
      loadMask("main", "walls");
      name = "level";
  }
  
}
