#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#define INCLUDED_com_haxepunk_graphics_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Canvas_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Canvas_obj OBJ_;
		Canvas_obj();
		Void __construct(int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.Canvas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Canvas_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Canvas_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Canvas","\xf8","\xc8","\xd6","\xec"); }

		::openfl::_legacy::display::BlendMode blend;
		Float angle;
		Float scale;
		Float scaleX;
		Float scaleY;
		virtual Void render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);

		virtual Void draw( Float x,Float y,::openfl::_legacy::display::BitmapData source,::openfl::_legacy::geom::Rectangle rect);
		Dynamic draw_dyn();

		virtual Void fill( ::openfl::_legacy::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic fill_dyn();

		virtual Void drawRect( ::openfl::_legacy::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic drawRect_dyn();

		virtual Void fillTexture( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::display::BitmapData texture);
		Dynamic fillTexture_dyn();

		virtual Void drawGraphic( int x,int y,::com::haxepunk::Graphic source);
		Dynamic drawGraphic_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Void shift( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic shift_dyn();

		int width;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int height;
		virtual int get_height( );
		Dynamic get_height_dyn();

		Array< ::Dynamic > _buffers;
		Array< ::Dynamic > _midBuffers;
		bool _redrawBuffers;
		int _width;
		int _height;
		int _maxWidth;
		int _maxHeight;
		int _color;
		Float _alpha;
		::openfl::_legacy::geom::ColorTransform _tint;
		::openfl::_legacy::geom::ColorTransform _colorTransform;
		::openfl::_legacy::geom::Matrix _matrix;
		Float _red;
		Float _green;
		Float _blue;
		::openfl::_legacy::display::BitmapData _ref;
		int _refWidth;
		int _refHeight;
		::openfl::_legacy::geom::Rectangle _rect;
		::openfl::_legacy::display::Graphics _graphics;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Canvas */ 
