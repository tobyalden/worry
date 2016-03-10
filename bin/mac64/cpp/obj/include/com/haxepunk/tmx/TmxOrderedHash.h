#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#define INCLUDED_com_haxepunk_tmx_TmxOrderedHash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,tmx,TmxOrderedHash)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace haxepunk{
namespace tmx{


class HXCPP_CLASS_ATTRIBUTES  TmxOrderedHash_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TmxOrderedHash_obj OBJ_;
		TmxOrderedHash_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tmx.TmxOrderedHash")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TmxOrderedHash_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TmxOrderedHash_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TmxOrderedHash","\x5c","\x64","\x1e","\x6d"); }

		Array< ::String > _keys;
		::haxe::ds::StringMap _map;
		virtual Void set( ::String key,Dynamic value);
		Dynamic set_dyn();

		virtual bool remove( ::String key);
		Dynamic remove_dyn();

		virtual bool exists( ::String key);
		Dynamic exists_dyn();

		virtual Dynamic get( ::String key);
		Dynamic get_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx

#endif /* INCLUDED_com_haxepunk_tmx_TmxOrderedHash */ 
