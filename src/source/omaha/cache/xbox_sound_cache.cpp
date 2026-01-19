/* ---------- headers */

#include "omaha\cache\xbox_sound_cache.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 512>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0CAA@@@QAAXXZ@4JC"
// bool sound_cache_list; // "?sound_cache_list@@3_NA"
// bool debug_sound_stabbed; // "?debug_sound_stabbed@@3_NA"
// bool debug_sound_reference_counts; // "?debug_sound_reference_counts@@3_NA"

// void sound_cache_new(void);
// void sound_cache_delete(void);
// void sound_cache_open(void);
// void sound_cache_flush(void);
// void sound_cache_flush_all_sound_guaranteed(void);
// void sound_cache_prepare_for_tag_reload(void);
// void sound_cache_close(void);
// void sound_cache_idle(void);
// void sound_cache_sound_new(long, struct s_sound_permutation_chunk *);
// void sound_cache_sound_delete(struct s_sound_permutation_chunk *);
// bool sound_cache_sound_loaded(struct s_sound_permutation_chunk *);
// bool sound_cache_sound_add_reference(struct s_sound_permutation_chunk *);
// long sound_cache_sound_get_owner_tag_index(struct s_sound_permutation_chunk *);
// unsigned long _sound_cache_sound_request(long, struct s_sound_permutation_chunk *, unsigned long);
// void sound_cache_sound_finished(struct s_sound_permutation_chunk *);
// void * sound_cache_sound_hardware_lock(struct s_sound_permutation_chunk *, unsigned long *);
// public: long s_sound_permutation_chunk::get_sample_size(void) const;
// public: long c_sound_chunk_flags_and_sample_size::get_sample_size(void) const;
// void sound_cache_sound_hardware_unlock(struct s_sound_permutation_chunk *);
// void sound_cache_sound_spit_out_error(struct s_sound_permutation_chunk *, char const *);
// bool sound_cache_locked_block_proc(void *, long);
// void sound_cache_delete_block_proc(void *, long, bool, bool);
// char const * sound_cache_get_sound_cache_packet_name(void *, void *, char *, long, long);
// void * sound_cache_get_sound_base_address(long);
// void sound_cache_start_loading_sound(long, struct s_sound_permutation_chunk *, bool *);
// void sound_cache_protect_sound(struct s_sound_permutation_chunk *, bool);
// void sound_cache_debug_render(void);
// void sound_lruv_render_page_list_callback(void *, char *, long, long);
// public: c_sound_cache_debugger::c_sound_cache_debugger(void);
// public: void c_sound_cache_debugger::add_reference(struct s_sound_permutation_chunk *);
// public: void c_sound_cache_debugger::lock_sound(struct s_sound_permutation_chunk *);
// public: void c_sound_cache_debugger::verify(void);
// bool sound_cache_sound_uses_xma2(struct s_sound_permutation_chunk *);
// public: bool s_sound_permutation_chunk::test_flag(enum e_sound_chunk_flag_bit) const;
// public: long s_sound_permutation_chunk::get_flags(void) const;
// public: long c_sound_chunk_flags_and_sample_size::get_flags(void) const;
// void sound_cache_sound_get_xma2_info(struct s_sound_permutation_chunk *, struct s_xma2_packet_info *);
// void sound_cache_sound_get_full_xma2_info(struct s_sound_permutation_chunk *, struct s_xma2_packet_info *);
// public: bool s_cache_sound_datum::available(void) const;
// public: bool s_cache_sound_datum::io_failed(void) const;
// public: bool s_cache_sound_datum::io_pending(void) const;
// public: bool s_cache_sound_datum::initiate_async_read(unsigned long, class c_basic_buffer<void>);
// public: long c_long_designator<6, 0>::get_primary_index(void) const;
// public: long c_long_designator<6, 0>::get_secondary_index(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_cache_sound_datum>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_cache_sound_datum>::operator->(void);
// public: class c_smart_data_array<struct s_cache_sound_datum> & c_smart_data_array<struct s_cache_sound_datum>::operator=(struct s_data_array *);
// public: void c_data_iterator<struct s_cache_sound_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_cache_sound_datum>::next(void);
// public: struct s_cache_sound_datum * c_data_iterator<struct s_cache_sound_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_cache_sound_datum>::get_index(void) const;
// public: c_big_flags<512>::c_big_flags<512>(void);
// private: long c_long_designator<6, 0>::get_secondary_index_internal(void) const;
// public: void c_big_flags_typed_no_init<long, 512>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 512>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 512>::set(long, bool);
// public: c_big_flags_typed<long, 512>::c_big_flags_typed<long, 512>(void);
// public: bool c_big_flags_typed_no_init<long, 512>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 512>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 512>::valid(void) const;
// protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 512>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 512>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_mask_of_first_slice_of_chunk_exclusive(long);

//void sound_cache_new(void)
//{
//    mangled_ppc("?sound_cache_new@@YAXXZ");
//};

//void sound_cache_delete(void)
//{
//    mangled_ppc("?sound_cache_delete@@YAXXZ");
//};

//void sound_cache_open(void)
//{
//    mangled_ppc("?sound_cache_open@@YAXXZ");
//};

//void sound_cache_flush(void)
//{
//    mangled_ppc("?sound_cache_flush@@YAXXZ");
//};

//void sound_cache_flush_all_sound_guaranteed(void)
//{
//    mangled_ppc("?sound_cache_flush_all_sound_guaranteed@@YAXXZ");
//};

//void sound_cache_prepare_for_tag_reload(void)
//{
//    mangled_ppc("?sound_cache_prepare_for_tag_reload@@YAXXZ");
//};

//void sound_cache_close(void)
//{
//    mangled_ppc("?sound_cache_close@@YAXXZ");
//};

//void sound_cache_idle(void)
//{
//    mangled_ppc("?sound_cache_idle@@YAXXZ");
//};

//void sound_cache_sound_new(long, struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_new@@YAXJPAUs_sound_permutation_chunk@@@Z");
//};

//void sound_cache_sound_delete(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_delete@@YAXPAUs_sound_permutation_chunk@@@Z");
//};

//bool sound_cache_sound_loaded(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_loaded@@YA_NPAUs_sound_permutation_chunk@@@Z");
//};

//bool sound_cache_sound_add_reference(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_add_reference@@YA_NPAUs_sound_permutation_chunk@@@Z");
//};

//long sound_cache_sound_get_owner_tag_index(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_get_owner_tag_index@@YAJPAUs_sound_permutation_chunk@@@Z");
//};

//unsigned long _sound_cache_sound_request(long, struct s_sound_permutation_chunk *, unsigned long)
//{
//    mangled_ppc("?_sound_cache_sound_request@@YAKJPAUs_sound_permutation_chunk@@K@Z");
//};

//void sound_cache_sound_finished(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_finished@@YAXPAUs_sound_permutation_chunk@@@Z");
//};

//void * sound_cache_sound_hardware_lock(struct s_sound_permutation_chunk *, unsigned long *)
//{
//    mangled_ppc("?sound_cache_sound_hardware_lock@@YAPAXPAUs_sound_permutation_chunk@@PAK@Z");
//};

//public: long s_sound_permutation_chunk::get_sample_size(void) const
//{
//    mangled_ppc("?get_sample_size@s_sound_permutation_chunk@@QBAJXZ");
//};

//public: long c_sound_chunk_flags_and_sample_size::get_sample_size(void) const
//{
//    mangled_ppc("?get_sample_size@c_sound_chunk_flags_and_sample_size@@QBAJXZ");
//};

//void sound_cache_sound_hardware_unlock(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_hardware_unlock@@YAXPAUs_sound_permutation_chunk@@@Z");
//};

//void sound_cache_sound_spit_out_error(struct s_sound_permutation_chunk *, char const *)
//{
//    mangled_ppc("?sound_cache_sound_spit_out_error@@YAXPAUs_sound_permutation_chunk@@PBD@Z");
//};

//bool sound_cache_locked_block_proc(void *, long)
//{
//    mangled_ppc("?sound_cache_locked_block_proc@@YA_NPAXJ@Z");
//};

//void sound_cache_delete_block_proc(void *, long, bool, bool)
//{
//    mangled_ppc("?sound_cache_delete_block_proc@@YAXPAXJ_N1@Z");
//};

//char const * sound_cache_get_sound_cache_packet_name(void *, void *, char *, long, long)
//{
//    mangled_ppc("?sound_cache_get_sound_cache_packet_name@@YAPBDPAX0PADJJ@Z");
//};

//void * sound_cache_get_sound_base_address(long)
//{
//    mangled_ppc("?sound_cache_get_sound_base_address@@YAPAXJ@Z");
//};

//void sound_cache_start_loading_sound(long, struct s_sound_permutation_chunk *, bool *)
//{
//    mangled_ppc("?sound_cache_start_loading_sound@@YAXJPAUs_sound_permutation_chunk@@PA_N@Z");
//};

//void sound_cache_protect_sound(struct s_sound_permutation_chunk *, bool)
//{
//    mangled_ppc("?sound_cache_protect_sound@@YAXPAUs_sound_permutation_chunk@@_N@Z");
//};

//void sound_cache_debug_render(void)
//{
//    mangled_ppc("?sound_cache_debug_render@@YAXXZ");
//};

//void sound_lruv_render_page_list_callback(void *, char *, long, long)
//{
//    mangled_ppc("?sound_lruv_render_page_list_callback@@YAXPAXPADJJ@Z");
//};

//public: c_sound_cache_debugger::c_sound_cache_debugger(void)
//{
//    mangled_ppc("??0c_sound_cache_debugger@@QAA@XZ");
//};

//public: void c_sound_cache_debugger::add_reference(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?add_reference@c_sound_cache_debugger@@QAAXPAUs_sound_permutation_chunk@@@Z");
//};

//public: void c_sound_cache_debugger::lock_sound(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?lock_sound@c_sound_cache_debugger@@QAAXPAUs_sound_permutation_chunk@@@Z");
//};

//public: void c_sound_cache_debugger::verify(void)
//{
//    mangled_ppc("?verify@c_sound_cache_debugger@@QAAXXZ");
//};

//bool sound_cache_sound_uses_xma2(struct s_sound_permutation_chunk *)
//{
//    mangled_ppc("?sound_cache_sound_uses_xma2@@YA_NPAUs_sound_permutation_chunk@@@Z");
//};

//public: bool s_sound_permutation_chunk::test_flag(enum e_sound_chunk_flag_bit) const
//{
//    mangled_ppc("?test_flag@s_sound_permutation_chunk@@QBA_NW4e_sound_chunk_flag_bit@@@Z");
//};

//public: long s_sound_permutation_chunk::get_flags(void) const
//{
//    mangled_ppc("?get_flags@s_sound_permutation_chunk@@QBAJXZ");
//};

//public: long c_sound_chunk_flags_and_sample_size::get_flags(void) const
//{
//    mangled_ppc("?get_flags@c_sound_chunk_flags_and_sample_size@@QBAJXZ");
//};

//void sound_cache_sound_get_xma2_info(struct s_sound_permutation_chunk *, struct s_xma2_packet_info *)
//{
//    mangled_ppc("?sound_cache_sound_get_xma2_info@@YAXPAUs_sound_permutation_chunk@@PAUs_xma2_packet_info@@@Z");
//};

//void sound_cache_sound_get_full_xma2_info(struct s_sound_permutation_chunk *, struct s_xma2_packet_info *)
//{
//    mangled_ppc("?sound_cache_sound_get_full_xma2_info@@YAXPAUs_sound_permutation_chunk@@PAUs_xma2_packet_info@@@Z");
//};

//public: bool s_cache_sound_datum::available(void) const
//{
//    mangled_ppc("?available@s_cache_sound_datum@@QBA_NXZ");
//};

//public: bool s_cache_sound_datum::io_failed(void) const
//{
//    mangled_ppc("?io_failed@s_cache_sound_datum@@QBA_NXZ");
//};

//public: bool s_cache_sound_datum::io_pending(void) const
//{
//    mangled_ppc("?io_pending@s_cache_sound_datum@@QBA_NXZ");
//};

//public: bool s_cache_sound_datum::initiate_async_read(unsigned long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?initiate_async_read@s_cache_sound_datum@@QAA_NKV?$c_basic_buffer@X@@@Z");
//};

//public: long c_long_designator<6, 0>::get_primary_index(void) const
//{
//    mangled_ppc("?get_primary_index@?$c_long_designator@$05$0A@@@QBAJXZ");
//};

//public: long c_long_designator<6, 0>::get_secondary_index(void) const
//{
//    mangled_ppc("?get_secondary_index@?$c_long_designator@$05$0A@@@QBAJXZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_cache_sound_datum>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_cache_sound_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_cache_sound_datum>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_cache_sound_datum@@@@QAAPAUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct s_cache_sound_datum> & c_smart_data_array<struct s_cache_sound_datum>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_cache_sound_datum@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: void c_data_iterator<struct s_cache_sound_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_cache_sound_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_cache_sound_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_cache_sound_datum@@@@QAA_NXZ");
//};

//public: struct s_cache_sound_datum * c_data_iterator<struct s_cache_sound_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_cache_sound_datum@@@@QBAPAUs_cache_sound_datum@@XZ");
//};

//public: long c_data_iterator<struct s_cache_sound_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_cache_sound_datum@@@@QBAJXZ");
//};

//public: c_big_flags<512>::c_big_flags<512>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0CAA@@@QAA@XZ");
//};

//private: long c_long_designator<6, 0>::get_secondary_index_internal(void) const
//{
//    mangled_ppc("?get_secondary_index_internal@?$c_long_designator@$05$0A@@@ABAJXZ");
//};

//public: void c_big_flags_typed_no_init<long, 512>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0CAA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 512>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0CAA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 512>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0CAA@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 512>::c_big_flags_typed<long, 512>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0CAA@@@QAA@XZ");
//};

//public: bool c_big_flags_typed_no_init<long, 512>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0CAA@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 512>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0CAA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 512>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0CAA@@@QBA_NXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0CAA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 512>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0CAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 512>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0CAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0CAA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 512>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0CAA@@@KAKJ@Z");
//};

