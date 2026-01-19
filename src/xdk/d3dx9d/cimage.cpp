/* ---------- headers */

#include "xdk\d3dx9d\cimage.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const D3DXTex::pHDRHeaderString; // "?pHDRHeaderString@D3DXTex@@3PBDB"

// long D3DXTex::StrCbCopy(char *, unsigned long, char const *);
// public: D3DXTex::CDataCollector::CDataCollector(void);
// public: long D3DXTex::CDataCollector::WriteData(void const *, unsigned long, unsigned long *);
// public: long D3DXTex::CDataCollector::Flush(void);
// public: D3DXTex::CImage::CImage(void);
// int D3DXTex::findendl(char *, unsigned long);
// float D3DXTex::MSBConvert(float);
// void D3DXTex::d3dx_jpeg_error_exit(struct D3DX::jpeg_common_struct *);
// void D3DXTex::d3dx_jpeg_ignore_message(struct D3DX::jpeg_common_struct *);
// void D3DXTex::d3dx_jpeg_output_message(struct D3DX::jpeg_common_struct *);
// void D3DXTex::d3dx_jpeg_init_source(struct D3DX::jpeg_decompress_struct *);
// int D3DXTex::d3dx_jpeg_fill_input_buffer(struct D3DX::jpeg_decompress_struct *);
// void D3DXTex::d3dx_jpeg_skip_input_data(struct D3DX::jpeg_decompress_struct *, long);
// void D3DXTex::d3dx_jpeg_term_source(struct D3DX::jpeg_decompress_struct *);
// int D3DXTex::empty_output_buffer(struct D3DX::jpeg_compress_struct *);
// void D3DXTex::term_destination(struct D3DX::jpeg_compress_struct *);
// void D3DXTex::d3dx_png_read_fn(struct D3DX::png_struct_def *, unsigned char *, unsigned int);
// void D3DXTex::d3dx_png_read_error_fn(struct D3DX::png_struct_def *, char const *);
// void D3DXTex::d3dx_png_read_warning_fn(struct D3DX::png_struct_def *, char const *);
// void D3DXTex::d3dx_png_write_error_fn(struct D3DX::png_struct_def *, char const *);
// void D3DXTex::d3dx_png_write_warning_fn(struct D3DX::png_struct_def *, char const *);
// void D3DXTex::write_png_data(struct D3DX::png_struct_def *, unsigned char *, unsigned int);
// void D3DXTex::flush_png_data(struct D3DX::png_struct_def *);
// public: static void D3DXTex::CImage::operator delete(void *);
// void D3DXTex::SetEndianWord(void *, void *);
// void D3DXTex::SetEndianDWord(void *, void *);
// void D3DXTex::SetEndianBITMAPFILEHEADER(struct D3DXTex::tagBITMAPFILEHEADER *, struct D3DXTex::tagBITMAPFILEHEADER *);
// void D3DXTex::SetEndianBITMAPINFOHEADER(struct D3DXTex::tagBITMAPINFOHEADER *, struct D3DXTex::tagBITMAPINFOHEADER *);
// void D3DXTex::SetEndianCIEXYZ(struct D3DXTex::tagCIEXYZ *, struct D3DXTex::tagCIEXYZ *);
// void D3DXTex::SetEndianCIEXYZTRIPLE(struct D3DXTex::tagICEXYZTRIPLE *, struct D3DXTex::tagICEXYZTRIPLE *);
// void D3DXTex::SetEndianBITMAPV4HEADER(struct D3DXTex::BITMAPV4HEADER *, struct D3DXTex::BITMAPV4HEADER *);
// public: D3DXTex::CDataCollector::~CDataCollector(void);
// public: long D3DXTex::CDataCollector::Setup(void const *, unsigned long);
// public: D3DXTex::CImage::~CImage(void);
// public: void * D3DXTex::CImage::`scalar deleting destructor'(unsigned int);
// public: long D3DXTex::CImage::Initialize(struct D3DX_BLT *);
// private: long D3DXTex::CImage::LoadPFM(void const *, unsigned long);
// private: long D3DXTex::CImage::LoadHDR(void const *, unsigned long);
// private: long D3DXTex::CImage::LoadDIB(void const *, unsigned long);
// private: long D3DXTex::CImage::SaveDIB(class D3DXTex::CDataCollector *, int);
// private: long D3DXTex::CImage::LoadJPG(void const *, unsigned long);
// void D3DXTex::init_destination(struct D3DX::jpeg_compress_struct *);
// private: long D3DXTex::CImage::SaveJPG(class D3DXTex::CDataCollector *);
// void D3DXTex::SetEndianD3DX_tga_header(struct D3DXTex::d3dx_tga_header *, struct D3DXTex::d3dx_tga_header *);
// private: long D3DXTex::CImage::LoadTGA(void const *, unsigned long);
// private: long D3DXTex::CImage::LoadPPM(void const *, unsigned long);
// private: long D3DXTex::CImage::SavePNG(class D3DXTex::CDataCollector *);
// private: long D3DXTex::CImage::LoadPNG(void const *, unsigned long);
// void D3DXTex::SetEndianDDS_PIXELFORMAT(struct D3DXTex::DDS_PIXELFORMAT *, struct D3DXTex::DDS_PIXELFORMAT *);
// void D3DXTex::SetEndianDDS_HEADER(struct D3DXTex::DDS_HEADER *, struct D3DXTex::DDS_HEADER *);
// private: long D3DXTex::CImage::LoadDDS(void const *, unsigned long);
// private: long D3DXTex::CImage::SaveDDS(class D3DXTex::CDataCollector *);
// private: long D3DXTex::CImage::SavePFM(class D3DXTex::CDataCollector *);
// private: long D3DXTex::CImage::SaveHDR(class D3DXTex::CDataCollector *);
// private: long D3DXTex::CImage::LoadBMP(void const *, unsigned long);
// public: long D3DXTex::CImage::Load(void const *, unsigned long, struct _D3DXIMAGE_INFO *, int);
// public: long D3DXTex::CImage::Save(void const *, enum _D3DXIMAGE_FILEFORMAT, unsigned long);

//long D3DXTex::StrCbCopy(char *, unsigned long, char const *)
//{
//    mangled_ppc("?StrCbCopy@D3DXTex@@YAJPADKPBD@Z");
//};

//public: D3DXTex::CDataCollector::CDataCollector(void)
//{
//    mangled_ppc("??0CDataCollector@D3DXTex@@QAA@XZ");
//};

//public: long D3DXTex::CDataCollector::WriteData(void const *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?WriteData@CDataCollector@D3DXTex@@QAAJPBXKPAK@Z");
//};

//public: long D3DXTex::CDataCollector::Flush(void)
//{
//    mangled_ppc("?Flush@CDataCollector@D3DXTex@@QAAJXZ");
//};

//public: D3DXTex::CImage::CImage(void)
//{
//    mangled_ppc("??0CImage@D3DXTex@@QAA@XZ");
//};

//int D3DXTex::findendl(char *, unsigned long)
//{
//    mangled_ppc("?findendl@D3DXTex@@YAHPADK@Z");
//};

//float D3DXTex::MSBConvert(float)
//{
//    mangled_ppc("?MSBConvert@D3DXTex@@YAMM@Z");
//};

//void D3DXTex::d3dx_jpeg_error_exit(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_error_exit@D3DXTex@@YAXPAUjpeg_common_struct@D3DX@@@Z");
//};

//void D3DXTex::d3dx_jpeg_ignore_message(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_ignore_message@D3DXTex@@YAXPAUjpeg_common_struct@D3DX@@@Z");
//};

//void D3DXTex::d3dx_jpeg_output_message(struct D3DX::jpeg_common_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_output_message@D3DXTex@@YAXPAUjpeg_common_struct@D3DX@@@Z");
//};

//void D3DXTex::d3dx_jpeg_init_source(struct D3DX::jpeg_decompress_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_init_source@D3DXTex@@YAXPAUjpeg_decompress_struct@D3DX@@@Z");
//};

//int D3DXTex::d3dx_jpeg_fill_input_buffer(struct D3DX::jpeg_decompress_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_fill_input_buffer@D3DXTex@@YAHPAUjpeg_decompress_struct@D3DX@@@Z");
//};

//void D3DXTex::d3dx_jpeg_skip_input_data(struct D3DX::jpeg_decompress_struct *, long)
//{
//    mangled_ppc("?d3dx_jpeg_skip_input_data@D3DXTex@@YAXPAUjpeg_decompress_struct@D3DX@@J@Z");
//};

//void D3DXTex::d3dx_jpeg_term_source(struct D3DX::jpeg_decompress_struct *)
//{
//    mangled_ppc("?d3dx_jpeg_term_source@D3DXTex@@YAXPAUjpeg_decompress_struct@D3DX@@@Z");
//};

//int D3DXTex::empty_output_buffer(struct D3DX::jpeg_compress_struct *)
//{
//    mangled_ppc("?empty_output_buffer@D3DXTex@@YAHPAUjpeg_compress_struct@D3DX@@@Z");
//};

//void D3DXTex::term_destination(struct D3DX::jpeg_compress_struct *)
//{
//    mangled_ppc("?term_destination@D3DXTex@@YAXPAUjpeg_compress_struct@D3DX@@@Z");
//};

//void D3DXTex::d3dx_png_read_fn(struct D3DX::png_struct_def *, unsigned char *, unsigned int)
//{
//    mangled_ppc("?d3dx_png_read_fn@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PAEI@Z");
//};

//void D3DXTex::d3dx_png_read_error_fn(struct D3DX::png_struct_def *, char const *)
//{
//    mangled_ppc("?d3dx_png_read_error_fn@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PBD@Z");
//};

//void D3DXTex::d3dx_png_read_warning_fn(struct D3DX::png_struct_def *, char const *)
//{
//    mangled_ppc("?d3dx_png_read_warning_fn@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PBD@Z");
//};

//void D3DXTex::d3dx_png_write_error_fn(struct D3DX::png_struct_def *, char const *)
//{
//    mangled_ppc("?d3dx_png_write_error_fn@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PBD@Z");
//};

//void D3DXTex::d3dx_png_write_warning_fn(struct D3DX::png_struct_def *, char const *)
//{
//    mangled_ppc("?d3dx_png_write_warning_fn@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PBD@Z");
//};

//void D3DXTex::write_png_data(struct D3DX::png_struct_def *, unsigned char *, unsigned int)
//{
//    mangled_ppc("?write_png_data@D3DXTex@@YAXPAUpng_struct_def@D3DX@@PAEI@Z");
//};

//void D3DXTex::flush_png_data(struct D3DX::png_struct_def *)
//{
//    mangled_ppc("?flush_png_data@D3DXTex@@YAXPAUpng_struct_def@D3DX@@@Z");
//};

//public: static void D3DXTex::CImage::operator delete(void *)
//{
//    mangled_ppc("??3CImage@D3DXTex@@SAXPAX@Z");
//};

//void D3DXTex::SetEndianWord(void *, void *)
//{
//    mangled_ppc("?SetEndianWord@D3DXTex@@YAXPAX0@Z");
//};

//void D3DXTex::SetEndianDWord(void *, void *)
//{
//    mangled_ppc("?SetEndianDWord@D3DXTex@@YAXPAX0@Z");
//};

//void D3DXTex::SetEndianBITMAPFILEHEADER(struct D3DXTex::tagBITMAPFILEHEADER *, struct D3DXTex::tagBITMAPFILEHEADER *)
//{
//    mangled_ppc("?SetEndianBITMAPFILEHEADER@D3DXTex@@YAXPAUtagBITMAPFILEHEADER@1@0@Z");
//};

//void D3DXTex::SetEndianBITMAPINFOHEADER(struct D3DXTex::tagBITMAPINFOHEADER *, struct D3DXTex::tagBITMAPINFOHEADER *)
//{
//    mangled_ppc("?SetEndianBITMAPINFOHEADER@D3DXTex@@YAXPAUtagBITMAPINFOHEADER@1@0@Z");
//};

//void D3DXTex::SetEndianCIEXYZ(struct D3DXTex::tagCIEXYZ *, struct D3DXTex::tagCIEXYZ *)
//{
//    mangled_ppc("?SetEndianCIEXYZ@D3DXTex@@YAXPAUtagCIEXYZ@1@0@Z");
//};

//void D3DXTex::SetEndianCIEXYZTRIPLE(struct D3DXTex::tagICEXYZTRIPLE *, struct D3DXTex::tagICEXYZTRIPLE *)
//{
//    mangled_ppc("?SetEndianCIEXYZTRIPLE@D3DXTex@@YAXPAUtagICEXYZTRIPLE@1@0@Z");
//};

//void D3DXTex::SetEndianBITMAPV4HEADER(struct D3DXTex::BITMAPV4HEADER *, struct D3DXTex::BITMAPV4HEADER *)
//{
//    mangled_ppc("?SetEndianBITMAPV4HEADER@D3DXTex@@YAXPAUBITMAPV4HEADER@1@0@Z");
//};

//public: D3DXTex::CDataCollector::~CDataCollector(void)
//{
//    mangled_ppc("??1CDataCollector@D3DXTex@@QAA@XZ");
//};

//public: long D3DXTex::CDataCollector::Setup(void const *, unsigned long)
//{
//    mangled_ppc("?Setup@CDataCollector@D3DXTex@@QAAJPBXK@Z");
//};

//public: D3DXTex::CImage::~CImage(void)
//{
//    mangled_ppc("??1CImage@D3DXTex@@QAA@XZ");
//};

//public: void * D3DXTex::CImage::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCImage@D3DXTex@@QAAPAXI@Z");
//};

//public: long D3DXTex::CImage::Initialize(struct D3DX_BLT *)
//{
//    mangled_ppc("?Initialize@CImage@D3DXTex@@QAAJPAUD3DX_BLT@@@Z");
//};

//private: long D3DXTex::CImage::LoadPFM(void const *, unsigned long)
//{
//    mangled_ppc("?LoadPFM@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::LoadHDR(void const *, unsigned long)
//{
//    mangled_ppc("?LoadHDR@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::LoadDIB(void const *, unsigned long)
//{
//    mangled_ppc("?LoadDIB@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::SaveDIB(class D3DXTex::CDataCollector *, int)
//{
//    mangled_ppc("?SaveDIB@CImage@D3DXTex@@AAAJPAVCDataCollector@2@H@Z");
//};

//private: long D3DXTex::CImage::LoadJPG(void const *, unsigned long)
//{
//    mangled_ppc("?LoadJPG@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//void D3DXTex::init_destination(struct D3DX::jpeg_compress_struct *)
//{
//    mangled_ppc("?init_destination@D3DXTex@@YAXPAUjpeg_compress_struct@D3DX@@@Z");
//};

//private: long D3DXTex::CImage::SaveJPG(class D3DXTex::CDataCollector *)
//{
//    mangled_ppc("?SaveJPG@CImage@D3DXTex@@AAAJPAVCDataCollector@2@@Z");
//};

//void D3DXTex::SetEndianD3DX_tga_header(struct D3DXTex::d3dx_tga_header *, struct D3DXTex::d3dx_tga_header *)
//{
//    mangled_ppc("?SetEndianD3DX_tga_header@D3DXTex@@YAXPAUd3dx_tga_header@1@0@Z");
//};

//private: long D3DXTex::CImage::LoadTGA(void const *, unsigned long)
//{
//    mangled_ppc("?LoadTGA@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::LoadPPM(void const *, unsigned long)
//{
//    mangled_ppc("?LoadPPM@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::SavePNG(class D3DXTex::CDataCollector *)
//{
//    mangled_ppc("?SavePNG@CImage@D3DXTex@@AAAJPAVCDataCollector@2@@Z");
//};

//private: long D3DXTex::CImage::LoadPNG(void const *, unsigned long)
//{
//    mangled_ppc("?LoadPNG@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//void D3DXTex::SetEndianDDS_PIXELFORMAT(struct D3DXTex::DDS_PIXELFORMAT *, struct D3DXTex::DDS_PIXELFORMAT *)
//{
//    mangled_ppc("?SetEndianDDS_PIXELFORMAT@D3DXTex@@YAXPAUDDS_PIXELFORMAT@1@0@Z");
//};

//void D3DXTex::SetEndianDDS_HEADER(struct D3DXTex::DDS_HEADER *, struct D3DXTex::DDS_HEADER *)
//{
//    mangled_ppc("?SetEndianDDS_HEADER@D3DXTex@@YAXPAUDDS_HEADER@1@0@Z");
//};

//private: long D3DXTex::CImage::LoadDDS(void const *, unsigned long)
//{
//    mangled_ppc("?LoadDDS@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//private: long D3DXTex::CImage::SaveDDS(class D3DXTex::CDataCollector *)
//{
//    mangled_ppc("?SaveDDS@CImage@D3DXTex@@AAAJPAVCDataCollector@2@@Z");
//};

//private: long D3DXTex::CImage::SavePFM(class D3DXTex::CDataCollector *)
//{
//    mangled_ppc("?SavePFM@CImage@D3DXTex@@AAAJPAVCDataCollector@2@@Z");
//};

//private: long D3DXTex::CImage::SaveHDR(class D3DXTex::CDataCollector *)
//{
//    mangled_ppc("?SaveHDR@CImage@D3DXTex@@AAAJPAVCDataCollector@2@@Z");
//};

//private: long D3DXTex::CImage::LoadBMP(void const *, unsigned long)
//{
//    mangled_ppc("?LoadBMP@CImage@D3DXTex@@AAAJPBXK@Z");
//};

//public: long D3DXTex::CImage::Load(void const *, unsigned long, struct _D3DXIMAGE_INFO *, int)
//{
//    mangled_ppc("?Load@CImage@D3DXTex@@QAAJPBXKPAU_D3DXIMAGE_INFO@@H@Z");
//};

//public: long D3DXTex::CImage::Save(void const *, enum _D3DXIMAGE_FILEFORMAT, unsigned long)
//{
//    mangled_ppc("?Save@CImage@D3DXTex@@QAAJPBXW4_D3DXIMAGE_FILEFORMAT@@K@Z");
//};

