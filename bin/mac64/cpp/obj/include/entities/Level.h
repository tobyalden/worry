#ifndef INCLUDED_entities_Level
#define INCLUDED_entities_Level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#include <com/haxepunk/tmx/TmxEntity.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxEntity)
HX_DECLARE_CLASS1(entities,Level)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Level_obj : public ::com::haxepunk::tmx::TmxEntity_obj{
	public:
		typedef ::com::haxepunk::tmx::TmxEntity_obj super;
		typedef Level_obj OBJ_;
		Level_obj();
		Void __construct(::String filename);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Level")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Level_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Level","\x64","\x85","\x90","\x05"); }

		Array< ::Dynamic > entities;
};

} // end namespace entities

#endif /* INCLUDED_entities_Level */ 
