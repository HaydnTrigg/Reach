/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool render_structure_enabled; // "?render_structure_enabled@@3_NA"
// bool render_per_vertex_lit_enviroment; // "?render_per_vertex_lit_enviroment@@3_NA"
// bool render_per_pixel_lit_enviroment; // "?render_per_pixel_lit_enviroment@@3_NA"
// bool render_single_probe_lit_enviroment; // "?render_single_probe_lit_enviroment@@3_NA"
// bool render_cluster_enabled; // "?render_cluster_enabled@@3_NA"
// bool g_debug_instance_group_decorator_types; // "?g_debug_instance_group_decorator_types@@3_NA"
// bool g_debug_instance_group_non_decorator_types; // "?g_debug_instance_group_non_decorator_types@@3_NA"
// bool g_debug_instance_group_members; // "?g_debug_instance_group_members@@3_NA"
// bool render_environment_enabled; // "?render_environment_enabled@@3_NA"
// bool render_instanced_geometry_enabled; // "?render_instanced_geometry_enabled@@3_NA"
// bool visibility_enable_occlusion; // "?visibility_enable_occlusion@@3_NA"
// long visibility_debug_select_bsp_instance_bsp_index; // "?visibility_debug_select_bsp_instance_bsp_index@@3JA"
// long visibility_debug_select_bsp_instance_index; // "?visibility_debug_select_bsp_instance_index@@3JA"
// long g_visibility_frustum_plane_count; // "?g_visibility_frustum_plane_count@@3JA"
// bool g_debug_instance_imposters; // "?g_debug_instance_imposters@@3_NA"
// bool g_debug_instance_groups; // "?g_debug_instance_groups@@3_NA"
// bool g_debug_instance_group_bounds; // "?g_debug_instance_group_bounds@@3_NA"
// bool visibility_debug_select_bsp_instance_visible; // "?visibility_debug_select_bsp_instance_visible@@3_NA"
// long `public: void __cdecl s_visibility_structure_collector::collect_partially_visible_group(long)'::`28'::_unique_profile_definition_havok_visibility_frustum; // "?_unique_profile_definition_havok_visibility_frustum@?BM@??collect_partially_visible_group@s_visibility_structure_collector@@QAAXJ@Z@4JA"
// long `public: void __cdecl s_visibility_structure_collector::collect_partially_visible_group(long)'::`16'::_unique_profile_definition_havok_visibility_frustum; // "?_unique_profile_definition_havok_visibility_frustum@?BA@??collect_partially_visible_group@s_visibility_structure_collector@@QAAXJ@Z@4JA"
// `public: void __cdecl s_visibility_structure_collector::collect_partially_visible_group(long)'::`16'::`local static guard'{16}; // "??_B?BA@??collect_partially_visible_group@s_visibility_structure_collector@@QAAXJ@Z@5BA@"

// private: void c_visibility_collection::collect_structure_elements_from_regions(void);
// public: s_visibility_structure_collector::s_visibility_structure_collector(class c_visibility_collection const *);
// public: void s_visibility_structure_collector::collect(void);
// public: void s_visibility_structure_collector::collect_cluster_instanced_geometry_from_projections(void);
// struct visibility_volume const * visibility_region_get_cluster_volume(struct s_visibility_region const *, struct visibility_cluster const *, long, long);
// struct visibility_volume const * visibility_region_get_volume(struct s_visibility_region const *, long);
// public: unsigned short * s_structure_instance_cluster::get_group_index(long);
// public: long s_structure_instance_cluster::get_group_index_count(void) const;
// public: void s_visibility_structure_collector::collect_instance_groups_partially_visible_with_lookup(long *, long, unsigned short *, long);
// public: void s_visibility_structure_collector::collect_instance_groups_partially_visible(long *, long);
// public: void s_visibility_structure_collector::collect_partially_visible_group(long);
// public: unsigned short * s_structure_instance_group::get_instance_index(long);
// public: long s_structure_instance_group::get_instance_index_count(void) const;
// public: void s_visibility_structure_collector::add_instance_impostor_group(long, short, unsigned short);
// public: void s_visibility_structure_collector::add_instances_with_lookup(long *, long, unsigned short *, long);
// public: void s_visibility_structure_collector::add_single_structure_instance(long);
// public: void s_visibility_structure_collector::add_instance_impostor(long, unsigned short, float, unsigned char);
// public: float s_visibility_structure_collector::compute_instance_alpha(struct structure_instanced_geometry_instance const *, float *) const;
// bool instance_group_should_render_using_imposters(struct s_structure_instance_group const *, float, float, long, long, long);
// long visiblity_instance_group_occlusion_index(long, float, struct s_structure_instance_group *, long);
// void debug_structure_instance_groups(unsigned long *const);
// void debug_render_structure_instance_dop_query(void);
// bool debug_render_structure_instance_imposter_group(long, unsigned short);
// void debug_render_structure_instance_imposter(struct structure_bsp const *, long, unsigned short, unsigned char);
// public: long c_simple_list<struct s_visible_instance_list, 8192>::add(void);
// public: void c_simple_list<struct s_visible_instance_list, 8192>::delete_last_element(void);
// public: struct s_visible_instance_list & c_simple_list<struct s_visible_instance_list, 8192>::operator[](long);
// public: long c_simple_list<struct s_visible_instances, 8192>::get_count(void);
// public: long c_simple_list<struct s_visible_clusters, 75>::add(void);
// public: struct s_visible_clusters & c_simple_list<struct s_visible_clusters, 75>::operator[](long);
// public: long c_simple_list<struct s_visible_instance_imposter_group, 512>::add(void);
// public: struct s_visible_instance_imposter_group & c_simple_list<struct s_visible_instance_imposter_group, 512>::operator[](long);
// public: long c_simple_list<struct s_visible_instance_imposter, 2048>::add(void);
// public: struct s_visible_instance_imposter & c_simple_list<struct s_visible_instance_imposter, 2048>::operator[](long);
// public: hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>(void);
// public: bool c_simple_list<struct s_visible_instance_list, 8192>::valid(long);
// public: bool c_simple_list<struct s_visible_clusters, 75>::valid(long);
// public: bool c_simple_list<struct s_visible_instance_imposter_group, 512>::valid(long);
// public: bool c_simple_list<struct s_visible_instance_imposter, 2048>::valid(long);
// public: char & s_static_array<char, 255>::operator[]<long>(long);
// public: hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>(int);
// public: void s_visibility_structure_collector::collect_instance_groups_fully_visible<unsigned short>(unsigned short *, long);
// public: void s_visibility_structure_collector::collect_fully_visible_group(long);
// public: void s_visibility_structure_collector::collect_instance_groups_fully_visible<long>(long *, long);
// public: void s_visibility_structure_collector::add_instances<unsigned short>(unsigned short *, long);
// public: void s_visibility_structure_collector::add_instances<long>(long *, long);
// public: static bool s_static_array<char, 255>::valid<long>(long);
// public: void hkVector4::set(float, float, float, float);

//private: void c_visibility_collection::collect_structure_elements_from_regions(void)
//{
//    mangled_ppc("?collect_structure_elements_from_regions@c_visibility_collection@@AAAXXZ");
//};

//public: s_visibility_structure_collector::s_visibility_structure_collector(class c_visibility_collection const *)
//{
//    mangled_ppc("??0s_visibility_structure_collector@@QAA@PBVc_visibility_collection@@@Z");
//};

//public: void s_visibility_structure_collector::collect(void)
//{
//    mangled_ppc("?collect@s_visibility_structure_collector@@QAAXXZ");
//};

//public: void s_visibility_structure_collector::collect_cluster_instanced_geometry_from_projections(void)
//{
//    mangled_ppc("?collect_cluster_instanced_geometry_from_projections@s_visibility_structure_collector@@QAAXXZ");
//};

//struct visibility_volume const * visibility_region_get_cluster_volume(struct s_visibility_region const *, struct visibility_cluster const *, long, long)
//{
//    mangled_ppc("?visibility_region_get_cluster_volume@@YAPBUvisibility_volume@@PBUs_visibility_region@@PBUvisibility_cluster@@JJ@Z");
//};

//struct visibility_volume const * visibility_region_get_volume(struct s_visibility_region const *, long)
//{
//    mangled_ppc("?visibility_region_get_volume@@YAPBUvisibility_volume@@PBUs_visibility_region@@J@Z");
//};

//public: unsigned short * s_structure_instance_cluster::get_group_index(long)
//{
//    mangled_ppc("?get_group_index@s_structure_instance_cluster@@QAAPAGJ@Z");
//};

//public: long s_structure_instance_cluster::get_group_index_count(void) const
//{
//    mangled_ppc("?get_group_index_count@s_structure_instance_cluster@@QBAJXZ");
//};

//public: void s_visibility_structure_collector::collect_instance_groups_partially_visible_with_lookup(long *, long, unsigned short *, long)
//{
//    mangled_ppc("?collect_instance_groups_partially_visible_with_lookup@s_visibility_structure_collector@@QAAXPAJJPAGJ@Z");
//};

//public: void s_visibility_structure_collector::collect_instance_groups_partially_visible(long *, long)
//{
//    mangled_ppc("?collect_instance_groups_partially_visible@s_visibility_structure_collector@@QAAXPAJJ@Z");
//};

//public: void s_visibility_structure_collector::collect_partially_visible_group(long)
//{
//    mangled_ppc("?collect_partially_visible_group@s_visibility_structure_collector@@QAAXJ@Z");
//};

//public: unsigned short * s_structure_instance_group::get_instance_index(long)
//{
//    mangled_ppc("?get_instance_index@s_structure_instance_group@@QAAPAGJ@Z");
//};

//public: long s_structure_instance_group::get_instance_index_count(void) const
//{
//    mangled_ppc("?get_instance_index_count@s_structure_instance_group@@QBAJXZ");
//};

//public: void s_visibility_structure_collector::add_instance_impostor_group(long, short, unsigned short)
//{
//    mangled_ppc("?add_instance_impostor_group@s_visibility_structure_collector@@QAAXJFG@Z");
//};

//public: void s_visibility_structure_collector::add_instances_with_lookup(long *, long, unsigned short *, long)
//{
//    mangled_ppc("?add_instances_with_lookup@s_visibility_structure_collector@@QAAXPAJJPAGJ@Z");
//};

//public: void s_visibility_structure_collector::add_single_structure_instance(long)
//{
//    mangled_ppc("?add_single_structure_instance@s_visibility_structure_collector@@QAAXJ@Z");
//};

//public: void s_visibility_structure_collector::add_instance_impostor(long, unsigned short, float, unsigned char)
//{
//    mangled_ppc("?add_instance_impostor@s_visibility_structure_collector@@QAAXJGME@Z");
//};

//public: float s_visibility_structure_collector::compute_instance_alpha(struct structure_instanced_geometry_instance const *, float *) const
//{
//    mangled_ppc("?compute_instance_alpha@s_visibility_structure_collector@@QBAMPBUstructure_instanced_geometry_instance@@PAM@Z");
//};

//bool instance_group_should_render_using_imposters(struct s_structure_instance_group const *, float, float, long, long, long)
//{
//    mangled_ppc("?instance_group_should_render_using_imposters@@YA_NPBUs_structure_instance_group@@MMJJJ@Z");
//};

//long visiblity_instance_group_occlusion_index(long, float, struct s_structure_instance_group *, long)
//{
//    mangled_ppc("?visiblity_instance_group_occlusion_index@@YAJJMPAUs_structure_instance_group@@J@Z");
//};

//void debug_structure_instance_groups(unsigned long *const)
//{
//    mangled_ppc("?debug_structure_instance_groups@@YAXQAK@Z");
//};

//void debug_render_structure_instance_dop_query(void)
//{
//    mangled_ppc("?debug_render_structure_instance_dop_query@@YAXXZ");
//};

//bool debug_render_structure_instance_imposter_group(long, unsigned short)
//{
//    mangled_ppc("?debug_render_structure_instance_imposter_group@@YA_NJG@Z");
//};

//void debug_render_structure_instance_imposter(struct structure_bsp const *, long, unsigned short, unsigned char)
//{
//    mangled_ppc("?debug_render_structure_instance_imposter@@YAXPBUstructure_bsp@@JGE@Z");
//};

//public: long c_simple_list<struct s_visible_instance_list, 8192>::add(void)
//{
//    mangled_ppc("?add@?$c_simple_list@Us_visible_instance_list@@$0CAAA@@@QAAJXZ");
//};

//public: void c_simple_list<struct s_visible_instance_list, 8192>::delete_last_element(void)
//{
//    mangled_ppc("?delete_last_element@?$c_simple_list@Us_visible_instance_list@@$0CAAA@@@QAAXXZ");
//};

//public: struct s_visible_instance_list & c_simple_list<struct s_visible_instance_list, 8192>::operator[](long)
//{
//    mangled_ppc("??A?$c_simple_list@Us_visible_instance_list@@$0CAAA@@@QAAAAUs_visible_instance_list@@J@Z");
//};

//public: long c_simple_list<struct s_visible_instances, 8192>::get_count(void)
//{
//    mangled_ppc("?get_count@?$c_simple_list@Us_visible_instances@@$0CAAA@@@QAAJXZ");
//};

//public: long c_simple_list<struct s_visible_clusters, 75>::add(void)
//{
//    mangled_ppc("?add@?$c_simple_list@Us_visible_clusters@@$0EL@@@QAAJXZ");
//};

//public: struct s_visible_clusters & c_simple_list<struct s_visible_clusters, 75>::operator[](long)
//{
//    mangled_ppc("??A?$c_simple_list@Us_visible_clusters@@$0EL@@@QAAAAUs_visible_clusters@@J@Z");
//};

//public: long c_simple_list<struct s_visible_instance_imposter_group, 512>::add(void)
//{
//    mangled_ppc("?add@?$c_simple_list@Us_visible_instance_imposter_group@@$0CAA@@@QAAJXZ");
//};

//public: struct s_visible_instance_imposter_group & c_simple_list<struct s_visible_instance_imposter_group, 512>::operator[](long)
//{
//    mangled_ppc("??A?$c_simple_list@Us_visible_instance_imposter_group@@$0CAA@@@QAAAAUs_visible_instance_imposter_group@@J@Z");
//};

//public: long c_simple_list<struct s_visible_instance_imposter, 2048>::add(void)
//{
//    mangled_ppc("?add@?$c_simple_list@Us_visible_instance_imposter@@$0IAA@@@QAAJXZ");
//};

//public: struct s_visible_instance_imposter & c_simple_list<struct s_visible_instance_imposter, 2048>::operator[](long)
//{
//    mangled_ppc("??A?$c_simple_list@Us_visible_instance_imposter@@$0IAA@@@QAAAAUs_visible_instance_imposter@@J@Z");
//};

//public: hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@I$0BAAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: bool c_simple_list<struct s_visible_instance_list, 8192>::valid(long)
//{
//    mangled_ppc("?valid@?$c_simple_list@Us_visible_instance_list@@$0CAAA@@@QAA_NJ@Z");
//};

//public: bool c_simple_list<struct s_visible_clusters, 75>::valid(long)
//{
//    mangled_ppc("?valid@?$c_simple_list@Us_visible_clusters@@$0EL@@@QAA_NJ@Z");
//};

//public: bool c_simple_list<struct s_visible_instance_imposter_group, 512>::valid(long)
//{
//    mangled_ppc("?valid@?$c_simple_list@Us_visible_instance_imposter_group@@$0CAA@@@QAA_NJ@Z");
//};

//public: bool c_simple_list<struct s_visible_instance_imposter, 2048>::valid(long)
//{
//    mangled_ppc("?valid@?$c_simple_list@Us_visible_instance_imposter@@$0IAA@@@QAA_NJ@Z");
//};

//public: char & s_static_array<char, 255>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@D$0PP@@@QAAAADJ@Z");
//};

//public: hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned int, 4096, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@I$0BAAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: void s_visibility_structure_collector::collect_instance_groups_fully_visible<unsigned short>(unsigned short *, long)
//{
//    mangled_ppc("??$collect_instance_groups_fully_visible@G@s_visibility_structure_collector@@QAAXPAGJ@Z");
//};

//public: void s_visibility_structure_collector::collect_fully_visible_group(long)
//{
//    mangled_ppc("?collect_fully_visible_group@s_visibility_structure_collector@@QAAXJ@Z");
//};

//public: void s_visibility_structure_collector::collect_instance_groups_fully_visible<long>(long *, long)
//{
//    mangled_ppc("??$collect_instance_groups_fully_visible@J@s_visibility_structure_collector@@QAAXPAJJ@Z");
//};

//public: void s_visibility_structure_collector::add_instances<unsigned short>(unsigned short *, long)
//{
//    mangled_ppc("??$add_instances@G@s_visibility_structure_collector@@QAAXPAGJ@Z");
//};

//public: void s_visibility_structure_collector::add_instances<long>(long *, long)
//{
//    mangled_ppc("??$add_instances@J@s_visibility_structure_collector@@QAAXPAJJ@Z");
//};

//public: static bool s_static_array<char, 255>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@D$0PP@@@SA_NJ@Z");
//};

//public: void hkVector4::set(float, float, float, float)
//{
//    mangled_ppc("?set@hkVector4@@QAAXMMMM@Z");
//};

