/* ---------- headers */

#include "omaha\physics\collision_kd_hierarchy_internal.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static short const c_static_hash_table_data<long, 6144>::k_hash_entry_invalid; // "?k_hash_entry_invalid@?$c_static_hash_table_data@J$0BIAA@@@2FB"
// public: static long const s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::k_element_count; // "?k_element_count@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0BIAA@@@$0BIAA@@@2JB"
// public: static long const s_static_array<short, 6144>::k_element_count; // "?k_element_count@?$s_static_array@F$0BIAA@@@2JB"
// public: static long const s_static_array<struct s_cluster_reference, 512>::k_element_count; // "?k_element_count@?$s_static_array@Us_cluster_reference@@$0CAA@@@2JB"
// public: static long const c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@2JB"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::find_entry(class c_static_hash_table_data<long, 6144> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@SAJPBV?$c_static_hash_table_data@J$0BIAA@@@JJJ@Z@4JC"
// bool collision_kd_tree_disabled_attached_bounds_move; // "?collision_kd_tree_disabled_attached_bounds_move@@3_NA"
// bool collision_kd_tree_exhaustive_debugging_enabled; // "?collision_kd_tree_exhaustive_debugging_enabled@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)> g_collision_hierarchy_node_data_allocator; // "?g_collision_hierarchy_node_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)> g_collision_hierarchy_element_data_allocator; // "?g_collision_hierarchy_element_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)> g_collision_hierarchy_node_hash_table_data_allocator; // "?g_collision_hierarchy_node_hash_table_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_collision_hierarchy_globals_allocator::*)(void *)> g_collision_hierarchy_globals_allocator; // "?g_collision_hierarchy_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_collision_hierarchy_node_data; // "?g_collision_hierarchy_node_data@@3PAUs_data_array@@A"
// struct s_data_array *g_collision_hierarchy_element_data; // "?g_collision_hierarchy_element_data@@3PAUs_data_array@@A"
// class c_static_hash_table_data<long, 6144> *g_hash_table_data; // "?g_hash_table_data@@3PAV?$c_static_hash_table_data@J$0BIAA@@@A"
// struct s_collision_hierarchy_globals *g_collision_hierarchy_globals; // "?g_collision_hierarchy_globals@@3PAUs_collision_hierarchy_globals@@A"

// void __tls_set_g_collision_hierarchy_node_data_allocator(void *);
// void __tls_set_g_collision_hierarchy_element_data_allocator(void *);
// void __tls_set_g_collision_hierarchy_node_hash_table_data_allocator(void *);
// void __tls_set_g_collision_hierarchy_globals_allocator(void *);
// void collision_hierarchy_initialize(void);
// void collision_hierarchy_dispose(void);
// void collision_hierarchy_initialize_for_new_map(void);
// void collision_hierarchy_dispose_from_old_map(void);
// void collision_hierarchy_initialize_for_new_structure_bsp(unsigned long);
// void collision_hierarchy_dispose_from_old_structure_bsp(unsigned long);
// void collision_hierarchy_notify_objects_disconnected(void);
// void collision_hierarchy_add_element(struct s_collision_hierarchy_element_payload const *, bool, class s_static_array<struct s_cluster_reference, 512> *, long, struct s_cluster_reference);
// void collision_hierarchy_move_element(struct s_collision_hierarchy_element_payload const *, struct s_cluster_reference);
// void collision_hierarchy_update_element_payload(struct s_collision_hierarchy_element_payload const *);
// void collision_hierarchy_remove_element(struct s_collision_hierarchy_element_reference);
// long collision_hierarchy_hash_table_find(struct s_collision_hierarchy_hash_table_key);
// long collision_hierarchy_hash_table_find(long, long, long);
// long collision_hierarchy_cluster_root_element_get(struct s_collision_hierarchy_hash_table_key);
// struct s_cluster_reference collision_hierarchy_element_get_first_cluster(struct s_collision_hierarchy_element_cluster_iterator *, struct s_collision_hierarchy_element_reference);
// bool cluster_references_equal(long, long);
// struct s_cluster_reference collision_hierarchy_element_get_next_cluster(struct s_collision_hierarchy_element_cluster_iterator *);
// long collision_hierarchy_element_overlaps_get(struct s_collision_hierarchy_element_reference, unsigned long, union real_point3d const *, float, struct s_collision_hierarchy_element_reference *, long);
// long collision_hierarchy_element_overlaps_get_recursive(unsigned long, union real_point3d const *, float, long, struct s_collision_hierarchy_element_reference *, long);
// void collision_hierarchy_attach_element_to_cluster(struct s_collision_hierarchy_element_payload const *, union real_rectangle3d const *, struct s_cluster_reference, bool, class s_static_array<struct s_cluster_reference, 512> *, long *, class c_static_stack<union real_rectangle3d, 32> *);
// public: s_attach_dynamic_element_to_cluster_data::s_attach_dynamic_element_to_cluster_data(void);
// void collision_hierarchy_attach_element_to_cluster_recursive(struct s_attach_dynamic_element_to_cluster_data *, unsigned long, union real_rectangle3d *, union real_rectangle3d *, long, long, long, long, bool, bool);
// void pin_rectangle_to_plane(union real_rectangle3d *, long, float, bool);
// void collision_hierarchy_attach_element_to_kd_node(struct s_attach_dynamic_element_to_cluster_data const *, union real_rectangle3d const *, long, long, long);
// bool collision_hierarchy_create_headers(struct structure_context const *, struct s_cluster_reference, struct s_collision_hierarchy_element_reference, long, long, long *);
// bool collision_hierarchy_create_headers(struct structure_context const *, struct s_cluster_reference, long, long, long *, long, bool, class s_static_array<long, 128> *, long *);
// struct s_collision_hierarchy_hash_table_key collision_hierarchy_hash_table_key_get(struct s_cluster_reference, long, long);
// void collison_hierarchy_node_header_add_reference(long, enum e_collision_hierarchy_element_type, unsigned char);
// void collison_hierarchy_node_header_remove_reference(long);
// void collison_hierarchy_node_header_delete(long);
// bool collision_hierarchy_read_attached_seam_cluster_info(struct s_attach_dynamic_element_to_cluster_data const *, union real_rectangle3d *, long, long);
// bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, long, long);
// bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, long);
// bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, union real_rectangle3d const *, union real_rectangle3d *, long);
// bool structure_cluster_mark(long);
// bool structure_portal_mark(long, long);
// public: bool c_cluster_globals::portal_mark(long, long);
// bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, long, long, struct __vector4*, union real_point3d const *, union vector3d const *, float, float, float, class s_static_array<struct s_cluster_reference, 512> *, long *);
// bool structure_cluster_unmarked(long);
// public: bool c_cluster_globals::unmarked(long);
// bool intersect_sphere_6_planes(struct __vector4const *, union real_point3d const *, float);
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// struct AxisAlignedBox const * AxisAlignedBox_from_real_rectangle3d(struct AxisAlignedBox *, union real_rectangle3d const *);
// public: AxisAlignedBox::AxisAlignedBox(void);
// bool collision_hierarchy_element_inside_attached_bounds(struct s_collision_hierarchy_element_payload const *, struct s_cluster_reference);
// void collision_hierarchy_validate(void);
// long calculate_references_recursive(struct s_collision_hierarchy_node_header const *);
// unsigned long collision_hierarchy_calculate_type_mask_recursive(long);
// unsigned long collision_hierarchy_calculate_spatial_object_type_mask_recursive(long);
// void collision_hierarchy_resource_usage_get(long *, long *, long *, long *);
// bool collision_kd_hierarchy_find_node_with_elements(long, long, long, long, long, struct s_cluster_reference);
// long collision_kd_hierarchy_object_header_count_get(long);
// void collision_hierarchy_object_get_maximum_depths(long, long *, long *, long *);
// void cluster_hierarchy_render_object_bounds_recursive(long, struct s_object_marking_data *);
// void cluster_hierarchy_render_object_bounds(struct s_cluster_reference);
// public: long const * c_static_hash_table_tag_data<long>::get_element(long) const;
// public: static long s_static_array<long, 512>::get_count(void);
// public: void s_static_array<long, 512>::set_all(long const &);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: long * c_static_hash_table_data<long, 6144>::get_element(long);
// public: long c_static_hash_table_data<long, 6144>::get_total_count(void) const;
// public: void c_data_iterator<struct s_collision_hierarchy_element_header>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_collision_hierarchy_element_header>::next(void);
// public: struct s_collision_hierarchy_element_header * c_data_iterator<struct s_collision_hierarchy_element_header>::get_datum(void) const;
// public: long c_data_iterator<struct s_collision_hierarchy_element_header>::get_index(void) const;
// public: static long s_static_array<struct s_cluster_reference, 512>::get_count(void);
// public: bool c_static_stack<union real_rectangle3d, 32>::full(void) const;
// public: long c_static_stack<union real_rectangle3d, 32>::count(void) const;
// public: long c_static_stack<union real_rectangle3d, 32>::push(void);
// public: union real_rectangle3d & c_static_stack<union real_rectangle3d, 32>::get_element(long);
// public: union real_rectangle3d * c_static_stack<union real_rectangle3d, 32>::get_top(void);
// public: c_static_stack<union real_rectangle3d, 32>::c_static_stack<union real_rectangle3d, 32>(void);
// public: void c_data_iterator<struct s_collision_hierarchy_node_header>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_collision_hierarchy_node_header>::next(void);
// public: struct s_collision_hierarchy_node_header * c_data_iterator<struct s_collision_hierarchy_node_header>::get_datum(void) const;
// public: long c_data_iterator<struct s_collision_hierarchy_node_header>::get_index(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::valid(void) const;
// public: bool c_static_stack<union real_rectangle3d, 32>::valid(void) const;
// public: bool c_static_stack<union real_rectangle3d, 32>::valid(long) const;
// public: long c_static_stack<union real_rectangle3d, 32>::top(void) const;
// public: union real_rectangle3d * c_static_stack<union real_rectangle3d, 32>::get(long);
// public: bool c_static_stack<union real_rectangle3d, 32>::empty(void) const;
// public: bool c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_structure_super_node_mapping::e_flag) const;
// public: unsigned char & s_static_array<unsigned char, 16384>::element<long>(long);
// public: void c_static_hash_table_data<long, 6144>::clear_all(void);
// public: long & s_static_array<long, 16>::element<long>(long);
// public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 512>::operator[]<long>(long);
// public: struct s_cluster_reference const & s_static_array<struct s_cluster_reference, 512>::operator[]<long>(long) const;
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::add_entry(class c_static_hash_table_data<long, 6144> *, long, long, long);
// public: static void c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::remove_entry(class c_static_hash_table_data<long, 6144> *, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::find_entry(class c_static_hash_table_data<long, 6144> const *, long, long, long);
// public: long & s_static_array<long, 512>::element<long>(long);
// public: long & s_static_array<long, 16>::element<char>(char);
// struct s_collision_hierarchy_object_spatial_payload const * buffer_cast_const<struct s_collision_hierarchy_object_spatial_payload>(struct s_collision_hierarchy_element_payload const *);
// struct s_collision_hierarchy_object_spatial_reference const * buffer_cast_const<struct s_collision_hierarchy_object_spatial_reference>(struct s_collision_hierarchy_element_reference const *);
// public: struct c_static_hash_table_data<long, 6144>::s_data & s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::operator[]<long>(long);
// public: struct c_static_hash_table_data<long, 6144>::s_data * c_static_hash_table_data<long, 6144>::get_data(long);
// public: struct c_static_hash_table_data<long, 6144>::s_data const * c_static_hash_table_data<long, 6144>::get_data(long) const;
// public: long c_static_hash_table_data<long, 6144>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<long, 6144>::increment_total_count(void);
// public: void c_static_hash_table_data<long, 6144>::decrement_total_count(void);
// public: short * c_static_hash_table_data<long, 6144>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<long, 6144>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<long, 6144>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<long, 6144>::get_original_hash_entry(void) const;
// public: void s_static_array<short, 6144>::set_memory(long);
// public: short const * s_static_array<short, 6144>::get_elements(void) const;
// public: short * s_static_array<short, 6144>::get_elements(void);
// public: static bool c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_structure_super_node_mapping::e_flag);
// private: static unsigned char c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_structure_super_node_mapping::e_flag);
// public: static bool s_static_array<unsigned char, 16384>::valid<long>(long);
// public: static bool s_static_array<struct s_cluster_reference, 512>::valid<long>(long);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::calculate_hash(class c_static_hash_table_data<long, 6144> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::find_new_hash_entry(class c_static_hash_table_data<long, 6144> *, long);
// public: static bool s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::valid<long>(long);
// public: struct c_static_hash_table_data<long, 6144>::s_data const & s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::operator[]<long>(long) const;
// bool rectangle_intersects_rectangle3d(union real_rectangle3d const *, union real_rectangle3d const *);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>(void);
// void g_collision_hierarchy_node_data_allocator::`dynamic atexit destructor'(void);
// void g_collision_hierarchy_element_data_allocator::`dynamic atexit destructor'(void);
// void g_collision_hierarchy_node_hash_table_data_allocator::`dynamic atexit destructor'(void);
// void g_collision_hierarchy_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_collision_hierarchy_node_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_collision_hierarchy_element_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_collision_hierarchy_node_hash_table_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_collision_hierarchy_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z");
//};

//void collision_hierarchy_initialize(void)
//{
//    mangled_ppc("?collision_hierarchy_initialize@@YAXXZ");
//};

//void collision_hierarchy_dispose(void)
//{
//    mangled_ppc("?collision_hierarchy_dispose@@YAXXZ");
//};

//void collision_hierarchy_initialize_for_new_map(void)
//{
//    mangled_ppc("?collision_hierarchy_initialize_for_new_map@@YAXXZ");
//};

//void collision_hierarchy_dispose_from_old_map(void)
//{
//    mangled_ppc("?collision_hierarchy_dispose_from_old_map@@YAXXZ");
//};

//void collision_hierarchy_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?collision_hierarchy_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void collision_hierarchy_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?collision_hierarchy_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void collision_hierarchy_notify_objects_disconnected(void)
//{
//    mangled_ppc("?collision_hierarchy_notify_objects_disconnected@@YAXXZ");
//};

//void collision_hierarchy_add_element(struct s_collision_hierarchy_element_payload const *, bool, class s_static_array<struct s_cluster_reference, 512> *, long, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_hierarchy_add_element@@YAXPBUs_collision_hierarchy_element_payload@@_NPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@JUs_cluster_reference@@@Z");
//};

//void collision_hierarchy_move_element(struct s_collision_hierarchy_element_payload const *, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_hierarchy_move_element@@YAXPBUs_collision_hierarchy_element_payload@@Us_cluster_reference@@@Z");
//};

//void collision_hierarchy_update_element_payload(struct s_collision_hierarchy_element_payload const *)
//{
//    mangled_ppc("?collision_hierarchy_update_element_payload@@YAXPBUs_collision_hierarchy_element_payload@@@Z");
//};

//void collision_hierarchy_remove_element(struct s_collision_hierarchy_element_reference)
//{
//    mangled_ppc("?collision_hierarchy_remove_element@@YAXUs_collision_hierarchy_element_reference@@@Z");
//};

//long collision_hierarchy_hash_table_find(struct s_collision_hierarchy_hash_table_key)
//{
//    mangled_ppc("?collision_hierarchy_hash_table_find@@YAJUs_collision_hierarchy_hash_table_key@@@Z");
//};

//long collision_hierarchy_hash_table_find(long, long, long)
//{
//    mangled_ppc("?collision_hierarchy_hash_table_find@@YAJJJJ@Z");
//};

//long collision_hierarchy_cluster_root_element_get(struct s_collision_hierarchy_hash_table_key)
//{
//    mangled_ppc("?collision_hierarchy_cluster_root_element_get@@YAJUs_collision_hierarchy_hash_table_key@@@Z");
//};

//struct s_cluster_reference collision_hierarchy_element_get_first_cluster(struct s_collision_hierarchy_element_cluster_iterator *, struct s_collision_hierarchy_element_reference)
//{
//    mangled_ppc("?collision_hierarchy_element_get_first_cluster@@YA?AUs_cluster_reference@@PAUs_collision_hierarchy_element_cluster_iterator@@Us_collision_hierarchy_element_reference@@@Z");
//};

//bool cluster_references_equal(long, long)
//{
//    mangled_ppc("?cluster_references_equal@@YA_NJJ@Z");
//};

//struct s_cluster_reference collision_hierarchy_element_get_next_cluster(struct s_collision_hierarchy_element_cluster_iterator *)
//{
//    mangled_ppc("?collision_hierarchy_element_get_next_cluster@@YA?AUs_cluster_reference@@PAUs_collision_hierarchy_element_cluster_iterator@@@Z");
//};

//long collision_hierarchy_element_overlaps_get(struct s_collision_hierarchy_element_reference, unsigned long, union real_point3d const *, float, struct s_collision_hierarchy_element_reference *, long)
//{
//    mangled_ppc("?collision_hierarchy_element_overlaps_get@@YAJUs_collision_hierarchy_element_reference@@KPBTreal_point3d@@MPAU1@J@Z");
//};

//long collision_hierarchy_element_overlaps_get_recursive(unsigned long, union real_point3d const *, float, long, struct s_collision_hierarchy_element_reference *, long)
//{
//    mangled_ppc("?collision_hierarchy_element_overlaps_get_recursive@@YAJKPBTreal_point3d@@MJPAUs_collision_hierarchy_element_reference@@J@Z");
//};

//void collision_hierarchy_attach_element_to_cluster(struct s_collision_hierarchy_element_payload const *, union real_rectangle3d const *, struct s_cluster_reference, bool, class s_static_array<struct s_cluster_reference, 512> *, long *, class c_static_stack<union real_rectangle3d, 32> *)
//{
//    mangled_ppc("?collision_hierarchy_attach_element_to_cluster@@YAXPBUs_collision_hierarchy_element_payload@@PBTreal_rectangle3d@@Us_cluster_reference@@_NPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJPAV?$c_static_stack@Treal_rectangle3d@@$0CA@@@@Z");
//};

//public: s_attach_dynamic_element_to_cluster_data::s_attach_dynamic_element_to_cluster_data(void)
//{
//    mangled_ppc("??0s_attach_dynamic_element_to_cluster_data@@QAA@XZ");
//};

//void collision_hierarchy_attach_element_to_cluster_recursive(struct s_attach_dynamic_element_to_cluster_data *, unsigned long, union real_rectangle3d *, union real_rectangle3d *, long, long, long, long, bool, bool)
//{
//    mangled_ppc("?collision_hierarchy_attach_element_to_cluster_recursive@@YAXPAUs_attach_dynamic_element_to_cluster_data@@KPATreal_rectangle3d@@1JJJJ_N2@Z");
//};

//void pin_rectangle_to_plane(union real_rectangle3d *, long, float, bool)
//{
//    mangled_ppc("?pin_rectangle_to_plane@@YAXPATreal_rectangle3d@@JM_N@Z");
//};

//void collision_hierarchy_attach_element_to_kd_node(struct s_attach_dynamic_element_to_cluster_data const *, union real_rectangle3d const *, long, long, long)
//{
//    mangled_ppc("?collision_hierarchy_attach_element_to_kd_node@@YAXPBUs_attach_dynamic_element_to_cluster_data@@PBTreal_rectangle3d@@JJJ@Z");
//};

//bool collision_hierarchy_create_headers(struct structure_context const *, struct s_cluster_reference, struct s_collision_hierarchy_element_reference, long, long, long *)
//{
//    mangled_ppc("?collision_hierarchy_create_headers@@YA_NPBUstructure_context@@Us_cluster_reference@@Us_collision_hierarchy_element_reference@@JJPAJ@Z");
//};

//bool collision_hierarchy_create_headers(struct structure_context const *, struct s_cluster_reference, long, long, long *, long, bool, class s_static_array<long, 128> *, long *)
//{
//    mangled_ppc("?collision_hierarchy_create_headers@@YA_NPBUstructure_context@@Us_cluster_reference@@JJPAJJ_NPAV?$s_static_array@J$0IA@@@2@Z");
//};

//struct s_collision_hierarchy_hash_table_key collision_hierarchy_hash_table_key_get(struct s_cluster_reference, long, long)
//{
//    mangled_ppc("?collision_hierarchy_hash_table_key_get@@YA?AUs_collision_hierarchy_hash_table_key@@Us_cluster_reference@@JJ@Z");
//};

//void collison_hierarchy_node_header_add_reference(long, enum e_collision_hierarchy_element_type, unsigned char)
//{
//    mangled_ppc("?collison_hierarchy_node_header_add_reference@@YAXJW4e_collision_hierarchy_element_type@@E@Z");
//};

//void collison_hierarchy_node_header_remove_reference(long)
//{
//    mangled_ppc("?collison_hierarchy_node_header_remove_reference@@YAXJ@Z");
//};

//void collison_hierarchy_node_header_delete(long)
//{
//    mangled_ppc("?collison_hierarchy_node_header_delete@@YAXJ@Z");
//};

//bool collision_hierarchy_read_attached_seam_cluster_info(struct s_attach_dynamic_element_to_cluster_data const *, union real_rectangle3d *, long, long)
//{
//    mangled_ppc("?collision_hierarchy_read_attached_seam_cluster_info@@YA_NPBUs_attach_dynamic_element_to_cluster_data@@PATreal_rectangle3d@@JJ@Z");
//};

//bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, long, long)
//{
//    mangled_ppc("?collision_hierarchy_read_attached_seam_cluster_info@@YA_NPBUstructure_context@@Us_cluster_reference@@PBTreal_point3d@@MPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJJJ@Z");
//};

//bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, long)
//{
//    mangled_ppc("?collision_hierarchy_read_attached_seam_cluster_info@@YA_NPBUstructure_context@@Us_cluster_reference@@PBTreal_point3d@@MPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJJ@Z");
//};

//bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, union real_point3d const *, float, class s_static_array<struct s_cluster_reference, 512> *, long *, union real_rectangle3d const *, union real_rectangle3d *, long)
//{
//    mangled_ppc("?collision_hierarchy_read_attached_seam_cluster_info@@YA_NPBUstructure_context@@Us_cluster_reference@@PBTreal_point3d@@MPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJPBTreal_rectangle3d@@PAT5@J@Z");
//};

//bool structure_cluster_mark(long)
//{
//    mangled_ppc("?structure_cluster_mark@@YA_NJ@Z");
//};

//bool structure_portal_mark(long, long)
//{
//    mangled_ppc("?structure_portal_mark@@YA_NJJ@Z");
//};

//public: bool c_cluster_globals::portal_mark(long, long)
//{
//    mangled_ppc("?portal_mark@c_cluster_globals@@QAA_NJJ@Z");
//};

//bool collision_hierarchy_read_attached_seam_cluster_info(struct structure_context const *, struct s_cluster_reference, long, long, struct __vector4*, union real_point3d const *, union vector3d const *, float, float, float, class s_static_array<struct s_cluster_reference, 512> *, long *)
//{
//    mangled_ppc("?collision_hierarchy_read_attached_seam_cluster_info@@YA_NPBUstructure_context@@Us_cluster_reference@@JJPAU__vector4@@PBTreal_point3d@@PBTvector3d@@MMMPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJ@Z");
//};

//bool structure_cluster_unmarked(long)
//{
//    mangled_ppc("?structure_cluster_unmarked@@YA_NJ@Z");
//};

//public: bool c_cluster_globals::unmarked(long)
//{
//    mangled_ppc("?unmarked@c_cluster_globals@@QAA_NJ@Z");
//};

//bool intersect_sphere_6_planes(struct __vector4const *, union real_point3d const *, float)
//{
//    mangled_ppc("?intersect_sphere_6_planes@@YA_NPBU__vector4@@PBTreal_point3d@@M@Z");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//struct AxisAlignedBox const * AxisAlignedBox_from_real_rectangle3d(struct AxisAlignedBox *, union real_rectangle3d const *)
//{
//    mangled_ppc("?AxisAlignedBox_from_real_rectangle3d@@YAPBUAxisAlignedBox@@PAU1@PBTreal_rectangle3d@@@Z");
//};

//public: AxisAlignedBox::AxisAlignedBox(void)
//{
//    mangled_ppc("??0AxisAlignedBox@@QAA@XZ");
//};

//bool collision_hierarchy_element_inside_attached_bounds(struct s_collision_hierarchy_element_payload const *, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_hierarchy_element_inside_attached_bounds@@YA_NPBUs_collision_hierarchy_element_payload@@Us_cluster_reference@@@Z");
//};

//void collision_hierarchy_validate(void)
//{
//    mangled_ppc("?collision_hierarchy_validate@@YAXXZ");
//};

//long calculate_references_recursive(struct s_collision_hierarchy_node_header const *)
//{
//    mangled_ppc("?calculate_references_recursive@@YAJPBUs_collision_hierarchy_node_header@@@Z");
//};

//unsigned long collision_hierarchy_calculate_type_mask_recursive(long)
//{
//    mangled_ppc("?collision_hierarchy_calculate_type_mask_recursive@@YAKJ@Z");
//};

//unsigned long collision_hierarchy_calculate_spatial_object_type_mask_recursive(long)
//{
//    mangled_ppc("?collision_hierarchy_calculate_spatial_object_type_mask_recursive@@YAKJ@Z");
//};

//void collision_hierarchy_resource_usage_get(long *, long *, long *, long *)
//{
//    mangled_ppc("?collision_hierarchy_resource_usage_get@@YAXPAJ000@Z");
//};

//bool collision_kd_hierarchy_find_node_with_elements(long, long, long, long, long, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_kd_hierarchy_find_node_with_elements@@YA_NJJJJJUs_cluster_reference@@@Z");
//};

//long collision_kd_hierarchy_object_header_count_get(long)
//{
//    mangled_ppc("?collision_kd_hierarchy_object_header_count_get@@YAJJ@Z");
//};

//void collision_hierarchy_object_get_maximum_depths(long, long *, long *, long *)
//{
//    mangled_ppc("?collision_hierarchy_object_get_maximum_depths@@YAXJPAJ00@Z");
//};

//void cluster_hierarchy_render_object_bounds_recursive(long, struct s_object_marking_data *)
//{
//    mangled_ppc("?cluster_hierarchy_render_object_bounds_recursive@@YAXJPAUs_object_marking_data@@@Z");
//};

//void cluster_hierarchy_render_object_bounds(struct s_cluster_reference)
//{
//    mangled_ppc("?cluster_hierarchy_render_object_bounds@@YAXUs_cluster_reference@@@Z");
//};

//public: long const * c_static_hash_table_tag_data<long>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_tag_data@J@@QBAPBJJ@Z");
//};

//public: static long s_static_array<long, 512>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0CAA@@@SAJXZ");
//};

//public: void s_static_array<long, 512>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0CAA@@@QAAXABJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: long * c_static_hash_table_data<long, 6144>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@J$0BIAA@@@QAAPAJJ@Z");
//};

//public: long c_static_hash_table_data<long, 6144>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@J$0BIAA@@@QBAJXZ");
//};

//public: void c_data_iterator<struct s_collision_hierarchy_element_header>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_collision_hierarchy_element_header@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_collision_hierarchy_element_header>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_collision_hierarchy_element_header@@@@QAA_NXZ");
//};

//public: struct s_collision_hierarchy_element_header * c_data_iterator<struct s_collision_hierarchy_element_header>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_collision_hierarchy_element_header@@@@QBAPAUs_collision_hierarchy_element_header@@XZ");
//};

//public: long c_data_iterator<struct s_collision_hierarchy_element_header>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_collision_hierarchy_element_header@@@@QBAJXZ");
//};

//public: static long s_static_array<struct s_cluster_reference, 512>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_cluster_reference@@$0CAA@@@SAJXZ");
//};

//public: bool c_static_stack<union real_rectangle3d, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<union real_rectangle3d, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBAJXZ");
//};

//public: long c_static_stack<union real_rectangle3d, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QAAJXZ");
//};

//public: union real_rectangle3d & c_static_stack<union real_rectangle3d, 32>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QAAAATreal_rectangle3d@@J@Z");
//};

//public: union real_rectangle3d * c_static_stack<union real_rectangle3d, 32>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QAAPATreal_rectangle3d@@XZ");
//};

//public: c_static_stack<union real_rectangle3d, 32>::c_static_stack<union real_rectangle3d, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Treal_rectangle3d@@$0CA@@@QAA@XZ");
//};

//public: void c_data_iterator<struct s_collision_hierarchy_node_header>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_collision_hierarchy_node_header@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_collision_hierarchy_node_header>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_collision_hierarchy_node_header@@@@QAA_NXZ");
//};

//public: struct s_collision_hierarchy_node_header * c_data_iterator<struct s_collision_hierarchy_node_header>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_collision_hierarchy_node_header@@@@QBAPAUs_collision_hierarchy_node_header@@XZ");
//};

//public: long c_data_iterator<struct s_collision_hierarchy_node_header>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_collision_hierarchy_node_header@@@@QBAJXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_static_stack<union real_rectangle3d, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<union real_rectangle3d, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<union real_rectangle3d, 32>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBAJXZ");
//};

//public: union real_rectangle3d * c_static_stack<union real_rectangle3d, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QAAPATreal_rectangle3d@@J@Z");
//};

//public: bool c_static_stack<union real_rectangle3d, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Treal_rectangle3d@@$0CA@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum s_structure_super_node_mapping::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_structure_super_node_mapping@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_structure_super_node_mapping@@@Z");
//};

//public: unsigned char & s_static_array<unsigned char, 16384>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@E$0EAAA@@@QAAAAEJ@Z");
//};

//public: void c_static_hash_table_data<long, 6144>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@J$0BIAA@@@QAAXXZ");
//};

//public: long & s_static_array<long, 16>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@J$0BA@@@QAAAAJJ@Z");
//};

//public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 512>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cluster_reference@@$0CAA@@@QAAAAUs_cluster_reference@@J@Z");
//};

//public: struct s_cluster_reference const & s_static_array<struct s_cluster_reference, 512>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cluster_reference@@$0CAA@@@QBAABUs_cluster_reference@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::add_entry(class c_static_hash_table_data<long, 6144> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@SAJPAV?$c_static_hash_table_data@J$0BIAA@@@JJJ@Z");
//};

//public: static void c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::remove_entry(class c_static_hash_table_data<long, 6144> *, long)
//{
//    mangled_ppc("?remove_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@SAXPAV?$c_static_hash_table_data@J$0BIAA@@@J@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::find_entry(class c_static_hash_table_data<long, 6144> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@SAJPBV?$c_static_hash_table_data@J$0BIAA@@@JJJ@Z");
//};

//public: long & s_static_array<long, 512>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@J$0CAA@@@QAAAAJJ@Z");
//};

//public: long & s_static_array<long, 16>::element<char>(char)
//{
//    mangled_ppc("??$element@D@?$s_static_array@J$0BA@@@QAAAAJD@Z");
//};

//struct s_collision_hierarchy_object_spatial_payload const * buffer_cast_const<struct s_collision_hierarchy_object_spatial_payload>(struct s_collision_hierarchy_element_payload const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_object_spatial_payload@@@@YAPBUs_collision_hierarchy_object_spatial_payload@@PBUs_collision_hierarchy_element_payload@@@Z");
//};

//struct s_collision_hierarchy_object_spatial_reference const * buffer_cast_const<struct s_collision_hierarchy_object_spatial_reference>(struct s_collision_hierarchy_element_reference const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_object_spatial_reference@@@@YAPBUs_collision_hierarchy_object_spatial_reference@@PBUs_collision_hierarchy_element_reference@@@Z");
//};

//public: struct c_static_hash_table_data<long, 6144>::s_data & s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0BIAA@@@$0BIAA@@@QAAAAUs_data@?$c_static_hash_table_data@J$0BIAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<long, 6144>::s_data * c_static_hash_table_data<long, 6144>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0BIAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct c_static_hash_table_data<long, 6144>::s_data const * c_static_hash_table_data<long, 6144>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0BIAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<long, 6144>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@J$0BIAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<long, 6144>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@J$0BIAA@@@QAAXXZ");
//};

//public: void c_static_hash_table_data<long, 6144>::decrement_total_count(void)
//{
//    mangled_ppc("?decrement_total_count@?$c_static_hash_table_data@J$0BIAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<long, 6144>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0BIAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 6144>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0BIAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<long, 6144>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0BIAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 6144>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0BIAA@@@QBAPBFXZ");
//};

//public: void s_static_array<short, 6144>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@F$0BIAA@@@QAAXJ@Z");
//};

//public: short const * s_static_array<short, 6144>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0BIAA@@@QBAPBFXZ");
//};

//public: short * s_static_array<short, 6144>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0BIAA@@@QAAPAFXZ");
//};

//public: static bool c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_structure_super_node_mapping::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_structure_super_node_mapping@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_structure_super_node_mapping@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_structure_super_node_mapping::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_structure_super_node_mapping::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_structure_super_node_mapping@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flag@s_structure_super_node_mapping@@@Z");
//};

//public: static bool s_static_array<unsigned char, 16384>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@E$0EAAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_cluster_reference, 512>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cluster_reference@@$0CAA@@@SA_NJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::calculate_hash(class c_static_hash_table_data<long, 6144> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@CAJPBV?$c_static_hash_table_data@J$0BIAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 6144>, 558187892, 1650351654, 1281434934>::find_new_hash_entry(class c_static_hash_table_data<long, 6144> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0BIAA@@@$0CBEFEFHE@$0GCFOFOCG@$0EMGBCFDG@@@CAJPAV?$c_static_hash_table_data@J$0BIAA@@@J@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0BIAA@@@$0BIAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<long, 6144>::s_data const & s_static_array<struct c_static_hash_table_data<long, 6144>::s_data, 6144>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0BIAA@@@$0BIAA@@@QBAABUs_data@?$c_static_hash_table_data@J$0BIAA@@@J@Z");
//};

//bool rectangle_intersects_rectangle3d(union real_rectangle3d const *, union real_rectangle3d const *)
//{
//    mangled_ppc("?rectangle_intersects_rectangle3d@@YA_NPBTreal_rectangle3d@@0@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_element_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_element_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_node_hash_table_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_node_hash_table_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_collision_hierarchy_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_collision_hierarchy_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_collision_hierarchy_node_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_collision_hierarchy_node_data_allocator@@YAXXZ");
//};

//void g_collision_hierarchy_element_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_collision_hierarchy_element_data_allocator@@YAXXZ");
//};

//void g_collision_hierarchy_node_hash_table_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_collision_hierarchy_node_hash_table_data_allocator@@YAXXZ");
//};

//void g_collision_hierarchy_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_collision_hierarchy_globals_allocator@@YAXXZ");
//};

