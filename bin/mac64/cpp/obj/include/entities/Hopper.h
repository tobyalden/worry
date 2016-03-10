#ifndef INCLUDED_entities_Hopper
#define INCLUDED_entities_Hopper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,ActiveEntity)
HX_DECLARE_CLASS1(entities,Hopper)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Hopper_obj : public ::entities::ActiveEntity_obj{
	public:
		typedef ::entities::ActiveEntity_obj super;
		typedef Hopper_obj OBJ_;
		Hopper_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Hopper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hopper_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hopper_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Hopper","\x14","\x99","\x89","\xfd"); }

		static void __boot();
		static int ACTIVE_RANGE;
		static int JUMP_VEL_X;
		static int JUMP_VEL_Y;
		static int JUMP_COOLDOWN;
		int cooldownTimer;
		virtual Void update( );

		virtual Void jump( Float playerX);
		Dynamic jump_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Hopper */ 
