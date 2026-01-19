/* ---------- headers */

#include "omaha\text\font_group.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const *const const s_font_header_bs_codes; // "?s_font_header_bs_codes@@3QBJB"
// long const *const const s_kerning_pair_bs_codes; // "?s_kerning_pair_bs_codes@@3QBJB"
// long const *const const s_font_package_entry_bs_codes; // "?s_font_package_entry_bs_codes@@3QBJB"
// long const *const const s_font_package_file_header_bs_codes; // "?s_font_package_file_header_bs_codes@@3QBJB"
// long const *const const s_font_package_bs_codes; // "?s_font_package_bs_codes@@3QBJB"
// long const *const const s_font_package_character_bs_codes; // "?s_font_package_character_bs_codes@@3QBJB"
// long const *const const s_font_character_bs_codes; // "?s_font_character_bs_codes@@3QBJB"

// void font_header_byteswap(struct s_font_header *);
// void font_kerning_pairs_byteswap(struct s_kerning_pair *, long);
// void font_package_entries_byteswap(struct s_font_package_entry *, long);
// void font_package_file_header_byteswap(struct s_font_package_file_header *);
// void font_package_header_byteswap(struct s_font_package *);
// void font_package_character_byteswap(struct s_font_package_character *);
// void font_character_byteswap(struct s_font_character *);
// long font_get_line_height(struct s_font_header const *);
// short font_get_kerning_pair_offset(struct s_font_header const *, unsigned long, unsigned long);
// long font_package_table_find_character(struct s_font_package_file_header const *, unsigned long);
// long package_table_search_function(void const *, void const *, void const *);
// struct s_font_character const * font_package_get_character(struct s_font_package const *, unsigned long);
// long character_table_search_function(void const *, void const *, void const *);
// long font_pack_character_pixels(long, unsigned short const *, long, void *);
// long font_unpack_character_pixels(long, void const *, long, unsigned short *);
// bool font_header_validate(struct s_font_header const *);
// bool font_character_validate(struct s_font_character const *);
// bool font_package_file_header_validate(struct s_font_package_file_header const *);
// bool font_package_header_validate(struct s_font_package const *);
// bool font_package_character_validate(struct s_font_package const *, struct s_font_package_character const *);
// unsigned char encode_pixel(unsigned short);
// unsigned short decode_pixel(unsigned short, unsigned char);
// long get_run_length(unsigned short, unsigned short const *, long, bool);

//void font_header_byteswap(struct s_font_header *)
//{
//    mangled_ppc("?font_header_byteswap@@YAXPAUs_font_header@@@Z");
//};

//void font_kerning_pairs_byteswap(struct s_kerning_pair *, long)
//{
//    mangled_ppc("?font_kerning_pairs_byteswap@@YAXPAUs_kerning_pair@@J@Z");
//};

//void font_package_entries_byteswap(struct s_font_package_entry *, long)
//{
//    mangled_ppc("?font_package_entries_byteswap@@YAXPAUs_font_package_entry@@J@Z");
//};

//void font_package_file_header_byteswap(struct s_font_package_file_header *)
//{
//    mangled_ppc("?font_package_file_header_byteswap@@YAXPAUs_font_package_file_header@@@Z");
//};

//void font_package_header_byteswap(struct s_font_package *)
//{
//    mangled_ppc("?font_package_header_byteswap@@YAXPAUs_font_package@@@Z");
//};

//void font_package_character_byteswap(struct s_font_package_character *)
//{
//    mangled_ppc("?font_package_character_byteswap@@YAXPAUs_font_package_character@@@Z");
//};

//void font_character_byteswap(struct s_font_character *)
//{
//    mangled_ppc("?font_character_byteswap@@YAXPAUs_font_character@@@Z");
//};

//long font_get_line_height(struct s_font_header const *)
//{
//    mangled_ppc("?font_get_line_height@@YAJPBUs_font_header@@@Z");
//};

//short font_get_kerning_pair_offset(struct s_font_header const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?font_get_kerning_pair_offset@@YAFPBUs_font_header@@KK@Z");
//};

//long font_package_table_find_character(struct s_font_package_file_header const *, unsigned long)
//{
//    mangled_ppc("?font_package_table_find_character@@YAJPBUs_font_package_file_header@@K@Z");
//};

//long package_table_search_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?package_table_search_function@@YAJPBX00@Z");
//};

//struct s_font_character const * font_package_get_character(struct s_font_package const *, unsigned long)
//{
//    mangled_ppc("?font_package_get_character@@YAPBUs_font_character@@PBUs_font_package@@K@Z");
//};

//long character_table_search_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?character_table_search_function@@YAJPBX00@Z");
//};

//long font_pack_character_pixels(long, unsigned short const *, long, void *)
//{
//    mangled_ppc("?font_pack_character_pixels@@YAJJPBGJPAX@Z");
//};

//long font_unpack_character_pixels(long, void const *, long, unsigned short *)
//{
//    mangled_ppc("?font_unpack_character_pixels@@YAJJPBXJPAG@Z");
//};

//bool font_header_validate(struct s_font_header const *)
//{
//    mangled_ppc("?font_header_validate@@YA_NPBUs_font_header@@@Z");
//};

//bool font_character_validate(struct s_font_character const *)
//{
//    mangled_ppc("?font_character_validate@@YA_NPBUs_font_character@@@Z");
//};

//bool font_package_file_header_validate(struct s_font_package_file_header const *)
//{
//    mangled_ppc("?font_package_file_header_validate@@YA_NPBUs_font_package_file_header@@@Z");
//};

//bool font_package_header_validate(struct s_font_package const *)
//{
//    mangled_ppc("?font_package_header_validate@@YA_NPBUs_font_package@@@Z");
//};

//bool font_package_character_validate(struct s_font_package const *, struct s_font_package_character const *)
//{
//    mangled_ppc("?font_package_character_validate@@YA_NPBUs_font_package@@PBUs_font_package_character@@@Z");
//};

//unsigned char encode_pixel(unsigned short)
//{
//    mangled_ppc("?encode_pixel@@YAEG@Z");
//};

//unsigned short decode_pixel(unsigned short, unsigned char)
//{
//    mangled_ppc("?decode_pixel@@YAGGE@Z");
//};

//long get_run_length(unsigned short, unsigned short const *, long, bool)
//{
//    mangled_ppc("?get_run_length@@YAJGPBGJ_N@Z");
//};

