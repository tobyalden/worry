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
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
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
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxLayer_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","new",0xc71d698c,"com.haxepunk.tmx.TmxLayer.new","com/haxepunk/tmx/TmxLayer.hx",27,0x21c7dd23)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(28)
	::com::haxepunk::tmx::TmxPropertySet tmp = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->properties = tmp;
	HX_STACK_LINE(29)
	this->map = parent;
	HX_STACK_LINE(30)
	::String tmp1 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->name = tmp1;
	HX_STACK_LINE(31)
	bool tmp2 = source->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::String tmp4 = source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		tmp3 = ::Std_obj::parseInt(tmp4);
	}
	else{
		HX_STACK_LINE(31)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(31)
	this->x = tmp3;
	HX_STACK_LINE(32)
	bool tmp4 = source->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	if ((tmp4)){
		HX_STACK_LINE(32)
		::String tmp6 = source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		tmp5 = ::Std_obj::parseInt(tmp6);
	}
	else{
		HX_STACK_LINE(32)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(32)
	this->y = tmp5;
	HX_STACK_LINE(33)
	::String tmp6 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	this->width = tmp7;
	HX_STACK_LINE(34)
	::String tmp8 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	this->height = tmp9;
	HX_STACK_LINE(35)
	bool tmp10 = source->has->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	if ((tmp10)){
		HX_STACK_LINE(35)
		::String tmp12 = source->att->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		tmp11 = (tmp13 == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(35)
		tmp11 = false;
	}
	HX_STACK_LINE(35)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(35)
	if ((tmp11)){
		HX_STACK_LINE(35)
		tmp12 = true;
	}
	else{
		HX_STACK_LINE(35)
		tmp12 = false;
	}
	HX_STACK_LINE(35)
	this->visible = tmp12;
	HX_STACK_LINE(36)
	bool tmp13 = source->has->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(36)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(36)
	if ((tmp13)){
		HX_STACK_LINE(36)
		::String tmp15 = source->att->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		tmp14 = ::Std_obj::parseFloat(tmp15);
	}
	else{
		HX_STACK_LINE(36)
		tmp14 = (int)0;
	}
	HX_STACK_LINE(36)
	this->opacity = tmp14;
	HX_STACK_LINE(39)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::_List::ListIterator tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::List tmp16 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			::List _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			tmp15 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(40)
		::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(40)
			if ((tmp17)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(40)
				_g->val = tmp19;
				HX_STACK_LINE(40)
				Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(40)
				_g->head = tmp20;
				HX_STACK_LINE(40)
				tmp18 = _g->val;
			}
			HX_STACK_LINE(40)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp18));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(41)
			::com::haxepunk::tmx::TmxPropertySet tmp19 = this->properties;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(41)
			::haxe::xml::Fast tmp20 = node1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(41)
			tmp19->extend(tmp20);
		}
	}
	HX_STACK_LINE(44)
	this->tileGIDs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	::haxe::xml::Fast tmp15 = source->node->resolve(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	::haxe::xml::Fast data = tmp15;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(46)
	bool tmp16 = (data != null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(46)
	if ((tmp16)){
		HX_STACK_LINE(48)
		::String chunk = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(49)
		::String data_encoding = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");		HX_STACK_VAR(data_encoding,"data_encoding");
		HX_STACK_LINE(50)
		bool tmp17 = data->has->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(50)
		if ((tmp17)){
			HX_STACK_LINE(51)
			::String tmp18 = data->att->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(51)
			data_encoding = tmp18;
		}
		HX_STACK_LINE(53)
		::String tmp18 = data_encoding;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(53)
		::String _switch_1 = (tmp18);
		if (  ( _switch_1==HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55"))){
			HX_STACK_LINE(56)
			::String tmp19 = data->get_innerData();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(56)
			chunk = tmp19;
			HX_STACK_LINE(57)
			bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
			HX_STACK_LINE(58)
			bool tmp20 = data->has->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(58)
			if ((tmp20)){
				HX_STACK_LINE(60)
				::String tmp21 = data->att->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(60)
				::String _g = tmp21;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(60)
				::String tmp22 = _g;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(60)
				::String _switch_2 = (tmp22);
				if (  ( _switch_2==HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"))){
					HX_STACK_LINE(63)
					compressed = true;
				}
				else  {
					HX_STACK_LINE(65)
					HX_STACK_DO_THROW(HX_HCSTRING("TmxLayer - data compression type not supported!","\xb7","\x7d","\x95","\x31"));
				}
;
;
			}
			HX_STACK_LINE(68)
			::String tmp21 = chunk;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			bool tmp23 = compressed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(68)
			this->tileGIDs = ::com::haxepunk::tmx::TmxLayer_obj::base64ToArray(tmp21,tmp22,tmp23);
		}
		else if (  ( _switch_1==HX_HCSTRING("csv","\xc6","\x83","\x4b","\x00"))){
			HX_STACK_LINE(70)
			::String tmp19 = data->get_innerData();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(70)
			chunk = tmp19;
			HX_STACK_LINE(71)
			::String tmp20 = chunk;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			this->tileGIDs = ::com::haxepunk::tmx::TmxLayer_obj::csvToArray(tmp20);
		}
		else  {
			HX_STACK_LINE(74)
			int tmp19 = this->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			int lineWidth = tmp19;		HX_STACK_VAR(lineWidth,"lineWidth");
			HX_STACK_LINE(75)
			int rowIdx = (int)-1;		HX_STACK_VAR(rowIdx,"rowIdx");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::_List::ListIterator tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					::List tmp21 = data->nodes->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(76)
					::List _this = tmp21;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(76)
					tmp20 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(76)
				::_List::ListIterator _g = tmp20;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(76)
				while((true)){
					HX_STACK_LINE(76)
					bool tmp21 = (_g->head != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(76)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(76)
					if ((tmp22)){
						HX_STACK_LINE(76)
						break;
					}
					HX_STACK_LINE(76)
					Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						Dynamic tmp24 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(76)
						_g->val = tmp24;
						HX_STACK_LINE(76)
						Dynamic tmp25 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(76)
						_g->head = tmp25;
						HX_STACK_LINE(76)
						tmp23 = _g->val;
					}
					HX_STACK_LINE(76)
					::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp23));		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(79)
					int tmp24 = ++(lineWidth);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(79)
					int tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(79)
					bool tmp26 = (tmp24 >= tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(79)
					if ((tmp26)){
						HX_STACK_LINE(81)
						int tmp27 = ++(rowIdx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(81)
						this->tileGIDs[tmp27] = Array_obj< int >::__new();
						HX_STACK_LINE(82)
						lineWidth = (int)0;
					}
					HX_STACK_LINE(84)
					::String tmp27 = node1->att->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(84)
					Dynamic tmp28 = ::Std_obj::parseInt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(84)
					int gid = tmp28;		HX_STACK_VAR(gid,"gid");
					HX_STACK_LINE(85)
					int tmp29 = gid;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(85)
					this->tileGIDs->__get(rowIdx).StaticCast< Array< int > >()->push(tmp29);
				}
			}
		}
;
;
	}
}
;
	return null();
}

//TmxLayer_obj::~TmxLayer_obj() { }

Dynamic TmxLayer_obj::__CreateEmpty() { return  new TmxLayer_obj; }
hx::ObjectPtr< TmxLayer_obj > TmxLayer_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{  hx::ObjectPtr< TmxLayer_obj > _result_ = new TmxLayer_obj();
	_result_->__construct(source,parent);
	return _result_;}

Dynamic TmxLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxLayer_obj > _result_ = new TmxLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String TmxLayer_obj::toCsv( ::com::haxepunk::tmx::TmxTileSet tileSet){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","toCsv",0x53507137,"com.haxepunk.tmx.TmxLayer.toCsv","com/haxepunk/tmx/TmxLayer.hx",92,0x21c7dd23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSet,"tileSet")
	HX_STACK_LINE(93)
	int max = (int)16777215;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(94)
	int offset = (int)0;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(95)
	bool tmp = (tileSet != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(97)
		offset = tileSet->firstGID;
		HX_STACK_LINE(98)
		int tmp1 = (tileSet->numTiles - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		max = tmp1;
	}
	HX_STACK_LINE(100)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(101)
	Array< int > row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		Array< ::Dynamic > _g1 = this->tileGIDs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			if ((tmp2)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(102)
			Array< int > row1 = _g1->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(102)
			++(_g);
			HX_STACK_LINE(104)
			int id = (int)0;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(105)
				while((true)){
					HX_STACK_LINE(105)
					bool tmp3 = (_g2 < row1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(105)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(105)
					if ((tmp4)){
						HX_STACK_LINE(105)
						break;
					}
					HX_STACK_LINE(105)
					int tmp5 = row1->__get(_g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					int id1 = tmp5;		HX_STACK_VAR(id1,"id1");
					HX_STACK_LINE(105)
					++(_g2);
					HX_STACK_LINE(107)
					hx::SubEq(id1,offset);
					HX_STACK_LINE(108)
					bool tmp6 = (id1 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					if ((tmp7)){
						HX_STACK_LINE(108)
						tmp8 = (id1 > max);
					}
					else{
						HX_STACK_LINE(108)
						tmp8 = true;
					}
					HX_STACK_LINE(108)
					if ((tmp8)){
						HX_STACK_LINE(109)
						id1 = (int)0;
					}
					HX_STACK_LINE(110)
					::String tmp9 = (id1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					hx::AddEq(result,tmp9);
				}
			}
			HX_STACK_LINE(112)
			::String tmp3 = (id + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			hx::AddEq(result,tmp3);
		}
	}
	HX_STACK_LINE(114)
	::String tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,toCsv,return )

Array< ::Dynamic > TmxLayer_obj::csvToArray( ::String input){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","csvToArray",0xcb1b274c,"com.haxepunk.tmx.TmxLayer.csvToArray","com/haxepunk/tmx/TmxLayer.hx",136,0x21c7dd23)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(137)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(138)
	Array< ::String > rows = input.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(139)
	::String row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp = (_g < rows->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			if ((tmp1)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::String tmp2 = rows->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			::String row1 = tmp2;		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			bool tmp3 = (row1 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			if ((tmp3)){
				HX_STACK_LINE(142)
				continue;
			}
			HX_STACK_LINE(143)
			Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
			HX_STACK_LINE(144)
			Array< ::String > entries = row1.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(entries,"entries");
			HX_STACK_LINE(145)
			::String entry;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(146)
				while((true)){
					HX_STACK_LINE(146)
					bool tmp4 = (_g1 < entries->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(146)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(146)
					if ((tmp5)){
						HX_STACK_LINE(146)
						break;
					}
					HX_STACK_LINE(146)
					::String tmp6 = entries->__get(_g1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(146)
					::String entry1 = tmp6;		HX_STACK_VAR(entry1,"entry1");
					HX_STACK_LINE(146)
					++(_g1);
					HX_STACK_LINE(147)
					::String tmp7 = entry1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					resultRow->push(tmp8);
				}
			}
			HX_STACK_LINE(148)
			result->push(resultRow);
		}
	}
	HX_STACK_LINE(150)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,csvToArray,return )

Array< ::Dynamic > TmxLayer_obj::base64ToArray( ::String chunk,int lineWidth,bool compressed){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","base64ToArray",0xcb718c7b,"com.haxepunk.tmx.TmxLayer.base64ToArray","com/haxepunk/tmx/TmxLayer.hx",154,0x21c7dd23)
	HX_STACK_ARG(chunk,"chunk")
	HX_STACK_ARG(lineWidth,"lineWidth")
	HX_STACK_ARG(compressed,"compressed")
	HX_STACK_LINE(155)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(156)
	::String tmp = chunk;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::openfl::_legacy::utils::ByteArray tmp1 = ::com::haxepunk::tmx::TmxLayer_obj::base64ToByteArray(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::openfl::_legacy::utils::ByteArray data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(157)
	bool tmp2 = compressed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	if ((tmp2)){
		HX_STACK_LINE(162)
		data->uncompress(null());
	}
	HX_STACK_LINE(166)
	::String tmp3 = ::openfl::utils::_Endian::Endian_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	data->set_endian(tmp3);
	HX_STACK_LINE(167)
	while((true)){
		HX_STACK_LINE(167)
		bool tmp4 = (data->position < data->length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		if ((tmp5)){
			HX_STACK_LINE(167)
			break;
		}
		HX_STACK_LINE(169)
		Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
		HX_STACK_LINE(170)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			while((true)){
				HX_STACK_LINE(171)
				bool tmp6 = (_g < lineWidth);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(171)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(171)
				if ((tmp7)){
					HX_STACK_LINE(171)
					break;
				}
				HX_STACK_LINE(171)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(171)
				int i1 = tmp8;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(172)
				int tmp9 = data->readInt();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				resultRow->push(tmp9);
			}
		}
		HX_STACK_LINE(173)
		result->push(resultRow);
	}
	HX_STACK_LINE(175)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TmxLayer_obj,base64ToArray,return )

::String TmxLayer_obj::BASE64_CHARS;

::openfl::_legacy::utils::ByteArray TmxLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","base64ToByteArray",0x209c7953,"com.haxepunk.tmx.TmxLayer.base64ToByteArray","com/haxepunk/tmx/TmxLayer.hx",181,0x21c7dd23)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(182)
	::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	::openfl::_legacy::utils::ByteArray output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(184)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(185)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int tmp1 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			if ((tmp3)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			int c1 = tmp4;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(188)
			int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			Dynamic tmp6 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").charCodeAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			int tmp7 = c1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			lookup[tmp6] = tmp7;
		}
	}
	HX_STACK_LINE(191)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(192)
	while((true)){
		HX_STACK_LINE(192)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		int tmp2 = (data.length - (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		if ((tmp4)){
			HX_STACK_LINE(192)
			break;
		}
		HX_STACK_LINE(195)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		::String tmp6 = data.charAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		bool tmp7 = (tmp6 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		if ((tmp8)){
			HX_STACK_LINE(195)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(195)
			::String tmp12 = data.charAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			tmp9 = (tmp13 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(195)
			tmp9 = true;
		}
		HX_STACK_LINE(195)
		if ((tmp9)){
			HX_STACK_LINE(197)
			(i)++;
			HX_STACK_LINE(197)
			continue;
		}
		HX_STACK_LINE(201)
		int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(201)
		Dynamic tmp11 = data.charCodeAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		int tmp12 = lookup->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(201)
		int a0 = tmp12;		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(202)
		int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(202)
		Dynamic tmp14 = data.charCodeAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(202)
		int tmp15 = lookup->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(202)
		int a1 = tmp15;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(203)
		int tmp16 = (i + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		Dynamic tmp17 = data.charCodeAt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(203)
		int tmp18 = lookup->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(203)
		int a2 = tmp18;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(204)
		int tmp19 = (i + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(204)
		Dynamic tmp20 = data.charCodeAt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(204)
		int tmp21 = lookup->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(204)
		int a3 = tmp21;		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(207)
		bool tmp22 = (a1 < (int)64);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(207)
		if ((tmp22)){
			HX_STACK_LINE(208)
			int tmp23 = output->position;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(208)
			output->ensureElem(tmp23,true);
			HX_STACK_LINE(208)
			int tmp24 = (output->position)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(208)
			int tmp25 = (int(a0) << int((int)2));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(208)
			int tmp26 = (int(a1) & int((int)48));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(208)
			int tmp27 = (int(tmp26) >> int((int)4));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(208)
			int tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(208)
			output->b[tmp24] = tmp28;
		}
		HX_STACK_LINE(209)
		bool tmp23 = (a2 < (int)64);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(209)
		if ((tmp23)){
			HX_STACK_LINE(210)
			int tmp24 = output->position;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(210)
			output->ensureElem(tmp24,true);
			HX_STACK_LINE(210)
			int tmp25 = (output->position)++;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(210)
			int tmp26 = (int(a1) & int((int)15));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(210)
			int tmp27 = (int(tmp26) << int((int)4));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(210)
			int tmp28 = (int(a2) & int((int)60));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(210)
			int tmp29 = (int(tmp28) >> int((int)2));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(210)
			int tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(210)
			output->b[tmp25] = tmp30;
		}
		HX_STACK_LINE(211)
		bool tmp24 = (a3 < (int)64);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(211)
		if ((tmp24)){
			HX_STACK_LINE(212)
			int tmp25 = output->position;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(212)
			output->ensureElem(tmp25,true);
			HX_STACK_LINE(212)
			int tmp26 = (output->position)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(212)
			int tmp27 = (int(a2) & int((int)3));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(212)
			int tmp28 = (int(tmp27) << int((int)6));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(212)
			int tmp29 = a3;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(212)
			int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(212)
			output->b[tmp26] = tmp30;
		}
		HX_STACK_LINE(214)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(218)
	output->position = (int)0;
	HX_STACK_LINE(219)
	::openfl::_legacy::utils::ByteArray tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,base64ToByteArray,return )


TmxLayer_obj::TmxLayer_obj()
{
}

void TmxLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxLayer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(tileGIDs,"tileGIDs");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TmxLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(tileGIDs,"tileGIDs");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TmxLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"toCsv") ) { return toCsv_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileGIDs") ) { return tileGIDs; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

bool TmxLayer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"csvToArray") ) { outValue = csvToArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"base64ToArray") ) { outValue = base64ToArray_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { outValue = base64ToByteArray_dyn(); return true;  }
	}
	return false;
}

Dynamic TmxLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileGIDs") ) { tileGIDs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("tileGIDs","\x7f","\xc0","\x52","\x7e"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TmxLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TmxLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TmxLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxLayer_obj,tileGIDs),HX_HCSTRING("tileGIDs","\x7f","\xc0","\x52","\x7e")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TmxLayer_obj::BASE64_CHARS,HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21")},
	{ hx::fsUnknown, 0, null()}
};
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
	HX_HCSTRING("tileGIDs","\x7f","\xc0","\x52","\x7e"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("toCsv","\x0b","\x35","\x0d","\x14"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TmxLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TmxLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

hx::Class TmxLayer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("csvToArray","\xf8","\x02","\xe4","\x3b"),
	HX_HCSTRING("base64ToArray","\x4f","\x44","\x14","\x3b"),
	HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21"),
	HX_HCSTRING("base64ToByteArray","\x27","\xab","\x59","\x6e"),
	::String(null()) };

void TmxLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxLayer","\x9a","\xf3","\xb6","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TmxLayer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxLayer_obj >;
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

void TmxLayer_obj::__boot()
{
	BASE64_CHARS= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3");
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
