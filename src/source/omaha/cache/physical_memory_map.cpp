/* ---------- headers */

#include "omaha\cache\physical_memory_map.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long const k_tag_cache_alignment_bits; // "?k_tag_cache_alignment_bits@@3KB"
// public: static long const s_static_array<struct s_physical_memory_stage, 9>::k_element_count; // "?k_element_count@?$s_static_array@Us_physical_memory_stage@@$08@@2JB"
// public: static long const s_static_array<struct s_physical_memory_journal_entry, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_physical_memory_journal_entry@@$0EA@@@2JB"
// char const *const k_physical_memory_dump_filename; // "?k_physical_memory_dump_filename@@3PBDB"
// char const **k_physical_memory_stage_names; // "?k_physical_memory_stage_names@@3PAPBDA"
// void const *const k_tag_cache_minimum_address; // "?k_tag_cache_minimum_address@@3PBXB"
// void const *const k_tag_cache_maximum_address; // "?k_tag_cache_maximum_address@@3PBXB"
// struct s_physical_memory_globals physical_memory_globals; // "?physical_memory_globals@@3Us_physical_memory_globals@@A"

// unsigned long physical_memory_round_up_allocation_size(unsigned long);
// struct s_physical_memory_stage * physical_memory_get_current_stage(void);
// bool is_physical_memory_address(void const volatile *);
// unsigned long physical_memory_get_page_size(void const volatile *);
// unsigned long physical_address_get_page_size(unsigned long);
// unsigned long physical_memory_align_up_to_next_page_address(unsigned long);
// unsigned long physical_memory_align_down_to_previous_page_address(unsigned long);
// unsigned long physical_memory_get_broken_memory_offset(void);
// unsigned long physical_memory_get_hardware_address(unsigned long);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// void * physical_memory_from_hardware_address(unsigned long, unsigned long);
// void physical_memory_query_bounds(unsigned long, unsigned long, unsigned long *, unsigned long *);
// unsigned long physical_address_get_page_address(unsigned long, unsigned long);
// void physical_memory_compute_allocation_bounds(void **, unsigned long *);
// void physical_memory_initialize(void);
// void physical_memory_register_allocation(void);
// void physical_memory_dispose(void);
// void physical_memory_resize_region_initialize(void);
// void physical_memory_resize_region_dispose(void);
// class c_basic_buffer<void> physical_memory_resize_region_lock(void);
// class c_basic_buffer<void> physical_memory_get_free_memory_region(void);
// void physical_memory_resize_region_unlock(class c_basic_buffer<void>);
// void physical_memory_stage_push_internal(enum memory_stage);
// void physical_memory_stage_pop_internal(enum memory_stage, enum memory_stage);
// void physical_memory_mark_free_memory(class c_basic_buffer<void>, class c_basic_buffer<void>);
// void physical_memory_adjust_resize_region(class c_basic_buffer<void>, class c_basic_buffer<void>);
// enum memory_stage get_overall_current_memory_stage_for_resize_notification_purposes(void);
// void physical_memory_stage_push(enum memory_stage);
// void physical_memory_stage_pop(enum memory_stage);
// void physical_memory_stage_push_temporary(void);
// void physical_memory_stage_pop_temporary(void);
// void * _physical_memory_malloc(enum memory_stage, char const *, long, unsigned long, char const *, long);
// void * _physical_memory_malloc_internal(enum memory_stage, char const *, long, long, unsigned long, char const *, long);
// void memory_set_4byte(void *, long, long);
// void * _physical_memory_malloc_fixed(enum memory_stage, char const *, void const *, long, unsigned long, char const *, long);
// bool physical_memory_can_allocate_fixed_allocations(void);
// void physical_memory_free(void *);
// void * physical_memory_map_physical_address(unsigned long);
// long physical_memory_get_remaining(void);
// bool physical_memory_range_writable(void *, long);
// void physical_memory_make_range_writeable(void *, unsigned long);
// void physical_memory_make_range_write_combined(void *, unsigned long);
// void physical_memory_make_range_readonly(void *, unsigned long);
// void physical_memory_dump(void);
// long physical_memory_get_minidump_count(void);
// void * physical_memory_get_minidump_block(long, unsigned long *);
// struct s_physical_memory_journal_entry * physical_memory_get_journal_entry(void const *);
// void physical_memory_free_journal_entry(struct s_physical_memory_journal_entry *);
// struct s_physical_memory_journal_entry * physical_memory_get_next_journal_entry(enum memory_stage, struct s_physical_memory_journal_entry const *);
// void physical_memory_record_journal_entry(void *, enum memory_stage, char const *, long, unsigned long, char const *, long);
// struct s_physical_memory_journal_entry * physical_memory_get_free_journal_entry(void);
// void * physical_memory_system_malloc(unsigned long, void *, unsigned long);
// void physical_memory_system_free(void *);
// void physical_memory_create_resizeable_contiguous_region(class c_physical_memory_contiguous_region_listener *);
// void physical_memory_destroy_resizeable_contiguous_region(class c_physical_memory_contiguous_region_listener const *);
// public: void * c_physical_memory_index::allocate_region(unsigned long, unsigned long, unsigned long *);
// public: bool c_physical_memory_index::grow_region(void *, unsigned long, unsigned long, unsigned long, unsigned long *);
// public: void c_physical_memory_index::shrink_region(void *, unsigned long, unsigned long);
// public: void c_physical_memory_index::free_region(void *, unsigned long);
// private: bool c_physical_memory_index::allocate_region_pages(unsigned long, unsigned long, unsigned long *, unsigned long *);
// private: bool c_physical_memory_index::grow_region_pages(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long *);
// private: void c_physical_memory_index::shrink_region_pages(unsigned long, unsigned long, unsigned long);
// private: void c_physical_memory_index::free_region_pages(unsigned long, unsigned long);
// private: static void * c_physical_memory_index::page_index_to_address(unsigned long);
// private: static unsigned long c_physical_memory_index::address_to_page_index(void *);
// private: unsigned long c_physical_memory_index::allocate_page(void);
// private: static unsigned long c_physical_memory_index::get_page_count(unsigned long);
// private: static unsigned long c_physical_memory_index::get_region_size(unsigned long);
// private: bool c_physical_memory_index::allocate_specific_page(unsigned long);
// private: void c_physical_memory_index::free_specific_page(unsigned long);
// bool physical_memory_try_to_resize_contiguous_region(class c_physical_memory_contiguous_region_listener const *, void *, unsigned long, unsigned long, unsigned long, unsigned long, void **, unsigned long *);
// void physical_memory_release_contiguous_region(class c_physical_memory_contiguous_region_listener *, void *, unsigned long);
// public: virtual void * c_physical_memory_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// void const * physical_memory_xenon_convert_cached_memory_to_read_only_cached_address(void const *);
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// bool physical_memory_try_to_resize_contiguous_buffer_simple(class c_physical_memory_contiguous_region_listener const *, class c_basic_buffer<void>, unsigned long, class c_basic_buffer<void> *);
// public: c_basic_buffer<void>::c_basic_buffer<void>(void *, void *);
// public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<enum memory_stage>(enum memory_stage);
// public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<int>(int);
// public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<long>(long);
// public: struct s_physical_memory_journal_entry & s_static_array<struct s_physical_memory_journal_entry, 64>::operator[]<long>(long);
// public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<enum memory_stage>(enum memory_stage);
// public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<int>(int);
// public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<long>(long);
// public: static bool s_static_array<struct s_physical_memory_journal_entry, 64>::valid<long>(long);
// public: s_physical_memory_globals::s_physical_memory_globals(void);
// public: s_static_array<struct s_physical_memory_journal_entry, 64>::s_static_array<struct s_physical_memory_journal_entry, 64>(void);
// public: s_physical_memory_journal_entry::s_physical_memory_journal_entry(void);

//unsigned long physical_memory_round_up_allocation_size(unsigned long)
//{
//    mangled_ppc("?physical_memory_round_up_allocation_size@@YAKK@Z");
//};

//struct s_physical_memory_stage * physical_memory_get_current_stage(void)
//{
//    mangled_ppc("?physical_memory_get_current_stage@@YAPAUs_physical_memory_stage@@XZ");
//};

//bool is_physical_memory_address(void const volatile *)
//{
//    mangled_ppc("?is_physical_memory_address@@YA_NPDX@Z");
//};

//unsigned long physical_memory_get_page_size(void const volatile *)
//{
//    mangled_ppc("?physical_memory_get_page_size@@YAKPDX@Z");
//};

//unsigned long physical_address_get_page_size(unsigned long)
//{
//    mangled_ppc("?physical_address_get_page_size@@YAKK@Z");
//};

//unsigned long physical_memory_align_up_to_next_page_address(unsigned long)
//{
//    mangled_ppc("?physical_memory_align_up_to_next_page_address@@YAKK@Z");
//};

//unsigned long physical_memory_align_down_to_previous_page_address(unsigned long)
//{
//    mangled_ppc("?physical_memory_align_down_to_previous_page_address@@YAKK@Z");
//};

//unsigned long physical_memory_get_broken_memory_offset(void)
//{
//    mangled_ppc("?physical_memory_get_broken_memory_offset@@YAKXZ");
//};

//unsigned long physical_memory_get_hardware_address(unsigned long)
//{
//    mangled_ppc("?physical_memory_get_hardware_address@@YAKK@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//void * physical_memory_from_hardware_address(unsigned long, unsigned long)
//{
//    mangled_ppc("?physical_memory_from_hardware_address@@YAPAXKK@Z");
//};

//void physical_memory_query_bounds(unsigned long, unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?physical_memory_query_bounds@@YAXKKPAK0@Z");
//};

//unsigned long physical_address_get_page_address(unsigned long, unsigned long)
//{
//    mangled_ppc("?physical_address_get_page_address@@YAKKK@Z");
//};

//void physical_memory_compute_allocation_bounds(void **, unsigned long *)
//{
//    mangled_ppc("?physical_memory_compute_allocation_bounds@@YAXPAPAXPAK@Z");
//};

//void physical_memory_initialize(void)
//{
//    mangled_ppc("?physical_memory_initialize@@YAXXZ");
//};

//void physical_memory_register_allocation(void)
//{
//    mangled_ppc("?physical_memory_register_allocation@@YAXXZ");
//};

//void physical_memory_dispose(void)
//{
//    mangled_ppc("?physical_memory_dispose@@YAXXZ");
//};

//void physical_memory_resize_region_initialize(void)
//{
//    mangled_ppc("?physical_memory_resize_region_initialize@@YAXXZ");
//};

//void physical_memory_resize_region_dispose(void)
//{
//    mangled_ppc("?physical_memory_resize_region_dispose@@YAXXZ");
//};

//class c_basic_buffer<void> physical_memory_resize_region_lock(void)
//{
//    mangled_ppc("?physical_memory_resize_region_lock@@YA?AV?$c_basic_buffer@X@@XZ");
//};

//class c_basic_buffer<void> physical_memory_get_free_memory_region(void)
//{
//    mangled_ppc("?physical_memory_get_free_memory_region@@YA?AV?$c_basic_buffer@X@@XZ");
//};

//void physical_memory_resize_region_unlock(class c_basic_buffer<void>)
//{
//    mangled_ppc("?physical_memory_resize_region_unlock@@YAXV?$c_basic_buffer@X@@@Z");
//};

//void physical_memory_stage_push_internal(enum memory_stage)
//{
//    mangled_ppc("?physical_memory_stage_push_internal@@YAXW4memory_stage@@@Z");
//};

//void physical_memory_stage_pop_internal(enum memory_stage, enum memory_stage)
//{
//    mangled_ppc("?physical_memory_stage_pop_internal@@YAXW4memory_stage@@0@Z");
//};

//void physical_memory_mark_free_memory(class c_basic_buffer<void>, class c_basic_buffer<void>)
//{
//    mangled_ppc("?physical_memory_mark_free_memory@@YAXV?$c_basic_buffer@X@@0@Z");
//};

//void physical_memory_adjust_resize_region(class c_basic_buffer<void>, class c_basic_buffer<void>)
//{
//    mangled_ppc("?physical_memory_adjust_resize_region@@YAXV?$c_basic_buffer@X@@0@Z");
//};

//enum memory_stage get_overall_current_memory_stage_for_resize_notification_purposes(void)
//{
//    mangled_ppc("?get_overall_current_memory_stage_for_resize_notification_purposes@@YA?AW4memory_stage@@XZ");
//};

//void physical_memory_stage_push(enum memory_stage)
//{
//    mangled_ppc("?physical_memory_stage_push@@YAXW4memory_stage@@@Z");
//};

//void physical_memory_stage_pop(enum memory_stage)
//{
//    mangled_ppc("?physical_memory_stage_pop@@YAXW4memory_stage@@@Z");
//};

//void physical_memory_stage_push_temporary(void)
//{
//    mangled_ppc("?physical_memory_stage_push_temporary@@YAXXZ");
//};

//void physical_memory_stage_pop_temporary(void)
//{
//    mangled_ppc("?physical_memory_stage_pop_temporary@@YAXXZ");
//};

//void * _physical_memory_malloc(enum memory_stage, char const *, long, unsigned long, char const *, long)
//{
//    mangled_ppc("?_physical_memory_malloc@@YAPAXW4memory_stage@@PBDJK1J@Z");
//};

//void * _physical_memory_malloc_internal(enum memory_stage, char const *, long, long, unsigned long, char const *, long)
//{
//    mangled_ppc("?_physical_memory_malloc_internal@@YAPAXW4memory_stage@@PBDJJK1J@Z");
//};

//void memory_set_4byte(void *, long, long)
//{
//    mangled_ppc("?memory_set_4byte@@YAXPAXJJ@Z");
//};

//void * _physical_memory_malloc_fixed(enum memory_stage, char const *, void const *, long, unsigned long, char const *, long)
//{
//    mangled_ppc("?_physical_memory_malloc_fixed@@YAPAXW4memory_stage@@PBDPBXJK1J@Z");
//};

//bool physical_memory_can_allocate_fixed_allocations(void)
//{
//    mangled_ppc("?physical_memory_can_allocate_fixed_allocations@@YA_NXZ");
//};

//void physical_memory_free(void *)
//{
//    mangled_ppc("?physical_memory_free@@YAXPAX@Z");
//};

//void * physical_memory_map_physical_address(unsigned long)
//{
//    mangled_ppc("?physical_memory_map_physical_address@@YAPAXK@Z");
//};

//long physical_memory_get_remaining(void)
//{
//    mangled_ppc("?physical_memory_get_remaining@@YAJXZ");
//};

//bool physical_memory_range_writable(void *, long)
//{
//    mangled_ppc("?physical_memory_range_writable@@YA_NPAXJ@Z");
//};

//void physical_memory_make_range_writeable(void *, unsigned long)
//{
//    mangled_ppc("?physical_memory_make_range_writeable@@YAXPAXK@Z");
//};

//void physical_memory_make_range_write_combined(void *, unsigned long)
//{
//    mangled_ppc("?physical_memory_make_range_write_combined@@YAXPAXK@Z");
//};

//void physical_memory_make_range_readonly(void *, unsigned long)
//{
//    mangled_ppc("?physical_memory_make_range_readonly@@YAXPAXK@Z");
//};

//void physical_memory_dump(void)
//{
//    mangled_ppc("?physical_memory_dump@@YAXXZ");
//};

//long physical_memory_get_minidump_count(void)
//{
//    mangled_ppc("?physical_memory_get_minidump_count@@YAJXZ");
//};

//void * physical_memory_get_minidump_block(long, unsigned long *)
//{
//    mangled_ppc("?physical_memory_get_minidump_block@@YAPAXJPAK@Z");
//};

//struct s_physical_memory_journal_entry * physical_memory_get_journal_entry(void const *)
//{
//    mangled_ppc("?physical_memory_get_journal_entry@@YAPAUs_physical_memory_journal_entry@@PBX@Z");
//};

//void physical_memory_free_journal_entry(struct s_physical_memory_journal_entry *)
//{
//    mangled_ppc("?physical_memory_free_journal_entry@@YAXPAUs_physical_memory_journal_entry@@@Z");
//};

//struct s_physical_memory_journal_entry * physical_memory_get_next_journal_entry(enum memory_stage, struct s_physical_memory_journal_entry const *)
//{
//    mangled_ppc("?physical_memory_get_next_journal_entry@@YAPAUs_physical_memory_journal_entry@@W4memory_stage@@PBU1@@Z");
//};

//void physical_memory_record_journal_entry(void *, enum memory_stage, char const *, long, unsigned long, char const *, long)
//{
//    mangled_ppc("?physical_memory_record_journal_entry@@YAXPAXW4memory_stage@@PBDJK2J@Z");
//};

//struct s_physical_memory_journal_entry * physical_memory_get_free_journal_entry(void)
//{
//    mangled_ppc("?physical_memory_get_free_journal_entry@@YAPAUs_physical_memory_journal_entry@@XZ");
//};

//void * physical_memory_system_malloc(unsigned long, void *, unsigned long)
//{
//    mangled_ppc("?physical_memory_system_malloc@@YAPAXKPAXK@Z");
//};

//void physical_memory_system_free(void *)
//{
//    mangled_ppc("?physical_memory_system_free@@YAXPAX@Z");
//};

//void physical_memory_create_resizeable_contiguous_region(class c_physical_memory_contiguous_region_listener *)
//{
//    mangled_ppc("?physical_memory_create_resizeable_contiguous_region@@YAXPAVc_physical_memory_contiguous_region_listener@@@Z");
//};

//void physical_memory_destroy_resizeable_contiguous_region(class c_physical_memory_contiguous_region_listener const *)
//{
//    mangled_ppc("?physical_memory_destroy_resizeable_contiguous_region@@YAXPBVc_physical_memory_contiguous_region_listener@@@Z");
//};

//public: void * c_physical_memory_index::allocate_region(unsigned long, unsigned long, unsigned long *)
//{
//    mangled_ppc("?allocate_region@c_physical_memory_index@@QAAPAXKKPAK@Z");
//};

//public: bool c_physical_memory_index::grow_region(void *, unsigned long, unsigned long, unsigned long, unsigned long *)
//{
//    mangled_ppc("?grow_region@c_physical_memory_index@@QAA_NPAXKKKPAK@Z");
//};

//public: void c_physical_memory_index::shrink_region(void *, unsigned long, unsigned long)
//{
//    mangled_ppc("?shrink_region@c_physical_memory_index@@QAAXPAXKK@Z");
//};

//public: void c_physical_memory_index::free_region(void *, unsigned long)
//{
//    mangled_ppc("?free_region@c_physical_memory_index@@QAAXPAXK@Z");
//};

//private: bool c_physical_memory_index::allocate_region_pages(unsigned long, unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?allocate_region_pages@c_physical_memory_index@@AAA_NKKPAK0@Z");
//};

//private: bool c_physical_memory_index::grow_region_pages(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long *)
//{
//    mangled_ppc("?grow_region_pages@c_physical_memory_index@@AAA_NKKKKPAK@Z");
//};

//private: void c_physical_memory_index::shrink_region_pages(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?shrink_region_pages@c_physical_memory_index@@AAAXKKK@Z");
//};

//private: void c_physical_memory_index::free_region_pages(unsigned long, unsigned long)
//{
//    mangled_ppc("?free_region_pages@c_physical_memory_index@@AAAXKK@Z");
//};

//private: static void * c_physical_memory_index::page_index_to_address(unsigned long)
//{
//    mangled_ppc("?page_index_to_address@c_physical_memory_index@@CAPAXK@Z");
//};

//private: static unsigned long c_physical_memory_index::address_to_page_index(void *)
//{
//    mangled_ppc("?address_to_page_index@c_physical_memory_index@@CAKPAX@Z");
//};

//private: unsigned long c_physical_memory_index::allocate_page(void)
//{
//    mangled_ppc("?allocate_page@c_physical_memory_index@@AAAKXZ");
//};

//private: static unsigned long c_physical_memory_index::get_page_count(unsigned long)
//{
//    mangled_ppc("?get_page_count@c_physical_memory_index@@CAKK@Z");
//};

//private: static unsigned long c_physical_memory_index::get_region_size(unsigned long)
//{
//    mangled_ppc("?get_region_size@c_physical_memory_index@@CAKK@Z");
//};

//private: bool c_physical_memory_index::allocate_specific_page(unsigned long)
//{
//    mangled_ppc("?allocate_specific_page@c_physical_memory_index@@AAA_NK@Z");
//};

//private: void c_physical_memory_index::free_specific_page(unsigned long)
//{
//    mangled_ppc("?free_specific_page@c_physical_memory_index@@AAAXK@Z");
//};

//bool physical_memory_try_to_resize_contiguous_region(class c_physical_memory_contiguous_region_listener const *, void *, unsigned long, unsigned long, unsigned long, unsigned long, void **, unsigned long *)
//{
//    mangled_ppc("?physical_memory_try_to_resize_contiguous_region@@YA_NPBVc_physical_memory_contiguous_region_listener@@PAXKKKKPAPAXPAK@Z");
//};

//void physical_memory_release_contiguous_region(class c_physical_memory_contiguous_region_listener *, void *, unsigned long)
//{
//    mangled_ppc("?physical_memory_release_contiguous_region@@YAXPAVc_physical_memory_contiguous_region_listener@@PAXK@Z");
//};

//public: virtual void * c_physical_memory_allocation::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@c_physical_memory_allocation@@UAAPAXIPBDJ000@Z");
//};

//void const * physical_memory_xenon_convert_cached_memory_to_read_only_cached_address(void const *)
//{
//    mangled_ppc("?physical_memory_xenon_convert_cached_memory_to_read_only_cached_address@@YAPBXPBX@Z");
//};

//GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//bool physical_memory_try_to_resize_contiguous_buffer_simple(class c_physical_memory_contiguous_region_listener const *, class c_basic_buffer<void>, unsigned long, class c_basic_buffer<void> *)
//{
//    mangled_ppc("?physical_memory_try_to_resize_contiguous_buffer_simple@@YA_NPBVc_physical_memory_contiguous_region_listener@@V?$c_basic_buffer@X@@KPAV2@@Z");
//};

//public: c_basic_buffer<void>::c_basic_buffer<void>(void *, void *)
//{
//    mangled_ppc("??0?$c_basic_buffer@X@@QAA@PAX0@Z");
//};

//public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<enum memory_stage>(enum memory_stage)
//{
//    mangled_ppc("??$?AW4memory_stage@@@?$s_static_array@Us_physical_memory_stage@@$08@@QAAAAUs_physical_memory_stage@@W4memory_stage@@@Z");
//};

//public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_physical_memory_stage@@$08@@QAAAAUs_physical_memory_stage@@H@Z");
//};

//public: struct s_physical_memory_stage & s_static_array<struct s_physical_memory_stage, 9>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_physical_memory_stage@@$08@@QAAAAUs_physical_memory_stage@@J@Z");
//};

//public: struct s_physical_memory_journal_entry & s_static_array<struct s_physical_memory_journal_entry, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_physical_memory_journal_entry@@$0EA@@@QAAAAUs_physical_memory_journal_entry@@J@Z");
//};

//public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<enum memory_stage>(enum memory_stage)
//{
//    mangled_ppc("??$valid@W4memory_stage@@@?$s_static_array@Us_physical_memory_stage@@$08@@SA_NW4memory_stage@@@Z");
//};

//public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_physical_memory_stage@@$08@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_physical_memory_stage, 9>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_physical_memory_stage@@$08@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_physical_memory_journal_entry, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_physical_memory_journal_entry@@$0EA@@@SA_NJ@Z");
//};

//public: s_physical_memory_globals::s_physical_memory_globals(void)
//{
//    mangled_ppc("??0s_physical_memory_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_physical_memory_journal_entry, 64>::s_static_array<struct s_physical_memory_journal_entry, 64>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_physical_memory_journal_entry@@$0EA@@@QAA@XZ");
//};

//public: s_physical_memory_journal_entry::s_physical_memory_journal_entry(void)
//{
//    mangled_ppc("??0s_physical_memory_journal_entry@@QAA@XZ");
//};

