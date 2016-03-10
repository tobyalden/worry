#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#include <com/haxepunk/tmx/TmxEntity.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
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
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxVec4
#include <com/haxepunk/tmx/TmxVec4.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void TmxEntity_obj::__construct(::com::haxepunk::tmx::TmxMap mapData)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","new",0x40aef72c,"com.haxepunk.tmx.TmxEntity.new","com/haxepunk/tmx/TmxEntity.hx",35,0xb1c5c725)
HX_STACK_THIS(this)
HX_STACK_ARG(mapData,"mapData")
{
	HX_STACK_LINE(36)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(38)
	::com::haxepunk::tmx::TmxMap tmp = mapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->map = tmp;
}
;
	return null();
}

//TmxEntity_obj::~TmxEntity_obj() { }

Dynamic TmxEntity_obj::__CreateEmpty() { return  new TmxEntity_obj; }
hx::ObjectPtr< TmxEntity_obj > TmxEntity_obj::__new(::com::haxepunk::tmx::TmxMap mapData)
{  hx::ObjectPtr< TmxEntity_obj > _result_ = new TmxEntity_obj();
	_result_->__construct(mapData);
	return _result_;}

Dynamic TmxEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxEntity_obj > _result_ = new TmxEntity_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TmxEntity_obj::loadImageLayer( ::String name){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadImageLayer",0x989546f0,"com.haxepunk.tmx.TmxEntity.loadImageLayer","com/haxepunk/tmx/TmxEntity.hx",45,0xb1c5c725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(46)
		::com::haxepunk::tmx::TmxMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		bool tmp2 = tmp->imageLayers->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		if ((tmp3)){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(54)
		::com::haxepunk::ds::Either tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::com::haxepunk::tmx::TmxMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			::String tmp7 = tmp5->imageLayers->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			::String s = tmp7;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(54)
			::com::haxepunk::RenderMode tmp8 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			bool tmp9 = (tmp8 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			if ((tmp9)){
				HX_STACK_LINE(54)
				::com::haxepunk::graphics::atlas::AtlasData tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::com::haxepunk::graphics::atlas::AtlasData tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(54)
						::haxe::ds::StringMap tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						::String tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(54)
						bool tmp14 = tmp12->exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(54)
						if ((tmp14)){
							HX_STACK_LINE(54)
							::haxe::ds::StringMap tmp15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(54)
							::String tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(54)
							::com::haxepunk::graphics::atlas::AtlasData tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(54)
							data = tmp17;
						}
						else{
							HX_STACK_LINE(54)
							::String tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(54)
							::openfl::_legacy::display::BitmapData tmp16 = ::com::haxepunk::HXP_obj::getBitmap(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(54)
							::openfl::_legacy::display::BitmapData bitmap = tmp16;		HX_STACK_VAR(bitmap,"bitmap");
							HX_STACK_LINE(54)
							bool tmp17 = (bitmap != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(54)
							if ((tmp17)){
								HX_STACK_LINE(54)
								::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(54)
								data = tmp18;
							}
						}
						HX_STACK_LINE(54)
						tmp11 = data;
					}
					HX_STACK_LINE(54)
					::com::haxepunk::graphics::atlas::AtlasData data = tmp11;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(54)
					tmp10 = data;
				}
				HX_STACK_LINE(54)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp11 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Right(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(54)
				tmp4 = e;
			}
			else{
				HX_STACK_LINE(54)
				::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				::openfl::_legacy::display::BitmapData tmp11 = ::com::haxepunk::HXP_obj::getBitmap(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Left(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(54)
				tmp4 = e;
			}
		}
		HX_STACK_LINE(54)
		::com::haxepunk::graphics::Image tmp5 = ::com::haxepunk::graphics::Image_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		this->addGraphic(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxEntity_obj,loadImageLayer,(void))

Void TmxEntity_obj::loadGraphic( ::String tileset,Array< ::String > layerNames,Array< int > skip){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadGraphic",0xc5f5ebee,"com.haxepunk.tmx.TmxEntity.loadGraphic","com/haxepunk/tmx/TmxEntity.hx",58,0xb1c5c725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileset,"tileset")
		HX_STACK_ARG(layerNames,"layerNames")
		HX_STACK_ARG(skip,"skip")
		HX_STACK_LINE(59)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(59)
		::com::haxepunk::tmx::TmxLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp = (_g < layerNames->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(60)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(60)
				if ((tmp1)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(60)
				::String tmp2 = layerNames->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				::String name = tmp2;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(60)
				++(_g);
				HX_STACK_LINE(62)
				::com::haxepunk::tmx::TmxMap tmp3 = this->map;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				::haxe::ds::StringMap tmp4 = tmp3->layers->_map;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(62)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(67)
					continue;
				}
				HX_STACK_LINE(69)
				::com::haxepunk::tmx::TmxMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				::haxe::ds::StringMap tmp9 = tmp8->layers->_map;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				::com::haxepunk::tmx::TmxLayer tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(69)
				layer = tmp11;
				HX_STACK_LINE(70)
				::com::haxepunk::tmx::TmxMap tmp12 = this->map;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(70)
				::String tmp13 = name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(70)
				int tmp14 = tmp12->getTileMapSpacing(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(70)
				int spacing = tmp14;		HX_STACK_VAR(spacing,"spacing");
				HX_STACK_LINE(72)
				::com::haxepunk::RenderMode tmp15 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(72)
				bool tmp16 = (tmp15 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				::com::haxepunk::ds::Either tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(72)
				if ((tmp16)){
					HX_STACK_LINE(72)
					::com::haxepunk::graphics::atlas::AtlasData tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::com::haxepunk::graphics::atlas::AtlasData tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(72)
							::haxe::ds::StringMap tmp20 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(72)
							::String tmp21 = tileset;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(72)
							bool tmp22 = tmp20->exists(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(72)
							if ((tmp22)){
								HX_STACK_LINE(72)
								::haxe::ds::StringMap tmp23 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(72)
								::String tmp24 = tileset;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(72)
								::com::haxepunk::graphics::atlas::AtlasData tmp25 = tmp23->get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(72)
								data = tmp25;
							}
							else{
								HX_STACK_LINE(72)
								::String tmp23 = tileset;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(72)
								::openfl::_legacy::display::BitmapData tmp24 = ::com::haxepunk::HXP_obj::getBitmap(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(72)
								::openfl::_legacy::display::BitmapData bitmap = tmp24;		HX_STACK_VAR(bitmap,"bitmap");
								HX_STACK_LINE(72)
								bool tmp25 = (bitmap != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(72)
								if ((tmp25)){
									HX_STACK_LINE(72)
									::com::haxepunk::graphics::atlas::AtlasData tmp26 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,tileset,null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(72)
									data = tmp26;
								}
							}
							HX_STACK_LINE(72)
							tmp19 = data;
						}
						HX_STACK_LINE(72)
						::com::haxepunk::graphics::atlas::AtlasData data = tmp19;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(72)
						tmp18 = data;
					}
					HX_STACK_LINE(72)
					::com::haxepunk::graphics::atlas::TileAtlas tmp19 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(72)
					::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Right(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(72)
					::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(72)
					tmp17 = e;
				}
				else{
					HX_STACK_LINE(72)
					::String tmp18 = tileset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					::openfl::_legacy::display::BitmapData tmp19 = ::com::haxepunk::HXP_obj::getBitmap(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(72)
					::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Left(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(72)
					::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(72)
					tmp17 = e;
				}
				HX_STACK_LINE(72)
				::com::haxepunk::tmx::TmxMap tmp18 = this->map;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(72)
				int tmp19 = tmp18->fullWidth;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(72)
				::com::haxepunk::tmx::TmxMap tmp20 = this->map;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(72)
				int tmp21 = tmp20->fullHeight;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(72)
				::com::haxepunk::tmx::TmxMap tmp22 = this->map;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(72)
				int tmp23 = tmp22->tileWidth;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(72)
				::com::haxepunk::tmx::TmxMap tmp24 = this->map;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(72)
				int tmp25 = tmp24->tileHeight;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(72)
				int tmp26 = spacing;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(72)
				int tmp27 = spacing;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(72)
				::com::haxepunk::graphics::Tilemap tmp28 = ::com::haxepunk::graphics::Tilemap_obj::__new(tmp17,tmp19,tmp21,tmp23,tmp25,tmp26,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(72)
				::com::haxepunk::graphics::Tilemap tilemap = tmp28;		HX_STACK_VAR(tilemap,"tilemap");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(75)
					int _g1 = layer->height;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(75)
					while((true)){
						HX_STACK_LINE(75)
						bool tmp29 = (_g2 < _g1);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(75)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(75)
						if ((tmp30)){
							HX_STACK_LINE(75)
							break;
						}
						HX_STACK_LINE(75)
						int tmp31 = (_g2)++;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(75)
						int row = tmp31;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(77)
							int _g3 = layer->width;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(77)
							while((true)){
								HX_STACK_LINE(77)
								bool tmp32 = (_g4 < _g3);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(77)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(77)
								if ((tmp33)){
									HX_STACK_LINE(77)
									break;
								}
								HX_STACK_LINE(77)
								int tmp34 = (_g4)++;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(77)
								int col = tmp34;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(79)
								int tmp35 = layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(79)
								int tmp36 = (tmp35 - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(79)
								gid = tmp36;
								HX_STACK_LINE(80)
								bool tmp37 = (gid < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(80)
								if ((tmp37)){
									HX_STACK_LINE(80)
									continue;
								}
								HX_STACK_LINE(81)
								bool tmp38 = (skip == null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(81)
								bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(81)
								bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(81)
								if ((tmp39)){
									HX_STACK_LINE(81)
									int tmp41 = gid;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(81)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(81)
									bool tmp43 = ::Lambda_obj::has(skip,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(81)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(81)
									tmp40 = (tmp44 == false);
								}
								else{
									HX_STACK_LINE(81)
									tmp40 = true;
								}
								HX_STACK_LINE(81)
								if ((tmp40)){
									HX_STACK_LINE(83)
									int tmp41 = col;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(83)
									int tmp42 = row;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(83)
									int tmp43 = gid;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(83)
									tilemap->setTile(tmp41,tmp42,tmp43);
								}
							}
						}
					}
				}
				HX_STACK_LINE(87)
				::com::haxepunk::graphics::Tilemap tmp29 = tilemap;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(87)
				this->addGraphic(tmp29);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadGraphic,(void))

Array< ::Dynamic > TmxEntity_obj::loadMask( ::String __o_collideLayer,::String __o_typeName,Array< int > skip){
::String collideLayer = __o_collideLayer.Default(HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"));
::String typeName = __o_typeName.Default(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadMask",0x6f3ec7e6,"com.haxepunk.tmx.TmxEntity.loadMask","com/haxepunk/tmx/TmxEntity.hx",92,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(93)
		Array< ::Dynamic > tileCoords = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tileCoords,"tileCoords");
		HX_STACK_LINE(94)
		::com::haxepunk::tmx::TmxMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::haxe::ds::StringMap tmp1 = tmp->layers->_map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::String tmp2 = collideLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		if ((tmp4)){
			HX_STACK_LINE(99)
			return tileCoords;
		}
		HX_STACK_LINE(102)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(103)
		::com::haxepunk::tmx::TmxMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		::haxe::ds::StringMap tmp6 = tmp5->layers->_map;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		::String tmp7 = collideLayer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		::com::haxepunk::tmx::TmxLayer tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		::com::haxepunk::tmx::TmxLayer layer = tmp8;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(104)
		::com::haxepunk::tmx::TmxMap tmp9 = this->map;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		int tmp10 = tmp9->fullWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		::com::haxepunk::tmx::TmxMap tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		int tmp12 = tmp11->fullHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(104)
		::com::haxepunk::tmx::TmxMap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		int tmp14 = tmp13->tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(104)
		::com::haxepunk::tmx::TmxMap tmp15 = this->map;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		int tmp16 = tmp15->tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		::com::haxepunk::masks::Grid tmp17 = ::com::haxepunk::masks::Grid_obj::__new(tmp10,tmp12,tmp14,tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(104)
		::com::haxepunk::masks::Grid grid = tmp17;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			int _g = layer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(107)
				if ((tmp19)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(107)
				int row = tmp20;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(109)
					int _g2 = layer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(109)
					while((true)){
						HX_STACK_LINE(109)
						bool tmp21 = (_g3 < _g2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(109)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(109)
						if ((tmp22)){
							HX_STACK_LINE(109)
							break;
						}
						HX_STACK_LINE(109)
						int tmp23 = (_g3)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(109)
						int col = tmp23;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(111)
						int tmp24 = layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(111)
						int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(111)
						gid = tmp25;
						HX_STACK_LINE(112)
						bool tmp26 = (gid < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(112)
						if ((tmp26)){
							HX_STACK_LINE(112)
							continue;
						}
						HX_STACK_LINE(113)
						bool tmp27 = (skip == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(113)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(113)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(113)
						if ((tmp28)){
							HX_STACK_LINE(113)
							int tmp30 = gid;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(113)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(113)
							bool tmp32 = ::Lambda_obj::has(skip,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(113)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(113)
							tmp29 = (tmp33 == false);
						}
						else{
							HX_STACK_LINE(113)
							tmp29 = true;
						}
						HX_STACK_LINE(113)
						if ((tmp29)){
							HX_STACK_LINE(115)
							int tmp30 = col;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(115)
							int tmp31 = row;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(115)
							grid->setTile(tmp30,tmp31,true);
							HX_STACK_LINE(116)
							int tmp32 = col;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxMap tmp33 = this->map;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(116)
							int tmp34 = tmp33->tileWidth;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(116)
							int tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(116)
							int tmp36 = row;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxMap tmp37 = this->map;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(116)
							int tmp38 = tmp37->tileHeight;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(116)
							int tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxMap tmp40 = this->map;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(116)
							int tmp41 = tmp40->tileWidth;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxMap tmp42 = this->map;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(116)
							int tmp43 = tmp42->tileHeight;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxVec4 tmp44 = ::com::haxepunk::tmx::TmxVec4_obj::__new(tmp35,tmp39,tmp41,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(116)
							tileCoords->push(tmp44);
						}
					}
				}
			}
		}
		HX_STACK_LINE(121)
		::com::haxepunk::masks::Grid tmp18 = grid;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(121)
		this->set_mask(tmp18);
		HX_STACK_LINE(122)
		::String tmp19 = typeName;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(122)
		this->set_type(tmp19);
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int tmp20 = grid->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			int width = tmp20;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(123)
			int tmp21 = grid->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(123)
			int height = tmp21;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(123)
			int originX = (int)0;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(123)
			int originY = (int)0;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(123)
			this->width = width;
			HX_STACK_LINE(123)
			this->height = height;
			HX_STACK_LINE(123)
			this->originX = originX;
			HX_STACK_LINE(123)
			this->originY = originY;
		}
		HX_STACK_LINE(124)
		return tileCoords;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadMask,return )

Void TmxEntity_obj::loadSlopedMask( ::String __o_collideLayer,::String __o_typeName,Array< int > skip){
::String collideLayer = __o_collideLayer.Default(HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"));
::String typeName = __o_typeName.Default(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadSlopedMask",0xa3e374df,"com.haxepunk.tmx.TmxEntity.loadSlopedMask","com/haxepunk/tmx/TmxEntity.hx",128,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(129)
		::com::haxepunk::tmx::TmxMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::haxe::ds::StringMap tmp1 = tmp->layers->_map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		::String tmp2 = collideLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		if ((tmp4)){
			HX_STACK_LINE(134)
			return null();
		}
		HX_STACK_LINE(137)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(138)
		::com::haxepunk::tmx::TmxMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::haxe::ds::StringMap tmp6 = tmp5->layers->_map;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		::String tmp7 = collideLayer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		::com::haxepunk::tmx::TmxLayer tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		::com::haxepunk::tmx::TmxLayer layer = tmp8;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(139)
		::com::haxepunk::tmx::TmxMap tmp9 = this->map;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		int tmp10 = tmp9->fullWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(139)
		::com::haxepunk::tmx::TmxMap tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		int tmp12 = tmp11->fullHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		::com::haxepunk::tmx::TmxMap tmp13 = this->map;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		int tmp14 = tmp13->tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		::com::haxepunk::tmx::TmxMap tmp15 = this->map;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		int tmp16 = tmp15->tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		::com::haxepunk::masks::SlopedGrid tmp17 = ::com::haxepunk::masks::SlopedGrid_obj::__new(tmp10,tmp12,tmp14,tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		::com::haxepunk::masks::SlopedGrid grid = tmp17;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(140)
		Array< ::String > types = ::Type_obj::getEnumConstructs(hx::ClassOf< ::com::haxepunk::masks::TileType >());		HX_STACK_VAR(types,"types");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			int _g = layer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			while((true)){
				HX_STACK_LINE(142)
				bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(142)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(142)
				if ((tmp19)){
					HX_STACK_LINE(142)
					break;
				}
				HX_STACK_LINE(142)
				int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(142)
				int row = tmp20;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(144)
					int _g2 = layer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(144)
					while((true)){
						HX_STACK_LINE(144)
						bool tmp21 = (_g3 < _g2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(144)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(144)
						if ((tmp22)){
							HX_STACK_LINE(144)
							break;
						}
						HX_STACK_LINE(144)
						int tmp23 = (_g3)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(144)
						int col = tmp23;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(146)
						int tmp24 = layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(146)
						int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(146)
						gid = tmp25;
						HX_STACK_LINE(147)
						bool tmp26 = (gid < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(147)
						if ((tmp26)){
							HX_STACK_LINE(147)
							continue;
						}
						HX_STACK_LINE(148)
						bool tmp27 = (skip == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(148)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(148)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(148)
						if ((tmp28)){
							HX_STACK_LINE(148)
							int tmp30 = gid;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(148)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(148)
							bool tmp32 = ::Lambda_obj::has(skip,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(148)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(148)
							tmp29 = (tmp33 == false);
						}
						else{
							HX_STACK_LINE(148)
							tmp29 = true;
						}
						HX_STACK_LINE(148)
						if ((tmp29)){
							HX_STACK_LINE(150)
							::com::haxepunk::tmx::TmxMap tmp30 = this->map;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(150)
							int tmp31 = (gid + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(150)
							::String tmp32 = tmp30->getGidProperty(tmp31,HX_HCSTRING("tileType","\x08","\x19","\x0f","\x87"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(150)
							::String type = tmp32;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(152)
							bool tmp33 = (type == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(152)
							if ((tmp33)){
								HX_STACK_LINE(153)
								int tmp34 = col;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(153)
								int tmp35 = row;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(153)
								grid->setTile(tmp34,tmp35,::com::haxepunk::masks::TileType_obj::Solid,null(),null());
							}
							else{
								HX_STACK_LINE(157)
								int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(157)
								int _g4 = types->length;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(157)
								while((true)){
									HX_STACK_LINE(157)
									bool tmp34 = (_g5 < _g4);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(157)
									bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(157)
									if ((tmp35)){
										HX_STACK_LINE(157)
										break;
									}
									HX_STACK_LINE(157)
									int tmp36 = (_g5)++;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(157)
									int i = tmp36;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(159)
									::String tmp37 = type;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(159)
									::String tmp38 = types->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(159)
									bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(159)
									if ((tmp39)){
										HX_STACK_LINE(161)
										int tmp40 = col;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(161)
										int tmp41 = row;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(162)
										::String tmp42 = type;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(162)
										::com::haxepunk::masks::TileType tmp43 = ::Type_obj::createEnum(hx::ClassOf< ::com::haxepunk::masks::TileType >(),tmp42,null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(163)
										::com::haxepunk::tmx::TmxMap tmp44 = this->map;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(163)
										int tmp45 = (gid + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(163)
										::String tmp46 = tmp44->getGidProperty(tmp45,HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(163)
										Float tmp47 = ::Std_obj::parseFloat(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(164)
										::com::haxepunk::tmx::TmxMap tmp48 = this->map;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(164)
										int tmp49 = (gid + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(164)
										::String tmp50 = tmp48->getGidProperty(tmp49,HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(164)
										Float tmp51 = ::Std_obj::parseFloat(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(161)
										grid->setTile(tmp40,tmp41,tmp43,tmp47,tmp51);
										HX_STACK_LINE(166)
										break;
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(174)
		::com::haxepunk::masks::SlopedGrid tmp18 = grid;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(174)
		this->set_mask(tmp18);
		HX_STACK_LINE(175)
		::String tmp19 = typeName;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(175)
		this->set_type(tmp19);
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int tmp20 = grid->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(176)
			int width = tmp20;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(176)
			int tmp21 = grid->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(176)
			int height = tmp21;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(176)
			int originX = (int)0;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(176)
			int originY = (int)0;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(176)
			this->width = width;
			HX_STACK_LINE(176)
			this->height = height;
			HX_STACK_LINE(176)
			this->originX = originX;
			HX_STACK_LINE(176)
			this->originY = originY;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadSlopedMask,(void))

Void TmxEntity_obj::loadObjectMask( ::String __o_collideLayer,::String __o_typeName){
::String collideLayer = __o_collideLayer.Default(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
::String typeName = __o_typeName.Default(HX_HCSTRING("solidObject","\x4a","\x99","\xf3","\x3f"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadObjectMask",0xe795b5c5,"com.haxepunk.tmx.TmxEntity.loadObjectMask","com/haxepunk/tmx/TmxEntity.hx",185,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
{
		HX_STACK_LINE(186)
		::com::haxepunk::tmx::TmxMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::String tmp1 = collideLayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		::com::haxepunk::tmx::TmxObjectGroup tmp2 = tmp->getObjectGroup(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		if ((tmp3)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(194)
		::com::haxepunk::tmx::TmxMap tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		::String tmp5 = collideLayer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		::com::haxepunk::tmx::TmxObjectGroup tmp6 = tmp4->getObjectGroup(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		::com::haxepunk::tmx::TmxObjectGroup objectGroup = tmp6;		HX_STACK_VAR(objectGroup,"objectGroup");
		HX_STACK_LINE(196)
		cpp::ArrayBase masks_ar = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(masks_ar,"masks_ar");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			Array< ::Dynamic > _g1 = objectGroup->objects;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				if ((tmp8)){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(202)
				::com::haxepunk::tmx::TmxObject tmp9 = _g1->__get(_g).StaticCast< ::com::haxepunk::tmx::TmxObject >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				::com::haxepunk::tmx::TmxObject object = tmp9;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(202)
				++(_g);
				HX_STACK_LINE(203)
				::com::haxepunk::masks::Hitbox tmp10 = object->shapeMask;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(203)
				masks_ar->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
			}
		}
		HX_STACK_LINE(216)
		::com::haxepunk::masks::Masklist tmp7 = ::com::haxepunk::masks::Masklist_obj::__new(masks_ar);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		::com::haxepunk::masks::Masklist maskList = tmp7;		HX_STACK_VAR(maskList,"maskList");
		HX_STACK_LINE(217)
		::com::haxepunk::masks::Masklist tmp8 = maskList;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		this->set_mask(tmp8);
		HX_STACK_LINE(218)
		::String tmp9 = typeName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(218)
		this->set_type(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxEntity_obj,loadObjectMask,(void))


TmxEntity_obj::TmxEntity_obj()
{
}

void TmxEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxEntity);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(debugObjectMask,"debugObjectMask");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TmxEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(debugObjectMask,"debugObjectMask");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TmxEntity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadMask") ) { return loadMask_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadImageLayer") ) { return loadImageLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSlopedMask") ) { return loadSlopedMask_dyn(); }
		if (HX_FIELD_EQ(inName,"loadObjectMask") ) { return loadObjectMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debugObjectMask") ) { return debugObjectMask; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::com::haxepunk::tmx::TmxMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debugObjectMask") ) { debugObjectMask=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("debugObjectMask","\x7e","\x53","\x96","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxEntity_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsBool,(int)offsetof(TmxEntity_obj,debugObjectMask),HX_HCSTRING("debugObjectMask","\x7e","\x53","\x96","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("debugObjectMask","\x7e","\x53","\x96","\x5b"),
	HX_HCSTRING("loadImageLayer","\x3c","\x52","\x3f","\x12"),
	HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"),
	HX_HCSTRING("loadMask","\x32","\x12","\xf6","\xb8"),
	HX_HCSTRING("loadSlopedMask","\x2b","\x80","\x8d","\x1d"),
	HX_HCSTRING("loadObjectMask","\x11","\xc1","\x3f","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxEntity_obj::__mClass,"__mClass");
};

#endif

hx::Class TmxEntity_obj::__mClass;

void TmxEntity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tmx.TmxEntity","\x3a","\x31","\xc9","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TmxEntity_obj >;
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
