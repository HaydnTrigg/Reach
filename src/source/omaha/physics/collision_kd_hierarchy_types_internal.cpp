/* ---------- headers */

#include "omaha\physics\collision_kd_hierarchy_types_internal.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// enum e_packed_object_type *k_packed_object_type_remap_table; // "?k_packed_object_type_remap_table@@3PAW4e_packed_object_type@@A"

// void collision_hierarchy_add_object(long, struct s_game_cluster_bit_vectors const *, struct s_location const *, union real_point3d const *, float, struct s_object_cluster_payload const *);
// void collision_hierarchy_move_object(long, struct s_game_cluster_bit_vectors const *, struct s_location const *, union real_point3d const *, float, struct s_object_cluster_payload const *);
// void collision_hierarchy_update_object_payload(long, struct s_object_cluster_payload const *);
// void collision_hierarchy_remove_object(long);
// struct s_collision_hierarchy_element_reference collision_hierarchy_object_element_reference_get(long);
// struct s_collision_hierarchy_element_payload const * collision_hierarchy_object_element_payload_get(long, struct s_object_cluster_payload const *, struct s_collision_hierarchy_element_payload *);
// struct s_collision_hierarchy_element_reference collision_hierarchy_object_spatial_element_reference_get(long);
// struct s_collision_hierarchy_element_payload const * collision_hierarchy_object_spatial_element_payload_get(long, struct s_object_cluster_payload const *, struct s_collision_hierarchy_element_payload *);
// struct s_cluster_reference collision_hierarchy_object_get_first_cluster(struct s_collision_hierarchy_element_cluster_iterator *, long);
// struct s_cluster_reference collision_hierarchy_object_get_next_cluster(struct s_collision_hierarchy_element_cluster_iterator *);
// public: char const * s_collision_hierarchy_element_reference::describe(void) const;
// public: long * s_collision_hierarchy_element_reference::get_first_element_reference_index_handle(void) const;
// public: union real_rectangle3d * s_collision_hierarchy_element_reference::get_attached_aabb(void) const;
// public: unsigned char s_collision_hierarchy_element_reference::get_spatial_packed_object_types_mask(void) const;
// unsigned char packed_object_mask_from_object_type(enum e_object_type);
// unsigned char packed_object_mask_from_object_mask(class c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: union real_rectangle3d const * s_collision_hierarchy_element_payload::get_bounding_box(union real_rectangle3d *) const;
// public: void s_collision_hierarchy_element_payload::get_bounding_sphere(union real_point3d *, float *) const;
// long collision_hierarchy_object_light_overlaps_get(long, long *, long);
// void collision_hierarchy_add_light(long, struct s_location const *, union real_point3d const *, float);
// void collision_hierarchy_remove_light(long);
// void collision_hierarchy_move_light(long, struct s_location const *, union real_point3d const *, float);
// struct s_collision_hierarchy_element_reference collision_hierarchy_light_element_reference_get(long);
// struct s_collision_hierarchy_element_payload const * collision_hierarchy_light_element_payload_get(long, struct s_collision_hierarchy_element_payload *, union real_point3d const *, float);
// void collision_hierarchy_light_overlaped_instance_bit_vector_compute(struct s_scenario_instance_bit_vector *, enum e_collision_hierarchy_lights_type);
// void collision_hierarchy_light_overlaped_instance_bit_vector_compute_recursive(struct s_scenario_instance_bit_vector *, struct s_collision_kd_hierarchy_static const *, long, long, long, union real_rectangle3d const *, union real_point3d const *, float, long, float, float);
// bool super_node_child_get(struct s_bsp3d_kd_super_node const *, long *, long *, bool);
// public: void c_big_flags_typed_no_init<unsigned long, 8192>::set(unsigned long, bool);
// struct s_collision_hierarchy_object_reference * buffer_cast<struct s_collision_hierarchy_object_reference>(struct s_collision_hierarchy_element_reference *);
// struct s_collision_hierarchy_object_payload * buffer_cast<struct s_collision_hierarchy_object_payload>(struct s_collision_hierarchy_element_payload *);
// struct s_collision_hierarchy_object_spatial_reference * buffer_cast<struct s_collision_hierarchy_object_spatial_reference>(struct s_collision_hierarchy_element_reference *);
// struct s_collision_hierarchy_object_spatial_payload * buffer_cast<struct s_collision_hierarchy_object_spatial_payload>(struct s_collision_hierarchy_element_payload *);
// struct s_collision_hierarchy_object_reference const * buffer_cast_const<struct s_collision_hierarchy_object_reference>(struct s_collision_hierarchy_element_reference const *);
// struct s_collision_hierarchy_light_reference const * buffer_cast_const<struct s_collision_hierarchy_light_reference>(struct s_collision_hierarchy_element_reference const *);
// struct s_collision_hierarchy_object_payload const * buffer_cast_const<struct s_collision_hierarchy_object_payload>(struct s_collision_hierarchy_element_payload const *);
// struct s_collision_hierarchy_light_payload const * buffer_cast_const<struct s_collision_hierarchy_light_payload>(struct s_collision_hierarchy_element_payload const *);
// struct s_collision_hierarchy_light_reference * buffer_cast<struct s_collision_hierarchy_light_reference>(struct s_collision_hierarchy_element_reference *);
// struct s_collision_hierarchy_light_payload * buffer_cast<struct s_collision_hierarchy_light_payload>(struct s_collision_hierarchy_element_payload *);
// public: class c_big_flags_typed_no_init<unsigned long, 8192> & s_static_array<class c_big_flags_typed_no_init<unsigned long, 8192>, 16>::operator[]<short>(short);
// public: bool c_big_flags_typed_no_init<unsigned long, 8192>::valid(void) const;
// public: static bool s_static_array<class c_big_flags_typed_no_init<unsigned long, 8192>, 16>::valid<short>(short);
// protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_mask_of_second_slice_of_chunk_inclusive(unsigned long);
// protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<unsigned long, 8192>::bit_index_to_flag_chunk_index(unsigned long);
// protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_mask_of_first_slice_of_chunk_exclusive(unsigned long);

//void collision_hierarchy_add_object(long, struct s_game_cluster_bit_vectors const *, struct s_location const *, union real_point3d const *, float, struct s_object_cluster_payload const *)
//{
//    mangled_ppc("?collision_hierarchy_add_object@@YAXJPBUs_game_cluster_bit_vectors@@PBUs_location@@PBTreal_point3d@@MPBUs_object_cluster_payload@@@Z");
//};

//void collision_hierarchy_move_object(long, struct s_game_cluster_bit_vectors const *, struct s_location const *, union real_point3d const *, float, struct s_object_cluster_payload const *)
//{
//    mangled_ppc("?collision_hierarchy_move_object@@YAXJPBUs_game_cluster_bit_vectors@@PBUs_location@@PBTreal_point3d@@MPBUs_object_cluster_payload@@@Z");
//};

//void collision_hierarchy_update_object_payload(long, struct s_object_cluster_payload const *)
//{
//    mangled_ppc("?collision_hierarchy_update_object_payload@@YAXJPBUs_object_cluster_payload@@@Z");
//};

//void collision_hierarchy_remove_object(long)
//{
//    mangled_ppc("?collision_hierarchy_remove_object@@YAXJ@Z");
//};

//struct s_collision_hierarchy_element_reference collision_hierarchy_object_element_reference_get(long)
//{
//    mangled_ppc("?collision_hierarchy_object_element_reference_get@@YA?AUs_collision_hierarchy_element_reference@@J@Z");
//};

//struct s_collision_hierarchy_element_payload const * collision_hierarchy_object_element_payload_get(long, struct s_object_cluster_payload const *, struct s_collision_hierarchy_element_payload *)
//{
//    mangled_ppc("?collision_hierarchy_object_element_payload_get@@YAPBUs_collision_hierarchy_element_payload@@JPBUs_object_cluster_payload@@PAU1@@Z");
//};

//struct s_collision_hierarchy_element_reference collision_hierarchy_object_spatial_element_reference_get(long)
//{
//    mangled_ppc("?collision_hierarchy_object_spatial_element_reference_get@@YA?AUs_collision_hierarchy_element_reference@@J@Z");
//};

//struct s_collision_hierarchy_element_payload const * collision_hierarchy_object_spatial_element_payload_get(long, struct s_object_cluster_payload const *, struct s_collision_hierarchy_element_payload *)
//{
//    mangled_ppc("?collision_hierarchy_object_spatial_element_payload_get@@YAPBUs_collision_hierarchy_element_payload@@JPBUs_object_cluster_payload@@PAU1@@Z");
//};

//struct s_cluster_reference collision_hierarchy_object_get_first_cluster(struct s_collision_hierarchy_element_cluster_iterator *, long)
//{
//    mangled_ppc("?collision_hierarchy_object_get_first_cluster@@YA?AUs_cluster_reference@@PAUs_collision_hierarchy_element_cluster_iterator@@J@Z");
//};

//struct s_cluster_reference collision_hierarchy_object_get_next_cluster(struct s_collision_hierarchy_element_cluster_iterator *)
//{
//    mangled_ppc("?collision_hierarchy_object_get_next_cluster@@YA?AUs_cluster_reference@@PAUs_collision_hierarchy_element_cluster_iterator@@@Z");
//};

//public: char const * s_collision_hierarchy_element_reference::describe(void) const
//{
//    mangled_ppc("?describe@s_collision_hierarchy_element_reference@@QBAPBDXZ");
//};

//public: long * s_collision_hierarchy_element_reference::get_first_element_reference_index_handle(void) const
//{
//    mangled_ppc("?get_first_element_reference_index_handle@s_collision_hierarchy_element_reference@@QBAPAJXZ");
//};

//public: union real_rectangle3d * s_collision_hierarchy_element_reference::get_attached_aabb(void) const
//{
//    mangled_ppc("?get_attached_aabb@s_collision_hierarchy_element_reference@@QBAPATreal_rectangle3d@@XZ");
//};

//public: unsigned char s_collision_hierarchy_element_reference::get_spatial_packed_object_types_mask(void) const
//{
//    mangled_ppc("?get_spatial_packed_object_types_mask@s_collision_hierarchy_element_reference@@QBAEXZ");
//};

//unsigned char packed_object_mask_from_object_type(enum e_object_type)
//{
//    mangled_ppc("?packed_object_mask_from_object_type@@YAEW4e_object_type@@@Z");
//};

//unsigned char packed_object_mask_from_object_mask(class c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?packed_object_mask_from_object_mask@@YAEV?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: union real_rectangle3d const * s_collision_hierarchy_element_payload::get_bounding_box(union real_rectangle3d *) const
//{
//    mangled_ppc("?get_bounding_box@s_collision_hierarchy_element_payload@@QBAPBTreal_rectangle3d@@PAT2@@Z");
//};

//public: void s_collision_hierarchy_element_payload::get_bounding_sphere(union real_point3d *, float *) const
//{
//    mangled_ppc("?get_bounding_sphere@s_collision_hierarchy_element_payload@@QBAXPATreal_point3d@@PAM@Z");
//};

//long collision_hierarchy_object_light_overlaps_get(long, long *, long)
//{
//    mangled_ppc("?collision_hierarchy_object_light_overlaps_get@@YAJJPAJJ@Z");
//};

//void collision_hierarchy_add_light(long, struct s_location const *, union real_point3d const *, float)
//{
//    mangled_ppc("?collision_hierarchy_add_light@@YAXJPBUs_location@@PBTreal_point3d@@M@Z");
//};

//void collision_hierarchy_remove_light(long)
//{
//    mangled_ppc("?collision_hierarchy_remove_light@@YAXJ@Z");
//};

//void collision_hierarchy_move_light(long, struct s_location const *, union real_point3d const *, float)
//{
//    mangled_ppc("?collision_hierarchy_move_light@@YAXJPBUs_location@@PBTreal_point3d@@M@Z");
//};

//struct s_collision_hierarchy_element_reference collision_hierarchy_light_element_reference_get(long)
//{
//    mangled_ppc("?collision_hierarchy_light_element_reference_get@@YA?AUs_collision_hierarchy_element_reference@@J@Z");
//};

//struct s_collision_hierarchy_element_payload const * collision_hierarchy_light_element_payload_get(long, struct s_collision_hierarchy_element_payload *, union real_point3d const *, float)
//{
//    mangled_ppc("?collision_hierarchy_light_element_payload_get@@YAPBUs_collision_hierarchy_element_payload@@JPAU1@PBTreal_point3d@@M@Z");
//};

//void collision_hierarchy_light_overlaped_instance_bit_vector_compute(struct s_scenario_instance_bit_vector *, enum e_collision_hierarchy_lights_type)
//{
//    mangled_ppc("?collision_hierarchy_light_overlaped_instance_bit_vector_compute@@YAXPAUs_scenario_instance_bit_vector@@W4e_collision_hierarchy_lights_type@@@Z");
//};

//void collision_hierarchy_light_overlaped_instance_bit_vector_compute_recursive(struct s_scenario_instance_bit_vector *, struct s_collision_kd_hierarchy_static const *, long, long, long, union real_rectangle3d const *, union real_point3d const *, float, long, float, float)
//{
//    mangled_ppc("?collision_hierarchy_light_overlaped_instance_bit_vector_compute_recursive@@YAXPAUs_scenario_instance_bit_vector@@PBUs_collision_kd_hierarchy_static@@JJJPBTreal_rectangle3d@@PBTreal_point3d@@MJMM@Z");
//};

//bool super_node_child_get(struct s_bsp3d_kd_super_node const *, long *, long *, bool)
//{
//    mangled_ppc("?super_node_child_get@@YA_NPBUs_bsp3d_kd_super_node@@PAJ1_N@Z");
//};

//public: void c_big_flags_typed_no_init<unsigned long, 8192>::set(unsigned long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@K$0CAAA@@@QAAXK_N@Z");
//};

//struct s_collision_hierarchy_object_reference * buffer_cast<struct s_collision_hierarchy_object_reference>(struct s_collision_hierarchy_element_reference *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_object_reference@@@@YAPAUs_collision_hierarchy_object_reference@@PAUs_collision_hierarchy_element_reference@@@Z");
//};

//struct s_collision_hierarchy_object_payload * buffer_cast<struct s_collision_hierarchy_object_payload>(struct s_collision_hierarchy_element_payload *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_object_payload@@@@YAPAUs_collision_hierarchy_object_payload@@PAUs_collision_hierarchy_element_payload@@@Z");
//};

//struct s_collision_hierarchy_object_spatial_reference * buffer_cast<struct s_collision_hierarchy_object_spatial_reference>(struct s_collision_hierarchy_element_reference *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_object_spatial_reference@@@@YAPAUs_collision_hierarchy_object_spatial_reference@@PAUs_collision_hierarchy_element_reference@@@Z");
//};

//struct s_collision_hierarchy_object_spatial_payload * buffer_cast<struct s_collision_hierarchy_object_spatial_payload>(struct s_collision_hierarchy_element_payload *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_object_spatial_payload@@@@YAPAUs_collision_hierarchy_object_spatial_payload@@PAUs_collision_hierarchy_element_payload@@@Z");
//};

//struct s_collision_hierarchy_object_reference const * buffer_cast_const<struct s_collision_hierarchy_object_reference>(struct s_collision_hierarchy_element_reference const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_object_reference@@@@YAPBUs_collision_hierarchy_object_reference@@PBUs_collision_hierarchy_element_reference@@@Z");
//};

//struct s_collision_hierarchy_light_reference const * buffer_cast_const<struct s_collision_hierarchy_light_reference>(struct s_collision_hierarchy_element_reference const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_light_reference@@@@YAPBUs_collision_hierarchy_light_reference@@PBUs_collision_hierarchy_element_reference@@@Z");
//};

//struct s_collision_hierarchy_object_payload const * buffer_cast_const<struct s_collision_hierarchy_object_payload>(struct s_collision_hierarchy_element_payload const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_object_payload@@@@YAPBUs_collision_hierarchy_object_payload@@PBUs_collision_hierarchy_element_payload@@@Z");
//};

//struct s_collision_hierarchy_light_payload const * buffer_cast_const<struct s_collision_hierarchy_light_payload>(struct s_collision_hierarchy_element_payload const *)
//{
//    mangled_ppc("??$buffer_cast_const@Us_collision_hierarchy_light_payload@@@@YAPBUs_collision_hierarchy_light_payload@@PBUs_collision_hierarchy_element_payload@@@Z");
//};

//struct s_collision_hierarchy_light_reference * buffer_cast<struct s_collision_hierarchy_light_reference>(struct s_collision_hierarchy_element_reference *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_light_reference@@@@YAPAUs_collision_hierarchy_light_reference@@PAUs_collision_hierarchy_element_reference@@@Z");
//};

//struct s_collision_hierarchy_light_payload * buffer_cast<struct s_collision_hierarchy_light_payload>(struct s_collision_hierarchy_element_payload *)
//{
//    mangled_ppc("??$buffer_cast@Us_collision_hierarchy_light_payload@@@@YAPAUs_collision_hierarchy_light_payload@@PAUs_collision_hierarchy_element_payload@@@Z");
//};

//public: class c_big_flags_typed_no_init<unsigned long, 8192> & s_static_array<class c_big_flags_typed_no_init<unsigned long, 8192>, 16>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@V?$c_big_flags_typed_no_init@K$0CAAA@@@$0BA@@@QAAAAV?$c_big_flags_typed_no_init@K$0CAAA@@@F@Z");
//};

//public: bool c_big_flags_typed_no_init<unsigned long, 8192>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@K$0CAAA@@@QBA_NXZ");
//};

//public: static bool s_static_array<class c_big_flags_typed_no_init<unsigned long, 8192>, 16>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@V?$c_big_flags_typed_no_init@K$0CAAA@@@$0BA@@@SA_NF@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_mask_of_second_slice_of_chunk_inclusive(unsigned long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@K$0CAAA@@@KAKK@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@K$0CAAA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<unsigned long, 8192>::bit_index_to_flag_chunk_index(unsigned long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@K$0CAAA@@@KAJK@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@K$0CAAA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<unsigned long, 8192>::get_mask_of_first_slice_of_chunk_exclusive(unsigned long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@K$0CAAA@@@KAKK@Z");
//};

