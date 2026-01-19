/* ---------- headers */

#include "xdk\d3dx9d\ccodec.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual void D3DXTex::CCodec::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// protected: struct D3DXCOLOR * D3DXTex::CCodec::Convert(struct D3DXCOLOR *);
// protected: virtual void D3DXTex::CCodecYUV::QuantizeColorKey(void);
// public: D3DXCOLOR::D3DXCOLOR(void);
// public: D3DXCOLOR::D3DXCOLOR(unsigned long);
// public: struct D3DXCOLOR & D3DXCOLOR::operator+=(struct D3DXCOLOR const &);
// public: struct D3DXCOLOR D3DXCOLOR::operator-(struct D3DXCOLOR const &) const;
// public: int D3DXCOLOR::operator==(struct D3DXCOLOR const &) const;
// void F2IBegin(unsigned int *);
// int F2I(float);
// void F2IEnd(unsigned int);
// public: static void * D3DXTex::CCodec::operator new(unsigned int);
// unsigned short D3DXTex::SetEndianWord(unsigned short);
// float D3DXTex::TableEncodeGamma22(float);
// float D3DXTex::TableDecodeGamma22(float);
// protected: D3DXTex::CCodec::CCodec(struct D3DX_BLT *, unsigned int, unsigned long);
// public: static void D3DXTex::CCodec::operator delete(void *);
// public: virtual D3DXTex::CCodec::~CCodec(void);
// public: long D3DXTex::CCodec::ConvertFrom(class D3DXTex::CCodec *);
// public: long D3DXTex::CCodec::ConvertFromFloat(void);
// protected: long D3DXTex::CCodec::DecodePalette(struct D3DX_BLT *);
// protected: virtual void D3DXTex::CCodec::QuantizeColorKey(void);
// protected: void D3DXTex::CCodec::ColorKey(struct D3DXCOLOR *);
// protected: struct D3DXCOLOR * D3DXTex::CCodec::EncodeGamma22(struct D3DXCOLOR *);
// protected: void D3DXTex::CCodec::DecodeGamma22(struct D3DXCOLOR *);
// protected: void D3DXTex::CCodec::AddDiffusionError(struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R5G6B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X1R5G5B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A1R5G5B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A4R4G4B4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R3G3B2::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8R3G3B2::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X4R4G4B4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2B10G10R10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8B8G8R8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8B8G8R8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G16R16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2R10G10B10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A16B16G16R16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8P8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_P8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8L8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A4L4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L6V5U5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8L8V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_Q8W8V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_V16U16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2W10V10U10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_Q16W16V16U16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D32F_LOCKABLE::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G16R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A16B16G16R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G32R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A32B32G32R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D3DX_A16L16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D3DX_R16G16B16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R5G6B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X1R5G5B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A1R5G5B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A4R4G4B4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2B10G10R10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8B8G8R8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8B8G8R8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G16R16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2R10G10B10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A16B16G16R16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R3G3B2::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8R3G3B2::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X4R4G4B4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8P8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_P8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A8L8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A4L4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_L6V5U5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_X8L8V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_Q8W8V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_V16U16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A2W10V10U10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_Q16W16V16U16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D32F_LOCKABLE::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G16R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A16B16G16R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_G32R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_A32B32G32R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D3DX_A16L16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodec_D3DX_R16G16B16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: D3DXTex::CCodecYUV::CCodecYUV(struct D3DX_BLT *);
// public: long D3DXTex::CCodecYUV::Commit(void);
// public: long D3DXTex::CCodecYUV::Fetch(unsigned int, unsigned int, int);
// public: virtual void D3DXTex::CCodecYUV::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodecYUV::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: D3DXTex::CCodecDXT::CCodecDXT(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodecDXT::~CCodecDXT(void);
// protected: virtual void D3DXTex::CCodecDXT::QuantizeColorKey(void);
// public: virtual void D3DXTex::CCodecDXT::Encode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: virtual void D3DXTex::CCodecDXT::Decode(unsigned int, unsigned int, struct D3DXCOLOR *);
// public: D3DXTex::CCodec_A8R8G8B8::CCodec_A8R8G8B8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A8R8G8B8::~CCodec_A8R8G8B8(void);
// public: D3DXTex::CCodec_X8R8G8B8::CCodec_X8R8G8B8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_X8R8G8B8::~CCodec_X8R8G8B8(void);
// public: D3DXTex::CCodec_R5G6B5::CCodec_R5G6B5(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_R5G6B5::~CCodec_R5G6B5(void);
// public: D3DXTex::CCodec_X1R5G5B5::CCodec_X1R5G5B5(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_X1R5G5B5::~CCodec_X1R5G5B5(void);
// public: D3DXTex::CCodec_A1R5G5B5::CCodec_A1R5G5B5(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A1R5G5B5::~CCodec_A1R5G5B5(void);
// public: D3DXTex::CCodec_A4R4G4B4::CCodec_A4R4G4B4(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A4R4G4B4::~CCodec_A4R4G4B4(void);
// public: D3DXTex::CCodec_A8::CCodec_A8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A8::~CCodec_A8(void);
// public: D3DXTex::CCodec_X4R4G4B4::CCodec_X4R4G4B4(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_X4R4G4B4::~CCodec_X4R4G4B4(void);
// public: D3DXTex::CCodec_A2B10G10R10::CCodec_A2B10G10R10(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A2B10G10R10::~CCodec_A2B10G10R10(void);
// public: D3DXTex::CCodec_A8B8G8R8::CCodec_A8B8G8R8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A8B8G8R8::~CCodec_A8B8G8R8(void);
// public: D3DXTex::CCodec_X8B8G8R8::CCodec_X8B8G8R8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_X8B8G8R8::~CCodec_X8B8G8R8(void);
// public: D3DXTex::CCodec_G16R16::CCodec_G16R16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_G16R16::~CCodec_G16R16(void);
// public: D3DXTex::CCodec_A2R10G10B10::CCodec_A2R10G10B10(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A2R10G10B10::~CCodec_A2R10G10B10(void);
// public: D3DXTex::CCodec_A16B16G16R16::CCodec_A16B16G16R16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A16B16G16R16::~CCodec_A16B16G16R16(void);
// public: D3DXTex::CCodec_L8::CCodec_L8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_L8::~CCodec_L8(void);
// public: D3DXTex::CCodec_A8L8::CCodec_A8L8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A8L8::~CCodec_A8L8(void);
// public: D3DXTex::CCodec_L16::CCodec_L16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_L16::~CCodec_L16(void);
// public: D3DXTex::CCodec_V8U8::CCodec_V8U8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_V8U8::~CCodec_V8U8(void);
// public: D3DXTex::CCodec_L6V5U5::CCodec_L6V5U5(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_L6V5U5::~CCodec_L6V5U5(void);
// public: D3DXTex::CCodec_X8L8V8U8::CCodec_X8L8V8U8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_X8L8V8U8::~CCodec_X8L8V8U8(void);
// public: D3DXTex::CCodec_Q8W8V8U8::CCodec_Q8W8V8U8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_Q8W8V8U8::~CCodec_Q8W8V8U8(void);
// public: D3DXTex::CCodec_V16U16::CCodec_V16U16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_V16U16::~CCodec_V16U16(void);
// public: D3DXTex::CCodec_A2W10V10U10::CCodec_A2W10V10U10(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A2W10V10U10::~CCodec_A2W10V10U10(void);
// public: D3DXTex::CCodec_Q16W16V16U16::CCodec_Q16W16V16U16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_Q16W16V16U16::~CCodec_Q16W16V16U16(void);
// public: D3DXTex::CCodec_D16::CCodec_D16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_D16::~CCodec_D16(void);
// public: D3DXTex::CCodec_R16F::CCodec_R16F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_R16F::~CCodec_R16F(void);
// public: D3DXTex::CCodec_G16R16F::CCodec_G16R16F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_G16R16F::~CCodec_G16R16F(void);
// public: D3DXTex::CCodec_A16B16G16R16F::CCodec_A16B16G16R16F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A16B16G16R16F::~CCodec_A16B16G16R16F(void);
// public: D3DXTex::CCodec_R32F::CCodec_R32F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_R32F::~CCodec_R32F(void);
// public: D3DXTex::CCodec_G32R32F::CCodec_G32R32F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_G32R32F::~CCodec_G32R32F(void);
// public: D3DXTex::CCodec_A32B32G32R32F::CCodec_A32B32G32R32F(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_A32B32G32R32F::~CCodec_A32B32G32R32F(void);
// public: D3DXTex::CCodec_D3DX_A16L16::CCodec_D3DX_A16L16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_D3DX_A16L16::~CCodec_D3DX_A16L16(void);
// public: D3DXTex::CCodec_D3DX_R16G16B16::CCodec_D3DX_R16G16B16(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_D3DX_R16G16B16::~CCodec_D3DX_R16G16B16(void);
// public: D3DXTex::CCodec_DXT1::CCodec_DXT1(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_DXT1::~CCodec_DXT1(void);
// public: D3DXTex::CCodec_DXT2::CCodec_DXT2(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_DXT2::~CCodec_DXT2(void);
// public: D3DXTex::CCodec_DXT4::CCodec_DXT4(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_DXT4::~CCodec_DXT4(void);
// merged_83AFCC78;
// public: virtual D3DXTex::CCodecYUV::~CCodecYUV(void);
// merged_83AFCD38;
// merged_83AFCD98;
// merged_83AFCDF8;
// merged_83AFCE58;
// merged_83AFCEB8;
// merged_83AFCF18;
// merged_83AFCF78;
// merged_83AFCFD8;
// merged_83AFD038;
// merged_83AFD098;
// merged_83AFD0F8;
// merged_83AFD158;
// merged_83AFD1B8;
// merged_83AFD218;
// merged_83AFD278;
// merged_83AFD2D8;
// merged_83AFD338;
// merged_83AFD398;
// merged_83AFD3F8;
// merged_83AFD458;
// merged_83AFD4B8;
// merged_83AFD518;
// merged_83AFD578;
// merged_83AFD5D8;
// merged_83AFD638;
// merged_83AFD698;
// merged_83AFD6F8;
// merged_83AFD758;
// merged_83AFD7B8;
// merged_83AFD818;
// merged_83AFD878;
// merged_83AFD8D8;
// merged_83AFD938;
// merged_83AFD998;
// public: D3DXTex::CCodec_UYVY::CCodec_UYVY(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_UYVY::~CCodec_UYVY(void);
// public: D3DXTex::CCodec_G8R8_G8B8::CCodec_G8R8_G8B8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_G8R8_G8B8::~CCodec_G8R8_G8B8(void);
// public: D3DXTex::CCodec_YUY2::CCodec_YUY2(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_YUY2::~CCodec_YUY2(void);
// public: D3DXTex::CCodec_R8G8_B8G8::CCodec_R8G8_B8G8(struct D3DX_BLT *);
// public: virtual D3DXTex::CCodec_R8G8_B8G8::~CCodec_R8G8_B8G8(void);
// merged_83AFDC38;
// merged_83AFDC98;
// merged_83AFDCF8;
// public: static class D3DXTex::CCodec * D3DXTex::CCodec::Create(struct D3DX_BLT *);
// merged_83AFE508;
// merged_83AFE568;
// merged_83AFE5C8;
// merged_83AFE628;
// merged_83AFE688;

//public: virtual void D3DXTex::CCodec::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//protected: struct D3DXCOLOR * D3DXTex::CCodec::Convert(struct D3DXCOLOR *)
//{
//    mangled_ppc("?Convert@CCodec@D3DXTex@@IAAPAUD3DXCOLOR@@PAU3@@Z");
//};

//protected: virtual void D3DXTex::CCodecYUV::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodecYUV@D3DXTex@@MAAXXZ");
//};

//public: D3DXCOLOR::D3DXCOLOR(void)
//{
//    mangled_ppc("??0D3DXCOLOR@@QAA@XZ");
//};

//public: D3DXCOLOR::D3DXCOLOR(unsigned long)
//{
//    mangled_ppc("??0D3DXCOLOR@@QAA@K@Z");
//};

//public: struct D3DXCOLOR & D3DXCOLOR::operator+=(struct D3DXCOLOR const &)
//{
//    mangled_ppc("??YD3DXCOLOR@@QAAAAU0@ABU0@@Z");
//};

//public: struct D3DXCOLOR D3DXCOLOR::operator-(struct D3DXCOLOR const &) const
//{
//    mangled_ppc("??GD3DXCOLOR@@QBA?AU0@ABU0@@Z");
//};

//public: int D3DXCOLOR::operator==(struct D3DXCOLOR const &) const
//{
//    mangled_ppc("??8D3DXCOLOR@@QBAHABU0@@Z");
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

//public: static void * D3DXTex::CCodec::operator new(unsigned int)
//{
//    mangled_ppc("??2CCodec@D3DXTex@@SAPAXI@Z");
//};

//unsigned short D3DXTex::SetEndianWord(unsigned short)
//{
//    mangled_ppc("?SetEndianWord@D3DXTex@@YAGG@Z");
//};

//float D3DXTex::TableEncodeGamma22(float)
//{
//    mangled_ppc("?TableEncodeGamma22@D3DXTex@@YAMM@Z");
//};

//float D3DXTex::TableDecodeGamma22(float)
//{
//    mangled_ppc("?TableDecodeGamma22@D3DXTex@@YAMM@Z");
//};

//protected: D3DXTex::CCodec::CCodec(struct D3DX_BLT *, unsigned int, unsigned long)
//{
//    mangled_ppc("??0CCodec@D3DXTex@@IAA@PAUD3DX_BLT@@IK@Z");
//};

//public: static void D3DXTex::CCodec::operator delete(void *)
//{
//    mangled_ppc("??3CCodec@D3DXTex@@SAXPAX@Z");
//};

//public: virtual D3DXTex::CCodec::~CCodec(void)
//{
//    mangled_ppc("??1CCodec@D3DXTex@@UAA@XZ");
//};

//public: long D3DXTex::CCodec::ConvertFrom(class D3DXTex::CCodec *)
//{
//    mangled_ppc("?ConvertFrom@CCodec@D3DXTex@@QAAJPAV12@@Z");
//};

//public: long D3DXTex::CCodec::ConvertFromFloat(void)
//{
//    mangled_ppc("?ConvertFromFloat@CCodec@D3DXTex@@QAAJXZ");
//};

//protected: long D3DXTex::CCodec::DecodePalette(struct D3DX_BLT *)
//{
//    mangled_ppc("?DecodePalette@CCodec@D3DXTex@@IAAJPAUD3DX_BLT@@@Z");
//};

//protected: virtual void D3DXTex::CCodec::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodec@D3DXTex@@MAAXXZ");
//};

//protected: void D3DXTex::CCodec::ColorKey(struct D3DXCOLOR *)
//{
//    mangled_ppc("?ColorKey@CCodec@D3DXTex@@IAAXPAUD3DXCOLOR@@@Z");
//};

//protected: struct D3DXCOLOR * D3DXTex::CCodec::EncodeGamma22(struct D3DXCOLOR *)
//{
//    mangled_ppc("?EncodeGamma22@CCodec@D3DXTex@@IAAPAUD3DXCOLOR@@PAU3@@Z");
//};

//protected: void D3DXTex::CCodec::DecodeGamma22(struct D3DXCOLOR *)
//{
//    mangled_ppc("?DecodeGamma22@CCodec@D3DXTex@@IAAXPAUD3DXCOLOR@@@Z");
//};

//protected: void D3DXTex::CCodec::AddDiffusionError(struct D3DXCOLOR *)
//{
//    mangled_ppc("?AddDiffusionError@CCodec@D3DXTex@@IAAXPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8R8G8B8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R5G6B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R5G6B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X1R5G5B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X1R5G5B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A1R5G5B5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A1R5G5B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A4R4G4B4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A4R4G4B4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R3G3B2::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R3G3B2@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8R3G3B2::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8R3G3B2@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X4R4G4B4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X4R4G4B4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2B10G10R10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2B10G10R10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8B8G8R8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8B8G8R8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8B8G8R8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8B8G8R8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G16R16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G16R16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2R10G10B10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2R10G10B10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A16B16G16R16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A16B16G16R16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8P8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8P8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_P8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_P8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8L8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A8L8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A4L4::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A4L4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L6V5U5::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_L6V5U5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8L8V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_X8L8V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_Q8W8V8U8::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_Q8W8V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_V16U16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_V16U16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2W10V10U10::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A2W10V10U10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_Q16W16V16U16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_Q16W16V16U16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D32F_LOCKABLE::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D32F_LOCKABLE@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G16R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G16R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A16B16G16R16F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A16B16G16R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G32R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_G32R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A32B32G32R32F::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_A32B32G32R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D3DX_A16L16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D3DX_A16L16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D3DX_R16G16B16::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodec_D3DX_R16G16B16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8R8G8B8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8R8G8B8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R5G6B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R5G6B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X1R5G5B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X1R5G5B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A1R5G5B5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A1R5G5B5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A4R4G4B4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A4R4G4B4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2B10G10R10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2B10G10R10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8B8G8R8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8B8G8R8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8B8G8R8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8B8G8R8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G16R16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G16R16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2R10G10B10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2R10G10B10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A16B16G16R16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A16B16G16R16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R3G3B2::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R3G3B2@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8R3G3B2::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8R3G3B2@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X4R4G4B4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X4R4G4B4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8P8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8P8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_P8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_P8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A8L8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A8L8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A4L4::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A4L4@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_L6V5U5::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_L6V5U5@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_X8L8V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_X8L8V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_Q8W8V8U8::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_Q8W8V8U8@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_V16U16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_V16U16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A2W10V10U10::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A2W10V10U10@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_Q16W16V16U16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_Q16W16V16U16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D32F_LOCKABLE::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D32F_LOCKABLE@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G16R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G16R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A16B16G16R16F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A16B16G16R16F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_G32R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_G32R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_A32B32G32R32F::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_A32B32G32R32F@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D3DX_A16L16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D3DX_A16L16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodec_D3DX_R16G16B16::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodec_D3DX_R16G16B16@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: D3DXTex::CCodecYUV::CCodecYUV(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodecYUV@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: long D3DXTex::CCodecYUV::Commit(void)
//{
//    mangled_ppc("?Commit@CCodecYUV@D3DXTex@@QAAJXZ");
//};

//public: long D3DXTex::CCodecYUV::Fetch(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?Fetch@CCodecYUV@D3DXTex@@QAAJIIH@Z");
//};

//public: virtual void D3DXTex::CCodecYUV::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodecYUV@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodecYUV::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodecYUV@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: D3DXTex::CCodecDXT::CCodecDXT(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodecDXT@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodecDXT::~CCodecDXT(void)
//{
//    mangled_ppc("??1CCodecDXT@D3DXTex@@UAA@XZ");
//};

//protected: virtual void D3DXTex::CCodecDXT::QuantizeColorKey(void)
//{
//    mangled_ppc("?QuantizeColorKey@CCodecDXT@D3DXTex@@MAAXXZ");
//};

//public: virtual void D3DXTex::CCodecDXT::Encode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Encode@CCodecDXT@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: virtual void D3DXTex::CCodecDXT::Decode(unsigned int, unsigned int, struct D3DXCOLOR *)
//{
//    mangled_ppc("?Decode@CCodecDXT@D3DXTex@@UAAXIIPAUD3DXCOLOR@@@Z");
//};

//public: D3DXTex::CCodec_A8R8G8B8::CCodec_A8R8G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8R8G8B8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A8R8G8B8::~CCodec_A8R8G8B8(void)
//{
//    mangled_ppc("??1CCodec_A8R8G8B8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_X8R8G8B8::CCodec_X8R8G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8R8G8B8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_X8R8G8B8::~CCodec_X8R8G8B8(void)
//{
//    mangled_ppc("??1CCodec_X8R8G8B8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_R5G6B5::CCodec_R5G6B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R5G6B5@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_R5G6B5::~CCodec_R5G6B5(void)
//{
//    mangled_ppc("??1CCodec_R5G6B5@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_X1R5G5B5::CCodec_X1R5G5B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X1R5G5B5@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_X1R5G5B5::~CCodec_X1R5G5B5(void)
//{
//    mangled_ppc("??1CCodec_X1R5G5B5@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A1R5G5B5::CCodec_A1R5G5B5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A1R5G5B5@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A1R5G5B5::~CCodec_A1R5G5B5(void)
//{
//    mangled_ppc("??1CCodec_A1R5G5B5@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A4R4G4B4::CCodec_A4R4G4B4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A4R4G4B4@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A4R4G4B4::~CCodec_A4R4G4B4(void)
//{
//    mangled_ppc("??1CCodec_A4R4G4B4@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A8::CCodec_A8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A8::~CCodec_A8(void)
//{
//    mangled_ppc("??1CCodec_A8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_X4R4G4B4::CCodec_X4R4G4B4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X4R4G4B4@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_X4R4G4B4::~CCodec_X4R4G4B4(void)
//{
//    mangled_ppc("??1CCodec_X4R4G4B4@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A2B10G10R10::CCodec_A2B10G10R10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2B10G10R10@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A2B10G10R10::~CCodec_A2B10G10R10(void)
//{
//    mangled_ppc("??1CCodec_A2B10G10R10@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A8B8G8R8::CCodec_A8B8G8R8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8B8G8R8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A8B8G8R8::~CCodec_A8B8G8R8(void)
//{
//    mangled_ppc("??1CCodec_A8B8G8R8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_X8B8G8R8::CCodec_X8B8G8R8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8B8G8R8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_X8B8G8R8::~CCodec_X8B8G8R8(void)
//{
//    mangled_ppc("??1CCodec_X8B8G8R8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_G16R16::CCodec_G16R16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G16R16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_G16R16::~CCodec_G16R16(void)
//{
//    mangled_ppc("??1CCodec_G16R16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A2R10G10B10::CCodec_A2R10G10B10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2R10G10B10@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A2R10G10B10::~CCodec_A2R10G10B10(void)
//{
//    mangled_ppc("??1CCodec_A2R10G10B10@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A16B16G16R16::CCodec_A16B16G16R16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A16B16G16R16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A16B16G16R16::~CCodec_A16B16G16R16(void)
//{
//    mangled_ppc("??1CCodec_A16B16G16R16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_L8::CCodec_L8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_L8::~CCodec_L8(void)
//{
//    mangled_ppc("??1CCodec_L8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A8L8::CCodec_A8L8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A8L8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A8L8::~CCodec_A8L8(void)
//{
//    mangled_ppc("??1CCodec_A8L8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_L16::CCodec_L16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_L16::~CCodec_L16(void)
//{
//    mangled_ppc("??1CCodec_L16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_V8U8::CCodec_V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_V8U8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_V8U8::~CCodec_V8U8(void)
//{
//    mangled_ppc("??1CCodec_V8U8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_L6V5U5::CCodec_L6V5U5(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_L6V5U5@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_L6V5U5::~CCodec_L6V5U5(void)
//{
//    mangled_ppc("??1CCodec_L6V5U5@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_X8L8V8U8::CCodec_X8L8V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_X8L8V8U8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_X8L8V8U8::~CCodec_X8L8V8U8(void)
//{
//    mangled_ppc("??1CCodec_X8L8V8U8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_Q8W8V8U8::CCodec_Q8W8V8U8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_Q8W8V8U8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_Q8W8V8U8::~CCodec_Q8W8V8U8(void)
//{
//    mangled_ppc("??1CCodec_Q8W8V8U8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_V16U16::CCodec_V16U16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_V16U16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_V16U16::~CCodec_V16U16(void)
//{
//    mangled_ppc("??1CCodec_V16U16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A2W10V10U10::CCodec_A2W10V10U10(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A2W10V10U10@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A2W10V10U10::~CCodec_A2W10V10U10(void)
//{
//    mangled_ppc("??1CCodec_A2W10V10U10@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_Q16W16V16U16::CCodec_Q16W16V16U16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_Q16W16V16U16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_Q16W16V16U16::~CCodec_Q16W16V16U16(void)
//{
//    mangled_ppc("??1CCodec_Q16W16V16U16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_D16::CCodec_D16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_D16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_D16::~CCodec_D16(void)
//{
//    mangled_ppc("??1CCodec_D16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_R16F::CCodec_R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R16F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_R16F::~CCodec_R16F(void)
//{
//    mangled_ppc("??1CCodec_R16F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_G16R16F::CCodec_G16R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G16R16F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_G16R16F::~CCodec_G16R16F(void)
//{
//    mangled_ppc("??1CCodec_G16R16F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A16B16G16R16F::CCodec_A16B16G16R16F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A16B16G16R16F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A16B16G16R16F::~CCodec_A16B16G16R16F(void)
//{
//    mangled_ppc("??1CCodec_A16B16G16R16F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_R32F::CCodec_R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R32F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_R32F::~CCodec_R32F(void)
//{
//    mangled_ppc("??1CCodec_R32F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_G32R32F::CCodec_G32R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G32R32F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_G32R32F::~CCodec_G32R32F(void)
//{
//    mangled_ppc("??1CCodec_G32R32F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_A32B32G32R32F::CCodec_A32B32G32R32F(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_A32B32G32R32F@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_A32B32G32R32F::~CCodec_A32B32G32R32F(void)
//{
//    mangled_ppc("??1CCodec_A32B32G32R32F@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_D3DX_A16L16::CCodec_D3DX_A16L16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_D3DX_A16L16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_D3DX_A16L16::~CCodec_D3DX_A16L16(void)
//{
//    mangled_ppc("??1CCodec_D3DX_A16L16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_D3DX_R16G16B16::CCodec_D3DX_R16G16B16(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_D3DX_R16G16B16@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_D3DX_R16G16B16::~CCodec_D3DX_R16G16B16(void)
//{
//    mangled_ppc("??1CCodec_D3DX_R16G16B16@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_DXT1::CCodec_DXT1(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT1@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_DXT1::~CCodec_DXT1(void)
//{
//    mangled_ppc("??1CCodec_DXT1@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_DXT2::CCodec_DXT2(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT2@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_DXT2::~CCodec_DXT2(void)
//{
//    mangled_ppc("??1CCodec_DXT2@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_DXT4::CCodec_DXT4(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_DXT4@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_DXT4::~CCodec_DXT4(void)
//{
//    mangled_ppc("??1CCodec_DXT4@D3DXTex@@UAA@XZ");
//};

//merged_83AFCC78
//{
//    mangled_ppc("merged_83AFCC78");
//};

//public: virtual D3DXTex::CCodecYUV::~CCodecYUV(void)
//{
//    mangled_ppc("??1CCodecYUV@D3DXTex@@UAA@XZ");
//};

//merged_83AFCD38
//{
//    mangled_ppc("merged_83AFCD38");
//};

//merged_83AFCD98
//{
//    mangled_ppc("merged_83AFCD98");
//};

//merged_83AFCDF8
//{
//    mangled_ppc("merged_83AFCDF8");
//};

//merged_83AFCE58
//{
//    mangled_ppc("merged_83AFCE58");
//};

//merged_83AFCEB8
//{
//    mangled_ppc("merged_83AFCEB8");
//};

//merged_83AFCF18
//{
//    mangled_ppc("merged_83AFCF18");
//};

//merged_83AFCF78
//{
//    mangled_ppc("merged_83AFCF78");
//};

//merged_83AFCFD8
//{
//    mangled_ppc("merged_83AFCFD8");
//};

//merged_83AFD038
//{
//    mangled_ppc("merged_83AFD038");
//};

//merged_83AFD098
//{
//    mangled_ppc("merged_83AFD098");
//};

//merged_83AFD0F8
//{
//    mangled_ppc("merged_83AFD0F8");
//};

//merged_83AFD158
//{
//    mangled_ppc("merged_83AFD158");
//};

//merged_83AFD1B8
//{
//    mangled_ppc("merged_83AFD1B8");
//};

//merged_83AFD218
//{
//    mangled_ppc("merged_83AFD218");
//};

//merged_83AFD278
//{
//    mangled_ppc("merged_83AFD278");
//};

//merged_83AFD2D8
//{
//    mangled_ppc("merged_83AFD2D8");
//};

//merged_83AFD338
//{
//    mangled_ppc("merged_83AFD338");
//};

//merged_83AFD398
//{
//    mangled_ppc("merged_83AFD398");
//};

//merged_83AFD3F8
//{
//    mangled_ppc("merged_83AFD3F8");
//};

//merged_83AFD458
//{
//    mangled_ppc("merged_83AFD458");
//};

//merged_83AFD4B8
//{
//    mangled_ppc("merged_83AFD4B8");
//};

//merged_83AFD518
//{
//    mangled_ppc("merged_83AFD518");
//};

//merged_83AFD578
//{
//    mangled_ppc("merged_83AFD578");
//};

//merged_83AFD5D8
//{
//    mangled_ppc("merged_83AFD5D8");
//};

//merged_83AFD638
//{
//    mangled_ppc("merged_83AFD638");
//};

//merged_83AFD698
//{
//    mangled_ppc("merged_83AFD698");
//};

//merged_83AFD6F8
//{
//    mangled_ppc("merged_83AFD6F8");
//};

//merged_83AFD758
//{
//    mangled_ppc("merged_83AFD758");
//};

//merged_83AFD7B8
//{
//    mangled_ppc("merged_83AFD7B8");
//};

//merged_83AFD818
//{
//    mangled_ppc("merged_83AFD818");
//};

//merged_83AFD878
//{
//    mangled_ppc("merged_83AFD878");
//};

//merged_83AFD8D8
//{
//    mangled_ppc("merged_83AFD8D8");
//};

//merged_83AFD938
//{
//    mangled_ppc("merged_83AFD938");
//};

//merged_83AFD998
//{
//    mangled_ppc("merged_83AFD998");
//};

//public: D3DXTex::CCodec_UYVY::CCodec_UYVY(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_UYVY@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_UYVY::~CCodec_UYVY(void)
//{
//    mangled_ppc("??1CCodec_UYVY@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_G8R8_G8B8::CCodec_G8R8_G8B8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_G8R8_G8B8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_G8R8_G8B8::~CCodec_G8R8_G8B8(void)
//{
//    mangled_ppc("??1CCodec_G8R8_G8B8@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_YUY2::CCodec_YUY2(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_YUY2@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_YUY2::~CCodec_YUY2(void)
//{
//    mangled_ppc("??1CCodec_YUY2@D3DXTex@@UAA@XZ");
//};

//public: D3DXTex::CCodec_R8G8_B8G8::CCodec_R8G8_B8G8(struct D3DX_BLT *)
//{
//    mangled_ppc("??0CCodec_R8G8_B8G8@D3DXTex@@QAA@PAUD3DX_BLT@@@Z");
//};

//public: virtual D3DXTex::CCodec_R8G8_B8G8::~CCodec_R8G8_B8G8(void)
//{
//    mangled_ppc("??1CCodec_R8G8_B8G8@D3DXTex@@UAA@XZ");
//};

//merged_83AFDC38
//{
//    mangled_ppc("merged_83AFDC38");
//};

//merged_83AFDC98
//{
//    mangled_ppc("merged_83AFDC98");
//};

//merged_83AFDCF8
//{
//    mangled_ppc("merged_83AFDCF8");
//};

//public: static class D3DXTex::CCodec * D3DXTex::CCodec::Create(struct D3DX_BLT *)
//{
//    mangled_ppc("?Create@CCodec@D3DXTex@@SAPAV12@PAUD3DX_BLT@@@Z");
//};

//merged_83AFE508
//{
//    mangled_ppc("merged_83AFE508");
//};

//merged_83AFE568
//{
//    mangled_ppc("merged_83AFE568");
//};

//merged_83AFE5C8
//{
//    mangled_ppc("merged_83AFE5C8");
//};

//merged_83AFE628
//{
//    mangled_ppc("merged_83AFE628");
//};

//merged_83AFE688
//{
//    mangled_ppc("merged_83AFE688");
//};

