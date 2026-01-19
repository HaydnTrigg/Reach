/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_water_physics_cache::s_primitive, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_primitive@s_water_physics_cache@@$0BA@@@2JB"
// public: static long const s_static_array<struct instance_hit_info, 2048>::k_element_count; // "?k_element_count@?$s_static_array@Uinstance_hit_info@@$0IAA@@@2JB"
// float water_physics_velocity_minimum; // "?water_physics_velocity_minimum@@3MA"
// float water_physics_velocity_maximum; // "?water_physics_velocity_maximum@@3MA"
// float k_full_scale_effect_velocity; // "?k_full_scale_effect_velocity@@3MA"
// float k_minimum_water_effect_period; // "?k_minimum_water_effect_period@@3MA"
// float k_maximum_water_scale_velocity; // "?k_maximum_water_scale_velocity@@3MA"
// float k_maximum_surface_distance; // "?k_maximum_surface_distance@@3MA"
// struct s_tag_reference_definition water_physics_drag_properties_reference; // "?water_physics_drag_properties_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_struct_definition water_physics_drag_properties_struct; // "?water_physics_drag_properties_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition water_physics_material_override_struct_definition; // "?water_physics_material_override_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition water_physics_material_override; // "?water_physics_material_override@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition water_physics_hull_surface_definition_block; // "?water_physics_hull_surface_definition_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition water_physics_hull_surface_definition_block_struct_definition; // "?water_physics_hull_surface_definition_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition water_physics_drag_properties_block; // "?water_physics_drag_properties_block@@3Us_tag_block_definition@@A"
// struct s_tag_group water_physics_drag_properties_group; // "?water_physics_drag_properties_group@@3Us_tag_group@@A"
// bool water_physics_debug; // "?water_physics_debug@@3_NA"
// struct s_tag_group_legacy_vtable legacy_water_physics_drag_properties_vtable; // "?legacy_water_physics_drag_properties_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_water_physics_drag_properties_stream_definition; // "?legacy_water_physics_drag_properties_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_water_physics_drag_properties_xsync_declaration; // "?legacy_water_physics_drag_properties_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_water_physics_cache_data_allocator::*)(void *)> g_water_physics_cache_data_allocator; // "?g_water_physics_cache_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_water_physics_drag_properties_vtable_shim; // "?legacy_water_physics_drag_properties_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_data_array *g_water_physics_cache_data; // "?g_water_physics_cache_data@@3PAUs_data_array@@A"

// void __tls_set_g_water_physics_cache_data_allocator(void *);
// void water_physics_initialize(void);
// void water_physics_dispose(void);
// void water_physics_initialize_for_new_map(void);
// void water_physics_dispose_from_old_map(void);
// void water_physics_initialize_for_new_structure_bsp(unsigned long);
// void water_physics_dispose_from_old_structure_bsp(unsigned long);
// bool water_physics_object_should_update(long);
// bool objects_move_in_progress(void);
// bool water_physics_model_new(long, struct s_water_physics_model *);
// void water_physics_disconnect_object(long);
// bool water_physics_test_point(union real_point3d const *, class c_global_material_type *);
// bool water_physics_test_point(union real_point3d const *, struct s_water_physics_test_sphere_result *);
// bool water_physics_test_sphere(union real_point3d const *, float, struct s_water_physics_test_sphere_result *);
// bool water_physics_test_sphere(union real_point3d const *, float, long, struct s_water_physics_test_sphere_result *);
// bool water_physics_test_sphere(bool, union real_point3d const *, float, struct s_water_physics_test_sphere_result *);
// bool water_physics_test_sphere(bool, union real_point3d const *, float, struct s_water_physics_test_sphere_result *, struct s_water_physics_cache *);
// void water_physics_test_sphere_result_write(struct s_water_physics_test_sphere_result *, float, struct plane3d const *, struct plane3d const *, union vector3d const *, long, long, float);
// bool water_physics_test_primitive(struct s_structure_design_physics const *, long, union real_point3d const *, float, float *, float *, struct plane3d *, long *);
// float const water_physics_calculate_sphere_t(union real_point3d const *, float, struct plane3d const *, float *);
// bool compare_underwater_hit_data(void const *, void const *, void const *);
// bool water_physics_test_vector(union real_point3d const *, union vector3d const *, bool, struct s_water_physics_test_vector_result *);
// public: hkpMoppRayVirtualMachine::hkpMoppRayVirtualMachine(void);
// public: hkpMoppVirtualMachine::hkpMoppVirtualMachine(void);
// public: hkpMoppRayVirtualMachine::~hkpMoppRayVirtualMachine(void);
// public: hkpMoppVirtualMachine::~hkpMoppVirtualMachine(void);
// bool water_physics_test_vector_solid(union real_point3d const *, union vector3d const *, struct s_water_physics_test_vector_result *);
// bool water_physics_test_vector_thin(union real_point3d const *, union vector3d const *, struct s_water_physics_test_vector_result *);
// float water_physics_calculate_water_depth_scale_at_position(union real_point3d const *);
// void water_physics_get_object_test_bounding_sphere(long, union real_point3d *, float *);
// bool water_physics_update_internal(long);
// public: long c_havok_component::get_impact_count(void) const;
// public: long c_havok_component::get_impact_datum_index(long) const;
// public: s_water_physics_model::s_water_physics_model(void);
// public: s_water_physics_hull_surface_definition::s_water_physics_hull_surface_definition(void);
// void water_physics_object_float_reset(long);
// float get_clamped_rigid_body_speed(class c_havok_component const *, long, union real_point3d const *);
// void set_rigid_body_water_density_type(long, long, struct s_water_physics_model *);
// enum e_material_physics_drag_class water_physics_object_material_physics_drag_class_get(long);
// struct s_water_physics_drag_properties const * water_physics_find_drag_properties(long, struct s_global_material_definition const *);
// bool water_physics_model_sphere_should_create_ripple(struct s_water_physics_model const *, long, float, float, long, long);
// float water_physics_get_water_ripple_interaction_max_distance(long);
// void create_rigid_body_spheres(long, long, struct s_water_physics_model *);
// bool object_is_boat(long);
// void water_physics_compute_drag(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, union vector3d const *, union vector3d const *, struct s_physics_force_function const *, struct s_physics_force_function const *, bool, struct s_water_physics_drag_results *);
// void water_physics_apply_total_forces(long, long, struct s_water_physics_model::s_hull_surface const *, float, union vector3d const *, union vector3d const *);
// void compute_velocity_damping(struct s_water_physics_model::s_hull_surface const *, float, union vector3d *, union vector3d *);
// bool water_physics_test_extruded_water(long, float, union real_point3d const *, union vector3d const *, float, float *);
// void render_debug_hull_surface(union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *, union vector3d const *, union vector3d const *);
// void render_debug_disk(union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void water_physics_render_debug(union real_point3d const *, union vector3d const *);
// public: long c_static_stack<struct s_water_physics_model::s_sphere, 16>::count(void) const;
// public: void c_static_stack<struct s_water_physics_model::s_sphere, 16>::resize(long);
// public: struct s_water_physics_model::s_sphere * c_static_stack<struct s_water_physics_model::s_sphere, 16>::get(long);
// public: long c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::count(void) const;
// public: void c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::resize(long);
// public: struct s_water_physics_model::s_rigid_body * c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::get(long);
// public: c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::c_static_stack<struct s_water_physics_model::s_rigid_body, 10>(void);
// public: void c_static_stack<struct s_water_effects_hull_surface_state, 64>::clear(void);
// public: void c_data_iterator<struct s_water_physics_cache>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_water_physics_cache>::next(void);
// public: struct s_water_physics_cache * c_data_iterator<struct s_water_physics_cache>::get_datum(void) const;
// public: long c_data_iterator<struct s_water_physics_cache>::get_index(void) const;
// public: hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>(void);
// ?sort_range@?$s_static_array@Uinstance_hit_info@@$0IAA@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>(void);
// public: s_water_physics_model::s_rigid_body::s_rigid_body(void);
// public: bool c_static_stack<struct s_water_physics_model::s_sphere, 16>::valid(void) const;
// public: bool c_static_stack<struct s_water_physics_model::s_sphere, 16>::valid(long) const;
// public: c_static_stack<struct s_water_physics_model::s_sphere, 16>::c_static_stack<struct s_water_physics_model::s_sphere, 16>(void);
// public: bool c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::valid(void) const;
// public: bool c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::valid(long) const;
// public: bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_water_physics_hull_surface_definition::e_hull_surface_flags) const;
// public: c_flags<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void);
// public: class hkpMoppPrimitiveInfo & hkArrayBase<class hkpMoppPrimitiveInfo>::operator[](int);
// public: int hkArrayBase<class hkpMoppPrimitiveInfo>::getSize(void) const;
// public: hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::~hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>(void);
// public: struct s_water_physics_cache::s_primitive const & s_static_array<struct s_water_physics_cache::s_primitive, 16>::operator[]<long>(long) const;
// public: hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>(int);
// public: struct s_water_physics_cache::s_primitive & s_static_array<struct s_water_physics_cache::s_primitive, 16>::operator[]<long>(long);
// public: hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>(int);
// public: struct instance_hit_info & s_static_array<struct instance_hit_info, 2048>::operator[]<long>(long);
// public: hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>(class hkpMoppPrimitiveInfo *, int, int);
// public: void hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_water_physics_hull_surface_definition::e_hull_surface_flags);
// private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_water_physics_hull_surface_definition::e_hull_surface_flags);
// public: hkArrayBase<class hkpMoppPrimitiveInfo>::hkArrayBase<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, int);
// public: hkArrayBase<class hkpMoppPrimitiveInfo>::~hkArrayBase<class hkpMoppPrimitiveInfo>(void);
// public: void hkArrayBase<class hkpMoppPrimitiveInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<class hkpMoppPrimitiveInfo>::getCapacity(void) const;
// public: static bool s_static_array<struct s_water_physics_cache::s_primitive, 16>::valid<long>(long);
// public: static bool s_static_array<struct instance_hit_info, 2048>::valid<long>(long);
// private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void hkArrayBase<class hkpMoppPrimitiveInfo>::clear(void);
// private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_water_physics_hull_surface_definition::e_hull_surface_flags);
// public: static void hkArrayUtil::destruct<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, struct hkTraitBool<0>);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>(void);
// void g_water_physics_cache_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_water_physics_cache_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z");
//};

//void water_physics_initialize(void)
//{
//    mangled_ppc("?water_physics_initialize@@YAXXZ");
//};

//void water_physics_dispose(void)
//{
//    mangled_ppc("?water_physics_dispose@@YAXXZ");
//};

//void water_physics_initialize_for_new_map(void)
//{
//    mangled_ppc("?water_physics_initialize_for_new_map@@YAXXZ");
//};

//void water_physics_dispose_from_old_map(void)
//{
//    mangled_ppc("?water_physics_dispose_from_old_map@@YAXXZ");
//};

//void water_physics_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?water_physics_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void water_physics_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?water_physics_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//bool water_physics_object_should_update(long)
//{
//    mangled_ppc("?water_physics_object_should_update@@YA_NJ@Z");
//};

//bool objects_move_in_progress(void)
//{
//    mangled_ppc("?objects_move_in_progress@@YA_NXZ");
//};

//bool water_physics_model_new(long, struct s_water_physics_model *)
//{
//    mangled_ppc("?water_physics_model_new@@YA_NJPAUs_water_physics_model@@@Z");
//};

//void water_physics_disconnect_object(long)
//{
//    mangled_ppc("?water_physics_disconnect_object@@YAXJ@Z");
//};

//bool water_physics_test_point(union real_point3d const *, class c_global_material_type *)
//{
//    mangled_ppc("?water_physics_test_point@@YA_NPBTreal_point3d@@PAVc_global_material_type@@@Z");
//};

//bool water_physics_test_point(union real_point3d const *, struct s_water_physics_test_sphere_result *)
//{
//    mangled_ppc("?water_physics_test_point@@YA_NPBTreal_point3d@@PAUs_water_physics_test_sphere_result@@@Z");
//};

//bool water_physics_test_sphere(union real_point3d const *, float, struct s_water_physics_test_sphere_result *)
//{
//    mangled_ppc("?water_physics_test_sphere@@YA_NPBTreal_point3d@@MPAUs_water_physics_test_sphere_result@@@Z");
//};

//bool water_physics_test_sphere(union real_point3d const *, float, long, struct s_water_physics_test_sphere_result *)
//{
//    mangled_ppc("?water_physics_test_sphere@@YA_NPBTreal_point3d@@MJPAUs_water_physics_test_sphere_result@@@Z");
//};

//bool water_physics_test_sphere(bool, union real_point3d const *, float, struct s_water_physics_test_sphere_result *)
//{
//    mangled_ppc("?water_physics_test_sphere@@YA_N_NPBTreal_point3d@@MPAUs_water_physics_test_sphere_result@@@Z");
//};

//bool water_physics_test_sphere(bool, union real_point3d const *, float, struct s_water_physics_test_sphere_result *, struct s_water_physics_cache *)
//{
//    mangled_ppc("?water_physics_test_sphere@@YA_N_NPBTreal_point3d@@MPAUs_water_physics_test_sphere_result@@PAUs_water_physics_cache@@@Z");
//};

//void water_physics_test_sphere_result_write(struct s_water_physics_test_sphere_result *, float, struct plane3d const *, struct plane3d const *, union vector3d const *, long, long, float)
//{
//    mangled_ppc("?water_physics_test_sphere_result_write@@YAXPAUs_water_physics_test_sphere_result@@MPBUplane3d@@1PBTvector3d@@JJM@Z");
//};

//bool water_physics_test_primitive(struct s_structure_design_physics const *, long, union real_point3d const *, float, float *, float *, struct plane3d *, long *)
//{
//    mangled_ppc("?water_physics_test_primitive@@YA_NPBUs_structure_design_physics@@JPBTreal_point3d@@MPAM2PAUplane3d@@PAJ@Z");
//};

//float const water_physics_calculate_sphere_t(union real_point3d const *, float, struct plane3d const *, float *)
//{
//    mangled_ppc("?water_physics_calculate_sphere_t@@YA?BMPBTreal_point3d@@MPBUplane3d@@PAM@Z");
//};

//bool compare_underwater_hit_data(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_underwater_hit_data@@YA_NPBX00@Z");
//};

//bool water_physics_test_vector(union real_point3d const *, union vector3d const *, bool, struct s_water_physics_test_vector_result *)
//{
//    mangled_ppc("?water_physics_test_vector@@YA_NPBTreal_point3d@@PBTvector3d@@_NPAUs_water_physics_test_vector_result@@@Z");
//};

//public: hkpMoppRayVirtualMachine::hkpMoppRayVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppRayVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppVirtualMachine::hkpMoppVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppRayVirtualMachine::~hkpMoppRayVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppRayVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppVirtualMachine::~hkpMoppVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppVirtualMachine@@QAA@XZ");
//};

//bool water_physics_test_vector_solid(union real_point3d const *, union vector3d const *, struct s_water_physics_test_vector_result *)
//{
//    mangled_ppc("?water_physics_test_vector_solid@@YA_NPBTreal_point3d@@PBTvector3d@@PAUs_water_physics_test_vector_result@@@Z");
//};

//bool water_physics_test_vector_thin(union real_point3d const *, union vector3d const *, struct s_water_physics_test_vector_result *)
//{
//    mangled_ppc("?water_physics_test_vector_thin@@YA_NPBTreal_point3d@@PBTvector3d@@PAUs_water_physics_test_vector_result@@@Z");
//};

//float water_physics_calculate_water_depth_scale_at_position(union real_point3d const *)
//{
//    mangled_ppc("?water_physics_calculate_water_depth_scale_at_position@@YAMPBTreal_point3d@@@Z");
//};

//void water_physics_get_object_test_bounding_sphere(long, union real_point3d *, float *)
//{
//    mangled_ppc("?water_physics_get_object_test_bounding_sphere@@YAXJPATreal_point3d@@PAM@Z");
//};

//bool water_physics_update_internal(long)
//{
//    mangled_ppc("?water_physics_update_internal@@YA_NJ@Z");
//};

//public: long c_havok_component::get_impact_count(void) const
//{
//    mangled_ppc("?get_impact_count@c_havok_component@@QBAJXZ");
//};

//public: long c_havok_component::get_impact_datum_index(long) const
//{
//    mangled_ppc("?get_impact_datum_index@c_havok_component@@QBAJJ@Z");
//};

//public: s_water_physics_model::s_water_physics_model(void)
//{
//    mangled_ppc("??0s_water_physics_model@@QAA@XZ");
//};

//public: s_water_physics_hull_surface_definition::s_water_physics_hull_surface_definition(void)
//{
//    mangled_ppc("??0s_water_physics_hull_surface_definition@@QAA@XZ");
//};

//void water_physics_object_float_reset(long)
//{
//    mangled_ppc("?water_physics_object_float_reset@@YAXJ@Z");
//};

//float get_clamped_rigid_body_speed(class c_havok_component const *, long, union real_point3d const *)
//{
//    mangled_ppc("?get_clamped_rigid_body_speed@@YAMPBVc_havok_component@@JPBTreal_point3d@@@Z");
//};

//void set_rigid_body_water_density_type(long, long, struct s_water_physics_model *)
//{
//    mangled_ppc("?set_rigid_body_water_density_type@@YAXJJPAUs_water_physics_model@@@Z");
//};

//enum e_material_physics_drag_class water_physics_object_material_physics_drag_class_get(long)
//{
//    mangled_ppc("?water_physics_object_material_physics_drag_class_get@@YA?AW4e_material_physics_drag_class@@J@Z");
//};

//struct s_water_physics_drag_properties const * water_physics_find_drag_properties(long, struct s_global_material_definition const *)
//{
//    mangled_ppc("?water_physics_find_drag_properties@@YAPBUs_water_physics_drag_properties@@JPBUs_global_material_definition@@@Z");
//};

//bool water_physics_model_sphere_should_create_ripple(struct s_water_physics_model const *, long, float, float, long, long)
//{
//    mangled_ppc("?water_physics_model_sphere_should_create_ripple@@YA_NPBUs_water_physics_model@@JMMJJ@Z");
//};

//float water_physics_get_water_ripple_interaction_max_distance(long)
//{
//    mangled_ppc("?water_physics_get_water_ripple_interaction_max_distance@@YAMJ@Z");
//};

//void create_rigid_body_spheres(long, long, struct s_water_physics_model *)
//{
//    mangled_ppc("?create_rigid_body_spheres@@YAXJJPAUs_water_physics_model@@@Z");
//};

//bool object_is_boat(long)
//{
//    mangled_ppc("?object_is_boat@@YA_NJ@Z");
//};

//void water_physics_compute_drag(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, union vector3d const *, union vector3d const *, struct s_physics_force_function const *, struct s_physics_force_function const *, bool, struct s_water_physics_drag_results *)
//{
//    mangled_ppc("?water_physics_compute_drag@@YAXPBTreal_point3d@@PBTvector3d@@011MM11PBUs_physics_force_function@@2_NPAUs_water_physics_drag_results@@@Z");
//};

//void water_physics_apply_total_forces(long, long, struct s_water_physics_model::s_hull_surface const *, float, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?water_physics_apply_total_forces@@YAXJJPBUs_hull_surface@s_water_physics_model@@MPBTvector3d@@1@Z");
//};

//void compute_velocity_damping(struct s_water_physics_model::s_hull_surface const *, float, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?compute_velocity_damping@@YAXPBUs_hull_surface@s_water_physics_model@@MPATvector3d@@1@Z");
//};

//bool water_physics_test_extruded_water(long, float, union real_point3d const *, union vector3d const *, float, float *)
//{
//    mangled_ppc("?water_physics_test_extruded_water@@YA_NJMPBTreal_point3d@@PBTvector3d@@MPAM@Z");
//};

//void render_debug_hull_surface(union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?render_debug_hull_surface@@YAXPBTreal_point3d@@PBTvector3d@@MMM011@Z");
//};

//void render_debug_disk(union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_disk@@YAXPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void water_physics_render_debug(union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?water_physics_render_debug@@YAXPBTreal_point3d@@PBTvector3d@@@Z");
//};

//public: long c_static_stack<struct s_water_physics_model::s_sphere, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_water_physics_model::s_sphere, 16>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QAAXJ@Z");
//};

//public: struct s_water_physics_model::s_sphere * c_static_stack<struct s_water_physics_model::s_sphere, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QAAPAUs_sphere@s_water_physics_model@@J@Z");
//};

//public: long c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QBAJXZ");
//};

//public: void c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QAAXJ@Z");
//};

//public: struct s_water_physics_model::s_rigid_body * c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QAAPAUs_rigid_body@s_water_physics_model@@J@Z");
//};

//public: c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::c_static_stack<struct s_water_physics_model::s_rigid_body, 10>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QAA@XZ");
//};

//public: void c_static_stack<struct s_water_effects_hull_surface_state, 64>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_water_effects_hull_surface_state@@$0EA@@@QAAXXZ");
//};

//public: void c_data_iterator<struct s_water_physics_cache>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_water_physics_cache@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_water_physics_cache>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_water_physics_cache@@@@QAA_NXZ");
//};

//public: struct s_water_physics_cache * c_data_iterator<struct s_water_physics_cache>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_water_physics_cache@@@@QBAPAUs_water_physics_cache@@XZ");
//};

//public: long c_data_iterator<struct s_water_physics_cache>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_water_physics_cache@@@@QBAJXZ");
//};

//public: hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@I$0EAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//?sort_range@?$s_static_array@Uinstance_hit_info@@$0IAA@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@Uinstance_hit_info@@$0IAA@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@VhkpMoppPrimitiveInfo@@$0EAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: s_water_physics_model::s_rigid_body::s_rigid_body(void)
//{
//    mangled_ppc("??0s_rigid_body@s_water_physics_model@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_water_physics_model::s_sphere, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_water_physics_model::s_sphere, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QBA_NJ@Z");
//};

//public: c_static_stack<struct s_water_physics_model::s_sphere, 16>::c_static_stack<struct s_water_physics_model::s_sphere, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_sphere@s_water_physics_model@@$0BA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_water_physics_model::s_rigid_body, 10>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_rigid_body@s_water_physics_model@@$09@@QBA_NJ@Z");
//};

//public: bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum s_water_physics_hull_surface_definition::e_hull_surface_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_hull_surface_flags@s_water_physics_hull_surface_definition@@@Z");
//};

//public: c_flags<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class hkpMoppPrimitiveInfo & hkArrayBase<class hkpMoppPrimitiveInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAAAAVhkpMoppPrimitiveInfo@@H@Z");
//};

//public: int hkArrayBase<class hkpMoppPrimitiveInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QBAHXZ");
//};

//public: hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::~hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct s_water_physics_cache::s_primitive const & s_static_array<struct s_water_physics_cache::s_primitive, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_primitive@s_water_physics_cache@@$0BA@@@QBAABUs_primitive@s_water_physics_cache@@J@Z");
//};

//public: hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 1024, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@I$0EAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: struct s_water_physics_cache::s_primitive & s_static_array<struct s_water_physics_cache::s_primitive, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_primitive@s_water_physics_cache@@$0BA@@@QAAAAUs_primitive@s_water_physics_cache@@J@Z");
//};

//public: hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpMoppPrimitiveInfo, 1024, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@VhkpMoppPrimitiveInfo@@$0EAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: struct instance_hit_info & s_static_array<struct instance_hit_info, 2048>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Uinstance_hit_info@@$0IAA@@@QAAAAUinstance_hit_info@@J@Z");
//};

//public: hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>(class hkpMoppPrimitiveInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@QAA@PAVhkpMoppPrimitiveInfo@@HH@Z");
//};

//public: void hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum s_water_physics_hull_surface_definition::e_hull_surface_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_hull_surface_flags@s_water_physics_hull_surface_definition@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum s_water_physics_hull_surface_definition::e_hull_surface_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@CAGW4e_hull_surface_flags@s_water_physics_hull_surface_definition@@@Z");
//};

//public: hkArrayBase<class hkpMoppPrimitiveInfo>::hkArrayBase<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAA@PAVhkpMoppPrimitiveInfo@@HH@Z");
//};

//public: hkArrayBase<class hkpMoppPrimitiveInfo>::~hkArrayBase<class hkpMoppPrimitiveInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkpMoppPrimitiveInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<class hkpMoppPrimitiveInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QBAHXZ");
//};

//public: static bool s_static_array<struct s_water_physics_cache::s_primitive, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_primitive@s_water_physics_cache@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct instance_hit_info, 2048>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Uinstance_hit_info@@$0IAA@@@SA_NJ@Z");
//};

//private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@CAGXZ");
//};

//public: void hkArrayBase<class hkpMoppPrimitiveInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAAXXZ");
//};

//private: static unsigned short c_flags_no_init<enum s_water_physics_hull_surface_definition::e_hull_surface_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum s_water_physics_hull_surface_definition::e_hull_surface_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_hull_surface_flags@s_water_physics_hull_surface_definition@@G$01Us_default_enum_string_resolver@@@@CAGW4e_hull_surface_flags@s_water_physics_hull_surface_definition@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkpMoppPrimitiveInfo@@@hkArrayUtil@@SAXPAVhkpMoppPrimitiveInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_water_physics_cache_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_water_physics_cache_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_water_physics_cache_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_water_physics_cache_data_allocator@@YAXXZ");
//};

