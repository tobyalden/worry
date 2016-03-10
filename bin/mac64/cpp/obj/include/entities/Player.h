#ifndef INCLUDED_entities_Player
#define INCLUDED_entities_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,ActiveEntity)
HX_DECLARE_CLASS1(entities,Player)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::entities::ActiveEntity_obj{
	public:
		typedef ::entities::ActiveEntity_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		static void __boot();
		static Float GRAVITY;
		static int TERMINAL_VELOCITY;
		static Float RUN_SPEED;
		static int JUMP_POWER;
		static int JUMP_CANCEL_VELOCITY;
		static Float STANDING_JUMP_SPEED_PERCENTAGE;
		static int BULLET_SPEED;
		static int GAME_START_X;
		static int GAME_START_Y;
		static bool DEBUG;
		bool onGround;
		bool isSpinJumping;
		bool isLookingUp;
		::com::haxepunk::Sfx walkSfx;
		::com::haxepunk::Sfx jumpSfx;
		::com::haxepunk::Sfx spinJumpSfx;
		::com::haxepunk::Sfx landSfx;
		::com::haxepunk::Sfx shootSfx;
		virtual bool moveCollideY( ::com::haxepunk::Entity e);

		virtual Void update( );

		virtual Void animate( );
		Dynamic animate_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Player */ 
