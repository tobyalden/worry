#ifndef INCLUDED_com_haxepunk_utils_Draw
#define INCLUDED_com_haxepunk_utils_Draw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,utils,Draw)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Draw_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Draw_obj OBJ_;
		Draw_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.utils.Draw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Draw_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Draw_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"); }

		static void __boot();
		static ::openfl::_legacy::display::BlendMode blend;
		static Void init( );
		static Dynamic init_dyn();

		static Void setTarget( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point camera,::openfl::_legacy::display::BlendMode blend);
		static Dynamic setTarget_dyn();

		static Void resetTarget( );
		static Dynamic resetTarget_dyn();

		static Void drawToScreen( );
		static Dynamic drawToScreen_dyn();

		static Void line( int x1,int y1,int x2,int y2,hx::Null< int >  color);
		static Dynamic line_dyn();

		static Void linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< Float >  thick);
		static Dynamic linePlus_dyn();

		static Void rect( int x,int y,int width,int height,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic rect_dyn();

		static Void rectPlus( Float x,Float y,Float width,Float height,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  fill,hx::Null< Float >  thick);
		static Dynamic rectPlus_dyn();

		static Void circle( int x,int y,int radius,hx::Null< int >  color);
		static Dynamic circle_dyn();

		static Void circlePlus( int x,int y,Float radius,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  fill,hx::Null< int >  thick);
		static Dynamic circlePlus_dyn();

		static Void hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  outline,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic hitbox_dyn();

		static Void curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  thick,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic curve_dyn();

		static Void graphic( ::com::haxepunk::Graphic g,hx::Null< int >  x,hx::Null< int >  y,hx::Null< int >  layer);
		static Dynamic graphic_dyn();

		static Void entity( ::com::haxepunk::Entity e,Dynamic x,Dynamic y,Dynamic addEntityPosition);
		static Dynamic entity_dyn();

		static Void text( ::String text,Dynamic x,Dynamic y,Dynamic options);
		static Dynamic text_dyn();

		static ::openfl::_legacy::display::BitmapData _target;
		static ::openfl::_legacy::geom::Point _camera;
		static ::openfl::_legacy::display::Graphics _graphics;
		static ::openfl::_legacy::geom::Rectangle _rect;
		static ::openfl::_legacy::geom::Matrix _matrix;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Draw */ 
