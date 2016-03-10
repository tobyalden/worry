#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#include <com/haxepunk/tmx/TmxEntity.h>
#endif
#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
#ifndef INCLUDED_entities_Level
#include <entities/Level.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif
namespace scenes{

Void GameScene_obj::__construct()
{
HX_STACK_FRAME("scenes.GameScene","new",0x21d978c5,"scenes.GameScene.new","scenes/GameScene.hx",16,0x706103cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->currentLevel = HX_HCSTRING("maps/sanctum.tmx","\x62","\x56","\x92","\xd9");
}
;
	return null();
}

//GameScene_obj::~GameScene_obj() { }

Dynamic GameScene_obj::__CreateEmpty() { return  new GameScene_obj; }
hx::ObjectPtr< GameScene_obj > GameScene_obj::__new()
{  hx::ObjectPtr< GameScene_obj > _result_ = new GameScene_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameScene_obj > _result_ = new GameScene_obj();
	_result_->__construct();
	return _result_;}

Void GameScene_obj::begin( ){
{
		HX_STACK_FRAME("scenes.GameScene","begin",0x7ce235ce,"scenes.GameScene.begin","scenes/GameScene.hx",22,0x706103cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		::entities::Player tmp = ::entities::Player_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		this->add(tmp);
		HX_STACK_LINE(24)
		::String tmp1 = this->currentLevel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::entities::Level tmp2 = ::entities::Level_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::entities::Level level = tmp2;		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(25)
		::entities::Level tmp3 = level;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		this->add(tmp3);
	}
return null();
}


Void GameScene_obj::update( ){
{
		HX_STACK_FRAME("scenes.GameScene","update",0xb53b6ac4,"scenes.GameScene.update","scenes/GameScene.hx",35,0x706103cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::update();
	}
return null();
}


int GameScene_obj::TILE_WIDTH;


GameScene_obj::GameScene_obj()
{
}

void GameScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScene);
	HX_MARK_MEMBER_NAME(currentLevel,"currentLevel");
	::com::haxepunk::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentLevel,"currentLevel");
	::com::haxepunk::Scene_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameScene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { return currentLevel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(GameScene_obj,currentLevel),HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GameScene_obj::TILE_WIDTH,HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameScene_obj::TILE_WIDTH,"TILE_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameScene_obj::TILE_WIDTH,"TILE_WIDTH");
};

#endif

hx::Class GameScene_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	::String(null()) };

void GameScene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("scenes.GameScene","\x53","\xb2","\x9a","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameScene_obj >;
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

void GameScene_obj::__boot()
{
	TILE_WIDTH= (int)32;
}

} // end namespace scenes
