/* ---------- headers */

#include "omaha\rasterizer\rasterizer_instance_occlusion.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long g_debug_occlusion_bsp_index; // "?g_debug_occlusion_bsp_index@@3JA"
// long g_debug_occlusion_instance_index; // "?g_debug_occlusion_instance_index@@3JA"
// struct s_instance_occlusion_cache g_instance_occlusion_cache; // "?g_instance_occlusion_cache@@3Us_instance_occlusion_cache@@A"

// public: bool s_instance_occlusion_result::begin_occlusion_query(void);
// public: bool s_instance_occlusion_result::occlusion_submitted_not_returned(void) const;
// public: struct D3DQuery * s_instance_occlusion_query::get_d3d_query(void);
// public: void s_instance_occlusion_result::end_occlusion_query(void);
// public: void s_instance_occlusion_query::reallocate_d3d_query(void);
// public: long D3DDevice::CreateQuery(enum _D3DQUERYTYPE, struct D3DQuery **);
// public: void s_instance_occlusion_query::set_d3d_query(struct D3DQuery *);
// void rasterizer_instance_occlusion_initialize(void);
// public: void s_instance_occlusion_query::initialize(void);
// public: void s_instance_occlusion_cache::clear_all(void);
// void rasterizer_instance_occlusion_dispose(void);
// long rasterizer_instance_occlusions_get_or_create_cache_entry(long, long, long);
// public: bool s_instance_occlusion_result::valid_result(void) const;
// public: bool s_instance_occlusion_result::valid_and_occluded(void) const;
// public: long s_instance_occlusion_cache::find_or_create_entry(long, long, long, bool *);
// public: unsigned long s_instance_occlusion_cache::build_key(long, long, long) const;
// public: unsigned long s_instance_occlusion_cache::build_hash(unsigned long) const;
// public: unsigned long s_instance_occlusion_cache::next_index(long) const;
// public: bool s_instance_occlusion_cache::index_contains_valid_data(long) const;
// public: bool s_instance_occlusion_cache::index_contains_search_stop(long) const;
// struct s_instance_occlusion_result * rasterizer_instance_occlusions_get(long, long, long);
// public: struct s_instance_occlusion_query * s_instance_occlusion_cache::find_entry(long, long, long);
// bool rasterizer_instance_occlusions_marked_for_test(long, long, long);
// public: bool s_instance_occlusion_cache::index_requests_occlusion_test(long) const;
// void rasterizer_instance_occlusions_submit_tests(long, struct rasterizer_vertex_transparent *);
// public: void s_instance_occlusion_cache::clear_occlusion_test_request(long);
// public: long s_instance_occlusion_cache::get_index_player_window(long) const;
// public: long s_instance_occlusion_cache::get_index_bsp_index(long) const;
// public: long s_instance_occlusion_cache::get_index_bsp_instance(long) const;
// public: long s_prefetch_bit_scanner::init(__int64*);
// void prefetch_memory(void const *, unsigned long);
// public: long s_prefetch_bit_scanner::get_next(void);
// long rasterizer_instance_occlusions_retrieve(long);
// public: void s_instance_occlusion_cache::remove_entry(long);
// public: unsigned long s_instance_occlusion_cache::prev_index(long) const;
// public: bool s_instance_occlusion_cache::index_contains_tombstone(long) const;
// public: long s_instance_occlusion_cache::optimize_entry(unsigned long);
// public: void s_instance_occlusion_query::copy_from(struct s_instance_occlusion_query const *);
// void rasterizer_instance_occlusion_modify_visibility(long, long, long, float *, bool *);
// public: static class c_player_view * c_player_view::get_global_player_view(long);
// bool _random_boolean(unsigned long *, char const *, char const *, unsigned long);
// public: void s_instance_occlusion_cache::set_occlusion_test_request(long);
// unsigned long get_instance_occlusion_cache_count(void);
// unsigned long get_instance_occlusion_stopper_count(void);
// unsigned long get_instance_occlusion_tombstone_count(void);
// public: long s_int64_bit_vector_scanner<4093>::get_next(void);
// public: long s_int64_bit_vector_scanner<4093>::init(__int64*);
// unsigned long count_bits<__int64>(__int64);

//public: bool s_instance_occlusion_result::begin_occlusion_query(void)
//{
//    mangled_ppc("?begin_occlusion_query@s_instance_occlusion_result@@QAA_NXZ");
//};

//public: bool s_instance_occlusion_result::occlusion_submitted_not_returned(void) const
//{
//    mangled_ppc("?occlusion_submitted_not_returned@s_instance_occlusion_result@@QBA_NXZ");
//};

//public: struct D3DQuery * s_instance_occlusion_query::get_d3d_query(void)
//{
//    mangled_ppc("?get_d3d_query@s_instance_occlusion_query@@QAAPAUD3DQuery@@XZ");
//};

//public: void s_instance_occlusion_result::end_occlusion_query(void)
//{
//    mangled_ppc("?end_occlusion_query@s_instance_occlusion_result@@QAAXXZ");
//};

//public: void s_instance_occlusion_query::reallocate_d3d_query(void)
//{
//    mangled_ppc("?reallocate_d3d_query@s_instance_occlusion_query@@QAAXXZ");
//};

//public: long D3DDevice::CreateQuery(enum _D3DQUERYTYPE, struct D3DQuery **)
//{
//    mangled_ppc("?CreateQuery@D3DDevice@@QAAJW4_D3DQUERYTYPE@@PAPAUD3DQuery@@@Z");
//};

//public: void s_instance_occlusion_query::set_d3d_query(struct D3DQuery *)
//{
//    mangled_ppc("?set_d3d_query@s_instance_occlusion_query@@QAAXPAUD3DQuery@@@Z");
//};

//void rasterizer_instance_occlusion_initialize(void)
//{
//    mangled_ppc("?rasterizer_instance_occlusion_initialize@@YAXXZ");
//};

//public: void s_instance_occlusion_query::initialize(void)
//{
//    mangled_ppc("?initialize@s_instance_occlusion_query@@QAAXXZ");
//};

//public: void s_instance_occlusion_cache::clear_all(void)
//{
//    mangled_ppc("?clear_all@s_instance_occlusion_cache@@QAAXXZ");
//};

//void rasterizer_instance_occlusion_dispose(void)
//{
//    mangled_ppc("?rasterizer_instance_occlusion_dispose@@YAXXZ");
//};

//long rasterizer_instance_occlusions_get_or_create_cache_entry(long, long, long)
//{
//    mangled_ppc("?rasterizer_instance_occlusions_get_or_create_cache_entry@@YAJJJJ@Z");
//};

//public: bool s_instance_occlusion_result::valid_result(void) const
//{
//    mangled_ppc("?valid_result@s_instance_occlusion_result@@QBA_NXZ");
//};

//public: bool s_instance_occlusion_result::valid_and_occluded(void) const
//{
//    mangled_ppc("?valid_and_occluded@s_instance_occlusion_result@@QBA_NXZ");
//};

//public: long s_instance_occlusion_cache::find_or_create_entry(long, long, long, bool *)
//{
//    mangled_ppc("?find_or_create_entry@s_instance_occlusion_cache@@QAAJJJJPA_N@Z");
//};

//public: unsigned long s_instance_occlusion_cache::build_key(long, long, long) const
//{
//    mangled_ppc("?build_key@s_instance_occlusion_cache@@QBAKJJJ@Z");
//};

//public: unsigned long s_instance_occlusion_cache::build_hash(unsigned long) const
//{
//    mangled_ppc("?build_hash@s_instance_occlusion_cache@@QBAKK@Z");
//};

//public: unsigned long s_instance_occlusion_cache::next_index(long) const
//{
//    mangled_ppc("?next_index@s_instance_occlusion_cache@@QBAKJ@Z");
//};

//public: bool s_instance_occlusion_cache::index_contains_valid_data(long) const
//{
//    mangled_ppc("?index_contains_valid_data@s_instance_occlusion_cache@@QBA_NJ@Z");
//};

//public: bool s_instance_occlusion_cache::index_contains_search_stop(long) const
//{
//    mangled_ppc("?index_contains_search_stop@s_instance_occlusion_cache@@QBA_NJ@Z");
//};

//struct s_instance_occlusion_result * rasterizer_instance_occlusions_get(long, long, long)
//{
//    mangled_ppc("?rasterizer_instance_occlusions_get@@YAPAUs_instance_occlusion_result@@JJJ@Z");
//};

//public: struct s_instance_occlusion_query * s_instance_occlusion_cache::find_entry(long, long, long)
//{
//    mangled_ppc("?find_entry@s_instance_occlusion_cache@@QAAPAUs_instance_occlusion_query@@JJJ@Z");
//};

//bool rasterizer_instance_occlusions_marked_for_test(long, long, long)
//{
//    mangled_ppc("?rasterizer_instance_occlusions_marked_for_test@@YA_NJJJ@Z");
//};

//public: bool s_instance_occlusion_cache::index_requests_occlusion_test(long) const
//{
//    mangled_ppc("?index_requests_occlusion_test@s_instance_occlusion_cache@@QBA_NJ@Z");
//};

//void rasterizer_instance_occlusions_submit_tests(long, struct rasterizer_vertex_transparent *)
//{
//    mangled_ppc("?rasterizer_instance_occlusions_submit_tests@@YAXJPAUrasterizer_vertex_transparent@@@Z");
//};

//public: void s_instance_occlusion_cache::clear_occlusion_test_request(long)
//{
//    mangled_ppc("?clear_occlusion_test_request@s_instance_occlusion_cache@@QAAXJ@Z");
//};

//public: long s_instance_occlusion_cache::get_index_player_window(long) const
//{
//    mangled_ppc("?get_index_player_window@s_instance_occlusion_cache@@QBAJJ@Z");
//};

//public: long s_instance_occlusion_cache::get_index_bsp_index(long) const
//{
//    mangled_ppc("?get_index_bsp_index@s_instance_occlusion_cache@@QBAJJ@Z");
//};

//public: long s_instance_occlusion_cache::get_index_bsp_instance(long) const
//{
//    mangled_ppc("?get_index_bsp_instance@s_instance_occlusion_cache@@QBAJJ@Z");
//};

//public: long s_prefetch_bit_scanner::init(__int64*)
//{
//    mangled_ppc("?init@s_prefetch_bit_scanner@@QAAJPA_J@Z");
//};

//void prefetch_memory(void const *, unsigned long)
//{
//    mangled_ppc("?prefetch_memory@@YAXPBXK@Z");
//};

//public: long s_prefetch_bit_scanner::get_next(void)
//{
//    mangled_ppc("?get_next@s_prefetch_bit_scanner@@QAAJXZ");
//};

//long rasterizer_instance_occlusions_retrieve(long)
//{
//    mangled_ppc("?rasterizer_instance_occlusions_retrieve@@YAJJ@Z");
//};

//public: void s_instance_occlusion_cache::remove_entry(long)
//{
//    mangled_ppc("?remove_entry@s_instance_occlusion_cache@@QAAXJ@Z");
//};

//public: unsigned long s_instance_occlusion_cache::prev_index(long) const
//{
//    mangled_ppc("?prev_index@s_instance_occlusion_cache@@QBAKJ@Z");
//};

//public: bool s_instance_occlusion_cache::index_contains_tombstone(long) const
//{
//    mangled_ppc("?index_contains_tombstone@s_instance_occlusion_cache@@QBA_NJ@Z");
//};

//public: long s_instance_occlusion_cache::optimize_entry(unsigned long)
//{
//    mangled_ppc("?optimize_entry@s_instance_occlusion_cache@@QAAJK@Z");
//};

//public: void s_instance_occlusion_query::copy_from(struct s_instance_occlusion_query const *)
//{
//    mangled_ppc("?copy_from@s_instance_occlusion_query@@QAAXPBU1@@Z");
//};

//void rasterizer_instance_occlusion_modify_visibility(long, long, long, float *, bool *)
//{
//    mangled_ppc("?rasterizer_instance_occlusion_modify_visibility@@YAXJJJPAMPA_N@Z");
//};

//public: static class c_player_view * c_player_view::get_global_player_view(long)
//{
//    mangled_ppc("?get_global_player_view@c_player_view@@SAPAV1@J@Z");
//};

//bool _random_boolean(unsigned long *, char const *, char const *, unsigned long)
//{
//    mangled_ppc("?_random_boolean@@YA_NPAKPBD1K@Z");
//};

//public: void s_instance_occlusion_cache::set_occlusion_test_request(long)
//{
//    mangled_ppc("?set_occlusion_test_request@s_instance_occlusion_cache@@QAAXJ@Z");
//};

//unsigned long get_instance_occlusion_cache_count(void)
//{
//    mangled_ppc("?get_instance_occlusion_cache_count@@YAKXZ");
//};

//unsigned long get_instance_occlusion_stopper_count(void)
//{
//    mangled_ppc("?get_instance_occlusion_stopper_count@@YAKXZ");
//};

//unsigned long get_instance_occlusion_tombstone_count(void)
//{
//    mangled_ppc("?get_instance_occlusion_tombstone_count@@YAKXZ");
//};

//public: long s_int64_bit_vector_scanner<4093>::get_next(void)
//{
//    mangled_ppc("?get_next@?$s_int64_bit_vector_scanner@$0PPN@@@QAAJXZ");
//};

//public: long s_int64_bit_vector_scanner<4093>::init(__int64*)
//{
//    mangled_ppc("?init@?$s_int64_bit_vector_scanner@$0PPN@@@QAAJPA_J@Z");
//};

//unsigned long count_bits<__int64>(__int64)
//{
//    mangled_ppc("??$count_bits@_J@@YAK_J@Z");
//};

