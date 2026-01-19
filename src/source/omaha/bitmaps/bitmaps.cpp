/* ---------- headers */

#include "omaha\bitmaps\bitmaps.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const * bitmap_type_get_string(short);
// bool bitmap_format_is_valid(short);
// char const * bitmap_format_get_string(short);
// short bitmap_format_get_bits_per_pixel(short);
// short bitmap_format_get_bytes_per_block(short);
// void bitmap_format_get_string(long, char *, long);
// bool bitmap_format_is_compressed(short);
// bool bitmap_format_is_default_srgb(short);
// void bitmap_2d_initialize(struct bitmap_data *, short, short, short, short, unsigned short, bool, bool);
// void bitmap_cube_map_initialize(struct bitmap_data *, short, short, short, unsigned short, bool, bool);
// struct bitmap_data * bitmap_2d_new_PC_STYLE(short, short, short, short, unsigned short);
// struct bitmap_data * bitmap_2d_new(short, short, short, short, unsigned short);
// struct bitmap_data * bitmap_3d_new(short, short, short, short, short, unsigned short);
// struct bitmap_data * bitmap_cube_map_new(short, short, short, unsigned short);
// void bitmap_rebuild(struct bitmap_data *);
// void bitmap_changed(struct bitmap_data *);
// void bitmap_delete(struct bitmap_data *);
// void * bitmap_2d_address(struct bitmap_data const *, short, short, short);
// void * bitmap_3d_address(struct bitmap_data const *, short, short, short, short);
// void * bitmap_cube_map_address(struct bitmap_data const *, short, short, short, short);
// void * bitmap_mipmap_address(struct bitmap_data const *, short);
// unsigned long bitmap_format_to_a8r8g8b8(short, void const *, long, enum e_bitmap_curve, enum e_bitmap_curve);
// public: void fRGBA::set(float, float, float, float);
// public: unsigned long fRGBA::to_clamped_argb_32bit_with_curve(char) const;
// public: struct fRGBA fRGBA::apply_curve(char) const;
// public: fRGBA::fRGBA(float, float);
// public: void fRGBA::scale(struct fRGBA);
// public: void fRGBA::add(struct fRGBA const &);
// public: void fRGBA::abs_pow(struct fRGBA const &);
// public: void fRGBA::log(void);
// public: struct fRGBA fRGBA::times(float) const;
// public: void fRGBA::from_argb_32bit_with_curve(unsigned long, char);
// public: struct fRGBA fRGBA::remove_curve(char) const;
// public: void fRGBA::exp(struct fRGBA const &);
// public: struct fRGBA fRGBA::abs(void) const;
// public: struct fRGBA hRGBA::to_fRGBA(void) const;
// unsigned long bitmap_2d_get_pixel(struct bitmap_data const *, union real_point2d const *, float);
// unsigned long bitmap_get_pixel_internal(void const *, long, unsigned char *, short, short, short, short, short, unsigned short, enum e_bitmap_curve, enum e_bitmap_curve);
// void bitmap_cube_map_get_vector(struct bitmap_data const *, long, long, long, union vector3d *);
// unsigned long bitmap_cube_map_get_pixel(struct bitmap_data const *, union vector3d const *, float);
// void bitmap_3d_slice_extract(struct bitmap_data const *, short, short, struct bitmap_data const *);
// void bitmap_3d_slice_insert(struct bitmap_data const *, struct bitmap_data const *, short, short);
// void bitmap_cube_map_face_extract(struct bitmap_data const *, short, short, struct bitmap_data const *);
// void bitmap_cube_map_face_insert(struct bitmap_data const *, struct bitmap_data const *, short, short);
// unsigned long bitmap_mipmap_calculate_dimension(unsigned long, unsigned long);
// unsigned long bitmap_mipmap_calculate_pixel_count(enum e_bitmap_type, unsigned long, unsigned long, unsigned long, unsigned long);
// unsigned long bitmap_calculate_pixel_count(enum e_bitmap_type, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
// long bitmap_get_pixel_count(struct bitmap_data const *);
// long bitmap_get_pixel_data_size(struct bitmap_data const *);
// short bitmap_mipmap_get_width(struct bitmap_data const *, short);
// short bitmap_mipmap_get_height(struct bitmap_data const *, short);
// short bitmap_mipmap_get_depth(struct bitmap_data const *, short);
// long bitmap_mipmap_get_pixel_count(struct bitmap_data const *, short);
// long bitmap_mipmap_get_pixel_data_size(struct bitmap_data const *, short);
// long bitmap_mipmap_get_row_pitch(struct bitmap_data const *, short);
// long bitmap_mipmap_get_d3d_row_pitch(struct bitmap_data const *, short);
// long bitmap_mipmap_get_d3d_slice_pitch(struct bitmap_data const *, short);
// long bitmap_size_get_mipmap_pixel_size(short, short, short, short, short, short);
// long bitmap_size_get_total_pixel_size(short, short, short, short, short, short);
// bool bitmap_verify(struct bitmap_data const *, bool);
// bool bitmap_format_type_valid_width(short, short, short);
// bool bitmap_format_type_valid_height(short, short, short);
// bool bitmap_format_type_valid_depth(short, short, short);
// char const * bitmap_cache_usage_get_string(enum e_bitmap_cache_usage);

//char const * bitmap_type_get_string(short)
//{
//    mangled_ppc("?bitmap_type_get_string@@YAPBDF@Z");
//};

//bool bitmap_format_is_valid(short)
//{
//    mangled_ppc("?bitmap_format_is_valid@@YA_NF@Z");
//};

//char const * bitmap_format_get_string(short)
//{
//    mangled_ppc("?bitmap_format_get_string@@YAPBDF@Z");
//};

//short bitmap_format_get_bits_per_pixel(short)
//{
//    mangled_ppc("?bitmap_format_get_bits_per_pixel@@YAFF@Z");
//};

//short bitmap_format_get_bytes_per_block(short)
//{
//    mangled_ppc("?bitmap_format_get_bytes_per_block@@YAFF@Z");
//};

//void bitmap_format_get_string(long, char *, long)
//{
//    mangled_ppc("?bitmap_format_get_string@@YAXJPADJ@Z");
//};

//bool bitmap_format_is_compressed(short)
//{
//    mangled_ppc("?bitmap_format_is_compressed@@YA_NF@Z");
//};

//bool bitmap_format_is_default_srgb(short)
//{
//    mangled_ppc("?bitmap_format_is_default_srgb@@YA_NF@Z");
//};

//void bitmap_2d_initialize(struct bitmap_data *, short, short, short, short, unsigned short, bool, bool)
//{
//    mangled_ppc("?bitmap_2d_initialize@@YAXPAUbitmap_data@@FFFFG_N1@Z");
//};

//void bitmap_cube_map_initialize(struct bitmap_data *, short, short, short, unsigned short, bool, bool)
//{
//    mangled_ppc("?bitmap_cube_map_initialize@@YAXPAUbitmap_data@@FFFG_N1@Z");
//};

//struct bitmap_data * bitmap_2d_new_PC_STYLE(short, short, short, short, unsigned short)
//{
//    mangled_ppc("?bitmap_2d_new_PC_STYLE@@YAPAUbitmap_data@@FFFFG@Z");
//};

//struct bitmap_data * bitmap_2d_new(short, short, short, short, unsigned short)
//{
//    mangled_ppc("?bitmap_2d_new@@YAPAUbitmap_data@@FFFFG@Z");
//};

//struct bitmap_data * bitmap_3d_new(short, short, short, short, short, unsigned short)
//{
//    mangled_ppc("?bitmap_3d_new@@YAPAUbitmap_data@@FFFFFG@Z");
//};

//struct bitmap_data * bitmap_cube_map_new(short, short, short, unsigned short)
//{
//    mangled_ppc("?bitmap_cube_map_new@@YAPAUbitmap_data@@FFFG@Z");
//};

//void bitmap_rebuild(struct bitmap_data *)
//{
//    mangled_ppc("?bitmap_rebuild@@YAXPAUbitmap_data@@@Z");
//};

//void bitmap_changed(struct bitmap_data *)
//{
//    mangled_ppc("?bitmap_changed@@YAXPAUbitmap_data@@@Z");
//};

//void bitmap_delete(struct bitmap_data *)
//{
//    mangled_ppc("?bitmap_delete@@YAXPAUbitmap_data@@@Z");
//};

//void * bitmap_2d_address(struct bitmap_data const *, short, short, short)
//{
//    mangled_ppc("?bitmap_2d_address@@YAPAXPBUbitmap_data@@FFF@Z");
//};

//void * bitmap_3d_address(struct bitmap_data const *, short, short, short, short)
//{
//    mangled_ppc("?bitmap_3d_address@@YAPAXPBUbitmap_data@@FFFF@Z");
//};

//void * bitmap_cube_map_address(struct bitmap_data const *, short, short, short, short)
//{
//    mangled_ppc("?bitmap_cube_map_address@@YAPAXPBUbitmap_data@@FFFF@Z");
//};

//void * bitmap_mipmap_address(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_address@@YAPAXPBUbitmap_data@@F@Z");
//};

//unsigned long bitmap_format_to_a8r8g8b8(short, void const *, long, enum e_bitmap_curve, enum e_bitmap_curve)
//{
//    mangled_ppc("?bitmap_format_to_a8r8g8b8@@YAKFPBXJW4e_bitmap_curve@@1@Z");
//};

//public: void fRGBA::set(float, float, float, float)
//{
//    mangled_ppc("?set@fRGBA@@QAAXMMMM@Z");
//};

//public: unsigned long fRGBA::to_clamped_argb_32bit_with_curve(char) const
//{
//    mangled_ppc("?to_clamped_argb_32bit_with_curve@fRGBA@@QBAKD@Z");
//};

//public: struct fRGBA fRGBA::apply_curve(char) const
//{
//    mangled_ppc("?apply_curve@fRGBA@@QBA?AU1@D@Z");
//};

//public: fRGBA::fRGBA(float, float)
//{
//    mangled_ppc("??0fRGBA@@QAA@MM@Z");
//};

//public: void fRGBA::scale(struct fRGBA)
//{
//    mangled_ppc("?scale@fRGBA@@QAAXU1@@Z");
//};

//public: void fRGBA::add(struct fRGBA const &)
//{
//    mangled_ppc("?add@fRGBA@@QAAXABU1@@Z");
//};

//public: void fRGBA::abs_pow(struct fRGBA const &)
//{
//    mangled_ppc("?abs_pow@fRGBA@@QAAXABU1@@Z");
//};

//public: void fRGBA::log(void)
//{
//    mangled_ppc("?log@fRGBA@@QAAXXZ");
//};

//public: struct fRGBA fRGBA::times(float) const
//{
//    mangled_ppc("?times@fRGBA@@QBA?AU1@M@Z");
//};

//public: void fRGBA::from_argb_32bit_with_curve(unsigned long, char)
//{
//    mangled_ppc("?from_argb_32bit_with_curve@fRGBA@@QAAXKD@Z");
//};

//public: struct fRGBA fRGBA::remove_curve(char) const
//{
//    mangled_ppc("?remove_curve@fRGBA@@QBA?AU1@D@Z");
//};

//public: void fRGBA::exp(struct fRGBA const &)
//{
//    mangled_ppc("?exp@fRGBA@@QAAXABU1@@Z");
//};

//public: struct fRGBA fRGBA::abs(void) const
//{
//    mangled_ppc("?abs@fRGBA@@QBA?AU1@XZ");
//};

//public: struct fRGBA hRGBA::to_fRGBA(void) const
//{
//    mangled_ppc("?to_fRGBA@hRGBA@@QBA?AUfRGBA@@XZ");
//};

//unsigned long bitmap_2d_get_pixel(struct bitmap_data const *, union real_point2d const *, float)
//{
//    mangled_ppc("?bitmap_2d_get_pixel@@YAKPBUbitmap_data@@PBTreal_point2d@@M@Z");
//};

//unsigned long bitmap_get_pixel_internal(void const *, long, unsigned char *, short, short, short, short, short, unsigned short, enum e_bitmap_curve, enum e_bitmap_curve)
//{
//    mangled_ppc("?bitmap_get_pixel_internal@@YAKPBXJPAEFFFFFGW4e_bitmap_curve@@2@Z");
//};

//void bitmap_cube_map_get_vector(struct bitmap_data const *, long, long, long, union vector3d *)
//{
//    mangled_ppc("?bitmap_cube_map_get_vector@@YAXPBUbitmap_data@@JJJPATvector3d@@@Z");
//};

//unsigned long bitmap_cube_map_get_pixel(struct bitmap_data const *, union vector3d const *, float)
//{
//    mangled_ppc("?bitmap_cube_map_get_pixel@@YAKPBUbitmap_data@@PBTvector3d@@M@Z");
//};

//void bitmap_3d_slice_extract(struct bitmap_data const *, short, short, struct bitmap_data const *)
//{
//    mangled_ppc("?bitmap_3d_slice_extract@@YAXPBUbitmap_data@@FF0@Z");
//};

//void bitmap_3d_slice_insert(struct bitmap_data const *, struct bitmap_data const *, short, short)
//{
//    mangled_ppc("?bitmap_3d_slice_insert@@YAXPBUbitmap_data@@0FF@Z");
//};

//void bitmap_cube_map_face_extract(struct bitmap_data const *, short, short, struct bitmap_data const *)
//{
//    mangled_ppc("?bitmap_cube_map_face_extract@@YAXPBUbitmap_data@@FF0@Z");
//};

//void bitmap_cube_map_face_insert(struct bitmap_data const *, struct bitmap_data const *, short, short)
//{
//    mangled_ppc("?bitmap_cube_map_face_insert@@YAXPBUbitmap_data@@0FF@Z");
//};

//unsigned long bitmap_mipmap_calculate_dimension(unsigned long, unsigned long)
//{
//    mangled_ppc("?bitmap_mipmap_calculate_dimension@@YAKKK@Z");
//};

//unsigned long bitmap_mipmap_calculate_pixel_count(enum e_bitmap_type, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?bitmap_mipmap_calculate_pixel_count@@YAKW4e_bitmap_type@@KKKK@Z");
//};

//unsigned long bitmap_calculate_pixel_count(enum e_bitmap_type, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?bitmap_calculate_pixel_count@@YAKW4e_bitmap_type@@KKKKKK@Z");
//};

//long bitmap_get_pixel_count(struct bitmap_data const *)
//{
//    mangled_ppc("?bitmap_get_pixel_count@@YAJPBUbitmap_data@@@Z");
//};

//long bitmap_get_pixel_data_size(struct bitmap_data const *)
//{
//    mangled_ppc("?bitmap_get_pixel_data_size@@YAJPBUbitmap_data@@@Z");
//};

//short bitmap_mipmap_get_width(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_width@@YAFPBUbitmap_data@@F@Z");
//};

//short bitmap_mipmap_get_height(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_height@@YAFPBUbitmap_data@@F@Z");
//};

//short bitmap_mipmap_get_depth(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_depth@@YAFPBUbitmap_data@@F@Z");
//};

//long bitmap_mipmap_get_pixel_count(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_pixel_count@@YAJPBUbitmap_data@@F@Z");
//};

//long bitmap_mipmap_get_pixel_data_size(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_pixel_data_size@@YAJPBUbitmap_data@@F@Z");
//};

//long bitmap_mipmap_get_row_pitch(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_row_pitch@@YAJPBUbitmap_data@@F@Z");
//};

//long bitmap_mipmap_get_d3d_row_pitch(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_d3d_row_pitch@@YAJPBUbitmap_data@@F@Z");
//};

//long bitmap_mipmap_get_d3d_slice_pitch(struct bitmap_data const *, short)
//{
//    mangled_ppc("?bitmap_mipmap_get_d3d_slice_pitch@@YAJPBUbitmap_data@@F@Z");
//};

//long bitmap_size_get_mipmap_pixel_size(short, short, short, short, short, short)
//{
//    mangled_ppc("?bitmap_size_get_mipmap_pixel_size@@YAJFFFFFF@Z");
//};

//long bitmap_size_get_total_pixel_size(short, short, short, short, short, short)
//{
//    mangled_ppc("?bitmap_size_get_total_pixel_size@@YAJFFFFFF@Z");
//};

//bool bitmap_verify(struct bitmap_data const *, bool)
//{
//    mangled_ppc("?bitmap_verify@@YA_NPBUbitmap_data@@_N@Z");
//};

//bool bitmap_format_type_valid_width(short, short, short)
//{
//    mangled_ppc("?bitmap_format_type_valid_width@@YA_NFFF@Z");
//};

//bool bitmap_format_type_valid_height(short, short, short)
//{
//    mangled_ppc("?bitmap_format_type_valid_height@@YA_NFFF@Z");
//};

//bool bitmap_format_type_valid_depth(short, short, short)
//{
//    mangled_ppc("?bitmap_format_type_valid_depth@@YA_NFFF@Z");
//};

//char const * bitmap_cache_usage_get_string(enum e_bitmap_cache_usage)
//{
//    mangled_ppc("?bitmap_cache_usage_get_string@@YAPBDW4e_bitmap_cache_usage@@@Z");
//};

