#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxMap_MapData_Impl_
#include <com/haxepunk/tmx/_TmxMap/MapData_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{
namespace _TmxMap{

Void MapData_Impl__obj::__construct()
{
	return null();
}

//MapData_Impl__obj::~MapData_Impl__obj() { }

Dynamic MapData_Impl__obj::__CreateEmpty() { return  new MapData_Impl__obj; }
hx::ObjectPtr< MapData_Impl__obj > MapData_Impl__obj::__new()
{  hx::ObjectPtr< MapData_Impl__obj > _result_ = new MapData_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic MapData_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapData_Impl__obj > _result_ = new MapData_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::xml::Fast MapData_Impl__obj::_new( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","_new",0x9f954063,"com.haxepunk.tmx._TmxMap.MapData_Impl_._new","com/haxepunk/tmx/TmxMap.hx",19,0xb8c773b8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(19)
	::haxe::xml::Fast tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,_new,return )

::haxe::xml::Fast MapData_Impl__obj::toMap( ::haxe::xml::Fast this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","toMap",0x1b04329f,"com.haxepunk.tmx._TmxMap.MapData_Impl_.toMap","com/haxepunk/tmx/TmxMap.hx",20,0xb8c773b8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	::haxe::xml::Fast tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,toMap,return )

::haxe::xml::Fast MapData_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromString",0xdf87865d,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromString","com/haxepunk/tmx/TmxMap.hx",23,0xb8c773b8)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(23)
	::haxe::xml::Fast tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		::haxe::xml::Fast tmp3 = ::haxe::xml::Fast_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::haxe::xml::Fast f = tmp3;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(23)
		tmp = f;
	}
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromString,return )

::haxe::xml::Fast MapData_Impl__obj::fromXml( ::Xml xml){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromXml",0x92cf60cb,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromXml","com/haxepunk/tmx/TmxMap.hx",26,0xb8c773b8)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(26)
	::haxe::xml::Fast tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxe::xml::Fast tmp1 = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::haxe::xml::Fast f = tmp1;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(26)
		tmp = f;
	}
	HX_STACK_LINE(26)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromXml,return )

::haxe::xml::Fast MapData_Impl__obj::fromByteArray( ::openfl::_legacy::utils::ByteArray ba){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxMap.MapData_Impl_","fromByteArray",0x132ee365,"com.haxepunk.tmx._TmxMap.MapData_Impl_.fromByteArray","com/haxepunk/tmx/TmxMap.hx",29,0xb8c773b8)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(29)
	::haxe::xml::Fast tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String tmp1 = ba->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::haxe::xml::Fast tmp3 = ::haxe::xml::Fast_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::haxe::xml::Fast f = tmp3;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(29)
		tmp = f;
	}
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapData_Impl__obj,fromByteArray,return )


MapData_Impl__obj::MapData_Impl__obj()
{
}

bool MapData_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { outValue = toMap_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromByteArray") ) { outValue = fromByteArray_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapData_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapData_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class MapData_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toMap","\xe1","\xbb","\x14","\x14"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromXml","\x8d","\x3e","\x06","\x58"),
	HX_HCSTRING("fromByteArray","\xa7","\x7e","\xad","\x2f"),
	::String(null()) };

void MapData_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx._TmxMap.MapData_Impl_","\xac","\x14","\x52","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MapData_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MapData_Impl__obj >;
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
} // end namespace _TmxMap
