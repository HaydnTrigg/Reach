/* ---------- headers */

#include "xdk\xgraphicsd\r400_address.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// r400AddressVersion;
// r400LoadFullAddrState;
// r400LoadDefaultGroupSize;
// r400LoadArrayAddrState;
// r400LoadAddrState;
// r400LoadTiledataAddrState;
// r400LoadEdramAddrState;
// r400GetDefaultGroupSize;
// r400GetAddrStateGroupSize;
// r400GetAddrStatePipes;
// r400GetAddrStateDataSize;
// r400GetAddrStateTileSize;
// r400GetAddrStateTileBase;
// r400GetAddrStateSliceSize;
// r400GetAddrStatePitch;
// r400GetAddrStateHeight;
// r400GetAddrStateSlices;
// r400GetAddrStateFragments;
// r400GetAddrStateSurfaceBase;
// r400GetAddrStateAddrArray;
// r400GetAddrStateSurfaceSize;
// r400SetAddrStateTileBase;
// r400CheckAddrState;
// r400AddrTo1d;
// r400LocalToAddr;
// r4001dToAddr;
// r400ArrayToShift;
// r4002dToTile;
// r4003dToTile;
// r400AddrToSubset;
// r4001dToSubset;
// r400AddrToLocal;
// r4001dToLocal;
// r4002dtiledToLocal;
// r4003dtiledToLocal;
// r4002dtiledToSubset;
// r4003dtiledToSubset;
// r400AddrAt1d;
// r400LocalAt1d;
// r400LocalAtTile;
// r4001dAtByte;
// r4002dAtByte;
// r4003dAtByte;
// r400SliceAtByte;
// unsigned int XGRAPHICS::xy_TO_edram_tile(unsigned int, unsigned int, unsigned int, unsigned int, int);
// void XGRAPHICS::xy_TO_edram_macro_bank(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int, int, int);
// unsigned int XGRAPHICS::xy_TO_edram_dword(unsigned int, unsigned int, unsigned int, unsigned int);
// void XGRAPHICS::xy_TO_edram_tile_macro_bank_dword(unsigned int, unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int, unsigned int, int, int, int);
// unsigned int XGRAPHICS::edram_macro_bank_dword_TO_edram_tile_offset(unsigned int, unsigned int, unsigned int);
// unsigned int XGRAPHICS::edram_tile_macro_bank_dword_TO_edram_device_offset(unsigned int, unsigned int, unsigned int, unsigned int);
// unsigned int XGRAPHICS::xy_TO_edram_device_offset(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int);
// r400AddrTo3dX;
// r400AddrTo3dY;
// r400AddrTo3dZ;
// r400LocalTo1d;
// r400LocalTo3dX;
// r400LocalTo3dY;
// r400LocalTo3dZ;
// r400OffsetToAddr;
// r4003dToSubset;
// r400LocalAt2d;
// r400LocalAt3d;
// r400AddrAtTile;
// r400AddrTo2dX;
// r400AddrTo2dY;
// r400LocalTo2dX;
// r400LocalTo2dY;
// r4003dToAddr;
// r4003dToLocal;
// r400AddrAt2d;
// r400AddrAt3d;
// r4002dToAddr;
// r400ArrayToAddr;
// r400ArrayToInsert;
// r400ArrayToExtract;
// r4002dToSubset;
// r4002dToLocal;

//r400AddressVersion
//{
//    mangled_ppc("r400AddressVersion");
//};

//r400LoadFullAddrState
//{
//    mangled_ppc("r400LoadFullAddrState");
//};

//r400LoadDefaultGroupSize
//{
//    mangled_ppc("r400LoadDefaultGroupSize");
//};

//r400LoadArrayAddrState
//{
//    mangled_ppc("r400LoadArrayAddrState");
//};

//r400LoadAddrState
//{
//    mangled_ppc("r400LoadAddrState");
//};

//r400LoadTiledataAddrState
//{
//    mangled_ppc("r400LoadTiledataAddrState");
//};

//r400LoadEdramAddrState
//{
//    mangled_ppc("r400LoadEdramAddrState");
//};

//r400GetDefaultGroupSize
//{
//    mangled_ppc("r400GetDefaultGroupSize");
//};

//r400GetAddrStateGroupSize
//{
//    mangled_ppc("r400GetAddrStateGroupSize");
//};

//r400GetAddrStatePipes
//{
//    mangled_ppc("r400GetAddrStatePipes");
//};

//r400GetAddrStateDataSize
//{
//    mangled_ppc("r400GetAddrStateDataSize");
//};

//r400GetAddrStateTileSize
//{
//    mangled_ppc("r400GetAddrStateTileSize");
//};

//r400GetAddrStateTileBase
//{
//    mangled_ppc("r400GetAddrStateTileBase");
//};

//r400GetAddrStateSliceSize
//{
//    mangled_ppc("r400GetAddrStateSliceSize");
//};

//r400GetAddrStatePitch
//{
//    mangled_ppc("r400GetAddrStatePitch");
//};

//r400GetAddrStateHeight
//{
//    mangled_ppc("r400GetAddrStateHeight");
//};

//r400GetAddrStateSlices
//{
//    mangled_ppc("r400GetAddrStateSlices");
//};

//r400GetAddrStateFragments
//{
//    mangled_ppc("r400GetAddrStateFragments");
//};

//r400GetAddrStateSurfaceBase
//{
//    mangled_ppc("r400GetAddrStateSurfaceBase");
//};

//r400GetAddrStateAddrArray
//{
//    mangled_ppc("r400GetAddrStateAddrArray");
//};

//r400GetAddrStateSurfaceSize
//{
//    mangled_ppc("r400GetAddrStateSurfaceSize");
//};

//r400SetAddrStateTileBase
//{
//    mangled_ppc("r400SetAddrStateTileBase");
//};

//r400CheckAddrState
//{
//    mangled_ppc("r400CheckAddrState");
//};

//r400AddrTo1d
//{
//    mangled_ppc("r400AddrTo1d");
//};

//r400LocalToAddr
//{
//    mangled_ppc("r400LocalToAddr");
//};

//r4001dToAddr
//{
//    mangled_ppc("r4001dToAddr");
//};

//r400ArrayToShift
//{
//    mangled_ppc("r400ArrayToShift");
//};

//r4002dToTile
//{
//    mangled_ppc("r4002dToTile");
//};

//r4003dToTile
//{
//    mangled_ppc("r4003dToTile");
//};

//r400AddrToSubset
//{
//    mangled_ppc("r400AddrToSubset");
//};

//r4001dToSubset
//{
//    mangled_ppc("r4001dToSubset");
//};

//r400AddrToLocal
//{
//    mangled_ppc("r400AddrToLocal");
//};

//r4001dToLocal
//{
//    mangled_ppc("r4001dToLocal");
//};

//r4002dtiledToLocal
//{
//    mangled_ppc("r4002dtiledToLocal");
//};

//r4003dtiledToLocal
//{
//    mangled_ppc("r4003dtiledToLocal");
//};

//r4002dtiledToSubset
//{
//    mangled_ppc("r4002dtiledToSubset");
//};

//r4003dtiledToSubset
//{
//    mangled_ppc("r4003dtiledToSubset");
//};

//r400AddrAt1d
//{
//    mangled_ppc("r400AddrAt1d");
//};

//r400LocalAt1d
//{
//    mangled_ppc("r400LocalAt1d");
//};

//r400LocalAtTile
//{
//    mangled_ppc("r400LocalAtTile");
//};

//r4001dAtByte
//{
//    mangled_ppc("r4001dAtByte");
//};

//r4002dAtByte
//{
//    mangled_ppc("r4002dAtByte");
//};

//r4003dAtByte
//{
//    mangled_ppc("r4003dAtByte");
//};

//r400SliceAtByte
//{
//    mangled_ppc("r400SliceAtByte");
//};

//unsigned int XGRAPHICS::xy_TO_edram_tile(unsigned int, unsigned int, unsigned int, unsigned int, int)
//{
//    mangled_ppc("?xy_TO_edram_tile@XGRAPHICS@@YAIIIIIH@Z");
//};

//void XGRAPHICS::xy_TO_edram_macro_bank(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int, int, int)
//{
//    mangled_ppc("?xy_TO_edram_macro_bank@XGRAPHICS@@YAXIIPAI0IHH@Z");
//};

//unsigned int XGRAPHICS::xy_TO_edram_dword(unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?xy_TO_edram_dword@XGRAPHICS@@YAIIIII@Z");
//};

//void XGRAPHICS::xy_TO_edram_tile_macro_bank_dword(unsigned int, unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int, unsigned int, int, int, int)
//{
//    mangled_ppc("?xy_TO_edram_tile_macro_bank_dword@XGRAPHICS@@YAXIIIPAI000IIHHH@Z");
//};

//unsigned int XGRAPHICS::edram_macro_bank_dword_TO_edram_tile_offset(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?edram_macro_bank_dword_TO_edram_tile_offset@XGRAPHICS@@YAIIII@Z");
//};

//unsigned int XGRAPHICS::edram_tile_macro_bank_dword_TO_edram_device_offset(unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?edram_tile_macro_bank_dword_TO_edram_device_offset@XGRAPHICS@@YAIIIII@Z");
//};

//unsigned int XGRAPHICS::xy_TO_edram_device_offset(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int)
//{
//    mangled_ppc("?xy_TO_edram_device_offset@XGRAPHICS@@YAIIIIIIHHH@Z");
//};

//r400AddrTo3dX
//{
//    mangled_ppc("r400AddrTo3dX");
//};

//r400AddrTo3dY
//{
//    mangled_ppc("r400AddrTo3dY");
//};

//r400AddrTo3dZ
//{
//    mangled_ppc("r400AddrTo3dZ");
//};

//r400LocalTo1d
//{
//    mangled_ppc("r400LocalTo1d");
//};

//r400LocalTo3dX
//{
//    mangled_ppc("r400LocalTo3dX");
//};

//r400LocalTo3dY
//{
//    mangled_ppc("r400LocalTo3dY");
//};

//r400LocalTo3dZ
//{
//    mangled_ppc("r400LocalTo3dZ");
//};

//r400OffsetToAddr
//{
//    mangled_ppc("r400OffsetToAddr");
//};

//r4003dToSubset
//{
//    mangled_ppc("r4003dToSubset");
//};

//r400LocalAt2d
//{
//    mangled_ppc("r400LocalAt2d");
//};

//r400LocalAt3d
//{
//    mangled_ppc("r400LocalAt3d");
//};

//r400AddrAtTile
//{
//    mangled_ppc("r400AddrAtTile");
//};

//r400AddrTo2dX
//{
//    mangled_ppc("r400AddrTo2dX");
//};

//r400AddrTo2dY
//{
//    mangled_ppc("r400AddrTo2dY");
//};

//r400LocalTo2dX
//{
//    mangled_ppc("r400LocalTo2dX");
//};

//r400LocalTo2dY
//{
//    mangled_ppc("r400LocalTo2dY");
//};

//r4003dToAddr
//{
//    mangled_ppc("r4003dToAddr");
//};

//r4003dToLocal
//{
//    mangled_ppc("r4003dToLocal");
//};

//r400AddrAt2d
//{
//    mangled_ppc("r400AddrAt2d");
//};

//r400AddrAt3d
//{
//    mangled_ppc("r400AddrAt3d");
//};

//r4002dToAddr
//{
//    mangled_ppc("r4002dToAddr");
//};

//r400ArrayToAddr
//{
//    mangled_ppc("r400ArrayToAddr");
//};

//r400ArrayToInsert
//{
//    mangled_ppc("r400ArrayToInsert");
//};

//r400ArrayToExtract
//{
//    mangled_ppc("r400ArrayToExtract");
//};

//r4002dToSubset
//{
//    mangled_ppc("r4002dToSubset");
//};

//r4002dToLocal
//{
//    mangled_ppc("r4002dToLocal");
//};

