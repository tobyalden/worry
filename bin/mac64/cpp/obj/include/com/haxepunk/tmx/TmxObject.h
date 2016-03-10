#ifndef INCLUDED_com_haxepunk_tmx_TmxObject
#define INCLUDED_com_haxepunk_tmx_TmxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxObject)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxObjectGroup)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxObject_obj OBJ_;
		TmxObject_obj();
		Void __construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxObject_obj > __new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxObject","\xde","\xa8","\x94","\x59"); }

		::com::haxepunk::tmx::TmxObjectGroup group;
		::String name;
		::String type;
		int x;
		int y;
		int width;
		int height;
		int gid;
		::com::haxepunk::tmx::TmxPropertySet custom;
		::com::haxepunk::tmx::TmxPropertySet shared;
		::com::haxepunk::masks::Hitbox shapeMask;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxObject */ 
