#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#define INCLUDED_com_haxepunk_utils_JoyButtonState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,JoyButtonState)
namespace com{
namespace haxepunk{
namespace utils{


class JoyButtonState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JoyButtonState_obj OBJ_;

	public:
		JoyButtonState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("com.haxepunk.utils.JoyButtonState","\x61","\x5b","\x7a","\x16"); }
		::String __ToString() const { return HX_HCSTRING("JoyButtonState.","\xa3","\xa2","\xaa","\xe7") + tag; }

		static ::com::haxepunk::utils::JoyButtonState BUTTON_OFF;
		static inline ::com::haxepunk::utils::JoyButtonState BUTTON_OFF_dyn() { return BUTTON_OFF; }
		static ::com::haxepunk::utils::JoyButtonState BUTTON_ON;
		static inline ::com::haxepunk::utils::JoyButtonState BUTTON_ON_dyn() { return BUTTON_ON; }
		static ::com::haxepunk::utils::JoyButtonState BUTTON_PRESSED;
		static inline ::com::haxepunk::utils::JoyButtonState BUTTON_PRESSED_dyn() { return BUTTON_PRESSED; }
		static ::com::haxepunk::utils::JoyButtonState BUTTON_RELEASED;
		static inline ::com::haxepunk::utils::JoyButtonState BUTTON_RELEASED_dyn() { return BUTTON_RELEASED; }
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_JoyButtonState */ 
