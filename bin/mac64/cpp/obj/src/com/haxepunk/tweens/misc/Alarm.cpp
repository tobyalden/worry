#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{

Void Alarm_obj::__construct(Float duration,Dynamic complete,::com::haxepunk::TweenType type)
{
HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","new",0x545d5cee,"com.haxepunk.tweens.misc.Alarm.new","com/haxepunk/tweens/misc/Alarm.hx",17,0x83867e82)
HX_STACK_THIS(this)
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(complete,"complete")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(18)
	Float tmp = duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::com::haxepunk::TweenType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	Dynamic tmp2 = complete;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	super::__construct(tmp,tmp1,tmp2,null());
}
;
	return null();
}

//Alarm_obj::~Alarm_obj() { }

Dynamic Alarm_obj::__CreateEmpty() { return  new Alarm_obj; }
hx::ObjectPtr< Alarm_obj > Alarm_obj::__new(Float duration,Dynamic complete,::com::haxepunk::TweenType type)
{  hx::ObjectPtr< Alarm_obj > _result_ = new Alarm_obj();
	_result_->__construct(duration,complete,type);
	return _result_;}

Dynamic Alarm_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Alarm_obj > _result_ = new Alarm_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Alarm_obj::reset( Float duration){
{
		HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","reset",0x79b895dd,"com.haxepunk.tweens.misc.Alarm.reset","com/haxepunk/tweens/misc/Alarm.hx",26,0x83867e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(27)
		this->_target = duration;
		HX_STACK_LINE(28)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Alarm_obj,reset,(void))

Float Alarm_obj::get_elapsed( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_elapsed",0x4d18c2e1,"com.haxepunk.tweens.misc.Alarm.get_elapsed","com/haxepunk/tweens/misc/Alarm.hx",35,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Float tmp = this->_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_elapsed,return )

Float Alarm_obj::get_duration( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_duration",0x8f5b350f,"com.haxepunk.tweens.misc.Alarm.get_duration","com/haxepunk/tweens/misc/Alarm.hx",41,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Float tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_duration,return )

Float Alarm_obj::get_remaining( ){
	HX_STACK_FRAME("com.haxepunk.tweens.misc.Alarm","get_remaining",0xb475a4db,"com.haxepunk.tweens.misc.Alarm.get_remaining","com/haxepunk/tweens/misc/Alarm.hx",47,0x83867e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	Float tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = this->_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Alarm_obj,get_remaining,return )


Alarm_obj::Alarm_obj()
{
}

Dynamic Alarm_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { if (inCallProp == hx::paccAlways) return get_elapsed(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == hx::paccAlways) return get_duration(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"remaining") ) { if (inCallProp == hx::paccAlways) return get_remaining(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_elapsed") ) { return get_elapsed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_remaining") ) { return get_remaining_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void Alarm_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("remaining","\xf6","\xc6","\xc1","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("get_elapsed","\x53","\xf8","\xba","\x40"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	HX_HCSTRING("get_remaining","\xcd","\x9a","\x25","\x7d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alarm_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alarm_obj::__mClass,"__mClass");
};

#endif

hx::Class Alarm_obj::__mClass;

void Alarm_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tweens.misc.Alarm","\xfc","\x0d","\x9d","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Alarm_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc
