#ifndef INCLUDED_com_haxepunk_graphics_Tilemap
#define INCLUDED_com_haxepunk_graphics_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Tilemap)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Tilemap_obj : public ::com::haxepunk::graphics::Canvas_obj{
	public:
		typedef ::com::haxepunk::graphics::Canvas_obj super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();
		Void __construct(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight,Dynamic __o_opaqueTiles);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.Tilemap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tilemap_obj > __new(::com::haxepunk::ds::Either tileset,int width,int height,int tileWidth,int tileHeight,Dynamic __o_tileSpacingWidth,Dynamic __o_tileSpacingHeight,Dynamic __o_opaqueTiles);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilemap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tilemap","\x0e","\x18","\xe0","\x12"); }

		bool usePositions;
		virtual Void setTile( int column,int row,hx::Null< int >  index);
		Dynamic setTile_dyn();

		virtual Void clearTile( int column,int row);
		Dynamic clearTile_dyn();

		virtual int getTile( int column,int row);
		Dynamic getTile_dyn();

		virtual Void setRect( int column,int row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< int >  index);
		Dynamic setRect_dyn();

		virtual Void clearRect( int column,int row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void loadFrom2DArray( Array< ::Dynamic > array);
		Dynamic loadFrom2DArray_dyn();

		virtual Void loadFromString( ::String str,::String columnSep,::String rowSep);
		Dynamic loadFromString_dyn();

		virtual ::String saveToString( ::String columnSep,::String rowSep);
		Dynamic saveToString_dyn();

		virtual int getIndex( int tilesColumn,int tilesRow);
		Dynamic getIndex_dyn();

		virtual int getX( int index);
		Dynamic getX_dyn();

		virtual int getY( int index);
		Dynamic getY_dyn();

		virtual Void shiftTiles( int columns,int rows,hx::Null< bool >  wrap);
		Dynamic shiftTiles_dyn();

		virtual Void updateRect( ::openfl::_legacy::geom::Rectangle rect,bool clear);
		Dynamic updateRect_dyn();

		virtual Void renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);

		virtual ::com::haxepunk::masks::Grid createGrid( Array< int > solidTiles,::com::haxepunk::masks::Grid grid);
		Dynamic createGrid_dyn();

		virtual Void updateTileRect( int index);
		Dynamic updateTileRect_dyn();

		virtual Void updateTile( int column,int row);
		Dynamic updateTile_dyn();

		virtual int get_tileWidth( );
		Dynamic get_tileWidth_dyn();

		virtual int get_tileHeight( );
		Dynamic get_tileHeight_dyn();

		int tileSpacingWidth;
		int tileSpacingHeight;
		virtual int get_tileCount( );
		Dynamic get_tileCount_dyn();

		int columns;
		virtual int get_columns( );
		Dynamic get_columns_dyn();

		int rows;
		virtual int get_rows( );
		Dynamic get_rows_dyn();

		bool opaqueTiles;
		virtual bool get_opaqueTiles( );
		Dynamic get_opaqueTiles_dyn();

		bool smooth;
		Array< ::Dynamic > _map;
		int _columns;
		int _rows;
		bool _opaqueTiles;
		::openfl::_legacy::display::BitmapData _set;
		::com::haxepunk::graphics::atlas::TileAtlas _atlas;
		int _setColumns;
		int _setRows;
		int _setCount;
		::openfl::_legacy::geom::Rectangle _tile;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Tilemap */ 
