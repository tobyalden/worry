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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Data
#include <com/haxepunk/utils/Data.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_entities_ActiveEntity
#include <entities/ActiveEntity.h>
#endif
#ifndef INCLUDED_entities_Bullet
#include <entities/Bullet.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
namespace entities{

Void Player_obj::__construct()
{
HX_STACK_FRAME("entities.Player","new",0x0cad9a00,"entities.Player.new","entities/Player.hx",41,0x7a521d4f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	::com::haxepunk::utils::Data_obj::load(HX_HCSTRING("worrysave","\x5e","\x0b","\x1f","\xec"));
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		Dynamic tmp = ::com::haxepunk::utils::Data_obj::read(HX_HCSTRING("saveX","\x7b","\x4a","\x8c","\x77"),(int)2874);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Float v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(43)
		this->x = v;
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		Dynamic tmp = ::com::haxepunk::utils::Data_obj::read(HX_HCSTRING("saveY","\x7c","\x4a","\x8c","\x77"),(int)2160);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		Float v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(44)
		this->y = v;
	}
	HX_STACK_LINE(45)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(45)
		tmp1 = this->x;
	}
	HX_STACK_LINE(45)
	bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	if ((tmp2)){
		HX_STACK_LINE(45)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		tmp3 = (tmp4 + tmp6);
	}
	else{
		HX_STACK_LINE(45)
		tmp3 = this->y;
	}
	HX_STACK_LINE(45)
	super::__construct(tmp1,tmp3);
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		this->width = (int)12;
		HX_STACK_LINE(46)
		this->height = (int)32;
		HX_STACK_LINE(46)
		this->originX = (int)-10;
		HX_STACK_LINE(46)
		this->originY = (int)-16;
	}
	HX_STACK_LINE(47)
	this->velX = (int)0;
	HX_STACK_LINE(48)
	this->velY = (int)0;
	HX_STACK_LINE(49)
	this->onGround = false;
	HX_STACK_LINE(50)
	this->isSpinJumping = false;
	HX_STACK_LINE(51)
	this->isLookingUp = false;
	HX_STACK_LINE(52)
	::com::haxepunk::RenderMode tmp4 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	bool tmp5 = (tmp4 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	::com::haxepunk::ds::Either tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	if ((tmp5)){
		HX_STACK_LINE(52)
		::com::haxepunk::graphics::atlas::AtlasData tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::com::haxepunk::graphics::atlas::AtlasData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(52)
				::haxe::ds::StringMap tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				bool tmp10 = tmp9->exists(HX_HCSTRING("graphics/player.png","\x20","\x83","\x72","\x1d"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				if ((tmp10)){
					HX_STACK_LINE(52)
					::haxe::ds::StringMap tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					::com::haxepunk::graphics::atlas::AtlasData tmp12 = tmp11->get(HX_HCSTRING("graphics/player.png","\x20","\x83","\x72","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					data = tmp12;
				}
				else{
					HX_STACK_LINE(52)
					::openfl::_legacy::display::BitmapData tmp11 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/player.png","\x20","\x83","\x72","\x1d"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					::openfl::_legacy::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(52)
					bool tmp12 = (bitmap != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					if ((tmp12)){
						HX_STACK_LINE(52)
						::com::haxepunk::graphics::atlas::AtlasData tmp13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/player.png","\x20","\x83","\x72","\x1d"),null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(52)
						data = tmp13;
					}
				}
				HX_STACK_LINE(52)
				tmp8 = data;
			}
			HX_STACK_LINE(52)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp8;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(52)
			tmp7 = data;
		}
		HX_STACK_LINE(52)
		::com::haxepunk::graphics::atlas::TileAtlas tmp8 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		::com::haxepunk::ds::Either tmp9 = ::com::haxepunk::ds::Either_obj::Right(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		::com::haxepunk::ds::Either e = tmp9;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(52)
		tmp6 = e;
	}
	else{
		HX_STACK_LINE(52)
		::openfl::_legacy::display::BitmapData tmp7 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/player.png","\x20","\x83","\x72","\x1d"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::ds::Either_obj::Left(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		::com::haxepunk::ds::Either e = tmp8;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(52)
		tmp6 = e;
	}
	HX_STACK_LINE(52)
	::com::haxepunk::graphics::Spritemap tmp7 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp6,(int)32,(int)48,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	this->sprite = tmp7;
	HX_STACK_LINE(53)
	::com::haxepunk::graphics::Spritemap tmp8 = this->sprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	tmp8->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(54)
	::com::haxepunk::graphics::Spritemap tmp9 = this->sprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	tmp9->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)8),(int)12,null());
	HX_STACK_LINE(55)
	::com::haxepunk::graphics::Spritemap tmp10 = this->sprite;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	tmp10->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)9),null(),null());
	HX_STACK_LINE(56)
	::com::haxepunk::graphics::Spritemap tmp11 = this->sprite;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	tmp11->add(HX_HCSTRING("spinjump","\xb0","\xaf","\x03","\x7b"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5),(int)12,null());
	HX_STACK_LINE(57)
	::com::haxepunk::graphics::Spritemap tmp12 = this->sprite;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	tmp12->add(HX_HCSTRING("idle_up","\xe6","\x79","\x4f","\x7c"),Array_obj< int >::__new().Add((int)10),(int)12,null());
	HX_STACK_LINE(58)
	::com::haxepunk::graphics::Spritemap tmp13 = this->sprite;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(58)
	tmp13->add(HX_HCSTRING("walk_up","\x11","\x2b","\x61","\x93"),Array_obj< int >::__new().Add((int)11).Add((int)12).Add((int)13),(int)12,null());
	HX_STACK_LINE(59)
	::com::haxepunk::graphics::Spritemap tmp14 = this->sprite;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(59)
	tmp14->add(HX_HCSTRING("jump_up","\x4c","\x00","\xa2","\x0c"),Array_obj< int >::__new().Add((int)14),null(),null());
	HX_STACK_LINE(60)
	::com::haxepunk::graphics::Spritemap tmp15 = this->sprite;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(60)
	Dynamic tmp16 = ::com::haxepunk::utils::Data_obj::read(HX_HCSTRING("saveFacing","\x37","\xca","\xbe","\x2c"),false);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(60)
	tmp15->set_flipped(tmp16);
	HX_STACK_LINE(61)
	::com::haxepunk::graphics::Spritemap tmp17 = this->sprite;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(61)
	tmp17->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
	HX_STACK_LINE(62)
	::com::haxepunk::graphics::Spritemap tmp18 = this->sprite;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(62)
	this->set_graphic(tmp18);
	HX_STACK_LINE(63)
	this->set_layer((int)-2550);
	HX_STACK_LINE(64)
	::com::haxepunk::Sfx tmp19 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/walk.wav","\xe0","\x8a","\x85","\x8a"),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(64)
	this->walkSfx = tmp19;
	HX_STACK_LINE(65)
	::com::haxepunk::Sfx tmp20 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/jump.wav","\x45","\x49","\xff","\x29"),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	this->jumpSfx = tmp20;
	HX_STACK_LINE(66)
	::com::haxepunk::Sfx tmp21 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/spinjump.wav","\x87","\xfd","\x1e","\x40"),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(66)
	this->spinJumpSfx = tmp21;
	HX_STACK_LINE(67)
	::com::haxepunk::Sfx tmp22 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/land.wav","\xc2","\x4c","\x43","\xda"),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(67)
	this->landSfx = tmp22;
	HX_STACK_LINE(68)
	::com::haxepunk::Sfx tmp23 = ::com::haxepunk::Sfx_obj::__new(HX_HCSTRING("audio/shoot.wav","\x64","\xf1","\xf9","\x22"),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(68)
	this->shootSfx = tmp23;
	HX_STACK_LINE(69)
	this->set_name(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

bool Player_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("entities.Player","moveCollideY",0x253b79ac,"entities.Player.moveCollideY","entities/Player.hx",73,0x7a521d4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(74)
	this->velY = ((Float)-0.1);
	HX_STACK_LINE(75)
	return true;
}


Void Player_obj::update( ){
{
		HX_STACK_FRAME("entities.Player","update",0x3df18069,"entities.Player.update","entities/Player.hx",79,0x7a521d4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::com::haxepunk::ds::Either tmp = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::com::haxepunk::ds::Either tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		bool tmp2 = ::com::haxepunk::utils::Input_obj::check(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(80)
			bool tmp4 = this->isSpinJumping;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(80)
			tmp3 = false;
		}
		HX_STACK_LINE(80)
		this->isLookingUp = tmp3;
		HX_STACK_LINE(82)
		bool tmp4 = this->onGround;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		bool tmp5 = this->isOnGround();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		if ((tmp6)){
			HX_STACK_LINE(84)
			bool tmp7 = this->isOnGround();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			this->onGround = tmp7;
			HX_STACK_LINE(85)
			::com::haxepunk::Sfx tmp8 = this->landSfx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			tmp8->play(null(),null(),null());
		}
		HX_STACK_LINE(89)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		bool tmp8 = ::com::haxepunk::utils::Input_obj::check(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		if ((tmp8)){
			HX_STACK_LINE(91)
			Float tmp9 = ((Float)-3.5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			this->velX = tmp9;
			HX_STACK_LINE(92)
			::com::haxepunk::graphics::Spritemap tmp10 = this->sprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			tmp10->set_flipped(true);
		}
		else{
			HX_STACK_LINE(94)
			::com::haxepunk::ds::Either tmp9 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			bool tmp10 = ::com::haxepunk::utils::Input_obj::check(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			if ((tmp10)){
				HX_STACK_LINE(96)
				this->velX = ((Float)3.5);
				HX_STACK_LINE(97)
				::com::haxepunk::graphics::Spritemap tmp11 = this->sprite;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				tmp11->set_flipped(false);
			}
			else{
				HX_STACK_LINE(99)
				bool tmp11 = this->isSpinJumping;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(99)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(99)
				if ((tmp12)){
					HX_STACK_LINE(101)
					this->velX = (int)0;
				}
			}
		}
		HX_STACK_LINE(105)
		bool tmp9 = this->onGround;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(105)
		if ((tmp9)){
			HX_STACK_LINE(107)
			this->velY = (int)0;
			HX_STACK_LINE(108)
			this->isSpinJumping = false;
			HX_STACK_LINE(109)
			::com::haxepunk::ds::Either tmp10 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)90);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			bool tmp11 = ::com::haxepunk::utils::Input_obj::pressed(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(109)
			if ((tmp11)){
				HX_STACK_LINE(111)
				int tmp12 = (int)-6;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				this->velY = tmp12;
				HX_STACK_LINE(112)
				::com::haxepunk::Sfx tmp13 = this->jumpSfx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(112)
				tmp13->play(null(),null(),null());
				HX_STACK_LINE(113)
				::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				::com::haxepunk::ds::Either tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(113)
				bool tmp16 = ::com::haxepunk::utils::Input_obj::check(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(113)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(113)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(113)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(113)
				if ((tmp18)){
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(113)
					tmp19 = ::com::haxepunk::utils::Input_obj::check(tmp24);
				}
				else{
					HX_STACK_LINE(113)
					tmp19 = true;
				}
				HX_STACK_LINE(113)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(113)
				if ((tmp19)){
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp21 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(113)
					::com::haxepunk::ds::Either tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(113)
					bool tmp24 = ::com::haxepunk::utils::Input_obj::check(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(113)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(113)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(113)
					tmp20 = !(tmp26);
				}
				else{
					HX_STACK_LINE(113)
					tmp20 = false;
				}
				HX_STACK_LINE(113)
				if ((tmp20)){
					HX_STACK_LINE(115)
					this->isSpinJumping = true;
				}
			}
		}
		else{
			HX_STACK_LINE(121)
			bool tmp10 = this->isSpinJumping;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			if ((tmp11)){
				HX_STACK_LINE(123)
				hx::MultEq(this->velX,((Float)0.92));
			}
			HX_STACK_LINE(125)
			hx::AddEq(this->velY,((Float)0.25));
			HX_STACK_LINE(126)
			Float tmp12 = this->velY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			Float tmp13 = ::Math_obj::min(tmp12,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(126)
			this->velY = tmp13;
			HX_STACK_LINE(127)
			::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)90);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			bool tmp15 = ::com::haxepunk::utils::Input_obj::check(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(127)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			if ((tmp17)){
				HX_STACK_LINE(127)
				Float tmp19 = this->velY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(127)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(127)
				int tmp21 = (int)-4;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(127)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				tmp18 = (tmp20 < tmp22);
			}
			else{
				HX_STACK_LINE(127)
				tmp18 = false;
			}
			HX_STACK_LINE(127)
			if ((tmp18)){
				HX_STACK_LINE(129)
				int tmp19 = (int)-4;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(129)
				this->velY = tmp19;
			}
		}
		HX_STACK_LINE(134)
		::com::haxepunk::ds::Either tmp10 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)88);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		bool tmp11 = ::com::haxepunk::utils::Input_obj::pressed(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		if ((tmp11)){
			HX_STACK_LINE(136)
			::com::haxepunk::Sfx tmp12 = this->shootSfx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(136)
			tmp12->play(null(),null(),null());
			HX_STACK_LINE(137)
			bool tmp13 = this->isLookingUp;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			if ((tmp13)){
				HX_STACK_LINE(139)
				::com::haxepunk::graphics::Spritemap tmp14 = this->sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				bool tmp15 = tmp14->_flipped;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(139)
				if ((tmp15)){
					HX_STACK_LINE(141)
					::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(141)
					bool tmp17 = this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(141)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(141)
					if ((tmp17)){
						HX_STACK_LINE(141)
						Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(141)
						::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(141)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(141)
						tmp18 = (tmp19 + tmp21);
					}
					else{
						HX_STACK_LINE(141)
						tmp18 = this->x;
					}
					HX_STACK_LINE(141)
					Float tmp19 = (tmp18 + (int)15);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(141)
					bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(141)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(141)
					if ((tmp20)){
						HX_STACK_LINE(141)
						Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(141)
						::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(141)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(141)
						tmp21 = (tmp22 + tmp24);
					}
					else{
						HX_STACK_LINE(141)
						tmp21 = this->y;
					}
					HX_STACK_LINE(141)
					Float tmp22 = (tmp21 + (int)11);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(141)
					int tmp23 = (int)-6;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(141)
					::entities::Bullet tmp24 = ::entities::Bullet_obj::__new(tmp19,tmp22,(int)0,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(141)
					tmp16->add(tmp24);
				}
				else{
					HX_STACK_LINE(145)
					::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(145)
					bool tmp17 = this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(145)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(145)
					if ((tmp17)){
						HX_STACK_LINE(145)
						Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(145)
						::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(145)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(145)
						tmp18 = (tmp19 + tmp21);
					}
					else{
						HX_STACK_LINE(145)
						tmp18 = this->x;
					}
					HX_STACK_LINE(145)
					Float tmp19 = (tmp18 + (int)14);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(145)
					bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(145)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(145)
					if ((tmp20)){
						HX_STACK_LINE(145)
						Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(145)
						::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(145)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(145)
						tmp21 = (tmp22 + tmp24);
					}
					else{
						HX_STACK_LINE(145)
						tmp21 = this->y;
					}
					HX_STACK_LINE(145)
					Float tmp22 = (tmp21 + (int)11);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(145)
					int tmp23 = (int)-6;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(145)
					::entities::Bullet tmp24 = ::entities::Bullet_obj::__new(tmp19,tmp22,(int)0,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(145)
					tmp16->add(tmp24);
				}
			}
			else{
				HX_STACK_LINE(150)
				::com::haxepunk::graphics::Spritemap tmp14 = this->sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(150)
				bool tmp15 = tmp14->_flipped;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(150)
				if ((tmp15)){
					HX_STACK_LINE(152)
					::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(152)
					bool tmp17 = this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(152)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(152)
					if ((tmp17)){
						HX_STACK_LINE(152)
						Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(152)
						::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(152)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(152)
						tmp18 = (tmp19 + tmp21);
					}
					else{
						HX_STACK_LINE(152)
						tmp18 = this->x;
					}
					HX_STACK_LINE(152)
					Float tmp19 = (tmp18 + (int)7);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(152)
					bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(152)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(152)
					if ((tmp20)){
						HX_STACK_LINE(152)
						Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(152)
						::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(152)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(152)
						tmp21 = (tmp22 + tmp24);
					}
					else{
						HX_STACK_LINE(152)
						tmp21 = this->y;
					}
					HX_STACK_LINE(152)
					Float tmp22 = (tmp21 + (int)25);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(152)
					int tmp23 = (int)-6;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(152)
					::entities::Bullet tmp24 = ::entities::Bullet_obj::__new(tmp19,tmp22,tmp23,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(152)
					tmp16->add(tmp24);
				}
				else{
					HX_STACK_LINE(156)
					::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(156)
					bool tmp17 = this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(156)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					if ((tmp17)){
						HX_STACK_LINE(156)
						Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(156)
						::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(156)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(156)
						tmp18 = (tmp19 + tmp21);
					}
					else{
						HX_STACK_LINE(156)
						tmp18 = this->x;
					}
					HX_STACK_LINE(156)
					Float tmp19 = (tmp18 + (int)26);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(156)
					bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(156)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(156)
					if ((tmp20)){
						HX_STACK_LINE(156)
						Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(156)
						::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(156)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(156)
						tmp21 = (tmp22 + tmp24);
					}
					else{
						HX_STACK_LINE(156)
						tmp21 = this->y;
					}
					HX_STACK_LINE(156)
					Float tmp22 = (tmp21 + (int)25);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(156)
					::entities::Bullet tmp23 = ::entities::Bullet_obj::__new(tmp19,tmp22,(int)6,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(156)
					tmp16->add(tmp23);
				}
			}
		}
		HX_STACK_LINE(162)
		Float tmp12 = this->velX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		Float tmp13 = this->velY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(162)
		::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::_Entity::SolidType_Impl__obj::fromLeft(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(162)
		this->moveBy(tmp12,tmp13,tmp14,null());
		HX_STACK_LINE(163)
		this->animate();
		HX_STACK_LINE(166)
		bool tmp15 = this->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(166)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(166)
		if ((tmp15)){
			HX_STACK_LINE(166)
			Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(166)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(166)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(166)
			tmp16 = (tmp17 + tmp19);
		}
		else{
			HX_STACK_LINE(166)
			tmp16 = this->x;
		}
		HX_STACK_LINE(166)
		int tmp17 = this->originX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(166)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(166)
		int tmp19 = this->width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(166)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(166)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(166)
		::com::haxepunk::Screen tmp22 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(166)
		int tmp23 = tmp22->width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(166)
		Float tmp24 = (Float(tmp21) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(166)
		int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(166)
		::com::haxepunk::Screen tmp26 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(166)
		int tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(166)
		int tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(166)
		::com::haxepunk::Scene tmp29 = this->_scene;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(166)
		tmp29->camera->x = tmp28;
		HX_STACK_LINE(167)
		bool tmp30 = this->followCamera;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(167)
		Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(167)
		if ((tmp30)){
			HX_STACK_LINE(167)
			Float tmp32 = this->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(167)
			::openfl::_legacy::geom::Point tmp33 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(167)
			Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(167)
			tmp31 = (tmp32 + tmp34);
		}
		else{
			HX_STACK_LINE(167)
			tmp31 = this->y;
		}
		HX_STACK_LINE(167)
		int tmp32 = this->originY;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(167)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(167)
		int tmp34 = this->height;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(167)
		Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(167)
		Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(167)
		::com::haxepunk::Screen tmp37 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(167)
		int tmp38 = tmp37->height;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(167)
		Float tmp39 = (Float(tmp36) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(167)
		int tmp40 = ::Math_obj::floor(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(167)
		::com::haxepunk::Screen tmp41 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(167)
		int tmp42 = tmp41->height;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(167)
		int tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(167)
		::com::haxepunk::Scene tmp44 = this->_scene;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(167)
		tmp44->camera->y = tmp43;
		HX_STACK_LINE(170)
		::com::haxepunk::ds::Either tmp45 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)27);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(170)
		bool tmp46 = ::com::haxepunk::utils::Input_obj::pressed(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(170)
		if ((tmp46)){
			HX_STACK_LINE(172)
			bool tmp47 = this->followCamera;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(172)
			Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(172)
			if ((tmp47)){
				HX_STACK_LINE(172)
				Float tmp49 = this->x;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(172)
				::openfl::_legacy::geom::Point tmp50 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(172)
				Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(172)
				tmp48 = (tmp49 + tmp51);
			}
			else{
				HX_STACK_LINE(172)
				tmp48 = this->x;
			}
			HX_STACK_LINE(172)
			::com::haxepunk::utils::Data_obj::write(HX_HCSTRING("saveX","\x7b","\x4a","\x8c","\x77"),tmp48);
			HX_STACK_LINE(173)
			bool tmp49 = this->followCamera;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(173)
			Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(173)
			if ((tmp49)){
				HX_STACK_LINE(173)
				Float tmp51 = this->y;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(173)
				::openfl::_legacy::geom::Point tmp52 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(173)
				Float tmp53 = tmp52->y;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(173)
				tmp50 = (tmp51 + tmp53);
			}
			else{
				HX_STACK_LINE(173)
				tmp50 = this->y;
			}
			HX_STACK_LINE(173)
			::com::haxepunk::utils::Data_obj::write(HX_HCSTRING("saveY","\x7c","\x4a","\x8c","\x77"),tmp50);
			HX_STACK_LINE(174)
			::com::haxepunk::graphics::Spritemap tmp51 = this->sprite;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(174)
			bool tmp52 = tmp51->_flipped;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(174)
			::com::haxepunk::utils::Data_obj::write(HX_HCSTRING("saveFacing","\x37","\xca","\xbe","\x2c"),tmp52);
			HX_STACK_LINE(175)
			::com::haxepunk::utils::Data_obj::save(HX_HCSTRING("worrysave","\x5e","\x0b","\x1f","\xec"),null());
			HX_STACK_LINE(176)
			::openfl::_legacy::_system::System_obj::exit((int)0);
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(182)
			::com::haxepunk::ds::Either tmp47 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)87);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(182)
			bool tmp48 = ::com::haxepunk::utils::Input_obj::pressed(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(182)
			if ((tmp48)){
				HX_STACK_LINE(184)
				::com::haxepunk::Screen tmp49 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(184)
				int tmp50 = tmp49->height;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(184)
				int tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(184)
				this->moveBy((int)0,tmp51,null(),null());
			}
			HX_STACK_LINE(186)
			::com::haxepunk::ds::Either tmp49 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(186)
			bool tmp50 = ::com::haxepunk::utils::Input_obj::pressed(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(186)
			if ((tmp50)){
				HX_STACK_LINE(188)
				::com::haxepunk::Screen tmp51 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(188)
				int tmp52 = tmp51->height;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(188)
				int tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(188)
				this->moveBy(tmp53,(int)0,null(),null());
			}
			HX_STACK_LINE(190)
			::com::haxepunk::ds::Either tmp51 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)83);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(190)
			bool tmp52 = ::com::haxepunk::utils::Input_obj::pressed(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(190)
			if ((tmp52)){
				HX_STACK_LINE(192)
				::com::haxepunk::Screen tmp53 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(192)
				int tmp54 = tmp53->height;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(192)
				this->moveBy((int)0,tmp54,null(),null());
			}
			HX_STACK_LINE(194)
			::com::haxepunk::ds::Either tmp53 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)68);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(194)
			bool tmp54 = ::com::haxepunk::utils::Input_obj::pressed(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(194)
			if ((tmp54)){
				HX_STACK_LINE(196)
				::com::haxepunk::Screen tmp55 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(196)
				int tmp56 = tmp55->height;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(196)
				this->moveBy(tmp56,(int)0,null(),null());
			}
			HX_STACK_LINE(198)
			::com::haxepunk::ds::Either tmp55 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)82);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(198)
			bool tmp56 = ::com::haxepunk::utils::Input_obj::pressed(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(198)
			if ((tmp56)){
				HX_STACK_LINE(200)
				this->x = (int)2874;
				HX_STACK_LINE(201)
				this->y = (int)2160;
			}
			HX_STACK_LINE(203)
			::com::haxepunk::ds::Either tmp57 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)80);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(203)
			bool tmp58 = ::com::haxepunk::utils::Input_obj::pressed(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(203)
			if ((tmp58)){
				HX_STACK_LINE(205)
				bool tmp59 = this->followCamera;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(205)
				Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(205)
				if ((tmp59)){
					HX_STACK_LINE(205)
					Float tmp61 = this->x;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(205)
					::openfl::_legacy::geom::Point tmp62 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(205)
					Float tmp63 = tmp62->x;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(205)
					tmp60 = (tmp61 + tmp63);
				}
				else{
					HX_STACK_LINE(205)
					tmp60 = this->x;
				}
				HX_STACK_LINE(205)
				::String tmp61 = (tmp60 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(205)
				bool tmp62 = this->followCamera;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(205)
				Float tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(205)
				if ((tmp62)){
					HX_STACK_LINE(205)
					Float tmp64 = this->y;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(205)
					::openfl::_legacy::geom::Point tmp65 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(205)
					Float tmp66 = tmp65->y;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(205)
					tmp63 = (tmp64 + tmp66);
				}
				else{
					HX_STACK_LINE(205)
					tmp63 = this->y;
				}
				HX_STACK_LINE(205)
				::String tmp64 = (tmp61 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(205)
				Dynamic tmp65 = hx::SourceInfo(HX_HCSTRING("Player.hx","\xdd","\xc9","\x7f","\xa2"),205,HX_HCSTRING("entities.Player","\x0e","\xda","\xe0","\x13"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(205)
				::haxe::Log_obj::trace(tmp64,tmp65);
			}
			HX_STACK_LINE(207)
			this->unstuck();
		}
		HX_STACK_LINE(210)
		this->super::update();
	}
return null();
}


Void Player_obj::animate( ){
{
		HX_STACK_FRAME("entities.Player","animate",0xd1dbf441,"entities.Player.animate","entities/Player.hx",214,0x7a521d4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		bool tmp = this->onGround;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		if ((tmp1)){
			HX_STACK_LINE(217)
			::com::haxepunk::Sfx tmp2 = this->walkSfx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			tmp2->stop();
			HX_STACK_LINE(218)
			bool tmp3 = this->isSpinJumping;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			if ((tmp3)){
				HX_STACK_LINE(220)
				::com::haxepunk::graphics::Spritemap tmp4 = this->sprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				tmp4->play(HX_HCSTRING("spinjump","\xb0","\xaf","\x03","\x7b"),null(),null());
				HX_STACK_LINE(221)
				::com::haxepunk::Sfx tmp5 = this->spinJumpSfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(221)
				::openfl::_legacy::media::SoundChannel tmp6 = tmp5->_channel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(223)
					::com::haxepunk::Sfx tmp9 = this->spinJumpSfx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					tmp9->loop(null(),null());
				}
			}
			else{
				HX_STACK_LINE(228)
				bool tmp4 = this->isLookingUp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(228)
				if ((tmp4)){
					HX_STACK_LINE(230)
					::com::haxepunk::graphics::Spritemap tmp5 = this->sprite;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					tmp5->play(HX_HCSTRING("jump_up","\x4c","\x00","\xa2","\x0c"),null(),null());
				}
				else{
					HX_STACK_LINE(234)
					::com::haxepunk::graphics::Spritemap tmp5 = this->sprite;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					tmp5->play(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(238)
			bool tmp2 = this->onGround;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			if ((tmp2)){
				HX_STACK_LINE(240)
				::com::haxepunk::Sfx tmp3 = this->spinJumpSfx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(240)
				tmp3->stop();
				HX_STACK_LINE(241)
				Float tmp4 = this->velX;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				if ((tmp5)){
					HX_STACK_LINE(243)
					bool tmp6 = this->isLookingUp;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(243)
					if ((tmp6)){
						HX_STACK_LINE(245)
						::com::haxepunk::graphics::Spritemap tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(245)
						tmp7->play(HX_HCSTRING("walk_up","\x11","\x2b","\x61","\x93"),null(),null());
					}
					else{
						HX_STACK_LINE(249)
						::com::haxepunk::graphics::Spritemap tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(249)
						tmp7->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
					}
					HX_STACK_LINE(251)
					::com::haxepunk::Sfx tmp7 = this->walkSfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					::openfl::_legacy::media::SoundChannel tmp8 = tmp7->_channel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					if ((tmp10)){
						HX_STACK_LINE(253)
						::com::haxepunk::Sfx tmp11 = this->walkSfx;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(253)
						tmp11->loop(null(),null());
					}
				}
				else{
					HX_STACK_LINE(258)
					bool tmp6 = this->isLookingUp;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					if ((tmp6)){
						HX_STACK_LINE(260)
						::com::haxepunk::graphics::Spritemap tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(260)
						tmp7->play(HX_HCSTRING("idle_up","\xe6","\x79","\x4f","\x7c"),null(),null());
					}
					else{
						HX_STACK_LINE(264)
						::com::haxepunk::graphics::Spritemap tmp7 = this->sprite;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(264)
						tmp7->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
					}
					HX_STACK_LINE(266)
					::com::haxepunk::Sfx tmp7 = this->walkSfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(266)
					tmp7->stop();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,animate,(void))

Float Player_obj::GRAVITY;

int Player_obj::TERMINAL_VELOCITY;

Float Player_obj::RUN_SPEED;

int Player_obj::JUMP_POWER;

int Player_obj::JUMP_CANCEL_VELOCITY;

Float Player_obj::STANDING_JUMP_SPEED_PERCENTAGE;

int Player_obj::BULLET_SPEED;

int Player_obj::GAME_START_X;

int Player_obj::GAME_START_Y;

bool Player_obj::DEBUG;


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(onGround,"onGround");
	HX_MARK_MEMBER_NAME(isSpinJumping,"isSpinJumping");
	HX_MARK_MEMBER_NAME(isLookingUp,"isLookingUp");
	HX_MARK_MEMBER_NAME(walkSfx,"walkSfx");
	HX_MARK_MEMBER_NAME(jumpSfx,"jumpSfx");
	HX_MARK_MEMBER_NAME(spinJumpSfx,"spinJumpSfx");
	HX_MARK_MEMBER_NAME(landSfx,"landSfx");
	HX_MARK_MEMBER_NAME(shootSfx,"shootSfx");
	::entities::ActiveEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onGround,"onGround");
	HX_VISIT_MEMBER_NAME(isSpinJumping,"isSpinJumping");
	HX_VISIT_MEMBER_NAME(isLookingUp,"isLookingUp");
	HX_VISIT_MEMBER_NAME(walkSfx,"walkSfx");
	HX_VISIT_MEMBER_NAME(jumpSfx,"jumpSfx");
	HX_VISIT_MEMBER_NAME(spinJumpSfx,"spinJumpSfx");
	HX_VISIT_MEMBER_NAME(landSfx,"landSfx");
	HX_VISIT_MEMBER_NAME(shootSfx,"shootSfx");
	::entities::ActiveEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"walkSfx") ) { return walkSfx; }
		if (HX_FIELD_EQ(inName,"jumpSfx") ) { return jumpSfx; }
		if (HX_FIELD_EQ(inName,"landSfx") ) { return landSfx; }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onGround") ) { return onGround; }
		if (HX_FIELD_EQ(inName,"shootSfx") ) { return shootSfx; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isLookingUp") ) { return isLookingUp; }
		if (HX_FIELD_EQ(inName,"spinJumpSfx") ) { return spinJumpSfx; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isSpinJumping") ) { return isSpinJumping; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"walkSfx") ) { walkSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpSfx") ) { jumpSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"landSfx") ) { landSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onGround") ) { onGround=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shootSfx") ) { shootSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isLookingUp") ) { isLookingUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spinJumpSfx") ) { spinJumpSfx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isSpinJumping") ) { isSpinJumping=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onGround","\x06","\x19","\xd5","\xfb"));
	outFields->push(HX_HCSTRING("isSpinJumping","\x48","\xc3","\x4e","\x00"));
	outFields->push(HX_HCSTRING("isLookingUp","\xd4","\x6b","\x4d","\x37"));
	outFields->push(HX_HCSTRING("walkSfx","\xfc","\x02","\x58","\x93"));
	outFields->push(HX_HCSTRING("jumpSfx","\x37","\xd8","\x98","\x0c"));
	outFields->push(HX_HCSTRING("spinJumpSfx","\x95","\xba","\x19","\xf7"));
	outFields->push(HX_HCSTRING("landSfx","\x5a","\x93","\x18","\xec"));
	outFields->push(HX_HCSTRING("shootSfx","\xe6","\x07","\x65","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Player_obj,onGround),HX_HCSTRING("onGround","\x06","\x19","\xd5","\xfb")},
	{hx::fsBool,(int)offsetof(Player_obj,isSpinJumping),HX_HCSTRING("isSpinJumping","\x48","\xc3","\x4e","\x00")},
	{hx::fsBool,(int)offsetof(Player_obj,isLookingUp),HX_HCSTRING("isLookingUp","\xd4","\x6b","\x4d","\x37")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,walkSfx),HX_HCSTRING("walkSfx","\xfc","\x02","\x58","\x93")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,jumpSfx),HX_HCSTRING("jumpSfx","\x37","\xd8","\x98","\x0c")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,spinJumpSfx),HX_HCSTRING("spinJumpSfx","\x95","\xba","\x19","\xf7")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,landSfx),HX_HCSTRING("landSfx","\x5a","\x93","\x18","\xec")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Player_obj,shootSfx),HX_HCSTRING("shootSfx","\xe6","\x07","\x65","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Player_obj::GRAVITY,HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7")},
	{hx::fsInt,(void *) &Player_obj::TERMINAL_VELOCITY,HX_HCSTRING("TERMINAL_VELOCITY","\x80","\xc8","\x9c","\x69")},
	{hx::fsFloat,(void *) &Player_obj::RUN_SPEED,HX_HCSTRING("RUN_SPEED","\x13","\xcc","\xdc","\x35")},
	{hx::fsInt,(void *) &Player_obj::JUMP_POWER,HX_HCSTRING("JUMP_POWER","\x94","\xbe","\xff","\x12")},
	{hx::fsInt,(void *) &Player_obj::JUMP_CANCEL_VELOCITY,HX_HCSTRING("JUMP_CANCEL_VELOCITY","\x31","\xfc","\x53","\x19")},
	{hx::fsFloat,(void *) &Player_obj::STANDING_JUMP_SPEED_PERCENTAGE,HX_HCSTRING("STANDING_JUMP_SPEED_PERCENTAGE","\xf0","\x9d","\xdd","\x28")},
	{hx::fsInt,(void *) &Player_obj::BULLET_SPEED,HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d")},
	{hx::fsInt,(void *) &Player_obj::GAME_START_X,HX_HCSTRING("GAME_START_X","\x4e","\x6b","\xaf","\x94")},
	{hx::fsInt,(void *) &Player_obj::GAME_START_Y,HX_HCSTRING("GAME_START_Y","\x4f","\x6b","\xaf","\x94")},
	{hx::fsBool,(void *) &Player_obj::DEBUG,HX_HCSTRING("DEBUG","\x33","\x8a","\x0d","\x55")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onGround","\x06","\x19","\xd5","\xfb"),
	HX_HCSTRING("isSpinJumping","\x48","\xc3","\x4e","\x00"),
	HX_HCSTRING("isLookingUp","\xd4","\x6b","\x4d","\x37"),
	HX_HCSTRING("walkSfx","\xfc","\x02","\x58","\x93"),
	HX_HCSTRING("jumpSfx","\x37","\xd8","\x98","\x0c"),
	HX_HCSTRING("spinJumpSfx","\x95","\xba","\x19","\xf7"),
	HX_HCSTRING("landSfx","\x5a","\x93","\x18","\xec"),
	HX_HCSTRING("shootSfx","\xe6","\x07","\x65","\x2e"),
	HX_HCSTRING("moveCollideY","\x4c","\x77","\x0b","\x5e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("animate","\xa1","\xda","\x4c","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(Player_obj::TERMINAL_VELOCITY,"TERMINAL_VELOCITY");
	HX_MARK_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::JUMP_POWER,"JUMP_POWER");
	HX_MARK_MEMBER_NAME(Player_obj::JUMP_CANCEL_VELOCITY,"JUMP_CANCEL_VELOCITY");
	HX_MARK_MEMBER_NAME(Player_obj::STANDING_JUMP_SPEED_PERCENTAGE,"STANDING_JUMP_SPEED_PERCENTAGE");
	HX_MARK_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::GAME_START_X,"GAME_START_X");
	HX_MARK_MEMBER_NAME(Player_obj::GAME_START_Y,"GAME_START_Y");
	HX_MARK_MEMBER_NAME(Player_obj::DEBUG,"DEBUG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(Player_obj::TERMINAL_VELOCITY,"TERMINAL_VELOCITY");
	HX_VISIT_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMP_POWER,"JUMP_POWER");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMP_CANCEL_VELOCITY,"JUMP_CANCEL_VELOCITY");
	HX_VISIT_MEMBER_NAME(Player_obj::STANDING_JUMP_SPEED_PERCENTAGE,"STANDING_JUMP_SPEED_PERCENTAGE");
	HX_VISIT_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::GAME_START_X,"GAME_START_X");
	HX_VISIT_MEMBER_NAME(Player_obj::GAME_START_Y,"GAME_START_Y");
	HX_VISIT_MEMBER_NAME(Player_obj::DEBUG,"DEBUG");
};

#endif

hx::Class Player_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GRAVITY","\x2e","\x42","\xd3","\xf7"),
	HX_HCSTRING("TERMINAL_VELOCITY","\x80","\xc8","\x9c","\x69"),
	HX_HCSTRING("RUN_SPEED","\x13","\xcc","\xdc","\x35"),
	HX_HCSTRING("JUMP_POWER","\x94","\xbe","\xff","\x12"),
	HX_HCSTRING("JUMP_CANCEL_VELOCITY","\x31","\xfc","\x53","\x19"),
	HX_HCSTRING("STANDING_JUMP_SPEED_PERCENTAGE","\xf0","\x9d","\xdd","\x28"),
	HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d"),
	HX_HCSTRING("GAME_START_X","\x4e","\x6b","\xaf","\x94"),
	HX_HCSTRING("GAME_START_Y","\x4f","\x6b","\xaf","\x94"),
	HX_HCSTRING("DEBUG","\x33","\x8a","\x0d","\x55"),
	::String(null()) };

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Player","\x0e","\xda","\xe0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

void Player_obj::__boot()
{
	GRAVITY= ((Float)0.25);
	TERMINAL_VELOCITY= (int)6;
	RUN_SPEED= ((Float)3.5);
	JUMP_POWER= (int)6;
	JUMP_CANCEL_VELOCITY= (int)4;
	STANDING_JUMP_SPEED_PERCENTAGE= ((Float)0.92);
	BULLET_SPEED= (int)6;
	GAME_START_X= (int)2874;
	GAME_START_Y= (int)2160;
	DEBUG= true;
}

} // end namespace entities
