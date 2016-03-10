#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#define INCLUDED_com_haxepunk_tmx_TmxMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxLayer)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxObjectGroup)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxOrderedHash)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxTileSet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxMap_obj OBJ_;
		TmxMap_obj();
		Void __construct(::haxe::xml::Fast data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxMap_obj > __new(::haxe::xml::Fast data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxMap","\x1d","\xe7","\x33","\xa8"); }

		static ::com::haxepunk::tmx::TmxMap loadFromFile( ::String name);
		static Dynamic loadFromFile_dyn();

		::String version;
		::String orientation;
		int width;
		int height;
		int tileWidth;
		int tileHeight;
		int fullWidth;
		int fullHeight;
		::com::haxepunk::tmx::TmxPropertySet properties;
		Array< ::Dynamic > tilesets;
		::com::haxepunk::tmx::TmxOrderedHash layers;
		::haxe::ds::StringMap imageLayers;
		::com::haxepunk::tmx::TmxOrderedHash objectGroups;
		virtual ::com::haxepunk::tmx::TmxLayer getLayer( ::String name);
		Dynamic getLayer_dyn();

		virtual ::com::haxepunk::tmx::TmxObjectGroup getObjectGroup( ::String name);
		Dynamic getObjectGroup_dyn();

		virtual ::com::haxepunk::tmx::TmxTileSet getGidOwner( int gid);
		Dynamic getGidOwner_dyn();

		virtual ::String getGidProperty( int gid,::String property);
		Dynamic getGidProperty_dyn();

		virtual int getTileMapSpacing( ::String name);
		Dynamic getTileMapSpacing_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxMap */ 
