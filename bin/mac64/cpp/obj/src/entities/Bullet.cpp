#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_entities_Bullet
#include <entities/Bullet.h>
#endif
namespace entities{

Void Bullet_obj::__construct(Float x,Float y,Float velX,Float velY)
{
HX_STACK_FRAME("entities.Bullet","new",0x7278c561,"entities.Bullet.new","entities/Bullet.hx",18,0x8bff390e)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(velX,"velX")
HX_STACK_ARG(velY,"velY")
{
	HX_STACK_LINE(19)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(20)
	this->velX = velX;
	HX_STACK_LINE(21)
	this->velY = velY;
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		int originX = (int)0;		HX_STACK_VAR(originX,"originX");
		HX_STACK_LINE(22)
		int originY = (int)0;		HX_STACK_VAR(originY,"originY");
		HX_STACK_LINE(22)
		this->width = (int)3;
		HX_STACK_LINE(22)
		this->height = (int)3;
		HX_STACK_LINE(22)
		this->originX = originX;
		HX_STACK_LINE(22)
		this->originY = originY;
	}
	HX_STACK_LINE(23)
	this->set_type(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
	HX_STACK_LINE(24)
	::com::haxepunk::graphics::Image tmp2 = ::com::haxepunk::graphics::Image_obj::createRect((int)3,(int)3,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->set_graphic(tmp2);
	HX_STACK_LINE(25)
	::com::haxepunk::Sfx tmp3 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/hit.wav","\x18","\x10","\x38","\x70"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->hitSfx = tmp3;
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(Float x,Float y,Float velX,Float velY)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(x,y,velX,velY);
	return _result_;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool Bullet_obj::moveCollideX( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("entities.Bullet","moveCollideX",0x8c6a5a2a,"entities.Bullet.moveCollideX","entities/Bullet.hx",29,0x8bff390e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(30)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	tmp->remove(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(31)
	::com::haxepunk::Sfx tmp1 = this->hitSfx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	tmp1->play(null(),null(),null());
	HX_STACK_LINE(32)
	return true;
}


bool Bullet_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("entities.Bullet","moveCollideY",0x8c6a5a2b,"entities.Bullet.moveCollideY","entities/Bullet.hx",36,0x8bff390e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(37)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	tmp->remove(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(38)
	::com::haxepunk::Sfx tmp1 = this->hitSfx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	tmp1->play(null(),null(),null());
	HX_STACK_LINE(39)
	return true;
}


Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("entities.Bullet","update",0xf550e7a8,"entities.Bullet.update","entities/Bullet.hx",43,0x8bff390e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->super::update();
		HX_STACK_LINE(45)
		Float tmp = this->velX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Float tmp1 = this->velY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromLeft(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		this->moveBy(tmp,tmp1,tmp2,null());
	}
return null();
}


int Bullet_obj::BULLET_POWER;


Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(velX,"velX");
	HX_MARK_MEMBER_NAME(velY,"velY");
	HX_MARK_MEMBER_NAME(hitSfx,"hitSfx");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velX,"velX");
	HX_VISIT_MEMBER_NAME(velY,"velY");
	HX_VISIT_MEMBER_NAME(hitSfx,"hitSfx");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velX") ) { return velX; }
		if (HX_FIELD_EQ(inName,"velY") ) { return velY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitSfx") ) { return hitSfx; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"velX") ) { velX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velY") ) { velY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitSfx") ) { hitSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("hitSfx","\xf2","\x83","\x1c","\x57"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Bullet_obj,velX),HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,velY),HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Bullet_obj,hitSfx),HX_HCSTRING("hitSfx","\xf2","\x83","\x1c","\x57")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Bullet_obj::BULLET_POWER,HX_HCSTRING("BULLET_POWER","\xe8","\x26","\x0e","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("velX","\x5b","\x2f","\x4c","\x4e"),
	HX_HCSTRING("velY","\x5c","\x2f","\x4c","\x4e"),
	HX_HCSTRING("hitSfx","\xf2","\x83","\x1c","\x57"),
	HX_HCSTRING("moveCollideX","\x4b","\x77","\x0b","\x5e"),
	HX_HCSTRING("moveCollideY","\x4c","\x77","\x0b","\x5e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bullet_obj::BULLET_POWER,"BULLET_POWER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bullet_obj::BULLET_POWER,"BULLET_POWER");
};

#endif

hx::Class Bullet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BULLET_POWER","\xe8","\x26","\x0e","\xc3"),
	::String(null()) };

void Bullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Bullet","\xef","\x80","\xb8","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
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

void Bullet_obj::__boot()
{
	BULLET_POWER= (int)1;
}

} // end namespace entities
