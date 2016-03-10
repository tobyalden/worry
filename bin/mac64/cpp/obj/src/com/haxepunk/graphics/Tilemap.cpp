#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Tilemap
#include <com/haxepunk/graphics/Tilemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageQuality
#include <openfl/_legacy/display/StageQuality.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Tilemap_obj::__construct(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight,Dynamic __o_opaqueTiles)
{
HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","new",0xa2901676,"com.haxepunk.graphics.Tilemap.new","com/haxepunk/graphics/Tilemap.hx",33,0x8dab491b)
HX_STACK_THIS(this)
HX_STACK_ARG(tileset,"tileset")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(__o_tileSpacingWidth,"tileSpacingWidth")
HX_STACK_ARG(__o_tileSpacingHeight,"tileSpacingHeight")
HX_STACK_ARG(__o_opaqueTiles,"opaqueTiles")
Dynamic tileSpacingWidth = __o_tileSpacingWidth.Default(0);
Dynamic tileSpacingHeight = __o_tileSpacingHeight.Default(0);
Dynamic opaqueTiles = __o_opaqueTiles.Default(true);
{
	HX_STACK_LINE(34)
	::openfl::_legacy::geom::Rectangle tmp = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->_rect = tmp;
	HX_STACK_LINE(37)
	int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = hx::Mod(width,tileWidth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	this->_width = tmp3;
	HX_STACK_LINE(38)
	int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	int tmp5 = hx::Mod(height,tileHeight);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	this->_height = tmp6;
	HX_STACK_LINE(39)
	int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	int tmp8 = tileWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(39)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	this->_columns = tmp10;
	HX_STACK_LINE(40)
	int tmp11 = this->_height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	int tmp12 = tileHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(40)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(40)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(40)
	this->_rows = tmp14;
	HX_STACK_LINE(41)
	this->_opaqueTiles = opaqueTiles;
	HX_STACK_LINE(43)
	this->tileSpacingWidth = tileSpacingWidth;
	HX_STACK_LINE(44)
	this->tileSpacingHeight = tileSpacingHeight;
	HX_STACK_LINE(46)
	int tmp15 = this->_columns;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(46)
	bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(46)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(46)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(46)
	if ((tmp17)){
		HX_STACK_LINE(46)
		int tmp19 = this->_rows;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(46)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(46)
		tmp18 = (tmp20 == (int)0);
	}
	else{
		HX_STACK_LINE(46)
		tmp18 = true;
	}
	HX_STACK_LINE(46)
	if ((tmp18)){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_HCSTRING("Cannot create a bitmapdata of width/height = 0","\x25","\xb1","\x47","\x4d"));
	}
	HX_STACK_LINE(54)
	int tmp19 = this->_maxWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(54)
	int tmp20 = tileWidth;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(54)
	int tmp21 = hx::Mod(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(54)
	hx::SubEq(this->_maxWidth,tmp21);
	HX_STACK_LINE(55)
	int tmp22 = this->_maxHeight;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(55)
	int tmp23 = tileHeight;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(55)
	int tmp24 = hx::Mod(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(55)
	hx::SubEq(this->_maxHeight,tmp24);
	HX_STACK_LINE(58)
	int tmp25 = this->_width;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(58)
	int tmp26 = this->_height;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(58)
	super::__construct(tmp25,tmp26);
	HX_STACK_LINE(61)
	::openfl::_legacy::geom::Rectangle tmp27 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(61)
	this->_tile = tmp27;
	HX_STACK_LINE(62)
	this->_map = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		int tmp28 = this->_rows;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(63)
		int _g = tmp28;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp29 = (_g1 < _g);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(63)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(63)
			if ((tmp30)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(63)
			int tmp31 = (_g1)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(63)
			int y = tmp31;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(65)
			this->_map[y] = Array_obj< int >::__new();
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(66)
				int tmp32 = this->_columns;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(66)
				int _g2 = tmp32;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(66)
				while((true)){
					HX_STACK_LINE(66)
					bool tmp33 = (_g3 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(66)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(66)
					if ((tmp34)){
						HX_STACK_LINE(66)
						break;
					}
					HX_STACK_LINE(66)
					int tmp35 = (_g3)++;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(66)
					int x = tmp35;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(68)
					this->_map->__get(y).StaticCast< Array< int > >()[x] = (int)-1;
				}
			}
		}
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::com::haxepunk::ds::Either _g = tileset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(73)
				::openfl::_legacy::display::BitmapData tmp28 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(73)
				::openfl::_legacy::display::BitmapData bd = tmp28;		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(76)
					this->blit = true;
					HX_STACK_LINE(77)
					this->_set = bd;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(73)
				::com::haxepunk::graphics::atlas::TileAtlas tmp28 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(73)
				::com::haxepunk::graphics::atlas::TileAtlas atlas = tmp28;		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(79)
					this->blit = false;
					HX_STACK_LINE(80)
					this->_atlas = atlas;
					HX_STACK_LINE(81)
					int tmp29 = tileWidth;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(81)
					int tmp30 = tileHeight;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(81)
					Dynamic tmp31 = tileSpacingWidth;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(81)
					Dynamic tmp32 = tileSpacingHeight;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(81)
					atlas->prepare(tmp29,tmp30,tmp31,tmp32);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(84)
	::openfl::_legacy::display::BitmapData tmp28 = this->_set;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(84)
	bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(84)
	bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(84)
	if ((tmp29)){
		HX_STACK_LINE(84)
		::com::haxepunk::graphics::atlas::TileAtlas tmp31 = this->_atlas;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(84)
		::com::haxepunk::graphics::atlas::TileAtlas tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(84)
		tmp30 = (tmp32 == null());
	}
	else{
		HX_STACK_LINE(84)
		tmp30 = false;
	}
	HX_STACK_LINE(84)
	if ((tmp30)){
		HX_STACK_LINE(85)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid tileset graphic provided.","\xbe","\x2f","\xfb","\xbf"));
	}
	HX_STACK_LINE(87)
	bool tmp31 = this->blit;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(87)
	if ((tmp31)){
		HX_STACK_LINE(89)
		::openfl::_legacy::display::BitmapData tmp32 = this->_set;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(89)
		int tmp33 = tmp32->get_width();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(89)
		int tmp34 = tileWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(89)
		Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(89)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(89)
		this->_setColumns = tmp36;
		HX_STACK_LINE(90)
		::openfl::_legacy::display::BitmapData tmp37 = this->_set;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(90)
		int tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(90)
		int tmp39 = tileHeight;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(90)
		Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(90)
		int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(90)
		this->_setRows = tmp41;
	}
	else{
		HX_STACK_LINE(94)
		::com::haxepunk::graphics::atlas::TileAtlas tmp32 = this->_atlas;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		int tmp33 = tmp32->get_width();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(94)
		int tmp34 = tileWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(94)
		Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(94)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(94)
		this->_setColumns = tmp36;
		HX_STACK_LINE(95)
		::com::haxepunk::graphics::atlas::TileAtlas tmp37 = this->_atlas;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(95)
		int tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(95)
		int tmp39 = tileHeight;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(95)
		Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(95)
		int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(95)
		this->_setRows = tmp41;
	}
	HX_STACK_LINE(97)
	int tmp32 = this->_setColumns;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(97)
	int tmp33 = this->_setRows;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(97)
	int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(97)
	this->_setCount = tmp34;
	HX_STACK_LINE(99)
	::openfl::_legacy::display::Stage tmp35 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(99)
	::openfl::_legacy::display::StageQuality tmp36 = tmp35->get_quality();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(99)
	bool tmp37 = (tmp36 != ::openfl::_legacy::display::StageQuality_obj::LOW);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(99)
	this->smooth = tmp37;
}
;
	return null();
}

//Tilemap_obj::~Tilemap_obj() { }

Dynamic Tilemap_obj::__CreateEmpty() { return  new Tilemap_obj; }
hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight,Dynamic __o_opaqueTiles)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(tileset,width,height,tileWidth,tileHeight,__o_tileSpacingWidth,__o_tileSpacingHeight,__o_opaqueTiles);
	return _result_;}

Dynamic Tilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void Tilemap_obj::setTile( int column,int row,hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","setTile",0x3a291506,"com.haxepunk.graphics.Tilemap.setTile","com/haxepunk/graphics/Tilemap.hx",109,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(110)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		if ((tmp)){
			HX_STACK_LINE(112)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			column = tmp5;
			HX_STACK_LINE(113)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			row = tmp10;
		}
		HX_STACK_LINE(115)
		int tmp1 = this->_setCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		hx::ModEq(index,tmp1);
		HX_STACK_LINE(116)
		int tmp2 = this->_columns;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		hx::ModEq(column,tmp2);
		HX_STACK_LINE(117)
		int tmp3 = this->_rows;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		hx::ModEq(row,tmp3);
		HX_STACK_LINE(118)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		this->_map->__get(row).StaticCast< Array< int > >()[column] = tmp4;
		HX_STACK_LINE(120)
		bool tmp5 = this->blit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		if ((tmp5)){
			HX_STACK_LINE(122)
			bool tmp6 = this->_opaqueTiles;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			if ((tmp8)){
				HX_STACK_LINE(122)
				tmp9 = (index < (int)0);
			}
			else{
				HX_STACK_LINE(122)
				tmp9 = true;
			}
			HX_STACK_LINE(122)
			if ((tmp9)){
				HX_STACK_LINE(124)
				int tmp10 = column;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				::openfl::_legacy::geom::Rectangle tmp11 = this->_tile;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				Float tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(124)
				::openfl::_legacy::geom::Rectangle tmp14 = this->_tile;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(124)
				tmp14->x = tmp13;
				HX_STACK_LINE(125)
				int tmp15 = row;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(125)
				::openfl::_legacy::geom::Rectangle tmp16 = this->_tile;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(125)
				Float tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(125)
				Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(125)
				::openfl::_legacy::geom::Rectangle tmp19 = this->_tile;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(125)
				tmp19->y = tmp18;
				HX_STACK_LINE(126)
				::openfl::_legacy::geom::Rectangle tmp20 = this->_tile;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(126)
				this->fill(tmp20,(int)0,(int)0);
			}
			HX_STACK_LINE(128)
			bool tmp10 = (index >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			if ((tmp10)){
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					int tmp11 = index;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(130)
					int tmp12 = this->_setColumns;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(130)
					int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(130)
					::openfl::_legacy::geom::Rectangle tmp14 = this->_tile;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(130)
					Float tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(130)
					int tmp16 = this->tileSpacingWidth;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(130)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(130)
					Float tmp18 = (tmp13 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(130)
					::openfl::_legacy::geom::Rectangle tmp19 = this->_tile;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(130)
					tmp19->x = tmp18;
					HX_STACK_LINE(130)
					int tmp20 = index;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(130)
					int tmp21 = this->_setColumns;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(130)
					Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(130)
					int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(130)
					::openfl::_legacy::geom::Rectangle tmp24 = this->_tile;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(130)
					Float tmp25 = tmp24->height;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(130)
					int tmp26 = this->tileSpacingHeight;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(130)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(130)
					Float tmp28 = (tmp23 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(130)
					::openfl::_legacy::geom::Rectangle tmp29 = this->_tile;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(130)
					tmp29->y = tmp28;
				}
				HX_STACK_LINE(131)
				int tmp11 = column;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(131)
				Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(131)
				Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(131)
				int tmp15 = row;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(131)
				::openfl::_legacy::geom::Rectangle tmp16 = this->_tile;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(131)
				Float tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(131)
				Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(131)
				::openfl::_legacy::display::BitmapData tmp19 = this->_set;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(131)
				::openfl::_legacy::geom::Rectangle tmp20 = this->_tile;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(131)
				this->draw(tmp14,tmp18,tmp19,tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,setTile,(void))

Void Tilemap_obj::clearTile( int column,int row){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","clearTile",0x294aadf1,"com.haxepunk.graphics.Tilemap.clearTile","com/haxepunk/graphics/Tilemap.hx",142,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(143)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		this->setTile(tmp,tmp1,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,clearTile,(void))

int Tilemap_obj::getTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getTile",0x472783fa,"com.haxepunk.graphics.Tilemap.getTile","com/haxepunk/graphics/Tilemap.hx",153,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(154)
	bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	if ((tmp)){
		HX_STACK_LINE(156)
		int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		column = tmp5;
		HX_STACK_LINE(157)
		int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		row = tmp10;
	}
	HX_STACK_LINE(159)
	int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	int tmp2 = this->_rows;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	int tmp3 = hx::Mod(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	int tmp4 = column;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	int tmp5 = this->_columns;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(159)
	int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(159)
	int tmp7 = this->_map->__get(tmp3).StaticCast< Array< int > >()->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(159)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,getTile,return )

Void Tilemap_obj::setRect( int column,int row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_index){
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","setRect",0x38d396fc,"com.haxepunk.graphics.Tilemap.setRect","com/haxepunk/graphics/Tilemap.hx",171,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(172)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		if ((tmp)){
			HX_STACK_LINE(174)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			column = tmp5;
			HX_STACK_LINE(175)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			row = tmp10;
			HX_STACK_LINE(176)
			int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(176)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(176)
			width = tmp15;
			HX_STACK_LINE(177)
			int tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(177)
			::openfl::_legacy::geom::Rectangle tmp17 = this->_tile;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(177)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(177)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(177)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(177)
			height = tmp20;
		}
		HX_STACK_LINE(179)
		int tmp1 = this->_columns;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		hx::ModEq(column,tmp1);
		HX_STACK_LINE(180)
		int tmp2 = this->_rows;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		hx::ModEq(row,tmp2);
		HX_STACK_LINE(181)
		int c = column;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(182)
		int tmp3 = (column + width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		int r = tmp3;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(183)
		int tmp4 = (row + height);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(184)
		bool tmp5 = this->usePositions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		bool u = tmp5;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(185)
		this->usePositions = false;
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp6 = (row < b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			if ((tmp7)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				bool tmp8 = (column < r);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(190)
				int tmp10 = column;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				int tmp11 = row;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				this->setTile(tmp10,tmp11,tmp12);
				HX_STACK_LINE(191)
				(column)++;
			}
			HX_STACK_LINE(193)
			column = c;
			HX_STACK_LINE(194)
			(row)++;
		}
		HX_STACK_LINE(196)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilemap_obj,setRect,(void))

Void Tilemap_obj::clearRect( int column,int row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","clearRect",0x27f52fe7,"com.haxepunk.graphics.Tilemap.clearRect","com/haxepunk/graphics/Tilemap.hx",207,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(208)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		if ((tmp)){
			HX_STACK_LINE(210)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(210)
			column = tmp5;
			HX_STACK_LINE(211)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(211)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(211)
			row = tmp10;
			HX_STACK_LINE(212)
			int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(212)
			::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(212)
			Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(212)
			Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(212)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(212)
			width = tmp15;
			HX_STACK_LINE(213)
			int tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			::openfl::_legacy::geom::Rectangle tmp17 = this->_tile;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(213)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(213)
			height = tmp20;
		}
		HX_STACK_LINE(215)
		int tmp1 = this->_columns;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		hx::ModEq(column,tmp1);
		HX_STACK_LINE(216)
		int tmp2 = this->_rows;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		hx::ModEq(row,tmp2);
		HX_STACK_LINE(217)
		int c = column;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(218)
		int tmp3 = (column + width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		int r = tmp3;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(219)
		int tmp4 = (row + height);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(220)
		bool tmp5 = this->usePositions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		bool u = tmp5;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(221)
		this->usePositions = false;
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			bool tmp6 = (row < b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			if ((tmp7)){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				bool tmp8 = (column < r);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(224)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(224)
				if ((tmp9)){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(226)
				int tmp10 = column;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				int tmp11 = row;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				this->clearTile(tmp10,tmp11);
				HX_STACK_LINE(227)
				(column)++;
			}
			HX_STACK_LINE(229)
			column = c;
			HX_STACK_LINE(230)
			(row)++;
		}
		HX_STACK_LINE(232)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,clearRect,(void))

Void Tilemap_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","loadFrom2DArray",0xc47166cd,"com.haxepunk.graphics.Tilemap.loadFrom2DArray","com/haxepunk/graphics/Tilemap.hx",243,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(243)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		while((true)){
			HX_STACK_LINE(243)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(243)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(243)
			if ((tmp1)){
				HX_STACK_LINE(243)
				break;
			}
			HX_STACK_LINE(243)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			int y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(245)
				int tmp3 = array->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				int _g2 = tmp3;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(245)
				while((true)){
					HX_STACK_LINE(245)
					bool tmp4 = (_g3 < _g2);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(245)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					if ((tmp5)){
						HX_STACK_LINE(245)
						break;
					}
					HX_STACK_LINE(245)
					int tmp6 = (_g3)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(245)
					int x = tmp6;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(247)
					int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(247)
					int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(247)
					int tmp9 = array->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(247)
					this->setTile(tmp7,tmp8,tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,loadFrom2DArray,(void))

Void Tilemap_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
::String rowSep = __o_rowSep.Default(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","loadFromString",0x38d61d4b,"com.haxepunk.graphics.Tilemap.loadFromString","com/haxepunk/graphics/Tilemap.hx",260,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(261)
		::String tmp = rowSep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Array< ::String > row = str.split(tmp);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(262)
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(261)
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(261)
		int cols;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(261)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(261)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				bool tmp1 = (_g < rows);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				if ((tmp2)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				int y1 = tmp3;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(266)
				::String tmp4 = row->__get(y1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				bool tmp5 = (tmp4 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				if ((tmp5)){
					HX_STACK_LINE(266)
					continue;
				}
				HX_STACK_LINE(267)
				::String tmp6 = row->__get(y1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				::String tmp7 = columnSep;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				col = tmp6.split(tmp7);
				HX_STACK_LINE(268)
				cols = col->length;
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(269)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(269)
					while((true)){
						HX_STACK_LINE(269)
						bool tmp8 = (_g1 < cols);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(269)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(269)
						if ((tmp9)){
							HX_STACK_LINE(269)
							break;
						}
						HX_STACK_LINE(269)
						int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(269)
						int x1 = tmp10;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(271)
						::String tmp11 = col->__get(x1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(271)
						bool tmp12 = (tmp11 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(271)
						if ((tmp12)){
							HX_STACK_LINE(273)
							int tmp13 = x1;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(273)
							int tmp14 = y1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(273)
							::String tmp15 = col->__get(x1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(273)
							Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(273)
							this->setTile(tmp13,tmp14,tmp16);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,loadFromString,(void))

::String Tilemap_obj::saveToString( ::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
::String rowSep = __o_rowSep.Default(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","saveToString",0x64686433,"com.haxepunk.graphics.Tilemap.saveToString","com/haxepunk/graphics/Tilemap.hx",287,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(288)
		::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(288)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(288)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(290)
			int tmp = this->_rows;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			while((true)){
				HX_STACK_LINE(290)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(290)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				if ((tmp2)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(290)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(290)
				int y1 = tmp3;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(292)
					int tmp4 = this->_columns;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(292)
					int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(292)
					while((true)){
						HX_STACK_LINE(292)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(292)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(292)
						if ((tmp6)){
							HX_STACK_LINE(292)
							break;
						}
						HX_STACK_LINE(292)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(292)
						int x1 = tmp7;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(294)
						int tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(294)
						int tmp9 = y1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(294)
						int tmp10 = this->getTile(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(294)
						::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						hx::AddEq(s,tmp11);
						HX_STACK_LINE(295)
						int tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(295)
						int tmp13 = this->_columns;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(295)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(295)
						bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(295)
						if ((tmp15)){
							HX_STACK_LINE(295)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(297)
				int tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				int tmp5 = this->_rows;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				if ((tmp7)){
					HX_STACK_LINE(297)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(299)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,saveToString,return )

int Tilemap_obj::getIndex( int tilesColumn,int tilesRow){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getIndex",0xa94b94c6,"com.haxepunk.graphics.Tilemap.getIndex","com/haxepunk/graphics/Tilemap.hx",309,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tilesColumn,"tilesColumn")
	HX_STACK_ARG(tilesRow,"tilesRow")
	HX_STACK_LINE(310)
	int tmp = tilesRow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	int tmp1 = this->_setRows;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(310)
	int tmp3 = this->_setColumns;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(310)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(310)
	int tmp5 = tilesColumn;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(310)
	int tmp6 = this->_setColumns;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(310)
	int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(310)
	int tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(310)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,getIndex,return )

int Tilemap_obj::getX( int index){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getX",0x96e3102c,"com.haxepunk.graphics.Tilemap.getX","com/haxepunk/graphics/Tilemap.hx",319,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(320)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	int tmp1 = this->_setColumns;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,getX,return )

int Tilemap_obj::getY( int index){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","getY",0x96e3102d,"com.haxepunk.graphics.Tilemap.getY","com/haxepunk/graphics/Tilemap.hx",329,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(330)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	int tmp1 = this->_setColumns;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,getY,return )

Void Tilemap_obj::shiftTiles( int columns,int rows,hx::Null< bool >  __o_wrap){
bool wrap = __o_wrap.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","shiftTiles",0x325b324d,"com.haxepunk.graphics.Tilemap.shiftTiles","com/haxepunk/graphics/Tilemap.hx",340,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columns,"columns")
	HX_STACK_ARG(rows,"rows")
	HX_STACK_ARG(wrap,"wrap")
{
		HX_STACK_LINE(341)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		if ((tmp)){
			HX_STACK_LINE(343)
			int tmp1 = columns;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(343)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			columns = tmp5;
			HX_STACK_LINE(344)
			int tmp6 = rows;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(344)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(344)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(344)
			rows = tmp10;
		}
		HX_STACK_LINE(347)
		bool tmp1 = (columns != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		if ((tmp1)){
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(349)
				int tmp2 = this->_rows;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(349)
				while((true)){
					HX_STACK_LINE(349)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(349)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(349)
					if ((tmp4)){
						HX_STACK_LINE(349)
						break;
					}
					HX_STACK_LINE(349)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(349)
					int y = tmp5;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(351)
					Array< int > row = this->_map->__get(y).StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(352)
					bool tmp6 = (columns > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(352)
					if ((tmp6)){
						HX_STACK_LINE(354)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(354)
						while((true)){
							HX_STACK_LINE(354)
							bool tmp7 = (_g2 < columns);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(354)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(354)
							if ((tmp8)){
								HX_STACK_LINE(354)
								break;
							}
							HX_STACK_LINE(354)
							int tmp9 = (_g2)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(354)
							int x = tmp9;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(356)
							Dynamic tmp10 = row->pop();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(356)
							int tile = tmp10;		HX_STACK_VAR(tile,"tile");
							HX_STACK_LINE(357)
							bool tmp11 = wrap;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(357)
							if ((tmp11)){
								HX_STACK_LINE(357)
								int tmp12 = tile;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(357)
								row->unshift(tmp12);
							}
						}
					}
					else{
						HX_STACK_LINE(362)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(362)
						int tmp7 = columns;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(362)
						Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(362)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(362)
						int _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(362)
						while((true)){
							HX_STACK_LINE(362)
							bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(362)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(362)
							if ((tmp11)){
								HX_STACK_LINE(362)
								break;
							}
							HX_STACK_LINE(362)
							int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(362)
							int x = tmp12;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(364)
							Dynamic tmp13 = row->shift();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(364)
							int tile = tmp13;		HX_STACK_VAR(tile,"tile");
							HX_STACK_LINE(365)
							bool tmp14 = wrap;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							if ((tmp14)){
								HX_STACK_LINE(365)
								int tmp15 = tile;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(365)
								row->push(tmp15);
							}
						}
					}
				}
			}
			HX_STACK_LINE(369)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(369)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			int tmp4 = this->_map->__get(tmp3).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			this->_columns = tmp4;
		}
		HX_STACK_LINE(381)
		bool tmp2 = (rows != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		if ((tmp2)){
			HX_STACK_LINE(383)
			bool tmp3 = (rows > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			if ((tmp3)){
				HX_STACK_LINE(385)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(385)
				while((true)){
					HX_STACK_LINE(385)
					bool tmp4 = (_g < rows);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(385)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(385)
					if ((tmp5)){
						HX_STACK_LINE(385)
						break;
					}
					HX_STACK_LINE(385)
					int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(385)
					int y = tmp6;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(387)
					Array< int > row = this->_map->pop().StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(388)
					bool tmp7 = wrap;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(388)
					if ((tmp7)){
						HX_STACK_LINE(388)
						this->_map->unshift(row);
					}
				}
			}
			else{
				HX_STACK_LINE(393)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(393)
				int tmp4 = rows;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(393)
				Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(393)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(393)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(393)
				while((true)){
					HX_STACK_LINE(393)
					bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					if ((tmp8)){
						HX_STACK_LINE(393)
						break;
					}
					HX_STACK_LINE(393)
					int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(393)
					int y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(395)
					Array< int > row = this->_map->shift().StaticCast< Array< int > >();		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(396)
					bool tmp10 = wrap;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(396)
					if ((tmp10)){
						HX_STACK_LINE(396)
						this->_map->push(row);
					}
				}
			}
			HX_STACK_LINE(399)
			int tmp4 = this->_map->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			this->_rows = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,shiftTiles,(void))

Void Tilemap_obj::updateRect( ::openfl::_legacy::geom::Rectangle rect,bool clear){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","updateRect",0x172a8077,"com.haxepunk.graphics.Tilemap.updateRect","com/haxepunk/graphics/Tilemap.hx",414,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(clear,"clear")
		HX_STACK_LINE(415)
		Float tmp = rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		int x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(416)
		Float tmp2 = rect->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		int y = tmp3;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(417)
		Float tmp4 = (x + rect->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		int w = tmp5;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(418)
		Float tmp6 = (y + rect->height);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(418)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(418)
		int h = tmp7;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(419)
		bool tmp8 = this->usePositions;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(419)
		bool u = tmp8;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(420)
		this->usePositions = false;
		HX_STACK_LINE(421)
		bool tmp9 = clear;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(421)
		if ((tmp9)){
			HX_STACK_LINE(423)
			while((true)){
				HX_STACK_LINE(423)
				bool tmp10 = (y < h);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(423)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(423)
				if ((tmp11)){
					HX_STACK_LINE(423)
					break;
				}
				HX_STACK_LINE(425)
				while((true)){
					HX_STACK_LINE(425)
					bool tmp12 = (x < w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(425)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(425)
					if ((tmp13)){
						HX_STACK_LINE(425)
						break;
					}
					HX_STACK_LINE(425)
					int tmp14 = (x)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(425)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(425)
					this->clearTile(tmp14,tmp15);
				}
				HX_STACK_LINE(426)
				Float tmp12 = rect->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(426)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(426)
				x = tmp13;
				HX_STACK_LINE(427)
				(y)++;
			}
		}
		else{
			HX_STACK_LINE(432)
			while((true)){
				HX_STACK_LINE(432)
				bool tmp10 = (y < h);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(432)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(432)
				if ((tmp11)){
					HX_STACK_LINE(432)
					break;
				}
				HX_STACK_LINE(434)
				while((true)){
					HX_STACK_LINE(434)
					bool tmp12 = (x < w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(434)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(434)
					if ((tmp13)){
						HX_STACK_LINE(434)
						break;
					}
					HX_STACK_LINE(434)
					int tmp14 = (x)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(434)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(434)
					this->updateTile(tmp14,tmp15);
				}
				HX_STACK_LINE(435)
				Float tmp12 = rect->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(435)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(435)
				x = tmp13;
				HX_STACK_LINE(436)
				(y)++;
			}
		}
		HX_STACK_LINE(439)
		this->usePositions = u;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,updateRect,(void))

Void Tilemap_obj::renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","renderAtlas",0x543fc62b,"com.haxepunk.graphics.Tilemap.renderAtlas","com/haxepunk/graphics/Tilemap.hx",444,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(446)
		Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		Float tmp3 = camera->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		Float tmp4 = this->scrollX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(446)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		tmp7->x = tmp6;
		HX_STACK_LINE(447)
		Float tmp8 = point->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(447)
		Float tmp11 = camera->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(447)
		Float tmp12 = this->scrollY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(447)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(447)
		::openfl::_legacy::geom::Point tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(447)
		tmp15->y = tmp14;
		HX_STACK_LINE(449)
		::com::haxepunk::Screen tmp16 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(449)
		Float scalex = tmp16->fullScaleX;		HX_STACK_VAR(scalex,"scalex");
		HX_STACK_LINE(450)
		::com::haxepunk::Screen tmp17 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(450)
		Float scaley = tmp17->fullScaleY;		HX_STACK_VAR(scaley,"scaley");
		HX_STACK_LINE(451)
		::openfl::_legacy::geom::Rectangle tmp18 = this->_tile;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(451)
		Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(451)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(451)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(451)
		int tw = tmp21;		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(452)
		::openfl::_legacy::geom::Rectangle tmp22 = this->_tile;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(452)
		Float tmp23 = tmp22->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(452)
		int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(452)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(452)
		int th = tmp25;		HX_STACK_VAR(th,"th");
		HX_STACK_LINE(454)
		Float tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(454)
		Float tmp27 = this->scaleX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(454)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(454)
		Float scx = tmp28;		HX_STACK_VAR(scx,"scx");
		HX_STACK_LINE(455)
		Float tmp29 = this->scale;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(455)
		Float tmp30 = this->scaleY;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(455)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(455)
		Float scy = tmp31;		HX_STACK_VAR(scy,"scy");
		HX_STACK_LINE(458)
		::openfl::_legacy::geom::Point tmp32 = this->_point;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(458)
		Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(458)
		Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(458)
		Float tmp35 = (tw * scx);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(458)
		Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(458)
		int tmp37 = ::Math_obj::floor(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(458)
		int startx = tmp37;		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(459)
		::openfl::_legacy::geom::Point tmp38 = this->_point;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(459)
		Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(459)
		Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(459)
		Float tmp41 = (th * scy);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(459)
		Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(459)
		int tmp43 = ::Math_obj::floor(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(459)
		int starty = tmp43;		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(460)
		int tmp44 = (startx + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(460)
		int tmp45 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(460)
		Float tmp46 = (tw * scx);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(460)
		Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(460)
		int tmp48 = ::Math_obj::ceil(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(460)
		int tmp49 = (tmp44 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(460)
		int destx = tmp49;		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(461)
		int tmp50 = (starty + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(461)
		int tmp51 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(461)
		Float tmp52 = (th * scy);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(461)
		Float tmp53 = (Float(tmp51) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(461)
		int tmp54 = ::Math_obj::ceil(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(461)
		int tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(461)
		int desty = tmp55;		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(464)
		int tmp56 = startx;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(464)
		int tmp57 = this->_columns;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(464)
		bool tmp58 = (tmp56 > tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(464)
		bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(464)
		bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(464)
		bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(464)
		if ((tmp60)){
			HX_STACK_LINE(464)
			int tmp62 = starty;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(464)
			int tmp63 = this->_rows;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(464)
			int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(464)
			int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(464)
			tmp61 = (tmp62 > tmp65);
		}
		else{
			HX_STACK_LINE(464)
			tmp61 = true;
		}
		HX_STACK_LINE(464)
		bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(464)
		bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(464)
		bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(464)
		if ((tmp63)){
			HX_STACK_LINE(464)
			tmp64 = (destx < (int)0);
		}
		else{
			HX_STACK_LINE(464)
			tmp64 = true;
		}
		HX_STACK_LINE(464)
		bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(464)
		bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(464)
		if ((tmp65)){
			HX_STACK_LINE(464)
			tmp66 = (desty < (int)0);
		}
		else{
			HX_STACK_LINE(464)
			tmp66 = true;
		}
		HX_STACK_LINE(464)
		if ((tmp66)){
			HX_STACK_LINE(465)
			return null();
		}
		HX_STACK_LINE(468)
		bool tmp67 = (startx < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(468)
		if ((tmp67)){
			HX_STACK_LINE(468)
			startx = (int)0;
		}
		HX_STACK_LINE(469)
		int tmp68 = destx;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(469)
		int tmp69 = this->_columns;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(469)
		bool tmp70 = (tmp68 > tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(469)
		if ((tmp70)){
			HX_STACK_LINE(469)
			int tmp71 = this->_columns;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(469)
			destx = tmp71;
		}
		HX_STACK_LINE(470)
		bool tmp71 = (starty < (int)0);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(470)
		if ((tmp71)){
			HX_STACK_LINE(470)
			starty = (int)0;
		}
		HX_STACK_LINE(471)
		int tmp72 = desty;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(471)
		int tmp73 = this->_rows;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(471)
		bool tmp74 = (tmp72 > tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(471)
		if ((tmp74)){
			HX_STACK_LINE(471)
			int tmp75 = this->_rows;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(471)
			desty = tmp75;
		}
		HX_STACK_LINE(473)
		Float wx;		HX_STACK_VAR(wx,"wx");
		HX_STACK_LINE(473)
		::openfl::_legacy::geom::Point tmp75 = this->_point;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(473)
		Float tmp76 = tmp75->x;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(473)
		int tmp77 = (startx * tw);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(473)
		Float tmp78 = scx;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(473)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(473)
		Float tmp80 = (tmp76 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(473)
		Float tmp81 = scalex;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(473)
		Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(473)
		Float sx = tmp82;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(474)
		::openfl::_legacy::geom::Point tmp83 = this->_point;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(474)
		Float tmp84 = tmp83->y;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(474)
		int tmp85 = (starty * th);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(474)
		Float tmp86 = scy;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(474)
		Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(474)
		Float tmp88 = (tmp84 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(474)
		Float tmp89 = scaley;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(474)
		Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(474)
		Float wy = tmp90;		HX_STACK_VAR(wy,"wy");
		HX_STACK_LINE(475)
		Float tmp91 = (tw * scx);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(475)
		Float tmp92 = scalex;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(475)
		Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(475)
		Float stepx = tmp93;		HX_STACK_VAR(stepx,"stepx");
		HX_STACK_LINE(476)
		Float tmp94 = (th * scy);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(476)
		Float tmp95 = scaley;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(476)
		Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(476)
		Float stepy = tmp96;		HX_STACK_VAR(stepy,"stepy");
		HX_STACK_LINE(477)
		int tile = (int)0;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			int _g = starty;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			while((true)){
				HX_STACK_LINE(479)
				bool tmp97 = (_g < desty);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(479)
				bool tmp98 = !(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(479)
				if ((tmp98)){
					HX_STACK_LINE(479)
					break;
				}
				HX_STACK_LINE(479)
				int tmp99 = (_g)++;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(479)
				int y = tmp99;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(481)
				wx = sx;
				HX_STACK_LINE(483)
				Float tmp100 = (wy + stepy);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(483)
				int tmp101 = ::Math_obj::floor(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(483)
				Float tmp102 = wy;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(483)
				int tmp103 = ::Math_obj::floor(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(483)
				int tmp104 = (tmp101 - tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(483)
				::openfl::_legacy::geom::Rectangle tmp105 = this->_tile;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(483)
				Float tmp106 = tmp105->height;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(483)
				int tmp107 = ::Std_obj::_int(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(483)
				Float tmp108 = (Float(tmp104) / Float(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(483)
				scy = tmp108;
				HX_STACK_LINE(485)
				{
					HX_STACK_LINE(485)
					int _g1 = startx;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(485)
					while((true)){
						HX_STACK_LINE(485)
						bool tmp109 = (_g1 < destx);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(485)
						bool tmp110 = !(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(485)
						if ((tmp110)){
							HX_STACK_LINE(485)
							break;
						}
						HX_STACK_LINE(485)
						int tmp111 = (_g1)++;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(485)
						int x = tmp111;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(487)
						int tmp112 = y;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(487)
						int tmp113 = this->_rows;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(487)
						int tmp114 = hx::Mod(tmp112,tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(487)
						int tmp115 = x;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(487)
						int tmp116 = this->_columns;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(487)
						int tmp117 = hx::Mod(tmp115,tmp116);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(487)
						int tmp118 = this->_map->__get(tmp114).StaticCast< Array< int > >()->__get(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(487)
						tile = tmp118;
						HX_STACK_LINE(488)
						bool tmp119 = (tile >= (int)0);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(488)
						if ((tmp119)){
							HX_STACK_LINE(491)
							Float tmp120 = (wx + stepx);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(491)
							int tmp121 = ::Math_obj::floor(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(491)
							Float tmp122 = wx;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(491)
							int tmp123 = ::Math_obj::floor(tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(491)
							int tmp124 = (tmp121 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(491)
							::openfl::_legacy::geom::Rectangle tmp125 = this->_tile;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(491)
							Float tmp126 = tmp125->width;		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(491)
							int tmp127 = ::Std_obj::_int(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(491)
							Float tmp128 = (Float(tmp124) / Float(tmp127));		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(491)
							scx = tmp128;
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								int tmp129 = tile;		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(493)
								int tmp130 = this->_setColumns;		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(493)
								int tmp131 = hx::Mod(tmp129,tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(493)
								::openfl::_legacy::geom::Rectangle tmp132 = this->_tile;		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(493)
								Float tmp133 = tmp132->width;		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(493)
								int tmp134 = this->tileSpacingWidth;		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(493)
								Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(493)
								Float tmp136 = (tmp131 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(493)
								::openfl::_legacy::geom::Rectangle tmp137 = this->_tile;		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(493)
								tmp137->x = tmp136;
								HX_STACK_LINE(493)
								int tmp138 = tile;		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(493)
								int tmp139 = this->_setColumns;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(493)
								Float tmp140 = (Float(tmp138) / Float(tmp139));		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(493)
								int tmp141 = ::Std_obj::_int(tmp140);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(493)
								::openfl::_legacy::geom::Rectangle tmp142 = this->_tile;		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(493)
								Float tmp143 = tmp142->height;		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(493)
								int tmp144 = this->tileSpacingHeight;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(493)
								Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(493)
								Float tmp146 = (tmp141 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(493)
								::openfl::_legacy::geom::Rectangle tmp147 = this->_tile;		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(493)
								tmp147->y = tmp146;
							}
							HX_STACK_LINE(494)
							{
								HX_STACK_LINE(494)
								::openfl::_legacy::geom::Rectangle tmp129 = this->_tile;		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(494)
								::openfl::_legacy::geom::Rectangle rect = tmp129;		HX_STACK_VAR(rect,"rect");
								HX_STACK_LINE(494)
								Float tmp130 = wx;		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(494)
								int tmp131 = ::Math_obj::floor(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(494)
								Float x1 = tmp131;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(494)
								Float tmp132 = wy;		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(494)
								int tmp133 = ::Math_obj::floor(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(494)
								Float y1 = tmp133;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(494)
								Float tmp134 = this->get_alpha();		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(494)
								Float alpha = tmp134;		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(494)
								{
									HX_STACK_LINE(494)
									::com::haxepunk::graphics::atlas::TileAtlas tmp135 = this->_atlas;		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(494)
									::com::haxepunk::graphics::atlas::AtlasData _this = tmp135->_data;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(494)
									bool tmp136 = this->smooth;		HX_STACK_VAR(tmp136,"tmp136");
									HX_STACK_LINE(494)
									Dynamic smooth = tmp136;		HX_STACK_VAR(smooth,"smooth");
									HX_STACK_LINE(494)
									{
										HX_STACK_LINE(494)
										::com::haxepunk::graphics::atlas::AtlasData tmp137 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp137,"tmp137");
										HX_STACK_LINE(494)
										::com::haxepunk::graphics::atlas::AtlasData tmp138 = _this;		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(494)
										bool tmp139 = (tmp137 != tmp138);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(494)
										if ((tmp139)){
											HX_STACK_LINE(494)
											::com::haxepunk::graphics::atlas::AtlasData tmp140 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(494)
											bool tmp141 = (tmp140 != null());		HX_STACK_VAR(tmp141,"tmp141");
											HX_STACK_LINE(494)
											if ((tmp141)){
												HX_STACK_LINE(494)
												::com::haxepunk::graphics::atlas::AtlasData tmp142 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp142,"tmp142");
												HX_STACK_LINE(494)
												::com::haxepunk::graphics::atlas::AtlasData _this1 = tmp142;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(494)
												bool tmp143 = (_this1->_dataIndex != (int)0);		HX_STACK_VAR(tmp143,"tmp143");
												HX_STACK_LINE(494)
												if ((tmp143)){
													HX_STACK_LINE(494)
													::com::haxepunk::Scene tmp144 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp144,"tmp144");
													HX_STACK_LINE(494)
													::openfl::_legacy::display::Graphics tmp145 = tmp144->sprite->get_graphics();		HX_STACK_VAR(tmp145,"tmp145");
													HX_STACK_LINE(494)
													int tmp146 = _this1->_renderFlags;		HX_STACK_VAR(tmp146,"tmp146");
													HX_STACK_LINE(494)
													int tmp147 = _this1->_dataIndex;		HX_STACK_VAR(tmp147,"tmp147");
													HX_STACK_LINE(494)
													_this1->_tilesheet->drawTiles(tmp145,_this1->_data,false,tmp146,tmp147);
													HX_STACK_LINE(494)
													_this1->_dataIndex = (int)0;
												}
												HX_STACK_LINE(494)
												bool tmp144 = (_this1->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp144,"tmp144");
												HX_STACK_LINE(494)
												if ((tmp144)){
													HX_STACK_LINE(494)
													::com::haxepunk::Scene tmp145 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp145,"tmp145");
													HX_STACK_LINE(494)
													::openfl::_legacy::display::Graphics tmp146 = tmp145->sprite->get_graphics();		HX_STACK_VAR(tmp146,"tmp146");
													HX_STACK_LINE(494)
													int tmp147 = _this1->_renderFlags;		HX_STACK_VAR(tmp147,"tmp147");
													HX_STACK_LINE(494)
													int tmp148 = _this1->_smoothDataIndex;		HX_STACK_VAR(tmp148,"tmp148");
													HX_STACK_LINE(494)
													_this1->_tilesheet->drawTiles(tmp146,_this1->_smoothData,true,tmp147,tmp148);
													HX_STACK_LINE(494)
													_this1->_smoothDataIndex = (int)0;
												}
											}
											HX_STACK_LINE(494)
											::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
										}
										HX_STACK_LINE(494)
										_this;
									}
									HX_STACK_LINE(494)
									bool tmp137 = (smooth == null());		HX_STACK_VAR(tmp137,"tmp137");
									HX_STACK_LINE(494)
									if ((tmp137)){
										HX_STACK_LINE(494)
										bool tmp138 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp138,"tmp138");
										HX_STACK_LINE(494)
										smooth = tmp138;
									}
									HX_STACK_LINE(494)
									Dynamic tmp138 = smooth;		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(494)
									Array< Float > _data;		HX_STACK_VAR(_data,"_data");
									HX_STACK_LINE(494)
									if ((tmp138)){
										HX_STACK_LINE(494)
										_data = _this->_smoothData;
									}
									else{
										HX_STACK_LINE(494)
										_data = _this->_data;
									}
									HX_STACK_LINE(494)
									Dynamic tmp139 = smooth;		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(494)
									int tmp140;		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(494)
									if ((tmp139)){
										HX_STACK_LINE(494)
										tmp140 = _this->_smoothDataIndex;
									}
									else{
										HX_STACK_LINE(494)
										tmp140 = _this->_dataIndex;
									}
									HX_STACK_LINE(494)
									int _dataIndex = tmp140;		HX_STACK_VAR(_dataIndex,"_dataIndex");
									HX_STACK_LINE(494)
									int tmp141 = (_dataIndex)++;		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(494)
									Float tmp142 = x1;		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(494)
									_data[tmp141] = tmp142;
									HX_STACK_LINE(494)
									int tmp143 = (_dataIndex)++;		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(494)
									Float tmp144 = y1;		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(494)
									_data[tmp143] = tmp144;
									HX_STACK_LINE(494)
									int tmp145 = (_dataIndex)++;		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(494)
									Float tmp146 = rect->x;		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(494)
									_data[tmp145] = tmp146;
									HX_STACK_LINE(494)
									int tmp147 = (_dataIndex)++;		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(494)
									Float tmp148 = rect->y;		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(494)
									_data[tmp147] = tmp148;
									HX_STACK_LINE(494)
									int tmp149 = (_dataIndex)++;		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(494)
									Float tmp150 = rect->width;		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(494)
									_data[tmp149] = tmp150;
									HX_STACK_LINE(494)
									int tmp151 = (_dataIndex)++;		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(494)
									Float tmp152 = rect->height;		HX_STACK_VAR(tmp152,"tmp152");
									HX_STACK_LINE(494)
									_data[tmp151] = tmp152;
									HX_STACK_LINE(494)
									bool tmp153 = true;		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(494)
									if ((tmp153)){
										HX_STACK_LINE(494)
										int tmp154 = (_dataIndex)++;		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(494)
										Float tmp155 = scx;		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(494)
										_data[tmp154] = tmp155;
										HX_STACK_LINE(494)
										int tmp156 = (_dataIndex)++;		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(494)
										_data[tmp156] = (int)0;
										HX_STACK_LINE(494)
										int tmp157 = (_dataIndex)++;		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(494)
										_data[tmp157] = (int)0;
										HX_STACK_LINE(494)
										int tmp158 = (_dataIndex)++;		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(494)
										Float tmp159 = scy;		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(494)
										_data[tmp158] = tmp159;
									}
									else{
										HX_STACK_LINE(494)
										Float tmp154 = (int)0;		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(494)
										Float tmp155 = ::Math_obj::PI;		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(494)
										Float tmp156 = (Float(tmp155) / Float((int)-180));		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(494)
										Float tmp157 = (tmp154 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(494)
										Float tmp158 = ::Math_obj::cos(tmp157);		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(494)
										Float cos = tmp158;		HX_STACK_VAR(cos,"cos");
										HX_STACK_LINE(494)
										Float tmp159 = (int)0;		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(494)
										Float tmp160 = ::Math_obj::PI;		HX_STACK_VAR(tmp160,"tmp160");
										HX_STACK_LINE(494)
										Float tmp161 = (Float(tmp160) / Float((int)-180));		HX_STACK_VAR(tmp161,"tmp161");
										HX_STACK_LINE(494)
										Float tmp162 = (tmp159 * tmp161);		HX_STACK_VAR(tmp162,"tmp162");
										HX_STACK_LINE(494)
										Float tmp163 = ::Math_obj::sin(tmp162);		HX_STACK_VAR(tmp163,"tmp163");
										HX_STACK_LINE(494)
										Float sin = tmp163;		HX_STACK_VAR(sin,"sin");
										HX_STACK_LINE(494)
										int tmp164 = (_dataIndex)++;		HX_STACK_VAR(tmp164,"tmp164");
										HX_STACK_LINE(494)
										Float tmp165 = (cos * scx);		HX_STACK_VAR(tmp165,"tmp165");
										HX_STACK_LINE(494)
										_data[tmp164] = tmp165;
										HX_STACK_LINE(494)
										int tmp166 = (_dataIndex)++;		HX_STACK_VAR(tmp166,"tmp166");
										HX_STACK_LINE(494)
										Float tmp167 = sin;		HX_STACK_VAR(tmp167,"tmp167");
										HX_STACK_LINE(494)
										Float tmp168 = -(tmp167);		HX_STACK_VAR(tmp168,"tmp168");
										HX_STACK_LINE(494)
										Float tmp169 = scy;		HX_STACK_VAR(tmp169,"tmp169");
										HX_STACK_LINE(494)
										Float tmp170 = (tmp168 * tmp169);		HX_STACK_VAR(tmp170,"tmp170");
										HX_STACK_LINE(494)
										_data[tmp166] = tmp170;
										HX_STACK_LINE(494)
										int tmp171 = (_dataIndex)++;		HX_STACK_VAR(tmp171,"tmp171");
										HX_STACK_LINE(494)
										Float tmp172 = (sin * scx);		HX_STACK_VAR(tmp172,"tmp172");
										HX_STACK_LINE(494)
										_data[tmp171] = tmp172;
										HX_STACK_LINE(494)
										int tmp173 = (_dataIndex)++;		HX_STACK_VAR(tmp173,"tmp173");
										HX_STACK_LINE(494)
										Float tmp174 = (cos * scy);		HX_STACK_VAR(tmp174,"tmp174");
										HX_STACK_LINE(494)
										_data[tmp173] = tmp174;
									}
									HX_STACK_LINE(494)
									bool tmp154 = _this->_flagRGB;		HX_STACK_VAR(tmp154,"tmp154");
									HX_STACK_LINE(494)
									if ((tmp154)){
										HX_STACK_LINE(494)
										int tmp155 = (_dataIndex)++;		HX_STACK_VAR(tmp155,"tmp155");
										HX_STACK_LINE(494)
										Float tmp156 = this->_red;		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(494)
										_data[tmp155] = tmp156;
										HX_STACK_LINE(494)
										int tmp157 = (_dataIndex)++;		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(494)
										Float tmp158 = this->_green;		HX_STACK_VAR(tmp158,"tmp158");
										HX_STACK_LINE(494)
										_data[tmp157] = tmp158;
										HX_STACK_LINE(494)
										int tmp159 = (_dataIndex)++;		HX_STACK_VAR(tmp159,"tmp159");
										HX_STACK_LINE(494)
										Float tmp160 = this->_blue;		HX_STACK_VAR(tmp160,"tmp160");
										HX_STACK_LINE(494)
										_data[tmp159] = tmp160;
									}
									HX_STACK_LINE(494)
									bool tmp155 = _this->_flagAlpha;		HX_STACK_VAR(tmp155,"tmp155");
									HX_STACK_LINE(494)
									if ((tmp155)){
										HX_STACK_LINE(494)
										int tmp156 = (_dataIndex)++;		HX_STACK_VAR(tmp156,"tmp156");
										HX_STACK_LINE(494)
										Float tmp157 = alpha;		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(494)
										_data[tmp156] = tmp157;
									}
									HX_STACK_LINE(494)
									Dynamic tmp156 = smooth;		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(494)
									if ((tmp156)){
										HX_STACK_LINE(494)
										_this->_smoothDataIndex = _dataIndex;
									}
									else{
										HX_STACK_LINE(494)
										_this->_dataIndex = _dataIndex;
									}
								}
							}
						}
						HX_STACK_LINE(496)
						hx::AddEq(wx,stepx);
					}
				}
				HX_STACK_LINE(498)
				hx::AddEq(wy,stepy);
			}
		}
	}
return null();
}


::com::haxepunk::masks::Grid Tilemap_obj::createGrid( Array< int > solidTiles,::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","createGrid",0x69c7e08c,"com.haxepunk.graphics.Tilemap.createGrid","com/haxepunk/graphics/Tilemap.hx",509,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(solidTiles,"solidTiles")
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(510)
	bool tmp = (grid == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	if ((tmp)){
		HX_STACK_LINE(512)
		int tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		int tmp2 = this->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_tile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(512)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(512)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_tile;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(512)
		Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(512)
		::com::haxepunk::masks::Grid tmp9 = ::com::haxepunk::masks::Grid_obj::__new(tmp1,tmp2,tmp5,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(512)
		grid = tmp9;
	}
	HX_STACK_LINE(515)
	{
		HX_STACK_LINE(515)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(515)
		int tmp1 = this->_rows;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(515)
		while((true)){
			HX_STACK_LINE(515)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(515)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			if ((tmp3)){
				HX_STACK_LINE(515)
				break;
			}
			HX_STACK_LINE(515)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(515)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(517)
				int tmp5 = this->_columns;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(517)
				int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(517)
				while((true)){
					HX_STACK_LINE(517)
					bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(517)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(517)
					if ((tmp7)){
						HX_STACK_LINE(517)
						break;
					}
					HX_STACK_LINE(517)
					int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(517)
					int x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(519)
					int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(519)
					int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(519)
					int tmp11 = this->getTile(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(519)
					int tmp12 = solidTiles->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(519)
					bool tmp13 = (tmp12 != (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(519)
					if ((tmp13)){
						HX_STACK_LINE(521)
						int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(521)
						int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(521)
						grid->setTile(tmp14,tmp15,true);
					}
				}
			}
		}
	}
	HX_STACK_LINE(526)
	::com::haxepunk::masks::Grid tmp1 = grid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,createGrid,return )

Void Tilemap_obj::updateTileRect( int index){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","updateTileRect",0x08884c45,"com.haxepunk.graphics.Tilemap.updateTileRect","com/haxepunk/graphics/Tilemap.hx",531,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(532)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		int tmp1 = this->_setColumns;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_tile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		int tmp5 = this->tileSpacingWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(532)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		Float tmp7 = (tmp2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::openfl::_legacy::geom::Rectangle tmp8 = this->_tile;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		tmp8->x = tmp7;
		HX_STACK_LINE(533)
		int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(533)
		int tmp10 = this->_setColumns;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		::openfl::_legacy::geom::Rectangle tmp13 = this->_tile;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(533)
		Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(533)
		int tmp15 = this->tileSpacingHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(533)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(533)
		Float tmp17 = (tmp12 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(533)
		::openfl::_legacy::geom::Rectangle tmp18 = this->_tile;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(533)
		tmp18->y = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,updateTileRect,(void))

Void Tilemap_obj::updateTile( int column,int row){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","updateTile",0x187ffe81,"com.haxepunk.graphics.Tilemap.updateTile","com/haxepunk/graphics/Tilemap.hx",538,0x8dab491b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(row,"row")
		HX_STACK_LINE(539)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		int tmp2 = row;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		int tmp3 = this->_rows;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		int tmp5 = column;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		int tmp6 = this->_columns;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		int tmp8 = this->_map->__get(tmp4).StaticCast< Array< int > >()->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		this->setTile(tmp,tmp1,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,updateTile,(void))

int Tilemap_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileWidth",0x40cee565,"com.haxepunk.graphics.Tilemap.get_tileWidth","com/haxepunk/graphics/Tilemap.hx",546,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(546)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileWidth,return )

int Tilemap_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileHeight",0x2a894ba8,"com.haxepunk.graphics.Tilemap.get_tileHeight","com/haxepunk/graphics/Tilemap.hx",552,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(552)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileHeight,return )

int Tilemap_obj::get_tileCount( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_tileCount",0xc0cf742e,"com.haxepunk.graphics.Tilemap.get_tileCount","com/haxepunk/graphics/Tilemap.hx",568,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(568)
	int tmp = this->_setCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileCount,return )

int Tilemap_obj::get_columns( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_columns",0xdb05590a,"com.haxepunk.graphics.Tilemap.get_columns","com/haxepunk/graphics/Tilemap.hx",574,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(574)
	int tmp = this->_columns;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_columns,return )

int Tilemap_obj::get_rows( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_rows",0x56c99acc,"com.haxepunk.graphics.Tilemap.get_rows","com/haxepunk/graphics/Tilemap.hx",580,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(580)
	int tmp = this->_rows;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_rows,return )

bool Tilemap_obj::get_opaqueTiles( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Tilemap","get_opaqueTiles",0xa2790791,"com.haxepunk.graphics.Tilemap.get_opaqueTiles","com/haxepunk/graphics/Tilemap.hx",587,0x8dab491b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	bool tmp = this->_opaqueTiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_opaqueTiles,return )


Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	HX_MARK_MEMBER_NAME(tileSpacingWidth,"tileSpacingWidth");
	HX_MARK_MEMBER_NAME(tileSpacingHeight,"tileSpacingHeight");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(opaqueTiles,"opaqueTiles");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_opaqueTiles,"_opaqueTiles");
	HX_MARK_MEMBER_NAME(_set,"_set");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_MEMBER_NAME(_setColumns,"_setColumns");
	HX_MARK_MEMBER_NAME(_setRows,"_setRows");
	HX_MARK_MEMBER_NAME(_setCount,"_setCount");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	::com::haxepunk::graphics::Canvas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	HX_VISIT_MEMBER_NAME(tileSpacingWidth,"tileSpacingWidth");
	HX_VISIT_MEMBER_NAME(tileSpacingHeight,"tileSpacingHeight");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(opaqueTiles,"opaqueTiles");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
	HX_VISIT_MEMBER_NAME(_rows,"_rows");
	HX_VISIT_MEMBER_NAME(_opaqueTiles,"_opaqueTiles");
	HX_VISIT_MEMBER_NAME(_set,"_set");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	HX_VISIT_MEMBER_NAME(_setColumns,"_setColumns");
	HX_VISIT_MEMBER_NAME(_setRows,"_setRows");
	HX_VISIT_MEMBER_NAME(_setCount,"_setCount");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	::com::haxepunk::graphics::Canvas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp == hx::paccAlways ? get_rows() : rows; }
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"_set") ) { return _set; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return inCallProp == hx::paccAlways ? get_columns() : columns; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIndex") ) { return getIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		if (HX_FIELD_EQ(inName,"_setRows") ) { return _setRows; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { if (inCallProp == hx::paccAlways) return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"tileCount") ) { if (inCallProp == hx::paccAlways) return get_tileCount(); }
		if (HX_FIELD_EQ(inName,"_setCount") ) { return _setCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shiftTiles") ) { return shiftTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRect") ) { return updateRect_dyn(); }
		if (HX_FIELD_EQ(inName,"createGrid") ) { return createGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { if (inCallProp == hx::paccAlways) return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"opaqueTiles") ) { return inCallProp == hx::paccAlways ? get_opaqueTiles() : opaqueTiles; }
		if (HX_FIELD_EQ(inName,"_setColumns") ) { return _setColumns; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		if (HX_FIELD_EQ(inName,"_opaqueTiles") ) { return _opaqueTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileCount") ) { return get_tileCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTileRect") ) { return updateTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		if (HX_FIELD_EQ(inName,"get_opaqueTiles") ) { return get_opaqueTiles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileSpacingWidth") ) { return tileSpacingWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileSpacingHeight") ) { return tileSpacingHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_set") ) { _set=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::com::haxepunk::graphics::atlas::TileAtlas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setRows") ) { _setRows=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_setCount") ) { _setCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"opaqueTiles") ) { opaqueTiles=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setColumns") ) { _setColumns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opaqueTiles") ) { _opaqueTiles=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileSpacingWidth") ) { tileSpacingWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileSpacingHeight") ) { tileSpacingHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("tileSpacingWidth","\xd1","\x7b","\x46","\x05"));
	outFields->push(HX_HCSTRING("tileSpacingHeight","\xbc","\x53","\xb5","\x4e"));
	outFields->push(HX_HCSTRING("tileCount","\xc1","\xa2","\xbe","\xd5"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("opaqueTiles","\xe4","\x40","\x7f","\x34"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	outFields->push(HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"));
	outFields->push(HX_HCSTRING("_opaqueTiles","\xe5","\xee","\x88","\x9a"));
	outFields->push(HX_HCSTRING("_set","\xa3","\xe0","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22"));
	outFields->push(HX_HCSTRING("_setColumns","\x7a","\x9e","\xc2","\x18"));
	outFields->push(HX_HCSTRING("_setRows","\x5c","\x8f","\xeb","\x4a"));
	outFields->push(HX_HCSTRING("_setCount","\x2c","\xa5","\x2d","\xa0"));
	outFields->push(HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tilemap_obj,usePositions),HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tileSpacingWidth),HX_HCSTRING("tileSpacingWidth","\xd1","\x7b","\x46","\x05")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,tileSpacingHeight),HX_HCSTRING("tileSpacingHeight","\xbc","\x53","\xb5","\x4e")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsBool,(int)offsetof(Tilemap_obj,opaqueTiles),HX_HCSTRING("opaqueTiles","\xe4","\x40","\x7f","\x34")},
	{hx::fsBool,(int)offsetof(Tilemap_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilemap_obj,_map),HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_rows),HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe")},
	{hx::fsBool,(int)offsetof(Tilemap_obj,_opaqueTiles),HX_HCSTRING("_opaqueTiles","\xe5","\xee","\x88","\x9a")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Tilemap_obj,_set),HX_HCSTRING("_set","\xa3","\xe0","\x22","\x3f")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::TileAtlas*/ ,(int)offsetof(Tilemap_obj,_atlas),HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setColumns),HX_HCSTRING("_setColumns","\x7a","\x9e","\xc2","\x18")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setRows),HX_HCSTRING("_setRows","\x5c","\x8f","\xeb","\x4a")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,_setCount),HX_HCSTRING("_setCount","\x2c","\xa5","\x2d","\xa0")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Tilemap_obj,_tile),HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("clearTile","\x5b","\xb3","\xbd","\xc0"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("setRect","\xe6","\x8d","\x2b","\x11"),
	HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"),
	HX_HCSTRING("loadFrom2DArray","\xb7","\x57","\x59","\x17"),
	HX_HCSTRING("loadFromString","\xa1","\x37","\x25","\xeb"),
	HX_HCSTRING("saveToString","\x09","\x1d","\xf7","\x4a"),
	HX_HCSTRING("getIndex","\x9c","\xaa","\xeb","\x1d"),
	HX_HCSTRING("getX","\x02","\x03","\x62","\x44"),
	HX_HCSTRING("getY","\x03","\x03","\x62","\x44"),
	HX_HCSTRING("shiftTiles","\xa3","\xe9","\x8c","\x1f"),
	HX_HCSTRING("updateRect","\xcd","\x37","\x5c","\x04"),
	HX_HCSTRING("renderAtlas","\x15","\x7a","\x8e","\xf2"),
	HX_HCSTRING("createGrid","\xe2","\x97","\xf9","\x56"),
	HX_HCSTRING("updateTileRect","\x9b","\x66","\xd7","\xba"),
	HX_HCSTRING("updateTile","\xd7","\xb5","\xb1","\x05"),
	HX_HCSTRING("get_tileWidth","\xcf","\xe7","\x21","\x17"),
	HX_HCSTRING("get_tileHeight","\xfe","\x65","\xd8","\xdc"),
	HX_HCSTRING("tileSpacingWidth","\xd1","\x7b","\x46","\x05"),
	HX_HCSTRING("tileSpacingHeight","\xbc","\x53","\xb5","\x4e"),
	HX_HCSTRING("get_tileCount","\x98","\x76","\x22","\x97"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("opaqueTiles","\xe4","\x40","\x7f","\x34"),
	HX_HCSTRING("get_opaqueTiles","\x7b","\xf8","\x60","\xf5"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"),
	HX_HCSTRING("_opaqueTiles","\xe5","\xee","\x88","\x9a"),
	HX_HCSTRING("_set","\xa3","\xe0","\x22","\x3f"),
	HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22"),
	HX_HCSTRING("_setColumns","\x7a","\x9e","\xc2","\x18"),
	HX_HCSTRING("_setRows","\x5c","\x8f","\xeb","\x4a"),
	HX_HCSTRING("_setCount","\x2c","\xa5","\x2d","\xa0"),
	HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class Tilemap_obj::__mClass;

void Tilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Tilemap","\x84","\x63","\x82","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilemap_obj >;
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
} // end namespace graphics
