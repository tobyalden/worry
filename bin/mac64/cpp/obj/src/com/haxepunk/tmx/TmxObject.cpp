#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
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
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
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
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxObject_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxObject","new",0x50e660c8,"com.haxepunk.tmx.TmxObject.new","com/haxepunk/tmx/TmxObject.hx",29,0x3a748509)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(30)
	this->group = parent;
	HX_STACK_LINE(31)
	bool tmp = source->has->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp)){
		HX_STACK_LINE(31)
		tmp1 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	}
	else{
		HX_STACK_LINE(31)
		tmp1 = HX_HCSTRING("[object]","\xc3","\xf9","\x3d","\xd7");
	}
	HX_STACK_LINE(31)
	this->name = tmp1;
	HX_STACK_LINE(32)
	bool tmp2 = source->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	if ((tmp2)){
		HX_STACK_LINE(32)
		tmp3 = source->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	}
	else{
		HX_STACK_LINE(32)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(32)
	this->type = tmp3;
	HX_STACK_LINE(33)
	::String tmp4 = source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->x = tmp5;
	HX_STACK_LINE(34)
	::String tmp6 = source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	this->y = tmp7;
	HX_STACK_LINE(35)
	bool tmp8 = source->has->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	if ((tmp8)){
		HX_STACK_LINE(35)
		::String tmp10 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		tmp9 = ::Std_obj::parseInt(tmp10);
	}
	else{
		HX_STACK_LINE(35)
		tmp9 = (int)0;
	}
	HX_STACK_LINE(35)
	this->width = tmp9;
	HX_STACK_LINE(36)
	bool tmp10 = source->has->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(36)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	if ((tmp10)){
		HX_STACK_LINE(36)
		::String tmp12 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		tmp11 = ::Std_obj::parseInt(tmp12);
	}
	else{
		HX_STACK_LINE(36)
		tmp11 = (int)0;
	}
	HX_STACK_LINE(36)
	this->height = tmp11;
	HX_STACK_LINE(38)
	this->shared = null();
	HX_STACK_LINE(39)
	this->gid = (int)-1;
	HX_STACK_LINE(40)
	bool tmp12 = source->has->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(40)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(40)
	if ((tmp12)){
		HX_STACK_LINE(40)
		::String tmp14 = source->att->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(40)
		::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(40)
		int tmp16 = tmp15.length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(40)
		tmp13 = (tmp16 != (int)0);
	}
	else{
		HX_STACK_LINE(40)
		tmp13 = false;
	}
	HX_STACK_LINE(40)
	if ((tmp13)){
		HX_STACK_LINE(42)
		::String tmp14 = source->att->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		this->gid = tmp15;
		HX_STACK_LINE(43)
		::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			::com::haxepunk::tmx::TmxObjectGroup tmp16 = this->group;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(44)
			Array< ::Dynamic > _g1 = tmp16->map->tilesets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp17 = (_g < _g1->length);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(44)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(44)
				if ((tmp18)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::com::haxepunk::tmx::TmxTileSet tmp19 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(44)
				::com::haxepunk::tmx::TmxTileSet set1 = tmp19;		HX_STACK_VAR(set1,"set1");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(46)
				int tmp20 = this->gid;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				::com::haxepunk::tmx::TmxPropertySet tmp21 = set1->getPropertiesByGid(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(46)
				this->shared = tmp21;
				HX_STACK_LINE(47)
				::com::haxepunk::tmx::TmxPropertySet tmp22 = this->shared;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(47)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(47)
				if ((tmp23)){
					HX_STACK_LINE(48)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(53)
	::Xml node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(54)
	::com::haxepunk::tmx::TmxPropertySet tmp14 = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	this->custom = tmp14;
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::_List::ListIterator tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::List tmp16 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(55)
			::List _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(55)
			tmp15 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(55)
		::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(55)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(55)
			if ((tmp17)){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				_g->val = tmp19;
				HX_STACK_LINE(55)
				Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(55)
				_g->head = tmp20;
				HX_STACK_LINE(55)
				tmp18 = _g->val;
			}
			HX_STACK_LINE(55)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp18));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(56)
			::com::haxepunk::tmx::TmxPropertySet tmp19 = this->custom;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(56)
			::haxe::xml::Fast tmp20 = node1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(56)
			tmp19->extend(tmp20);
		}
	}
	HX_STACK_LINE(59)
	bool tmp15 = source->hasNode->resolve(HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(59)
	if ((tmp15)){
		HX_STACK_LINE(60)
		int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		if ((tmp18)){
			HX_STACK_LINE(60)
			tmp19 = this->width;
		}
		else{
			HX_STACK_LINE(60)
			tmp19 = this->height;
		}
		HX_STACK_LINE(60)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		int radius = tmp21;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(61)
		int tmp22 = radius;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(61)
		int tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(61)
		int tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(61)
		::com::haxepunk::masks::Circle tmp25 = ::com::haxepunk::masks::Circle_obj::__new(tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(61)
		this->shapeMask = tmp25;
	}
	else{
		HX_STACK_LINE(69)
		int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(69)
		int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(69)
		int tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(69)
		int tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(69)
		::com::haxepunk::masks::Hitbox tmp20 = ::com::haxepunk::masks::Hitbox_obj::__new(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(69)
		this->shapeMask = tmp20;
	}
}
;
	return null();
}

//TmxObject_obj::~TmxObject_obj() { }

Dynamic TmxObject_obj::__CreateEmpty() { return  new TmxObject_obj; }
hx::ObjectPtr< TmxObject_obj > TmxObject_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxObjectGroup parent)
{  hx::ObjectPtr< TmxObject_obj > _result_ = new TmxObject_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TmxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxObject_obj > _result_ = new TmxObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TmxObject_obj::TmxObject_obj()
{
}

void TmxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxObject);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(shapeMask,"shapeMask");
	HX_MARK_END_CLASS();
}

void TmxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(shapeMask,"shapeMask");
}

Dynamic TmxObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"shared") ) { return shared; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeMask") ) { return shapeMask; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::com::haxepunk::tmx::TmxObjectGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeMask") ) { shapeMask=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));
	outFields->push(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"));
	outFields->push(HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d"));
	outFields->push(HX_HCSTRING("shapeMask","\xad","\xf4","\x32","\xe3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxObjectGroup*/ ,(int)offsetof(TmxObject_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsString,(int)offsetof(TmxObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(TmxObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TmxObject_obj,gid),HX_HCSTRING("gid","\x02","\x84","\x4e","\x00")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObject_obj,custom),HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxObject_obj,shared),HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(TmxObject_obj,shapeMask),HX_HCSTRING("shapeMask","\xad","\xf4","\x32","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"),
	HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),
	HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d"),
	HX_HCSTRING("shapeMask","\xad","\xf4","\x32","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxObject_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxObject_obj::__mClass;

void TmxObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxObject","\xd6","\x9c","\xec","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxObject_obj >;
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
