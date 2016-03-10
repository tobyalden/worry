#ifndef INCLUDED_entities_ActiveEntity
#define INCLUDED_entities_ActiveEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS1(entities,ActiveEntity)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  ActiveEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef ActiveEntity_obj OBJ_;
		ActiveEntity_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.ActiveEntity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ActiveEntity_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ActiveEntity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ActiveEntity","\xa9","\xad","\x49","\x2d"); }

		Float velX;
		Float velY;
		int health;
		::com::haxepunk::graphics::Spritemap sprite;
		virtual Void update( );

		virtual Void unstuck( );
		Dynamic unstuck_dyn();

		virtual bool isOnGround( );
		Dynamic isOnGround_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_ActiveEntity */ 
