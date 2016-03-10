#ifndef INCLUDED_scenes_GameScene
#define INCLUDED_scenes_GameScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(scenes,GameScene)
namespace scenes{


class HXCPP_CLASS_ATTRIBUTES  GameScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef GameScene_obj OBJ_;
		GameScene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="scenes.GameScene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameScene_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameScene","\xda","\xa7","\xbf","\x4f"); }

		static void __boot();
		static int TILE_WIDTH;
		::String currentLevel;
		virtual Void begin( );

		virtual Void update( );

};

} // end namespace scenes

#endif /* INCLUDED_scenes_GameScene */ 
