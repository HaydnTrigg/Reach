/* ---------- headers */

#include "omaha\physics\collision_kd_hierarchy_collision_internal.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_hierarchy_stack_element, 2048>::k_element_count; // "?k_element_count@?$s_static_array@Us_hierarchy_stack_element@@$0IAA@@@2JB"
// public: static long const s_static_array<struct s_hierarchy_stack_element, 1024>::k_element_count; // "?k_element_count@?$s_static_array@Us_hierarchy_stack_element@@$0EAA@@@2JB"

// long collision_hierarchy_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result *, union real_rectangle3d const *, long, long, struct s_collision_test_flags, struct s_object_marking_data *);
// void collision_result_normalize_t_and_vector(struct collision_result *, union vector3d *);
// void collision_result_denormalize_t_and_vector(struct collision_result *, union vector3d const *, union vector3d *);
// unsigned long collision_hierarchy_dynamic_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result const *, union real_rectangle3d const *, struct s_collision_test_flags, union vector3d const *, long, long, struct s_object_marking_data *);
// unsigned long collision_hierarchy_static_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result const *, union real_rectangle3d const *, class c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>, union vector3d const *, long, long);
// bool structure_instanced_geometry_mark(long, long, unsigned long);
// bool collision_hierarchy_test_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, long, long, struct s_cluster_reference, struct s_collision_test_point_result *, struct s_object_marking_data *);
// bool collision_hierarchy_static_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, struct s_cluster_reference, struct s_collision_test_point_result *);
// struct s_bsp3d_kd_super_node const * structure_context_get_super_node(struct structure_context const *, long);
// bool collision_hierarchy_dynamic_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, long, long, struct structure_context const *, struct s_cluster_reference, struct s_collision_test_point_result *, struct s_object_marking_data *);
// void collision_hierarchy_test_sphere_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, float, float, float, long, long, struct s_cluster_reference, struct collision_feature_list *, struct s_object_marking_data *);
// long collision_hierarhcy_static_test_aabb_against_cluster(union real_rectangle3d const *, union real_point3d const *, float, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, struct structure_context const *, struct s_cluster_reference, struct s_structure_instance_reference *, long);
// void structure_instance_reference_set(struct s_structure_instance_reference *, long, long);
// struct s_hierarchy_stack_element const * static_stack_element_get(struct s_hierarchy_stack_element *, union real_rectangle3d const *, long, long, long, bool);
// bool rectangle_split_by_plane(union real_rectangle3d const *, long, float, bool, union real_rectangle3d *);
// long collision_hierarhcy_dynamic_test_aabb_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct structure_context const *, struct s_cluster_reference, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *, class s_static_array<struct s_cluster_reference, 512> *, long *);
// public: s_dynamic_test_aabb_against_cluster_input::s_dynamic_test_aabb_against_cluster_input(struct structure_context const *, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct s_cluster_reference, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *, long *, class s_static_array<struct s_cluster_reference, 512> *);
// long collision_hierarhcy_dynamic_test_aabb_against_cluster(struct s_dynamic_test_aabb_against_cluster_input *, struct s_bsp3d_kd_super_node const *);
// void collision_hierarhcy_dynamic_test_aabb(struct s_hierarchy_stack_element const *, struct s_dynamic_test_aabb_against_cluster_input *, struct s_bsp3d_kd_super_node const *);
// void collision_hierarhcy_dynamic_test_aabb_test_element_headers(long, struct s_dynamic_test_aabb_against_cluster_input *);
// void collision_hierarhcy_dynamic_test_aabb_read_leaf(struct s_structure_super_node_mapping const *, long, long, long, bool, struct s_dynamic_test_aabb_against_cluster_input *);
// long collision_hierarchy_test_sphere_against_cluster_instances(class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, struct s_structure_instance_reference *, long);
// long collision_hierarchy_objects_in_sphere(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, long *, long, struct s_object_marking_data *);
// long collision_hierarchy_objects_in_sphere_attached(long, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, long *, long, struct s_object_marking_data *);
// long collision_hierarhcy_dynamic_test_aabb_against_node(long, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct structure_context const *, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *);
// long collision_hierarhcy_dynamic_test_aabb_against_node(struct s_dynamic_test_aabb_against_cluster_input *, long);
// void collision_hierarhcy_dynamic_test_cone_against_cluster(struct s_dynamic_test_cone_against_cluster_input *, struct s_cluster_reference);
// void collision_hierarhcy_dynamic_test_frustum_test_element_headers(long, struct s_dynamic_test_cone_against_cluster_input *);
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// void collision_hierarhcy_dynamic_test_frustum_read_leaf(struct s_structure_super_node_mapping const *, struct s_cluster_reference, long, long, long, bool, struct s_dynamic_test_cone_against_cluster_input *);
// long collision_hierarchy_objects_in_cone(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, float, float, struct s_cluster_reference, long *, long, bool);
// void set_real_plane3d(struct plane3d *, float, float, float, float);
// public: s_dynamic_test_cone_against_cluster_input::s_dynamic_test_cone_against_cluster_input(void);
// long collision_hierarchy_cluster_get_first_object_and_payload(struct s_collisoin_hierarchy_cluster_iterator *, struct s_cluster_reference, struct s_object_marking_data *, struct s_object_cluster_payload const **);
// void collision_hierarchy_cluster_iterator_initialize(struct s_collisoin_hierarchy_cluster_iterator *, unsigned long, struct s_cluster_reference);
// long collision_hierarchy_cluster_get_next_object_and_payload(struct s_collisoin_hierarchy_cluster_iterator *, struct s_object_marking_data *, struct s_object_cluster_payload const **);
// long collision_hierarchy_cluster_get_next_element(struct s_collisoin_hierarchy_cluster_iterator *);
// void collision_hierarchy_cluster_test_frustum(struct s_cluster_reference, class c_visibility_collection *, long, struct s_object_marking_data *, struct s_object_user_marking_data *, long, long, bool);
// void collision_hierarchy_cluster_test_frustum_stack(union real_rectangle3d const *, struct s_frustum_test_input *);
// void collision_hierarchy_cluster_visibility_consume_header(bool, struct s_collision_hierarchy_element_header const *, struct s_frustum_test_input *);
// long collision_hierarchy_cluster_test_frustum_stack_test_child(long, long, long, union real_rectangle3d const *, bool, class s_static_array<struct s_hierarchy_stack_element, 1024> &, long, struct s_bsp3d_kd_super_node const *, struct s_frustum_test_input *);
// void collision_hierarchy_cluster_visibility_consume_fully_contained_node_recursive(long, struct s_frustum_test_input *);
// public: s_frustum_test_input::s_frustum_test_input(void);
// public: Sphere::Sphere(void);
// public: bool c_static_stack<long, 2048>::empty(void) const;
// public: void c_static_stack<long, 2048>::clear(void);
// public: void c_static_stack<long, 2048>::push_back(long const &);
// public: void c_static_stack<long, 2048>::pop(void);
// public: long * c_static_stack<long, 2048>::get_top(void);
// public: struct s_cluster_reference * s_static_array<struct s_cluster_reference, 512>::get_elements(void);
// public: bool c_static_stack<long, 2048>::valid(void) const;
// public: long c_static_stack<long, 2048>::top(void) const;
// public: long c_static_stack<long, 2048>::push(void);
// public: long * c_static_stack<long, 2048>::get(long);
// public: bool c_static_stack<long, 2048>::valid(long) const;
// public: bool c_static_stack<long, 2048>::full(void) const;
// public: struct s_hierarchy_stack_element & s_static_array<struct s_hierarchy_stack_element, 2048>::operator[]<long>(long);
// public: float const & s_static_array<float, 15>::operator[]<short>(short) const;
// public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 512>::operator[]<int>(int);
// public: struct s_hierarchy_stack_element & s_static_array<struct s_hierarchy_stack_element, 1024>::operator[]<long>(long);
// public: _XMFLOAT3::_XMFLOAT3(float, float, float);
// public: static bool s_static_array<struct s_hierarchy_stack_element, 2048>::valid<long>(long);
// public: static bool s_static_array<float, 15>::valid<short>(short);
// public: static bool s_static_array<struct s_cluster_reference, 512>::valid<int>(int);
// public: static bool s_static_array<struct s_hierarchy_stack_element, 1024>::valid<long>(long);
// public: struct _XMFLOAT3& _XMFLOAT3::operator=(struct _XMFLOAT3const &);
// public: s_collision_hierarchy_node_header_empty::s_collision_hierarchy_node_header_empty(void);

//long collision_hierarchy_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result *, union real_rectangle3d const *, long, long, struct s_collision_test_flags, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_kd_node_test_vector@@YAJPAUs_collision_hierarchy_test_arguements@@PAVc_collision_bsp_test_vector_full_result@@PBTreal_rectangle3d@@JJUs_collision_test_flags@@PAUs_object_marking_data@@@Z");
//};

//void collision_result_normalize_t_and_vector(struct collision_result *, union vector3d *)
//{
//    mangled_ppc("?collision_result_normalize_t_and_vector@@YAXPAUcollision_result@@PATvector3d@@@Z");
//};

//void collision_result_denormalize_t_and_vector(struct collision_result *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?collision_result_denormalize_t_and_vector@@YAXPAUcollision_result@@PBTvector3d@@PAT2@@Z");
//};

//unsigned long collision_hierarchy_dynamic_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result const *, union real_rectangle3d const *, struct s_collision_test_flags, union vector3d const *, long, long, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_dynamic_kd_node_test_vector@@YAKPAUs_collision_hierarchy_test_arguements@@PBVc_collision_bsp_test_vector_full_result@@PBTreal_rectangle3d@@Us_collision_test_flags@@PBTvector3d@@JJPAUs_object_marking_data@@@Z");
//};

//unsigned long collision_hierarchy_static_kd_node_test_vector(struct s_collision_hierarchy_test_arguements *, class c_collision_bsp_test_vector_full_result const *, union real_rectangle3d const *, class c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>, union vector3d const *, long, long)
//{
//    mangled_ppc("?collision_hierarchy_static_kd_node_test_vector@@YAKPAUs_collision_hierarchy_test_arguements@@PBVc_collision_bsp_test_vector_full_result@@PBTreal_rectangle3d@@V?$c_flags_no_init@W4e_collision_test_flag@@K$0BI@Us_default_enum_string_resolver@@@@PBTvector3d@@JJ@Z");
//};

//bool structure_instanced_geometry_mark(long, long, unsigned long)
//{
//    mangled_ppc("?structure_instanced_geometry_mark@@YA_NJJK@Z");
//};

//bool collision_hierarchy_test_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, long, long, struct s_cluster_reference, struct s_collision_test_point_result *, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_test_point_against_cluster@@YA_NUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_instance_collision_cull_flag@@G$02Us_default_enum_string_resolver@@@@PBTreal_point3d@@JJUs_cluster_reference@@PAUs_collision_test_point_result@@PAUs_object_marking_data@@@Z");
//};

//bool collision_hierarchy_static_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, struct s_cluster_reference, struct s_collision_test_point_result *)
//{
//    mangled_ppc("?collision_hierarchy_static_point_against_cluster@@YA_NUs_collision_test_flags@@V?$c_flags@W4e_instance_collision_cull_flag@@G$02Us_default_enum_string_resolver@@@@PBTreal_point3d@@Us_cluster_reference@@PAUs_collision_test_point_result@@@Z");
//};

//struct s_bsp3d_kd_super_node const * structure_context_get_super_node(struct structure_context const *, long)
//{
//    mangled_ppc("?structure_context_get_super_node@@YAPBUs_bsp3d_kd_super_node@@PBUstructure_context@@J@Z");
//};

//bool collision_hierarchy_dynamic_point_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, long, long, struct structure_context const *, struct s_cluster_reference, struct s_collision_test_point_result *, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_dynamic_point_against_cluster@@YA_NUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@PBTreal_point3d@@JJPBUstructure_context@@Us_cluster_reference@@PAUs_collision_test_point_result@@PAUs_object_marking_data@@@Z");
//};

//void collision_hierarchy_test_sphere_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, float, float, float, long, long, struct s_cluster_reference, struct collision_feature_list *, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_test_sphere_against_cluster@@YAXUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_instance_collision_cull_flag@@G$02Us_default_enum_string_resolver@@@@PBTreal_point3d@@MMMJJUs_cluster_reference@@PAUcollision_feature_list@@PAUs_object_marking_data@@@Z");
//};

//long collision_hierarhcy_static_test_aabb_against_cluster(union real_rectangle3d const *, union real_point3d const *, float, class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, struct structure_context const *, struct s_cluster_reference, struct s_structure_instance_reference *, long)
//{
//    mangled_ppc("?collision_hierarhcy_static_test_aabb_against_cluster@@YAJPBTreal_rectangle3d@@PBTreal_point3d@@MV?$c_flags@W4e_instance_collision_cull_flag@@G$02Us_default_enum_string_resolver@@@@PBUstructure_context@@Us_cluster_reference@@PAUs_structure_instance_reference@@J@Z");
//};

//void structure_instance_reference_set(struct s_structure_instance_reference *, long, long)
//{
//    mangled_ppc("?structure_instance_reference_set@@YAXPAUs_structure_instance_reference@@JJ@Z");
//};

//struct s_hierarchy_stack_element const * static_stack_element_get(struct s_hierarchy_stack_element *, union real_rectangle3d const *, long, long, long, bool)
//{
//    mangled_ppc("?static_stack_element_get@@YAPBUs_hierarchy_stack_element@@PAU1@PBTreal_rectangle3d@@JJJ_N@Z");
//};

//bool rectangle_split_by_plane(union real_rectangle3d const *, long, float, bool, union real_rectangle3d *)
//{
//    mangled_ppc("?rectangle_split_by_plane@@YA_NPBTreal_rectangle3d@@JM_NPAT1@@Z");
//};

//long collision_hierarhcy_dynamic_test_aabb_against_cluster(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct structure_context const *, struct s_cluster_reference, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *, class s_static_array<struct s_cluster_reference, 512> *, long *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_against_cluster@@YAJUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@EKPBTreal_rectangle3d@@PBTreal_point3d@@MPBUstructure_context@@Us_cluster_reference@@PAUs_collision_hierarchy_element_reference@@JPAUs_object_marking_data@@PAV?$s_static_array@Us_cluster_reference@@$0CAA@@@PAJ@Z");
//};

//public: s_dynamic_test_aabb_against_cluster_input::s_dynamic_test_aabb_against_cluster_input(struct structure_context const *, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct s_cluster_reference, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *, long *, class s_static_array<struct s_cluster_reference, 512> *)
//{
//    mangled_ppc("??0s_dynamic_test_aabb_against_cluster_input@@QAA@PBUstructure_context@@Us_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@EKPBTreal_rectangle3d@@PBTreal_point3d@@MUs_cluster_reference@@PAUs_collision_hierarchy_element_reference@@JPAUs_object_marking_data@@PAJPAV?$s_static_array@Us_cluster_reference@@$0CAA@@@@Z");
//};

//long collision_hierarhcy_dynamic_test_aabb_against_cluster(struct s_dynamic_test_aabb_against_cluster_input *, struct s_bsp3d_kd_super_node const *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_against_cluster@@YAJPAUs_dynamic_test_aabb_against_cluster_input@@PBUs_bsp3d_kd_super_node@@@Z");
//};

//void collision_hierarhcy_dynamic_test_aabb(struct s_hierarchy_stack_element const *, struct s_dynamic_test_aabb_against_cluster_input *, struct s_bsp3d_kd_super_node const *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb@@YAXPBUs_hierarchy_stack_element@@PAUs_dynamic_test_aabb_against_cluster_input@@PBUs_bsp3d_kd_super_node@@@Z");
//};

//void collision_hierarhcy_dynamic_test_aabb_test_element_headers(long, struct s_dynamic_test_aabb_against_cluster_input *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_test_element_headers@@YAXJPAUs_dynamic_test_aabb_against_cluster_input@@@Z");
//};

//void collision_hierarhcy_dynamic_test_aabb_read_leaf(struct s_structure_super_node_mapping const *, long, long, long, bool, struct s_dynamic_test_aabb_against_cluster_input *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_read_leaf@@YAXPBUs_structure_super_node_mapping@@JJJ_NPAUs_dynamic_test_aabb_against_cluster_input@@@Z");
//};

//long collision_hierarchy_test_sphere_against_cluster_instances(class c_flags<enum e_instance_collision_cull_flag, unsigned short, 3, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, struct s_structure_instance_reference *, long)
//{
//    mangled_ppc("?collision_hierarchy_test_sphere_against_cluster_instances@@YAJV?$c_flags@W4e_instance_collision_cull_flag@@G$02Us_default_enum_string_resolver@@@@PBTreal_point3d@@MUs_cluster_reference@@PAUs_structure_instance_reference@@J@Z");
//};

//long collision_hierarchy_objects_in_sphere(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, long *, long, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_objects_in_sphere@@YAJUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@PBTreal_point3d@@MUs_cluster_reference@@PAJJPAUs_object_marking_data@@@Z");
//};

//long collision_hierarchy_objects_in_sphere_attached(long, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, float, struct s_cluster_reference, long *, long, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarchy_objects_in_sphere_attached@@YAJJUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@PBTreal_point3d@@MUs_cluster_reference@@PAJJPAUs_object_marking_data@@@Z");
//};

//long collision_hierarhcy_dynamic_test_aabb_against_node(long, struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, unsigned char, unsigned long, union real_rectangle3d const *, union real_point3d const *, float, struct structure_context const *, struct s_collision_hierarchy_element_reference *, long, struct s_object_marking_data *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_against_node@@YAJJUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@EKPBTreal_rectangle3d@@PBTreal_point3d@@MPBUstructure_context@@PAUs_collision_hierarchy_element_reference@@JPAUs_object_marking_data@@@Z");
//};

//long collision_hierarhcy_dynamic_test_aabb_against_node(struct s_dynamic_test_aabb_against_cluster_input *, long)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_aabb_against_node@@YAJPAUs_dynamic_test_aabb_against_cluster_input@@J@Z");
//};

//void collision_hierarhcy_dynamic_test_cone_against_cluster(struct s_dynamic_test_cone_against_cluster_input *, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_cone_against_cluster@@YAXPAUs_dynamic_test_cone_against_cluster_input@@Us_cluster_reference@@@Z");
//};

//void collision_hierarhcy_dynamic_test_frustum_test_element_headers(long, struct s_dynamic_test_cone_against_cluster_input *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_frustum_test_element_headers@@YAXJPAUs_dynamic_test_cone_against_cluster_input@@@Z");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//void collision_hierarhcy_dynamic_test_frustum_read_leaf(struct s_structure_super_node_mapping const *, struct s_cluster_reference, long, long, long, bool, struct s_dynamic_test_cone_against_cluster_input *)
//{
//    mangled_ppc("?collision_hierarhcy_dynamic_test_frustum_read_leaf@@YAXPBUs_structure_super_node_mapping@@Us_cluster_reference@@JJJ_NPAUs_dynamic_test_cone_against_cluster_input@@@Z");
//};

//long collision_hierarchy_objects_in_cone(struct s_collision_test_flags, class c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>, union real_point3d const *, union vector3d const *, float, float, struct s_cluster_reference, long *, long, bool)
//{
//    mangled_ppc("?collision_hierarchy_objects_in_cone@@YAJUs_collision_test_flags@@V?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@PBTreal_point3d@@PBTvector3d@@MMUs_cluster_reference@@PAJJ_N@Z");
//};

//void set_real_plane3d(struct plane3d *, float, float, float, float)
//{
//    mangled_ppc("?set_real_plane3d@@YAXPAUplane3d@@MMMM@Z");
//};

//public: s_dynamic_test_cone_against_cluster_input::s_dynamic_test_cone_against_cluster_input(void)
//{
//    mangled_ppc("??0s_dynamic_test_cone_against_cluster_input@@QAA@XZ");
//};

//long collision_hierarchy_cluster_get_first_object_and_payload(struct s_collisoin_hierarchy_cluster_iterator *, struct s_cluster_reference, struct s_object_marking_data *, struct s_object_cluster_payload const **)
//{
//    mangled_ppc("?collision_hierarchy_cluster_get_first_object_and_payload@@YAJPAUs_collisoin_hierarchy_cluster_iterator@@Us_cluster_reference@@PAUs_object_marking_data@@PAPBUs_object_cluster_payload@@@Z");
//};

//void collision_hierarchy_cluster_iterator_initialize(struct s_collisoin_hierarchy_cluster_iterator *, unsigned long, struct s_cluster_reference)
//{
//    mangled_ppc("?collision_hierarchy_cluster_iterator_initialize@@YAXPAUs_collisoin_hierarchy_cluster_iterator@@KUs_cluster_reference@@@Z");
//};

//long collision_hierarchy_cluster_get_next_object_and_payload(struct s_collisoin_hierarchy_cluster_iterator *, struct s_object_marking_data *, struct s_object_cluster_payload const **)
//{
//    mangled_ppc("?collision_hierarchy_cluster_get_next_object_and_payload@@YAJPAUs_collisoin_hierarchy_cluster_iterator@@PAUs_object_marking_data@@PAPBUs_object_cluster_payload@@@Z");
//};

//long collision_hierarchy_cluster_get_next_element(struct s_collisoin_hierarchy_cluster_iterator *)
//{
//    mangled_ppc("?collision_hierarchy_cluster_get_next_element@@YAJPAUs_collisoin_hierarchy_cluster_iterator@@@Z");
//};

//void collision_hierarchy_cluster_test_frustum(struct s_cluster_reference, class c_visibility_collection *, long, struct s_object_marking_data *, struct s_object_user_marking_data *, long, long, bool)
//{
//    mangled_ppc("?collision_hierarchy_cluster_test_frustum@@YAXUs_cluster_reference@@PAVc_visibility_collection@@JPAUs_object_marking_data@@PAUs_object_user_marking_data@@JJ_N@Z");
//};

//void collision_hierarchy_cluster_test_frustum_stack(union real_rectangle3d const *, struct s_frustum_test_input *)
//{
//    mangled_ppc("?collision_hierarchy_cluster_test_frustum_stack@@YAXPBTreal_rectangle3d@@PAUs_frustum_test_input@@@Z");
//};

//void collision_hierarchy_cluster_visibility_consume_header(bool, struct s_collision_hierarchy_element_header const *, struct s_frustum_test_input *)
//{
//    mangled_ppc("?collision_hierarchy_cluster_visibility_consume_header@@YAX_NPBUs_collision_hierarchy_element_header@@PAUs_frustum_test_input@@@Z");
//};

//long collision_hierarchy_cluster_test_frustum_stack_test_child(long, long, long, union real_rectangle3d const *, bool, class s_static_array<struct s_hierarchy_stack_element, 1024> &, long, struct s_bsp3d_kd_super_node const *, struct s_frustum_test_input *)
//{
//    mangled_ppc("?collision_hierarchy_cluster_test_frustum_stack_test_child@@YAJJJJPBTreal_rectangle3d@@_NAAV?$s_static_array@Us_hierarchy_stack_element@@$0EAA@@@JPBUs_bsp3d_kd_super_node@@PAUs_frustum_test_input@@@Z");
//};

//void collision_hierarchy_cluster_visibility_consume_fully_contained_node_recursive(long, struct s_frustum_test_input *)
//{
//    mangled_ppc("?collision_hierarchy_cluster_visibility_consume_fully_contained_node_recursive@@YAXJPAUs_frustum_test_input@@@Z");
//};

//public: s_frustum_test_input::s_frustum_test_input(void)
//{
//    mangled_ppc("??0s_frustum_test_input@@QAA@XZ");
//};

//public: Sphere::Sphere(void)
//{
//    mangled_ppc("??0Sphere@@QAA@XZ");
//};

//public: bool c_static_stack<long, 2048>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@J$0IAA@@@QBA_NXZ");
//};

//public: void c_static_stack<long, 2048>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@J$0IAA@@@QAAXXZ");
//};

//public: void c_static_stack<long, 2048>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$0IAA@@@QAAXABJ@Z");
//};

//public: void c_static_stack<long, 2048>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@J$0IAA@@@QAAXXZ");
//};

//public: long * c_static_stack<long, 2048>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@J$0IAA@@@QAAPAJXZ");
//};

//public: struct s_cluster_reference * s_static_array<struct s_cluster_reference, 512>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_cluster_reference@@$0CAA@@@QAAPAUs_cluster_reference@@XZ");
//};

//public: bool c_static_stack<long, 2048>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0IAA@@@QBA_NXZ");
//};

//public: long c_static_stack<long, 2048>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@J$0IAA@@@QBAJXZ");
//};

//public: long c_static_stack<long, 2048>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$0IAA@@@QAAJXZ");
//};

//public: long * c_static_stack<long, 2048>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0IAA@@@QAAPAJJ@Z");
//};

//public: bool c_static_stack<long, 2048>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0IAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<long, 2048>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$0IAA@@@QBA_NXZ");
//};

//public: struct s_hierarchy_stack_element & s_static_array<struct s_hierarchy_stack_element, 2048>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hierarchy_stack_element@@$0IAA@@@QAAAAUs_hierarchy_stack_element@@J@Z");
//};

//public: float const & s_static_array<float, 15>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@M$0P@@@QBAABMF@Z");
//};

//public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 512>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_cluster_reference@@$0CAA@@@QAAAAUs_cluster_reference@@H@Z");
//};

//public: struct s_hierarchy_stack_element & s_static_array<struct s_hierarchy_stack_element, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hierarchy_stack_element@@$0EAA@@@QAAAAUs_hierarchy_stack_element@@J@Z");
//};

//public: _XMFLOAT3::_XMFLOAT3(float, float, float)
//{
//    mangled_ppc("??0_XMFLOAT3@@QAA@MMM@Z");
//};

//public: static bool s_static_array<struct s_hierarchy_stack_element, 2048>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_hierarchy_stack_element@@$0IAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 15>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@M$0P@@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_cluster_reference, 512>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_cluster_reference@@$0CAA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_hierarchy_stack_element, 1024>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_hierarchy_stack_element@@$0EAA@@@SA_NJ@Z");
//};

//public: struct _XMFLOAT3& _XMFLOAT3::operator=(struct _XMFLOAT3const &)
//{
//    mangled_ppc("??4_XMFLOAT3@@QAAAAU0@ABU0@@Z");
//};

//public: s_collision_hierarchy_node_header_empty::s_collision_hierarchy_node_header_empty(void)
//{
//    mangled_ppc("??0s_collision_hierarchy_node_header_empty@@QAA@XZ");
//};

