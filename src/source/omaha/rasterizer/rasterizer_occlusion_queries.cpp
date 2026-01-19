/* ---------- headers */

#include "omaha\rasterizer\rasterizer_occlusion_queries.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static short const c_static_hash_table_data<struct s_occlusion_query, 256>::k_hash_entry_invalid; // "?k_hash_entry_invalid@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@2FB"
// public: static long const s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::k_element_count; // "?k_element_count@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0BAA@@@2JB"
// public: static long const c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@2JB"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@JJJ@Z@4JC"
// struct s_occlusion_query_globals g_occlusion_query_globals; // "?g_occlusion_query_globals@@3Us_occlusion_query_globals@@A"

// void rasterizer_occlusion_initialize(void);
// void rasterizer_occlusion_dispose(void);
// void rasterizer_occlusion_window_reset(void);
// long rasterizer_occlusion_submit(enum e_occlusion_query_types, long, long, long, long, void (*)(long));
// bool rasterizer_occlusion_begin(enum e_occlusion_query_types, long, long, long, long, long *);
// long rasterizer_occlusion_find_or_create_cache_entry(long, long, long, long);
// void rasterizer_occlusion_end(long, long, long);
// long rasterizer_occlusions_retrieve(long, unsigned long, bool);
// bool rasterizer_occlusions_get_result(enum e_occlusion_query_types, long, long, long, long *, long *);
// bool rasterizer_occlusion_try_and_delete_entry(enum e_occlusion_query_types, long, long, long);
// public: void s_occlusion_profile::display(char *, long);
// struct s_occlusion_profile * occlusion_profile_get(void);
// public: void s_occlusion_profile::clear(void);
// public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::clear_all(void);
// public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::add_entry(long, long, long);
// public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::remove_entry(long);
// public: struct s_occlusion_query * c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::get_element(long);
// public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::get_index_keys(long, long *, long *, long *);
// public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::find_entry(long, long, long) const;
// public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::iterator_next(long);
// public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data * c_static_hash_table_data<struct s_occlusion_query, 256>::get_data(long);
// public: struct s_occlusion_query * c_static_hash_table_data<struct s_occlusion_query, 256>::get_element(long);
// public: void c_static_hash_table_data<struct s_occlusion_query, 256>::clear_all(void);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::iterator_next(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long, long, long);
// public: static void c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::remove_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long, long, long);
// public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data & s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::operator[]<long>(long);
// public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_data(long) const;
// public: long c_static_hash_table_data<struct s_occlusion_query, 256>::get_total_count(void) const;
// public: long c_static_hash_table_data<struct s_occlusion_query, 256>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<struct s_occlusion_query, 256>::increment_total_count(void);
// public: void c_static_hash_table_data<struct s_occlusion_query, 256>::decrement_total_count(void);
// public: short * c_static_hash_table_data<struct s_occlusion_query, 256>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<struct s_occlusion_query, 256>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_original_hash_entry(void) const;
// public: void s_static_array<short, 256>::set_memory(long);
// public: short const * s_static_array<short, 256>::get_elements(void) const;
// public: short * s_static_array<short, 256>::get_elements(void);
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long);
// public: static bool s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::valid<long>(long);
// public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::operator[]<long>(long) const;
// public: long D3DDevice::CreateQueryTiled(enum _D3DQUERYTYPE, unsigned long, struct D3DQuery **);
// public: long D3DDevice::BeginConditionalSurvey(unsigned long, unsigned long);
// public: long D3DDevice::EndConditionalSurvey(unsigned long);
// public: unsigned long D3DQuery::Release(void);
// public: long D3DQuery::Issue(unsigned long);
// public: long D3DQuery::GetData(void *, unsigned long, unsigned long);

//void rasterizer_occlusion_initialize(void)
//{
//    mangled_ppc("?rasterizer_occlusion_initialize@@YAXXZ");
//};

//void rasterizer_occlusion_dispose(void)
//{
//    mangled_ppc("?rasterizer_occlusion_dispose@@YAXXZ");
//};

//void rasterizer_occlusion_window_reset(void)
//{
//    mangled_ppc("?rasterizer_occlusion_window_reset@@YAXXZ");
//};

//long rasterizer_occlusion_submit(enum e_occlusion_query_types, long, long, long, long, void (*)(long))
//{
//    mangled_ppc("?rasterizer_occlusion_submit@@YAJW4e_occlusion_query_types@@JJJJP6AXJ@Z@Z");
//};

//bool rasterizer_occlusion_begin(enum e_occlusion_query_types, long, long, long, long, long *)
//{
//    mangled_ppc("?rasterizer_occlusion_begin@@YA_NW4e_occlusion_query_types@@JJJJPAJ@Z");
//};

//long rasterizer_occlusion_find_or_create_cache_entry(long, long, long, long)
//{
//    mangled_ppc("?rasterizer_occlusion_find_or_create_cache_entry@@YAJJJJJ@Z");
//};

//void rasterizer_occlusion_end(long, long, long)
//{
//    mangled_ppc("?rasterizer_occlusion_end@@YAXJJJ@Z");
//};

//long rasterizer_occlusions_retrieve(long, unsigned long, bool)
//{
//    mangled_ppc("?rasterizer_occlusions_retrieve@@YAJJK_N@Z");
//};

//bool rasterizer_occlusions_get_result(enum e_occlusion_query_types, long, long, long, long *, long *)
//{
//    mangled_ppc("?rasterizer_occlusions_get_result@@YA_NW4e_occlusion_query_types@@JJJPAJ1@Z");
//};

//bool rasterizer_occlusion_try_and_delete_entry(enum e_occlusion_query_types, long, long, long)
//{
//    mangled_ppc("?rasterizer_occlusion_try_and_delete_entry@@YA_NW4e_occlusion_query_types@@JJJ@Z");
//};

//public: void s_occlusion_profile::display(char *, long)
//{
//    mangled_ppc("?display@s_occlusion_profile@@QAAXPADJ@Z");
//};

//struct s_occlusion_profile * occlusion_profile_get(void)
//{
//    mangled_ppc("?occlusion_profile_get@@YAPAUs_occlusion_profile@@XZ");
//};

//public: void s_occlusion_profile::clear(void)
//{
//    mangled_ppc("?clear@s_occlusion_profile@@QAAXXZ");
//};

//public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAXXZ");
//};

//public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::add_entry(long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAJJJJ@Z");
//};

//public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::remove_entry(long)
//{
//    mangled_ppc("?remove_entry@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAXJ@Z");
//};

//public: struct s_occlusion_query * c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAPAUs_occlusion_query@@J@Z");
//};

//public: void c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::get_index_keys(long, long *, long *, long *)
//{
//    mangled_ppc("?get_index_keys@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAXJPAJ00@Z");
//};

//public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::find_entry(long, long, long) const
//{
//    mangled_ppc("?find_entry@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QBAJJJJ@Z");
//};

//public: long c_simple_hash_table<struct s_occlusion_query, 256, 3307, 3, 337>::iterator_next(long)
//{
//    mangled_ppc("?iterator_next@?$c_simple_hash_table@Us_occlusion_query@@$0BAA@$0MOL@$02$0BFB@@@QAAJJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data * c_static_hash_table_data<struct s_occlusion_query, 256>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct s_occlusion_query * c_static_hash_table_data<struct s_occlusion_query, 256>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAPAUs_occlusion_query@@J@Z");
//};

//public: void c_static_hash_table_data<struct s_occlusion_query, 256>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAXXZ");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::iterator_next(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long)
//{
//    mangled_ppc("?iterator_next@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPAV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@JJJ@Z");
//};

//public: static void c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::remove_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long)
//{
//    mangled_ppc("?remove_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@SAXPAV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@JJJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data & s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0BAA@@@QAAAAUs_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<struct s_occlusion_query, 256>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QBAJXZ");
//};

//public: long c_static_hash_table_data<struct s_occlusion_query, 256>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<struct s_occlusion_query, 256>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAXXZ");
//};

//public: void c_static_hash_table_data<struct s_occlusion_query, 256>::decrement_total_count(void)
//{
//    mangled_ppc("?decrement_total_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<struct s_occlusion_query, 256>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<struct s_occlusion_query, 256>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<struct s_occlusion_query, 256>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@QBAPBFXZ");
//};

//public: void s_static_array<short, 256>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@F$0BAA@@@QAAXJ@Z");
//};

//public: short const * s_static_array<short, 256>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0BAA@@@QBAPBFXZ");
//};

//public: short * s_static_array<short, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0BAA@@@QAAPAFXZ");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<struct s_occlusion_query, 256> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@CAJPBV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<struct s_occlusion_query, 256>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<struct s_occlusion_query, 256> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0MOL@$02$0BFB@@@CAJPAV?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@J@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0BAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data const & s_static_array<struct c_static_hash_table_data<struct s_occlusion_query, 256>::s_data, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@$0BAA@@@QBAABUs_data@?$c_static_hash_table_data@Us_occlusion_query@@$0BAA@@@J@Z");
//};

//public: long D3DDevice::CreateQueryTiled(enum _D3DQUERYTYPE, unsigned long, struct D3DQuery **)
//{
//    mangled_ppc("?CreateQueryTiled@D3DDevice@@QAAJW4_D3DQUERYTYPE@@KPAPAUD3DQuery@@@Z");
//};

//public: long D3DDevice::BeginConditionalSurvey(unsigned long, unsigned long)
//{
//    mangled_ppc("?BeginConditionalSurvey@D3DDevice@@QAAJKK@Z");
//};

//public: long D3DDevice::EndConditionalSurvey(unsigned long)
//{
//    mangled_ppc("?EndConditionalSurvey@D3DDevice@@QAAJK@Z");
//};

//public: unsigned long D3DQuery::Release(void)
//{
//    mangled_ppc("?Release@D3DQuery@@QAAKXZ");
//};

//public: long D3DQuery::Issue(unsigned long)
//{
//    mangled_ppc("?Issue@D3DQuery@@QAAJK@Z");
//};

//public: long D3DQuery::GetData(void *, unsigned long, unsigned long)
//{
//    mangled_ppc("?GetData@D3DQuery@@QAAJPAXKK@Z");
//};

