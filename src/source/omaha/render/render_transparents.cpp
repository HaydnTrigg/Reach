/* ---------- headers */

#include "omaha\render\render_transparents.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<unsigned short, 4>::k_element_count; // "?k_element_count@?$s_static_array@G$03@@2JB"
// private: static long c_transparency_renderer::m_current_marker_index; // "?m_current_marker_index@c_transparency_renderer@@0JA"
// bool render_transparents_enabled; // "?render_transparents_enabled@@3_NA"
// bool render_debug_transparent_cull; // "?render_debug_transparent_cull@@3_NA"
// long render_transparents_bucket_low_res; // "?render_transparents_bucket_low_res@@3JA"
// long render_transparents_bucket_distribution_method; // "?render_transparents_bucket_distribution_method@@3JA"
// private: static class s_static_array<struct c_transparency_renderer::s_fixed_order_transparent_elements, 768> c_transparency_renderer::m_fixed_order_transparent_elements; // "?m_fixed_order_transparent_elements@c_transparency_renderer@@0V?$s_static_array@Us_fixed_order_transparent_elements@c_transparency_renderer@@$0DAA@@@A"
// private: static long c_transparency_renderer::m_fixed_order_group_start; // "?m_fixed_order_group_start@c_transparency_renderer@@0JA"
// private: static long c_transparency_renderer::m_fixed_order_transparent_element_count; // "?m_fixed_order_transparent_element_count@c_transparency_renderer@@0JA"
// private: static long *c_transparency_renderer::m_fixed_order_object_markers; // "?m_fixed_order_object_markers@c_transparency_renderer@@0PAJA"
// private: static long c_transparency_renderer::m_fixed_order_object_count; // "?m_fixed_order_object_count@c_transparency_renderer@@0JA"
// private: static struct s_transparency_marker *c_transparency_renderer::m_markers; // "?m_markers@c_transparency_renderer@@0PAUs_transparency_marker@@A"
// private: static class s_static_array<float, 256> c_transparency_renderer::m_low_res_element_distances; // "?m_low_res_element_distances@c_transparency_renderer@@0V?$s_static_array@M$0BAA@@@A"
// private: static class s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4> c_transparency_renderer::m_low_res_buckets; // "?m_low_res_buckets@c_transparency_renderer@@0V?$s_static_array@Us_transparency_bucket@c_transparency_renderer@@$03@@A"
// private: static class s_static_array<struct s_transparent_types, 256> c_transparency_renderer::m_low_res_transparents; // "?m_low_res_transparents@c_transparency_renderer@@0V?$s_static_array@Us_transparent_types@@$0BAA@@@A"
// private: static class s_static_array<struct s_transparent_types, 768> c_transparency_renderer::transparents; // "?transparents@c_transparency_renderer@@0V?$s_static_array@Us_transparent_types@@$0DAA@@@A"
// class c_transparency_renderer g_transparency_renderer; // "?g_transparency_renderer@@3Vc_transparency_renderer@@A"
// private: static bool c_transparency_renderer::m_using_active_camo; // "?m_using_active_camo@c_transparency_renderer@@0_NA"
// private: static bool c_transparency_renderer::m_needs_active_camo_ldr_resolve; // "?m_needs_active_camo_ldr_resolve@c_transparency_renderer@@0_NA"
// bool render_debug_transparents; // "?render_debug_transparents@@3_NA"
// private: static long c_transparency_renderer::m_total_low_res_transparent_count; // "?m_total_low_res_transparent_count@c_transparency_renderer@@0JA"
// private: static long c_transparency_renderer::m_total_transparent_count; // "?m_total_transparent_count@c_transparency_renderer@@0JA"
// short render_debug_transparent_sort_method; // "?render_debug_transparent_sort_method@@3FA"
// bool render_debug_slow_transparents; // "?render_debug_slow_transparents@@3_NA"
// bool render_debug_transparent_cull_flip; // "?render_debug_transparent_cull_flip@@3_NA"
// private: static class c_sorter<struct s_transparent_types, 768> c_transparency_renderer::transparent_sorted_order; // "?transparent_sorted_order@c_transparency_renderer@@0V?$c_sorter@Us_transparent_types@@$0DAA@@@A"
// private: static class c_sorter<struct s_transparent_types, 256> c_transparency_renderer::m_low_res_transparent_sorted_order; // "?m_low_res_transparent_sorted_order@c_transparency_renderer@@0V?$c_sorter@Us_transparent_types@@$0BAA@@@A"
// private: static class c_sorter<float, 256> c_transparency_renderer::m_low_res_element_distances_sorter; // "?m_low_res_element_distances_sorter@c_transparency_renderer@@0V?$c_sorter@M$0BAA@@@A"

// public: static void c_transparency_renderer::reset(void);
// public: static void c_transparency_renderer::begin_fixed_order_group(void);
// public: static void c_transparency_renderer::end_fixed_order_group(void);
// public: static void c_transparency_renderer::add_fixed_order_element(long, long);
// public: static void c_transparency_renderer::push_marker(void);
// public: static void c_transparency_renderer::pop_marker(void);
// public: static long c_transparency_renderer::add_element(union real_point3d const *, struct plane3d const *, float, enum e_transparent_sort_layer, void (*)(void const *, long, short, short), void const *, long, short, short, float, bool);
// private: static void c_transparency_renderer::add_bucket_element(struct s_transparent_types const *, long);
// private: static void c_transparency_renderer::group_plane_and_point_of_sublist(unsigned short *, unsigned short, unsigned short, unsigned short *);
// private: static int c_transparency_renderer::plane_location_testing(unsigned short, unsigned short);
// private: static void c_transparency_renderer::sort_plane_and_point(unsigned short *, unsigned short, unsigned short, unsigned short, struct c_transparency_renderer::s_transparent_order_splitter *, unsigned short, unsigned short);
// private: static void c_transparency_renderer::sort_transparents_of_fixed_order_object(long, unsigned short *);
// private: static void c_transparency_renderer::sort_low_res_transparents(void);
// public: s_distance_heap::s_distance_heap(void);
// public: void s_distance_heap::clear(void);
// public: void s_distance_heap::insert(float, long);
// public: void s_distance_heap::heap_up(long, float, long);
// public: void s_distance_heap::heap_down_full_heap(long, float, long);
// bool transparent_layer_and_z_sort_proc(short, short, void const *);
// bool z_distance_sort(short, short, void const *);
// private: static void c_transparency_renderer::print_transparent_element(long, long, struct s_transparent_types *);
// public: static void c_transparency_renderer::sort(void);
// private: static void c_transparency_renderer::render_low_res_transparents_bucket_callback(void const *, long, short, short);
// public: static void c_transparency_renderer::render(bool);
// public: static void c_transparency_renderer::set_using_active_camo(void);
// public: static void c_transparency_renderer::resolve_framebuffer_for_active_camo(void);
// public: static void c_transparency_renderer::set_active_camo_bounds(union short_rectangle2d const *, union short_rectangle2d const *);
// public: void c_sorter<struct s_transparent_types, 768>::sort(bool (*)(short, short, void const *), long);
// public: unsigned short c_sorter<struct s_transparent_types, 768>::get_order_entry(long);
// public: void c_sorter<struct s_transparent_types, 768>::set_order_entry(long, unsigned short);
// public: void c_sorter<struct s_transparent_types, 768>::set_count(long);
// public: void c_sorter<struct s_transparent_types, 768>::clear(void);
// public: unsigned short * s_static_array<unsigned short, 768>::get_elements(void);
// public: void c_sorter<struct s_transparent_types, 256>::sort(bool (*)(short, short, void const *), long);
// public: unsigned short c_sorter<struct s_transparent_types, 256>::get_order_entry(long);
// public: void c_sorter<struct s_transparent_types, 256>::set_order_entry(long, unsigned short);
// public: void c_sorter<struct s_transparent_types, 256>::clear(void);
// public: struct s_transparent_types * s_static_array<struct s_transparent_types, 256>::get_elements(void);
// public: void c_sorter<float, 256>::sort(bool (*)(short, short, void const *), long);
// public: unsigned short c_sorter<float, 256>::get_order_entry(long);
// public: void c_sorter<float, 256>::set_order_entry(long, unsigned short);
// public: void c_sorter<float, 256>::clear(void);
// public: unsigned short * s_static_array<unsigned short, 256>::get_elements(void);
// public: struct c_transparency_renderer::s_fixed_order_transparent_elements & s_static_array<struct c_transparency_renderer::s_fixed_order_transparent_elements, 768>::operator[]<long>(long);
// public: struct s_transparent_types & s_static_array<struct s_transparent_types, 256>::operator[]<long>(long);
// public: struct s_transparent_types & s_static_array<struct s_transparent_types, 768>::operator[]<long>(long);
// public: struct s_transparent_types & s_static_array<struct s_transparent_types, 768>::operator[]<unsigned short>(unsigned short);
// private: static void c_transparency_renderer::print_transparents_array<256>(long, long, class s_static_array<struct s_transparent_types, 256> &, class c_sorter<struct s_transparent_types, 256> &);
// public: float & s_static_array<float, 256>::operator[]<long>(long);
// public: char const * s_static_string<512>::print(char const *, ...);
// public: char const * s_static_string<512>::get_string(void) const;
// public: c_static_string<512>::c_static_string<512>(void);
// public: struct c_transparency_renderer::s_transparency_bucket & s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::operator[]<long>(long);
// public: unsigned short & s_static_array<unsigned short, 4>::operator[]<unsigned long>(unsigned long);
// public: unsigned short & s_static_array<unsigned short, 768>::operator[]<unsigned long>(unsigned long);
// public: unsigned short & s_static_array<unsigned short, 4>::operator[]<enum e_transparent_sort_layer>(enum e_transparent_sort_layer);
// public: unsigned short & s_static_array<unsigned short, 768>::operator[]<unsigned short>(unsigned short);
// public: unsigned short & s_static_array<unsigned short, 768>::operator[]<int>(int);
// private: static void c_transparency_renderer::print_transparents_array<768>(long, long, class s_static_array<struct s_transparent_types, 768> &, class c_sorter<struct s_transparent_types, 768> &);
// public: struct c_transparency_renderer::s_transparency_bucket & s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::operator[]<short>(short);
// public: struct s_transparent_types & s_static_array<struct s_transparent_types, 256>::operator[]<unsigned short>(unsigned short);
// public: unsigned short & s_static_array<unsigned short, 768>::operator[]<long>(long);
// public: unsigned short & s_static_array<unsigned short, 256>::operator[]<long>(long);
// public: static bool s_static_array<struct c_transparency_renderer::s_fixed_order_transparent_elements, 768>::valid<long>(long);
// public: static bool s_static_array<struct s_transparent_types, 256>::valid<long>(long);
// public: static bool s_static_array<struct s_transparent_types, 768>::valid<long>(long);
// public: static bool s_static_array<struct s_transparent_types, 768>::valid<unsigned short>(unsigned short);
// public: static bool s_static_array<float, 256>::valid<long>(long);
// public: void s_static_string<512>::clear(void);
// public: static bool s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::valid<long>(long);
// public: static bool s_static_array<unsigned short, 4>::valid<unsigned long>(unsigned long);
// public: static bool s_static_array<unsigned short, 768>::valid<unsigned long>(unsigned long);
// public: static bool s_static_array<unsigned short, 4>::valid<enum e_transparent_sort_layer>(enum e_transparent_sort_layer);
// public: static bool s_static_array<unsigned short, 768>::valid<unsigned short>(unsigned short);
// public: static bool s_static_array<unsigned short, 768>::valid<int>(int);
// public: static bool s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::valid<short>(short);
// public: static bool s_static_array<struct s_transparent_types, 256>::valid<unsigned short>(unsigned short);
// public: static bool s_static_array<unsigned short, 768>::valid<long>(long);
// public: static bool s_static_array<unsigned short, 256>::valid<long>(long);
// float abs(float);
// struct plane3d * plane3d_negate(struct plane3d const *, struct plane3d *);
// public: c_sorter<struct s_transparent_types, 768>::c_sorter<struct s_transparent_types, 768>(struct s_transparent_types *);
// public: struct s_transparent_types * s_static_array<struct s_transparent_types, 768>::get_elements(void);
// public: c_sorter<struct s_transparent_types, 256>::c_sorter<struct s_transparent_types, 256>(struct s_transparent_types *);
// public: c_sorter<float, 256>::c_sorter<float, 256>(float *);
// public: float * s_static_array<float, 256>::get_elements(void);

//public: static void c_transparency_renderer::reset(void)
//{
//    mangled_ppc("?reset@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::begin_fixed_order_group(void)
//{
//    mangled_ppc("?begin_fixed_order_group@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::end_fixed_order_group(void)
//{
//    mangled_ppc("?end_fixed_order_group@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::add_fixed_order_element(long, long)
//{
//    mangled_ppc("?add_fixed_order_element@c_transparency_renderer@@SAXJJ@Z");
//};

//public: static void c_transparency_renderer::push_marker(void)
//{
//    mangled_ppc("?push_marker@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::pop_marker(void)
//{
//    mangled_ppc("?pop_marker@c_transparency_renderer@@SAXXZ");
//};

//public: static long c_transparency_renderer::add_element(union real_point3d const *, struct plane3d const *, float, enum e_transparent_sort_layer, void (*)(void const *, long, short, short), void const *, long, short, short, float, bool)
//{
//    mangled_ppc("?add_element@c_transparency_renderer@@SAJPBTreal_point3d@@PBUplane3d@@MW4e_transparent_sort_layer@@P6AXPBXJFF@Z3JFFM_N@Z");
//};

//private: static void c_transparency_renderer::add_bucket_element(struct s_transparent_types const *, long)
//{
//    mangled_ppc("?add_bucket_element@c_transparency_renderer@@CAXPBUs_transparent_types@@J@Z");
//};

//private: static void c_transparency_renderer::group_plane_and_point_of_sublist(unsigned short *, unsigned short, unsigned short, unsigned short *)
//{
//    mangled_ppc("?group_plane_and_point_of_sublist@c_transparency_renderer@@CAXPAGGG0@Z");
//};

//private: static int c_transparency_renderer::plane_location_testing(unsigned short, unsigned short)
//{
//    mangled_ppc("?plane_location_testing@c_transparency_renderer@@CAHGG@Z");
//};

//private: static void c_transparency_renderer::sort_plane_and_point(unsigned short *, unsigned short, unsigned short, unsigned short, struct c_transparency_renderer::s_transparent_order_splitter *, unsigned short, unsigned short)
//{
//    mangled_ppc("?sort_plane_and_point@c_transparency_renderer@@CAXPAGGGGPAUs_transparent_order_splitter@1@GG@Z");
//};

//private: static void c_transparency_renderer::sort_transparents_of_fixed_order_object(long, unsigned short *)
//{
//    mangled_ppc("?sort_transparents_of_fixed_order_object@c_transparency_renderer@@CAXJPAG@Z");
//};

//private: static void c_transparency_renderer::sort_low_res_transparents(void)
//{
//    mangled_ppc("?sort_low_res_transparents@c_transparency_renderer@@CAXXZ");
//};

//public: s_distance_heap::s_distance_heap(void)
//{
//    mangled_ppc("??0s_distance_heap@@QAA@XZ");
//};

//public: void s_distance_heap::clear(void)
//{
//    mangled_ppc("?clear@s_distance_heap@@QAAXXZ");
//};

//public: void s_distance_heap::insert(float, long)
//{
//    mangled_ppc("?insert@s_distance_heap@@QAAXMJ@Z");
//};

//public: void s_distance_heap::heap_up(long, float, long)
//{
//    mangled_ppc("?heap_up@s_distance_heap@@QAAXJMJ@Z");
//};

//public: void s_distance_heap::heap_down_full_heap(long, float, long)
//{
//    mangled_ppc("?heap_down_full_heap@s_distance_heap@@QAAXJMJ@Z");
//};

//bool transparent_layer_and_z_sort_proc(short, short, void const *)
//{
//    mangled_ppc("?transparent_layer_and_z_sort_proc@@YA_NFFPBX@Z");
//};

//bool z_distance_sort(short, short, void const *)
//{
//    mangled_ppc("?z_distance_sort@@YA_NFFPBX@Z");
//};

//private: static void c_transparency_renderer::print_transparent_element(long, long, struct s_transparent_types *)
//{
//    mangled_ppc("?print_transparent_element@c_transparency_renderer@@CAXJJPAUs_transparent_types@@@Z");
//};

//public: static void c_transparency_renderer::sort(void)
//{
//    mangled_ppc("?sort@c_transparency_renderer@@SAXXZ");
//};

//private: static void c_transparency_renderer::render_low_res_transparents_bucket_callback(void const *, long, short, short)
//{
//    mangled_ppc("?render_low_res_transparents_bucket_callback@c_transparency_renderer@@CAXPBXJFF@Z");
//};

//public: static void c_transparency_renderer::render(bool)
//{
//    mangled_ppc("?render@c_transparency_renderer@@SAX_N@Z");
//};

//public: static void c_transparency_renderer::set_using_active_camo(void)
//{
//    mangled_ppc("?set_using_active_camo@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::resolve_framebuffer_for_active_camo(void)
//{
//    mangled_ppc("?resolve_framebuffer_for_active_camo@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_transparency_renderer::set_active_camo_bounds(union short_rectangle2d const *, union short_rectangle2d const *)
//{
//    mangled_ppc("?set_active_camo_bounds@c_transparency_renderer@@SAXPBTshort_rectangle2d@@0@Z");
//};

//public: void c_sorter<struct s_transparent_types, 768>::sort(bool (*)(short, short, void const *), long)
//{
//    mangled_ppc("?sort@?$c_sorter@Us_transparent_types@@$0DAA@@@QAAXP6A_NFFPBX@ZJ@Z");
//};

//public: unsigned short c_sorter<struct s_transparent_types, 768>::get_order_entry(long)
//{
//    mangled_ppc("?get_order_entry@?$c_sorter@Us_transparent_types@@$0DAA@@@QAAGJ@Z");
//};

//public: void c_sorter<struct s_transparent_types, 768>::set_order_entry(long, unsigned short)
//{
//    mangled_ppc("?set_order_entry@?$c_sorter@Us_transparent_types@@$0DAA@@@QAAXJG@Z");
//};

//public: void c_sorter<struct s_transparent_types, 768>::set_count(long)
//{
//    mangled_ppc("?set_count@?$c_sorter@Us_transparent_types@@$0DAA@@@QAAXJ@Z");
//};

//public: void c_sorter<struct s_transparent_types, 768>::clear(void)
//{
//    mangled_ppc("?clear@?$c_sorter@Us_transparent_types@@$0DAA@@@QAAXXZ");
//};

//public: unsigned short * s_static_array<unsigned short, 768>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@G$0DAA@@@QAAPAGXZ");
//};

//public: void c_sorter<struct s_transparent_types, 256>::sort(bool (*)(short, short, void const *), long)
//{
//    mangled_ppc("?sort@?$c_sorter@Us_transparent_types@@$0BAA@@@QAAXP6A_NFFPBX@ZJ@Z");
//};

//public: unsigned short c_sorter<struct s_transparent_types, 256>::get_order_entry(long)
//{
//    mangled_ppc("?get_order_entry@?$c_sorter@Us_transparent_types@@$0BAA@@@QAAGJ@Z");
//};

//public: void c_sorter<struct s_transparent_types, 256>::set_order_entry(long, unsigned short)
//{
//    mangled_ppc("?set_order_entry@?$c_sorter@Us_transparent_types@@$0BAA@@@QAAXJG@Z");
//};

//public: void c_sorter<struct s_transparent_types, 256>::clear(void)
//{
//    mangled_ppc("?clear@?$c_sorter@Us_transparent_types@@$0BAA@@@QAAXXZ");
//};

//public: struct s_transparent_types * s_static_array<struct s_transparent_types, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_transparent_types@@$0BAA@@@QAAPAUs_transparent_types@@XZ");
//};

//public: void c_sorter<float, 256>::sort(bool (*)(short, short, void const *), long)
//{
//    mangled_ppc("?sort@?$c_sorter@M$0BAA@@@QAAXP6A_NFFPBX@ZJ@Z");
//};

//public: unsigned short c_sorter<float, 256>::get_order_entry(long)
//{
//    mangled_ppc("?get_order_entry@?$c_sorter@M$0BAA@@@QAAGJ@Z");
//};

//public: void c_sorter<float, 256>::set_order_entry(long, unsigned short)
//{
//    mangled_ppc("?set_order_entry@?$c_sorter@M$0BAA@@@QAAXJG@Z");
//};

//public: void c_sorter<float, 256>::clear(void)
//{
//    mangled_ppc("?clear@?$c_sorter@M$0BAA@@@QAAXXZ");
//};

//public: unsigned short * s_static_array<unsigned short, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@G$0BAA@@@QAAPAGXZ");
//};

//public: struct c_transparency_renderer::s_fixed_order_transparent_elements & s_static_array<struct c_transparency_renderer::s_fixed_order_transparent_elements, 768>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_fixed_order_transparent_elements@c_transparency_renderer@@$0DAA@@@QAAAAUs_fixed_order_transparent_elements@c_transparency_renderer@@J@Z");
//};

//public: struct s_transparent_types & s_static_array<struct s_transparent_types, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_transparent_types@@$0BAA@@@QAAAAUs_transparent_types@@J@Z");
//};

//public: struct s_transparent_types & s_static_array<struct s_transparent_types, 768>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_transparent_types@@$0DAA@@@QAAAAUs_transparent_types@@J@Z");
//};

//public: struct s_transparent_types & s_static_array<struct s_transparent_types, 768>::operator[]<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$?AG@?$s_static_array@Us_transparent_types@@$0DAA@@@QAAAAUs_transparent_types@@G@Z");
//};

//private: static void c_transparency_renderer::print_transparents_array<256>(long, long, class s_static_array<struct s_transparent_types, 256> &, class c_sorter<struct s_transparent_types, 256> &)
//{
//    mangled_ppc("??$print_transparents_array@$0BAA@@c_transparency_renderer@@CAXJJAAV?$s_static_array@Us_transparent_types@@$0BAA@@@AAV?$c_sorter@Us_transparent_types@@$0BAA@@@@Z");
//};

//public: float & s_static_array<float, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@M$0BAA@@@QAAAAMJ@Z");
//};

//public: char const * s_static_string<512>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0CAA@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<512>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0CAA@@@QBAPBDXZ");
//};

//public: c_static_string<512>::c_static_string<512>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0CAA@@@QAA@XZ");
//};

//public: struct c_transparency_renderer::s_transparency_bucket & s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_transparency_bucket@c_transparency_renderer@@$03@@QAAAAUs_transparency_bucket@c_transparency_renderer@@J@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 4>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@G$03@@QAAAAGK@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 768>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@G$0DAA@@@QAAAAGK@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 4>::operator[]<enum e_transparent_sort_layer>(enum e_transparent_sort_layer)
//{
//    mangled_ppc("??$?AW4e_transparent_sort_layer@@@?$s_static_array@G$03@@QAAAAGW4e_transparent_sort_layer@@@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 768>::operator[]<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$?AG@?$s_static_array@G$0DAA@@@QAAAAGG@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 768>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@G$0DAA@@@QAAAAGH@Z");
//};

//private: static void c_transparency_renderer::print_transparents_array<768>(long, long, class s_static_array<struct s_transparent_types, 768> &, class c_sorter<struct s_transparent_types, 768> &)
//{
//    mangled_ppc("??$print_transparents_array@$0DAA@@c_transparency_renderer@@CAXJJAAV?$s_static_array@Us_transparent_types@@$0DAA@@@AAV?$c_sorter@Us_transparent_types@@$0DAA@@@@Z");
//};

//public: struct c_transparency_renderer::s_transparency_bucket & s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_transparency_bucket@c_transparency_renderer@@$03@@QAAAAUs_transparency_bucket@c_transparency_renderer@@F@Z");
//};

//public: struct s_transparent_types & s_static_array<struct s_transparent_types, 256>::operator[]<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$?AG@?$s_static_array@Us_transparent_types@@$0BAA@@@QAAAAUs_transparent_types@@G@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 768>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@G$0DAA@@@QAAAAGJ@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@G$0BAA@@@QAAAAGJ@Z");
//};

//public: static bool s_static_array<struct c_transparency_renderer::s_fixed_order_transparent_elements, 768>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_fixed_order_transparent_elements@c_transparency_renderer@@$0DAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_transparent_types, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_transparent_types@@$0BAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_transparent_types, 768>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_transparent_types@@$0DAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_transparent_types, 768>::valid<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$valid@G@?$s_static_array@Us_transparent_types@@$0DAA@@@SA_NG@Z");
//};

//public: static bool s_static_array<float, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@M$0BAA@@@SA_NJ@Z");
//};

//public: void s_static_string<512>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0CAA@@@QAAXXZ");
//};

//public: static bool s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_transparency_bucket@c_transparency_renderer@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned short, 4>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@G$03@@SA_NK@Z");
//};

//public: static bool s_static_array<unsigned short, 768>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@G$0DAA@@@SA_NK@Z");
//};

//public: static bool s_static_array<unsigned short, 4>::valid<enum e_transparent_sort_layer>(enum e_transparent_sort_layer)
//{
//    mangled_ppc("??$valid@W4e_transparent_sort_layer@@@?$s_static_array@G$03@@SA_NW4e_transparent_sort_layer@@@Z");
//};

//public: static bool s_static_array<unsigned short, 768>::valid<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$valid@G@?$s_static_array@G$0DAA@@@SA_NG@Z");
//};

//public: static bool s_static_array<unsigned short, 768>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@G$0DAA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct c_transparency_renderer::s_transparency_bucket, 4>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_transparency_bucket@c_transparency_renderer@@$03@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_transparent_types, 256>::valid<unsigned short>(unsigned short)
//{
//    mangled_ppc("??$valid@G@?$s_static_array@Us_transparent_types@@$0BAA@@@SA_NG@Z");
//};

//public: static bool s_static_array<unsigned short, 768>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@G$0DAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned short, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@G$0BAA@@@SA_NJ@Z");
//};

//float abs(float)
//{
//    mangled_ppc("?abs@@YAMM@Z");
//};

//struct plane3d * plane3d_negate(struct plane3d const *, struct plane3d *)
//{
//    mangled_ppc("?plane3d_negate@@YAPAUplane3d@@PBU1@PAU1@@Z");
//};

//public: c_sorter<struct s_transparent_types, 768>::c_sorter<struct s_transparent_types, 768>(struct s_transparent_types *)
//{
//    mangled_ppc("??0?$c_sorter@Us_transparent_types@@$0DAA@@@QAA@PAUs_transparent_types@@@Z");
//};

//public: struct s_transparent_types * s_static_array<struct s_transparent_types, 768>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_transparent_types@@$0DAA@@@QAAPAUs_transparent_types@@XZ");
//};

//public: c_sorter<struct s_transparent_types, 256>::c_sorter<struct s_transparent_types, 256>(struct s_transparent_types *)
//{
//    mangled_ppc("??0?$c_sorter@Us_transparent_types@@$0BAA@@@QAA@PAUs_transparent_types@@@Z");
//};

//public: c_sorter<float, 256>::c_sorter<float, 256>(float *)
//{
//    mangled_ppc("??0?$c_sorter@M$0BAA@@@QAA@PAM@Z");
//};

//public: float * s_static_array<float, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@M$0BAA@@@QAAPAMXZ");
//};

