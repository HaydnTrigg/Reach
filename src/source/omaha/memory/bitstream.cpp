/* ---------- headers */

#include "omaha\memory\bitstream.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static bool const *const c_bitstream::m_debug_print_errors; // "?m_debug_print_errors@c_bitstream@@0PB_NB"

// public: bool c_bitstream::would_overflow(long) const;
// public: bool c_bitstream::error_occurred(void) const;
// public: unsigned char const * c_bitstream::get_data(long *) const;
// public: void c_bitstream::set_data(unsigned char *, long);
// public: void c_bitstream::pop_position(bool);
// public: void c_bitstream::write_identifier(char const *);
// public: void c_bitstream::read_identifier(char const *);
// public: void c_bitstream::writing_potential_bits(long);
// public: void c_bitstream::writing_potential_bits(long, long);
// public: void c_bitstream::writing_potential_bytes(long);
// public: void c_bitstream::writing_potential_bytes(long, long);
// public: void c_bitstream::begin_writing(long);
// public: void c_bitstream::begin_reading(void);
// public: bool c_bitstream::begin_consistency_check(void);
// public: void c_bitstream::finish_writing(long *);
// public: void c_bitstream::finish_reading(void);
// public: void c_bitstream::finish_consistency_check(void);
// public: void c_bitstream::data_is_untrusted(bool);
// public: void c_bitstream::discard_remaining_data(void);
// public: bool c_bitstream::is_alphanumeric(wchar_t);
// public: bool c_bitstream::is_alphanumeric(wchar_t const *, long);
// public: void c_bitstream::write_point3d(char const *, union int32_point3d const *, long);
// public: void c_bitstream::write_point3d_efficient(char const *, union int32_point3d const *, union int32_point3d const *);
// public: void c_bitstream::write_string(char const *, char const *, long);
// public: void c_bitstream::write_string_utf8(char const *, struct utf8const *, long);
// public: void c_bitstream::write_string_wchar(char const *, wchar_t const *, long);
// public: void c_bitstream::write_string_alphanumeric(char const *, wchar_t const *, long);
// public: void c_bitstream::write_string_id(char const *, long);
// public: static void c_bitstream::axes_compute_reference_internal(union vector3d const *, union vector3d *, union vector3d *);
// public: static float c_bitstream::axes_to_angle_internal(union vector3d const *, union vector3d const *);
// public: static void c_bitstream::angle_to_axes_internal(union vector3d const *, float, union vector3d *);
// public: void c_bitstream::write_quantized_real(char const *, float, float, float, long, bool, bool);
// public: void c_bitstream::write_logarithmic_quantized_real(char const *, float, float, float, long);
// public: void c_bitstream::write_unit_vector(char const *, union vector3d const *, long);
// public: void c_bitstream::write_vector(char const *, union vector3d const *, float, float, long, long);
// public: void c_bitstream::write_secure_address(char const *, struct s_transport_secure_address const *);
// public: void c_bitstream::read_point3d(char const *, union int32_point3d *, long);
// public: void c_bitstream::read_point3d_efficient(char const *, union int32_point3d *, union int32_point3d const *);
// public: void c_bitstream::read_string(char const *, char *, long);
// public: void c_bitstream::read_string_utf8(char const *, struct utf8*, long);
// public: void c_bitstream::read_string_wchar(char const *, wchar_t *, long);
// public: void c_bitstream::read_string_alphanumeric(char const *, wchar_t *, long);
// public: void c_bitstream::read_string_id(char const *, long *);
// public: float c_bitstream::read_quantized_real(char const *, float, float, long, bool, bool);
// public: float c_bitstream::read_logarithmic_quantized_real(char const *, float, float, long);
// public: void c_bitstream::read_unit_vector(char const *, union vector3d *, long);
// public: void c_bitstream::read_vector(char const *, union vector3d *, float, float, long, long);
// public: void c_bitstream::read_secure_address(char const *, struct s_transport_secure_address *);
// public: static bool c_bitstream::compare_quantized_reals(float, float, float, float, long, bool, bool, bool);
// public: static bool c_bitstream::compare_logarithmic_quantized_reals(float, float, float, float, long);
// public: static bool c_bitstream::compare_vectors(union vector3d const *, union vector3d const *, float, float, long, long);
// public: static bool c_bitstream::compare_unit_vectors(union vector3d const *, union vector3d const *, long);
// public: static bool c_bitstream::compare_axes(long, long, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// public: static void c_bitstream::set_debug_parameters(bool const *);
// private: void c_bitstream::reset(long);
// private: void c_bitstream::write_bits_internal(unsigned char const *, long, enum c_bitstream::e_should_verify_trailing_bits_are_zeroes);
// private: void c_bitstream::read_bits_internal(unsigned char *, long);
// public: void c_bitstream::append(class c_bitstream const *);
// public: long c_bitstream::get_current_stream_bit_position(void) const;
// public: void c_bitstream::skip(long);
// private: void c_bitstream::push_structure_internal(char const *, long, unsigned long, enum c_bitstream::e_bitstream_value_type);
// private: void c_bitstream::pop_structure_internal(char const *, long, enum c_bitstream::e_bitstream_value_type);
// private: void c_bitstream::assume_next_structure_is_correct(void);
// public: void c_bitstream::dump_structure(void);
// private: void c_bitstream::append_structure_descriptions(class c_bitstream const *);
// private: static char const * c_bitstream::value_type_to_string(enum c_bitstream::e_bitstream_value_type);
// private: static unsigned long c_bitstream::convert_string_to_tag(char const *);
// private: void c_bitstream::generate_read_error(char const *, ...);
// private: unsigned __int64 c_bitstream::decode_qword_from_memory(void);
// private: void c_bitstream::encode_qword_to_memory(unsigned __int64, long);
// private: void c_bitstream::write_accumulator_to_memory(unsigned __int64, long);
// private: void c_bitstream::write_qword_internal(unsigned __int64, long);
// private: bool c_bitstream::read_bit_internal(void);
// private: unsigned __int64 c_bitstream::read_accumulator_from_memory(long);
// private: unsigned long c_bitstream::read_dword_internal(long);
// private: unsigned __int64 c_bitstream::read_qword_internal(long);
// void bitstream_test(void);
// long left_shift_fast<long>(long, long);
// unsigned __int64 left_shift_fast<unsigned __int64>(unsigned __int64, long);
// int left_shift_fast<int>(int, long);
// unsigned char right_shift_fast<unsigned char>(unsigned char, long);
// unsigned __int64 right_shift_fast<unsigned __int64>(unsigned __int64, long);
// unsigned __int64 left_shift_safe<unsigned __int64>(unsigned __int64, long);
// long quantize_real_logarithmic(float, float, float, long);
// float dequantize_real_logarithmic(long, float, float, long);

//public: bool c_bitstream::would_overflow(long) const
//{
//    mangled_ppc("?would_overflow@c_bitstream@@QBA_NJ@Z");
//};

//public: bool c_bitstream::error_occurred(void) const
//{
//    mangled_ppc("?error_occurred@c_bitstream@@QBA_NXZ");
//};

//public: unsigned char const * c_bitstream::get_data(long *) const
//{
//    mangled_ppc("?get_data@c_bitstream@@QBAPBEPAJ@Z");
//};

//public: void c_bitstream::set_data(unsigned char *, long)
//{
//    mangled_ppc("?set_data@c_bitstream@@QAAXPAEJ@Z");
//};

//public: void c_bitstream::pop_position(bool)
//{
//    mangled_ppc("?pop_position@c_bitstream@@QAAX_N@Z");
//};

//public: void c_bitstream::write_identifier(char const *)
//{
//    mangled_ppc("?write_identifier@c_bitstream@@QAAXPBD@Z");
//};

//public: void c_bitstream::read_identifier(char const *)
//{
//    mangled_ppc("?read_identifier@c_bitstream@@QAAXPBD@Z");
//};

//public: void c_bitstream::writing_potential_bits(long)
//{
//    mangled_ppc("?writing_potential_bits@c_bitstream@@QAAXJ@Z");
//};

//public: void c_bitstream::writing_potential_bits(long, long)
//{
//    mangled_ppc("?writing_potential_bits@c_bitstream@@QAAXJJ@Z");
//};

//public: void c_bitstream::writing_potential_bytes(long)
//{
//    mangled_ppc("?writing_potential_bytes@c_bitstream@@QAAXJ@Z");
//};

//public: void c_bitstream::writing_potential_bytes(long, long)
//{
//    mangled_ppc("?writing_potential_bytes@c_bitstream@@QAAXJJ@Z");
//};

//public: void c_bitstream::begin_writing(long)
//{
//    mangled_ppc("?begin_writing@c_bitstream@@QAAXJ@Z");
//};

//public: void c_bitstream::begin_reading(void)
//{
//    mangled_ppc("?begin_reading@c_bitstream@@QAAXXZ");
//};

//public: bool c_bitstream::begin_consistency_check(void)
//{
//    mangled_ppc("?begin_consistency_check@c_bitstream@@QAA_NXZ");
//};

//public: void c_bitstream::finish_writing(long *)
//{
//    mangled_ppc("?finish_writing@c_bitstream@@QAAXPAJ@Z");
//};

//public: void c_bitstream::finish_reading(void)
//{
//    mangled_ppc("?finish_reading@c_bitstream@@QAAXXZ");
//};

//public: void c_bitstream::finish_consistency_check(void)
//{
//    mangled_ppc("?finish_consistency_check@c_bitstream@@QAAXXZ");
//};

//public: void c_bitstream::data_is_untrusted(bool)
//{
//    mangled_ppc("?data_is_untrusted@c_bitstream@@QAAX_N@Z");
//};

//public: void c_bitstream::discard_remaining_data(void)
//{
//    mangled_ppc("?discard_remaining_data@c_bitstream@@QAAXXZ");
//};

//public: bool c_bitstream::is_alphanumeric(wchar_t)
//{
//    mangled_ppc("?is_alphanumeric@c_bitstream@@QAA_N_W@Z");
//};

//public: bool c_bitstream::is_alphanumeric(wchar_t const *, long)
//{
//    mangled_ppc("?is_alphanumeric@c_bitstream@@QAA_NPB_WJ@Z");
//};

//public: void c_bitstream::write_point3d(char const *, union int32_point3d const *, long)
//{
//    mangled_ppc("?write_point3d@c_bitstream@@QAAXPBDPBTint32_point3d@@J@Z");
//};

//public: void c_bitstream::write_point3d_efficient(char const *, union int32_point3d const *, union int32_point3d const *)
//{
//    mangled_ppc("?write_point3d_efficient@c_bitstream@@QAAXPBDPBTint32_point3d@@1@Z");
//};

//public: void c_bitstream::write_string(char const *, char const *, long)
//{
//    mangled_ppc("?write_string@c_bitstream@@QAAXPBD0J@Z");
//};

//public: void c_bitstream::write_string_utf8(char const *, struct utf8const *, long)
//{
//    mangled_ppc("?write_string_utf8@c_bitstream@@QAAXPBDPBUutf8@@J@Z");
//};

//public: void c_bitstream::write_string_wchar(char const *, wchar_t const *, long)
//{
//    mangled_ppc("?write_string_wchar@c_bitstream@@QAAXPBDPB_WJ@Z");
//};

//public: void c_bitstream::write_string_alphanumeric(char const *, wchar_t const *, long)
//{
//    mangled_ppc("?write_string_alphanumeric@c_bitstream@@QAAXPBDPB_WJ@Z");
//};

//public: void c_bitstream::write_string_id(char const *, long)
//{
//    mangled_ppc("?write_string_id@c_bitstream@@QAAXPBDJ@Z");
//};

//public: static void c_bitstream::axes_compute_reference_internal(union vector3d const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?axes_compute_reference_internal@c_bitstream@@SAXPBTvector3d@@PAT2@1@Z");
//};

//public: static float c_bitstream::axes_to_angle_internal(union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?axes_to_angle_internal@c_bitstream@@SAMPBTvector3d@@0@Z");
//};

//public: static void c_bitstream::angle_to_axes_internal(union vector3d const *, float, union vector3d *)
//{
//    mangled_ppc("?angle_to_axes_internal@c_bitstream@@SAXPBTvector3d@@MPAT2@@Z");
//};

//public: void c_bitstream::write_quantized_real(char const *, float, float, float, long, bool, bool)
//{
//    mangled_ppc("?write_quantized_real@c_bitstream@@QAAXPBDMMMJ_N1@Z");
//};

//public: void c_bitstream::write_logarithmic_quantized_real(char const *, float, float, float, long)
//{
//    mangled_ppc("?write_logarithmic_quantized_real@c_bitstream@@QAAXPBDMMMJ@Z");
//};

//public: void c_bitstream::write_unit_vector(char const *, union vector3d const *, long)
//{
//    mangled_ppc("?write_unit_vector@c_bitstream@@QAAXPBDPBTvector3d@@J@Z");
//};

//public: void c_bitstream::write_vector(char const *, union vector3d const *, float, float, long, long)
//{
//    mangled_ppc("?write_vector@c_bitstream@@QAAXPBDPBTvector3d@@MMJJ@Z");
//};

//public: void c_bitstream::write_secure_address(char const *, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?write_secure_address@c_bitstream@@QAAXPBDPBUs_transport_secure_address@@@Z");
//};

//public: void c_bitstream::read_point3d(char const *, union int32_point3d *, long)
//{
//    mangled_ppc("?read_point3d@c_bitstream@@QAAXPBDPATint32_point3d@@J@Z");
//};

//public: void c_bitstream::read_point3d_efficient(char const *, union int32_point3d *, union int32_point3d const *)
//{
//    mangled_ppc("?read_point3d_efficient@c_bitstream@@QAAXPBDPATint32_point3d@@PBT2@@Z");
//};

//public: void c_bitstream::read_string(char const *, char *, long)
//{
//    mangled_ppc("?read_string@c_bitstream@@QAAXPBDPADJ@Z");
//};

//public: void c_bitstream::read_string_utf8(char const *, struct utf8*, long)
//{
//    mangled_ppc("?read_string_utf8@c_bitstream@@QAAXPBDPAUutf8@@J@Z");
//};

//public: void c_bitstream::read_string_wchar(char const *, wchar_t *, long)
//{
//    mangled_ppc("?read_string_wchar@c_bitstream@@QAAXPBDPA_WJ@Z");
//};

//public: void c_bitstream::read_string_alphanumeric(char const *, wchar_t *, long)
//{
//    mangled_ppc("?read_string_alphanumeric@c_bitstream@@QAAXPBDPA_WJ@Z");
//};

//public: void c_bitstream::read_string_id(char const *, long *)
//{
//    mangled_ppc("?read_string_id@c_bitstream@@QAAXPBDPAJ@Z");
//};

//public: float c_bitstream::read_quantized_real(char const *, float, float, long, bool, bool)
//{
//    mangled_ppc("?read_quantized_real@c_bitstream@@QAAMPBDMMJ_N1@Z");
//};

//public: float c_bitstream::read_logarithmic_quantized_real(char const *, float, float, long)
//{
//    mangled_ppc("?read_logarithmic_quantized_real@c_bitstream@@QAAMPBDMMJ@Z");
//};

//public: void c_bitstream::read_unit_vector(char const *, union vector3d *, long)
//{
//    mangled_ppc("?read_unit_vector@c_bitstream@@QAAXPBDPATvector3d@@J@Z");
//};

//public: void c_bitstream::read_vector(char const *, union vector3d *, float, float, long, long)
//{
//    mangled_ppc("?read_vector@c_bitstream@@QAAXPBDPATvector3d@@MMJJ@Z");
//};

//public: void c_bitstream::read_secure_address(char const *, struct s_transport_secure_address *)
//{
//    mangled_ppc("?read_secure_address@c_bitstream@@QAAXPBDPAUs_transport_secure_address@@@Z");
//};

//public: static bool c_bitstream::compare_quantized_reals(float, float, float, float, long, bool, bool, bool)
//{
//    mangled_ppc("?compare_quantized_reals@c_bitstream@@SA_NMMMMJ_N00@Z");
//};

//public: static bool c_bitstream::compare_logarithmic_quantized_reals(float, float, float, float, long)
//{
//    mangled_ppc("?compare_logarithmic_quantized_reals@c_bitstream@@SA_NMMMMJ@Z");
//};

//public: static bool c_bitstream::compare_vectors(union vector3d const *, union vector3d const *, float, float, long, long)
//{
//    mangled_ppc("?compare_vectors@c_bitstream@@SA_NPBTvector3d@@0MMJJ@Z");
//};

//public: static bool c_bitstream::compare_unit_vectors(union vector3d const *, union vector3d const *, long)
//{
//    mangled_ppc("?compare_unit_vectors@c_bitstream@@SA_NPBTvector3d@@0J@Z");
//};

//public: static bool c_bitstream::compare_axes(long, long, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?compare_axes@c_bitstream@@SA_NJJPBTvector3d@@000@Z");
//};

//public: static void c_bitstream::set_debug_parameters(bool const *)
//{
//    mangled_ppc("?set_debug_parameters@c_bitstream@@SAXPB_N@Z");
//};

//private: void c_bitstream::reset(long)
//{
//    mangled_ppc("?reset@c_bitstream@@AAAXJ@Z");
//};

//private: void c_bitstream::write_bits_internal(unsigned char const *, long, enum c_bitstream::e_should_verify_trailing_bits_are_zeroes)
//{
//    mangled_ppc("?write_bits_internal@c_bitstream@@AAAXPBEJW4e_should_verify_trailing_bits_are_zeroes@1@@Z");
//};

//private: void c_bitstream::read_bits_internal(unsigned char *, long)
//{
//    mangled_ppc("?read_bits_internal@c_bitstream@@AAAXPAEJ@Z");
//};

//public: void c_bitstream::append(class c_bitstream const *)
//{
//    mangled_ppc("?append@c_bitstream@@QAAXPBV1@@Z");
//};

//public: long c_bitstream::get_current_stream_bit_position(void) const
//{
//    mangled_ppc("?get_current_stream_bit_position@c_bitstream@@QBAJXZ");
//};

//public: void c_bitstream::skip(long)
//{
//    mangled_ppc("?skip@c_bitstream@@QAAXJ@Z");
//};

//private: void c_bitstream::push_structure_internal(char const *, long, unsigned long, enum c_bitstream::e_bitstream_value_type)
//{
//    mangled_ppc("?push_structure_internal@c_bitstream@@AAAXPBDJKW4e_bitstream_value_type@1@@Z");
//};

//private: void c_bitstream::pop_structure_internal(char const *, long, enum c_bitstream::e_bitstream_value_type)
//{
//    mangled_ppc("?pop_structure_internal@c_bitstream@@AAAXPBDJW4e_bitstream_value_type@1@@Z");
//};

//private: void c_bitstream::assume_next_structure_is_correct(void)
//{
//    mangled_ppc("?assume_next_structure_is_correct@c_bitstream@@AAAXXZ");
//};

//public: void c_bitstream::dump_structure(void)
//{
//    mangled_ppc("?dump_structure@c_bitstream@@QAAXXZ");
//};

//private: void c_bitstream::append_structure_descriptions(class c_bitstream const *)
//{
//    mangled_ppc("?append_structure_descriptions@c_bitstream@@AAAXPBV1@@Z");
//};

//private: static char const * c_bitstream::value_type_to_string(enum c_bitstream::e_bitstream_value_type)
//{
//    mangled_ppc("?value_type_to_string@c_bitstream@@CAPBDW4e_bitstream_value_type@1@@Z");
//};

//private: static unsigned long c_bitstream::convert_string_to_tag(char const *)
//{
//    mangled_ppc("?convert_string_to_tag@c_bitstream@@CAKPBD@Z");
//};

//private: void c_bitstream::generate_read_error(char const *, ...)
//{
//    mangled_ppc("?generate_read_error@c_bitstream@@AAAXPBDZZ");
//};

//private: unsigned __int64 c_bitstream::decode_qword_from_memory(void)
//{
//    mangled_ppc("?decode_qword_from_memory@c_bitstream@@AAA_KXZ");
//};

//private: void c_bitstream::encode_qword_to_memory(unsigned __int64, long)
//{
//    mangled_ppc("?encode_qword_to_memory@c_bitstream@@AAAX_KJ@Z");
//};

//private: void c_bitstream::write_accumulator_to_memory(unsigned __int64, long)
//{
//    mangled_ppc("?write_accumulator_to_memory@c_bitstream@@AAAX_KJ@Z");
//};

//private: void c_bitstream::write_qword_internal(unsigned __int64, long)
//{
//    mangled_ppc("?write_qword_internal@c_bitstream@@AAAX_KJ@Z");
//};

//private: bool c_bitstream::read_bit_internal(void)
//{
//    mangled_ppc("?read_bit_internal@c_bitstream@@AAA_NXZ");
//};

//private: unsigned __int64 c_bitstream::read_accumulator_from_memory(long)
//{
//    mangled_ppc("?read_accumulator_from_memory@c_bitstream@@AAA_KJ@Z");
//};

//private: unsigned long c_bitstream::read_dword_internal(long)
//{
//    mangled_ppc("?read_dword_internal@c_bitstream@@AAAKJ@Z");
//};

//private: unsigned __int64 c_bitstream::read_qword_internal(long)
//{
//    mangled_ppc("?read_qword_internal@c_bitstream@@AAA_KJ@Z");
//};

//void bitstream_test(void)
//{
//    mangled_ppc("?bitstream_test@@YAXXZ");
//};

//long left_shift_fast<long>(long, long)
//{
//    mangled_ppc("??$left_shift_fast@J@@YAJJJ@Z");
//};

//unsigned __int64 left_shift_fast<unsigned __int64>(unsigned __int64, long)
//{
//    mangled_ppc("??$left_shift_fast@_K@@YA_K_KJ@Z");
//};

//int left_shift_fast<int>(int, long)
//{
//    mangled_ppc("??$left_shift_fast@H@@YAHHJ@Z");
//};

//unsigned char right_shift_fast<unsigned char>(unsigned char, long)
//{
//    mangled_ppc("??$right_shift_fast@E@@YAEEJ@Z");
//};

//unsigned __int64 right_shift_fast<unsigned __int64>(unsigned __int64, long)
//{
//    mangled_ppc("??$right_shift_fast@_K@@YA_K_KJ@Z");
//};

//unsigned __int64 left_shift_safe<unsigned __int64>(unsigned __int64, long)
//{
//    mangled_ppc("??$left_shift_safe@_K@@YA_K_KJ@Z");
//};

//long quantize_real_logarithmic(float, float, float, long)
//{
//    mangled_ppc("?quantize_real_logarithmic@@YAJMMMJ@Z");
//};

//float dequantize_real_logarithmic(long, float, float, long)
//{
//    mangled_ppc("?dequantize_real_logarithmic@@YAMJMMJ@Z");
//};

