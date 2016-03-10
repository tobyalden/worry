#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxPropertySet_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","new",0x45c860c8,"com.haxepunk.tmx.TmxPropertySet.new","com/haxepunk/tmx/TmxPropertySet.hx",14,0x4cbefaa7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		tmp = tmp2;
	}
	HX_STACK_LINE(16)
	this->keys = tmp;
}
;
	return null();
}

//TmxPropertySet_obj::~TmxPropertySet_obj() { }

Dynamic TmxPropertySet_obj::__CreateEmpty() { return  new TmxPropertySet_obj; }
hx::ObjectPtr< TmxPropertySet_obj > TmxPropertySet_obj::__new()
{  hx::ObjectPtr< TmxPropertySet_obj > _result_ = new TmxPropertySet_obj();
	_result_->__construct();
	return _result_;}

Dynamic TmxPropertySet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxPropertySet_obj > _result_ = new TmxPropertySet_obj();
	_result_->__construct();
	return _result_;}

::String TmxPropertySet_obj::resolve( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","resolve",0x0c08f754,"com.haxepunk.tmx.TmxPropertySet.resolve","com/haxepunk/tmx/TmxPropertySet.hx",23,0x4cbefaa7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,resolve,return )

bool TmxPropertySet_obj::has( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","has",0x45c3cfc2,"com.haxepunk.tmx.TmxPropertySet.has","com/haxepunk/tmx/TmxPropertySet.hx",28,0x4cbefaa7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,has,return )

Void TmxPropertySet_obj::extend( ::haxe::xml::Fast source){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxPropertySet","extend",0xd59e7272,"com.haxepunk.tmx.TmxPropertySet.extend","com/haxepunk/tmx/TmxPropertySet.hx",33,0x4cbefaa7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(34)
		::haxe::xml::Fast prop;		HX_STACK_VAR(prop,"prop");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::List tmp1 = source->nodes->resolve(HX_HCSTRING("property","\x55","\x48","\x38","\xac"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				tmp = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(35)
			::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				if ((tmp2)){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(35)
					_g->val = tmp4;
					HX_STACK_LINE(35)
					Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					_g->head = tmp5;
					HX_STACK_LINE(35)
					tmp3 = _g->val;
				}
				HX_STACK_LINE(35)
				::haxe::xml::Fast prop1 = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(prop1,"prop1");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::String tmp4 = prop1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(37)
					::String key = tmp4;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(37)
					::String tmp5 = prop1->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(37)
					::String value = tmp5;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(37)
					::haxe::ds::StringMap tmp6 = this->keys;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(37)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(37)
					::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(37)
					tmp6->set(tmp7,tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxPropertySet_obj,extend,(void))


TmxPropertySet_obj::TmxPropertySet_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void TmxPropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxPropertySet);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void TmxPropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

Dynamic TmxPropertySet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extend") ) { return extend_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic TmxPropertySet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void TmxPropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxPropertySet_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("extend","\xda","\xd1","\x1a","\xc7"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxPropertySet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxPropertySet_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxPropertySet_obj::__mClass;

void TmxPropertySet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxPropertySet","\xd6","\x9c","\xce","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxPropertySet_obj >;
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
