#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#include <com/haxepunk/tmx/TmxEntity.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObject
#include <com/haxepunk/tmx/TmxObject.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#include <com/haxepunk/tmx/TmxObjectGroup.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxVec4
#include <com/haxepunk/tmx/TmxVec4.h>
#endif
#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
#ifndef INCLUDED_entities_Hopper
#include <entities/Hopper.h>
#endif
#ifndef INCLUDED_entities_Level
#include <entities/Level.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace entities{

Void Level_obj::__construct(::String filename)
{
HX_STACK_FRAME("entities.Level","new",0x230c83e9,"entities.Level.new","entities/Level.hx",14,0x224f94a8)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
{
	HX_STACK_LINE(15)
	::com::haxepunk::tmx::TmxMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxe::xml::Fast tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			::String tmp2 = filename;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			::String tmp3 = ::openfl::_legacy::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			::Xml tmp4 = ::Xml_obj::parse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(15)
			::Xml xml = tmp4;		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(15)
			::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(15)
			::haxe::xml::Fast f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(15)
			tmp1 = f;
		}
		HX_STACK_LINE(15)
		::com::haxepunk::tmx::TmxMap tmp2 = ::com::haxepunk::tmx::TmxMap_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		::com::haxepunk::tmx::TmxMap map = tmp2;		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(15)
		tmp = map;
	}
	HX_STACK_LINE(15)
	super::__construct(tmp);
	HX_STACK_LINE(16)
	this->entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(17)
	this->loadGraphic(HX_HCSTRING("graphics/tiles.png","\xbc","\xd7","\x18","\xfd"),Array_obj< ::String >::__new().Add(HX_HCSTRING("main","\x39","\x38","\x56","\x48")),null());
	HX_STACK_LINE(18)
	this->loadMask(HX_HCSTRING("main","\x39","\x38","\x56","\x48"),HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"),null());
	HX_STACK_LINE(19)
	::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::com::haxepunk::tmx::TmxMap tmp2 = ::com::haxepunk::tmx::TmxMap_obj::loadFromFile(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	this->map = tmp2;
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		::com::haxepunk::tmx::TmxMap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::com::haxepunk::tmx::TmxObjectGroup tmp4 = tmp3->getObjectGroup(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		Array< ::Dynamic > _g1 = tmp4->objects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		while((true)){
			HX_STACK_LINE(20)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(20)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(20)
			if ((tmp6)){
				HX_STACK_LINE(20)
				break;
			}
			HX_STACK_LINE(20)
			::com::haxepunk::tmx::TmxObject tmp7 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(20)
			::com::haxepunk::tmx::TmxObject entity = tmp7;		HX_STACK_VAR(entity,"entity");
			HX_STACK_LINE(20)
			++(_g);
			HX_STACK_LINE(22)
			bool tmp8 = (entity->type == HX_HCSTRING("hopper","\xf4","\x24","\xf5","\xc8"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(22)
			if ((tmp8)){
				HX_STACK_LINE(24)
				::entities::Hopper tmp9 = ::entities::Hopper_obj::__new(entity->x,entity->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(24)
				this->entities->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(27)
	this->set_name(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
}
;
	return null();
}

//Level_obj::~Level_obj() { }

Dynamic Level_obj::__CreateEmpty() { return  new Level_obj; }
hx::ObjectPtr< Level_obj > Level_obj::__new(::String filename)
{  hx::ObjectPtr< Level_obj > _result_ = new Level_obj();
	_result_->__construct(filename);
	return _result_;}

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level_obj > _result_ = new Level_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(entities,"entities");
	::com::haxepunk::tmx::TmxEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	::com::haxepunk::tmx::TmxEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Level_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#endif

hx::Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Level","\x77","\x5b","\xd8","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Level_obj >;
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
