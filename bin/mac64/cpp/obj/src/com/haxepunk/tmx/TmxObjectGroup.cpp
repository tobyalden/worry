#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxObjectGroup_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxObjectGroup","new",0xd47757fb,"com.haxepunk.tmx.TmxObjectGroup.new","com/haxepunk/tmx/TmxObjectGroup.hx",23,0xb5da2ad4)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(24)
	::com::haxepunk::tmx::TmxPropertySet tmp = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->properties = tmp;
	HX_STACK_LINE(25)
	this->objects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	this->map = parent;
	HX_STACK_LINE(28)
	::String tmp1 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->name = tmp1;
	HX_STACK_LINE(29)
	bool tmp2 = source->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	if ((tmp2)){
		HX_STACK_LINE(29)
		::String tmp4 = source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		tmp3 = ::Std_obj::parseInt(tmp4);
	}
	else{
		HX_STACK_LINE(29)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(29)
	this->x = tmp3;
	HX_STACK_LINE(30)
	bool tmp4 = source->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	if ((tmp4)){
		HX_STACK_LINE(30)
		::String tmp6 = source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		tmp5 = ::Std_obj::parseInt(tmp6);
	}
	else{
		HX_STACK_LINE(30)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(30)
	this->y = tmp5;
	HX_STACK_LINE(31)
	::com::haxepunk::tmx::TmxMap tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	this->width = tmp6->width;
	HX_STACK_LINE(32)
	::com::haxepunk::tmx::TmxMap tmp7 = this->map;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	this->height = tmp7->height;
	HX_STACK_LINE(33)
	bool tmp8 = source->has->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	if ((tmp8)){
		HX_STACK_LINE(33)
		::String tmp10 = source->att->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		tmp9 = (tmp11 == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(33)
		tmp9 = false;
	}
	HX_STACK_LINE(33)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	if ((tmp9)){
		HX_STACK_LINE(33)
		tmp10 = true;
	}
	else{
		HX_STACK_LINE(33)
		tmp10 = false;
	}
	HX_STACK_LINE(33)
	this->visible = tmp10;
	HX_STACK_LINE(34)
	bool tmp11 = source->has->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	if ((tmp11)){
		HX_STACK_LINE(34)
		::String tmp13 = source->att->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		tmp12 = ::Std_obj::parseFloat(tmp13);
	}
	else{
		HX_STACK_LINE(34)
		tmp12 = (int)0;
	}
	HX_STACK_LINE(34)
	this->opacity = tmp12;
	HX_STACK_LINE(37)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::_List::ListIterator tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::List tmp14 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(38)
			::List _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(38)
			tmp13 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(38)
		::_List::ListIterator _g = tmp13;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		while((true)){
			HX_STACK_LINE(38)
			bool tmp14 = (_g->head != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(38)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(38)
			if ((tmp15)){
				HX_STACK_LINE(38)
				break;
			}
			HX_STACK_LINE(38)
			Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				Dynamic tmp17 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(38)
				_g->val = tmp17;
				HX_STACK_LINE(38)
				Dynamic tmp18 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(38)
				_g->head = tmp18;
				HX_STACK_LINE(38)
				tmp16 = _g->val;
			}
			HX_STACK_LINE(38)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp16));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(39)
			::com::haxepunk::tmx::TmxPropertySet tmp17 = this->properties;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(39)
			::haxe::xml::Fast tmp18 = node1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(39)
			tmp17->extend(tmp18);
		}
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::_List::ListIterator tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::List tmp14 = source->nodes->resolve(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			::List _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(42)
			tmp13 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(42)
		::_List::ListIterator _g = tmp13;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp14 = (_g->head != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			if ((tmp15)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				Dynamic tmp17 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(42)
				_g->val = tmp17;
				HX_STACK_LINE(42)
				Dynamic tmp18 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(42)
				_g->head = tmp18;
				HX_STACK_LINE(42)
				tmp16 = _g->val;
			}
			HX_STACK_LINE(42)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp16));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(43)
			::com::haxepunk::tmx::TmxObject tmp17 = ::com::haxepunk::tmx::TmxObject_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(43)
			this->objects->push(tmp17);
		}
	}
}
;
	return null();
}

//TmxObjectGroup_obj::~TmxObjectGroup_obj() { }

Dynamic TmxObjectGroup_obj::__CreateEmpty() { return  new TmxObjectGroup_obj; }
hx::ObjectPtr< TmxObjectGroup_obj > TmxObjectGroup_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{  hx::ObjectPtr< TmxObjectGroup_obj > _result_ = new TmxObjectGroup_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TmxObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxObjectGroup_obj > _result_ = new TmxObjectGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TmxObjectGroup_obj::TmxObjectGroup_obj()
{
}

void TmxObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxObjectGroup);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void TmxObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic TmxObjectGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::com::haxepunk::tmx::TmxMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxObjectGroup_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TmxObjectGroup_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TmxObjectGroup_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TmxObjectGroup_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TmxObjectGroup_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObjectGroup_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxObjectGroup_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxObjectGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxObjectGroup_obj::__mClass;

void TmxObjectGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxObjectGroup","\x89","\x3e","\x5f","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxObjectGroup_obj >;
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
