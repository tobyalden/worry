#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Data
#include <com/haxepunk/utils/Data.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_SharedObject
#include <openfl/_legacy/net/SharedObject.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Data_obj::__construct()
{
	return null();
}

//Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hx::ObjectPtr< Data_obj > Data_obj::__new()
{  hx::ObjectPtr< Data_obj > _result_ = new Data_obj();
	_result_->__construct();
	return _result_;}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Data_obj > _result_ = new Data_obj();
	_result_->__construct();
	return _result_;}

::String Data_obj::id;

Void Data_obj::load( ::String __o_file){
::String file = __o_file.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("com.haxepunk.utils.Data","load",0xbd0bee54,"com.haxepunk.utils.Data.load","com/haxepunk/utils/Data.hx",20,0x33f835fd)
	HX_STACK_ARG(file,"file")
{
		HX_STACK_LINE(21)
		::String tmp = file;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		Dynamic tmp1 = ::com::haxepunk::utils::Data_obj::loadData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(22)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(22)
		::com::haxepunk::utils::Data_obj::_data = tmp2;
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp3);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(23)
			while((true)){
				HX_STACK_LINE(23)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(23)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(23)
				if ((tmp5)){
					HX_STACK_LINE(23)
					break;
				}
				HX_STACK_LINE(23)
				::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(23)
				::String str = tmp6;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(23)
				++(_g);
				HX_STACK_LINE(23)
				Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(23)
				::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(23)
				Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(23)
				Dynamic value = tmp9;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(23)
				::haxe::ds::StringMap tmp10 = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(23)
				::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(23)
				Dynamic tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(23)
				tmp10->set(tmp11,tmp12);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,load,(void))

Void Data_obj::save( ::String __o_file,hx::Null< bool >  __o_overwrite){
::String file = __o_file.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("com.haxepunk.utils.Data","save",0xc1a1df6b,"com.haxepunk.utils.Data.save","com/haxepunk/utils/Data.hx",32,0x33f835fd)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(33)
		::openfl::_legacy::net::SharedObject tmp = ::com::haxepunk::utils::Data_obj::_shared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(33)
			::openfl::_legacy::net::SharedObject tmp2 = ::com::haxepunk::utils::Data_obj::_shared;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			tmp2->clear();
		}
		HX_STACK_LINE(34)
		::String tmp2 = file;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Dynamic tmp3 = ::com::haxepunk::utils::Data_obj::loadData(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Dynamic data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(35)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(36)
		bool tmp4 = overwrite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		if ((tmp4)){
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp5);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				if ((tmp7)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				::String tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				::String str1 = tmp8;		HX_STACK_VAR(str1,"str1");
				HX_STACK_LINE(37)
				++(_g);
				HX_STACK_LINE(37)
				Dynamic tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				::String tmp10 = str1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				::Reflect_obj::deleteField(tmp9,tmp10);
			}
		}
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp5 = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Dynamic tmp6 = tmp5->keys();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String str1 = __it->next();
			{
				HX_STACK_LINE(38)
				Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				::String tmp8 = str1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				::haxe::ds::StringMap tmp9 = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				::String tmp10 = str1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				::Reflect_obj::setField(tmp7,tmp8,tmp12);
			}
;
		}
		HX_STACK_LINE(43)
		::openfl::_legacy::net::SharedObject tmp7 = ::com::haxepunk::utils::Data_obj::_shared;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		tmp7->flush((int)10000);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,save,(void))

int Data_obj::readInt( ::String name,hx::Null< int >  __o_defaultValue){
int defaultValue = __o_defaultValue.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Data","readInt",0x3e49afcb,"com.haxepunk.utils.Data.readInt","com/haxepunk/utils/Data.hx",54,0x33f835fd)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(defaultValue,"defaultValue")
{
		HX_STACK_LINE(55)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = defaultValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Dynamic tmp2 = ::com::haxepunk::utils::Data_obj::read(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,readInt,return )

bool Data_obj::readBool( ::String name,hx::Null< bool >  __o_defaultValue){
bool defaultValue = __o_defaultValue.Default(true);
	HX_STACK_FRAME("com.haxepunk.utils.Data","readBool",0x3d9061ce,"com.haxepunk.utils.Data.readBool","com/haxepunk/utils/Data.hx",65,0x33f835fd)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(defaultValue,"defaultValue")
{
		HX_STACK_LINE(66)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = defaultValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Dynamic tmp2 = ::com::haxepunk::utils::Data_obj::read(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,readBool,return )

::String Data_obj::readString( ::String name,::String __o_defaultValue){
::String defaultValue = __o_defaultValue.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("com.haxepunk.utils.Data","readString",0xbad2b775,"com.haxepunk.utils.Data.readString","com/haxepunk/utils/Data.hx",76,0x33f835fd)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(defaultValue,"defaultValue")
{
		HX_STACK_LINE(77)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::String tmp1 = defaultValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		Dynamic tmp2 = ::com::haxepunk::utils::Data_obj::read(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,readString,return )

Dynamic Data_obj::read( ::String name,Dynamic defaultValue){
	HX_STACK_FRAME("com.haxepunk.utils.Data","read",0xc0fb9f84,"com.haxepunk.utils.Data.read","com/haxepunk/utils/Data.hx",87,0x33f835fd)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(defaultValue,"defaultValue")
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	if ((tmp4)){
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp5 = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		return tmp8;
	}
	HX_STACK_LINE(89)
	Dynamic tmp5 = defaultValue;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,read,return )

Void Data_obj::write( ::String name,Dynamic value){
{
		HX_STACK_FRAME("com.haxepunk.utils.Data","write",0x04cec0f1,"com.haxepunk.utils.Data.write","com/haxepunk/utils/Data.hx",99,0x33f835fd)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(99)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(99)
		::haxe::ds::StringMap tmp = ::com::haxepunk::utils::Data_obj::_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Dynamic tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		tmp->set(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,write,(void))

Dynamic Data_obj::loadData( ::String file){
	HX_STACK_FRAME("com.haxepunk.utils.Data","loadData",0x87802a9e,"com.haxepunk.utils.Data.loadData","com/haxepunk/utils/Data.hx",104,0x33f835fd)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(105)
	bool tmp = (file == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	if ((tmp)){
		HX_STACK_LINE(105)
		file = HX_HCSTRING("_file","\x5b","\xea","\xcc","\xf6");
	}
	HX_STACK_LINE(106)
	::String tmp1 = ::com::haxepunk::utils::Data_obj::id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	if ((tmp2)){
		HX_STACK_LINE(106)
		::String tmp3 = HX_HCSTRING("HaxePunk/","\x47","\x16","\xd6","\x3d");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		::String tmp4 = ::com::haxepunk::utils::Data_obj::id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		::String tmp6 = (tmp5 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		::String tmp7 = file;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		::openfl::_legacy::net::SharedObject tmp9 = ::openfl::_legacy::net::SharedObject_obj::getLocal(tmp8,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		::com::haxepunk::utils::Data_obj::_shared = tmp9;
	}
	else{
		HX_STACK_LINE(107)
		::String tmp3 = HX_HCSTRING("HaxePunk/","\x47","\x16","\xd6","\x3d");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::String tmp4 = file;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::openfl::_legacy::net::SharedObject tmp6 = ::openfl::_legacy::net::SharedObject_obj::getLocal(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		::com::haxepunk::utils::Data_obj::_shared = tmp6;
	}
	HX_STACK_LINE(108)
	::openfl::_legacy::net::SharedObject tmp3 = ::com::haxepunk::utils::Data_obj::_shared;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	Dynamic tmp4 = tmp3->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,loadData,return )

::openfl::_legacy::net::SharedObject Data_obj::_shared;

::String Data_obj::_dir;

::haxe::ds::StringMap Data_obj::_data;

::String Data_obj::PREFIX;

::String Data_obj::DEFAULT_FILE;

int Data_obj::SIZE;


Data_obj::Data_obj()
{
}

bool Data_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = id; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_dir") ) { outValue = _dir; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { outValue = write_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_data") ) { outValue = _data; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { outValue = readInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_shared") ) { outValue = _shared; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readBool") ) { outValue = readBool_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadData") ) { outValue = loadData_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { outValue = readString_dyn(); return true;  }
	}
	return false;
}

bool Data_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast< ::String >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_dir") ) { _dir=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shared") ) { _shared=ioValue.Cast< ::openfl::_legacy::net::SharedObject >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Data_obj::id,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::_legacy::net::SharedObject*/ ,(void *) &Data_obj::_shared,HX_HCSTRING("_shared","\x44","\x70","\xa2","\x8b")},
	{hx::fsString,(void *) &Data_obj::_dir,HX_HCSTRING("_dir","\x4e","\x82","\x17","\x3f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Data_obj::_data,HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsString,(void *) &Data_obj::PREFIX,HX_HCSTRING("PREFIX","\x92","\x85","\x39","\x61")},
	{hx::fsString,(void *) &Data_obj::DEFAULT_FILE,HX_HCSTRING("DEFAULT_FILE","\x1a","\x9e","\x1b","\x24")},
	{hx::fsInt,(void *) &Data_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::id,"id");
	HX_MARK_MEMBER_NAME(Data_obj::_shared,"_shared");
	HX_MARK_MEMBER_NAME(Data_obj::_dir,"_dir");
	HX_MARK_MEMBER_NAME(Data_obj::_data,"_data");
	HX_MARK_MEMBER_NAME(Data_obj::PREFIX,"PREFIX");
	HX_MARK_MEMBER_NAME(Data_obj::DEFAULT_FILE,"DEFAULT_FILE");
	HX_MARK_MEMBER_NAME(Data_obj::SIZE,"SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::id,"id");
	HX_VISIT_MEMBER_NAME(Data_obj::_shared,"_shared");
	HX_VISIT_MEMBER_NAME(Data_obj::_dir,"_dir");
	HX_VISIT_MEMBER_NAME(Data_obj::_data,"_data");
	HX_VISIT_MEMBER_NAME(Data_obj::PREFIX,"PREFIX");
	HX_VISIT_MEMBER_NAME(Data_obj::DEFAULT_FILE,"DEFAULT_FILE");
	HX_VISIT_MEMBER_NAME(Data_obj::SIZE,"SIZE");
};

#endif

hx::Class Data_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readBool","\xa0","\x5e","\x13","\x69"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("loadData","\x70","\x27","\x03","\xb3"),
	HX_HCSTRING("_shared","\x44","\x70","\xa2","\x8b"),
	HX_HCSTRING("_dir","\x4e","\x82","\x17","\x3f"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("PREFIX","\x92","\x85","\x39","\x61"),
	HX_HCSTRING("DEFAULT_FILE","\x1a","\x9e","\x1b","\x24"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	::String(null()) };

void Data_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Data","\x00","\x7b","\xfc","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Data_obj::__GetStatic;
	__mClass->mSetStaticField = &Data_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Data_obj >;
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

void Data_obj::__boot()
{
	id= HX_HCSTRING("","\x00","\x00","\x00","\x00");
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Data.hx",114,0x33f835fd)
		{
			HX_STACK_LINE(114)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			return tmp1;
		}
		return null();
	}
};
	_data= _Function_0_1::Block();
	PREFIX= HX_HCSTRING("HaxePunk","\xe8","\x34","\x58","\x2f");
	DEFAULT_FILE= HX_HCSTRING("_file","\x5b","\xea","\xcc","\xf6");
	SIZE= (int)10000;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
