#ifndef INCLUDED_com_haxepunk_utils_Data
#define INCLUDED_com_haxepunk_utils_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Data)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,SharedObject)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Data_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.utils.Data")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Data_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"); }

		static void __boot();
		static ::String id;
		static Void load( ::String file);
		static Dynamic load_dyn();

		static Void save( ::String file,hx::Null< bool >  overwrite);
		static Dynamic save_dyn();

		static int readInt( ::String name,hx::Null< int >  defaultValue);
		static Dynamic readInt_dyn();

		static bool readBool( ::String name,hx::Null< bool >  defaultValue);
		static Dynamic readBool_dyn();

		static ::String readString( ::String name,::String defaultValue);
		static Dynamic readString_dyn();

		static Dynamic read( ::String name,Dynamic defaultValue);
		static Dynamic read_dyn();

		static Void write( ::String name,Dynamic value);
		static Dynamic write_dyn();

		static Dynamic loadData( ::String file);
		static Dynamic loadData_dyn();

		static ::openfl::_legacy::net::SharedObject _shared;
		static ::String _dir;
		static ::haxe::ds::StringMap _data;
		static ::String PREFIX;
		static ::String DEFAULT_FILE;
		static int SIZE;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Data */ 
