#ifndef INCLUDED_com_haxepunk_tmx_TmxVec4
#define INCLUDED_com_haxepunk_tmx_TmxVec4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxVec4)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxVec4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxVec4_obj OBJ_;
		TmxVec4_obj();
		Void __construct(Float x,Float y,Float width,Float height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.tmx.TmxVec4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxVec4_obj > __new(Float x,Float y,Float width,Float height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxVec4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TmxVec4","\xbf","\x3b","\x2c","\x8b"); }

		Float x;
		Float y;
		Float width;
		Float height;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxVec4 */ 
