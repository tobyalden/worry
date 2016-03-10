#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#define INCLUDED_com_haxepunk_tmx_TmxLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxLayer)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxMap)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxTileSet)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxLayer_obj OBJ_;
		TmxLayer_obj();
		Void __construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxLayer_obj > __new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxLayer","\x92","\x40","\xf2","\x76"); }

		static void __boot();
		static Array< ::Dynamic > csvToArray( ::String input);
		static Dynamic csvToArray_dyn();

		static Array< ::Dynamic > base64ToArray( ::String chunk,int lineWidth,bool compressed);
		static Dynamic base64ToArray_dyn();

		static ::String BASE64_CHARS;
		static ::openfl::_legacy::utils::ByteArray base64ToByteArray( ::String data);
		static Dynamic base64ToByteArray_dyn();

		::com::haxepunk::tmx::TmxMap map;
		::String name;
		int x;
		int y;
		int width;
		int height;
		Float opacity;
		bool visible;
		Array< ::Dynamic > tileGIDs;
		::com::haxepunk::tmx::TmxPropertySet properties;
		virtual ::String toCsv( ::com::haxepunk::tmx::TmxTileSet tileSet);
		Dynamic toCsv_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxLayer */ 
