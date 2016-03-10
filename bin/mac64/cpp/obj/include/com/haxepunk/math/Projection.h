#ifndef INCLUDED_com_haxepunk_math_Projection
#define INCLUDED_com_haxepunk_math_Projection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
namespace com{
namespace haxepunk{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Projection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Projection_obj OBJ_;
		Projection_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.math.Projection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Projection_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Projection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Projection","\xaf","\x8c","\x3c","\xbb"); }

		Float max;
		Float min;
		virtual bool overlaps( ::com::haxepunk::math::Projection other);
		Dynamic overlaps_dyn();

		virtual Float getOverlap( ::com::haxepunk::math::Projection other);
		Dynamic getOverlap_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace math

#endif /* INCLUDED_com_haxepunk_math_Projection */ 
