#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
namespace com{
namespace haxepunk{

::com::haxepunk::RenderMode RenderMode_obj::BUFFER;

::com::haxepunk::RenderMode RenderMode_obj::HARDWARE;

HX_DEFINE_CREATE_ENUM(RenderMode_obj)

int RenderMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")) return 0;
	if (inName==HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")) return 1;
	return super::__FindIndex(inName);
}

int RenderMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")) return 0;
	if (inName==HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RenderMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")) return BUFFER;
	if (inName==HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")) return HARDWARE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderMode_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(RenderMode_obj::HARDWARE,"HARDWARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderMode_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(RenderMode_obj::HARDWARE,"HARDWARE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RenderMode_obj::__mClass;

Dynamic __Create_RenderMode_obj() { return new RenderMode_obj; }

void RenderMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.RenderMode","\x52","\x57","\x37","\x5a"), hx::TCanCast< RenderMode_obj >,sStaticFields,sMemberFields,
	&__Create_RenderMode_obj, &__Create,
	&super::__SGetClass(), &CreateRenderMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RenderMode_obj::__boot()
{
hx::Static(BUFFER) = hx::CreateEnum< RenderMode_obj >(HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),0);
hx::Static(HARDWARE) = hx::CreateEnum< RenderMode_obj >(HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),1);
}


} // end namespace com
} // end namespace haxepunk
