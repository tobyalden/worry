#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
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
#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
#ifndef INCLUDED_entities_Hopper
#include <entities/Hopper.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace entities{

Void Hopper_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("entities.Hopper","new",0x66e19913,"entities.Hopper.new","entities/Hopper.hx",20,0x64e9e19c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(21)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1 = (y - (int)64);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		this->width = (int)48;
		HX_STACK_LINE(22)
		this->height = (int)36;
		HX_STACK_LINE(22)
		this->originX = (int)-8;
		HX_STACK_LINE(22)
		this->originY = (int)-28;
	}
	HX_STACK_LINE(23)
	this->cooldownTimer = (int)0;
	HX_STACK_LINE(24)
	::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::com::haxepunk::ds::Either tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	if ((tmp3)){
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::AtlasData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(24)
				::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				bool tmp8 = tmp7->exists(HX_HCSTRING("graphics/hopper.png","\x33","\x82","\xa6","\x77"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(24)
				if ((tmp8)){
					HX_STACK_LINE(24)
					::haxe::ds::StringMap tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(24)
					::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp9->get(HX_HCSTRING("graphics/hopper.png","\x33","\x82","\xa6","\x77"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(24)
					data = tmp10;
				}
				else{
					HX_STACK_LINE(24)
					::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/hopper.png","\x33","\x82","\xa6","\x77"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(24)
					::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(24)
					bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(24)
					if ((tmp10)){
						HX_STACK_LINE(24)
						::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/hopper.png","\x33","\x82","\xa6","\x77"),null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(24)
						data = tmp11;
					}
				}
				HX_STACK_LINE(24)
				tmp6 = data;
			}
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(24)
			tmp5 = data;
		}
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::TileAtlas tmp6 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Right(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(24)
		tmp4 = e;
	}
	else{
		HX_STACK_LINE(24)
		::openfl::_legacy::display::BitmapData tmp5 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/hopper.png","\x33","\x82","\xa6","\x77"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either tmp6 = ::com::haxepunk::ds::Either_obj::Left(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either e = tmp6;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(24)
		tmp4 = e;
	}
	HX_STACK_LINE(24)
	::com::haxepunk::graphics::Spritemap tmp5 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp4,(int)64,(int)64,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	this->sprite = tmp5;
	HX_STACK_LINE(25)
	::com::haxepunk::graphics::Spritemap tmp6 = this->sprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	tmp6->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(26)
	::com::haxepunk::graphics::Spritemap tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	tmp7->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)1).Add((int)2),(int)2,null());
	HX_STACK_LINE(27)
	::com::haxepunk::graphics::Spritemap tmp8 = this->sprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	tmp8->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
	HX_STACK_LINE(28)
	::com::haxepunk::graphics::Spritemap tmp9 = this->sprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	this->set_graphic(tmp9);
	HX_STACK_LINE(29)
	this->health = (int)250;
	HX_STACK_LINE(30)
	this->set_type(HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70"));
}
;
	return null();
}

//Hopper_obj::~Hopper_obj() { }

Dynamic Hopper_obj::__CreateEmpty() { return  new Hopper_obj; }
hx::ObjectPtr< Hopper_obj > Hopper_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Hopper_obj > _result_ = new Hopper_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Hopper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hopper_obj > _result_ = new Hopper_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Hopper_obj::update( ){
{
		HX_STACK_FRAME("entities.Hopper","update",0x9f95ef36,"entities.Hopper.update","entities/Hopper.hx",39,0x64e9e19c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->super::update();
		HX_STACK_LINE(41)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::com::haxepunk::Entity tmp1 = tmp->getInstance(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::com::haxepunk::Entity player = tmp1;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(43)
		bool tmp2 = this->isOnGround();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		if ((tmp2)){
			HX_STACK_LINE(45)
			this->velX = (int)0;
			HX_STACK_LINE(46)
			this->velY = (int)0;
			HX_STACK_LINE(48)
			int tmp3 = this->cooldownTimer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			if ((tmp4)){
				HX_STACK_LINE(48)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					bool useHitboxes = false;		HX_STACK_VAR(useHitboxes,"useHitboxes");
					HX_STACK_LINE(48)
					bool tmp7 = useHitboxes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					if ((tmp11)){
						HX_STACK_LINE(48)
						bool tmp12 = this->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(48)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(48)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(48)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(48)
						if ((tmp15)){
							HX_STACK_LINE(48)
							Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(48)
							Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(48)
							Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(48)
							Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(48)
							tmp14 = tmp21;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(48)
							tmp14 = tmp16;
						}
						HX_STACK_LINE(48)
						bool tmp16 = player->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(48)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(48)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(48)
						if ((tmp18)){
							HX_STACK_LINE(48)
							Float tmp19 = player->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(48)
							Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(48)
							Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(48)
							tmp17 = tmp23;
						}
						else{
							HX_STACK_LINE(48)
							tmp17 = player->x;
						}
						HX_STACK_LINE(48)
						Float tmp19 = (tmp14 - tmp17);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(48)
						Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(48)
						bool tmp21 = this->followCamera;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(48)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(48)
						Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(48)
						bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(48)
						if ((tmp24)){
							HX_STACK_LINE(48)
							Float tmp25 = this->x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(48)
							Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(48)
							Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(48)
							Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(48)
							tmp23 = tmp30;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp25 = this->x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(48)
							tmp23 = tmp25;
						}
						HX_STACK_LINE(48)
						bool tmp25 = player->followCamera;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(48)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(48)
						bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(48)
						if ((tmp27)){
							HX_STACK_LINE(48)
							Float tmp28 = player->x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp29 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(48)
							Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(48)
							Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(48)
							tmp26 = tmp32;
						}
						else{
							HX_STACK_LINE(48)
							tmp26 = player->x;
						}
						HX_STACK_LINE(48)
						Float tmp28 = (tmp23 - tmp26);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(48)
						Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(48)
						Float tmp30 = (tmp20 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(48)
						Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(48)
						bool tmp32 = this->followCamera;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(48)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(48)
						Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(48)
						bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(48)
						if ((tmp35)){
							HX_STACK_LINE(48)
							Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(48)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp38 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(48)
							Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(48)
							Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(48)
							tmp34 = tmp41;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(48)
							tmp34 = tmp36;
						}
						HX_STACK_LINE(48)
						bool tmp36 = player->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(48)
						Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(48)
						bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(48)
						if ((tmp38)){
							HX_STACK_LINE(48)
							Float tmp39 = player->y;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp40 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(48)
							Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(48)
							Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(48)
							tmp37 = tmp43;
						}
						else{
							HX_STACK_LINE(48)
							tmp37 = player->y;
						}
						HX_STACK_LINE(48)
						Float tmp39 = (tmp34 - tmp37);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(48)
						Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(48)
						bool tmp41 = this->followCamera;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(48)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(48)
						Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(48)
						bool tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(48)
						if ((tmp44)){
							HX_STACK_LINE(48)
							Float tmp45 = this->y;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(48)
							Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp47 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(48)
							Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(48)
							Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(48)
							tmp43 = tmp50;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp45 = this->y;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(48)
							tmp43 = tmp45;
						}
						HX_STACK_LINE(48)
						bool tmp45 = player->followCamera;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(48)
						Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(48)
						bool tmp47 = tmp45;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(48)
						if ((tmp47)){
							HX_STACK_LINE(48)
							Float tmp48 = player->y;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp49 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(48)
							Float tmp51 = tmp50->y;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(48)
							Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(48)
							tmp46 = tmp52;
						}
						else{
							HX_STACK_LINE(48)
							tmp46 = player->y;
						}
						HX_STACK_LINE(48)
						Float tmp48 = (tmp43 - tmp46);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(48)
						Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(48)
						Float tmp50 = (tmp40 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(48)
						Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(48)
						Float tmp52 = (tmp31 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(48)
						Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(48)
						Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(48)
						Float tmp55 = ::Math_obj::sqrt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(48)
						tmp6 = tmp55;
					}
					else{
						HX_STACK_LINE(48)
						bool tmp12 = this->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(48)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(48)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(48)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(48)
						if ((tmp15)){
							HX_STACK_LINE(48)
							Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(48)
							Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(48)
							Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(48)
							Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(48)
							tmp14 = tmp21;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(48)
							tmp14 = tmp16;
						}
						HX_STACK_LINE(48)
						int tmp16 = this->originX;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(48)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(48)
						Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(48)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(48)
						bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(48)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(48)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(48)
						bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(48)
						if ((tmp23)){
							HX_STACK_LINE(48)
							Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(48)
							Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp26 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(48)
							Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(48)
							Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(48)
							tmp22 = tmp29;
						}
						else{
							HX_STACK_LINE(48)
							Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(48)
							tmp22 = tmp24;
						}
						HX_STACK_LINE(48)
						int tmp24 = this->originY;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(48)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(48)
						Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(48)
						Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(48)
						int tmp28 = this->width;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(48)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(48)
						int tmp30 = this->height;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(48)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(48)
						bool tmp32 = player->followCamera;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(48)
						Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(48)
						bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(48)
						if ((tmp34)){
							HX_STACK_LINE(48)
							Float tmp35 = player->x;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp36 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(48)
							Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(48)
							Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(48)
							tmp33 = tmp39;
						}
						else{
							HX_STACK_LINE(48)
							tmp33 = player->x;
						}
						HX_STACK_LINE(48)
						int tmp35 = player->originX;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(48)
						Float tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(48)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(48)
						bool tmp38 = player->followCamera;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(48)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(48)
						bool tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(48)
						if ((tmp40)){
							HX_STACK_LINE(48)
							Float tmp41 = player->y;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp42 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(48)
							::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(48)
							Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(48)
							Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(48)
							tmp39 = tmp45;
						}
						else{
							HX_STACK_LINE(48)
							tmp39 = player->y;
						}
						HX_STACK_LINE(48)
						int tmp41 = player->originY;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(48)
						Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(48)
						Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(48)
						int tmp44 = player->width;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(48)
						int tmp45 = player->height;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(48)
						Float tmp46 = tmp19;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(48)
						Float tmp47 = tmp27;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(48)
						int tmp48 = tmp29;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(48)
						int tmp49 = tmp31;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(48)
						Float tmp50 = tmp37;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(48)
						Float tmp51 = tmp43;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(48)
						int tmp52 = tmp44;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(48)
						int tmp53 = tmp45;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(48)
						Float tmp54 = ::com::haxepunk::HXP_obj::distanceRects(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(48)
						tmp6 = tmp54;
					}
				}
				HX_STACK_LINE(48)
				tmp5 = (tmp6 < (int)250);
			}
			else{
				HX_STACK_LINE(48)
				tmp5 = false;
			}
			HX_STACK_LINE(48)
			if ((tmp5)){
				HX_STACK_LINE(50)
				bool tmp6 = player->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				if ((tmp6)){
					HX_STACK_LINE(50)
					Float tmp8 = player->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(50)
					tmp7 = (tmp8 + tmp10);
				}
				else{
					HX_STACK_LINE(50)
					tmp7 = player->x;
				}
				HX_STACK_LINE(50)
				this->jump(tmp7);
			}
			else{
				HX_STACK_LINE(52)
				int tmp6 = this->cooldownTimer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				if ((tmp7)){
					HX_STACK_LINE(54)
					(this->cooldownTimer)--;
				}
			}
		}
		else{
			HX_STACK_LINE(59)
			hx::AddEq(this->velY,((Float)0.25));
		}
		HX_STACK_LINE(62)
		Float tmp3 = this->velX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Float tmp4 = this->velY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromLeft(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		this->moveBy(tmp3,tmp4,tmp5,null());
	}
return null();
}


Void Hopper_obj::jump( Float playerX){
{
		HX_STACK_FRAME("entities.Hopper","jump",0x9beb98db,"entities.Hopper.jump","entities/Hopper.hx",66,0x64e9e19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(playerX,"playerX")
		HX_STACK_LINE(67)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(67)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(67)
			tmp1 = this->x;
		}
		HX_STACK_LINE(67)
		Float tmp2 = playerX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(69)
			this->velX = (int)3;
		}
		else{
			HX_STACK_LINE(73)
			int tmp4 = (int)-3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			this->velX = tmp4;
		}
		HX_STACK_LINE(75)
		int tmp4 = (int)-6;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		this->velY = tmp4;
		HX_STACK_LINE(76)
		this->cooldownTimer = (int)60;
		HX_STACK_LINE(77)
		::com::haxepunk::graphics::Spritemap tmp5 = this->sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		tmp5->play(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hopper_obj,jump,(void))

int Hopper_obj::ACTIVE_RANGE;

int Hopper_obj::JUMP_VEL_X;

int Hopper_obj::JUMP_VEL_Y;

int Hopper_obj::JUMP_COOLDOWN;


Hopper_obj::Hopper_obj()
{
}

Dynamic Hopper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cooldownTimer") ) { return cooldownTimer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hopper_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"cooldownTimer") ) { cooldownTimer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hopper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cooldownTimer","\x1a","\xb8","\x97","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Hopper_obj,cooldownTimer),HX_HCSTRING("cooldownTimer","\x1a","\xb8","\x97","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Hopper_obj::ACTIVE_RANGE,HX_HCSTRING("ACTIVE_RANGE","\x24","\xab","\x47","\x75")},
	{hx::fsInt,(void *) &Hopper_obj::JUMP_VEL_X,HX_HCSTRING("JUMP_VEL_X","\x45","\xd5","\xc2","\x80")},
	{hx::fsInt,(void *) &Hopper_obj::JUMP_VEL_Y,HX_HCSTRING("JUMP_VEL_Y","\x46","\xd5","\xc2","\x80")},
	{hx::fsInt,(void *) &Hopper_obj::JUMP_COOLDOWN,HX_HCSTRING("JUMP_COOLDOWN","\x5c","\x38","\x1d","\x73")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cooldownTimer","\x1a","\xb8","\x97","\xa1"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hopper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Hopper_obj::ACTIVE_RANGE,"ACTIVE_RANGE");
	HX_MARK_MEMBER_NAME(Hopper_obj::JUMP_VEL_X,"JUMP_VEL_X");
	HX_MARK_MEMBER_NAME(Hopper_obj::JUMP_VEL_Y,"JUMP_VEL_Y");
	HX_MARK_MEMBER_NAME(Hopper_obj::JUMP_COOLDOWN,"JUMP_COOLDOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hopper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Hopper_obj::ACTIVE_RANGE,"ACTIVE_RANGE");
	HX_VISIT_MEMBER_NAME(Hopper_obj::JUMP_VEL_X,"JUMP_VEL_X");
	HX_VISIT_MEMBER_NAME(Hopper_obj::JUMP_VEL_Y,"JUMP_VEL_Y");
	HX_VISIT_MEMBER_NAME(Hopper_obj::JUMP_COOLDOWN,"JUMP_COOLDOWN");
};

#endif

hx::Class Hopper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACTIVE_RANGE","\x24","\xab","\x47","\x75"),
	HX_HCSTRING("JUMP_VEL_X","\x45","\xd5","\xc2","\x80"),
	HX_HCSTRING("JUMP_VEL_Y","\x46","\xd5","\xc2","\x80"),
	HX_HCSTRING("JUMP_COOLDOWN","\x5c","\x38","\x1d","\x73"),
	::String(null()) };

void Hopper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Hopper","\xa1","\x13","\x1d","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hopper_obj >;
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

void Hopper_obj::__boot()
{
	ACTIVE_RANGE= (int)250;
	JUMP_VEL_X= (int)3;
	JUMP_VEL_Y= (int)6;
	JUMP_COOLDOWN= (int)60;
}

} // end namespace entities
