#ifndef INCLUDED_com_haxepunk_Tween
#define INCLUDED_com_haxepunk_Tween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Tween_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef Tween_obj OBJ_;
		Tween_obj();
		Void __construct(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Tween")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tween_obj > __new(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tween_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tween","\x4b","\x1a","\x9e","\xac"); }

		bool active;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Float set_percent( Float value);
		Dynamic set_percent_dyn();

		Float scale;
		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		::com::haxepunk::TweenType _type;
		Dynamic _ease;
		Dynamic &_ease_dyn() { return _ease;}
		Float _t;
		Float _time;
		Float _target;
		Dynamic _callback;
		Dynamic &_callback_dyn() { return _callback;}
		bool _finish;
		::com::haxepunk::Tweener _parent;
		Dynamic _prev;
		Dynamic _next;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Tween */ 
