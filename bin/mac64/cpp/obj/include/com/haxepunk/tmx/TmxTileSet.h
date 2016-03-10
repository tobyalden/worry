#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#define INCLUDED_com_haxepunk_tmx_TmxTileSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxTileSet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxTileSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxTileSet_obj OBJ_;
		TmxTileSet_obj();
		Void __construct(::haxe::xml::Fast data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxTileSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxTileSet_obj > __new(::haxe::xml::Fast data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxTileSet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxTileSet","\x15","\xea","\xaa","\xcb"); }

		Array< ::Dynamic > _tileProps;
		::openfl::_legacy::display::BitmapData _image;
		int firstGID;
		::String name;
		int tileWidth;
		int tileHeight;
		int spacing;
		int margin;
		::String imageSource;
		int numTiles;
		int numRows;
		int numCols;
		virtual ::openfl::_legacy::display::BitmapData get_image( );
		Dynamic get_image_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_image( ::openfl::_legacy::display::BitmapData v);
		Dynamic set_image_dyn();

		virtual bool hasGid( int gid);
		Dynamic hasGid_dyn();

		virtual int fromGid( int gid);
		Dynamic fromGid_dyn();

		virtual int toGid( int id);
		Dynamic toGid_dyn();

		virtual ::com::haxepunk::tmx::TmxPropertySet getPropertiesByGid( int gid);
		Dynamic getPropertiesByGid_dyn();

		virtual ::com::haxepunk::tmx::TmxPropertySet getProperties( int id);
		Dynamic getProperties_dyn();

		virtual ::openfl::_legacy::geom::Rectangle getRect( int id);
		Dynamic getRect_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxTileSet */ 
