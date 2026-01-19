/* ---------- headers */

#include "omaha\bitmaps\s3tc\s3tc.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void HaloS3TC::EncodeBlockRGB(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockRGB *);
// void HaloS3TC::EncodeBlockRGBColorKey(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockRGB *, unsigned char);
// void HaloS3TC::ColorToFcolor(struct HaloS3TC::S3TC_COLOR const *, struct HaloS3TC::FCOLOR *);
// void HaloS3TC::Square3x3(float (*const)[3], float (*const)[3]);
// void HaloS3TC::Quantize(struct HaloS3TC::FCOLOR *, struct HaloS3TC::FCOLOR *, struct HaloS3TC::S3TCBlockRGB *, int);
// void HaloS3TC::FcolorToColor(struct HaloS3TC::FCOLOR const *, struct HaloS3TC::S3TC_COLOR *);
// void HaloS3TC::ColorToRGB(struct HaloS3TC::S3TC_COLOR const *, unsigned short *);
// void HaloS3TC::RGBToColor(unsigned short const *, struct HaloS3TC::S3TC_COLOR *);
// void HaloS3TC::ClipExtrema(struct HaloS3TC::FCOLOR *, struct HaloS3TC::FCOLOR *);
// void HaloS3TC::AllSame(struct HaloS3TC::S3TC_COLOR const *, struct HaloS3TC::S3TCBlockRGB *, unsigned short);
// void HaloS3TC::DecodeBlockRGB(struct HaloS3TC::S3TCBlockRGB const *, struct HaloS3TC::S3TC_COLOR *const, bool);
// void HaloS3TC::DecodeBlockRGB__single_pixel(struct HaloS3TC::S3TCBlockRGB const *, struct HaloS3TC::S3TC_COLOR *, short, short, bool);
// void HaloS3TC::EncodeBlockAlpha4(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockAlpha4*);
// void HaloS3TC::DecodeBlockAlpha4(struct HaloS3TC::S3TCBlockAlpha4const *, struct HaloS3TC::S3TC_COLOR *const);
// long HaloS3TC::decode_xenon_dxt3a_block_single_pixel(struct HaloS3TC::S3TCBlockAlpha4const *, short, short);
// void HaloS3TC::DecodeBlockAlpha4__single_pixel(struct HaloS3TC::S3TCBlockAlpha4const *, struct HaloS3TC::S3TC_COLOR *, short, short);
// void HaloS3TC::EncodeBlockAlpha3(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockAlpha3*);
// void HaloS3TC::DecodeBlockAlpha3(struct HaloS3TC::S3TCBlockAlpha3const *, struct HaloS3TC::S3TC_COLOR *const);
// void HaloS3TC::DecodeBlockAlpha3__single_pixel(struct HaloS3TC::S3TCBlockAlpha3const *, struct HaloS3TC::S3TC_COLOR *, short, short);
// void HaloS3TC::DecodeBlockDXT5A__single_pixel(struct HaloS3TC::S3TCBlockDXT5A const *, struct HaloS3TC::S3TC_COLOR *, short, short);
// long HaloS3TC::decode_xenon_dxt5a_block_single_pixel_slow(unsigned char *const, long, long);
// long HaloS3TC::decode_xenon_dxt5a_block_single_pixel(unsigned char *const, long, long);
// unsigned __int64 HaloS3TC::swap_bits_mask_shift(unsigned __int64, unsigned __int64, long);

//void HaloS3TC::EncodeBlockRGB(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockRGB *)
//{
//    mangled_ppc("?EncodeBlockRGB@HaloS3TC@@YAXQAUS3TC_COLOR@1@PAUS3TCBlockRGB@1@@Z");
//};

//void HaloS3TC::EncodeBlockRGBColorKey(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockRGB *, unsigned char)
//{
//    mangled_ppc("?EncodeBlockRGBColorKey@HaloS3TC@@YAXQAUS3TC_COLOR@1@PAUS3TCBlockRGB@1@E@Z");
//};

//void HaloS3TC::ColorToFcolor(struct HaloS3TC::S3TC_COLOR const *, struct HaloS3TC::FCOLOR *)
//{
//    mangled_ppc("?ColorToFcolor@HaloS3TC@@YAXPBUS3TC_COLOR@1@PAUFCOLOR@1@@Z");
//};

//void HaloS3TC::Square3x3(float (*const)[3], float (*const)[3])
//{
//    mangled_ppc("?Square3x3@HaloS3TC@@YAXQAY02M0@Z");
//};

//void HaloS3TC::Quantize(struct HaloS3TC::FCOLOR *, struct HaloS3TC::FCOLOR *, struct HaloS3TC::S3TCBlockRGB *, int)
//{
//    mangled_ppc("?Quantize@HaloS3TC@@YAXPAUFCOLOR@1@0PAUS3TCBlockRGB@1@H@Z");
//};

//void HaloS3TC::FcolorToColor(struct HaloS3TC::FCOLOR const *, struct HaloS3TC::S3TC_COLOR *)
//{
//    mangled_ppc("?FcolorToColor@HaloS3TC@@YAXPBUFCOLOR@1@PAUS3TC_COLOR@1@@Z");
//};

//void HaloS3TC::ColorToRGB(struct HaloS3TC::S3TC_COLOR const *, unsigned short *)
//{
//    mangled_ppc("?ColorToRGB@HaloS3TC@@YAXPBUS3TC_COLOR@1@PAG@Z");
//};

//void HaloS3TC::RGBToColor(unsigned short const *, struct HaloS3TC::S3TC_COLOR *)
//{
//    mangled_ppc("?RGBToColor@HaloS3TC@@YAXPBGPAUS3TC_COLOR@1@@Z");
//};

//void HaloS3TC::ClipExtrema(struct HaloS3TC::FCOLOR *, struct HaloS3TC::FCOLOR *)
//{
//    mangled_ppc("?ClipExtrema@HaloS3TC@@YAXPAUFCOLOR@1@0@Z");
//};

//void HaloS3TC::AllSame(struct HaloS3TC::S3TC_COLOR const *, struct HaloS3TC::S3TCBlockRGB *, unsigned short)
//{
//    mangled_ppc("?AllSame@HaloS3TC@@YAXPBUS3TC_COLOR@1@PAUS3TCBlockRGB@1@G@Z");
//};

//void HaloS3TC::DecodeBlockRGB(struct HaloS3TC::S3TCBlockRGB const *, struct HaloS3TC::S3TC_COLOR *const, bool)
//{
//    mangled_ppc("?DecodeBlockRGB@HaloS3TC@@YAXPBUS3TCBlockRGB@1@QAUS3TC_COLOR@1@_N@Z");
//};

//void HaloS3TC::DecodeBlockRGB__single_pixel(struct HaloS3TC::S3TCBlockRGB const *, struct HaloS3TC::S3TC_COLOR *, short, short, bool)
//{
//    mangled_ppc("?DecodeBlockRGB__single_pixel@HaloS3TC@@YAXPBUS3TCBlockRGB@1@PAUS3TC_COLOR@1@FF_N@Z");
//};

//void HaloS3TC::EncodeBlockAlpha4(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockAlpha4*)
//{
//    mangled_ppc("?EncodeBlockAlpha4@HaloS3TC@@YAXQAUS3TC_COLOR@1@PAUS3TCBlockAlpha4@1@@Z");
//};

//void HaloS3TC::DecodeBlockAlpha4(struct HaloS3TC::S3TCBlockAlpha4const *, struct HaloS3TC::S3TC_COLOR *const)
//{
//    mangled_ppc("?DecodeBlockAlpha4@HaloS3TC@@YAXPBUS3TCBlockAlpha4@1@QAUS3TC_COLOR@1@@Z");
//};

//long HaloS3TC::decode_xenon_dxt3a_block_single_pixel(struct HaloS3TC::S3TCBlockAlpha4const *, short, short)
//{
//    mangled_ppc("?decode_xenon_dxt3a_block_single_pixel@HaloS3TC@@YAJPBUS3TCBlockAlpha4@1@FF@Z");
//};

//void HaloS3TC::DecodeBlockAlpha4__single_pixel(struct HaloS3TC::S3TCBlockAlpha4const *, struct HaloS3TC::S3TC_COLOR *, short, short)
//{
//    mangled_ppc("?DecodeBlockAlpha4__single_pixel@HaloS3TC@@YAXPBUS3TCBlockAlpha4@1@PAUS3TC_COLOR@1@FF@Z");
//};

//void HaloS3TC::EncodeBlockAlpha3(struct HaloS3TC::S3TC_COLOR *const, struct HaloS3TC::S3TCBlockAlpha3*)
//{
//    mangled_ppc("?EncodeBlockAlpha3@HaloS3TC@@YAXQAUS3TC_COLOR@1@PAUS3TCBlockAlpha3@1@@Z");
//};

//void HaloS3TC::DecodeBlockAlpha3(struct HaloS3TC::S3TCBlockAlpha3const *, struct HaloS3TC::S3TC_COLOR *const)
//{
//    mangled_ppc("?DecodeBlockAlpha3@HaloS3TC@@YAXPBUS3TCBlockAlpha3@1@QAUS3TC_COLOR@1@@Z");
//};

//void HaloS3TC::DecodeBlockAlpha3__single_pixel(struct HaloS3TC::S3TCBlockAlpha3const *, struct HaloS3TC::S3TC_COLOR *, short, short)
//{
//    mangled_ppc("?DecodeBlockAlpha3__single_pixel@HaloS3TC@@YAXPBUS3TCBlockAlpha3@1@PAUS3TC_COLOR@1@FF@Z");
//};

//void HaloS3TC::DecodeBlockDXT5A__single_pixel(struct HaloS3TC::S3TCBlockDXT5A const *, struct HaloS3TC::S3TC_COLOR *, short, short)
//{
//    mangled_ppc("?DecodeBlockDXT5A__single_pixel@HaloS3TC@@YAXPBUS3TCBlockDXT5A@1@PAUS3TC_COLOR@1@FF@Z");
//};

//long HaloS3TC::decode_xenon_dxt5a_block_single_pixel_slow(unsigned char *const, long, long)
//{
//    mangled_ppc("?decode_xenon_dxt5a_block_single_pixel_slow@HaloS3TC@@YAJQAEJJ@Z");
//};

//long HaloS3TC::decode_xenon_dxt5a_block_single_pixel(unsigned char *const, long, long)
//{
//    mangled_ppc("?decode_xenon_dxt5a_block_single_pixel@HaloS3TC@@YAJQAEJJ@Z");
//};

//unsigned __int64 HaloS3TC::swap_bits_mask_shift(unsigned __int64, unsigned __int64, long)
//{
//    mangled_ppc("?swap_bits_mask_shift@HaloS3TC@@YA_K_K0J@Z");
//};

