package entities;

import com.haxepunk.tmx.TmxEntity;

class Level extends TmxEntity
{
  public function new(filename:String)
  {
      super(filename);
      loadGraphic("graphics/tiles.png", ["main"]);
      loadMask("main", "walls");
  }
}
