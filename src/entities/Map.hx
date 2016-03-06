package entities;

import com.haxepunk.tmx.TmxEntity;

class Map extends TmxEntity
{
  public function new(filename:String)
  {
      super(filename);
      loadGraphic("graphics/tiles.png", ["main"]);
      loadMask("collision", "walls");
  }
}
