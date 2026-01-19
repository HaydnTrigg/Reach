/* ---------- headers */

#include "xdk\xgraphicsd\ccodec.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual XG_D3DXTex::CCodec::~CCodec(void);
// public: virtual void XG_D3DXTex::CCodec::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// __lvx;
// __stvx;
// protected: struct XG_D3DXTex::D3DXCOLOR * XG_D3DXTex::CCodec::Convert(struct XG_D3DXTex::D3DXCOLOR *);
// protected: virtual void XG_D3DXTex::CCodecYUV::QuantizeColorKey(void);
// public: virtual XG_D3DXTex::CCodecDXT::~CCodecDXT(void);
// public: XG_D3DXTex::D3DXCOLOR::D3DXCOLOR(unsigned long);
// public: struct XG_D3DXTex::D3DXCOLOR & XG_D3DXTex::D3DXCOLOR::operator+=(struct XG_D3DXTex::D3DXCOLOR const &);
// public: struct XG_D3DXTex::D3DXCOLOR XG_D3DXTex::D3DXCOLOR::operator-(struct XG_D3DXTex::D3DXCOLOR const &) const;
// public: int XG_D3DXTex::D3DXCOLOR::operator==(struct XG_D3DXTex::D3DXCOLOR const &) const;
// unsigned short XG_D3DXTex::SetEndianWord(unsigned short);
// void F2IBegin(unsigned int *);
// int F2I(float);
// void F2IEnd(unsigned int);
// float XG_D3DXTex::TableEncodeGamma22(float);
// float XG_D3DXTex::TableDecodeGamma22(float);
// protected: XG_D3DXTex::CCodec::CCodec(struct D3DX_BLT *, unsigned int, unsigned long);
// merged_83DAF6F0;
// public: long XG_D3DXTex::CCodec::ConvertFrom(class XG_D3DXTex::CCodec *);
// public: long XG_D3DXTex::CCodec::ConvertFromFloat(void);
// protected: long XG_D3DXTex::CCodec::DecodePalette(struct D3DX_BLT *);
// protected: virtual void XG_D3DXTex::CCodec::QuantizeColorKey(void);
// protected: void XG_D3DXTex::CCodec::ColorKey(struct XG_D3DXTex::D3DXCOLOR *);
// protected: struct XG_D3DXTex::D3DXCOLOR * XG_D3DXTex::CCodec::EncodeGamma22(struct XG_D3DXTex::D3DXCOLOR *);
// protected: void XG_D3DXTex::CCodec::DecodeGamma22(struct XG_D3DXTex::D3DXCOLOR *);
// protected: void XG_D3DXTex::CCodec::AddDiffusionError(struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R5G6B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X1R5G5B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A1R5G5B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A4R4G4B4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R3G3B2::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8R3G3B2::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X4R4G4B4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2B10G10R10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8B8G8R8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8B8G8R8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G16R16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2R10G10B10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A16B16G16R16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8P8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_P8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8L8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A4L4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L6V5U5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8L8V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_Q8W8V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_V16U16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2W10V10U10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_Q16W16V16U16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D32F_LOCKABLE::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G32R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A32B32G32R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D3DX_A16L16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D3DX_R16G16B16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R5G6B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X1R5G5B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A1R5G5B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A4R4G4B4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2B10G10R10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8B8G8R8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8B8G8R8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G16R16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2R10G10B10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A16B16G16R16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R3G3B2::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8R3G3B2::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X4R4G4B4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8P8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_P8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A8L8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A4L4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_L6V5U5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_X8L8V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_Q8W8V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_V16U16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A2W10V10U10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_Q16W16V16U16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D32F_LOCKABLE::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G32R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A32B32G32R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D3DX_A16L16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_D3DX_R16G16B16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: XG_D3DXTex::CCodecYUV::CCodecYUV(struct D3DX_BLT *);
// public: long XG_D3DXTex::CCodecYUV::Commit(void);
// public: long XG_D3DXTex::CCodecYUV::Fetch(unsigned int, unsigned int, int);
// public: virtual void XG_D3DXTex::CCodecYUV::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodecYUV::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: XG_D3DXTex::CCodecDXT::CCodecDXT(struct D3DX_BLT *);
// merged_83DBB390;
// protected: virtual void XG_D3DXTex::CCodecDXT::QuantizeColorKey(void);
// public: virtual void XG_D3DXTex::CCodecDXT::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodecDXT::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// unsigned short * XG_D3DXTex::D3DXFloat32To16Array(unsigned short *, float const *, unsigned int);
// float * XG_D3DXTex::D3DXFloat16To32Array(float *, unsigned short const *, unsigned int);
// public: XG_D3DXTex::CCodec_A8R8G8B8::CCodec_A8R8G8B8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A8R8G8B8::~CCodec_A8R8G8B8(void);
// merged_83DBBF88;
// public: XG_D3DXTex::CCodec_X8R8G8B8::CCodec_X8R8G8B8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_X8R8G8B8::~CCodec_X8R8G8B8(void);
// merged_83DBC078;
// public: XG_D3DXTex::CCodec_R5G6B5::CCodec_R5G6B5(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_R5G6B5::~CCodec_R5G6B5(void);
// merged_83DBC168;
// public: XG_D3DXTex::CCodec_X1R5G5B5::CCodec_X1R5G5B5(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_X1R5G5B5::~CCodec_X1R5G5B5(void);
// merged_83DBC258;
// public: XG_D3DXTex::CCodec_A1R5G5B5::CCodec_A1R5G5B5(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A1R5G5B5::~CCodec_A1R5G5B5(void);
// merged_83DBC348;
// public: XG_D3DXTex::CCodec_A4R4G4B4::CCodec_A4R4G4B4(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A4R4G4B4::~CCodec_A4R4G4B4(void);
// merged_83DBC438;
// public: XG_D3DXTex::CCodec_A8::CCodec_A8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A8::~CCodec_A8(void);
// merged_83DBC528;
// public: XG_D3DXTex::CCodec_X4R4G4B4::CCodec_X4R4G4B4(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_X4R4G4B4::~CCodec_X4R4G4B4(void);
// merged_83DBC618;
// public: XG_D3DXTex::CCodec_A2B10G10R10::CCodec_A2B10G10R10(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A2B10G10R10::~CCodec_A2B10G10R10(void);
// merged_83DBC708;
// public: XG_D3DXTex::CCodec_A8B8G8R8::CCodec_A8B8G8R8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A8B8G8R8::~CCodec_A8B8G8R8(void);
// merged_83DBC7F8;
// public: XG_D3DXTex::CCodec_X8B8G8R8::CCodec_X8B8G8R8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_X8B8G8R8::~CCodec_X8B8G8R8(void);
// merged_83DBC8E8;
// public: XG_D3DXTex::CCodec_G16R16::CCodec_G16R16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_G16R16::~CCodec_G16R16(void);
// merged_83DBC9D8;
// public: XG_D3DXTex::CCodec_A2R10G10B10::CCodec_A2R10G10B10(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A2R10G10B10::~CCodec_A2R10G10B10(void);
// merged_83DBCAC8;
// public: XG_D3DXTex::CCodec_A16B16G16R16::CCodec_A16B16G16R16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A16B16G16R16::~CCodec_A16B16G16R16(void);
// merged_83DBCBB8;
// public: XG_D3DXTex::CCodec_L8::CCodec_L8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_L8::~CCodec_L8(void);
// merged_83DBCCA8;
// public: XG_D3DXTex::CCodec_A8L8::CCodec_A8L8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A8L8::~CCodec_A8L8(void);
// merged_83DBCD98;
// public: XG_D3DXTex::CCodec_L16::CCodec_L16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_L16::~CCodec_L16(void);
// merged_83DBCE88;
// public: XG_D3DXTex::CCodec_V8U8::CCodec_V8U8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_V8U8::~CCodec_V8U8(void);
// merged_83DBCF78;
// public: XG_D3DXTex::CCodec_L6V5U5::CCodec_L6V5U5(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_L6V5U5::~CCodec_L6V5U5(void);
// merged_83DBD068;
// public: XG_D3DXTex::CCodec_X8L8V8U8::CCodec_X8L8V8U8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_X8L8V8U8::~CCodec_X8L8V8U8(void);
// merged_83DBD158;
// public: XG_D3DXTex::CCodec_Q8W8V8U8::CCodec_Q8W8V8U8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_Q8W8V8U8::~CCodec_Q8W8V8U8(void);
// merged_83DBD248;
// public: XG_D3DXTex::CCodec_V16U16::CCodec_V16U16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_V16U16::~CCodec_V16U16(void);
// merged_83DBD338;
// public: XG_D3DXTex::CCodec_A2W10V10U10::CCodec_A2W10V10U10(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A2W10V10U10::~CCodec_A2W10V10U10(void);
// merged_83DBD428;
// public: XG_D3DXTex::CCodec_Q16W16V16U16::CCodec_Q16W16V16U16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_Q16W16V16U16::~CCodec_Q16W16V16U16(void);
// merged_83DBD518;
// public: XG_D3DXTex::CCodec_D16::CCodec_D16(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_D16::~CCodec_D16(void);
// merged_83DBD608;
// public: XG_D3DXTex::CCodec_R16F::CCodec_R16F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_R16F::~CCodec_R16F(void);
// merged_83DBD6F8;
// public: XG_D3DXTex::CCodec_G16R16F::CCodec_G16R16F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_G16R16F::~CCodec_G16R16F(void);
// merged_83DBD7E8;
// public: XG_D3DXTex::CCodec_A16B16G16R16F::CCodec_A16B16G16R16F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A16B16G16R16F::~CCodec_A16B16G16R16F(void);
// merged_83DBD8D8;
// public: XG_D3DXTex::CCodec_R32F::CCodec_R32F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_R32F::~CCodec_R32F(void);
// merged_83DBD9C8;
// public: XG_D3DXTex::CCodec_G32R32F::CCodec_G32R32F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_G32R32F::~CCodec_G32R32F(void);
// merged_83DBDAB8;
// public: XG_D3DXTex::CCodec_A32B32G32R32F::CCodec_A32B32G32R32F(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_A32B32G32R32F::~CCodec_A32B32G32R32F(void);
// merged_83DBDBA8;
// public: XG_D3DXTex::CCodec_DXT1::CCodec_DXT1(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_DXT1::~CCodec_DXT1(void);
// merged_83DBDC90;
// public: XG_D3DXTex::CCodec_DXT2::CCodec_DXT2(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_DXT2::~CCodec_DXT2(void);
// merged_83DBDD78;
// public: XG_D3DXTex::CCodec_DXT3A::CCodec_DXT3A(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_DXT3A::~CCodec_DXT3A(void);
// merged_83DBDE60;
// public: XG_D3DXTex::CCodec_DXT4::CCodec_DXT4(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_DXT4::~CCodec_DXT4(void);
// merged_83DBDF48;
// public: XG_D3DXTex::CCodec_DXT5A::CCodec_DXT5A(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_DXT5A::~CCodec_DXT5A(void);
// merged_83DBE030;
// public: virtual void XG_D3DXTex::CCodec_R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G16R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A16B16G16R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_G16R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual void XG_D3DXTex::CCodec_A16B16G16R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *);
// public: virtual XG_D3DXTex::CCodecYUV::~CCodecYUV(void);
// public: XG_D3DXTex::CCodec_UYVY::CCodec_UYVY(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_UYVY::~CCodec_UYVY(void);
// public: XG_D3DXTex::CCodec_G8R8_G8B8::CCodec_G8R8_G8B8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_G8R8_G8B8::~CCodec_G8R8_G8B8(void);
// public: XG_D3DXTex::CCodec_YUY2::CCodec_YUY2(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_YUY2::~CCodec_YUY2(void);
// public: XG_D3DXTex::CCodec_R8G8_B8G8::CCodec_R8G8_B8G8(struct D3DX_BLT *);
// public: virtual XG_D3DXTex::CCodec_R8G8_B8G8::~CCodec_R8G8_B8G8(void);
// public: static class XG_D3DXTex::CCodec * XG_D3DXTex::CCodec::Create(struct D3DX_BLT *);
// merged_83DBF028;
// merged_83DBF080;
// merged_83DBF0D8;
// merged_83DBF130;
// merged_83DBF188;

//public: virtual XG_D3DXTex::CCodec::~CCodec(void)
//{
//    mangled_ppc("??1CCodec@XG_D3DXTex@@UAA@XZ");
//};

//public: virtual void XG_D3DXTex::CCodec::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//protected: struct XG_D3DXTex::D3DXCOLOR * XG_D3DXTex::CCodec::Convert(struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Convert@CCodec@XG_D3DXTex@@IAAPAUD3DXCOLOR@2@PAU32@@Z");
//};

//protected: virtual void XG_D3DXTex::CCodecYUV::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodecYUV@XG_D3DXTex@@MAAXXZ");
//};

//public: virtual XG_D3DXTex::CCodecDXT::~CCodecDXT(void)
//{
//    mangled_ppc("??1CCodecDXT@XG_D3DXTex@@UAA@XZ");
//};

//public: XG_D3DXTex::D3DXCOLOR::D3DXCOLOR(unsigned long)
//{
//    mangled_ppc("??0D3DXCOLOR@XG_D3DXTex@@QAA@K@Z");
//};

//public: struct XG_D3DXTex::D3DXCOLOR & XG_D3DXTex::D3DXCOLOR::operator+=(struct XG_D3DXTex::D3DXCOLOR const &)
//{
//    mangled_ppc("??YD3DXCOLOR@XG_D3DXTex@@QAAAAU01@ABU01@@Z");
//};

//public: struct XG_D3DXTex::D3DXCOLOR XG_D3DXTex::D3DXCOLOR::operator-(struct XG_D3DXTex::D3DXCOLOR const &) const
//{
//    mangled_ppc("??GD3DXCOLOR@XG_D3DXTex@@QBA?AU01@ABU01@@Z");
//};

//public: int XG_D3DXTex::D3DXCOLOR::operator==(struct XG_D3DXTex::D3DXCOLOR const &) const
//{
//    mangled_ppc("??8D3DXCOLOR@XG_D3DXTex@@QBAHABU01@@Z");
//};

//unsigned short XG_D3DXTex::SetEndianWord(unsigned short)
//{
//    mangled_ppc("?SetEndianWord@XG_D3DXTex@@YAGG@Z");
//};

//void F2IBegin(unsigned int *)
//{
//    mangled_ppc("?F2IBegin@@YAXPAI@Z");
//};

//int F2I(float)
//{
//    mangled_ppc("?F2I@@YAHM@Z");
//};

//void F2IEnd(unsigned int)
//{
//    mangled_ppc("?F2IEnd@@YAXI@Z");
//};

//float XG_D3DXTex::TableEncodeGamma22(float)
//{
//    mangled_ppc("?TableEncodeGamma22@XG_D3DXTex@@YAMM@Z");
//};

//float XG_D3DXTex::TableDecodeGamma22(float)
//{
//    mangled_ppc("?TableDecodeGamma22@XG_D3DXTex@@YAMM@Z");
//};

//protected: XG_D3DXTex::CCodec::CCodec(struct D3DX_BLT *, unsigned int, unsigned long)
//{
//    mangled_ppc("??0CCodec@XG_D3DXTex@@IAA@PAUD3DX_BLT@@IK@Z");
//};

//merged_83DAF6F0
//{
//    mangled_ppc("merged_83DAF6F0");
//};

//public: long XG_D3DXTex::CCodec::ConvertFrom(class XG_D3DXTex::CCodec *)
//{
//    mangled_ppc("?ConvertFrom@CCodec@XG_D3DXTex@@QAAJPAV12@@Z");
//};

//public: long XG_D3DXTex::CCodec::ConvertFromFloat(void)
//{
//    mangled_ppc("?ConvertFromFloat@CCodec@XG_D3DXTex@@QAAJXZ");
//};

//protected: long XG_D3DXTex::CCodec::DecodePalette(struct D3DX_BLT *)
//{
//    mangled_ppc("?DecodePalette@CCodec@XG_D3DXTex@@IAAJPAUD3DX_BLT@@@Z");
//};

//protected: virtual void XG_D3DXTex::CCodec::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodec@XG_D3DXTex@@MAAXXZ");
//};

//protected: void XG_D3DXTex::CCodec::ColorKey(struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?ColorKey@CCodec@XG_D3DXTex@@IAAXPAUD3DXCOLOR@2@@Z");
//};

//protected: struct XG_D3DXTex::D3DXCOLOR * XG_D3DXTex::CCodec::EncodeGamma22(struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?EncodeGamma22@CCodec@XG_D3DXTex@@IAAPAUD3DXCOLOR@2@PAU32@@Z");
//};

//protected: void XG_D3DXTex::CCodec::DecodeGamma22(struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?DecodeGamma22@CCodec@XG_D3DXTex@@IAAXPAUD3DXCOLOR@2@@Z");
//};

//protected: void XG_D3DXTex::CCodec::AddDiffusionError(struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?AddDiffusionError@CCodec@XG_D3DXTex@@IAAXPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8R8G8B8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R5G6B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R5G6B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X1R5G5B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X1R5G5B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A1R5G5B5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A1R5G5B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A4R4G4B4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A4R4G4B4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R3G3B2::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R3G3B2@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8R3G3B2::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8R3G3B2@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X4R4G4B4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X4R4G4B4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2B10G10R10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2B10G10R10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8B8G8R8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8B8G8R8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8B8G8R8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8B8G8R8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G16R16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G16R16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2R10G10B10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2R10G10B10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A16B16G16R16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A16B16G16R16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8P8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8P8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_P8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_P8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8L8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8L8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A4L4::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A4L4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L6V5U5::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L6V5U5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8L8V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8L8V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_Q8W8V8U8::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_Q8W8V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_V16U16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_V16U16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2W10V10U10::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2W10V10U10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_Q16W16V16U16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_Q16W16V16U16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D32F_LOCKABLE::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D32F_LOCKABLE@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G32R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G32R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A32B32G32R32F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A32B32G32R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D3DX_A16L16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D3DX_A16L16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D3DX_R16G16B16::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D3DX_R16G16B16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8R8G8B8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8R8G8B8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R5G6B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R5G6B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X1R5G5B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X1R5G5B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A1R5G5B5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A1R5G5B5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A4R4G4B4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A4R4G4B4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2B10G10R10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2B10G10R10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8B8G8R8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8B8G8R8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8B8G8R8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8B8G8R8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G16R16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G16R16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2R10G10B10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2R10G10B10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A16B16G16R16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A16B16G16R16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R3G3B2::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R3G3B2@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8R3G3B2::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8R3G3B2@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X4R4G4B4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X4R4G4B4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8P8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8P8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_P8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_P8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A8L8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8L8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A4L4::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A4L4@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_L6V5U5::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L6V5U5@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_X8L8V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8L8V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_Q8W8V8U8::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_Q8W8V8U8@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_V16U16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_V16U16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A2W10V10U10::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2W10V10U10@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_Q16W16V16U16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_Q16W16V16U16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D32F_LOCKABLE::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D32F_LOCKABLE@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G32R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G32R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A32B32G32R32F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A32B32G32R32F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D3DX_A16L16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D3DX_A16L16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_D3DX_R16G16B16::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D3DX_R16G16B16@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: XG_D3DXTex::CCodecYUV::CCodecYUV(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodecYUV@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: long XG_D3DXTex::CCodecYUV::Commit(void)
//{
//    mangled_ppc("?Commit@CCodecYUV@XG_D3DXTex@@QAAJXZ");
//};

//public: long XG_D3DXTex::CCodecYUV::Fetch(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Fetch@CCodecYUV@XG_D3DXTex@@QAAJIIH@Z");
//};

//public: virtual void XG_D3DXTex::CCodecYUV::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodecYUV@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodecYUV::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodecYUV@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: XG_D3DXTex::CCodecDXT::CCodecDXT(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodecDXT@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//merged_83DBB390
//{
//    mangled_ppc("merged_83DBB390");
//};

//protected: virtual void XG_D3DXTex::CCodecDXT::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodecDXT@XG_D3DXTex@@MAAXXZ");
//};

//public: virtual void XG_D3DXTex::CCodecDXT::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodecDXT@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodecDXT::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodecDXT@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//unsigned short * XG_D3DXTex::D3DXFloat32To16Array(unsigned short *, float const *, unsigned int)
//{
//    mangled_ppc("?D3DXFloat32To16Array@XG_D3DXTex@@YAPAGPAGPBMI@Z");
//};

//float * XG_D3DXTex::D3DXFloat16To32Array(float *, unsigned short const *, unsigned int)
//{
//    mangled_ppc("?D3DXFloat16To32Array@XG_D3DXTex@@YAPAMPAMPBGI@Z");
//};

//public: XG_D3DXTex::CCodec_A8R8G8B8::CCodec_A8R8G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8R8G8B8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A8R8G8B8::~CCodec_A8R8G8B8(void)
//{
//    mangled_ppc("??1CCodec_A8R8G8B8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBBF88
//{
//    mangled_ppc("merged_83DBBF88");
//};

//public: XG_D3DXTex::CCodec_X8R8G8B8::CCodec_X8R8G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8R8G8B8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_X8R8G8B8::~CCodec_X8R8G8B8(void)
//{
//    mangled_ppc("??1CCodec_X8R8G8B8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC078
//{
//    mangled_ppc("merged_83DBC078");
//};

//public: XG_D3DXTex::CCodec_R5G6B5::CCodec_R5G6B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R5G6B5@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_R5G6B5::~CCodec_R5G6B5(void)
//{
//    mangled_ppc("??1CCodec_R5G6B5@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC168
//{
//    mangled_ppc("merged_83DBC168");
//};

//public: XG_D3DXTex::CCodec_X1R5G5B5::CCodec_X1R5G5B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X1R5G5B5@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_X1R5G5B5::~CCodec_X1R5G5B5(void)
//{
//    mangled_ppc("??1CCodec_X1R5G5B5@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC258
//{
//    mangled_ppc("merged_83DBC258");
//};

//public: XG_D3DXTex::CCodec_A1R5G5B5::CCodec_A1R5G5B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A1R5G5B5@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A1R5G5B5::~CCodec_A1R5G5B5(void)
//{
//    mangled_ppc("??1CCodec_A1R5G5B5@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC348
//{
//    mangled_ppc("merged_83DBC348");
//};

//public: XG_D3DXTex::CCodec_A4R4G4B4::CCodec_A4R4G4B4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A4R4G4B4@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A4R4G4B4::~CCodec_A4R4G4B4(void)
//{
//    mangled_ppc("??1CCodec_A4R4G4B4@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC438
//{
//    mangled_ppc("merged_83DBC438");
//};

//public: XG_D3DXTex::CCodec_A8::CCodec_A8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A8::~CCodec_A8(void)
//{
//    mangled_ppc("??1CCodec_A8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC528
//{
//    mangled_ppc("merged_83DBC528");
//};

//public: XG_D3DXTex::CCodec_X4R4G4B4::CCodec_X4R4G4B4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X4R4G4B4@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_X4R4G4B4::~CCodec_X4R4G4B4(void)
//{
//    mangled_ppc("??1CCodec_X4R4G4B4@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC618
//{
//    mangled_ppc("merged_83DBC618");
//};

//public: XG_D3DXTex::CCodec_A2B10G10R10::CCodec_A2B10G10R10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2B10G10R10@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A2B10G10R10::~CCodec_A2B10G10R10(void)
//{
//    mangled_ppc("??1CCodec_A2B10G10R10@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC708
//{
//    mangled_ppc("merged_83DBC708");
//};

//public: XG_D3DXTex::CCodec_A8B8G8R8::CCodec_A8B8G8R8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8B8G8R8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A8B8G8R8::~CCodec_A8B8G8R8(void)
//{
//    mangled_ppc("??1CCodec_A8B8G8R8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC7F8
//{
//    mangled_ppc("merged_83DBC7F8");
//};

//public: XG_D3DXTex::CCodec_X8B8G8R8::CCodec_X8B8G8R8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8B8G8R8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_X8B8G8R8::~CCodec_X8B8G8R8(void)
//{
//    mangled_ppc("??1CCodec_X8B8G8R8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC8E8
//{
//    mangled_ppc("merged_83DBC8E8");
//};

//public: XG_D3DXTex::CCodec_G16R16::CCodec_G16R16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G16R16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_G16R16::~CCodec_G16R16(void)
//{
//    mangled_ppc("??1CCodec_G16R16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBC9D8
//{
//    mangled_ppc("merged_83DBC9D8");
//};

//public: XG_D3DXTex::CCodec_A2R10G10B10::CCodec_A2R10G10B10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2R10G10B10@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A2R10G10B10::~CCodec_A2R10G10B10(void)
//{
//    mangled_ppc("??1CCodec_A2R10G10B10@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCAC8
//{
//    mangled_ppc("merged_83DBCAC8");
//};

//public: XG_D3DXTex::CCodec_A16B16G16R16::CCodec_A16B16G16R16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A16B16G16R16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A16B16G16R16::~CCodec_A16B16G16R16(void)
//{
//    mangled_ppc("??1CCodec_A16B16G16R16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCBB8
//{
//    mangled_ppc("merged_83DBCBB8");
//};

//public: XG_D3DXTex::CCodec_L8::CCodec_L8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_L8::~CCodec_L8(void)
//{
//    mangled_ppc("??1CCodec_L8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCCA8
//{
//    mangled_ppc("merged_83DBCCA8");
//};

//public: XG_D3DXTex::CCodec_A8L8::CCodec_A8L8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8L8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A8L8::~CCodec_A8L8(void)
//{
//    mangled_ppc("??1CCodec_A8L8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCD98
//{
//    mangled_ppc("merged_83DBCD98");
//};

//public: XG_D3DXTex::CCodec_L16::CCodec_L16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_L16::~CCodec_L16(void)
//{
//    mangled_ppc("??1CCodec_L16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCE88
//{
//    mangled_ppc("merged_83DBCE88");
//};

//public: XG_D3DXTex::CCodec_V8U8::CCodec_V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_V8U8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_V8U8::~CCodec_V8U8(void)
//{
//    mangled_ppc("??1CCodec_V8U8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBCF78
//{
//    mangled_ppc("merged_83DBCF78");
//};

//public: XG_D3DXTex::CCodec_L6V5U5::CCodec_L6V5U5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L6V5U5@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_L6V5U5::~CCodec_L6V5U5(void)
//{
//    mangled_ppc("??1CCodec_L6V5U5@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD068
//{
//    mangled_ppc("merged_83DBD068");
//};

//public: XG_D3DXTex::CCodec_X8L8V8U8::CCodec_X8L8V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8L8V8U8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_X8L8V8U8::~CCodec_X8L8V8U8(void)
//{
//    mangled_ppc("??1CCodec_X8L8V8U8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD158
//{
//    mangled_ppc("merged_83DBD158");
//};

//public: XG_D3DXTex::CCodec_Q8W8V8U8::CCodec_Q8W8V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_Q8W8V8U8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_Q8W8V8U8::~CCodec_Q8W8V8U8(void)
//{
//    mangled_ppc("??1CCodec_Q8W8V8U8@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD248
//{
//    mangled_ppc("merged_83DBD248");
//};

//public: XG_D3DXTex::CCodec_V16U16::CCodec_V16U16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_V16U16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_V16U16::~CCodec_V16U16(void)
//{
//    mangled_ppc("??1CCodec_V16U16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD338
//{
//    mangled_ppc("merged_83DBD338");
//};

//public: XG_D3DXTex::CCodec_A2W10V10U10::CCodec_A2W10V10U10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2W10V10U10@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A2W10V10U10::~CCodec_A2W10V10U10(void)
//{
//    mangled_ppc("??1CCodec_A2W10V10U10@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD428
//{
//    mangled_ppc("merged_83DBD428");
//};

//public: XG_D3DXTex::CCodec_Q16W16V16U16::CCodec_Q16W16V16U16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_Q16W16V16U16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_Q16W16V16U16::~CCodec_Q16W16V16U16(void)
//{
//    mangled_ppc("??1CCodec_Q16W16V16U16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD518
//{
//    mangled_ppc("merged_83DBD518");
//};

//public: XG_D3DXTex::CCodec_D16::CCodec_D16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_D16@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_D16::~CCodec_D16(void)
//{
//    mangled_ppc("??1CCodec_D16@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD608
//{
//    mangled_ppc("merged_83DBD608");
//};

//public: XG_D3DXTex::CCodec_R16F::CCodec_R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R16F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_R16F::~CCodec_R16F(void)
//{
//    mangled_ppc("??1CCodec_R16F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD6F8
//{
//    mangled_ppc("merged_83DBD6F8");
//};

//public: XG_D3DXTex::CCodec_G16R16F::CCodec_G16R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G16R16F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_G16R16F::~CCodec_G16R16F(void)
//{
//    mangled_ppc("??1CCodec_G16R16F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD7E8
//{
//    mangled_ppc("merged_83DBD7E8");
//};

//public: XG_D3DXTex::CCodec_A16B16G16R16F::CCodec_A16B16G16R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A16B16G16R16F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A16B16G16R16F::~CCodec_A16B16G16R16F(void)
//{
//    mangled_ppc("??1CCodec_A16B16G16R16F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD8D8
//{
//    mangled_ppc("merged_83DBD8D8");
//};

//public: XG_D3DXTex::CCodec_R32F::CCodec_R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R32F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_R32F::~CCodec_R32F(void)
//{
//    mangled_ppc("??1CCodec_R32F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBD9C8
//{
//    mangled_ppc("merged_83DBD9C8");
//};

//public: XG_D3DXTex::CCodec_G32R32F::CCodec_G32R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G32R32F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_G32R32F::~CCodec_G32R32F(void)
//{
//    mangled_ppc("??1CCodec_G32R32F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDAB8
//{
//    mangled_ppc("merged_83DBDAB8");
//};

//public: XG_D3DXTex::CCodec_A32B32G32R32F::CCodec_A32B32G32R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A32B32G32R32F@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_A32B32G32R32F::~CCodec_A32B32G32R32F(void)
//{
//    mangled_ppc("??1CCodec_A32B32G32R32F@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDBA8
//{
//    mangled_ppc("merged_83DBDBA8");
//};

//public: XG_D3DXTex::CCodec_DXT1::CCodec_DXT1(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT1@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_DXT1::~CCodec_DXT1(void)
//{
//    mangled_ppc("??1CCodec_DXT1@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDC90
//{
//    mangled_ppc("merged_83DBDC90");
//};

//public: XG_D3DXTex::CCodec_DXT2::CCodec_DXT2(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT2@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_DXT2::~CCodec_DXT2(void)
//{
//    mangled_ppc("??1CCodec_DXT2@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDD78
//{
//    mangled_ppc("merged_83DBDD78");
//};

//public: XG_D3DXTex::CCodec_DXT3A::CCodec_DXT3A(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT3A@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_DXT3A::~CCodec_DXT3A(void)
//{
//    mangled_ppc("??1CCodec_DXT3A@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDE60
//{
//    mangled_ppc("merged_83DBDE60");
//};

//public: XG_D3DXTex::CCodec_DXT4::CCodec_DXT4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT4@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_DXT4::~CCodec_DXT4(void)
//{
//    mangled_ppc("??1CCodec_DXT4@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBDF48
//{
//    mangled_ppc("merged_83DBDF48");
//};

//public: XG_D3DXTex::CCodec_DXT5A::CCodec_DXT5A(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT5A@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_DXT5A::~CCodec_DXT5A(void)
//{
//    mangled_ppc("??1CCodec_DXT5A@XG_D3DXTex@@UAA@XZ");
//};

//merged_83DBE030
//{
//    mangled_ppc("merged_83DBE030");
//};

//public: virtual void XG_D3DXTex::CCodec_R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G16R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G16R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A16B16G16R16F::Encode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A16B16G16R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_G16R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G16R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual void XG_D3DXTex::CCodec_A16B16G16R16F::Decode(unsigned int, unsigned int, struct XG_D3DXTex::D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A16B16G16R16F@XG_D3DXTex@@UAAXIIPAUD3DXCOLOR@2@@Z");
//};

//public: virtual XG_D3DXTex::CCodecYUV::~CCodecYUV(void)
//{
//    mangled_ppc("??1CCodecYUV@XG_D3DXTex@@UAA@XZ");
//};

//public: XG_D3DXTex::CCodec_UYVY::CCodec_UYVY(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_UYVY@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_UYVY::~CCodec_UYVY(void)
//{
//    mangled_ppc("??1CCodec_UYVY@XG_D3DXTex@@UAA@XZ");
//};

//public: XG_D3DXTex::CCodec_G8R8_G8B8::CCodec_G8R8_G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G8R8_G8B8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_G8R8_G8B8::~CCodec_G8R8_G8B8(void)
//{
//    mangled_ppc("??1CCodec_G8R8_G8B8@XG_D3DXTex@@UAA@XZ");
//};

//public: XG_D3DXTex::CCodec_YUY2::CCodec_YUY2(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_YUY2@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_YUY2::~CCodec_YUY2(void)
//{
//    mangled_ppc("??1CCodec_YUY2@XG_D3DXTex@@UAA@XZ");
//};

//public: XG_D3DXTex::CCodec_R8G8_B8G8::CCodec_R8G8_B8G8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R8G8_B8G8@XG_D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual XG_D3DXTex::CCodec_R8G8_B8G8::~CCodec_R8G8_B8G8(void)
//{
//    mangled_ppc("??1CCodec_R8G8_B8G8@XG_D3DXTex@@UAA@XZ");
//};

//public: static class XG_D3DXTex::CCodec * XG_D3DXTex::CCodec::Create(struct D3DX_BLT *)
//{
//    mangled_ppc("?Create@CCodec@XG_D3DXTex@@SAPAV12@PAUD3DX_BLT@@@Z");
//};

//merged_83DBF028
//{
//    mangled_ppc("merged_83DBF028");
//};

//merged_83DBF080
//{
//    mangled_ppc("merged_83DBF080");
//};

//merged_83DBF0D8
//{
//    mangled_ppc("merged_83DBF0D8");
//};

//merged_83DBF130
//{
//    mangled_ppc("merged_83DBF130");
//};

//merged_83DBF188
//{
//    mangled_ppc("merged_83DBF188");
//};

