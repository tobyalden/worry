#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif

Void Main_obj::__construct(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",4,0x087e5c05)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(frameRate,"frameRate")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(renderMode,"renderMode")
{
	HX_STACK_LINE(4)
	Dynamic tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4)
	Dynamic tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4)
	Dynamic tmp2 = frameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	Dynamic tmp3 = fixed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(4)
	::com::haxepunk::RenderMode tmp4 = renderMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(4)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct(width,height,frameRate,fixed,renderMode);
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",12,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		::scenes::GameScene tmp = ::scenes::GameScene_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		::com::haxepunk::Scene value = tmp;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(12)
		::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		::com::haxepunk::Scene tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		tmp1->set_scene(tmp2);
	}
return null();
}


Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",15,0x087e5c05)
		HX_STACK_LINE(15)
		::Main_obj::__new(null(),null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

