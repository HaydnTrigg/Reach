/* ---------- headers */

#include "xdk\xgraphicsd\r400_addrenum.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// r400AddrenumVersion;
// r400ColorFormatToExportFormat;
// r400ExportFormatToColorFormat;
// r400ColorformatXToSurfaceFormat;
// r400ColorformatXToSurfaceNumber;
// r400DepthformatXToSurfaceFormat;
// r400DepthformatXToSurfaceNumber;
// r400BytesPerDataElement;
// r400BytesPerColorElement;
// r400BytesPerDepthElement;
// r400BytesPerColorXElement;
// r400BytesPerDepthXElement;
// r400CompressedDataElement;
// r400FloatingDataElement;
// r400FloatingColorElement;
// r400BlendableColorElement;
// r400FloatingColorXElement;
// r400BlendableColorXElement;
// r400StencilInDepthElement;
// r400ChannelsPerDataElement;
// r400ChannelsPerColorElement;
// r400ChannelsPerDepthElement;
// r400BitsPerDataChannel;
// r400BitsPerColorChannel;
// r400BitsPerDepthChannel;
// r400BitsPerColorXChannel;
// r400BitsPerDepthXChannel;
// r400GetSurfaceDataSize;
// r400GetColorDataSize;
// r400GetDepthDataSize;
// r400GetTiledataDataSize;
// r400GetFmaskSamples;
// r400GetPmaskDataBits;
// r400GetTotalZplanes;
// r400GetSurfaceAddrArray;
// r400GetColorAddrArray;
// r400GetDepthAddrArray;
// r400GetSurfaceArraySize;
// r400GetSurfaceSlice;
// r400LoadDepthPackAddrState;
// r400EndianXorValue;
// r400ArrayFromDataElement;
// r400ArrayFromColorElement;
// r400ArrayFromDepthElement;
// r400ArrayFromColorXElement;
// r400ArrayFromDepthXElement;
// r400ArrayToDataElement;
// r400ArrayToColorElement;
// r400ArrayToDepthElement;
// r400ArrayToColorXElement;
// r400ArrayToDepthXElement;
// r400AbgrFromColorArray;
// r400DsFromDepthArray;
// r400AbgrToColorArray;
// r400DsToDepthArray;
// int XGRAPHICS::r400FloatScale(float, int);
// float XGRAPHICS::r400FloatNumber(float);
// float XGRAPHICS::r400FloatBiasBC(float, int);
// r400FloatFromColorInt;
// r400FloatFromColorIntRB;
// r400FloatToColorIntRB;
// r400FloatFromAlphaRef;
// r400StencilFromDepthArray;
// r400StencilFromDepthXArray;
// r400DepthFromDepthArray;
// r400StencilToDepthArray;
// r400StencilToDepthXArray;
// r400DepthToDepthArray;
// r400DepthToDepthXArray;
// r400IntFromDepthFloat;
// r400StencilFromDepthXElement;
// void XGRAPHICS::r400FloatsToDepthElement(float *const, char *, enum DepthFormat, enum SurfaceEndian);
// r400FloatsToDepthXElement;
// r400LoadZplaneFields;
// r400GetZplaneFields;
// r400TestZplaneEqual;
// r400FixedFromZplane;
// r400FloatFromFixed;
// int XGRAPHICS::r400Depth24FloatFromFixed(__int64);
// r400IntFromFixed;
// r400GetTiledataCmask;
// r400GetTiledataZmask;
// r400GetTiledataSmask;
// r400GetTiledataZrange;
// r400GetTiledataCmaskIndirect;
// r400GetTiledataZmaskIndirect;
// r400GetTiledataSmaskIndirect;
// r400GetTiledataZrangeIndirect;
// r400SetTiledataCmask;
// r400SetTiledataZmask;
// r400SetTiledataSmask;
// r400SetTiledataZrange;
// r400SetTiledataCmaskIndirect;
// r400SetTiledataZmaskIndirect;
// r400SetTiledataSmaskIndirect;
// r400SetTiledataZrangeIndirect;
// r400ZfloatToInternal;
// r400DepthBufferToInternal;
// r400ZconstToInternal;
// r400ZconstToBuffer;
// r400ZconstFromBuffer;
// r400ZconstToFloat;
// r400ZconstToDouble;
// r400ZconstFromFloat;
// r400ZconstFromDouble;
// r400ZrangeToInternalMin;
// r400ZrangeToInternalMax;
// r400ZrangeToBufferMin;
// r400ZrangeToBufferMax;
// r400ZrangeToZconstMin;
// r400ZrangeToZconstMax;
// r400ZrangeToFloatMin;
// r400ZrangeToFloatMax;
// r400ZrangeFromInternal;
// r400ZrangeFromBufferMinMax;
// r400ZrangeFromBufferSingle;
// r400ZrangeFromZconstMinMax;
// r400ZrangeFromZconstSingle;
// r400ZrangeFromFloatMinMax;
// r400ZrangeFromFloatSingle;
// r400AddrToPipe;
// r400AddrToRbId;
// r400ExportToPipe;
// r400ExportToRbId;
// r400SliceToPipe;
// r400SliceToRbId;
// r400DisableToTotalPipes;
// r400DisableToFirstPipe;
// int XGRAPHICS::r400ExpFromGammaIntRB(int, int);
// r400ColorNumberToExportNumber;
// r400AlphaInColorElement;
// r400GetFmaskDataSize;
// r400GetPmaskDataSize;
// r400GetSurfaceTotalSize;
// r400GetSurfaceMaskSize;
// r400LoadColorMaskAddrState;
// int XGRAPHICS::r400FloatBiasScale(float, int, int);
// r400PFloatFromColorIntRB;
// r400FloatFromColorIntBC;
// r400FloatToColorInt;
// r400FloatToColorIntHW;
// r400PFloatToColorIntRB;
// r400FloatToColorIntBC;
// r400FloatsToColorElement;
// r400DepthFromDepthXArray;
// r400DepthFromDepthXElement;
// r400LoadZplaneWords;
// r400LoadZplaneBytes;
// r400GetZplaneWords;
// r400GetZplaneBytes;
// r400FloatFromZplane;
// r400IntFromZplane;
// float XGRAPHICS::r400FloatFromGammaIntBC(int, int);
// int XGRAPHICS::r400FloatToGammaIntBC(float, int);
// float XGRAPHICS::r400FloatFromGammaIntRB(int, int);
// int XGRAPHICS::r400FloatToGammaIntRB(float, int, int);
// r400PFloatFromColorIntBC;
// r400PFloatToColorIntBC;
// r400FloatsToColorElementBC;
// r400FloatsToColorXElement;
// r400FloatsFromColorXElement;

//r400AddrenumVersion
//{
//    mangled_ppc("r400AddrenumVersion");
//};

//r400ColorFormatToExportFormat
//{
//    mangled_ppc("r400ColorFormatToExportFormat");
//};

//r400ExportFormatToColorFormat
//{
//    mangled_ppc("r400ExportFormatToColorFormat");
//};

//r400ColorformatXToSurfaceFormat
//{
//    mangled_ppc("r400ColorformatXToSurfaceFormat");
//};

//r400ColorformatXToSurfaceNumber
//{
//    mangled_ppc("r400ColorformatXToSurfaceNumber");
//};

//r400DepthformatXToSurfaceFormat
//{
//    mangled_ppc("r400DepthformatXToSurfaceFormat");
//};

//r400DepthformatXToSurfaceNumber
//{
//    mangled_ppc("r400DepthformatXToSurfaceNumber");
//};

//r400BytesPerDataElement
//{
//    mangled_ppc("r400BytesPerDataElement");
//};

//r400BytesPerColorElement
//{
//    mangled_ppc("r400BytesPerColorElement");
//};

//r400BytesPerDepthElement
//{
//    mangled_ppc("r400BytesPerDepthElement");
//};

//r400BytesPerColorXElement
//{
//    mangled_ppc("r400BytesPerColorXElement");
//};

//r400BytesPerDepthXElement
//{
//    mangled_ppc("r400BytesPerDepthXElement");
//};

//r400CompressedDataElement
//{
//    mangled_ppc("r400CompressedDataElement");
//};

//r400FloatingDataElement
//{
//    mangled_ppc("r400FloatingDataElement");
//};

//r400FloatingColorElement
//{
//    mangled_ppc("r400FloatingColorElement");
//};

//r400BlendableColorElement
//{
//    mangled_ppc("r400BlendableColorElement");
//};

//r400FloatingColorXElement
//{
//    mangled_ppc("r400FloatingColorXElement");
//};

//r400BlendableColorXElement
//{
//    mangled_ppc("r400BlendableColorXElement");
//};

//r400StencilInDepthElement
//{
//    mangled_ppc("r400StencilInDepthElement");
//};

//r400ChannelsPerDataElement
//{
//    mangled_ppc("r400ChannelsPerDataElement");
//};

//r400ChannelsPerColorElement
//{
//    mangled_ppc("r400ChannelsPerColorElement");
//};

//r400ChannelsPerDepthElement
//{
//    mangled_ppc("r400ChannelsPerDepthElement");
//};

//r400BitsPerDataChannel
//{
//    mangled_ppc("r400BitsPerDataChannel");
//};

//r400BitsPerColorChannel
//{
//    mangled_ppc("r400BitsPerColorChannel");
//};

//r400BitsPerDepthChannel
//{
//    mangled_ppc("r400BitsPerDepthChannel");
//};

//r400BitsPerColorXChannel
//{
//    mangled_ppc("r400BitsPerColorXChannel");
//};

//r400BitsPerDepthXChannel
//{
//    mangled_ppc("r400BitsPerDepthXChannel");
//};

//r400GetSurfaceDataSize
//{
//    mangled_ppc("r400GetSurfaceDataSize");
//};

//r400GetColorDataSize
//{
//    mangled_ppc("r400GetColorDataSize");
//};

//r400GetDepthDataSize
//{
//    mangled_ppc("r400GetDepthDataSize");
//};

//r400GetTiledataDataSize
//{
//    mangled_ppc("r400GetTiledataDataSize");
//};

//r400GetFmaskSamples
//{
//    mangled_ppc("r400GetFmaskSamples");
//};

//r400GetPmaskDataBits
//{
//    mangled_ppc("r400GetPmaskDataBits");
//};

//r400GetTotalZplanes
//{
//    mangled_ppc("r400GetTotalZplanes");
//};

//r400GetSurfaceAddrArray
//{
//    mangled_ppc("r400GetSurfaceAddrArray");
//};

//r400GetColorAddrArray
//{
//    mangled_ppc("r400GetColorAddrArray");
//};

//r400GetDepthAddrArray
//{
//    mangled_ppc("r400GetDepthAddrArray");
//};

//r400GetSurfaceArraySize
//{
//    mangled_ppc("r400GetSurfaceArraySize");
//};

//r400GetSurfaceSlice
//{
//    mangled_ppc("r400GetSurfaceSlice");
//};

//r400LoadDepthPackAddrState
//{
//    mangled_ppc("r400LoadDepthPackAddrState");
//};

//r400EndianXorValue
//{
//    mangled_ppc("r400EndianXorValue");
//};

//r400ArrayFromDataElement
//{
//    mangled_ppc("r400ArrayFromDataElement");
//};

//r400ArrayFromColorElement
//{
//    mangled_ppc("r400ArrayFromColorElement");
//};

//r400ArrayFromDepthElement
//{
//    mangled_ppc("r400ArrayFromDepthElement");
//};

//r400ArrayFromColorXElement
//{
//    mangled_ppc("r400ArrayFromColorXElement");
//};

//r400ArrayFromDepthXElement
//{
//    mangled_ppc("r400ArrayFromDepthXElement");
//};

//r400ArrayToDataElement
//{
//    mangled_ppc("r400ArrayToDataElement");
//};

//r400ArrayToColorElement
//{
//    mangled_ppc("r400ArrayToColorElement");
//};

//r400ArrayToDepthElement
//{
//    mangled_ppc("r400ArrayToDepthElement");
//};

//r400ArrayToColorXElement
//{
//    mangled_ppc("r400ArrayToColorXElement");
//};

//r400ArrayToDepthXElement
//{
//    mangled_ppc("r400ArrayToDepthXElement");
//};

//r400AbgrFromColorArray
//{
//    mangled_ppc("r400AbgrFromColorArray");
//};

//r400DsFromDepthArray
//{
//    mangled_ppc("r400DsFromDepthArray");
//};

//r400AbgrToColorArray
//{
//    mangled_ppc("r400AbgrToColorArray");
//};

//r400DsToDepthArray
//{
//    mangled_ppc("r400DsToDepthArray");
//};

//int XGRAPHICS::r400FloatScale(float, int)
//{
//    mangled_ppc("?r400FloatScale@XGRAPHICS@@YAHMH@Z");
//};

//float XGRAPHICS::r400FloatNumber(float)
//{
//    mangled_ppc("?r400FloatNumber@XGRAPHICS@@YAMM@Z");
//};

//float XGRAPHICS::r400FloatBiasBC(float, int)
//{
//    mangled_ppc("?r400FloatBiasBC@XGRAPHICS@@YAMMH@Z");
//};

//r400FloatFromColorInt
//{
//    mangled_ppc("r400FloatFromColorInt");
//};

//r400FloatFromColorIntRB
//{
//    mangled_ppc("r400FloatFromColorIntRB");
//};

//r400FloatToColorIntRB
//{
//    mangled_ppc("r400FloatToColorIntRB");
//};

//r400FloatFromAlphaRef
//{
//    mangled_ppc("r400FloatFromAlphaRef");
//};

//r400StencilFromDepthArray
//{
//    mangled_ppc("r400StencilFromDepthArray");
//};

//r400StencilFromDepthXArray
//{
//    mangled_ppc("r400StencilFromDepthXArray");
//};

//r400DepthFromDepthArray
//{
//    mangled_ppc("r400DepthFromDepthArray");
//};

//r400StencilToDepthArray
//{
//    mangled_ppc("r400StencilToDepthArray");
//};

//r400StencilToDepthXArray
//{
//    mangled_ppc("r400StencilToDepthXArray");
//};

//r400DepthToDepthArray
//{
//    mangled_ppc("r400DepthToDepthArray");
//};

//r400DepthToDepthXArray
//{
//    mangled_ppc("r400DepthToDepthXArray");
//};

//r400IntFromDepthFloat
//{
//    mangled_ppc("r400IntFromDepthFloat");
//};

//r400StencilFromDepthXElement
//{
//    mangled_ppc("r400StencilFromDepthXElement");
//};

//void XGRAPHICS::r400FloatsToDepthElement(float *const, char *, enum DepthFormat, enum SurfaceEndian)
//{
//    mangled_ppc("?r400FloatsToDepthElement@XGRAPHICS@@YAXQAMPADW4DepthFormat@@W4SurfaceEndian@@@Z");
//};

//r400FloatsToDepthXElement
//{
//    mangled_ppc("r400FloatsToDepthXElement");
//};

//r400LoadZplaneFields
//{
//    mangled_ppc("r400LoadZplaneFields");
//};

//r400GetZplaneFields
//{
//    mangled_ppc("r400GetZplaneFields");
//};

//r400TestZplaneEqual
//{
//    mangled_ppc("r400TestZplaneEqual");
//};

//r400FixedFromZplane
//{
//    mangled_ppc("r400FixedFromZplane");
//};

//r400FloatFromFixed
//{
//    mangled_ppc("r400FloatFromFixed");
//};

//int XGRAPHICS::r400Depth24FloatFromFixed(__int64)
//{
//    mangled_ppc("?r400Depth24FloatFromFixed@XGRAPHICS@@YAH_J@Z");
//};

//r400IntFromFixed
//{
//    mangled_ppc("r400IntFromFixed");
//};

//r400GetTiledataCmask
//{
//    mangled_ppc("r400GetTiledataCmask");
//};

//r400GetTiledataZmask
//{
//    mangled_ppc("r400GetTiledataZmask");
//};

//r400GetTiledataSmask
//{
//    mangled_ppc("r400GetTiledataSmask");
//};

//r400GetTiledataZrange
//{
//    mangled_ppc("r400GetTiledataZrange");
//};

//r400GetTiledataCmaskIndirect
//{
//    mangled_ppc("r400GetTiledataCmaskIndirect");
//};

//r400GetTiledataZmaskIndirect
//{
//    mangled_ppc("r400GetTiledataZmaskIndirect");
//};

//r400GetTiledataSmaskIndirect
//{
//    mangled_ppc("r400GetTiledataSmaskIndirect");
//};

//r400GetTiledataZrangeIndirect
//{
//    mangled_ppc("r400GetTiledataZrangeIndirect");
//};

//r400SetTiledataCmask
//{
//    mangled_ppc("r400SetTiledataCmask");
//};

//r400SetTiledataZmask
//{
//    mangled_ppc("r400SetTiledataZmask");
//};

//r400SetTiledataSmask
//{
//    mangled_ppc("r400SetTiledataSmask");
//};

//r400SetTiledataZrange
//{
//    mangled_ppc("r400SetTiledataZrange");
//};

//r400SetTiledataCmaskIndirect
//{
//    mangled_ppc("r400SetTiledataCmaskIndirect");
//};

//r400SetTiledataZmaskIndirect
//{
//    mangled_ppc("r400SetTiledataZmaskIndirect");
//};

//r400SetTiledataSmaskIndirect
//{
//    mangled_ppc("r400SetTiledataSmaskIndirect");
//};

//r400SetTiledataZrangeIndirect
//{
//    mangled_ppc("r400SetTiledataZrangeIndirect");
//};

//r400ZfloatToInternal
//{
//    mangled_ppc("r400ZfloatToInternal");
//};

//r400DepthBufferToInternal
//{
//    mangled_ppc("r400DepthBufferToInternal");
//};

//r400ZconstToInternal
//{
//    mangled_ppc("r400ZconstToInternal");
//};

//r400ZconstToBuffer
//{
//    mangled_ppc("r400ZconstToBuffer");
//};

//r400ZconstFromBuffer
//{
//    mangled_ppc("r400ZconstFromBuffer");
//};

//r400ZconstToFloat
//{
//    mangled_ppc("r400ZconstToFloat");
//};

//r400ZconstToDouble
//{
//    mangled_ppc("r400ZconstToDouble");
//};

//r400ZconstFromFloat
//{
//    mangled_ppc("r400ZconstFromFloat");
//};

//r400ZconstFromDouble
//{
//    mangled_ppc("r400ZconstFromDouble");
//};

//r400ZrangeToInternalMin
//{
//    mangled_ppc("r400ZrangeToInternalMin");
//};

//r400ZrangeToInternalMax
//{
//    mangled_ppc("r400ZrangeToInternalMax");
//};

//r400ZrangeToBufferMin
//{
//    mangled_ppc("r400ZrangeToBufferMin");
//};

//r400ZrangeToBufferMax
//{
//    mangled_ppc("r400ZrangeToBufferMax");
//};

//r400ZrangeToZconstMin
//{
//    mangled_ppc("r400ZrangeToZconstMin");
//};

//r400ZrangeToZconstMax
//{
//    mangled_ppc("r400ZrangeToZconstMax");
//};

//r400ZrangeToFloatMin
//{
//    mangled_ppc("r400ZrangeToFloatMin");
//};

//r400ZrangeToFloatMax
//{
//    mangled_ppc("r400ZrangeToFloatMax");
//};

//r400ZrangeFromInternal
//{
//    mangled_ppc("r400ZrangeFromInternal");
//};

//r400ZrangeFromBufferMinMax
//{
//    mangled_ppc("r400ZrangeFromBufferMinMax");
//};

//r400ZrangeFromBufferSingle
//{
//    mangled_ppc("r400ZrangeFromBufferSingle");
//};

//r400ZrangeFromZconstMinMax
//{
//    mangled_ppc("r400ZrangeFromZconstMinMax");
//};

//r400ZrangeFromZconstSingle
//{
//    mangled_ppc("r400ZrangeFromZconstSingle");
//};

//r400ZrangeFromFloatMinMax
//{
//    mangled_ppc("r400ZrangeFromFloatMinMax");
//};

//r400ZrangeFromFloatSingle
//{
//    mangled_ppc("r400ZrangeFromFloatSingle");
//};

//r400AddrToPipe
//{
//    mangled_ppc("r400AddrToPipe");
//};

//r400AddrToRbId
//{
//    mangled_ppc("r400AddrToRbId");
//};

//r400ExportToPipe
//{
//    mangled_ppc("r400ExportToPipe");
//};

//r400ExportToRbId
//{
//    mangled_ppc("r400ExportToRbId");
//};

//r400SliceToPipe
//{
//    mangled_ppc("r400SliceToPipe");
//};

//r400SliceToRbId
//{
//    mangled_ppc("r400SliceToRbId");
//};

//r400DisableToTotalPipes
//{
//    mangled_ppc("r400DisableToTotalPipes");
//};

//r400DisableToFirstPipe
//{
//    mangled_ppc("r400DisableToFirstPipe");
//};

//int XGRAPHICS::r400ExpFromGammaIntRB(int, int)
//{
//    mangled_ppc("?r400ExpFromGammaIntRB@XGRAPHICS@@YAHHH@Z");
//};

//r400ColorNumberToExportNumber
//{
//    mangled_ppc("r400ColorNumberToExportNumber");
//};

//r400AlphaInColorElement
//{
//    mangled_ppc("r400AlphaInColorElement");
//};

//r400GetFmaskDataSize
//{
//    mangled_ppc("r400GetFmaskDataSize");
//};

//r400GetPmaskDataSize
//{
//    mangled_ppc("r400GetPmaskDataSize");
//};

//r400GetSurfaceTotalSize
//{
//    mangled_ppc("r400GetSurfaceTotalSize");
//};

//r400GetSurfaceMaskSize
//{
//    mangled_ppc("r400GetSurfaceMaskSize");
//};

//r400LoadColorMaskAddrState
//{
//    mangled_ppc("r400LoadColorMaskAddrState");
//};

//int XGRAPHICS::r400FloatBiasScale(float, int, int)
//{
//    mangled_ppc("?r400FloatBiasScale@XGRAPHICS@@YAHMHH@Z");
//};

//r400PFloatFromColorIntRB
//{
//    mangled_ppc("r400PFloatFromColorIntRB");
//};

//r400FloatFromColorIntBC
//{
//    mangled_ppc("r400FloatFromColorIntBC");
//};

//r400FloatToColorInt
//{
//    mangled_ppc("r400FloatToColorInt");
//};

//r400FloatToColorIntHW
//{
//    mangled_ppc("r400FloatToColorIntHW");
//};

//r400PFloatToColorIntRB
//{
//    mangled_ppc("r400PFloatToColorIntRB");
//};

//r400FloatToColorIntBC
//{
//    mangled_ppc("r400FloatToColorIntBC");
//};

//r400FloatsToColorElement
//{
//    mangled_ppc("r400FloatsToColorElement");
//};

//r400DepthFromDepthXArray
//{
//    mangled_ppc("r400DepthFromDepthXArray");
//};

//r400DepthFromDepthXElement
//{
//    mangled_ppc("r400DepthFromDepthXElement");
//};

//r400LoadZplaneWords
//{
//    mangled_ppc("r400LoadZplaneWords");
//};

//r400LoadZplaneBytes
//{
//    mangled_ppc("r400LoadZplaneBytes");
//};

//r400GetZplaneWords
//{
//    mangled_ppc("r400GetZplaneWords");
//};

//r400GetZplaneBytes
//{
//    mangled_ppc("r400GetZplaneBytes");
//};

//r400FloatFromZplane
//{
//    mangled_ppc("r400FloatFromZplane");
//};

//r400IntFromZplane
//{
//    mangled_ppc("r400IntFromZplane");
//};

//float XGRAPHICS::r400FloatFromGammaIntBC(int, int)
//{
//    mangled_ppc("?r400FloatFromGammaIntBC@XGRAPHICS@@YAMHH@Z");
//};

//int XGRAPHICS::r400FloatToGammaIntBC(float, int)
//{
//    mangled_ppc("?r400FloatToGammaIntBC@XGRAPHICS@@YAHMH@Z");
//};

//float XGRAPHICS::r400FloatFromGammaIntRB(int, int)
//{
//    mangled_ppc("?r400FloatFromGammaIntRB@XGRAPHICS@@YAMHH@Z");
//};

//int XGRAPHICS::r400FloatToGammaIntRB(float, int, int)
//{
//    mangled_ppc("?r400FloatToGammaIntRB@XGRAPHICS@@YAHMHH@Z");
//};

//r400PFloatFromColorIntBC
//{
//    mangled_ppc("r400PFloatFromColorIntBC");
//};

//r400PFloatToColorIntBC
//{
//    mangled_ppc("r400PFloatToColorIntBC");
//};

//r400FloatsToColorElementBC
//{
//    mangled_ppc("r400FloatsToColorElementBC");
//};

//r400FloatsToColorXElement
//{
//    mangled_ppc("r400FloatsToColorXElement");
//};

//r400FloatsFromColorXElement
//{
//    mangled_ppc("r400FloatsFromColorXElement");
//};

