package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("graphics/debug/console_debug.png", "graphics/debug/console_debug.png");
			type.set ("graphics/debug/console_debug.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_hidden.png", "graphics/debug/console_hidden.png");
			type.set ("graphics/debug/console_hidden.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_logo.png", "graphics/debug/console_logo.png");
			type.set ("graphics/debug/console_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_output.png", "graphics/debug/console_output.png");
			type.set ("graphics/debug/console_output.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_pause.png", "graphics/debug/console_pause.png");
			type.set ("graphics/debug/console_pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_play.png", "graphics/debug/console_play.png");
			type.set ("graphics/debug/console_play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_step.png", "graphics/debug/console_step.png");
			type.set ("graphics/debug/console_step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/debug/console_visible.png", "graphics/debug/console_visible.png");
			type.set ("graphics/debug/console_visible.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/preloader/haxepunk.png", "graphics/preloader/haxepunk.png");
			type.set ("graphics/preloader/haxepunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("font/04B_03__.ttf", "font/04B_03__.ttf");
			type.set ("font/04B_03__.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("font/04B_03__.ttf.png", "font/04B_03__.ttf.png");
			type.set ("font/04B_03__.ttf.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/block.png", "graphics/block.png");
			type.set ("graphics/block.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/bubble.png", "graphics/bubble.png");
			type.set ("graphics/bubble.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/enemies.png", "graphics/enemies.png");
			type.set ("graphics/enemies.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/hopper.png", "graphics/hopper.png");
			type.set ("graphics/hopper.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/old_player.png", "graphics/old_player.png");
			type.set ("graphics/old_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/player.png", "graphics/player.png");
			type.set ("graphics/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("graphics/tiles.png", "graphics/tiles.png");
			type.set ("graphics/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("audio/hit.wav", "audio/hit.wav");
			type.set ("audio/hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/jump.wav", "audio/jump.wav");
			type.set ("audio/jump.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/land.wav", "audio/land.wav");
			type.set ("audio/land.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/shoot.wav", "audio/shoot.wav");
			type.set ("audio/shoot.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/spinjump.wav", "audio/spinjump.wav");
			type.set ("audio/spinjump.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/walk.wav", "audio/walk.wav");
			type.set ("audio/walk.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("maps/sanctum.tmx", "maps/sanctum.tmx");
			type.set ("maps/sanctum.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
