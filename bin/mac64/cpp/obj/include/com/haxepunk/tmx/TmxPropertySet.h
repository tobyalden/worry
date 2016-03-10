#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#define INCLUDED_com_haxepunk_tmx_TmxPropertySet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxPropertySet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxPropertySet_obj OBJ_;
		TmxPropertySet_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxPropertySet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxPropertySet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxPropertySet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxPropertySet","\xce","\xf3","\x55","\xe0"); }

		virtual ::String resolve( ::String name);
		Dynamic resolve_dyn();

		virtual bool has( ::String name);
		Dynamic has_dyn();

		virtual Void extend( ::haxe::xml::Fast source);
		Dynamic extend_dyn();

		::haxe::ds::StringMap keys;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxPropertySet */ 
