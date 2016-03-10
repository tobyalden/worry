#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxOrderedHash_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","new",0x7a6f3056,"com.haxepunk.tmx.TmxOrderedHash.new","com/haxepunk/tmx/TmxOrderedHash.hx",13,0x52b8d6d9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_keys = Array_obj< ::String >::__new();
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
	this->_map = tmp;
}
;
	return null();
}

//TmxOrderedHash_obj::~TmxOrderedHash_obj() { }

Dynamic TmxOrderedHash_obj::__CreateEmpty() { return  new TmxOrderedHash_obj; }
hx::ObjectPtr< TmxOrderedHash_obj > TmxOrderedHash_obj::__new()
{  hx::ObjectPtr< TmxOrderedHash_obj > _result_ = new TmxOrderedHash_obj();
	_result_->__construct();
	return _result_;}

Dynamic TmxOrderedHash_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxOrderedHash_obj > _result_ = new TmxOrderedHash_obj();
	_result_->__construct();
	return _result_;}

Void TmxOrderedHash_obj::set( ::String key,Dynamic value){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","set",0x7a72fb98,"com.haxepunk.tmx.TmxOrderedHash.set","com/haxepunk/tmx/TmxOrderedHash.hx",23,0x52b8d6d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp = this->_map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		if ((tmp3)){
			HX_STACK_LINE(24)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			this->_keys->push(tmp4);
		}
		HX_STACK_LINE(25)
		::haxe::ds::StringMap tmp4 = this->_map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		Dynamic tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxOrderedHash_obj,set,(void))

bool TmxOrderedHash_obj::remove( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","remove",0xfb2d1a0e,"com.haxepunk.tmx.TmxOrderedHash.remove","com/haxepunk/tmx/TmxOrderedHash.hx",29,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(30)
	::String tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->_keys->remove(tmp);
	HX_STACK_LINE(31)
	::haxe::ds::StringMap tmp1 = this->_map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	bool tmp3 = tmp1->remove(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,remove,return )

bool TmxOrderedHash_obj::exists( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","exists",0xb6849ba6,"com.haxepunk.tmx.TmxOrderedHash.exists","com/haxepunk/tmx/TmxOrderedHash.hx",34,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(34)
	::haxe::ds::StringMap tmp = this->_map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,exists,return )

Dynamic TmxOrderedHash_obj::get( ::String key){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","get",0x7a69e08c,"com.haxepunk.tmx.TmxOrderedHash.get","com/haxepunk/tmx/TmxOrderedHash.hx",35,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(35)
	::haxe::ds::StringMap tmp = this->_map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxOrderedHash_obj,get,return )

Dynamic TmxOrderedHash_obj::iterator( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","iterator",0xdab14e38,"com.haxepunk.tmx.TmxOrderedHash.iterator","com/haxepunk/tmx/TmxOrderedHash.hx",38,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	Dynamic tmp = this->_keys->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Dynamic _keys_itr = tmp;		HX_STACK_VAR(_keys_itr,"_keys_itr");
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp1 = this->_map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::haxe::ds::StringMap __map = tmp1;		HX_STACK_VAR(__map,"__map");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_keys_itr,::haxe::ds::StringMap &__map){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxOrderedHash.hx",41,0x52b8d6d9)
			{
				hx::Anon __result = hx::Anon_obj::Create();

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,_keys_itr,::haxe::ds::StringMap,__map)
				int __ArgCount() const { return 0; }
				Dynamic run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/haxepunk/tmx/TmxOrderedHash.hx",42,0x52b8d6d9)
					{
						HX_STACK_LINE(42)
						Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(42)
						{
							HX_STACK_LINE(42)
							::String tmp3 = _keys_itr->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(42)
							::String key = tmp3;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(42)
							::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(42)
							tmp2 = __map->get(tmp4);
						}
						HX_STACK_LINE(42)
						return tmp2;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("next","\xf3","\x84","\x02","\x49") ,  Dynamic(new _Function_2_1(_keys_itr,__map)),true);
				__result->Add(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18") , _keys_itr->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	Dynamic tmp2 = _Function_1_1::Block(_keys_itr,__map);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,iterator,return )

Dynamic TmxOrderedHash_obj::keys( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","keys",0xa4df793e,"com.haxepunk.tmx.TmxOrderedHash.keys","com/haxepunk/tmx/TmxOrderedHash.hx",48,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Dynamic tmp = this->_keys->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,keys,return )

::String TmxOrderedHash_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxOrderedHash","toString",0x7f85d4f6,"com.haxepunk.tmx.TmxOrderedHash.toString","com/haxepunk/tmx/TmxOrderedHash.hx",53,0x52b8d6d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::haxe::ds::StringMap tmp = this->_map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::haxe::ds::StringMap __map = tmp;		HX_STACK_VAR(__map,"__map");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ds::StringMap,__map)
	int __ArgCount() const { return 1; }
	::String run(::String x){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/haxepunk/tmx/TmxOrderedHash.hx",55,0x52b8d6d9)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(55)
			::String tmp1 = (x + HX_HCSTRING(" => ","\x7f","\x53","\x55","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			::String tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			Dynamic tmp3 = __map->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			::String tmp6 = (tmp1 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			return tmp6;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(55)
	::List tmp1 = ::Lambda_obj::map(this->_keys, Dynamic(new _Function_1_1(__map)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	::List pairs = tmp1;		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(56)
	::String tmp2 = pairs->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::String tmp3 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::String tmp4 = (tmp3 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TmxOrderedHash_obj,toString,return )


TmxOrderedHash_obj::TmxOrderedHash_obj()
{
}

void TmxOrderedHash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxOrderedHash);
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void TmxOrderedHash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

Dynamic TmxOrderedHash_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxOrderedHash_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxOrderedHash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"));
	outFields->push(HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TmxOrderedHash_obj,_keys),HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxOrderedHash_obj,_map),HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"),
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxOrderedHash_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxOrderedHash_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxOrderedHash_obj::__mClass;

void TmxOrderedHash_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxOrderedHash","\x64","\x0d","\x97","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxOrderedHash_obj >;
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
