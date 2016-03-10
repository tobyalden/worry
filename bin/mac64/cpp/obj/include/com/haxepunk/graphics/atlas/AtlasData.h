#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#define INCLUDED_com_haxepunk_graphics_atlas_AtlasData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  AtlasData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasData_obj OBJ_;
		AtlasData_obj();
		Void __construct(::openfl::_legacy::display::BitmapData bd,::String name,Dynamic flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.atlas.AtlasData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AtlasData_obj > __new(::openfl::_legacy::display::BitmapData bd,::String name,Dynamic flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AtlasData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AtlasData","\xf5","\xb0","\x24","\x32"); }

		static void __boot();
		static int BLEND_NONE;
		static int BLEND_ADD;
		static int BLEND_NORMAL;
		static int BLEND_MULTIPLY;
		static int BLEND_SCREEN;
		static ::com::haxepunk::graphics::atlas::AtlasData getAtlasDataByName( ::String name,hx::Null< bool >  create);
		static Dynamic getAtlasDataByName_dyn();

		static Void startScene( ::com::haxepunk::Scene scene);
		static Dynamic startScene_dyn();

		static ::com::haxepunk::graphics::atlas::AtlasData active;
		static ::com::haxepunk::graphics::atlas::AtlasData set_active( ::com::haxepunk::graphics::atlas::AtlasData value);
		static Dynamic set_active_dyn();

		static Void destroyAll( );
		static Dynamic destroyAll_dyn();

		static ::com::haxepunk::Scene _scene;
		static ::haxe::ds::StringMap _dataPool;
		static int _uniqueId;
		int width;
		int height;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool reload( ::openfl::_legacy::display::BitmapData bd);
		Dynamic reload_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion createRegion( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point center);
		Dynamic createRegion_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void prepareTileMatrix( ::openfl::_legacy::geom::Rectangle rect,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha,Dynamic smooth);
		Dynamic prepareTileMatrix_dyn();

		virtual Void prepareTile( ::openfl::_legacy::geom::Rectangle rect,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth);
		Dynamic prepareTile_dyn();

		virtual bool get_alpha( );
		Dynamic get_alpha_dyn();

		virtual bool set_alpha( bool value);
		Dynamic set_alpha_dyn();

		virtual bool get_rgb( );
		Dynamic get_rgb_dyn();

		virtual bool set_rgb( bool value);
		Dynamic set_rgb_dyn();

		virtual int get_blend( );
		Dynamic get_blend_dyn();

		virtual int set_blend( int value);
		Dynamic set_blend_dyn();

		::String _name;
		int _layerIndex;
		int _renderFlags;
		bool _flagRGB;
		bool _flagAlpha;
		::openfl::_legacy::display::Tilesheet _tilesheet;
		Array< Float > _data;
		int _dataIndex;
		Array< Float > _smoothData;
		int _smoothDataIndex;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_AtlasData */ 
