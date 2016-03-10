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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
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

Void Canvas_obj::__construct(int width,int height)
{
HX_STACK_FRAME("com.haxepunk.graphics.Canvas","new",0x14940834,"com.haxepunk.graphics.Canvas.new","com/haxepunk/graphics/Canvas.hx",17,0x2ffb617b)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(414)
	this->_maxHeight = (int)4000;
	HX_STACK_LINE(413)
	this->_maxWidth = (int)4000;
	HX_STACK_LINE(410)
	this->_redrawBuffers = false;
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(52)
	this->_color = (int)16777215;
	HX_STACK_LINE(53)
	Float tmp = this->_blue = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = this->_green = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	this->_red = tmp1;
	HX_STACK_LINE(54)
	this->_alpha = (int)1;
	HX_STACK_LINE(55)
	::openfl::_legacy::display::Sprite tmp2 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	this->_graphics = tmp3;
	HX_STACK_LINE(56)
	::openfl::_legacy::geom::Matrix tmp4 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	this->_matrix = tmp4;
	HX_STACK_LINE(57)
	::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	this->_rect = tmp5;
	HX_STACK_LINE(58)
	::openfl::_legacy::geom::ColorTransform tmp6 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	this->_colorTransform = tmp6;
	HX_STACK_LINE(59)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	this->_midBuffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(61)
	this->angle = (int)0;
	HX_STACK_LINE(62)
	Float tmp7 = this->scaleY = (int)1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Float tmp8 = this->scaleX = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	this->scale = tmp8;
	HX_STACK_LINE(64)
	this->_width = width;
	HX_STACK_LINE(65)
	this->_height = height;
	HX_STACK_LINE(67)
	::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(67)
	if ((tmp10)){
		HX_STACK_LINE(69)
		int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		int tmp12 = this->_maxWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		int tmp14 = ::Math_obj::ceil(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		this->_refWidth = tmp14;
		HX_STACK_LINE(70)
		int tmp15 = height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		int tmp16 = this->_maxHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		int tmp18 = ::Math_obj::ceil(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		this->_refHeight = tmp18;
		HX_STACK_LINE(71)
		int tmp19 = this->_refWidth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(71)
		int tmp20 = this->_refHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(71)
		::openfl::_legacy::display::BitmapData tmp21 = ::com::haxepunk::HXP_obj::createBitmap(tmp19,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(71)
		this->_ref = tmp21;
		HX_STACK_LINE(72)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(72)
		int y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(72)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(72)
		int h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(72)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(73)
		int tmp22 = this->_width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(73)
		int tmp23 = this->_maxWidth;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(73)
		int tmp24 = hx::Mod(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(73)
		int ww = tmp24;		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(74)
		int tmp25 = this->_height;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(74)
		int tmp26 = this->_maxHeight;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(74)
		int tmp27 = hx::Mod(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(74)
		int hh = tmp27;		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(75)
		bool tmp28 = (ww == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(75)
		if ((tmp28)){
			HX_STACK_LINE(75)
			int tmp29 = this->_maxWidth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(75)
			ww = tmp29;
		}
		HX_STACK_LINE(76)
		bool tmp29 = (hh == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(76)
		if ((tmp29)){
			HX_STACK_LINE(76)
			int tmp30 = this->_maxHeight;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(76)
			hh = tmp30;
		}
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			int tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(77)
			int tmp31 = this->_refHeight;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(77)
			bool tmp32 = (tmp30 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(77)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(77)
			if ((tmp33)){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(79)
			int tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(79)
			int tmp35 = this->_refHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(79)
			int tmp36 = (tmp35 - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(79)
			bool tmp37 = (tmp34 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(79)
			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(79)
			if ((tmp37)){
				HX_STACK_LINE(79)
				tmp38 = this->_maxHeight;
			}
			else{
				HX_STACK_LINE(79)
				tmp38 = hh;
			}
			HX_STACK_LINE(79)
			h = tmp38;
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				int tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(80)
				int tmp40 = this->_refWidth;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(80)
				bool tmp41 = (tmp39 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(80)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				if ((tmp42)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(82)
				int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(82)
				int tmp44 = this->_refWidth;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(82)
				int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(82)
				bool tmp46 = (tmp43 < tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(82)
				int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(82)
				if ((tmp46)){
					HX_STACK_LINE(82)
					tmp47 = this->_maxWidth;
				}
				else{
					HX_STACK_LINE(82)
					tmp47 = ww;
				}
				HX_STACK_LINE(82)
				w = tmp47;
				HX_STACK_LINE(83)
				::openfl::_legacy::display::BitmapData tmp48 = this->_ref;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(83)
				int tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(83)
				int tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(83)
				int tmp51 = i;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(83)
				tmp48->setPixel(tmp49,tmp50,tmp51);
				HX_STACK_LINE(84)
				int tmp52 = w;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(84)
				int tmp53 = h;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(84)
				::openfl::_legacy::display::BitmapData tmp54 = ::com::haxepunk::HXP_obj::createBitmap(tmp52,tmp53,true,null());		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(84)
				this->_buffers[i] = tmp54;
				HX_STACK_LINE(85)
				(i)++;
				HX_STACK_LINE(85)
				(x)++;
			}
			HX_STACK_LINE(87)
			x = (int)0;
			HX_STACK_LINE(87)
			(y)++;
		}
	}
}
;
	return null();
}

//Canvas_obj::~Canvas_obj() { }

Dynamic Canvas_obj::__CreateEmpty() { return  new Canvas_obj; }
hx::ObjectPtr< Canvas_obj > Canvas_obj::__new(int width,int height)
{  hx::ObjectPtr< Canvas_obj > _result_ = new Canvas_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic Canvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Canvas_obj > _result_ = new Canvas_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Canvas_obj::render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","render",0xffc6d002,"com.haxepunk.graphics.Canvas.render","com/haxepunk/graphics/Canvas.hx",95,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(96)
		Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		Float tmp1 = this->scaleX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(97)
		Float tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		Float tmp4 = this->scaleY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		Float sy = tmp5;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(100)
		Float tmp6 = point->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		Float tmp9 = camera->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		Float tmp10 = this->scrollX;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::openfl::_legacy::geom::Point tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		tmp13->x = tmp12;
		HX_STACK_LINE(101)
		Float tmp14 = point->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(101)
		Float tmp17 = camera->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(101)
		Float tmp18 = this->scrollY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(101)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(101)
		Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(101)
		::openfl::_legacy::geom::Point tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(101)
		tmp21->y = tmp20;
		HX_STACK_LINE(103)
		::openfl::_legacy::geom::Rectangle tmp22 = this->_rect;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(103)
		Float tmp23 = tmp22->y = (int)0;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(103)
		::openfl::_legacy::geom::Rectangle tmp24 = this->_rect;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(103)
		tmp24->x = tmp23;
		HX_STACK_LINE(104)
		int tmp25 = this->_maxWidth;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(104)
		Float tmp26 = sx;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(104)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(104)
		::openfl::_legacy::geom::Rectangle tmp28 = this->_rect;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(104)
		tmp28->width = tmp27;
		HX_STACK_LINE(105)
		int tmp29 = this->_maxHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(105)
		Float tmp30 = sy;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(105)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(105)
		::openfl::_legacy::geom::Rectangle tmp32 = this->_rect;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(105)
		tmp32->height = tmp31;
		HX_STACK_LINE(108)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(108)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(108)
		::openfl::_legacy::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(108)
		::openfl::_legacy::geom::Point tmp33 = this->_point;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(108)
		Float px = tmp33->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(109)
		target->lock();
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			int tmp34 = yy;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(110)
			int tmp35 = this->_refHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(110)
			bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(110)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(110)
			if ((tmp37)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				int tmp38 = xx;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(112)
				int tmp39 = this->_refWidth;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(112)
				bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(112)
				bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(112)
				if ((tmp41)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(114)
				::openfl::_legacy::display::BitmapData tmp42 = this->_ref;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(114)
				int tmp43 = xx;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(114)
				int tmp44 = yy;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(114)
				int tmp45 = tmp42->getPixel(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(114)
				::openfl::_legacy::display::BitmapData tmp46 = this->_buffers->__get(tmp45).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(114)
				buffer = tmp46;
				HX_STACK_LINE(116)
				Float tmp47 = this->angle;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(116)
				bool tmp48 = (tmp47 == (int)0);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(116)
				bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(116)
				if ((tmp48)){
					HX_STACK_LINE(116)
					::openfl::_legacy::display::BlendMode tmp50 = this->blend;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(116)
					::openfl::_legacy::display::BlendMode tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(116)
					tmp49 = (tmp51 == null());
				}
				else{
					HX_STACK_LINE(116)
					tmp49 = false;
				}
				HX_STACK_LINE(116)
				if ((tmp49)){
					HX_STACK_LINE(118)
					bool tmp50 = (sx == (int)1);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(118)
					bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(118)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(118)
					if ((tmp51)){
						HX_STACK_LINE(118)
						tmp52 = (sy == (int)1);
					}
					else{
						HX_STACK_LINE(118)
						tmp52 = false;
					}
					HX_STACK_LINE(118)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(118)
					if ((tmp52)){
						HX_STACK_LINE(118)
						::openfl::_legacy::geom::ColorTransform tmp54 = this->_tint;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(118)
						::openfl::_legacy::geom::ColorTransform tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(118)
						tmp53 = (tmp55 == null());
					}
					else{
						HX_STACK_LINE(118)
						tmp53 = false;
					}
					HX_STACK_LINE(118)
					if ((tmp53)){
						HX_STACK_LINE(121)
						int tmp54 = buffer->get_width();		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(121)
						::openfl::_legacy::geom::Rectangle tmp55 = this->_rect;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(121)
						tmp55->width = tmp54;
						HX_STACK_LINE(122)
						int tmp56 = buffer->get_height();		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(122)
						::openfl::_legacy::geom::Rectangle tmp57 = this->_rect;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(122)
						tmp57->height = tmp56;
						HX_STACK_LINE(123)
						::openfl::_legacy::display::BitmapData tmp58 = buffer;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(123)
						::openfl::_legacy::geom::Rectangle tmp59 = this->_rect;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(123)
						::openfl::_legacy::geom::Point tmp60 = this->_point;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(123)
						target->copyPixels(tmp58,tmp59,tmp60,null(),null(),true);
					}
					else{
						HX_STACK_LINE(128)
						::openfl::_legacy::display::BitmapData tmp54 = this->_ref;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(128)
						int tmp55 = xx;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(128)
						int tmp56 = yy;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(128)
						int tmp57 = tmp54->getPixel(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(128)
						int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(128)
						int i = tmp58;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(129)
						int tmp59 = buffer->get_width();		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(129)
						Float tmp60 = sx;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(129)
						Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(129)
						int tmp62 = ::Std_obj::_int(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(129)
						int w = tmp62;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(130)
						int tmp63 = buffer->get_height();		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(130)
						Float tmp64 = sy;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(130)
						Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(130)
						int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(130)
						int h = tmp66;		HX_STACK_VAR(h,"h");
						HX_STACK_LINE(131)
						int tmp67 = i;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(131)
						int tmp68 = this->_midBuffers->length;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(131)
						bool tmp69 = (tmp67 >= tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(131)
						bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(131)
						bool tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(131)
						bool tmp72;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(131)
						if ((tmp71)){
							HX_STACK_LINE(132)
							::openfl::_legacy::display::BitmapData tmp73 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(132)
							::openfl::_legacy::display::BitmapData tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(132)
							::openfl::_legacy::display::BitmapData tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(132)
							int tmp76 = tmp75->get_width();		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(132)
							int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(132)
							int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(132)
							int tmp79 = w;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(132)
							tmp72 = (tmp78 != tmp79);
						}
						else{
							HX_STACK_LINE(131)
							tmp72 = true;
						}
						HX_STACK_LINE(131)
						bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(131)
						bool tmp74;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(131)
						if ((tmp73)){
							HX_STACK_LINE(133)
							::openfl::_legacy::display::BitmapData tmp75 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(133)
							::openfl::_legacy::display::BitmapData tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(133)
							int tmp77 = tmp76->get_height();		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(133)
							int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(133)
							int tmp79 = h;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(133)
							tmp74 = (tmp78 != tmp79);
						}
						else{
							HX_STACK_LINE(131)
							tmp74 = true;
						}
						HX_STACK_LINE(131)
						bool wrongSize = tmp74;		HX_STACK_VAR(wrongSize,"wrongSize");
						HX_STACK_LINE(134)
						bool tmp75 = this->_redrawBuffers;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(134)
						bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(134)
						bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(134)
						if ((tmp76)){
							HX_STACK_LINE(134)
							tmp77 = wrongSize;
						}
						else{
							HX_STACK_LINE(134)
							tmp77 = true;
						}
						HX_STACK_LINE(134)
						if ((tmp77)){
							HX_STACK_LINE(136)
							bool tmp78 = wrongSize;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(136)
							if ((tmp78)){
								HX_STACK_LINE(138)
								int tmp79 = i;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(138)
								int tmp80 = this->_midBuffers->length;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(138)
								bool tmp81 = (tmp79 < tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(138)
								if ((tmp81)){
									HX_STACK_LINE(140)
									::openfl::_legacy::display::BitmapData tmp82 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(140)
									tmp82->dispose();
								}
								HX_STACK_LINE(142)
								int tmp82 = w;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(142)
								int tmp83 = h;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(142)
								::openfl::_legacy::display::BitmapData tmp84 = ::com::haxepunk::HXP_obj::createBitmap(tmp82,tmp83,true,null());		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(142)
								this->_midBuffers[i] = tmp84;
							}
							else{
								HX_STACK_LINE(146)
								::openfl::_legacy::display::BitmapData tmp79 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(146)
								::openfl::_legacy::display::BitmapData tmp80 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(146)
								::openfl::_legacy::geom::Rectangle tmp81 = tmp80->get_rect();		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(146)
								tmp79->fillRect(tmp81,(int)0);
							}
							HX_STACK_LINE(148)
							::openfl::_legacy::geom::Matrix tmp79 = this->_matrix;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(148)
							Float tmp80 = tmp79->c = (int)0;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(148)
							::openfl::_legacy::geom::Matrix tmp81 = this->_matrix;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(148)
							tmp81->b = tmp80;
							HX_STACK_LINE(149)
							::openfl::_legacy::geom::Matrix tmp82 = this->_matrix;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(149)
							tmp82->a = sx;
							HX_STACK_LINE(150)
							::openfl::_legacy::geom::Matrix tmp83 = this->_matrix;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(150)
							tmp83->d = sy;
							HX_STACK_LINE(151)
							::openfl::_legacy::geom::Matrix tmp84 = this->_matrix;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(151)
							Float tmp85 = tmp84->ty = (int)0;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(151)
							::openfl::_legacy::geom::Matrix tmp86 = this->_matrix;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(151)
							tmp86->tx = tmp85;
							HX_STACK_LINE(152)
							Float tmp87 = this->angle;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(152)
							bool tmp88 = (tmp87 != (int)0);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(152)
							if ((tmp88)){
								HX_STACK_LINE(152)
								::openfl::_legacy::geom::Matrix tmp89 = this->_matrix;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(152)
								Float tmp90 = this->angle;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(152)
								Float tmp91 = ::Math_obj::PI;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(152)
								Float tmp92 = (Float(tmp91) / Float((int)-180));		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(152)
								Float tmp93 = (tmp90 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(152)
								tmp89->rotate(tmp93);
							}
							HX_STACK_LINE(154)
							::openfl::_legacy::display::BitmapData tmp89 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(154)
							::openfl::_legacy::display::BitmapData tmp90 = buffer;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(154)
							::openfl::_legacy::geom::Matrix tmp91 = this->_matrix;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(154)
							::openfl::_legacy::geom::ColorTransform tmp92 = this->_tint;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(154)
							::openfl::_legacy::display::BlendMode tmp93 = this->blend;		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(154)
							tmp89->draw(tmp90,tmp91,tmp92,tmp93,null(),null());
						}
						HX_STACK_LINE(157)
						::openfl::_legacy::display::BitmapData tmp78 = this->_midBuffers->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(157)
						::openfl::_legacy::geom::Rectangle tmp79 = this->_rect;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(157)
						::openfl::_legacy::geom::Point tmp80 = this->_point;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(157)
						target->copyPixels(tmp78,tmp79,tmp80,null(),null(),true);
					}
				}
				else{
					HX_STACK_LINE(163)
					::openfl::_legacy::geom::Matrix tmp50 = this->_matrix;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(163)
					Float tmp51 = tmp50->c = (int)0;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(163)
					::openfl::_legacy::geom::Matrix tmp52 = this->_matrix;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(163)
					tmp52->b = tmp51;
					HX_STACK_LINE(164)
					::openfl::_legacy::geom::Matrix tmp53 = this->_matrix;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(164)
					tmp53->a = sx;
					HX_STACK_LINE(165)
					::openfl::_legacy::geom::Matrix tmp54 = this->_matrix;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(165)
					tmp54->d = sy;
					HX_STACK_LINE(166)
					::openfl::_legacy::geom::Matrix tmp55 = this->_matrix;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(166)
					Float tmp56 = tmp55->ty = (int)0;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(166)
					::openfl::_legacy::geom::Matrix tmp57 = this->_matrix;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(166)
					tmp57->tx = tmp56;
					HX_STACK_LINE(167)
					Float tmp58 = this->angle;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(167)
					bool tmp59 = (tmp58 != (int)0);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(167)
					if ((tmp59)){
						HX_STACK_LINE(167)
						::openfl::_legacy::geom::Matrix tmp60 = this->_matrix;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(167)
						Float tmp61 = this->angle;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(167)
						Float tmp62 = ::Math_obj::PI;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(167)
						Float tmp63 = (Float(tmp62) / Float((int)-180));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(167)
						Float tmp64 = (tmp61 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(167)
						tmp60->rotate(tmp64);
					}
					HX_STACK_LINE(168)
					::openfl::_legacy::geom::Point tmp60 = this->_point;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(168)
					::openfl::_legacy::geom::Matrix tmp61 = this->_matrix;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(168)
					hx::AddEq(tmp61->tx,tmp60->x);
					HX_STACK_LINE(169)
					::openfl::_legacy::geom::Point tmp62 = this->_point;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(169)
					::openfl::_legacy::geom::Matrix tmp63 = this->_matrix;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(169)
					hx::AddEq(tmp63->ty,tmp62->y);
					HX_STACK_LINE(171)
					::openfl::_legacy::display::BitmapData tmp64 = buffer;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(171)
					::openfl::_legacy::geom::Matrix tmp65 = this->_matrix;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(171)
					::openfl::_legacy::geom::ColorTransform tmp66 = this->_tint;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(171)
					::openfl::_legacy::display::BlendMode tmp67 = this->blend;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(171)
					target->draw(tmp64,tmp65,tmp66,tmp67,null(),null());
				}
				HX_STACK_LINE(174)
				int tmp50 = this->_maxWidth;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(174)
				Float tmp51 = sx;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(174)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(174)
				::openfl::_legacy::geom::Point tmp53 = this->_point;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(174)
				hx::AddEq(tmp53->x,tmp52);
				HX_STACK_LINE(175)
				(xx)++;
			}
			HX_STACK_LINE(177)
			::openfl::_legacy::geom::Point tmp38 = this->_point;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(177)
			tmp38->x = px;
			HX_STACK_LINE(178)
			int tmp39 = this->_maxHeight;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(178)
			Float tmp40 = sy;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(178)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(178)
			::openfl::_legacy::geom::Point tmp42 = this->_point;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(178)
			hx::AddEq(tmp42->y,tmp41);
			HX_STACK_LINE(179)
			xx = (int)0;
			HX_STACK_LINE(180)
			(yy)++;
		}
		HX_STACK_LINE(182)
		target->unlock(null());
		HX_STACK_LINE(184)
		this->_redrawBuffers = false;
	}
return null();
}


Void Canvas_obj::draw( Float x,Float y,::openfl::_legacy::display::BitmapData source,::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","draw",0xe660cdb0,"com.haxepunk.graphics.Canvas.draw","com/haxepunk/graphics/Canvas.hx",195,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(196)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(196)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(197)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(198)
			while((true)){
				HX_STACK_LINE(198)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(198)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(198)
				if ((tmp1)){
					HX_STACK_LINE(198)
					break;
				}
				HX_STACK_LINE(198)
				::openfl::_legacy::display::BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(198)
				::openfl::_legacy::display::BitmapData buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(198)
				++(_g);
				HX_STACK_LINE(200)
				Float tmp3 = (x - xx);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				::openfl::_legacy::geom::Point tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				tmp4->x = tmp3;
				HX_STACK_LINE(201)
				Float tmp5 = (y - yy);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::openfl::_legacy::geom::Point tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp6->y = tmp5;
				HX_STACK_LINE(202)
				::openfl::_legacy::display::BitmapData tmp7 = source;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				bool tmp8 = (rect != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				::openfl::_legacy::geom::Rectangle tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				if ((tmp8)){
					HX_STACK_LINE(202)
					tmp9 = rect;
				}
				else{
					HX_STACK_LINE(202)
					tmp9 = source->get_rect();
				}
				HX_STACK_LINE(202)
				::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(202)
				buffer->copyPixels(tmp7,tmp9,tmp10,null(),null(),true);
				HX_STACK_LINE(203)
				int tmp11 = this->_maxWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(203)
				hx::AddEq(xx,tmp11);
				HX_STACK_LINE(204)
				int tmp12 = xx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(204)
				int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(204)
				bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(204)
				if ((tmp14)){
					HX_STACK_LINE(206)
					xx = (int)0;
					HX_STACK_LINE(207)
					int tmp15 = this->_maxHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(207)
					hx::AddEq(yy,tmp15);
				}
			}
		}
		HX_STACK_LINE(210)
		this->_redrawBuffers = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Canvas_obj,draw,(void))

Void Canvas_obj::fill( ::openfl::_legacy::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","fill",0xe7ac702f,"com.haxepunk.graphics.Canvas.fill","com/haxepunk/graphics/Canvas.hx",220,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(221)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(221)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(221)
		::openfl::_legacy::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(222)
		::openfl::_legacy::geom::Rectangle tmp = this->_rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		tmp->width = rect->width;
		HX_STACK_LINE(223)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		tmp1->height = rect->height;
		HX_STACK_LINE(224)
		bool tmp2 = (alpha >= (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		if ((tmp2)){
			HX_STACK_LINE(224)
			hx::OrEq(color,(int)-16777216);
		}
		else{
			HX_STACK_LINE(225)
			bool tmp3 = (alpha <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			if ((tmp3)){
				HX_STACK_LINE(225)
				color = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				Float tmp4 = (alpha * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(226)
				int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				int tmp7 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				color = tmp8;
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				if ((tmp4)){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::openfl::_legacy::display::BitmapData tmp5 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				::openfl::_legacy::display::BitmapData buffer1 = tmp5;		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(229)
				Float tmp6 = (rect->x - xx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(229)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(229)
				tmp7->x = tmp6;
				HX_STACK_LINE(230)
				Float tmp8 = (rect->y - yy);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(230)
				::openfl::_legacy::geom::Rectangle tmp9 = this->_rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				tmp9->y = tmp8;
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(231)
				int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(231)
				buffer1->fillRect(tmp10,tmp11);
				HX_STACK_LINE(232)
				int tmp12 = this->_maxWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				hx::AddEq(xx,tmp12);
				HX_STACK_LINE(233)
				int tmp13 = xx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(233)
				int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(233)
				bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				if ((tmp15)){
					HX_STACK_LINE(235)
					xx = (int)0;
					HX_STACK_LINE(236)
					int tmp16 = this->_maxHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(236)
					hx::AddEq(yy,tmp16);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,fill,(void))

Void Canvas_obj::drawRect( ::openfl::_legacy::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","drawRect",0x4851def4,"com.haxepunk.graphics.Canvas.drawRect","com/haxepunk/graphics/Canvas.hx",248,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(249)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(249)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(249)
		::openfl::_legacy::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(250)
		bool tmp = (alpha >= (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		if ((tmp)){
			HX_STACK_LINE(252)
			::openfl::_legacy::geom::Rectangle tmp1 = this->_rect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			tmp1->width = rect->width;
			HX_STACK_LINE(253)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			tmp2->height = rect->height;
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(255)
				while((true)){
					HX_STACK_LINE(255)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(255)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(255)
					if ((tmp4)){
						HX_STACK_LINE(255)
						break;
					}
					HX_STACK_LINE(255)
					::openfl::_legacy::display::BitmapData tmp5 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(255)
					::openfl::_legacy::display::BitmapData buffer1 = tmp5;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(255)
					++(_g);
					HX_STACK_LINE(257)
					Float tmp6 = (rect->x - xx);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(257)
					tmp7->x = tmp6;
					HX_STACK_LINE(258)
					Float tmp8 = (rect->y - yy);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(258)
					::openfl::_legacy::geom::Rectangle tmp9 = this->_rect;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(258)
					tmp9->y = tmp8;
					HX_STACK_LINE(259)
					::openfl::_legacy::geom::Rectangle tmp10 = this->_rect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(259)
					int tmp11 = (int((int)-16777216) | int(color));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(259)
					buffer1->fillRect(tmp10,tmp11);
					HX_STACK_LINE(260)
					int tmp12 = this->_maxWidth;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(260)
					hx::AddEq(xx,tmp12);
					HX_STACK_LINE(261)
					int tmp13 = xx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(261)
					int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(261)
					bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(261)
					if ((tmp15)){
						HX_STACK_LINE(263)
						xx = (int)0;
						HX_STACK_LINE(264)
						int tmp16 = this->_maxHeight;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(264)
						hx::AddEq(yy,tmp16);
					}
				}
			}
			HX_STACK_LINE(267)
			return null();
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(269)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(269)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(269)
				if ((tmp2)){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				::openfl::_legacy::display::BitmapData tmp3 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(269)
				::openfl::_legacy::display::BitmapData buffer1 = tmp3;		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(269)
				++(_g);
				HX_STACK_LINE(271)
				::openfl::_legacy::display::Graphics tmp4 = this->_graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				tmp4->clear();
				HX_STACK_LINE(272)
				::openfl::_legacy::display::Graphics tmp5 = this->_graphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(272)
				int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(272)
				Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(272)
				tmp5->beginFill(tmp6,tmp7);
				HX_STACK_LINE(273)
				::openfl::_legacy::display::Graphics tmp8 = this->_graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(273)
				Float tmp9 = (rect->x - xx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				Float tmp10 = (rect->y - yy);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				Float tmp11 = rect->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(273)
				Float tmp12 = rect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				tmp8->drawRect(tmp9,tmp10,tmp11,tmp12);
				HX_STACK_LINE(274)
				::openfl::_legacy::display::Sprite tmp13 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(274)
				buffer1->draw(tmp13,null(),null(),null(),null(),null());
				HX_STACK_LINE(275)
				int tmp14 = this->_maxWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(275)
				hx::AddEq(xx,tmp14);
				HX_STACK_LINE(276)
				int tmp15 = xx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(276)
				int tmp16 = this->_width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(276)
				bool tmp17 = (tmp15 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(276)
				if ((tmp17)){
					HX_STACK_LINE(278)
					xx = (int)0;
					HX_STACK_LINE(279)
					int tmp18 = this->_maxHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(279)
					hx::AddEq(yy,tmp18);
				}
			}
		}
		HX_STACK_LINE(282)
		::openfl::_legacy::display::Graphics tmp1 = this->_graphics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		tmp1->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawRect,(void))

Void Canvas_obj::fillTexture( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::display::BitmapData texture){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","fillTexture",0xa436746c,"com.haxepunk.graphics.Canvas.fillTexture","com/haxepunk/graphics/Canvas.hx",291,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(292)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(292)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(293)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(293)
				if ((tmp1)){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				::openfl::_legacy::display::BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(293)
				::openfl::_legacy::display::BitmapData buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(293)
				++(_g);
				HX_STACK_LINE(295)
				::openfl::_legacy::display::Graphics tmp3 = this->_graphics;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(295)
				tmp3->clear();
				HX_STACK_LINE(296)
				::openfl::_legacy::display::Graphics tmp4 = this->_graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				::openfl::_legacy::display::BitmapData tmp5 = texture;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				tmp4->beginBitmapFill(tmp5,null(),null(),null());
				HX_STACK_LINE(297)
				::openfl::_legacy::display::Graphics tmp6 = this->_graphics;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				Float tmp7 = (rect->x - xx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				Float tmp8 = (rect->y - yy);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				Float tmp9 = rect->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				Float tmp10 = rect->height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				tmp6->drawRect(tmp7,tmp8,tmp9,tmp10);
				HX_STACK_LINE(298)
				::openfl::_legacy::display::Sprite tmp11 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(298)
				buffer->draw(tmp11,null(),null(),null(),null(),null());
				HX_STACK_LINE(299)
				int tmp12 = this->_maxWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(299)
				hx::AddEq(xx,tmp12);
				HX_STACK_LINE(300)
				int tmp13 = xx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(300)
				int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(300)
				bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(300)
				if ((tmp15)){
					HX_STACK_LINE(302)
					xx = (int)0;
					HX_STACK_LINE(303)
					int tmp16 = this->_maxHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(303)
					hx::AddEq(yy,tmp16);
				}
			}
		}
		HX_STACK_LINE(306)
		::openfl::_legacy::display::Graphics tmp = this->_graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		tmp->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,fillTexture,(void))

Void Canvas_obj::drawGraphic( int x,int y,::com::haxepunk::Graphic source){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Canvas","drawGraphic",0x9f09cad8,"com.haxepunk.graphics.Canvas.drawGraphic","com/haxepunk/graphics/Canvas.hx",316,0x2ffb617b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(317)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(317)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(318)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(318)
			while((true)){
				HX_STACK_LINE(318)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(318)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(318)
				if ((tmp1)){
					HX_STACK_LINE(318)
					break;
				}
				HX_STACK_LINE(318)
				::openfl::_legacy::display::BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(318)
				::openfl::_legacy::display::BitmapData buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(318)
				++(_g);
				HX_STACK_LINE(320)
				int tmp3 = (x - xx);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(320)
				::openfl::_legacy::geom::Point tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(320)
				tmp4->x = tmp3;
				HX_STACK_LINE(321)
				int tmp5 = (y - yy);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(321)
				::openfl::_legacy::geom::Point tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(321)
				tmp6->y = tmp5;
				HX_STACK_LINE(322)
				::openfl::_legacy::display::BitmapData tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(322)
				::openfl::_legacy::geom::Point tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(322)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::zero;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				source->render(tmp7,tmp8,tmp9);
				HX_STACK_LINE(323)
				int tmp10 = this->_maxWidth;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(323)
				hx::AddEq(xx,tmp10);
				HX_STACK_LINE(324)
				int tmp11 = xx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				int tmp12 = this->_width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(324)
				if ((tmp13)){
					HX_STACK_LINE(326)
					xx = (int)0;
					HX_STACK_LINE(327)
					int tmp14 = this->_maxHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(327)
					hx::AddEq(yy,tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawGraphic,(void))

int Canvas_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_color",0xde8f9c8e,"com.haxepunk.graphics.Canvas.get_color","com/haxepunk/graphics/Canvas.hx",336,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	int tmp = this->_color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_color,return )

int Canvas_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","set_color",0xc1e0889a,"com.haxepunk.graphics.Canvas.set_color","com/haxepunk/graphics/Canvas.hx",338,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(339)
	hx::ModEq(value,(int)16777215);
	HX_STACK_LINE(340)
	int tmp = this->_color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(340)
	if ((tmp2)){
		HX_STACK_LINE(340)
		int tmp3 = this->_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		return tmp3;
	}
	HX_STACK_LINE(341)
	this->_color = value;
	HX_STACK_LINE(342)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		int tmp4 = this->get_color();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		int color = tmp4;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(342)
		int tmp5 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(342)
		tmp3 = (int(tmp5) & int((int)255));
	}
	HX_STACK_LINE(342)
	Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(342)
	this->_red = tmp4;
	HX_STACK_LINE(343)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int tmp6 = this->get_color();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		int color = tmp6;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(343)
		int tmp7 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(343)
		tmp5 = (int(tmp7) & int((int)255));
	}
	HX_STACK_LINE(343)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(343)
	this->_green = tmp6;
	HX_STACK_LINE(344)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		int tmp8 = this->get_color();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		int color = tmp8;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(344)
		tmp7 = (int(color) & int((int)255));
	}
	HX_STACK_LINE(344)
	Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(344)
	this->_blue = tmp8;
	HX_STACK_LINE(346)
	Float tmp9 = this->_alpha;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(346)
	bool tmp10 = (tmp9 == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(346)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(346)
	if ((tmp10)){
		HX_STACK_LINE(346)
		int tmp12 = this->_color;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(346)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(346)
		tmp11 = (tmp13 == (int)16777215);
	}
	else{
		HX_STACK_LINE(346)
		tmp11 = false;
	}
	HX_STACK_LINE(346)
	if ((tmp11)){
		HX_STACK_LINE(348)
		this->_tint = null();
		HX_STACK_LINE(349)
		int tmp12 = this->_color;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		return tmp12;
	}
	HX_STACK_LINE(351)
	::openfl::_legacy::geom::ColorTransform tmp12 = this->_colorTransform;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(351)
	this->_tint = tmp12;
	HX_STACK_LINE(352)
	Float tmp13 = this->_red;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(352)
	::openfl::_legacy::geom::ColorTransform tmp14 = this->_tint;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(352)
	tmp14->redMultiplier = tmp13;
	HX_STACK_LINE(353)
	Float tmp15 = this->_green;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(353)
	::openfl::_legacy::geom::ColorTransform tmp16 = this->_tint;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(353)
	tmp16->greenMultiplier = tmp15;
	HX_STACK_LINE(354)
	Float tmp17 = this->_blue;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(354)
	::openfl::_legacy::geom::ColorTransform tmp18 = this->_tint;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(354)
	tmp18->blueMultiplier = tmp17;
	HX_STACK_LINE(355)
	Float tmp19 = this->_alpha;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(355)
	::openfl::_legacy::geom::ColorTransform tmp20 = this->_tint;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(355)
	tmp20->alphaMultiplier = tmp19;
	HX_STACK_LINE(356)
	this->_redrawBuffers = true;
	HX_STACK_LINE(357)
	int tmp21 = this->_color;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(357)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_color,return )

Float Canvas_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_alpha",0xb5c9d289,"com.haxepunk.graphics.Canvas.get_alpha","com/haxepunk/graphics/Canvas.hx",364,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	Float tmp = this->_alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_alpha,return )

Float Canvas_obj::set_alpha( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","set_alpha",0x991abe95,"com.haxepunk.graphics.Canvas.set_alpha","com/haxepunk/graphics/Canvas.hx",366,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(367)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	if ((tmp)){
		HX_STACK_LINE(367)
		value = (int)0;
	}
	HX_STACK_LINE(368)
	bool tmp1 = (value > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	if ((tmp1)){
		HX_STACK_LINE(368)
		value = (int)1;
	}
	HX_STACK_LINE(369)
	Float tmp2 = this->_alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(369)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(369)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(369)
	if ((tmp4)){
		HX_STACK_LINE(369)
		Float tmp5 = this->_alpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(369)
		return tmp5;
	}
	HX_STACK_LINE(370)
	this->_alpha = value;
	HX_STACK_LINE(371)
	Float tmp5 = this->_alpha;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	bool tmp6 = (tmp5 == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(371)
	if ((tmp6)){
		HX_STACK_LINE(371)
		int tmp8 = this->_color;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(371)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(371)
		tmp7 = (tmp9 == (int)16777215);
	}
	else{
		HX_STACK_LINE(371)
		tmp7 = false;
	}
	HX_STACK_LINE(371)
	if ((tmp7)){
		HX_STACK_LINE(373)
		this->_tint = null();
		HX_STACK_LINE(374)
		Float tmp8 = this->_alpha;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(374)
		return tmp8;
	}
	HX_STACK_LINE(376)
	::openfl::_legacy::geom::ColorTransform tmp8 = this->_colorTransform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(376)
	this->_tint = tmp8;
	HX_STACK_LINE(377)
	Float tmp9 = this->_red;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(377)
	::openfl::_legacy::geom::ColorTransform tmp10 = this->_tint;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(377)
	tmp10->redMultiplier = tmp9;
	HX_STACK_LINE(378)
	Float tmp11 = this->_green;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(378)
	::openfl::_legacy::geom::ColorTransform tmp12 = this->_tint;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(378)
	tmp12->greenMultiplier = tmp11;
	HX_STACK_LINE(379)
	Float tmp13 = this->_blue;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(379)
	::openfl::_legacy::geom::ColorTransform tmp14 = this->_tint;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(379)
	tmp14->blueMultiplier = tmp13;
	HX_STACK_LINE(380)
	Float tmp15 = this->_alpha;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(380)
	::openfl::_legacy::geom::ColorTransform tmp16 = this->_tint;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(380)
	tmp16->alphaMultiplier = tmp15;
	HX_STACK_LINE(381)
	this->_redrawBuffers = true;
	HX_STACK_LINE(382)
	Float tmp17 = this->_alpha;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(382)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_alpha,return )

Void Canvas_obj::shift( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","shift",0x4abfc156,"com.haxepunk.graphics.Canvas.shift","com/haxepunk/graphics/Canvas.hx",391,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(392)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		this->drawGraphic(tmp,tmp1,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,shift,(void))

int Canvas_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_width",0x5e95e131,"com.haxepunk.graphics.Canvas.get_width","com/haxepunk/graphics/Canvas.hx",399,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_width,return )

int Canvas_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Canvas","get_height",0x1adea25c,"com.haxepunk.graphics.Canvas.get_height","com/haxepunk/graphics/Canvas.hx",405,0x2ffb617b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_height,return )


Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_midBuffers,"_midBuffers");
	HX_MARK_MEMBER_NAME(_redrawBuffers,"_redrawBuffers");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_refWidth,"_refWidth");
	HX_MARK_MEMBER_NAME(_refHeight,"_refHeight");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_midBuffers,"_midBuffers");
	HX_VISIT_MEMBER_NAME(_redrawBuffers,"_redrawBuffers");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_refWidth,"_refWidth");
	HX_VISIT_MEMBER_NAME(_refHeight,"_refHeight");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Canvas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"_ref") ) { return _ref; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { return _maxWidth; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { return _refWidth; }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"_refHeight") ) { return _refHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillTexture") ) { return fillTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphic") ) { return drawGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_midBuffers") ) { return _midBuffers; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_redrawBuffers") ) { return _redrawBuffers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Canvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { _maxWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { _refWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refHeight") ) { _refHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_midBuffers") ) { _midBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_redrawBuffers") ) { _redrawBuffers=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"));
	outFields->push(HX_HCSTRING("_midBuffers","\xea","\x47","\xd9","\x0d"));
	outFields->push(HX_HCSTRING("_redrawBuffers","\x3d","\xfb","\x68","\x39"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_maxWidth","\x21","\x00","\x16","\xbc"));
	outFields->push(HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d"));
	outFields->push(HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"));
	outFields->push(HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"));
	outFields->push(HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"));
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_refWidth","\x12","\x97","\xfb","\x4d"));
	outFields->push(HX_HCSTRING("_refHeight","\x5b","\x11","\x78","\xa4"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(Canvas_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsInt,(int)offsetof(Canvas_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Canvas_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Canvas_obj,_buffers),HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Canvas_obj,_midBuffers),HX_HCSTRING("_midBuffers","\xea","\x47","\xd9","\x0d")},
	{hx::fsBool,(int)offsetof(Canvas_obj,_redrawBuffers),HX_HCSTRING("_redrawBuffers","\x3d","\xfb","\x68","\x39")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_maxWidth),HX_HCSTRING("_maxWidth","\x21","\x00","\x16","\xbc")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_maxHeight),HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_color),HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_alpha),HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Canvas_obj,_tint),HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Canvas_obj,_colorTransform),HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(Canvas_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_red),HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_green),HX_HCSTRING("_green","\x04","\x56","\xd4","\x95")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,_blue),HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Canvas_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_refWidth),HX_HCSTRING("_refWidth","\x12","\x97","\xfb","\x4d")},
	{hx::fsInt,(int)offsetof(Canvas_obj,_refHeight),HX_HCSTRING("_refHeight","\x5b","\x11","\x78","\xa4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Canvas_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(Canvas_obj,_graphics),HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("fillTexture","\x98","\x48","\x7c","\xc2"),
	HX_HCSTRING("drawGraphic","\x04","\x9f","\x4f","\xbd"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"),
	HX_HCSTRING("_midBuffers","\xea","\x47","\xd9","\x0d"),
	HX_HCSTRING("_redrawBuffers","\x3d","\xfb","\x68","\x39"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_maxWidth","\x21","\x00","\x16","\xbc"),
	HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d"),
	HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"),
	HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"),
	HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00"),
	HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"),
	HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"),
	HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"),
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("_refWidth","\x12","\x97","\xfb","\x4d"),
	HX_HCSTRING("_refHeight","\x5b","\x11","\x78","\xa4"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#endif

hx::Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Canvas","\x42","\x1e","\x7f","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Canvas_obj >;
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
