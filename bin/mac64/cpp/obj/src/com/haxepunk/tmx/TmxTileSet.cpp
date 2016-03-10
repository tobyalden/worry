#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxTileSet_obj::__construct(::haxe::xml::Fast data)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","new",0x7006628f,"com.haxepunk.tmx.TmxTileSet.new","com/haxepunk/tmx/TmxTileSet.hx",27,0x09536340)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(37)
	this->margin = (int)0;
	HX_STACK_LINE(36)
	this->spacing = (int)0;
	HX_STACK_LINE(47)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(47)
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(48)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(49)
	int tmp = this->numCols = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	this->numRows = tmp;
	HX_STACK_LINE(51)
	::haxe::xml::Fast tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	source = tmp1;
	HX_STACK_LINE(53)
	bool tmp2 = source->has->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(53)
		::String tmp4 = source->att->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		tmp3 = ::Std_obj::parseInt(tmp4);
	}
	else{
		HX_STACK_LINE(53)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(53)
	this->firstGID = tmp3;
	HX_STACK_LINE(56)
	bool tmp4 = source->has->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	if ((tmp4)){
	}
	else{
		HX_STACK_LINE(62)
		::haxe::xml::Fast tmp5 = source->node->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		::haxe::xml::Fast node1 = tmp5;		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(63)
		::String tmp6 = node1->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		this->imageSource = tmp6;
		HX_STACK_LINE(65)
		::String tmp7 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		this->name = tmp7;
		HX_STACK_LINE(66)
		bool tmp8 = source->has->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		if ((tmp8)){
			HX_STACK_LINE(66)
			::String tmp9 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			this->tileWidth = tmp10;
		}
		HX_STACK_LINE(67)
		bool tmp9 = source->has->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		if ((tmp9)){
			HX_STACK_LINE(67)
			::String tmp10 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			this->tileHeight = tmp11;
		}
		HX_STACK_LINE(68)
		bool tmp10 = source->has->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		if ((tmp10)){
			HX_STACK_LINE(68)
			::String tmp11 = source->att->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			this->spacing = tmp12;
		}
		HX_STACK_LINE(69)
		bool tmp11 = source->has->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		if ((tmp11)){
			HX_STACK_LINE(69)
			::String tmp12 = source->att->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			this->margin = tmp13;
		}
		HX_STACK_LINE(72)
		this->_tileProps = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::_List::ListIterator tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::List tmp13 = source->nodes->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				::List _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				tmp12 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(73)
			::_List::ListIterator _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				bool tmp13 = (_g->head != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					Dynamic tmp16 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					_g->val = tmp16;
					HX_STACK_LINE(73)
					Dynamic tmp17 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					_g->head = tmp17;
					HX_STACK_LINE(73)
					tmp15 = _g->val;
				}
				HX_STACK_LINE(73)
				::haxe::xml::Fast node2 = ((::haxe::xml::Fast)(tmp15));		HX_STACK_VAR(node2,"node2");
				HX_STACK_LINE(75)
				bool tmp16 = node2->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				if ((tmp16)){
					HX_STACK_LINE(77)
					::String tmp17 = node2->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(77)
					Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(77)
					int id = tmp18;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(78)
					::com::haxepunk::tmx::TmxPropertySet tmp19 = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(78)
					this->_tileProps[id] = tmp19;
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::_List::ListIterator tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(79)
						{
							HX_STACK_LINE(79)
							::List tmp21 = node2->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(79)
							::List _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(79)
							tmp20 = ::_List::ListIterator_obj::__new(_this->h);
						}
						HX_STACK_LINE(79)
						::_List::ListIterator _g1 = tmp20;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(79)
						while((true)){
							HX_STACK_LINE(79)
							bool tmp21 = (_g1->head != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(79)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(79)
							if ((tmp22)){
								HX_STACK_LINE(79)
								break;
							}
							HX_STACK_LINE(79)
							Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(79)
							{
								HX_STACK_LINE(79)
								Dynamic tmp24 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(79)
								_g1->val = tmp24;
								HX_STACK_LINE(79)
								Dynamic tmp25 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(79)
								_g1->head = tmp25;
								HX_STACK_LINE(79)
								tmp23 = _g1->val;
							}
							HX_STACK_LINE(79)
							::haxe::xml::Fast prop = ((::haxe::xml::Fast)(tmp23));		HX_STACK_VAR(prop,"prop");
							HX_STACK_LINE(80)
							::com::haxepunk::tmx::TmxPropertySet tmp24 = this->_tileProps->__get(id).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(80)
							::haxe::xml::Fast tmp25 = prop;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(80)
							tmp24->extend(tmp25);
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//TmxTileSet_obj::~TmxTileSet_obj() { }

Dynamic TmxTileSet_obj::__CreateEmpty() { return  new TmxTileSet_obj; }
hx::ObjectPtr< TmxTileSet_obj > TmxTileSet_obj::__new(::haxe::xml::Fast data)
{  hx::ObjectPtr< TmxTileSet_obj > _result_ = new TmxTileSet_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic TmxTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxTileSet_obj > _result_ = new TmxTileSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::display::BitmapData TmxTileSet_obj::get_image( ){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","get_image",0x226f5b21,"com.haxepunk.tmx.TmxTileSet.get_image","com/haxepunk/tmx/TmxTileSet.hx",88,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::openfl::_legacy::display::BitmapData tmp = this->_image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TmxTileSet_obj,get_image,return )

::openfl::_legacy::display::BitmapData TmxTileSet_obj::set_image( ::openfl::_legacy::display::BitmapData v){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","set_image",0x05c0472d,"com.haxepunk.tmx.TmxTileSet.set_image","com/haxepunk/tmx/TmxTileSet.hx",92,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(93)
	this->_image = v;
	HX_STACK_LINE(95)
	int tmp = v->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = this->tileWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	this->numCols = tmp3;
	HX_STACK_LINE(96)
	int tmp4 = v->get_height();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	int tmp5 = this->tileHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	this->numRows = tmp7;
	HX_STACK_LINE(97)
	int tmp8 = this->numRows;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	int tmp9 = this->numCols;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	this->numTiles = tmp10;
	HX_STACK_LINE(98)
	::openfl::_legacy::display::BitmapData tmp11 = this->_image;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,set_image,return )

bool TmxTileSet_obj::hasGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","hasGid",0x46fb45f9,"com.haxepunk.tmx.TmxTileSet.hasGid","com/haxepunk/tmx/TmxTileSet.hx",102,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(103)
	int tmp = gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	if ((tmp2)){
		HX_STACK_LINE(103)
		int tmp4 = gid;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		int tmp5 = this->firstGID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		int tmp7 = this->numTiles;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		tmp3 = (tmp4 < tmp10);
	}
	else{
		HX_STACK_LINE(103)
		tmp3 = false;
	}
	HX_STACK_LINE(103)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,hasGid,return )

int TmxTileSet_obj::fromGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","fromGid",0x19322a67,"com.haxepunk.tmx.TmxTileSet.fromGid","com/haxepunk/tmx/TmxTileSet.hx",107,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(108)
	int tmp = gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,fromGid,return )

int TmxTileSet_obj::toGid( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","toGid",0xc32ef136,"com.haxepunk.tmx.TmxTileSet.toGid","com/haxepunk/tmx/TmxTileSet.hx",112,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(113)
	int tmp = this->firstGID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,toGid,return )

::com::haxepunk::tmx::TmxPropertySet TmxTileSet_obj::getPropertiesByGid( int gid){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getPropertiesByGid",0xddbe0433,"com.haxepunk.tmx.TmxTileSet.getPropertiesByGid","com/haxepunk/tmx/TmxTileSet.hx",117,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(118)
	bool tmp = (this->_tileProps != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	if ((tmp)){
		HX_STACK_LINE(119)
		int tmp1 = gid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = this->firstGID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::com::haxepunk::tmx::TmxPropertySet tmp4 = this->_tileProps->__get(tmp3).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		return tmp4;
	}
	HX_STACK_LINE(120)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getPropertiesByGid,return )

::com::haxepunk::tmx::TmxPropertySet TmxTileSet_obj::getProperties( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getProperties",0x01b41b18,"com.haxepunk.tmx.TmxTileSet.getProperties","com/haxepunk/tmx/TmxTileSet.hx",124,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(125)
	::com::haxepunk::tmx::TmxPropertySet tmp = this->_tileProps->__get(id).StaticCast< ::com::haxepunk::tmx::TmxPropertySet >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getProperties,return )

::openfl::_legacy::geom::Rectangle TmxTileSet_obj::getRect( int id){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxTileSet","getRect",0xdf62d289,"com.haxepunk.tmx.TmxTileSet.getRect","com/haxepunk/tmx/TmxTileSet.hx",129,0x09536340)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(131)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	int tmp1 = this->numCols;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	int tmp3 = this->tileWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	int tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	int tmp6 = this->numCols;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(131)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(131)
	int tmp8 = this->tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(131)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(131)
	::openfl::_legacy::geom::Rectangle tmp10 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(131)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxTileSet_obj,getRect,return )


TmxTileSet_obj::TmxTileSet_obj()
{
}

void TmxTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxTileSet);
	HX_MARK_MEMBER_NAME(_tileProps,"_tileProps");
	HX_MARK_MEMBER_NAME(_image,"_image");
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_END_CLASS();
}

void TmxTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tileProps,"_tileProps");
	HX_VISIT_MEMBER_NAME(_image,"_image");
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
}

Dynamic TmxTileSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == hx::paccAlways) return get_image(); }
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { return _image; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"get_image") ) { return get_image_dyn(); }
		if (HX_FIELD_EQ(inName,"set_image") ) { return set_image_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileProps") ) { return _tileProps; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == hx::paccAlways) return set_image(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileProps") ) { _tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tileProps","\x23","\xc1","\x8d","\xaf"));
	outFields->push(HX_HCSTRING("_image","\x9c","\x66","\x50","\xb9"));
	outFields->push(HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxTileSet_obj,_tileProps),HX_HCSTRING("_tileProps","\x23","\xc1","\x8d","\xaf")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(TmxTileSet_obj,_image),HX_HCSTRING("_image","\x9c","\x66","\x50","\xb9")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,firstGID),HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1")},
	{hx::fsString,(int)offsetof(TmxTileSet_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsString,(int)offsetof(TmxTileSet_obj,imageSource),HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(TmxTileSet_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_tileProps","\x23","\xc1","\x8d","\xaf"),
	HX_HCSTRING("_image","\x9c","\x66","\x50","\xb9"),
	HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"),
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("get_image","\xb2","\x7b","\x12","\x01"),
	HX_HCSTRING("set_image","\xbe","\x67","\x63","\xe4"),
	HX_HCSTRING("hasGid","\xc8","\x90","\x35","\xbb"),
	HX_HCSTRING("fromGid","\xb8","\x54","\xf9","\x57"),
	HX_HCSTRING("toGid","\x47","\x35","\x10","\x14"),
	HX_HCSTRING("getPropertiesByGid","\x82","\xc9","\xe4","\xcb"),
	HX_HCSTRING("getProperties","\x29","\x58","\x81","\xbd"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxTileSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxTileSet_obj::__mClass;

void TmxTileSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxTileSet","\x1d","\x6f","\x48","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxTileSet_obj >;
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
