/* ---------- headers */

#include "omaha\math\integer_math.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// short *direction_delta_x; // "?direction_delta_x@@3PAFA"
// short *direction_delta_y; // "?direction_delta_y@@3PAFA"
// short *reversed_directions; // "?reversed_directions@@3PAFA"
// union int16_point2d *global_integer_origin2d; // "?global_integer_origin2d@@3PATint16_point2d@@A"

// union short_rectangle2d * set_rectangle2d(union short_rectangle2d *, short, short, short, short);
// union int16_point2d * set_point2d(union int16_point2d *, short, short);
// union int16_point2d * offset_point2d(union int16_point2d *, short, short);
// short rectangle2d_width(union short_rectangle2d const *);
// short rectangle2d_height(union short_rectangle2d const *);
// union short_rectangle2d * scale_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *, short);
// long short_fixed_to_long(short);
// union short_rectangle2d * inset_rectangle2d(union short_rectangle2d *, short, short);
// union short_rectangle2d * offset_rectangle2d(union short_rectangle2d *, short, short);
// union short_rectangle2d * adjust_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *, short);
// union short_rectangle2d * center_rectangle2d_horizontal(union short_rectangle2d *, union short_rectangle2d const *);
// union short_rectangle2d * center_rectangle2d_vertical(union short_rectangle2d *, union short_rectangle2d const *);
// union short_rectangle2d * center_rectangle2d(union short_rectangle2d *, union short_rectangle2d const *);
// bool intersect_rectangles2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *);
// union short_rectangle2d * rectangle2d_hull_from_rectangles2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *);
// bool point2d_in_rectangle2d(union short_rectangle2d const *, union int16_point2d const *);
// bool interior_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *);
// bool equal_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *);
// bool equal_point2d(union int16_point2d const *, union int16_point2d const *);
// bool is_power_of_2(unsigned long);
// short floor_log2(unsigned long);
// short ceiling_log2(unsigned long);
// unsigned long floor_power2(unsigned long);
// unsigned long ceiling_power2(unsigned long);
// unsigned long integer_square_root(unsigned long);
// bool bit_vector_and(long, unsigned long const *, unsigned long const *, unsigned long *);
// void bit_vector_or(long, unsigned long const *, unsigned long const *, unsigned long *);
// void bit_vector_not_and(long, unsigned long const *, unsigned long const *, unsigned long *);
// void bit_vector_not(long, unsigned long const *, unsigned long *);
// long bit_vector_count_bits(unsigned long const *, long);
// long bit_vector_lowest_bit_set(unsigned long const *, long);
// long bit_vector_highest_bit_set(unsigned long const *, long);
// void bit_vector_set_range_to_true(long, unsigned long *, long, long);
// public: c_bit_range::c_bit_range(long, long, long);
// public: long c_bit_range::get_first_long_index(void) const;
// public: long c_bit_range::get_first_long_bit_index(void) const;
// public: long c_bit_range::get_one_past_last_long_index(void) const;
// public: long c_bit_range::get_one_past_last_long_bit_index(void) const;
// void bit_vector_set_range_to_false(long, unsigned long *, long, long);
// long required_encoding_bits_for_count(long);
// long required_encoding_bits_for_max_value(long);

//union short_rectangle2d * set_rectangle2d(union short_rectangle2d *, short, short, short, short)
//{
//    mangled_ppc("?set_rectangle2d@@YAPATshort_rectangle2d@@PAT1@FFFF@Z");
//};

//union int16_point2d * set_point2d(union int16_point2d *, short, short)
//{
//    mangled_ppc("?set_point2d@@YAPATint16_point2d@@PAT1@FF@Z");
//};

//union int16_point2d * offset_point2d(union int16_point2d *, short, short)
//{
//    mangled_ppc("?offset_point2d@@YAPATint16_point2d@@PAT1@FF@Z");
//};

//short rectangle2d_width(union short_rectangle2d const *)
//{
//    mangled_ppc("?rectangle2d_width@@YAFPBTshort_rectangle2d@@@Z");
//};

//short rectangle2d_height(union short_rectangle2d const *)
//{
//    mangled_ppc("?rectangle2d_height@@YAFPBTshort_rectangle2d@@@Z");
//};

//union short_rectangle2d * scale_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *, short)
//{
//    mangled_ppc("?scale_rectangle2d@@YAPATshort_rectangle2d@@PBT1@0PAT1@F@Z");
//};

//long short_fixed_to_long(short)
//{
//    mangled_ppc("?short_fixed_to_long@@YAJF@Z");
//};

//union short_rectangle2d * inset_rectangle2d(union short_rectangle2d *, short, short)
//{
//    mangled_ppc("?inset_rectangle2d@@YAPATshort_rectangle2d@@PAT1@FF@Z");
//};

//union short_rectangle2d * offset_rectangle2d(union short_rectangle2d *, short, short)
//{
//    mangled_ppc("?offset_rectangle2d@@YAPATshort_rectangle2d@@PAT1@FF@Z");
//};

//union short_rectangle2d * adjust_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *, short)
//{
//    mangled_ppc("?adjust_rectangle2d@@YAPATshort_rectangle2d@@PBT1@0PAT1@F@Z");
//};

//union short_rectangle2d * center_rectangle2d_horizontal(union short_rectangle2d *, union short_rectangle2d const *)
//{
//    mangled_ppc("?center_rectangle2d_horizontal@@YAPATshort_rectangle2d@@PAT1@PBT1@@Z");
//};

//union short_rectangle2d * center_rectangle2d_vertical(union short_rectangle2d *, union short_rectangle2d const *)
//{
//    mangled_ppc("?center_rectangle2d_vertical@@YAPATshort_rectangle2d@@PAT1@PBT1@@Z");
//};

//union short_rectangle2d * center_rectangle2d(union short_rectangle2d *, union short_rectangle2d const *)
//{
//    mangled_ppc("?center_rectangle2d@@YAPATshort_rectangle2d@@PAT1@PBT1@@Z");
//};

//bool intersect_rectangles2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *)
//{
//    mangled_ppc("?intersect_rectangles2d@@YA_NPBTshort_rectangle2d@@0PAT1@@Z");
//};

//union short_rectangle2d * rectangle2d_hull_from_rectangles2d(union short_rectangle2d const *, union short_rectangle2d const *, union short_rectangle2d *)
//{
//    mangled_ppc("?rectangle2d_hull_from_rectangles2d@@YAPATshort_rectangle2d@@PBT1@0PAT1@@Z");
//};

//bool point2d_in_rectangle2d(union short_rectangle2d const *, union int16_point2d const *)
//{
//    mangled_ppc("?point2d_in_rectangle2d@@YA_NPBTshort_rectangle2d@@PBTint16_point2d@@@Z");
//};

//bool interior_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *)
//{
//    mangled_ppc("?interior_rectangle2d@@YA_NPBTshort_rectangle2d@@0@Z");
//};

//bool equal_rectangle2d(union short_rectangle2d const *, union short_rectangle2d const *)
//{
//    mangled_ppc("?equal_rectangle2d@@YA_NPBTshort_rectangle2d@@0@Z");
//};

//bool equal_point2d(union int16_point2d const *, union int16_point2d const *)
//{
//    mangled_ppc("?equal_point2d@@YA_NPBTint16_point2d@@0@Z");
//};

//bool is_power_of_2(unsigned long)
//{
//    mangled_ppc("?is_power_of_2@@YA_NK@Z");
//};

//short floor_log2(unsigned long)
//{
//    mangled_ppc("?floor_log2@@YAFK@Z");
//};

//short ceiling_log2(unsigned long)
//{
//    mangled_ppc("?ceiling_log2@@YAFK@Z");
//};

//unsigned long floor_power2(unsigned long)
//{
//    mangled_ppc("?floor_power2@@YAKK@Z");
//};

//unsigned long ceiling_power2(unsigned long)
//{
//    mangled_ppc("?ceiling_power2@@YAKK@Z");
//};

//unsigned long integer_square_root(unsigned long)
//{
//    mangled_ppc("?integer_square_root@@YAKK@Z");
//};

//bool bit_vector_and(long, unsigned long const *, unsigned long const *, unsigned long *)
//{
//    mangled_ppc("?bit_vector_and@@YA_NJPBK0PAK@Z");
//};

//void bit_vector_or(long, unsigned long const *, unsigned long const *, unsigned long *)
//{
//    mangled_ppc("?bit_vector_or@@YAXJPBK0PAK@Z");
//};

//void bit_vector_not_and(long, unsigned long const *, unsigned long const *, unsigned long *)
//{
//    mangled_ppc("?bit_vector_not_and@@YAXJPBK0PAK@Z");
//};

//void bit_vector_not(long, unsigned long const *, unsigned long *)
//{
//    mangled_ppc("?bit_vector_not@@YAXJPBKPAK@Z");
//};

//long bit_vector_count_bits(unsigned long const *, long)
//{
//    mangled_ppc("?bit_vector_count_bits@@YAJPBKJ@Z");
//};

//long bit_vector_lowest_bit_set(unsigned long const *, long)
//{
//    mangled_ppc("?bit_vector_lowest_bit_set@@YAJPBKJ@Z");
//};

//long bit_vector_highest_bit_set(unsigned long const *, long)
//{
//    mangled_ppc("?bit_vector_highest_bit_set@@YAJPBKJ@Z");
//};

//void bit_vector_set_range_to_true(long, unsigned long *, long, long)
//{
//    mangled_ppc("?bit_vector_set_range_to_true@@YAXJPAKJJ@Z");
//};

//public: c_bit_range::c_bit_range(long, long, long)
//{
//    mangled_ppc("??0c_bit_range@@QAA@JJJ@Z");
//};

//public: long c_bit_range::get_first_long_index(void) const
//{
//    mangled_ppc("?get_first_long_index@c_bit_range@@QBAJXZ");
//};

//public: long c_bit_range::get_first_long_bit_index(void) const
//{
//    mangled_ppc("?get_first_long_bit_index@c_bit_range@@QBAJXZ");
//};

//public: long c_bit_range::get_one_past_last_long_index(void) const
//{
//    mangled_ppc("?get_one_past_last_long_index@c_bit_range@@QBAJXZ");
//};

//public: long c_bit_range::get_one_past_last_long_bit_index(void) const
//{
//    mangled_ppc("?get_one_past_last_long_bit_index@c_bit_range@@QBAJXZ");
//};

//void bit_vector_set_range_to_false(long, unsigned long *, long, long)
//{
//    mangled_ppc("?bit_vector_set_range_to_false@@YAXJPAKJJ@Z");
//};

//long required_encoding_bits_for_count(long)
//{
//    mangled_ppc("?required_encoding_bits_for_count@@YAJJ@Z");
//};

//long required_encoding_bits_for_max_value(long)
//{
//    mangled_ppc("?required_encoding_bits_for_max_value@@YAJJ@Z");
//};

