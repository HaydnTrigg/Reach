/* ---------- headers */

#include "omaha\tag_files\scatter_read_stream.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_scatter_entry_packet, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_scatter_entry_packet@@$07@@2JB"

// public: c_scatter_entry_read_stream::c_scatter_entry_read_stream(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *);
// public: c_scatter_entry_read_stream::~c_scatter_entry_read_stream(void);
// public: class c_string_builder c_scatter_entry_read_stream::report_blocking_time(void) const;
// public: float c_scatter_read_stream::get_blocking_time(void) const;
// public: float c_scatter_read_stream::get_read_time(void) const;
// public: bool c_scatter_entry_read_stream::read(unsigned long, unsigned long, class c_basic_buffer<void>);
// public: void c_scatter_read_stream::ensure_up_to(unsigned long, unsigned long);
// public: void c_scatter_entry_input::set_position(unsigned long, unsigned long);
// unsigned __int64 make_uint64(unsigned long, unsigned long);
// public: void c_scatter_entry_input::do_work(void);
// public: bool c_scatter_entry_input::epic_failure(void) const;
// private: void c_scatter_entry_input::try_to_advance_to_next_read_entry(void);
// public: bool c_scatter_entry_output::ensure_up_to(unsigned long, unsigned long);
// public: bool c_scatter_entry_output::valid_position(unsigned long, unsigned long) const;
// private: bool c_scatter_entry_output::position_in_current_packet(unsigned long, unsigned long) const;
// private: void c_scatter_entry_output::release_current_packet(void);
// private: void c_scatter_entry_output::try_to_get_new_packet(void);
// private: void c_scatter_entry_output::verify_position_monotonically_increasing(unsigned long, unsigned long);
// private: static bool c_scatter_entry_output::position_in_packet(struct s_scatter_entry_packet const *, unsigned long, unsigned long);
// public: bool c_scatter_read_stream::epic_failure(void) const;
// public: bool c_scatter_read_stream::read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *);
// public: class c_basic_buffer<void> c_scatter_entry_output::get_current_scatter_buffer(unsigned long, unsigned long) const;
// public: bool c_scatter_read_stream::try_to_read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *);
// public: bool c_scatter_entry_output::try_to_read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *);
// public: void c_scatter_read_stream::purge_up_to(unsigned long, unsigned long);
// public: void c_scatter_entry_output::purge_up_to(unsigned long, unsigned long);
// public: c_async_scatter_entry_reader::c_async_scatter_entry_reader(class c_wrapped_array<struct s_file_reference const *>);
// public: c_scatter_entry_reader::c_scatter_entry_reader(void);
// public: s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>(void);
// public: c_async_scatter_entry_reader::s_async_read_entry::s_async_read_entry(void);
// public: c_async_scatter_entry_reader::~c_async_scatter_entry_reader(void);
// public: s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::~s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>(void);
// public: c_async_scatter_entry_reader::s_async_read_entry::~s_async_read_entry(void);
// public: virtual bool c_async_scatter_entry_reader::start_read(struct s_scatter_entry_packet *, unsigned long);
// public: virtual bool c_async_scatter_entry_reader::try_to_get_completed_packet(struct s_scatter_entry_packet **, bool *);
// public: void const * c_basic_buffer<void>::get_range(unsigned long, unsigned long) const;
// public: c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::c_typed_opaque_data<class c_scatter_read_stream, 384, 4>(void);
// public: c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::~c_typed_opaque_data<class c_scatter_read_stream, 384, 4>(void);
// public: class c_scatter_read_stream * c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::get(void);
// public: c_static_sized_dynamic_array<struct s_file_handle, 32>::c_static_sized_dynamic_array<struct s_file_handle, 32>(void);
// public: void c_static_sized_dynamic_array<struct s_file_handle, 32>::resize(long);
// public: long c_static_sized_dynamic_array<struct s_file_handle, 32>::count(void) const;
// public: struct s_file_handle & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::operator[](long);
// public: static long s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::get_count(void);
// public: bool c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::input_available(void) const;
// public: struct s_scatter_entry_packet * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::prepare_input(void);
// public: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::commit_input(struct s_scatter_entry_packet const *);
// public: bool c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::output_available(void) const;
// public: struct s_scatter_entry_packet const * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::acquire_output(void);
// public: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::release_output(struct s_scatter_entry_packet const *);
// public: long c_wrapped_array_no_init<struct s_file_reference const *>::count(void) const;
// public: struct s_file_reference const *& c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::operator[](long);
// public: void c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::destruct(void);
// public: struct s_file_handle * c_static_sized_dynamic_array<struct s_file_handle, 32>::begin(void);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::valid_index(long) const;
// public: class c_static_sized_dynamic_array<struct s_file_handle, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_file_handle, 32> >::get_super_class(void);
// public: static long s_static_array<struct s_file_handle, 32>::get_count(void);
// private: unsigned long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::get_packet_identifier_from_packet(struct s_scatter_entry_packet const *) const;
// private: long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::find_next_output_packet_index(void) const;
// private: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::advance_read_identifier(void);
// private: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::advance_write_identifier(void);
// public: struct s_file_reference const ** c_wrapped_array_no_init<struct s_file_reference const *>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_file_reference const *> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_file_reference const *> >::get_super_class(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::count(void) const;
// public: struct s_file_handle * s_static_array<struct s_file_handle, 32>::begin(void);
// public: struct s_scatter_entry_packet const * s_static_array<struct s_scatter_entry_packet, 8>::begin(void) const;
// public: struct s_scatter_entry_packet const * s_static_array<struct s_scatter_entry_packet, 8>::end(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_file_handle, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_file_handle, 32> >::get_super_class(void) const;
// public: class c_wrapped_array_no_init<struct s_file_reference const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_file_reference const *> >::get_super_class(void) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::test(unsigned long) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set(unsigned long, bool);
// public: unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void);
// public: class c_scatter_read_stream * c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::construct<class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *>(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *);
// public: c_scatter_read_stream::c_scatter_read_stream(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *);
// public: c_scatter_entry_pipe::c_scatter_entry_pipe(class c_basic_buffer<void>);
// public: c_scatter_entry_input::c_scatter_entry_input(class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *, class c_scatter_entry_pipe *);
// public: c_scatter_entry_output::c_scatter_entry_output(class c_scatter_entry_pipe *);
// public: c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::c_simple_packet_pipe<struct s_scatter_entry_packet, 8>(void);
// public: unsigned long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::total_packet_count(void) const;
// protected: struct s_scatter_entry_packet * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::get_raw_packet(unsigned long);
// public: s_static_array<struct s_scatter_entry_packet, 8>::s_static_array<struct s_scatter_entry_packet, 8>(void);
// public: s_scatter_entry_packet::s_scatter_entry_packet(void);
// public: struct c_async_scatter_entry_reader::s_async_read_entry & s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::operator[]<long>(long);
// public: struct s_scatter_entry_packet & s_static_array<struct s_scatter_entry_packet, 8>::operator[]<long>(long);
// public: struct s_scatter_entry_packet & s_static_array<struct s_scatter_entry_packet, 8>::operator[]<unsigned long>(unsigned long);
// public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static class c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver> c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_from_range(unsigned long, unsigned long);
// public: static bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(unsigned long);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(unsigned long);
// public: class c_scatter_read_stream * c_opaque_data<class c_scatter_read_stream, 384, 4>::get(void);
// public: static bool s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_scatter_entry_packet, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_scatter_entry_packet, 8>::valid<unsigned long>(unsigned long);
// public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::valid(void) const;

//public: c_scatter_entry_read_stream::c_scatter_entry_read_stream(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *)
//{
//    mangled_ppc("??0c_scatter_entry_read_stream@@QAA@V?$c_basic_buffer@X@@PAVc_scatter_read_entry_iterator@@PAVc_scatter_entry_reader@@@Z");
//};

//public: c_scatter_entry_read_stream::~c_scatter_entry_read_stream(void)
//{
//    mangled_ppc("??1c_scatter_entry_read_stream@@QAA@XZ");
//};

//public: class c_string_builder c_scatter_entry_read_stream::report_blocking_time(void) const
//{
//    mangled_ppc("?report_blocking_time@c_scatter_entry_read_stream@@QBA?AVc_string_builder@@XZ");
//};

//public: float c_scatter_read_stream::get_blocking_time(void) const
//{
//    mangled_ppc("?get_blocking_time@c_scatter_read_stream@@QBAMXZ");
//};

//public: float c_scatter_read_stream::get_read_time(void) const
//{
//    mangled_ppc("?get_read_time@c_scatter_read_stream@@QBAMXZ");
//};

//public: bool c_scatter_entry_read_stream::read(unsigned long, unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?read@c_scatter_entry_read_stream@@QAA_NKKV?$c_basic_buffer@X@@@Z");
//};

//public: void c_scatter_read_stream::ensure_up_to(unsigned long, unsigned long)
//{
//    mangled_ppc("?ensure_up_to@c_scatter_read_stream@@QAAXKK@Z");
//};

//public: void c_scatter_entry_input::set_position(unsigned long, unsigned long)
//{
//    mangled_ppc("?set_position@c_scatter_entry_input@@QAAXKK@Z");
//};

//unsigned __int64 make_uint64(unsigned long, unsigned long)
//{
//    mangled_ppc("?make_uint64@@YA_KKK@Z");
//};

//public: void c_scatter_entry_input::do_work(void)
//{
//    mangled_ppc("?do_work@c_scatter_entry_input@@QAAXXZ");
//};

//public: bool c_scatter_entry_input::epic_failure(void) const
//{
//    mangled_ppc("?epic_failure@c_scatter_entry_input@@QBA_NXZ");
//};

//private: void c_scatter_entry_input::try_to_advance_to_next_read_entry(void)
//{
//    mangled_ppc("?try_to_advance_to_next_read_entry@c_scatter_entry_input@@AAAXXZ");
//};

//public: bool c_scatter_entry_output::ensure_up_to(unsigned long, unsigned long)
//{
//    mangled_ppc("?ensure_up_to@c_scatter_entry_output@@QAA_NKK@Z");
//};

//public: bool c_scatter_entry_output::valid_position(unsigned long, unsigned long) const
//{
//    mangled_ppc("?valid_position@c_scatter_entry_output@@QBA_NKK@Z");
//};

//private: bool c_scatter_entry_output::position_in_current_packet(unsigned long, unsigned long) const
//{
//    mangled_ppc("?position_in_current_packet@c_scatter_entry_output@@ABA_NKK@Z");
//};

//private: void c_scatter_entry_output::release_current_packet(void)
//{
//    mangled_ppc("?release_current_packet@c_scatter_entry_output@@AAAXXZ");
//};

//private: void c_scatter_entry_output::try_to_get_new_packet(void)
//{
//    mangled_ppc("?try_to_get_new_packet@c_scatter_entry_output@@AAAXXZ");
//};

//private: void c_scatter_entry_output::verify_position_monotonically_increasing(unsigned long, unsigned long)
//{
//    mangled_ppc("?verify_position_monotonically_increasing@c_scatter_entry_output@@AAAXKK@Z");
//};

//private: static bool c_scatter_entry_output::position_in_packet(struct s_scatter_entry_packet const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?position_in_packet@c_scatter_entry_output@@CA_NPBUs_scatter_entry_packet@@KK@Z");
//};

//public: bool c_scatter_read_stream::epic_failure(void) const
//{
//    mangled_ppc("?epic_failure@c_scatter_read_stream@@QBA_NXZ");
//};

//public: bool c_scatter_read_stream::read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *)
//{
//    mangled_ppc("?read@c_scatter_read_stream@@QAA_NKKV?$c_basic_buffer@X@@PAK@Z");
//};

//public: class c_basic_buffer<void> c_scatter_entry_output::get_current_scatter_buffer(unsigned long, unsigned long) const
//{
//    mangled_ppc("?get_current_scatter_buffer@c_scatter_entry_output@@QBA?AV?$c_basic_buffer@X@@KK@Z");
//};

//public: bool c_scatter_read_stream::try_to_read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *)
//{
//    mangled_ppc("?try_to_read@c_scatter_read_stream@@QAA_NKKV?$c_basic_buffer@X@@PAK@Z");
//};

//public: bool c_scatter_entry_output::try_to_read(unsigned long, unsigned long, class c_basic_buffer<void>, unsigned long *)
//{
//    mangled_ppc("?try_to_read@c_scatter_entry_output@@QAA_NKKV?$c_basic_buffer@X@@PAK@Z");
//};

//public: void c_scatter_read_stream::purge_up_to(unsigned long, unsigned long)
//{
//    mangled_ppc("?purge_up_to@c_scatter_read_stream@@QAAXKK@Z");
//};

//public: void c_scatter_entry_output::purge_up_to(unsigned long, unsigned long)
//{
//    mangled_ppc("?purge_up_to@c_scatter_entry_output@@QAAXKK@Z");
//};

//public: c_async_scatter_entry_reader::c_async_scatter_entry_reader(class c_wrapped_array<struct s_file_reference const *>)
//{
//    mangled_ppc("??0c_async_scatter_entry_reader@@QAA@V?$c_wrapped_array@PBUs_file_reference@@@@@Z");
//};

//public: c_scatter_entry_reader::c_scatter_entry_reader(void)
//{
//    mangled_ppc("??0c_scatter_entry_reader@@QAA@XZ");
//};

//public: s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_async_read_entry@c_async_scatter_entry_reader@@$07@@QAA@XZ");
//};

//public: c_async_scatter_entry_reader::s_async_read_entry::s_async_read_entry(void)
//{
//    mangled_ppc("??0s_async_read_entry@c_async_scatter_entry_reader@@QAA@XZ");
//};

//public: c_async_scatter_entry_reader::~c_async_scatter_entry_reader(void)
//{
//    mangled_ppc("??1c_async_scatter_entry_reader@@QAA@XZ");
//};

//public: s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::~s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_async_read_entry@c_async_scatter_entry_reader@@$07@@QAA@XZ");
//};

//public: c_async_scatter_entry_reader::s_async_read_entry::~s_async_read_entry(void)
//{
//    mangled_ppc("??1s_async_read_entry@c_async_scatter_entry_reader@@QAA@XZ");
//};

//public: virtual bool c_async_scatter_entry_reader::start_read(struct s_scatter_entry_packet *, unsigned long)
//{
//    mangled_ppc("?start_read@c_async_scatter_entry_reader@@UAA_NPAUs_scatter_entry_packet@@K@Z");
//};

//public: virtual bool c_async_scatter_entry_reader::try_to_get_completed_packet(struct s_scatter_entry_packet **, bool *)
//{
//    mangled_ppc("?try_to_get_completed_packet@c_async_scatter_entry_reader@@UAA_NPAPAUs_scatter_entry_packet@@PA_N@Z");
//};

//public: void const * c_basic_buffer<void>::get_range(unsigned long, unsigned long) const
//{
//    mangled_ppc("?get_range@?$c_basic_buffer@X@@QBAPBXKK@Z");
//};

//public: c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::c_typed_opaque_data<class c_scatter_read_stream, 384, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::~c_typed_opaque_data<class c_scatter_read_stream, 384, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAA@XZ");
//};

//public: class c_scatter_read_stream * c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAAPAVc_scatter_read_stream@@XZ");
//};

//public: c_static_sized_dynamic_array<struct s_file_handle, 32>::c_static_sized_dynamic_array<struct s_file_handle, 32>(void)
//{
//    mangled_ppc("??0?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@QAA@XZ");
//};

//public: void c_static_sized_dynamic_array<struct s_file_handle, 32>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@QAAXJ@Z");
//};

//public: long c_static_sized_dynamic_array<struct s_file_handle, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@QBAJXZ");
//};

//public: struct s_file_handle & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@Us_file_handle@@@@QAAAAUs_file_handle@@J@Z");
//};

//public: static long s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_async_read_entry@c_async_scatter_entry_reader@@$07@@SAJXZ");
//};

//public: bool c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::input_available(void) const
//{
//    mangled_ppc("?input_available@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QBA_NXZ");
//};

//public: struct s_scatter_entry_packet * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::prepare_input(void)
//{
//    mangled_ppc("?prepare_input@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QAAPAUs_scatter_entry_packet@@XZ");
//};

//public: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::commit_input(struct s_scatter_entry_packet const *)
//{
//    mangled_ppc("?commit_input@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QAAXPBUs_scatter_entry_packet@@@Z");
//};

//public: bool c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::output_available(void) const
//{
//    mangled_ppc("?output_available@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QBA_NXZ");
//};

//public: struct s_scatter_entry_packet const * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::acquire_output(void)
//{
//    mangled_ppc("?acquire_output@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QAAPBUs_scatter_entry_packet@@XZ");
//};

//public: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::release_output(struct s_scatter_entry_packet const *)
//{
//    mangled_ppc("?release_output@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QAAXPBUs_scatter_entry_packet@@@Z");
//};

//public: long c_wrapped_array_no_init<struct s_file_reference const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@PBUs_file_reference@@@@QBAJXZ");
//};

//public: struct s_file_reference const *& c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_file_reference@@@@PBUs_file_reference@@@@QAAAAPBUs_file_reference@@J@Z");
//};

//public: void c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAAXXZ");
//};

//public: struct s_file_handle * c_static_sized_dynamic_array<struct s_file_handle, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@QAAPAUs_file_handle@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@Us_file_handle@@@@QBA_NJ@Z");
//};

//public: class c_static_sized_dynamic_array<struct s_file_handle, 32> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_file_handle, 32> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@XZ");
//};

//public: static long s_static_array<struct s_file_handle, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_file_handle@@$0CA@@@SAJXZ");
//};

//private: unsigned long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::get_packet_identifier_from_packet(struct s_scatter_entry_packet const *) const
//{
//    mangled_ppc("?get_packet_identifier_from_packet@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@ABAKPBUs_scatter_entry_packet@@@Z");
//};

//private: long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::find_next_output_packet_index(void) const
//{
//    mangled_ppc("?find_next_output_packet_index@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@ABAJXZ");
//};

//private: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::advance_read_identifier(void)
//{
//    mangled_ppc("?advance_read_identifier@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@AAAXXZ");
//};

//private: void c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::advance_write_identifier(void)
//{
//    mangled_ppc("?advance_write_identifier@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@AAAXXZ");
//};

//public: struct s_file_reference const ** c_wrapped_array_no_init<struct s_file_reference const *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PBUs_file_reference@@@@QAAPAPBUs_file_reference@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_file_reference@@@@PBUs_file_reference@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_file_reference const *> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_file_reference const *> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PBUs_file_reference@@@@@@QAAPAV?$c_wrapped_array_no_init@PBUs_file_reference@@@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_file_handle, 32>, struct s_file_handle>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@Us_file_handle@@@@QBAJXZ");
//};

//public: struct s_file_handle * s_static_array<struct s_file_handle, 32>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_file_handle@@$0CA@@@QAAPAUs_file_handle@@XZ");
//};

//public: struct s_scatter_entry_packet const * s_static_array<struct s_scatter_entry_packet, 8>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_scatter_entry_packet@@$07@@QBAPBUs_scatter_entry_packet@@XZ");
//};

//public: struct s_scatter_entry_packet const * s_static_array<struct s_scatter_entry_packet, 8>::end(void) const
//{
//    mangled_ppc("?end@?$s_static_array@Us_scatter_entry_packet@@$07@@QBAPBUs_scatter_entry_packet@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_file_reference const *>, struct s_file_reference const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_file_reference@@@@PBUs_file_reference@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_file_handle, 32> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_file_handle, 32> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_file_handle@@$0CA@@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_file_reference const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_file_reference const *> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PBUs_file_reference@@@@@@QBAPBV?$c_wrapped_array_no_init@PBUs_file_reference@@@@XZ");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::test(unsigned long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QBA_NK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set(unsigned long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QAAXK_N@Z");
//};

//public: unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: c_flags<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@KE$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: class c_scatter_read_stream * c_typed_opaque_data<class c_scatter_read_stream, 384, 4>::construct<class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *>(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *)
//{
//    mangled_ppc("??$construct@V?$c_basic_buffer@X@@PAVc_scatter_read_entry_iterator@@PAVc_scatter_entry_reader@@@?$c_typed_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAAPAVc_scatter_read_stream@@V?$c_basic_buffer@X@@PAVc_scatter_read_entry_iterator@@PAVc_scatter_entry_reader@@@Z");
//};

//public: c_scatter_read_stream::c_scatter_read_stream(class c_basic_buffer<void>, class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *)
//{
//    mangled_ppc("??0c_scatter_read_stream@@QAA@V?$c_basic_buffer@X@@PAVc_scatter_read_entry_iterator@@PAVc_scatter_entry_reader@@@Z");
//};

//public: c_scatter_entry_pipe::c_scatter_entry_pipe(class c_basic_buffer<void>)
//{
//    mangled_ppc("??0c_scatter_entry_pipe@@QAA@V?$c_basic_buffer@X@@@Z");
//};

//public: c_scatter_entry_input::c_scatter_entry_input(class c_scatter_read_entry_iterator *, class c_scatter_entry_reader *, class c_scatter_entry_pipe *)
//{
//    mangled_ppc("??0c_scatter_entry_input@@QAA@PAVc_scatter_read_entry_iterator@@PAVc_scatter_entry_reader@@PAVc_scatter_entry_pipe@@@Z");
//};

//public: c_scatter_entry_output::c_scatter_entry_output(class c_scatter_entry_pipe *)
//{
//    mangled_ppc("??0c_scatter_entry_output@@QAA@PAVc_scatter_entry_pipe@@@Z");
//};

//public: c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::c_simple_packet_pipe<struct s_scatter_entry_packet, 8>(void)
//{
//    mangled_ppc("??0?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QAA@XZ");
//};

//public: unsigned long c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::total_packet_count(void) const
//{
//    mangled_ppc("?total_packet_count@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@QBAKXZ");
//};

//protected: struct s_scatter_entry_packet * c_simple_packet_pipe<struct s_scatter_entry_packet, 8>::get_raw_packet(unsigned long)
//{
//    mangled_ppc("?get_raw_packet@?$c_simple_packet_pipe@Us_scatter_entry_packet@@$07@@IAAPAUs_scatter_entry_packet@@K@Z");
//};

//public: s_static_array<struct s_scatter_entry_packet, 8>::s_static_array<struct s_scatter_entry_packet, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_scatter_entry_packet@@$07@@QAA@XZ");
//};

//public: s_scatter_entry_packet::s_scatter_entry_packet(void)
//{
//    mangled_ppc("??0s_scatter_entry_packet@@QAA@XZ");
//};

//public: struct c_async_scatter_entry_reader::s_async_read_entry & s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_async_read_entry@c_async_scatter_entry_reader@@$07@@QAAAAUs_async_read_entry@c_async_scatter_entry_reader@@J@Z");
//};

//public: struct s_scatter_entry_packet & s_static_array<struct s_scatter_entry_packet, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_scatter_entry_packet@@$07@@QAAAAUs_scatter_entry_packet@@J@Z");
//};

//public: struct s_scatter_entry_packet & s_static_array<struct s_scatter_entry_packet, 8>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Us_scatter_entry_packet@@$07@@QAAAAUs_scatter_entry_packet@@K@Z");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static class c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver> c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_from_range(unsigned long, unsigned long)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@SA?AV1@KK@Z");
//};

//public: static bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(unsigned long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@SA_NK@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(unsigned long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@CAEK@Z");
//};

//public: class c_scatter_read_stream * c_opaque_data<class c_scatter_read_stream, 384, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_scatter_read_stream@@$0BIA@$03@@QAAPAVc_scatter_read_stream@@XZ");
//};

//public: static bool s_static_array<struct c_async_scatter_entry_reader::s_async_read_entry, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_async_read_entry@c_async_scatter_entry_reader@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_scatter_entry_packet, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_scatter_entry_packet@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_scatter_entry_packet, 8>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Us_scatter_entry_packet@@$07@@SA_NK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@CAEK@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 8, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@KE$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

