#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx__TmxTileSet_TileSetData_Impl_
#include <com/haxepunk/tmx/_TmxTileSet/TileSetData_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
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
namespace _TmxTileSet{

Void TileSetData_Impl__obj::__construct()
{
	return null();
}

//TileSetData_Impl__obj::~TileSetData_Impl__obj() { }

Dynamic TileSetData_Impl__obj::__CreateEmpty() { return  new TileSetData_Impl__obj; }
hx::ObjectPtr< TileSetData_Impl__obj > TileSetData_Impl__obj::__new()
{  hx::ObjectPtr< TileSetData_Impl__obj > _result_ = new TileSetData_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TileSetData_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSetData_Impl__obj > _result_ = new TileSetData_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::xml::Fast TileSetData_Impl__obj::_new( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","_new",0x77ee2273,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_._new","com/haxepunk/tmx/TmxTileSet.hx",15,0x09536340)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(15)
	::haxe::xml::Fast tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,_new,return )

::haxe::xml::Fast TileSetData_Impl__obj::toMap( ::haxe::xml::Fast this1){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","toMap",0x90711e8f,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.toMap","com/haxepunk/tmx/TmxTileSet.hx",16,0x09536340)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(16)
	::haxe::xml::Fast tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,toMap,return )

::haxe::xml::Fast TileSetData_Impl__obj::fromFast( ::haxe::xml::Fast f){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","fromFast",0x80918f38,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.fromFast","com/haxepunk/tmx/TmxTileSet.hx",19,0x09536340)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(19)
	::haxe::xml::Fast tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,fromFast,return )

::haxe::xml::Fast TileSetData_Impl__obj::fromByteArray( ::openfl::_legacy::utils::ByteArray ba){
	HX_STACK_FRAME("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","fromByteArray",0x32513f55,"com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_.fromByteArray","com/haxepunk/tmx/TmxTileSet.hx",21,0x09536340)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(22)
	::String tmp = ba->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::Xml tmp1 = ::Xml_obj::parse(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::haxe::xml::Fast tmp2 = ::haxe::xml::Fast_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::haxe::xml::Fast f = tmp2;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(23)
	::haxe::xml::Fast tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::xml::Fast tmp4 = f->node->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		::haxe::xml::Fast f1 = tmp4;		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(23)
		tmp3 = f1;
	}
	HX_STACK_LINE(23)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSetData_Impl__obj,fromByteArray,return )


TileSetData_Impl__obj::TileSetData_Impl__obj()
{
}

bool TileSetData_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { outValue = toMap_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFast") ) { outValue = fromFast_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(TileSetData_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSetData_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class TileSetData_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toMap","\xe1","\xbb","\x14","\x14"),
	HX_HCSTRING("fromFast","\x26","\x91","\x81","\xa1"),
	HX_HCSTRING("fromByteArray","\xa7","\x7e","\xad","\x2f"),
	::String(null()) };

void TileSetData_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx._TmxTileSet.TileSetData_Impl_","\x9c","\x6c","\xc4","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TileSetData_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TileSetData_Impl__obj >;
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
} // end namespace _TmxTileSet
