package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;

class HUD extends Entity
{

    private var text:Text;

    public function new()
    {
      super(2874, 2160);
      text = new Text();
      text.addStyle("health", {color: 0xFFFFFF, size: text.size, bold: true});
      /*text.addStyle("red", {color: 0xFF0000, size: text.size * 2, bold: true});*/
      text.setTextProperty('richText', true);
      text.richText = "<health>100</health>";
      graphic = text;
    }

    override public function update()
    {
      super.update();
      var player:Entity = scene.getInstance('player');
      x = player.centerX - text.textWidth/2;
      y = player.y - 5;
      text.richText = "<health>" + cast(player, Player).health + "</health>";
    }
}
