#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxEntity_Map_Impl_
#include <com/haxepunk/tmx/_TmxEntity/Map_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxEntity{

Void Map_Impl__obj::__construct()
{
	return null();
}

//Map_Impl__obj::~Map_Impl__obj() { }

Dynamic Map_Impl__obj::__CreateEmpty() { return  new Map_Impl__obj; }
hx::ObjectPtr< Map_Impl__obj > Map_Impl__obj::__new()
{  hx::ObjectPtr< Map_Impl__obj > _result_ = new Map_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Map_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_Impl__obj > _result_ = new Map_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::tmx::TmxMap Map_Impl__obj::_new( ::com::haxepunk::tmx::TmxMap map){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","_new",0xd4a355f6,"com.haxepunk.tmx._TmxEntity.Map_Impl_._new","com/haxepunk/tmx/TmxEntity.hx",15,0xb1c5c725)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(15)
	::com::haxepunk::tmx::TmxMap tmp = map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,_new,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::toMap( ::com::haxepunk::tmx::TmxMap this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","toMap",0x5248fdac,"com.haxepunk.tmx._TmxEntity.Map_Impl_.toMap","com/haxepunk/tmx/TmxEntity.hx",16,0xb1c5c725)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(16)
	::com::haxepunk::tmx::TmxMap tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toMap,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromString",0x76a68c30,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromString","com/haxepunk/tmx/TmxEntity.hx",19,0xb1c5c725)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(19)
	::com::haxepunk::tmx::TmxMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::haxe::xml::Fast tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			::String tmp3 = ::openfl::_legacy::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			::Xml tmp4 = ::Xml_obj::parse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(19)
			::Xml xml = tmp4;		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(19)
			::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			::haxe::xml::Fast f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(19)
			tmp1 = f;
		}
		HX_STACK_LINE(19)
		::com::haxepunk::tmx::TmxMap tmp2 = ::com::haxepunk::tmx::TmxMap_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::com::haxepunk::tmx::TmxMap map = tmp2;		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(19)
		tmp = map;
	}
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromString,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromTmxMap( ::com::haxepunk::tmx::TmxMap map){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromTmxMap",0xd915d65c,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromTmxMap","com/haxepunk/tmx/TmxEntity.hx",22,0xb1c5c725)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(22)
	::com::haxepunk::tmx::TmxMap tmp = map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromTmxMap,return )

::com::haxepunk::tmx::TmxMap Map_Impl__obj::fromMapData( ::haxe::xml::Fast mapData){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxEntity.Map_Impl_","fromMapData",0x897f9aa7,"com.haxepunk.tmx._TmxEntity.Map_Impl_.fromMapData","com/haxepunk/tmx/TmxEntity.hx",25,0xb1c5c725)
	HX_STACK_ARG(mapData,"mapData")
	HX_STACK_LINE(25)
	::com::haxepunk::tmx::TmxMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::com::haxepunk::tmx::TmxMap tmp1 = ::com::haxepunk::tmx::TmxMap_obj::__new(mapData);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::com::haxepunk::tmx::TmxMap map = tmp1;		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(25)
		tmp = map;
	}
	HX_STACK_LINE(25)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromMapData,return )


Map_Impl__obj::Map_Impl__obj()
{
}

bool Map_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { outValue = toMap_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromTmxMap") ) { outValue = fromTmxMap_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromMapData") ) { outValue = fromMapData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Map_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toMap","\xe1","\xbb","\x14","\x14"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromTmxMap","\x07","\x78","\xe3","\xb6"),
	HX_HCSTRING("fromMapData","\x9c","\x6e","\x9f","\xbf"),
	::String(null()) };

void Map_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx._TmxEntity.Map_Impl_","\xf9","\xe7","\x81","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Map_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Map_Impl__obj >;
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
} // end namespace tmx
} // end namespace _TmxEntity
