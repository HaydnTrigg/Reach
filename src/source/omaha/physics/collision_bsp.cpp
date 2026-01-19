/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int const *const const `struct __vector4 __cdecl XMVectorPermuteControl(unsigned int, unsigned int, unsigned int, unsigned int)'::`2'::ControlElement; // "?ControlElement@?1??XMVectorPermuteControl@@YA?AU__vector4@@IIII@Z@4QBIB"
// struct XMVECTORI32const `struct __vector4 __cdecl XMVectorPermute(struct __vector4, struct __vector4, struct __vector4)'::`2'::PremuteTest; // "?PremuteTest@?1??XMVectorPermute@@YA?AU__vector4@@U2@00@Z@4UXMVECTORI32@@B"

// float collision_edge_length(class c_collision_bsp_reference, long);
// long collision_surface_edge_count(class c_collision_bsp_reference, long);
// float collision_surface_perimeter(class c_collision_bsp_reference, long);
// float collision_surface_area(class c_collision_bsp_reference, long);
// union real_point3d * collision_surface_project_point2d(class c_collision_bsp_reference, long, short, bool, union real_point2d const *, union real_point3d *);
// bool collision_surface_find_closest_point2d(class c_collision_bsp_reference, long, long, bool, union real_point2d const *, union real_point2d *);
// bool collision_surface_test_line2d(class c_collision_bsp_reference, long, long, bool, union real_point2d const *, union vector2d const *, struct collision_surface_test_line2d_result *);
// bool collision_bsp_test_sphere(class c_collision_bsp_reference, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *);
// public: void c_collision_bsp_test_vector_full_result::init(float);
// public: void c_collision_bsp_test_vector_result::init(float);
// public: long c_collision_bsp_test_vector_full_result::get_last_leaf_index(void) const;
// public: long c_collision_bsp_test_vector_full_result::get_first_leaf_index(void) const;
// void render_debug_collision_vertex(class c_collision_bsp_reference, long, struct real_matrix4x3const *, float, union argb_color const *);
// void render_debug_collision_edge(class c_collision_bsp_reference, long, struct real_matrix4x3const *, union argb_color const *);
// void render_debug_collision_surface(class c_collision_bsp_reference, long, struct real_matrix4x3const *, union argb_color const *, union argb_color const *, bool, bool);
// void render_debug_collision_bsp(class c_collision_bsp_reference, struct real_matrix4x3const *, union argb_color const *, union argb_color const *, bool, bool);
// bool collision_surface_test_point2d(class c_collision_bsp_reference, long, short, bool, union real_point2d const *);
// bool collision_bsp_test_sphere(class c_collision_bsp_reference, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *);
// bool collision_bsp_find_leaf_for_sphere(class c_collision_bsp_reference, union real_point3d const *, float, long *);
// bool collision_bsp_test_vector(unsigned long, class c_collision_bsp_reference, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *);
// bool collision_bsp_test_vector(unsigned long, class c_collision_bsp_reference, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *);
// bool collision_bsp_test_super_node(unsigned long, class c_collision_bsp_reference, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *);
// bool collision_bsp_test_pill(class c_collision_bsp_reference, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *);
// long collision_surface_polygon(class c_collision_bsp_reference, long, union real_point3d *);
// long collision_surface_polygon(struct collision_bsp const *, long, union real_point3d *);
// long collision_surface_polygon(struct large_collision_bsp const *, long, union real_point3d *);
// public: long const & s_static_array<long, 512>::operator[]<long>(long) const;
// public: long const & s_static_array<long, 512>::operator[]<int>(int) const;
// bool collision_surface_test_point2d_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long, short, bool, union real_point2d const *);
// public: static struct collision_surface const * s_small_bsp_types::collision_bsp_get_surface(struct collision_bsp const *, long);
// public: static struct collision_edge const * s_small_bsp_types::collision_bsp_get_edge(struct collision_bsp const *, long);
// public: static struct collision_vertex const * s_small_bsp_types::collision_bsp_get_vertex(struct collision_bsp const *, long);
// bool collision_surface_test_point2d_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long, short, bool, union real_point2d const *);
// public: static struct large_collision_surface const * s_large_bsp_types::collision_bsp_get_surface(struct large_collision_bsp const *, long);
// public: static struct large_collision_edge const * s_large_bsp_types::collision_bsp_get_edge(struct large_collision_bsp const *, long);
// public: static struct large_collision_vertex const * s_large_bsp_types::collision_bsp_get_vertex(struct large_collision_bsp const *, long);
// bool collision_bsp_test_sphere_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *);
// bool collision_bsp_test_sphere_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *);
// bool collision_bsp_find_leaf_for_sphere_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, union real_point3d const *, float, long *);
// bool collision_bsp_find_leaf_for_sphere_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, union real_point3d const *, float, long *);
// bool collision_bsp_test_vector_internal<struct s_small_lite_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *);
// public: long c_collision_bsp_test_vector_result::write_super_node(long, long, long, bool);
// bool collision_bsp_test_vector_internal<struct s_large_lite_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *);
// bool collision_bsp_test_vector_internal<struct s_small_full_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *);
// public: long c_collision_bsp_test_vector_full_result::write_super_node(long, long, long, bool);
// bool collision_bsp_test_vector_internal<struct s_large_full_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *);
// bool collision_bsp_test_super_node_internal<struct s_small_full_attached_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *);
// bool collision_bsp_test_super_node_internal<struct s_large_full_attached_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *);
// bool collision_bsp_test_pill_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *);
// bool collision_bsp_test_pill_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *);
// long collision_surface_polygon_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long, union real_point3d *);
// long collision_surface_polygon_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long, union real_point3d *);
// public: test_sphere_data<struct collision_bsp>::test_sphere_data<struct collision_bsp>(void);
// public: test_sphere_data<struct large_collision_bsp>::test_sphere_data<struct large_collision_bsp>(void);
// public: static bool s_static_array<long, 512>::valid<int>(int);
// void bsp3d_test_sphere_recursive_internal<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long);
// public: static long s_small_bsp3d_types::bsp3d_child_index_from_node_index(long);
// public: static long s_small_bsp3d_types::bsp3d_plane_designator(long, bool);
// public: static long s_small_bsp3d_types::bsp3d_plane_index(long);
// public: static bool s_small_bsp3d_types::bsp3d_plane_is_negated(long);
// public: static struct bsp3d_node const * s_small_bsp_types::collision_bsp_get_bsp3d_node(struct collision_bsp const *, long);
// public: static struct bsp3d_node * s_small_bsp3d_types::bsp3d_get_node(struct bsp3d const *, long);
// public: static struct collision_leaf const * s_small_bsp_types::collision_bsp_get_leaf(struct collision_bsp const *, long);
// public: static struct plane3d const * s_small_bsp_types::collision_bsp_get_plane(struct collision_bsp const *, long);
// public: static struct plane3d const * s_small_bsp3d_types::bsp3d_get_plane(struct bsp3d const *, long);
// public: static struct bsp2d_reference const * s_small_bsp_types::collision_bsp_get_bsp2d_reference(struct collision_bsp const *, long);
// void bsp3d_super_nodes_test_sphere_recursive_internal<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long, long);
// void bsp3d_test_sphere_recursive_internal<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long);
// public: static struct large_bsp3d_node const * s_large_bsp_types::collision_bsp_get_bsp3d_node(struct large_collision_bsp const *, long);
// public: static struct large_bsp3d_node * s_large_bsp3d_types::bsp3d_get_node(struct large_bsp3d const *, long);
// public: static struct large_collision_leaf const * s_large_bsp_types::collision_bsp_get_leaf(struct large_collision_bsp const *, long);
// public: static struct plane3d const * s_large_bsp_types::collision_bsp_get_plane(struct large_collision_bsp const *, long);
// public: static struct plane3d const * s_large_bsp3d_types::bsp3d_get_plane(struct large_bsp3d const *, long);
// public: static struct large_bsp2d_reference const * s_large_bsp_types::collision_bsp_get_bsp2d_reference(struct large_collision_bsp const *, long);
// void bsp3d_super_nodes_test_sphere_recursive_internal<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long, long);
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, long, long, long, long, struct __vector4);
// public: void c_collision_bsp_test_vector_result::write_leaf(long);
// bool collision_bsp_test_vector_recursive_simd<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, long, struct __vector4);
// public: void c_collision_bsp_test_vector_result::set_plane(struct plane3d const *);
// public: void c_collision_bsp_test_vector_result::set_leaf_index(long);
// public: void c_collision_bsp_test_vector_result::set_surface_index(long);
// public: void c_collision_bsp_test_vector_result::set_plane_index(long);
// public: void c_collision_bsp_test_vector_result::set_plane_negated(bool);
// public: void c_collision_bsp_test_vector_result::set_flags(long);
// public: void c_collision_bsp_test_vector_result::set_breakable_surface_index(long);
// public: void c_collision_bsp_test_vector_result::set_breakable_surface_set_index(long);
// public: void c_collision_bsp_test_vector_result::set_material_index(long);
// public: bool c_collision_bsp_test_vector_result::test_point(union real_point3d const *, union vector3d const *, struct __vector4) const;
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, long, long, long, long, struct __vector4);
// bool collision_bsp_test_vector_recursive_simd<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, long, struct __vector4);
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, long, long, long, struct __vector4);
// public: void c_collision_bsp_test_vector_full_result::write_leaf(long);
// public: long c_collision_bsp_test_vector_full_result::write_leaf(long, long);
// bool collision_bsp_test_vector_recursive_simd<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, struct __vector4);
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, long, long, long, struct __vector4);
// bool collision_bsp_test_vector_recursive_simd<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, struct __vector4);
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, long, long, long, struct __vector4);
// struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *);
// bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, long, long, long, struct __vector4);
// bool bsp3d_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long);
// bool bsp3d_super_node_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long, long, long);
// bool bsp3d_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long);
// bool bsp3d_super_node_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long, long, long);
// public: bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_collision_bsp_test_sphere_flag) const;
// void prefetch_node<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long);
// void sse_prefetch_L1(void const *);
// void bsp2d_test_sphere_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long);
// public: static bool s_small_bsp2d_types::bsp2d_child_index_is_node(long);
// public: static long s_small_bsp2d_types::bsp2d_node_index_from_child_index(long);
// public: static long s_small_bsp2d_types::bsp2d_leaf_index_from_child_index(long);
// public: static struct bsp2d_node const * s_small_bsp_types::collision_bsp_get_bsp2d_node(struct collision_bsp const *, long);
// public: static struct bsp2d_node const * s_small_bsp2d_types::bsp2d_get_node(struct bsp2d const *, long);
// void prefetch_node<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long);
// void bsp2d_test_sphere_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long);
// public: static bool s_large_bsp2d_types::bsp2d_child_index_is_node(long);
// public: static long s_large_bsp2d_types::bsp2d_node_index_from_child_index(long);
// public: static long s_large_bsp2d_types::bsp2d_leaf_index_from_child_index(long);
// public: static struct large_bsp2d_node const * s_large_bsp_types::collision_bsp_get_bsp2d_node(struct large_collision_bsp const *, long);
// public: static struct large_bsp2d_node const * s_large_bsp2d_types::bsp2d_get_node(struct large_bsp2d const *, long);
// long collision_leaf_test_vector<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// long collision_leaf_test_vector<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// long collision_leaf_test_vector<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// long collision_leaf_test_vector<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// bool collision_bsp_test_vector_recursive_simd<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, struct __vector4);
// public: bool c_collision_bsp_test_vector_full_attached_result::test_point(union real_point3d const *, union vector3d const *, struct __vector4) const;
// public: struct c_collision_bsp_test_vector_full_result::s_super_node_reference const & s_static_array<struct c_collision_bsp_test_vector_full_result::s_super_node_reference, 256>::operator[]<long>(long) const;
// bool collision_bsp_test_vector_recursive_simd<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, struct __vector4);
// bool collision_surface_test_point<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// bool bsp2d_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long);
// bool collision_surface_test_point<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// bool bsp2d_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long);
// void collision_surface_test_sphere<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long);
// void add_feature(long *, long *, long *, long, long);
// void collision_surface_test_sphere<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long);
// bool collision_surface_test_material_extant<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_material_extant<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_material_extant<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_point<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// bool collision_surface_test_material_extant<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_point<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// long collision_leaf_test_vector<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// long collision_leaf_test_vector<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool);
// bool collision_surface_test_pill<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long);
// bool pill_test_vector(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *, float *);
// bool sphere_test_vector(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *);
// bool collision_surface_test_pill<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long);
// bool collision_surface_test_material_extant<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_point<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// bool collision_surface_test_material_extant<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long);
// bool collision_surface_test_point<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *);
// struct __vector4 XMLoadFloat3(struct _XMFLOAT3const *);
// struct __vector4 XMLoadFloat4(struct _XMFLOAT4const *);
// struct __vector4 XMVectorSplatW(struct __vector4);
// struct __vector4 XMVectorSetW(struct __vector4, float);
// struct __vector4 XMVectorPermuteControl(unsigned int, unsigned int, unsigned int, unsigned int);
// struct __vector4 XMVectorPermute(struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 XMVectorMultiplyAdd(struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 XMVectorReciprocal(struct __vector4);
// unsigned int XMVector4GreaterR(struct __vector4, struct __vector4);
// unsigned int XMVector4GreaterOrEqualR(struct __vector4, struct __vector4);
// float plane3d_distance_to_point_safe(struct __vector4, struct __vector4);

//float collision_edge_length(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?collision_edge_length@@YAMVc_collision_bsp_reference@@J@Z");
//};

//long collision_surface_edge_count(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?collision_surface_edge_count@@YAJVc_collision_bsp_reference@@J@Z");
//};

//float collision_surface_perimeter(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?collision_surface_perimeter@@YAMVc_collision_bsp_reference@@J@Z");
//};

//float collision_surface_area(class c_collision_bsp_reference, long)
//{
//    mangled_ppc("?collision_surface_area@@YAMVc_collision_bsp_reference@@J@Z");
//};

//union real_point3d * collision_surface_project_point2d(class c_collision_bsp_reference, long, short, bool, union real_point2d const *, union real_point3d *)
//{
//    mangled_ppc("?collision_surface_project_point2d@@YAPATreal_point3d@@Vc_collision_bsp_reference@@JF_NPBTreal_point2d@@PAT1@@Z");
//};

//bool collision_surface_find_closest_point2d(class c_collision_bsp_reference, long, long, bool, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?collision_surface_find_closest_point2d@@YA_NVc_collision_bsp_reference@@JJ_NPBTreal_point2d@@PAT2@@Z");
//};

//bool collision_surface_test_line2d(class c_collision_bsp_reference, long, long, bool, union real_point2d const *, union vector2d const *, struct collision_surface_test_line2d_result *)
//{
//    mangled_ppc("?collision_surface_test_line2d@@YA_NVc_collision_bsp_reference@@JJ_NPBTreal_point2d@@PBTvector2d@@PAUcollision_surface_test_line2d_result@@@Z");
//};

//bool collision_bsp_test_sphere(class c_collision_bsp_reference, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *)
//{
//    mangled_ppc("?collision_bsp_test_sphere@@YA_NVc_collision_bsp_reference@@JPBUs_breakable_surface_set@@PBTreal_point3d@@MPAUcollision_bsp_test_sphere_result@@@Z");
//};

//public: void c_collision_bsp_test_vector_full_result::init(float)
//{
//    mangled_ppc("?init@c_collision_bsp_test_vector_full_result@@QAAXM@Z");
//};

//public: void c_collision_bsp_test_vector_result::init(float)
//{
//    mangled_ppc("?init@c_collision_bsp_test_vector_result@@QAAXM@Z");
//};

//public: long c_collision_bsp_test_vector_full_result::get_last_leaf_index(void) const
//{
//    mangled_ppc("?get_last_leaf_index@c_collision_bsp_test_vector_full_result@@QBAJXZ");
//};

//public: long c_collision_bsp_test_vector_full_result::get_first_leaf_index(void) const
//{
//    mangled_ppc("?get_first_leaf_index@c_collision_bsp_test_vector_full_result@@QBAJXZ");
//};

//void render_debug_collision_vertex(class c_collision_bsp_reference, long, struct real_matrix4x3const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_collision_vertex@@YAXVc_collision_bsp_reference@@JPBUreal_matrix4x3@@MPBTargb_color@@@Z");
//};

//void render_debug_collision_edge(class c_collision_bsp_reference, long, struct real_matrix4x3const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_collision_edge@@YAXVc_collision_bsp_reference@@JPBUreal_matrix4x3@@PBTargb_color@@@Z");
//};

//void render_debug_collision_surface(class c_collision_bsp_reference, long, struct real_matrix4x3const *, union argb_color const *, union argb_color const *, bool, bool)
//{
//    mangled_ppc("?render_debug_collision_surface@@YAXVc_collision_bsp_reference@@JPBUreal_matrix4x3@@PBTargb_color@@2_N3@Z");
//};

//void render_debug_collision_bsp(class c_collision_bsp_reference, struct real_matrix4x3const *, union argb_color const *, union argb_color const *, bool, bool)
//{
//    mangled_ppc("?render_debug_collision_bsp@@YAXVc_collision_bsp_reference@@PBUreal_matrix4x3@@PBTargb_color@@2_N3@Z");
//};

//bool collision_surface_test_point2d(class c_collision_bsp_reference, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("?collision_surface_test_point2d@@YA_NVc_collision_bsp_reference@@JF_NPBTreal_point2d@@@Z");
//};

//bool collision_bsp_test_sphere(class c_collision_bsp_reference, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *)
//{
//    mangled_ppc("?collision_bsp_test_sphere@@YA_NVc_collision_bsp_reference@@V?$c_flags@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@JPBUs_breakable_surface_set@@PBTreal_point3d@@MPAUcollision_bsp_test_sphere_result@@@Z");
//};

//bool collision_bsp_find_leaf_for_sphere(class c_collision_bsp_reference, union real_point3d const *, float, long *)
//{
//    mangled_ppc("?collision_bsp_find_leaf_for_sphere@@YA_NVc_collision_bsp_reference@@PBTreal_point3d@@MPAJ@Z");
//};

//bool collision_bsp_test_vector(unsigned long, class c_collision_bsp_reference, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *)
//{
//    mangled_ppc("?collision_bsp_test_vector@@YA_NKVc_collision_bsp_reference@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_result@@@Z");
//};

//bool collision_bsp_test_vector(unsigned long, class c_collision_bsp_reference, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *)
//{
//    mangled_ppc("?collision_bsp_test_vector@@YA_NKVc_collision_bsp_reference@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_result@@@Z");
//};

//bool collision_bsp_test_super_node(unsigned long, class c_collision_bsp_reference, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *)
//{
//    mangled_ppc("?collision_bsp_test_super_node@@YA_NKVc_collision_bsp_reference@@JJPBUs_collision_materials_extant_flags@@JPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_attached_result@@@Z");
//};

//bool collision_bsp_test_pill(class c_collision_bsp_reference, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *)
//{
//    mangled_ppc("?collision_bsp_test_pill@@YA_NVc_collision_bsp_reference@@PBTreal_point3d@@PBTvector3d@@MMPAUcollision_bsp_test_pill_result@@@Z");
//};

//long collision_surface_polygon(class c_collision_bsp_reference, long, union real_point3d *)
//{
//    mangled_ppc("?collision_surface_polygon@@YAJVc_collision_bsp_reference@@JPATreal_point3d@@@Z");
//};

//long collision_surface_polygon(struct collision_bsp const *, long, union real_point3d *)
//{
//    mangled_ppc("?collision_surface_polygon@@YAJPBUcollision_bsp@@JPATreal_point3d@@@Z");
//};

//long collision_surface_polygon(struct large_collision_bsp const *, long, union real_point3d *)
//{
//    mangled_ppc("?collision_surface_polygon@@YAJPBUlarge_collision_bsp@@JPATreal_point3d@@@Z");
//};

//public: long const & s_static_array<long, 512>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0CAA@@@QBAABJJ@Z");
//};

//public: long const & s_static_array<long, 512>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@J$0CAA@@@QBAABJH@Z");
//};

//bool collision_surface_test_point2d_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point2d_internal@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@JF_NPBTreal_point2d@@@Z");
//};

//public: static struct collision_surface const * s_small_bsp_types::collision_bsp_get_surface(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_surface@s_small_bsp_types@@SAPBUcollision_surface@@PBUcollision_bsp@@J@Z");
//};

//public: static struct collision_edge const * s_small_bsp_types::collision_bsp_get_edge(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_edge@s_small_bsp_types@@SAPBUcollision_edge@@PBUcollision_bsp@@J@Z");
//};

//public: static struct collision_vertex const * s_small_bsp_types::collision_bsp_get_vertex(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_vertex@s_small_bsp_types@@SAPBUcollision_vertex@@PBUcollision_bsp@@J@Z");
//};

//bool collision_surface_test_point2d_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point2d_internal@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@JF_NPBTreal_point2d@@@Z");
//};

//public: static struct large_collision_surface const * s_large_bsp_types::collision_bsp_get_surface(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_surface@s_large_bsp_types@@SAPBUlarge_collision_surface@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct large_collision_edge const * s_large_bsp_types::collision_bsp_get_edge(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_edge@s_large_bsp_types@@SAPBUlarge_collision_edge@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct large_collision_vertex const * s_large_bsp_types::collision_bsp_get_vertex(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_vertex@s_large_bsp_types@@SAPBUlarge_collision_vertex@@PBUlarge_collision_bsp@@J@Z");
//};

//bool collision_bsp_test_sphere_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *)
//{
//    mangled_ppc("??$collision_bsp_test_sphere_internal@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@V?$c_flags@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@JPBUs_breakable_surface_set@@PBTreal_point3d@@MPAUcollision_bsp_test_sphere_result@@@Z");
//};

//bool collision_bsp_test_sphere_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, class c_flags<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>, long, struct s_breakable_surface_set const *, union real_point3d const *, float, struct collision_bsp_test_sphere_result *)
//{
//    mangled_ppc("??$collision_bsp_test_sphere_internal@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@V?$c_flags@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@JPBUs_breakable_surface_set@@PBTreal_point3d@@MPAUcollision_bsp_test_sphere_result@@@Z");
//};

//bool collision_bsp_find_leaf_for_sphere_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, union real_point3d const *, float, long *)
//{
//    mangled_ppc("??$collision_bsp_find_leaf_for_sphere_internal@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@PBTreal_point3d@@MPAJ@Z");
//};

//bool collision_bsp_find_leaf_for_sphere_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, union real_point3d const *, float, long *)
//{
//    mangled_ppc("??$collision_bsp_find_leaf_for_sphere_internal@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@PBTreal_point3d@@MPAJ@Z");
//};

//bool collision_bsp_test_vector_internal<struct s_small_lite_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_internal@Us_small_lite_results_collision_bsp_types@@@@YA_NKPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_result@@@Z");
//};

//public: long c_collision_bsp_test_vector_result::write_super_node(long, long, long, bool)
//{
//    mangled_ppc("?write_super_node@c_collision_bsp_test_vector_result@@QAAJJJJ_N@Z");
//};

//bool collision_bsp_test_vector_internal<struct s_large_lite_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_internal@Us_large_lite_results_collision_bsp_types@@@@YA_NKPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_result@@@Z");
//};

//bool collision_bsp_test_vector_internal<struct s_small_full_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_internal@Us_small_full_results_collision_bsp_types@@@@YA_NKPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_result@@@Z");
//};

//public: long c_collision_bsp_test_vector_full_result::write_super_node(long, long, long, bool)
//{
//    mangled_ppc("?write_super_node@c_collision_bsp_test_vector_full_result@@QAAJJJJ_N@Z");
//};

//bool collision_bsp_test_vector_internal<struct s_large_full_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_internal@Us_large_full_results_collision_bsp_types@@@@YA_NKPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_result@@@Z");
//};

//bool collision_bsp_test_super_node_internal<struct s_small_full_attached_results_collision_bsp_types>(unsigned long, struct collision_bsp const *, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *)
//{
//    mangled_ppc("??$collision_bsp_test_super_node_internal@Us_small_full_attached_results_collision_bsp_types@@@@YA_NKPBUcollision_bsp@@JJPBUs_collision_materials_extant_flags@@JPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_attached_result@@@Z");
//};

//bool collision_bsp_test_super_node_internal<struct s_large_full_attached_results_collision_bsp_types>(unsigned long, struct large_collision_bsp const *, long, long, struct s_collision_materials_extant_flags const *, long, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *)
//{
//    mangled_ppc("??$collision_bsp_test_super_node_internal@Us_large_full_attached_results_collision_bsp_types@@@@YA_NKPBUlarge_collision_bsp@@JJPBUs_collision_materials_extant_flags@@JPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_attached_result@@@Z");
//};

//bool collision_bsp_test_pill_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *)
//{
//    mangled_ppc("??$collision_bsp_test_pill_internal@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@PBTreal_point3d@@PBTvector3d@@MMPAUcollision_bsp_test_pill_result@@@Z");
//};

//bool collision_bsp_test_pill_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, union real_point3d const *, union vector3d const *, float, float, struct collision_bsp_test_pill_result *)
//{
//    mangled_ppc("??$collision_bsp_test_pill_internal@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@PBTreal_point3d@@PBTvector3d@@MMPAUcollision_bsp_test_pill_result@@@Z");
//};

//long collision_surface_polygon_internal<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long, union real_point3d *)
//{
//    mangled_ppc("??$collision_surface_polygon_internal@Us_small_lite_results_collision_bsp_types@@@@YAJPBUcollision_bsp@@JPATreal_point3d@@@Z");
//};

//long collision_surface_polygon_internal<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long, union real_point3d *)
//{
//    mangled_ppc("??$collision_surface_polygon_internal@Us_large_lite_results_collision_bsp_types@@@@YAJPBUlarge_collision_bsp@@JPATreal_point3d@@@Z");
//};

//public: test_sphere_data<struct collision_bsp>::test_sphere_data<struct collision_bsp>(void)
//{
//    mangled_ppc("??0?$test_sphere_data@Ucollision_bsp@@@@QAA@XZ");
//};

//public: test_sphere_data<struct large_collision_bsp>::test_sphere_data<struct large_collision_bsp>(void)
//{
//    mangled_ppc("??0?$test_sphere_data@Ularge_collision_bsp@@@@QAA@XZ");
//};

//public: static bool s_static_array<long, 512>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@J$0CAA@@@SA_NH@Z");
//};

//void bsp3d_test_sphere_recursive_internal<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp3d_test_sphere_recursive_internal@Us_small_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ucollision_bsp@@@@J@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_child_index_from_node_index(long)
//{
//    mangled_ppc("?bsp3d_child_index_from_node_index@s_small_bsp3d_types@@SAJJ@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_plane_designator(long, bool)
//{
//    mangled_ppc("?bsp3d_plane_designator@s_small_bsp3d_types@@SAJJ_N@Z");
//};

//public: static long s_small_bsp3d_types::bsp3d_plane_index(long)
//{
//    mangled_ppc("?bsp3d_plane_index@s_small_bsp3d_types@@SAJJ@Z");
//};

//public: static bool s_small_bsp3d_types::bsp3d_plane_is_negated(long)
//{
//    mangled_ppc("?bsp3d_plane_is_negated@s_small_bsp3d_types@@SA_NJ@Z");
//};

//public: static struct bsp3d_node const * s_small_bsp_types::collision_bsp_get_bsp3d_node(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp3d_node@s_small_bsp_types@@SAPBUbsp3d_node@@PBUcollision_bsp@@J@Z");
//};

//public: static struct bsp3d_node * s_small_bsp3d_types::bsp3d_get_node(struct bsp3d const *, long)
//{
//    mangled_ppc("?bsp3d_get_node@s_small_bsp3d_types@@SAPAUbsp3d_node@@PBUbsp3d@@J@Z");
//};

//public: static struct collision_leaf const * s_small_bsp_types::collision_bsp_get_leaf(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_leaf@s_small_bsp_types@@SAPBUcollision_leaf@@PBUcollision_bsp@@J@Z");
//};

//public: static struct plane3d const * s_small_bsp_types::collision_bsp_get_plane(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_plane@s_small_bsp_types@@SAPBUplane3d@@PBUcollision_bsp@@J@Z");
//};

//public: static struct plane3d const * s_small_bsp3d_types::bsp3d_get_plane(struct bsp3d const *, long)
//{
//    mangled_ppc("?bsp3d_get_plane@s_small_bsp3d_types@@SAPBUplane3d@@PBUbsp3d@@J@Z");
//};

//public: static struct bsp2d_reference const * s_small_bsp_types::collision_bsp_get_bsp2d_reference(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp2d_reference@s_small_bsp_types@@SAPBUbsp2d_reference@@PBUcollision_bsp@@J@Z");
//};

//void bsp3d_super_nodes_test_sphere_recursive_internal<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long, long)
//{
//    mangled_ppc("??$bsp3d_super_nodes_test_sphere_recursive_internal@Us_small_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ucollision_bsp@@@@JJJ@Z");
//};

//void bsp3d_test_sphere_recursive_internal<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp3d_test_sphere_recursive_internal@Us_large_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ularge_collision_bsp@@@@J@Z");
//};

//public: static struct large_bsp3d_node const * s_large_bsp_types::collision_bsp_get_bsp3d_node(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp3d_node@s_large_bsp_types@@SAPBUlarge_bsp3d_node@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct large_bsp3d_node * s_large_bsp3d_types::bsp3d_get_node(struct large_bsp3d const *, long)
//{
//    mangled_ppc("?bsp3d_get_node@s_large_bsp3d_types@@SAPAUlarge_bsp3d_node@@PBUlarge_bsp3d@@J@Z");
//};

//public: static struct large_collision_leaf const * s_large_bsp_types::collision_bsp_get_leaf(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_leaf@s_large_bsp_types@@SAPBUlarge_collision_leaf@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct plane3d const * s_large_bsp_types::collision_bsp_get_plane(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_plane@s_large_bsp_types@@SAPBUplane3d@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct plane3d const * s_large_bsp3d_types::bsp3d_get_plane(struct large_bsp3d const *, long)
//{
//    mangled_ppc("?bsp3d_get_plane@s_large_bsp3d_types@@SAPBUplane3d@@PBUlarge_bsp3d@@J@Z");
//};

//public: static struct large_bsp2d_reference const * s_large_bsp_types::collision_bsp_get_bsp2d_reference(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp2d_reference@s_large_bsp_types@@SAPBUlarge_bsp2d_reference@@PBUlarge_collision_bsp@@J@Z");
//};

//void bsp3d_super_nodes_test_sphere_recursive_internal<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long, long)
//{
//    mangled_ppc("??$bsp3d_super_nodes_test_sphere_recursive_internal@Us_large_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ularge_collision_bsp@@@@JJJ@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_small_lite_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_result@@@@KPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_result@@@@JJJJU__vector4@@@Z");
//};

//public: void c_collision_bsp_test_vector_result::write_leaf(long)
//{
//    mangled_ppc("?write_leaf@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_small_lite_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_result@@@@JU__vector4@@@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_plane(struct plane3d const *)
//{
//    mangled_ppc("?set_plane@c_collision_bsp_test_vector_result@@QAAXPBUplane3d@@@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_leaf_index(long)
//{
//    mangled_ppc("?set_leaf_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_surface_index(long)
//{
//    mangled_ppc("?set_surface_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_plane_index(long)
//{
//    mangled_ppc("?set_plane_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_plane_negated(bool)
//{
//    mangled_ppc("?set_plane_negated@c_collision_bsp_test_vector_result@@QAAX_N@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_flags(long)
//{
//    mangled_ppc("?set_flags@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_breakable_surface_index(long)
//{
//    mangled_ppc("?set_breakable_surface_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_breakable_surface_set_index(long)
//{
//    mangled_ppc("?set_breakable_surface_set_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: void c_collision_bsp_test_vector_result::set_material_index(long)
//{
//    mangled_ppc("?set_material_index@c_collision_bsp_test_vector_result@@QAAXJ@Z");
//};

//public: bool c_collision_bsp_test_vector_result::test_point(union real_point3d const *, union vector3d const *, struct __vector4) const
//{
//    mangled_ppc("?test_point@c_collision_bsp_test_vector_result@@QBA_NPBTreal_point3d@@PBTvector3d@@U__vector4@@@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_large_lite_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_result@@@@KPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_result@@@@JJJJU__vector4@@@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_large_lite_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_result@@@@JU__vector4@@@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_small_full_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@KPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_small_full_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@JJJJU__vector4@@@Z");
//};

//public: void c_collision_bsp_test_vector_full_result::write_leaf(long)
//{
//    mangled_ppc("?write_leaf@c_collision_bsp_test_vector_full_result@@QAAXJ@Z");
//};

//public: long c_collision_bsp_test_vector_full_result::write_leaf(long, long)
//{
//    mangled_ppc("?write_leaf@c_collision_bsp_test_vector_full_result@@QAAJJJ@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_small_full_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_small_full_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@JU__vector4@@@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_large_full_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@KPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_large_full_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@JJJJU__vector4@@@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_large_full_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_large_full_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_result@@@@JU__vector4@@@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, unsigned long, struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_small_full_attached_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@KPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_attached_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_small_full_attached_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@JJJJU__vector4@@@Z");
//};

//struct __vector4 collision_bsp_test_vector_initialize_data_and_result<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, unsigned long, struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, float, class c_collision_bsp_test_vector_full_attached_result *)
//{
//    mangled_ppc("??$collision_bsp_test_vector_initialize_data_and_result@Us_large_full_attached_results_collision_bsp_types@@@@YA?AU__vector4@@PAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@KPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@MPAVc_collision_bsp_test_vector_full_attached_result@@@Z");
//};

//bool collision_bsp_super_node_test_vector_recursive_simd<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, long, long, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_super_node_test_vector_recursive_simd@Us_large_full_attached_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@JJJJU__vector4@@@Z");
//};

//bool bsp3d_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp3d_test_pill_recursive@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ucollision_bsp@@@@J@Z");
//};

//bool bsp3d_super_node_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long, long, long)
//{
//    mangled_ppc("??$bsp3d_super_node_test_pill_recursive@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ucollision_bsp@@@@JJJ@Z");
//};

//bool bsp3d_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp3d_test_pill_recursive@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ularge_collision_bsp@@@@J@Z");
//};

//bool bsp3d_super_node_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long, long, long)
//{
//    mangled_ppc("??$bsp3d_super_node_test_pill_recursive@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ularge_collision_bsp@@@@JJJ@Z");
//};

//public: bool c_flags_no_init<enum e_collision_bsp_test_sphere_flag, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_collision_bsp_test_sphere_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_collision_bsp_test_sphere_flag@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_collision_bsp_test_sphere_flag@@@Z");
//};

//void prefetch_node<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, long)
//{
//    mangled_ppc("??$prefetch_node@Us_small_lite_results_collision_bsp_types@@@@YAXPBUcollision_bsp@@J@Z");
//};

//void sse_prefetch_L1(void const *)
//{
//    mangled_ppc("?sse_prefetch_L1@@YAXPBX@Z");
//};

//void bsp2d_test_sphere_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long)
//{
//    mangled_ppc("??$bsp2d_test_sphere_recursive@Us_small_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ucollision_bsp@@@@JJ@Z");
//};

//public: static bool s_small_bsp2d_types::bsp2d_child_index_is_node(long)
//{
//    mangled_ppc("?bsp2d_child_index_is_node@s_small_bsp2d_types@@SA_NJ@Z");
//};

//public: static long s_small_bsp2d_types::bsp2d_node_index_from_child_index(long)
//{
//    mangled_ppc("?bsp2d_node_index_from_child_index@s_small_bsp2d_types@@SAJJ@Z");
//};

//public: static long s_small_bsp2d_types::bsp2d_leaf_index_from_child_index(long)
//{
//    mangled_ppc("?bsp2d_leaf_index_from_child_index@s_small_bsp2d_types@@SAJJ@Z");
//};

//public: static struct bsp2d_node const * s_small_bsp_types::collision_bsp_get_bsp2d_node(struct collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp2d_node@s_small_bsp_types@@SAPBUbsp2d_node@@PBUcollision_bsp@@J@Z");
//};

//public: static struct bsp2d_node const * s_small_bsp2d_types::bsp2d_get_node(struct bsp2d const *, long)
//{
//    mangled_ppc("?bsp2d_get_node@s_small_bsp2d_types@@SAPBUbsp2d_node@@PBUbsp2d@@J@Z");
//};

//void prefetch_node<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("??$prefetch_node@Us_large_lite_results_collision_bsp_types@@@@YAXPBUlarge_collision_bsp@@J@Z");
//};

//void bsp2d_test_sphere_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long)
//{
//    mangled_ppc("??$bsp2d_test_sphere_recursive@Us_large_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ularge_collision_bsp@@@@JJ@Z");
//};

//public: static bool s_large_bsp2d_types::bsp2d_child_index_is_node(long)
//{
//    mangled_ppc("?bsp2d_child_index_is_node@s_large_bsp2d_types@@SA_NJ@Z");
//};

//public: static long s_large_bsp2d_types::bsp2d_node_index_from_child_index(long)
//{
//    mangled_ppc("?bsp2d_node_index_from_child_index@s_large_bsp2d_types@@SAJJ@Z");
//};

//public: static long s_large_bsp2d_types::bsp2d_leaf_index_from_child_index(long)
//{
//    mangled_ppc("?bsp2d_leaf_index_from_child_index@s_large_bsp2d_types@@SAJJ@Z");
//};

//public: static struct large_bsp2d_node const * s_large_bsp_types::collision_bsp_get_bsp2d_node(struct large_collision_bsp const *, long)
//{
//    mangled_ppc("?collision_bsp_get_bsp2d_node@s_large_bsp_types@@SAPBUlarge_bsp2d_node@@PBUlarge_collision_bsp@@J@Z");
//};

//public: static struct large_bsp2d_node const * s_large_bsp2d_types::bsp2d_get_node(struct large_bsp2d const *, long)
//{
//    mangled_ppc("?bsp2d_get_node@s_large_bsp2d_types@@SAPBUlarge_bsp2d_node@@PBUlarge_bsp2d@@J@Z");
//};

//long collision_leaf_test_vector<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_small_lite_results_collision_bsp_types@@@@YAJPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//long collision_leaf_test_vector<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_large_lite_results_collision_bsp_types@@@@YAJPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//long collision_leaf_test_vector<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_small_full_results_collision_bsp_types@@@@YAJPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//long collision_leaf_test_vector<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_large_full_results_collision_bsp_types@@@@YAJPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_small_full_attached_results_collision_bsp_types>(struct test_vector_data<struct collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_small_full_attached_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ucollision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@JU__vector4@@@Z");
//};

//public: bool c_collision_bsp_test_vector_full_attached_result::test_point(union real_point3d const *, union vector3d const *, struct __vector4) const
//{
//    mangled_ppc("?test_point@c_collision_bsp_test_vector_full_attached_result@@QBA_NPBTreal_point3d@@PBTvector3d@@U__vector4@@@Z");
//};

//public: struct c_collision_bsp_test_vector_full_result::s_super_node_reference const & s_static_array<struct c_collision_bsp_test_vector_full_result::s_super_node_reference, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_super_node_reference@c_collision_bsp_test_vector_full_result@@$0BAA@@@QBAABUs_super_node_reference@c_collision_bsp_test_vector_full_result@@J@Z");
//};

//bool collision_bsp_test_vector_recursive_simd<struct s_large_full_attached_results_collision_bsp_types>(struct test_vector_data<struct large_collision_bsp, class c_collision_bsp_test_vector_full_attached_result> *, long, struct __vector4)
//{
//    mangled_ppc("??$collision_bsp_test_vector_recursive_simd@Us_large_full_attached_results_collision_bsp_types@@@@YA_NPAU?$test_vector_data@Ularge_collision_bsp@@Vc_collision_bsp_test_vector_full_attached_result@@@@JU__vector4@@@Z");
//};

//bool collision_surface_test_point<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//bool bsp2d_test_pill_recursive<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp2d_test_pill_recursive@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ucollision_bsp@@@@J@Z");
//};

//bool collision_surface_test_point<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//bool bsp2d_test_pill_recursive<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long)
//{
//    mangled_ppc("??$bsp2d_test_pill_recursive@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ularge_collision_bsp@@@@J@Z");
//};

//void collision_surface_test_sphere<struct s_small_lite_results_collision_bsp_types>(struct test_sphere_data<struct collision_bsp> *, long, long)
//{
//    mangled_ppc("??$collision_surface_test_sphere@Us_small_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ucollision_bsp@@@@JJ@Z");
//};

//void add_feature(long *, long *, long *, long, long)
//{
//    mangled_ppc("?add_feature@@YAXPAJ00JJ@Z");
//};

//void collision_surface_test_sphere<struct s_large_lite_results_collision_bsp_types>(struct test_sphere_data<struct large_collision_bsp> *, long, long)
//{
//    mangled_ppc("??$collision_surface_test_sphere@Us_large_lite_results_collision_bsp_types@@@@YAXPAU?$test_sphere_data@Ularge_collision_bsp@@@@JJ@Z");
//};

//bool collision_surface_test_material_extant<struct s_small_lite_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_small_lite_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_material_extant<struct s_large_lite_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_large_lite_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_material_extant<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_small_full_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_point<struct s_small_full_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_small_full_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//bool collision_surface_test_material_extant<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_large_full_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_point<struct s_large_full_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_large_full_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//long collision_leaf_test_vector<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_small_full_attached_results_collision_bsp_types@@@@YAJPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//long collision_leaf_test_vector<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, short, struct s_breakable_surface_set const *, union real_point3d const *, union vector3d const *, long, long, float, bool)
//{
//    mangled_ppc("??$collision_leaf_test_vector@Us_large_full_attached_results_collision_bsp_types@@@@YAJPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@FPBUs_breakable_surface_set@@PBTreal_point3d@@PBTvector3d@@JJM_N@Z");
//};

//bool collision_surface_test_pill<struct s_small_lite_results_collision_bsp_types>(struct test_pill_data<struct collision_bsp> *, long)
//{
//    mangled_ppc("??$collision_surface_test_pill@Us_small_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ucollision_bsp@@@@J@Z");
//};

//bool pill_test_vector(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, float *, float *)
//{
//    mangled_ppc("?pill_test_vector@@YA_NPBTreal_point3d@@PBTvector3d@@M01PAM2@Z");
//};

//bool sphere_test_vector(union real_point3d const *, float, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?sphere_test_vector@@YA_NPBTreal_point3d@@M0PBTvector3d@@PAM@Z");
//};

//bool collision_surface_test_pill<struct s_large_lite_results_collision_bsp_types>(struct test_pill_data<struct large_collision_bsp> *, long)
//{
//    mangled_ppc("??$collision_surface_test_pill@Us_large_lite_results_collision_bsp_types@@@@YA_NPAU?$test_pill_data@Ularge_collision_bsp@@@@J@Z");
//};

//bool collision_surface_test_material_extant<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_small_full_attached_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_point<struct s_small_full_attached_results_collision_bsp_types>(struct collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_small_full_attached_results_collision_bsp_types@@@@YA_NPBUcollision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//bool collision_surface_test_material_extant<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, struct s_collision_materials_extant_flags const *, long)
//{
//    mangled_ppc("??$collision_surface_test_material_extant@Us_large_full_attached_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@PBUs_collision_materials_extant_flags@@J@Z");
//};

//bool collision_surface_test_point<struct s_large_full_attached_results_collision_bsp_types>(struct large_collision_bsp const *, short, struct s_breakable_surface_set const *, long, short, bool, union real_point2d const *)
//{
//    mangled_ppc("??$collision_surface_test_point@Us_large_full_attached_results_collision_bsp_types@@@@YA_NPBUlarge_collision_bsp@@FPBUs_breakable_surface_set@@JF_NPBTreal_point2d@@@Z");
//};

//struct __vector4 XMLoadFloat3(struct _XMFLOAT3const *)
//{
//    mangled_ppc("?XMLoadFloat3@@YA?AU__vector4@@PBU_XMFLOAT3@@@Z");
//};

//struct __vector4 XMLoadFloat4(struct _XMFLOAT4const *)
//{
//    mangled_ppc("?XMLoadFloat4@@YA?AU__vector4@@PBU_XMFLOAT4@@@Z");
//};

//struct __vector4 XMVectorSplatW(struct __vector4)
//{
//    mangled_ppc("?XMVectorSplatW@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorSetW(struct __vector4, float)
//{
//    mangled_ppc("?XMVectorSetW@@YA?AU__vector4@@U1@M@Z");
//};

//struct __vector4 XMVectorPermuteControl(unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?XMVectorPermuteControl@@YA?AU__vector4@@IIII@Z");
//};

//struct __vector4 XMVectorPermute(struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorPermute@@YA?AU__vector4@@U1@00@Z");
//};

//struct __vector4 XMVectorMultiplyAdd(struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMultiplyAdd@@YA?AU__vector4@@U1@00@Z");
//};

//struct __vector4 XMVectorReciprocal(struct __vector4)
//{
//    mangled_ppc("?XMVectorReciprocal@@YA?AU__vector4@@U1@@Z");
//};

//unsigned int XMVector4GreaterR(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4GreaterR@@YAIU__vector4@@0@Z");
//};

//unsigned int XMVector4GreaterOrEqualR(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVector4GreaterOrEqualR@@YAIU__vector4@@0@Z");
//};

//float plane3d_distance_to_point_safe(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?plane3d_distance_to_point_safe@@YAMU__vector4@@0@Z");
//};

