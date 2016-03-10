#ifndef INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD
#define INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,XBOX_GAMEPAD)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  XBOX_GAMEPAD_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XBOX_GAMEPAD_obj OBJ_;
		XBOX_GAMEPAD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.utils.XBOX_GAMEPAD")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XBOX_GAMEPAD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XBOX_GAMEPAD_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XBOX_GAMEPAD","\x95","\x79","\x2e","\xf0"); }

		static void __boot();
		static int A_BUTTON;
		static int B_BUTTON;
		static int X_BUTTON;
		static int Y_BUTTON;
		static int LB_BUTTON;
		static int RB_BUTTON;
		static int BACK_BUTTON;
		static int START_BUTTON;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int XBOX_BUTTON;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD */ 
