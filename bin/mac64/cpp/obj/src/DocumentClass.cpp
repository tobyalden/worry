#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void DocumentClass_obj::__construct(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_FRAME("DocumentClass","new",0x4aeb0a6f,"DocumentClass.new","ApplicationMain.hx",217,0x0780ded5)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(frameRate,"frameRate")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(renderMode,"renderMode")
{
	HX_STACK_LINE(217)
	Dynamic tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	Dynamic tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	Dynamic tmp2 = frameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	Dynamic tmp3 = fixed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	::com::haxepunk::RenderMode tmp4 = renderMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//DocumentClass_obj::~DocumentClass_obj() { }

Dynamic DocumentClass_obj::__CreateEmpty() { return  new DocumentClass_obj; }
hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new(Dynamic width,Dynamic height,Dynamic frameRate,Dynamic fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct(width,height,frameRate,fixed,renderMode);
	return _result_;}

Dynamic DocumentClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::_legacy::display::Stage DocumentClass_obj::get_stage( ){
	HX_STACK_FRAME("DocumentClass","get_stage",0xea357664,"DocumentClass.get_stage","ApplicationMain.hx",286,0x0780ded5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}



DocumentClass_obj::DocumentClass_obj()
{
}

Dynamic DocumentClass_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#endif

hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DocumentClass","\xfd","\xa6","\x03","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DocumentClass_obj >;
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

