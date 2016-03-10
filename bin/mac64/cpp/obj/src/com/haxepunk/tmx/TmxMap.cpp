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
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#include <com/haxepunk/tmx/TmxObjectGroup.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxMap_obj::__construct(::haxe::xml::Fast data)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","new",0x33ab5f97,"com.haxepunk.tmx.TmxMap.new","com/haxepunk/tmx/TmxMap.hx",51,0xb8c773b8)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(52)
	::com::haxepunk::tmx::TmxPropertySet tmp = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	this->properties = tmp;
	HX_STACK_LINE(53)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(54)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(56)
	::haxe::xml::Fast tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	source = tmp1;
	HX_STACK_LINE(58)
	this->tilesets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(59)
	::com::haxepunk::tmx::TmxOrderedHash tmp2 = ::com::haxepunk::tmx::TmxOrderedHash_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	this->layers = tmp2;
	HX_STACK_LINE(60)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(60)
	this->imageLayers = tmp3;
	HX_STACK_LINE(61)
	::com::haxepunk::tmx::TmxOrderedHash tmp4 = ::com::haxepunk::tmx::TmxOrderedHash_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	this->objectGroups = tmp4;
	HX_STACK_LINE(63)
	::haxe::xml::Fast tmp5 = source->node->resolve(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	source = tmp5;
	HX_STACK_LINE(66)
	::String tmp6 = source->att->resolve(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	this->version = tmp6;
	HX_STACK_LINE(67)
	::String tmp7 = this->version;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(67)
	if ((tmp8)){
		HX_STACK_LINE(67)
		this->version = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
	}
	HX_STACK_LINE(69)
	::String tmp9 = source->att->resolve(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(69)
	this->orientation = tmp9;
	HX_STACK_LINE(70)
	::String tmp10 = this->orientation;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(70)
	bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(70)
	if ((tmp11)){
		HX_STACK_LINE(70)
		this->orientation = HX_HCSTRING("orthogonal","\x79","\xf9","\xf3","\x18");
	}
	HX_STACK_LINE(72)
	::String tmp12 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(72)
	this->width = tmp13;
	HX_STACK_LINE(73)
	::String tmp14 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(73)
	Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(73)
	this->height = tmp15;
	HX_STACK_LINE(74)
	::String tmp16 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(74)
	Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	this->tileWidth = tmp17;
	HX_STACK_LINE(75)
	::String tmp18 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(75)
	Dynamic tmp19 = ::Std_obj::parseInt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(75)
	this->tileHeight = tmp19;
	HX_STACK_LINE(77)
	int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(77)
	int tmp21 = this->tileWidth;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(77)
	int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(77)
	this->fullWidth = tmp22;
	HX_STACK_LINE(78)
	int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(78)
	int tmp24 = this->tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(78)
	int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(78)
	this->fullHeight = tmp25;
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(81)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(81)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(81)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(81)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(81)
			if ((tmp28)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(81)
				_g->val = tmp30;
				HX_STACK_LINE(81)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(81)
				_g->head = tmp31;
				HX_STACK_LINE(81)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(81)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(82)
			::com::haxepunk::tmx::TmxPropertySet tmp30 = this->properties;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(82)
			::haxe::xml::Fast tmp31 = node1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(82)
			tmp30->extend(tmp31);
		}
	}
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(85)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(85)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(85)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(85)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(85)
			if ((tmp28)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(85)
				_g->val = tmp30;
				HX_STACK_LINE(85)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(85)
				_g->head = tmp31;
				HX_STACK_LINE(85)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(85)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(86)
			::haxe::xml::Fast tmp30 = node1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(86)
			::com::haxepunk::tmx::TmxTileSet tmp31 = ::com::haxepunk::tmx::TmxTileSet_obj::__new(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(86)
			this->tilesets->push(tmp31);
		}
	}
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(89)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(89)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(89)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(89)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(89)
			if ((tmp28)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(89)
				_g->val = tmp30;
				HX_STACK_LINE(89)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(89)
				_g->head = tmp31;
				HX_STACK_LINE(89)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(89)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxOrderedHash tmp30 = this->layers;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxOrderedHash _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(90)
			::String tmp31 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(90)
			::String key = tmp31;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxLayer tmp32 = ::com::haxepunk::tmx::TmxLayer_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxLayer value = tmp32;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(90)
			::String tmp33 = key;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(90)
			bool tmp34 = _this->_map->exists(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(90)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(90)
			if ((tmp35)){
				HX_STACK_LINE(90)
				::String tmp36 = key;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(90)
				_this->_keys->push(tmp36);
			}
			HX_STACK_LINE(90)
			::String tmp36 = key;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(90)
			::com::haxepunk::tmx::TmxLayer tmp37 = value;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(90)
			_this->_map->set(tmp36,tmp37);
		}
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("imagelayer","\x96","\xd8","\x60","\xe8"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(93)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(93)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(93)
			if ((tmp28)){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(93)
				_g->val = tmp30;
				HX_STACK_LINE(93)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(93)
				_g->head = tmp31;
				HX_STACK_LINE(93)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(93)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::_List::ListIterator tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					::List tmp31 = node1->nodes->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(95)
					::List _this = tmp31;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(95)
					tmp30 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(95)
				::_List::ListIterator _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(95)
				while((true)){
					HX_STACK_LINE(95)
					bool tmp31 = (_g1->head != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(95)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(95)
					if ((tmp32)){
						HX_STACK_LINE(95)
						break;
					}
					HX_STACK_LINE(95)
					Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						Dynamic tmp34 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(95)
						_g1->val = tmp34;
						HX_STACK_LINE(95)
						Dynamic tmp35 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(95)
						_g1->head = tmp35;
						HX_STACK_LINE(95)
						tmp33 = _g1->val;
					}
					HX_STACK_LINE(95)
					::haxe::xml::Fast img = ((::haxe::xml::Fast)(tmp33));		HX_STACK_VAR(img,"img");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						::String tmp34 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(97)
						::String key = tmp34;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(97)
						::String tmp35 = img->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(97)
						::String tmp36 = tmp35.substr((int)3,null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(97)
						::String value = tmp36;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(97)
						::haxe::ds::StringMap tmp37 = this->imageLayers;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(97)
						::String tmp38 = key;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(97)
						::String tmp39 = value;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(97)
						tmp37->set(tmp38,tmp39);
					}
				}
			}
		}
	}
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("objectgroup","\x20","\x60","\xf6","\x75"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(102)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(102)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(102)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(102)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(102)
			if ((tmp28)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(102)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(102)
				_g->val = tmp30;
				HX_STACK_LINE(102)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(102)
				_g->head = tmp31;
				HX_STACK_LINE(102)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(102)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxOrderedHash tmp30 = this->objectGroups;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxOrderedHash _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			::String tmp31 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(103)
			::String key = tmp31;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxObjectGroup tmp32 = ::com::haxepunk::tmx::TmxObjectGroup_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxObjectGroup value = tmp32;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(103)
			::String tmp33 = key;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(103)
			bool tmp34 = _this->_map->exists(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(103)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(103)
			if ((tmp35)){
				HX_STACK_LINE(103)
				::String tmp36 = key;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(103)
				_this->_keys->push(tmp36);
			}
			HX_STACK_LINE(103)
			::String tmp36 = key;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(103)
			::com::haxepunk::tmx::TmxObjectGroup tmp37 = value;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(103)
			_this->_map->set(tmp36,tmp37);
		}
	}
}
;
	return null();
}

//TmxMap_obj::~TmxMap_obj() { }

Dynamic TmxMap_obj::__CreateEmpty() { return  new TmxMap_obj; }
hx::ObjectPtr< TmxMap_obj > TmxMap_obj::__new(::haxe::xml::Fast data)
{  hx::ObjectPtr< TmxMap_obj > _result_ = new TmxMap_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic TmxMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxMap_obj > _result_ = new TmxMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::com::haxepunk::tmx::TmxLayer TmxMap_obj::getLayer( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getLayer",0x271a7ac4,"com.haxepunk.tmx.TmxMap.getLayer","com/haxepunk/tmx/TmxMap.hx",115,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(116)
	::com::haxepunk::tmx::TmxOrderedHash tmp = this->layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	::com::haxepunk::tmx::TmxLayer tmp2 = tmp->_map->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	::com::haxepunk::tmx::TmxLayer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getLayer,return )

::com::haxepunk::tmx::TmxObjectGroup TmxMap_obj::getObjectGroup( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getObjectGroup",0x8d278133,"com.haxepunk.tmx.TmxMap.getObjectGroup","com/haxepunk/tmx/TmxMap.hx",120,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(121)
	::com::haxepunk::tmx::TmxOrderedHash tmp = this->objectGroups;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	::com::haxepunk::tmx::TmxObjectGroup tmp2 = tmp->_map->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	::com::haxepunk::tmx::TmxObjectGroup tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getObjectGroup,return )

::com::haxepunk::tmx::TmxTileSet TmxMap_obj::getGidOwner( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getGidOwner",0x0cbd9dbe,"com.haxepunk.tmx.TmxMap.getGidOwner","com/haxepunk/tmx/TmxMap.hx",126,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(127)
	::com::haxepunk::tmx::TmxTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(128)
	::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		Array< ::Dynamic > _g1 = this->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(129)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			if ((tmp1)){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			::com::haxepunk::tmx::TmxTileSet tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			::com::haxepunk::tmx::TmxTileSet set1 = tmp2;		HX_STACK_VAR(set1,"set1");
			HX_STACK_LINE(129)
			++(_g);
			HX_STACK_LINE(131)
			int tmp3 = gid;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			bool tmp4 = set1->hasGid(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			if ((tmp4)){
				HX_STACK_LINE(132)
				::com::haxepunk::tmx::TmxTileSet tmp5 = set1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(134)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getGidOwner,return )

::String TmxMap_obj::getGidProperty( int gid,::String property){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getGidProperty",0x28430baa,"com.haxepunk.tmx.TmxMap.getGidProperty","com/haxepunk/tmx/TmxMap.hx",138,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(139)
	::com::haxepunk::tmx::TmxTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(140)
	::com::haxepunk::tmx::TmxTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::com::haxepunk::tmx::TmxTileSet tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::com::haxepunk::tmx::TmxTileSet set1 = tmp2;		HX_STACK_VAR(set1,"set1");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(143)
			int tmp3 = gid;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			bool tmp5 = set1->hasGid(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			if ((tmp5)){
				HX_STACK_LINE(143)
				int tmp7 = gid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(143)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				::com::haxepunk::tmx::TmxPropertySet tmp9 = set1->getPropertiesByGid(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				::com::haxepunk::tmx::TmxPropertySet tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				tmp6 = (tmp10 != null());
			}
			else{
				HX_STACK_LINE(143)
				tmp6 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp6)){
				HX_STACK_LINE(144)
				int tmp7 = gid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(144)
				::com::haxepunk::tmx::TmxPropertySet tmp8 = set1->getPropertiesByGid(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(144)
				::String tmp9 = property;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				::String tmp10 = tmp8->resolve(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(146)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxMap_obj,getGidProperty,return )

int TmxMap_obj::getTileMapSpacing( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","getTileMapSpacing",0x5053c1c2,"com.haxepunk.tmx.TmxMap.getTileMapSpacing","com/haxepunk/tmx/TmxMap.hx",150,0xb8c773b8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(151)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(152)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(153)
	::com::haxepunk::tmx::TmxOrderedHash tmp = this->layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(154)
			bool tmp2 = (key == name);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			if ((tmp2)){
				HX_STACK_LINE(156)
				index = i;
				HX_STACK_LINE(157)
				break;
			}
		}
;
	}
	HX_STACK_LINE(159)
	(i)++;
	HX_STACK_LINE(161)
	bool tmp2 = (index == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	if ((tmp2)){
		HX_STACK_LINE(162)
		return (int)0;
	}
	HX_STACK_LINE(163)
	::com::haxepunk::tmx::TmxTileSet tmp3 = this->tilesets->__get(index).StaticCast< ::com::haxepunk::tmx::TmxTileSet >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int tmp4 = tmp3->spacing;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,getTileMapSpacing,return )

::com::haxepunk::tmx::TmxMap TmxMap_obj::loadFromFile( ::String name){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxMap","loadFromFile",0x6daedb35,"com.haxepunk.tmx.TmxMap.loadFromFile","com/haxepunk/tmx/TmxMap.hx",110,0xb8c773b8)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(111)
	::haxe::xml::Fast tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::String tmp2 = ::openfl::_legacy::Assets_obj::getText(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		::String s = tmp2;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(111)
		::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		::Xml tmp4 = ::Xml_obj::parse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		::haxe::xml::Fast f = tmp5;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(111)
		tmp = f;
	}
	HX_STACK_LINE(111)
	::com::haxepunk::tmx::TmxMap tmp1 = ::com::haxepunk::tmx::TmxMap_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxMap_obj,loadFromFile,return )


TmxMap_obj::TmxMap_obj()
{
}

void TmxMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(imageLayers,"imageLayers");
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_END_CLASS();
}

void TmxMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(imageLayers,"imageLayers");
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
}

Dynamic TmxMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { return imageLayers; }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectGroup") ) { return getObjectGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getGidProperty") ) { return getGidProperty_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTileMapSpacing") ) { return getTileMapSpacing_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TmxMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
	}
	return false;
}

Dynamic TmxMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::com::haxepunk::tmx::TmxOrderedHash >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { imageLayers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< ::com::haxepunk::tmx::TmxOrderedHash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"));
	outFields->push(HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"));
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("imageLayers","\x3d","\x1f","\xf1","\xa0"));
	outFields->push(HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TmxMap_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(TmxMap_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,fullWidth),HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47")},
	{hx::fsInt,(int)offsetof(TmxMap_obj,fullHeight),HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxMap_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxMap_obj,tilesets),HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxOrderedHash*/ ,(int)offsetof(TmxMap_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TmxMap_obj,imageLayers),HX_HCSTRING("imageLayers","\x3d","\x1f","\xf1","\xa0")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxOrderedHash*/ ,(int)offsetof(TmxMap_obj,objectGroups),HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"),
	HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"),
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("imageLayers","\x3d","\x1f","\xf1","\xa0"),
	HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6"),
	HX_HCSTRING("getLayer","\x5b","\x91","\x97","\xcf"),
	HX_HCSTRING("getObjectGroup","\x0a","\x23","\xc2","\x90"),
	HX_HCSTRING("getGidOwner","\x87","\x7f","\xe1","\xfe"),
	HX_HCSTRING("getGidProperty","\x81","\xad","\xdd","\x2b"),
	HX_HCSTRING("getTileMapSpacing","\x4b","\xa0","\x70","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxMap_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxMap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	::String(null()) };

void TmxMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxMap","\x25","\x48","\x58","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TmxMap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxMap_obj >;
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
