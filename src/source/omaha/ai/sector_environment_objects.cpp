/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_pathfinding_object, 8192>::k_element_count; // "?k_element_count@?$s_static_array@Vc_pathfinding_object@@$0CAAA@@@2JB"
// except_record_837D9138; // "except_record_837D9138"
// except_record_837E7620; // "except_record_837E7620"
// bool g_use_sector_exclusion; // "?g_use_sector_exclusion@@3_NA"
// bool g_pathfinding_generation_no_outlines_on_poopie_cutters; // "?g_pathfinding_generation_no_outlines_on_poopie_cutters@@3_NA"
// char const **global_pathfinding_object_names; // "?global_pathfinding_object_names@@3PAPBDA"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 262136>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0DPPPI@@@QAAXXZ@4JC"
// long g_sector_intersection_count; // "?g_sector_intersection_count@@3JA"
// struct dynamic_array local_remap_array; // "?local_remap_array@@3Udynamic_array@@A"
// bool g_generate_flood_sector_wrl; // "?g_generate_flood_sector_wrl@@3_NA"
// bool g_pathfinding_generation_stats; // "?g_pathfinding_generation_stats@@3_NA"
// class c_pathfinding_object *local_pathfinding_objects; // "?local_pathfinding_objects@@3PAVc_pathfinding_object@@A"
// short *local_pathfinding_object_sorted_indices; // "?local_pathfinding_object_sorted_indices@@3PAFA"
// long local_num_pathfinding_objects; // "?local_num_pathfinding_objects@@3JA"

// public: struct s_scenario_object * c_pathfinding_object::get_scenario_object(void) const;
// public: char const * c_pathfinding_object::get_name(void) const;
// public: bool c_pathfinding_object::is_mobile(void) const;
// public: void c_pathfinding_object::add_collision_bsp(unsigned long);
// public: void c_pathfinding_object::mark_surface_in_mapping_array(unsigned long, long);
// public: bool c_pathfinding_object::surface_marked_in_mapping_array(unsigned long, long);
// public: void c_pathfinding_object::initialize_mapping_array(void);
// public: void c_pathfinding_object::dispose_mapping_array(void);
// public: bool c_pathfinding_object::is_exclusion_volume(void) const;
// public: void c_pathfinding_object::set_pathfinding_ref_index(short, short);
// public: bool c_pathfinding_object::configuration_valid(void) const;
// public: void c_pathfinding_object::add_sector(long);
// public: void c_pathfinding_object::add_sector_to_end(long);
// public: struct real_matrix4x3const * c_pathfinding_object::get_transform(unsigned long) const;
// void pathfinding_place_objects(struct scenario *, class c_pathfinding_object *, long);
// bool pathfinding_objects_configuration_valid(struct scenario *, short, class c_static_stack<struct s_cluster_reference, 1024> *);
// bool generate_sectors_from_pathfinding_objects(struct scenario *, short, class c_pathfinding_object *, short *, long);
// void pathfinding_get_poop_collision_bsp_reference(long, struct structure_bsp const *, long, class c_collision_bsp_reference &);
// bool generate_sectors_from_pathfinding_object_internal(struct scenario *, class c_pathfinding_object *, class c_pathfinding_object_reference *, unsigned long, class c_collision_bsp_reference, short, struct real_matrix4x3const *, bool);
// bool collision_surface_inside_pathfinding_volumes(class c_collision_bsp_reference const *, long, struct real_matrix4x3const *, bool, char, bool);
// long point_inside_any_pathfinding_exclusion_volume(union real_point3d const *, long, bool);
// bool point_inside_designer_cookie_cutter(long, union real_point3d const *);
// bool generate_sectors_from_environment(struct scenario *, class c_pathfinding_object *);
// bool generate_sectors_from_outline_internal(struct scenario const *, class c_pathfinding_object *);
// public: s_pathfinding_object_bsp_iterator::s_pathfinding_object_bsp_iterator(void);
// bool generate_sectors_from_points_block_internal(struct s_tag_block const *, class c_sector_accessor_base *, class c_pathfinding_object *, float, float);
// bool generate_sectors_from_points_internal(union real_point3d const *, union vector3d const *, short, class c_pathfinding_object *, float, float);
// bool polygon_get_winding(union real_point3d const *, union vector3d const *, short);
// bool generate_object_intersections(struct scenario *, short, class c_pathfinding_object *, short *, long);
// bool pathfinding_object_object_data_compare(short, short, void const *);
// bool pathfinding_object_intersection_data_compare(short, short, void const *);
// void intersect_sector_and_children_with_object(class c_pathfinding_object *, long, class c_pathfinding_object *, long);
// bool generate_sector_intersection(long, long, class c_pathfinding_object *, class c_pathfinding_object *, bool, bool);
// bool intersect_sectors(long, long, union vector3d const *, union vector3d const *, union real_point3d *, union real_point3d *, bool *, bool *, bool *, bool *, long *, short *, long *, short *);
// bool intersect_coplanar_sectors(long, long, union vector3d const *, union vector3d const *, union real_point3d *, union vector3d *, union vector3d *, union vector3d *);
// short clip_line_against_link(union real_point3d const *, union vector3d const *, long, class c_link_constructor const *, union vector3d const *, union vector3d const *, float *, float *, bool *, bool);
// bool process_intersection(long, long, class c_pathfinding_object *, class c_pathfinding_object *, union vector3d *, union vector3d *, long, long, short, short, bool, bool, union real_point3d *, union real_point3d *, bool, bool, bool, bool, bool, bool);
// bool generate_intersection_point(long, union vector3d const *, float, union real_point3d *);
// bool process_intersection_links(long, long, long, long, long, long, class c_pathfinding_object *, class c_pathfinding_object *, bool, bool);
// bool get_left_and_right_vectors(class c_link_constructor *, union vector3d *, union vector3d *);
// void determine_interior_sectors(long, long, union vector3d *, union vector3d *, union vector3d *, union vector3d *, bool *, bool *, bool *, bool *, float *, long *, float *, long *);
// float angle_relative_to_vector(union vector3d const *, union vector3d const *, union vector3d const *);
// void link_set_sister(long, bool, long, long, float, bool);
// long break_link(long, union real_point3d const *, long *);
// long break_link_internal(long, union real_point3d const *, long *);
// void break_sister_link(long, long, long, union real_point3d const *);
// void mark_interior_sectors(class c_pathfinding_object *, short *, long);
// void recursive_floodfill_interior_sectors(long);
// long sector_inside_pathfinding_exclusion_volume(long);
// void generate_pathfinding_hints(struct pathfinding_data *);
// long find_mobile_pathfinding_objects(struct scenario const *, short, class c_pathfinding_object *, long);
// void pathfinding_object_initialize(class c_pathfinding_object *, short, short, short);
// long find_pathfinding_objects(struct scenario const *, short, class c_static_stack<struct s_cluster_reference, 1024> *, class c_pathfinding_object *, long);
// short environment_object_get_node_count(long);
// short pathfinding_object_get_object_ref_index(long, short);
// bool test_pathfinding_object(struct scenario const *, class c_pathfinding_object const *, short *, struct s_pathfinding_object_bsp_iterator *);
// bool pathfinding_object_should_exist(struct scenario *, class c_pathfinding_object const *);
// void cookie_cutter_bsp_iterator_new(struct s_cookie_cutter_bsp_iterator *, struct collision_model_definition const *);
// bool cookie_cutter_bsp_iterator_next(struct s_cookie_cutter_bsp_iterator *);
// bool pathfinding_object_bsp_iterator_new(class c_pathfinding_object const *, struct s_pathfinding_object_bsp_iterator *, struct scenario const *);
// bool pathfinding_object_bsp_iterator_next(struct s_pathfinding_object_bsp_iterator *);
// void test_link(struct pathfinding_data *, long);
// bool create_sector_cap(long, long, union real_point3d *, long *, long *);
// long split_sector_at_vertices(long, long, long, long, long, long *);
// bool split_sector2(long, union vector3d const *, struct plane3d const *, long *, bool, bool, union real_point3d *, union real_point3d *);
// bool test_collinearity(union real_point3d const *, union real_point3d const *, union real_point3d const *);
// bool bounding_box_intersect(struct s_sector_bounding_box *, struct s_sector_bounding_box *);
// bool bounding_box_contains_point(struct s_sector_bounding_box *, union real_point3d const *);
// bool quick_intersection(long, long);
// void calculate_sector_bounding_box(long, struct s_sector_bounding_box *);
// bool bounding_box_intersects_sector(struct s_sector_bounding_box *, long);
// bool bounding_box_contains_sector(struct s_sector_bounding_box *, long);
// bool bounding_box_contains(struct s_sector_bounding_box *, struct s_sector_bounding_box *);
// public: class c_pathfinding_object * s_static_array<class c_pathfinding_object, 8192>::get_elements(void);
// public: static long s_static_array<class c_pathfinding_object, 8192>::get_count(void);
// public: void c_object_iterator<struct machine_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct machine_datum>::next(void);
// public: struct machine_datum * c_object_iterator<struct machine_datum>::get_datum(void);
// public: void c_object_iterator<struct crate_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct crate_datum>::next(void);
// public: struct crate_datum * c_object_iterator<struct crate_datum>::get_datum(void);
// public: void c_object_iterator<struct giant_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct giant_datum>::next(void);
// public: struct giant_datum * c_object_iterator<struct giant_datum>::get_datum(void);
// public: void c_object_iterator<struct scenery_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct scenery_datum>::next(void);
// public: struct scenery_datum * c_object_iterator<struct scenery_datum>::get_datum(void);
// public: hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>(void);
// public: void c_big_flags_typed_no_init<long, 262136>::clear(void);
// public: class c_pathfinding_object & s_static_array<class c_pathfinding_object, 8192>::operator[]<short>(short);
// public: hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>(int);
// public: bool c_big_flags_typed_no_init<long, 262136>::is_clear(void) const;
// public: static bool s_static_array<class c_pathfinding_object, 8192>::valid<short>(short);

//public: struct s_scenario_object * c_pathfinding_object::get_scenario_object(void) const
//{
//    mangled_ppc("?get_scenario_object@c_pathfinding_object@@QBAPAUs_scenario_object@@XZ");
//};

//public: char const * c_pathfinding_object::get_name(void) const
//{
//    mangled_ppc("?get_name@c_pathfinding_object@@QBAPBDXZ");
//};

//public: bool c_pathfinding_object::is_mobile(void) const
//{
//    mangled_ppc("?is_mobile@c_pathfinding_object@@QBA_NXZ");
//};

//public: void c_pathfinding_object::add_collision_bsp(unsigned long)
//{
//    mangled_ppc("?add_collision_bsp@c_pathfinding_object@@QAAXK@Z");
//};

//public: void c_pathfinding_object::mark_surface_in_mapping_array(unsigned long, long)
//{
//    mangled_ppc("?mark_surface_in_mapping_array@c_pathfinding_object@@QAAXKJ@Z");
//};

//public: bool c_pathfinding_object::surface_marked_in_mapping_array(unsigned long, long)
//{
//    mangled_ppc("?surface_marked_in_mapping_array@c_pathfinding_object@@QAA_NKJ@Z");
//};

//public: void c_pathfinding_object::initialize_mapping_array(void)
//{
//    mangled_ppc("?initialize_mapping_array@c_pathfinding_object@@QAAXXZ");
//};

//public: void c_pathfinding_object::dispose_mapping_array(void)
//{
//    mangled_ppc("?dispose_mapping_array@c_pathfinding_object@@QAAXXZ");
//};

//public: bool c_pathfinding_object::is_exclusion_volume(void) const
//{
//    mangled_ppc("?is_exclusion_volume@c_pathfinding_object@@QBA_NXZ");
//};

//public: void c_pathfinding_object::set_pathfinding_ref_index(short, short)
//{
//    mangled_ppc("?set_pathfinding_ref_index@c_pathfinding_object@@QAAXFF@Z");
//};

//public: bool c_pathfinding_object::configuration_valid(void) const
//{
//    mangled_ppc("?configuration_valid@c_pathfinding_object@@QBA_NXZ");
//};

//public: void c_pathfinding_object::add_sector(long)
//{
//    mangled_ppc("?add_sector@c_pathfinding_object@@QAAXJ@Z");
//};

//public: void c_pathfinding_object::add_sector_to_end(long)
//{
//    mangled_ppc("?add_sector_to_end@c_pathfinding_object@@QAAXJ@Z");
//};

//public: struct real_matrix4x3const * c_pathfinding_object::get_transform(unsigned long) const
//{
//    mangled_ppc("?get_transform@c_pathfinding_object@@QBAPBUreal_matrix4x3@@K@Z");
//};

//void pathfinding_place_objects(struct scenario *, class c_pathfinding_object *, long)
//{
//    mangled_ppc("?pathfinding_place_objects@@YAXPAUscenario@@PAVc_pathfinding_object@@J@Z");
//};

//bool pathfinding_objects_configuration_valid(struct scenario *, short, class c_static_stack<struct s_cluster_reference, 1024> *)
//{
//    mangled_ppc("?pathfinding_objects_configuration_valid@@YA_NPAUscenario@@FPAV?$c_static_stack@Us_cluster_reference@@$0EAA@@@@Z");
//};

//bool generate_sectors_from_pathfinding_objects(struct scenario *, short, class c_pathfinding_object *, short *, long)
//{
//    mangled_ppc("?generate_sectors_from_pathfinding_objects@@YA_NPAUscenario@@FPAVc_pathfinding_object@@PAFJ@Z");
//};

//void pathfinding_get_poop_collision_bsp_reference(long, struct structure_bsp const *, long, class c_collision_bsp_reference &)
//{
//    mangled_ppc("?pathfinding_get_poop_collision_bsp_reference@@YAXJPBUstructure_bsp@@JAAVc_collision_bsp_reference@@@Z");
//};

//bool generate_sectors_from_pathfinding_object_internal(struct scenario *, class c_pathfinding_object *, class c_pathfinding_object_reference *, unsigned long, class c_collision_bsp_reference, short, struct real_matrix4x3const *, bool)
//{
//    mangled_ppc("?generate_sectors_from_pathfinding_object_internal@@YA_NPAUscenario@@PAVc_pathfinding_object@@PAVc_pathfinding_object_reference@@KVc_collision_bsp_reference@@FPBUreal_matrix4x3@@_N@Z");
//};

//bool collision_surface_inside_pathfinding_volumes(class c_collision_bsp_reference const *, long, struct real_matrix4x3const *, bool, char, bool)
//{
//    mangled_ppc("?collision_surface_inside_pathfinding_volumes@@YA_NPBVc_collision_bsp_reference@@JPBUreal_matrix4x3@@_ND2@Z");
//};

//long point_inside_any_pathfinding_exclusion_volume(union real_point3d const *, long, bool)
//{
//    mangled_ppc("?point_inside_any_pathfinding_exclusion_volume@@YAJPBTreal_point3d@@J_N@Z");
//};

//bool point_inside_designer_cookie_cutter(long, union real_point3d const *)
//{
//    mangled_ppc("?point_inside_designer_cookie_cutter@@YA_NJPBTreal_point3d@@@Z");
//};

//bool generate_sectors_from_environment(struct scenario *, class c_pathfinding_object *)
//{
//    mangled_ppc("?generate_sectors_from_environment@@YA_NPAUscenario@@PAVc_pathfinding_object@@@Z");
//};

//bool generate_sectors_from_outline_internal(struct scenario const *, class c_pathfinding_object *)
//{
//    mangled_ppc("?generate_sectors_from_outline_internal@@YA_NPBUscenario@@PAVc_pathfinding_object@@@Z");
//};

//public: s_pathfinding_object_bsp_iterator::s_pathfinding_object_bsp_iterator(void)
//{
//    mangled_ppc("??0s_pathfinding_object_bsp_iterator@@QAA@XZ");
//};

//bool generate_sectors_from_points_block_internal(struct s_tag_block const *, class c_sector_accessor_base *, class c_pathfinding_object *, float, float)
//{
//    mangled_ppc("?generate_sectors_from_points_block_internal@@YA_NPBUs_tag_block@@PAVc_sector_accessor_base@@PAVc_pathfinding_object@@MM@Z");
//};

//bool generate_sectors_from_points_internal(union real_point3d const *, union vector3d const *, short, class c_pathfinding_object *, float, float)
//{
//    mangled_ppc("?generate_sectors_from_points_internal@@YA_NPBTreal_point3d@@PBTvector3d@@FPAVc_pathfinding_object@@MM@Z");
//};

//bool polygon_get_winding(union real_point3d const *, union vector3d const *, short)
//{
//    mangled_ppc("?polygon_get_winding@@YA_NPBTreal_point3d@@PBTvector3d@@F@Z");
//};

//bool generate_object_intersections(struct scenario *, short, class c_pathfinding_object *, short *, long)
//{
//    mangled_ppc("?generate_object_intersections@@YA_NPAUscenario@@FPAVc_pathfinding_object@@PAFJ@Z");
//};

//bool pathfinding_object_object_data_compare(short, short, void const *)
//{
//    mangled_ppc("?pathfinding_object_object_data_compare@@YA_NFFPBX@Z");
//};

//bool pathfinding_object_intersection_data_compare(short, short, void const *)
//{
//    mangled_ppc("?pathfinding_object_intersection_data_compare@@YA_NFFPBX@Z");
//};

//void intersect_sector_and_children_with_object(class c_pathfinding_object *, long, class c_pathfinding_object *, long)
//{
//    mangled_ppc("?intersect_sector_and_children_with_object@@YAXPAVc_pathfinding_object@@J0J@Z");
//};

//bool generate_sector_intersection(long, long, class c_pathfinding_object *, class c_pathfinding_object *, bool, bool)
//{
//    mangled_ppc("?generate_sector_intersection@@YA_NJJPAVc_pathfinding_object@@0_N1@Z");
//};

//bool intersect_sectors(long, long, union vector3d const *, union vector3d const *, union real_point3d *, union real_point3d *, bool *, bool *, bool *, bool *, long *, short *, long *, short *)
//{
//    mangled_ppc("?intersect_sectors@@YA_NJJPBTvector3d@@0PATreal_point3d@@1PA_N222PAJPAF34@Z");
//};

//bool intersect_coplanar_sectors(long, long, union vector3d const *, union vector3d const *, union real_point3d *, union vector3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?intersect_coplanar_sectors@@YA_NJJPBTvector3d@@0PATreal_point3d@@PAT1@22@Z");
//};

//short clip_line_against_link(union real_point3d const *, union vector3d const *, long, class c_link_constructor const *, union vector3d const *, union vector3d const *, float *, float *, bool *, bool)
//{
//    mangled_ppc("?clip_line_against_link@@YAFPBTreal_point3d@@PBTvector3d@@JPBVc_link_constructor@@11PAM3PA_N_N@Z");
//};

//bool process_intersection(long, long, class c_pathfinding_object *, class c_pathfinding_object *, union vector3d *, union vector3d *, long, long, short, short, bool, bool, union real_point3d *, union real_point3d *, bool, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?process_intersection@@YA_NJJPAVc_pathfinding_object@@0PATvector3d@@1JJFF_N2PATreal_point3d@@3222222@Z");
//};

//bool generate_intersection_point(long, union vector3d const *, float, union real_point3d *)
//{
//    mangled_ppc("?generate_intersection_point@@YA_NJPBTvector3d@@MPATreal_point3d@@@Z");
//};

//bool process_intersection_links(long, long, long, long, long, long, class c_pathfinding_object *, class c_pathfinding_object *, bool, bool)
//{
//    mangled_ppc("?process_intersection_links@@YA_NJJJJJJPAVc_pathfinding_object@@0_N1@Z");
//};

//bool get_left_and_right_vectors(class c_link_constructor *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?get_left_and_right_vectors@@YA_NPAVc_link_constructor@@PATvector3d@@1@Z");
//};

//void determine_interior_sectors(long, long, union vector3d *, union vector3d *, union vector3d *, union vector3d *, bool *, bool *, bool *, bool *, float *, long *, float *, long *)
//{
//    mangled_ppc("?determine_interior_sectors@@YAXJJPATvector3d@@000PA_N111PAMPAJ23@Z");
//};

//float angle_relative_to_vector(union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?angle_relative_to_vector@@YAMPBTvector3d@@00@Z");
//};

//void link_set_sister(long, bool, long, long, float, bool)
//{
//    mangled_ppc("?link_set_sister@@YAXJ_NJJM0@Z");
//};

//long break_link(long, union real_point3d const *, long *)
//{
//    mangled_ppc("?break_link@@YAJJPBTreal_point3d@@PAJ@Z");
//};

//long break_link_internal(long, union real_point3d const *, long *)
//{
//    mangled_ppc("?break_link_internal@@YAJJPBTreal_point3d@@PAJ@Z");
//};

//void break_sister_link(long, long, long, union real_point3d const *)
//{
//    mangled_ppc("?break_sister_link@@YAXJJJPBTreal_point3d@@@Z");
//};

//void mark_interior_sectors(class c_pathfinding_object *, short *, long)
//{
//    mangled_ppc("?mark_interior_sectors@@YAXPAVc_pathfinding_object@@PAFJ@Z");
//};

//void recursive_floodfill_interior_sectors(long)
//{
//    mangled_ppc("?recursive_floodfill_interior_sectors@@YAXJ@Z");
//};

//long sector_inside_pathfinding_exclusion_volume(long)
//{
//    mangled_ppc("?sector_inside_pathfinding_exclusion_volume@@YAJJ@Z");
//};

//void generate_pathfinding_hints(struct pathfinding_data *)
//{
//    mangled_ppc("?generate_pathfinding_hints@@YAXPAUpathfinding_data@@@Z");
//};

//long find_mobile_pathfinding_objects(struct scenario const *, short, class c_pathfinding_object *, long)
//{
//    mangled_ppc("?find_mobile_pathfinding_objects@@YAJPBUscenario@@FPAVc_pathfinding_object@@J@Z");
//};

//void pathfinding_object_initialize(class c_pathfinding_object *, short, short, short)
//{
//    mangled_ppc("?pathfinding_object_initialize@@YAXPAVc_pathfinding_object@@FFF@Z");
//};

//long find_pathfinding_objects(struct scenario const *, short, class c_static_stack<struct s_cluster_reference, 1024> *, class c_pathfinding_object *, long)
//{
//    mangled_ppc("?find_pathfinding_objects@@YAJPBUscenario@@FPAV?$c_static_stack@Us_cluster_reference@@$0EAA@@@PAVc_pathfinding_object@@J@Z");
//};

//short environment_object_get_node_count(long)
//{
//    mangled_ppc("?environment_object_get_node_count@@YAFJ@Z");
//};

//short pathfinding_object_get_object_ref_index(long, short)
//{
//    mangled_ppc("?pathfinding_object_get_object_ref_index@@YAFJF@Z");
//};

//bool test_pathfinding_object(struct scenario const *, class c_pathfinding_object const *, short *, struct s_pathfinding_object_bsp_iterator *)
//{
//    mangled_ppc("?test_pathfinding_object@@YA_NPBUscenario@@PBVc_pathfinding_object@@PAFPAUs_pathfinding_object_bsp_iterator@@@Z");
//};

//bool pathfinding_object_should_exist(struct scenario *, class c_pathfinding_object const *)
//{
//    mangled_ppc("?pathfinding_object_should_exist@@YA_NPAUscenario@@PBVc_pathfinding_object@@@Z");
//};

//void cookie_cutter_bsp_iterator_new(struct s_cookie_cutter_bsp_iterator *, struct collision_model_definition const *)
//{
//    mangled_ppc("?cookie_cutter_bsp_iterator_new@@YAXPAUs_cookie_cutter_bsp_iterator@@PBUcollision_model_definition@@@Z");
//};

//bool cookie_cutter_bsp_iterator_next(struct s_cookie_cutter_bsp_iterator *)
//{
//    mangled_ppc("?cookie_cutter_bsp_iterator_next@@YA_NPAUs_cookie_cutter_bsp_iterator@@@Z");
//};

//bool pathfinding_object_bsp_iterator_new(class c_pathfinding_object const *, struct s_pathfinding_object_bsp_iterator *, struct scenario const *)
//{
//    mangled_ppc("?pathfinding_object_bsp_iterator_new@@YA_NPBVc_pathfinding_object@@PAUs_pathfinding_object_bsp_iterator@@PBUscenario@@@Z");
//};

//bool pathfinding_object_bsp_iterator_next(struct s_pathfinding_object_bsp_iterator *)
//{
//    mangled_ppc("?pathfinding_object_bsp_iterator_next@@YA_NPAUs_pathfinding_object_bsp_iterator@@@Z");
//};

//void test_link(struct pathfinding_data *, long)
//{
//    mangled_ppc("?test_link@@YAXPAUpathfinding_data@@J@Z");
//};

//bool create_sector_cap(long, long, union real_point3d *, long *, long *)
//{
//    mangled_ppc("?create_sector_cap@@YA_NJJPATreal_point3d@@PAJ1@Z");
//};

//long split_sector_at_vertices(long, long, long, long, long, long *)
//{
//    mangled_ppc("?split_sector_at_vertices@@YAJJJJJJPAJ@Z");
//};

//bool split_sector2(long, union vector3d const *, struct plane3d const *, long *, bool, bool, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?split_sector2@@YA_NJPBTvector3d@@PBUplane3d@@PAJ_N3PATreal_point3d@@4@Z");
//};

//bool test_collinearity(union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?test_collinearity@@YA_NPBTreal_point3d@@00@Z");
//};

//bool bounding_box_intersect(struct s_sector_bounding_box *, struct s_sector_bounding_box *)
//{
//    mangled_ppc("?bounding_box_intersect@@YA_NPAUs_sector_bounding_box@@0@Z");
//};

//bool bounding_box_contains_point(struct s_sector_bounding_box *, union real_point3d const *)
//{
//    mangled_ppc("?bounding_box_contains_point@@YA_NPAUs_sector_bounding_box@@PBTreal_point3d@@@Z");
//};

//bool quick_intersection(long, long)
//{
//    mangled_ppc("?quick_intersection@@YA_NJJ@Z");
//};

//void calculate_sector_bounding_box(long, struct s_sector_bounding_box *)
//{
//    mangled_ppc("?calculate_sector_bounding_box@@YAXJPAUs_sector_bounding_box@@@Z");
//};

//bool bounding_box_intersects_sector(struct s_sector_bounding_box *, long)
//{
//    mangled_ppc("?bounding_box_intersects_sector@@YA_NPAUs_sector_bounding_box@@J@Z");
//};

//bool bounding_box_contains_sector(struct s_sector_bounding_box *, long)
//{
//    mangled_ppc("?bounding_box_contains_sector@@YA_NPAUs_sector_bounding_box@@J@Z");
//};

//bool bounding_box_contains(struct s_sector_bounding_box *, struct s_sector_bounding_box *)
//{
//    mangled_ppc("?bounding_box_contains@@YA_NPAUs_sector_bounding_box@@0@Z");
//};

//public: class c_pathfinding_object * s_static_array<class c_pathfinding_object, 8192>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Vc_pathfinding_object@@$0CAAA@@@QAAPAVc_pathfinding_object@@XZ");
//};

//public: static long s_static_array<class c_pathfinding_object, 8192>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_pathfinding_object@@$0CAAA@@@SAJXZ");
//};

//public: void c_object_iterator<struct machine_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Umachine_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct machine_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Umachine_datum@@@@QAA_NXZ");
//};

//public: struct machine_datum * c_object_iterator<struct machine_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Umachine_datum@@@@QAAPAUmachine_datum@@XZ");
//};

//public: void c_object_iterator<struct crate_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Ucrate_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct crate_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Ucrate_datum@@@@QAA_NXZ");
//};

//public: struct crate_datum * c_object_iterator<struct crate_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Ucrate_datum@@@@QAAPAUcrate_datum@@XZ");
//};

//public: void c_object_iterator<struct giant_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Ugiant_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct giant_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Ugiant_datum@@@@QAA_NXZ");
//};

//public: struct giant_datum * c_object_iterator<struct giant_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Ugiant_datum@@@@QAAPAUgiant_datum@@XZ");
//};

//public: void c_object_iterator<struct scenery_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Uscenery_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct scenery_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Uscenery_datum@@@@QAA_NXZ");
//};

//public: struct scenery_datum * c_object_iterator<struct scenery_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Uscenery_datum@@@@QAAPAUscenery_datum@@XZ");
//};

//public: hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@I$0IA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void c_big_flags_typed_no_init<long, 262136>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0DPPPI@@@QAAXXZ");
//};

//public: class c_pathfinding_object & s_static_array<class c_pathfinding_object, 8192>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Vc_pathfinding_object@@$0CAAA@@@QAAAAVc_pathfinding_object@@F@Z");
//};

//public: hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 128, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@I$0IA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 262136>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0DPPPI@@@QBA_NXZ");
//};

//public: static bool s_static_array<class c_pathfinding_object, 8192>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Vc_pathfinding_object@@$0CAAA@@@SA_NF@Z");
//};

