#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
#ifndef INCLUDED_entities_Bullet
#include <entities/Bullet.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace entities{

Void ActiveEntity_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("entities.ActiveEntity","new",0xbc88e3e8,"entities.ActiveEntity.new","entities/ActiveEntity.hx",17,0xcb7a39a7)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(18)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(19)
	this->velX = (int)0;
	HX_STACK_LINE(20)
	this->velY = (int)0;
	HX_STACK_LINE(21)
	this->health = (int)100;
}
;
	return null();
}

//ActiveEntity_obj::~ActiveEntity_obj() { }

Dynamic ActiveEntity_obj::__CreateEmpty() { return  new ActiveEntity_obj; }
hx::ObjectPtr< ActiveEntity_obj > ActiveEntity_obj::__new(Float x,Float y)
{  hx::ObjectPtr< ActiveEntity_obj > _result_ = new ActiveEntity_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic ActiveEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActiveEntity_obj > _result_ = new ActiveEntity_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ActiveEntity_obj::update( ){
{
		HX_STACK_FRAME("entities.ActiveEntity","update",0x82e35781,"entities.ActiveEntity.update","entities/ActiveEntity.hx",25,0xcb7a39a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(28)
			::com::haxepunk::Scene tmp2 = this->_scene;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			tmp2->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(30)
		bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			tmp3 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(30)
			tmp3 = this->x;
		}
		HX_STACK_LINE(30)
		bool tmp4 = this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		if ((tmp4)){
			HX_STACK_LINE(30)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			tmp5 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(30)
			tmp5 = this->y;
		}
		HX_STACK_LINE(30)
		::com::haxepunk::Entity tmp6 = this->collide(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		::com::haxepunk::Entity bullet = tmp6;		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(31)
		bool tmp7 = (bullet != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		if ((tmp7)){
			HX_STACK_LINE(33)
			::entities::Bullet tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			tmp8 = hx::TCast< ::entities::Bullet >::cast(bullet);
			HX_STACK_LINE(33)
			bullet = tmp8;
			HX_STACK_LINE(34)
			hx::SubEq(this->health,(int)1);
			HX_STACK_LINE(35)
			::com::haxepunk::Scene tmp9 = this->_scene;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			::com::haxepunk::Entity tmp10 = bullet;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			tmp9->remove(tmp10);
		}
		HX_STACK_LINE(37)
		this->super::update();
	}
return null();
}


Void ActiveEntity_obj::unstuck( ){
{
		HX_STACK_FRAME("entities.ActiveEntity","unstuck",0xe6e502eb,"entities.ActiveEntity.unstuck","entities/ActiveEntity.hx",43,0xcb7a39a7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp)){
				HX_STACK_LINE(43)
				Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(43)
				::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				tmp1 = (tmp2 + tmp4);
			}
			else{
				HX_STACK_LINE(43)
				tmp1 = this->x;
			}
			HX_STACK_LINE(43)
			bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			if ((tmp2)){
				HX_STACK_LINE(43)
				Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				tmp3 = (tmp4 + tmp6);
			}
			else{
				HX_STACK_LINE(43)
				tmp3 = this->y;
			}
			HX_STACK_LINE(43)
			::com::haxepunk::Entity tmp4 = this->collide(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"),tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			if ((tmp6)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(45)
			this->moveBy((int)0,(int)-32,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ActiveEntity_obj,unstuck,(void))

bool ActiveEntity_obj::isOnGround( ){
	HX_STACK_FRAME("entities.ActiveEntity","isOnGround",0xfc341888,"entities.ActiveEntity.isOnGround","entities/ActiveEntity.hx",50,0xcb7a39a7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(51)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(51)
		tmp1 = this->x;
	}
	HX_STACK_LINE(51)
	bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(51)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		tmp3 = (tmp4 + tmp6);
	}
	else{
		HX_STACK_LINE(51)
		tmp3 = this->y;
	}
	HX_STACK_LINE(51)
	Float tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	::com::haxepunk::Entity tmp5 = this->collide(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"),tmp1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ActiveEntity_obj,isOnGround,return )


ActiveEntity_obj::ActiveEntity_obj()
{
}

void ActiveEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActiveEntity);
	HX_MARK_MEMBER_NAME(velX,"velX");
	HX_MARK_MEMBER_NAME(velY,"velY");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActiveEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velX,"velX");
	HX_VISIT_MEMBER_NAME(velY,"velY");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ActiveEntity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velX") ) { return velX; }
		if (HX_FIELD_EQ(inName,"velY") ) { return velY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unstuck") ) { return unstuck_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnGround") ) { return isOnGround_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActiveEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velX") ) { velX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velY") ) { velY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActiveEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ActiveEntity_obj,velX),HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e")},
	{hx::fsFloat,(int)offsetof(ActiveEntity_obj,velY),HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e")},
	{hx::fsInt,(int)offsetof(ActiveEntity_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(ActiveEntity_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e"),
	HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("unstuck","\x63","\x8b","\xab","\x80"),
	HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActiveEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActiveEntity_obj::__mClass,"__mClass");
};

#endif

hx::Class ActiveEntity_obj::__mClass;

void ActiveEntity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.ActiveEntity","\xf6","\x0f","\x07","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ActiveEntity_obj >;
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

} // end namespace entities
