#ifndef INCLUDED_entities_Bullet
#define INCLUDED_entities_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Bullet)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(Float x,Float y,Float velX,Float velY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Bullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bullet_obj > __new(Float x,Float y,Float velX,Float velY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09"); }

		static void __boot();
		static int BULLET_POWER;
		Float velX;
		Float velY;
		::com::haxepunk::Sfx hitSfx;
		virtual bool moveCollideX( ::com::haxepunk::Entity e);

		virtual bool moveCollideY( ::com::haxepunk::Entity e);

		virtual Void update( );

};

} // end namespace entities

#endif /* INCLUDED_entities_Bullet */ 
