/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_big_flags_typed<long, 1024>, 16>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_big_flags_typed@J$0EAA@@@$0BA@@@2JB"
// public: static long const s_static_array<class s_static_array<short, 1024>, 16>::k_element_count; // "?k_element_count@?$s_static_array@V?$s_static_array@F$0EAA@@@$0BA@@@2JB"
// public: static long const s_static_array<class c_big_flags_typed<long, 255>, 16>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_big_flags_typed@J$0PP@@@$0BA@@@2JB"
// public: static long const s_static_array<class s_static_array<short, 255>, 16>::k_element_count; // "?k_element_count@?$s_static_array@V?$s_static_array@F$0PP@@@$0BA@@@2JB"
// long visibility_debug_portals_structure_bsp_index; // "?visibility_debug_portals_structure_bsp_index@@3JA"
// long visibility_debug_portals_cluster_index; // "?visibility_debug_portals_cluster_index@@3JA"
// bool visibility_disable_conditional_portals; // "?visibility_disable_conditional_portals@@3_NA"
// long visibility_debug_light_cluster_intersections_mode; // "?visibility_debug_light_cluster_intersections_mode@@3JA"
// bool visibility_debug_light_cluster_intersections; // "?visibility_debug_light_cluster_intersections@@3_NA"
// bool visibility_debug_region_projections; // "?visibility_debug_region_projections@@3_NA"
// bool visibility_debug_working_portals; // "?visibility_debug_working_portals@@3_NA"
// bool visibility_debug_region_volumes; // "?visibility_debug_region_volumes@@3_NA"
// bool visibility_debug_volume_intersections; // "?visibility_debug_volume_intersections@@3_NA"
// bool visibility_debug_region_volumes_by_cluster_index; // "?visibility_debug_region_volumes_by_cluster_index@@3_NA"
// bool visibility_debug_portals_2d; // "?visibility_debug_portals_2d@@3_NA"
// bool visibility_debug_portals_2d_verbose; // "?visibility_debug_portals_2d_verbose@@3_NA"
// long visibility_debug_region_volumes_cluster_index; // "?visibility_debug_region_volumes_cluster_index@@3JA"
// bool visibility_debug_portals_3d; // "?visibility_debug_portals_3d@@3_NA"
// bool visibility_debug_visible_cluster_portals_3d; // "?visibility_debug_visible_cluster_portals_3d@@3_NA"
// bool visibility_debug_all_portals_3d; // "?visibility_debug_all_portals_3d@@3_NA"
// bool visibility_debug_subcluster_lighting; // "?visibility_debug_subcluster_lighting@@3_NA"
// bool visibility_debug_subcluster_cycle; // "?visibility_debug_subcluster_cycle@@3_NA"
// bool visibility_debug_subcluster_lighting_text_list; // "?visibility_debug_subcluster_lighting_text_list@@3_NA"

// void visibility_build_region_from_projections(long, struct visibility_projection const *, long, bool, struct s_visibility_region *, class s_static_array<class s_static_bitarray<1024>, 16> *, bool);
// public: s_portal_traverse_arguments::s_portal_traverse_arguments(struct s_working_portal_stack *, struct s_cluster_working_portals *, struct s_static_index_queue<short, 256> *, struct s_transformed_portal_cache *, struct visibility_projection const *, class s_static_array<class s_static_bitarray<1024>, 16> *);
// bool build_working_portal_stack_traverse_portals(struct s_portal_traverse_arguments *, long);
// class s_flags<enum e_portal_traversal_flag, unsigned long, 3> build_working_portal_stack_traverse_portal(struct s_portal_traverse_arguments *, long, long, long, long, long);
// short build_working_portal_stack_setup_seed_working_portal(struct s_working_portal_stack *, long, struct visibility_projection const *);
// void build_working_portal_stack_merge_working_portals(struct s_cluster_working_portals *, struct s_working_portal_stack *);
// void build_working_portal_stack_build_region(struct s_cluster_working_portals *, struct s_working_portal_stack *, short (*const)[255], struct visibility_projection const *, long, struct s_visibility_region *);
// bool build_working_portal_stack_add_working_portal_to_region(struct s_cluster_working_portals *, struct s_working_portal_stack *, short (*const)[255], struct visibility_projection const *, long, struct s_visibility_region *, long, long, long);
// void update_region_cluster_render_info(struct s_cluster_working_portals const *, struct s_working_portal_stack const *, short const (*const)[255], long, struct visibility_cluster *);
// public: s_working_portal_stack::s_working_portal_stack(void);
// long search_working_portal_parents(struct s_working_portal_stack *, long, long, long);
// bool portal_hulls_intersect(struct s_portal_hull const *, struct s_portal_hull const *, struct s_portal_hull *);
// bool compare_region_cluster_indices(long, long, struct s_visibility_region const *);
// void visibility_build_region_from_pvs(struct visibility_projection const *, struct s_cluster_reference, struct s_visibility_region *, bool);
// public: s_transformed_portal_cache::s_transformed_portal_cache(struct visibility_projection const *);
// public: s_static_array<class c_big_flags_typed<long, 1024>, 16>::s_static_array<class c_big_flags_typed<long, 1024>, 16>(void);
// public: struct s_transformed_portal * s_transformed_portal_cache::transform_portal(long, long);
// public: long s_transformed_portal_cache::compute_portal_facing(struct cluster_portal const *, struct plane3d const *, long, bool *);
// public: bool s_transformed_portal_cache::projection_origin_in_portal(struct cluster_portal const *, struct plane3d const *);
// public: s_cluster_working_portals::s_cluster_working_portals(void);
// public: s_static_array<class c_big_flags_typed<long, 255>, 16>::s_static_array<class c_big_flags_typed<long, 255>, 16>(void);
// public: void s_cluster_working_portals::insert(long, long, long);
// public: long s_cluster_working_portals::get_first(long);
// public: long s_cluster_working_portals::get_next(long, long);
// void render_debug_working_portal_stack(struct visibility_projection const *, struct s_working_portal_stack const *, bool);
// public: bool c_static_stack<struct s_working_portal, 256>::full(void) const;
// public: long c_static_stack<struct s_working_portal, 256>::count(void) const;
// public: long c_static_stack<struct s_working_portal, 256>::push(void);
// public: void c_static_stack<struct s_working_portal, 256>::pop(void);
// public: struct s_working_portal const * c_static_stack<struct s_working_portal, 256>::get(long) const;
// public: struct s_working_portal * c_static_stack<struct s_working_portal, 256>::get(long);
// public: c_static_stack<struct s_working_portal, 256>::c_static_stack<struct s_working_portal, 256>(void);
// public: c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::c_static_aligned_stack_allocator<union real_point2d, 5120, 2>(void);
// public: long c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::remaining(void) const;
// public: union real_point2d * c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::allocate(long);
// public: union real_point2d * c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::reallocate(union real_point2d *, long);
// public: void c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::deallocate(union real_point2d *);
// public: bool c_static_stack<struct s_transformed_portal, 512>::full(void) const;
// public: long c_static_stack<struct s_transformed_portal, 512>::push(void);
// public: struct s_transformed_portal * c_static_stack<struct s_transformed_portal, 512>::get(long);
// public: c_static_stack<struct s_transformed_portal, 512>::c_static_stack<struct s_transformed_portal, 512>(void);
// public: void s_static_bitarray<1024>::set(long, bool);
// public: s_static_index_queue<short, 256>::s_static_index_queue<short, 256>(void);
// public: bool s_static_index_queue<short, 256>::empty(void);
// public: bool s_static_index_queue<short, 256>::full(void);
// public: void s_static_index_queue<short, 256>::enqueue(short);
// public: short s_static_index_queue<short, 256>::dequeue(void);
// public: bool c_static_stack<struct s_working_portal, 256>::valid(void) const;
// public: bool c_static_stack<struct s_working_portal, 256>::valid(long) const;
// public: bool c_static_stack<struct s_working_portal, 256>::empty(void) const;
// public: long c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::count(void) const;
// public: bool c_static_stack<struct s_transformed_portal, 512>::valid(void) const;
// public: bool c_static_stack<struct s_transformed_portal, 512>::valid(long) const;
// public: bool s_static_index_queue<short, 256>::valid(void);
// public: static long s_static_index_queue<short, 256>::increment(long &);
// public: void c_big_flags_typed_no_init<long, 1024>::set_range(long, long, bool);
// public: c_big_flags_typed<long, 255>::c_big_flags_typed<long, 255>(void);
// public: void s_flags<enum e_portal_traversal_flag, unsigned long, 3>::clear(void);
// public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::test(enum e_portal_traversal_flag) const;
// public: void s_flags<enum e_portal_traversal_flag, unsigned long, 3>::set(enum e_portal_traversal_flag, bool);
// public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::is_empty(void) const;
// public: class s_flags<enum e_portal_traversal_flag, unsigned long, 3> & s_flags<enum e_portal_traversal_flag, unsigned long, 3>::operator|=(class s_flags<enum e_portal_traversal_flag, unsigned long, 3> const &);
// public: struct s_scenario_portal_context::s_portal_list const & s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::operator[]<short>(short) const;
// public: struct s_scenario_portal_context::s_portal_and_cluster_reference const & s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::operator[]<long>(long) const;
// public: long const & s_static_array<long, 256>::operator[]<long>(long) const;
// public: class c_big_flags_typed<long, 1024> & s_static_array<class c_big_flags_typed<long, 1024>, 16>::operator[]<long>(long);
// public: class s_static_array<short, 1024> & s_static_array<class s_static_array<short, 1024>, 16>::operator[]<long>(long);
// public: short & s_static_array<short, 1024>::operator[]<long>(long);
// public: class c_big_flags_typed<long, 255> & s_static_array<class c_big_flags_typed<long, 255>, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 256>::operator[]<int>(int);
// public: class s_static_array<short, 255> & s_static_array<class s_static_array<short, 255>, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 256>::operator[]<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 1024>::get_mask_of_first_slice_of_chunk_inclusive(long);
// public: static bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::valid_bit(enum e_portal_traversal_flag);
// public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::valid(void) const;
// private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::flag_size_type(enum e_portal_traversal_flag);
// private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::valid<short>(short);
// public: static bool s_static_array<long, 256>::valid<long>(long);
// public: static bool s_static_array<class c_big_flags_typed<long, 1024>, 16>::valid<long>(long);
// public: static bool s_static_array<class s_static_array<short, 1024>, 16>::valid<long>(long);
// public: static bool s_static_array<short, 1024>::valid<long>(long);
// public: static bool s_static_array<class c_big_flags_typed<long, 255>, 16>::valid<long>(long);
// public: static bool s_static_array<long, 256>::valid<int>(int);
// public: static bool s_static_array<class s_static_array<short, 255>, 16>::valid<long>(long);
// private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::make_N_bit_mask_size_type(enum e_portal_traversal_flag);

//void visibility_build_region_from_projections(long, struct visibility_projection const *, long, bool, struct s_visibility_region *, class s_static_array<class s_static_bitarray<1024>, 16> *, bool)
//{
//    mangled_ppc("?visibility_build_region_from_projections@@YAXJPBUvisibility_projection@@J_NPAUs_visibility_region@@PAV?$s_static_array@V?$s_static_bitarray@$0EAA@@@$0BA@@@1@Z");
//};

//public: s_portal_traverse_arguments::s_portal_traverse_arguments(struct s_working_portal_stack *, struct s_cluster_working_portals *, struct s_static_index_queue<short, 256> *, struct s_transformed_portal_cache *, struct visibility_projection const *, class s_static_array<class s_static_bitarray<1024>, 16> *)
//{
//    mangled_ppc("??0s_portal_traverse_arguments@@QAA@PAUs_working_portal_stack@@PAUs_cluster_working_portals@@PAU?$s_static_index_queue@F$0BAA@@@PAUs_transformed_portal_cache@@PBUvisibility_projection@@PAV?$s_static_array@V?$s_static_bitarray@$0EAA@@@$0BA@@@@Z");
//};

//bool build_working_portal_stack_traverse_portals(struct s_portal_traverse_arguments *, long)
//{
//    mangled_ppc("?build_working_portal_stack_traverse_portals@@YA_NPAUs_portal_traverse_arguments@@J@Z");
//};

//class s_flags<enum e_portal_traversal_flag, unsigned long, 3> build_working_portal_stack_traverse_portal(struct s_portal_traverse_arguments *, long, long, long, long, long)
//{
//    mangled_ppc("?build_working_portal_stack_traverse_portal@@YA?AV?$s_flags@W4e_portal_traversal_flag@@K$02@@PAUs_portal_traverse_arguments@@JJJJJ@Z");
//};

//short build_working_portal_stack_setup_seed_working_portal(struct s_working_portal_stack *, long, struct visibility_projection const *)
//{
//    mangled_ppc("?build_working_portal_stack_setup_seed_working_portal@@YAFPAUs_working_portal_stack@@JPBUvisibility_projection@@@Z");
//};

//void build_working_portal_stack_merge_working_portals(struct s_cluster_working_portals *, struct s_working_portal_stack *)
//{
//    mangled_ppc("?build_working_portal_stack_merge_working_portals@@YAXPAUs_cluster_working_portals@@PAUs_working_portal_stack@@@Z");
//};

//void build_working_portal_stack_build_region(struct s_cluster_working_portals *, struct s_working_portal_stack *, short (*const)[255], struct visibility_projection const *, long, struct s_visibility_region *)
//{
//    mangled_ppc("?build_working_portal_stack_build_region@@YAXPAUs_cluster_working_portals@@PAUs_working_portal_stack@@QAY0PP@FPBUvisibility_projection@@JPAUs_visibility_region@@@Z");
//};

//bool build_working_portal_stack_add_working_portal_to_region(struct s_cluster_working_portals *, struct s_working_portal_stack *, short (*const)[255], struct visibility_projection const *, long, struct s_visibility_region *, long, long, long)
//{
//    mangled_ppc("?build_working_portal_stack_add_working_portal_to_region@@YA_NPAUs_cluster_working_portals@@PAUs_working_portal_stack@@QAY0PP@FPBUvisibility_projection@@JPAUs_visibility_region@@JJJ@Z");
//};

//void update_region_cluster_render_info(struct s_cluster_working_portals const *, struct s_working_portal_stack const *, short const (*const)[255], long, struct visibility_cluster *)
//{
//    mangled_ppc("?update_region_cluster_render_info@@YAXPBUs_cluster_working_portals@@PBUs_working_portal_stack@@QAY0PP@$$CBFJPAUvisibility_cluster@@@Z");
//};

//public: s_working_portal_stack::s_working_portal_stack(void)
//{
//    mangled_ppc("??0s_working_portal_stack@@QAA@XZ");
//};

//long search_working_portal_parents(struct s_working_portal_stack *, long, long, long)
//{
//    mangled_ppc("?search_working_portal_parents@@YAJPAUs_working_portal_stack@@JJJ@Z");
//};

//bool portal_hulls_intersect(struct s_portal_hull const *, struct s_portal_hull const *, struct s_portal_hull *)
//{
//    mangled_ppc("?portal_hulls_intersect@@YA_NPBUs_portal_hull@@0PAU1@@Z");
//};

//bool compare_region_cluster_indices(long, long, struct s_visibility_region const *)
//{
//    mangled_ppc("?compare_region_cluster_indices@@YA_NJJPBUs_visibility_region@@@Z");
//};

//void visibility_build_region_from_pvs(struct visibility_projection const *, struct s_cluster_reference, struct s_visibility_region *, bool)
//{
//    mangled_ppc("?visibility_build_region_from_pvs@@YAXPBUvisibility_projection@@Us_cluster_reference@@PAUs_visibility_region@@_N@Z");
//};

//public: s_transformed_portal_cache::s_transformed_portal_cache(struct visibility_projection const *)
//{
//    mangled_ppc("??0s_transformed_portal_cache@@QAA@PBUvisibility_projection@@@Z");
//};

//public: s_static_array<class c_big_flags_typed<long, 1024>, 16>::s_static_array<class c_big_flags_typed<long, 1024>, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_big_flags_typed@J$0EAA@@@$0BA@@@QAA@XZ");
//};

//public: struct s_transformed_portal * s_transformed_portal_cache::transform_portal(long, long)
//{
//    mangled_ppc("?transform_portal@s_transformed_portal_cache@@QAAPAUs_transformed_portal@@JJ@Z");
//};

//public: long s_transformed_portal_cache::compute_portal_facing(struct cluster_portal const *, struct plane3d const *, long, bool *)
//{
//    mangled_ppc("?compute_portal_facing@s_transformed_portal_cache@@QAAJPBUcluster_portal@@PBUplane3d@@JPA_N@Z");
//};

//public: bool s_transformed_portal_cache::projection_origin_in_portal(struct cluster_portal const *, struct plane3d const *)
//{
//    mangled_ppc("?projection_origin_in_portal@s_transformed_portal_cache@@QAA_NPBUcluster_portal@@PBUplane3d@@@Z");
//};

//public: s_cluster_working_portals::s_cluster_working_portals(void)
//{
//    mangled_ppc("??0s_cluster_working_portals@@QAA@XZ");
//};

//public: s_static_array<class c_big_flags_typed<long, 255>, 16>::s_static_array<class c_big_flags_typed<long, 255>, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_big_flags_typed@J$0PP@@@$0BA@@@QAA@XZ");
//};

//public: void s_cluster_working_portals::insert(long, long, long)
//{
//    mangled_ppc("?insert@s_cluster_working_portals@@QAAXJJJ@Z");
//};

//public: long s_cluster_working_portals::get_first(long)
//{
//    mangled_ppc("?get_first@s_cluster_working_portals@@QAAJJ@Z");
//};

//public: long s_cluster_working_portals::get_next(long, long)
//{
//    mangled_ppc("?get_next@s_cluster_working_portals@@QAAJJJ@Z");
//};

//void render_debug_working_portal_stack(struct visibility_projection const *, struct s_working_portal_stack const *, bool)
//{
//    mangled_ppc("?render_debug_working_portal_stack@@YAXPBUvisibility_projection@@PBUs_working_portal_stack@@_N@Z");
//};

//public: bool c_static_stack<struct s_working_portal, 256>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_working_portal@@$0BAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_working_portal, 256>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_working_portal@@$0BAA@@@QBAJXZ");
//};

//public: long c_static_stack<struct s_working_portal, 256>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_working_portal@@$0BAA@@@QAAJXZ");
//};

//public: void c_static_stack<struct s_working_portal, 256>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_working_portal@@$0BAA@@@QAAXXZ");
//};

//public: struct s_working_portal const * c_static_stack<struct s_working_portal, 256>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_working_portal@@$0BAA@@@QBAPBUs_working_portal@@J@Z");
//};

//public: struct s_working_portal * c_static_stack<struct s_working_portal, 256>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_working_portal@@$0BAA@@@QAAPAUs_working_portal@@J@Z");
//};

//public: c_static_stack<struct s_working_portal, 256>::c_static_stack<struct s_working_portal, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_working_portal@@$0BAA@@@QAA@XZ");
//};

//public: c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::c_static_aligned_stack_allocator<union real_point2d, 5120, 2>(void)
//{
//    mangled_ppc("??0?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QAA@XZ");
//};

//public: long c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::remaining(void) const
//{
//    mangled_ppc("?remaining@?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QBAJXZ");
//};

//public: union real_point2d * c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::allocate(long)
//{
//    mangled_ppc("?allocate@?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QAAPATreal_point2d@@J@Z");
//};

//public: union real_point2d * c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::reallocate(union real_point2d *, long)
//{
//    mangled_ppc("?reallocate@?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QAAPATreal_point2d@@PAT2@J@Z");
//};

//public: void c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::deallocate(union real_point2d *)
//{
//    mangled_ppc("?deallocate@?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QAAXPATreal_point2d@@@Z");
//};

//public: bool c_static_stack<struct s_transformed_portal, 512>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_transformed_portal@@$0CAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_transformed_portal, 512>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_transformed_portal@@$0CAA@@@QAAJXZ");
//};

//public: struct s_transformed_portal * c_static_stack<struct s_transformed_portal, 512>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_transformed_portal@@$0CAA@@@QAAPAUs_transformed_portal@@J@Z");
//};

//public: c_static_stack<struct s_transformed_portal, 512>::c_static_stack<struct s_transformed_portal, 512>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_transformed_portal@@$0CAA@@@QAA@XZ");
//};

//public: void s_static_bitarray<1024>::set(long, bool)
//{
//    mangled_ppc("?set@?$s_static_bitarray@$0EAA@@@QAAXJ_N@Z");
//};

//public: s_static_index_queue<short, 256>::s_static_index_queue<short, 256>(void)
//{
//    mangled_ppc("??0?$s_static_index_queue@F$0BAA@@@QAA@XZ");
//};

//public: bool s_static_index_queue<short, 256>::empty(void)
//{
//    mangled_ppc("?empty@?$s_static_index_queue@F$0BAA@@@QAA_NXZ");
//};

//public: bool s_static_index_queue<short, 256>::full(void)
//{
//    mangled_ppc("?full@?$s_static_index_queue@F$0BAA@@@QAA_NXZ");
//};

//public: void s_static_index_queue<short, 256>::enqueue(short)
//{
//    mangled_ppc("?enqueue@?$s_static_index_queue@F$0BAA@@@QAAXF@Z");
//};

//public: short s_static_index_queue<short, 256>::dequeue(void)
//{
//    mangled_ppc("?dequeue@?$s_static_index_queue@F$0BAA@@@QAAFXZ");
//};

//public: bool c_static_stack<struct s_working_portal, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_working_portal@@$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_working_portal, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_working_portal@@$0BAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_working_portal, 256>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_working_portal@@$0BAA@@@QBA_NXZ");
//};

//public: long c_static_aligned_stack_allocator<union real_point2d, 5120, 2>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_aligned_stack_allocator@Treal_point2d@@$0BEAA@$01@@QBAJXZ");
//};

//public: bool c_static_stack<struct s_transformed_portal, 512>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_transformed_portal@@$0CAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_transformed_portal, 512>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_transformed_portal@@$0CAA@@@QBA_NJ@Z");
//};

//public: bool s_static_index_queue<short, 256>::valid(void)
//{
//    mangled_ppc("?valid@?$s_static_index_queue@F$0BAA@@@QAA_NXZ");
//};

//public: static long s_static_index_queue<short, 256>::increment(long &)
//{
//    mangled_ppc("?increment@?$s_static_index_queue@F$0BAA@@@SAJAAJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 1024>::set_range(long, long, bool)
//{
//    mangled_ppc("?set_range@?$c_big_flags_typed_no_init@J$0EAA@@@QAAXJJ_N@Z");
//};

//public: c_big_flags_typed<long, 255>::c_big_flags_typed<long, 255>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0PP@@@QAA@XZ");
//};

//public: void s_flags<enum e_portal_traversal_flag, unsigned long, 3>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_portal_traversal_flag@@K$02@@QAAXXZ");
//};

//public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::test(enum e_portal_traversal_flag) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_portal_traversal_flag@@K$02@@QBA_NW4e_portal_traversal_flag@@@Z");
//};

//public: void s_flags<enum e_portal_traversal_flag, unsigned long, 3>::set(enum e_portal_traversal_flag, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_portal_traversal_flag@@K$02@@QAAXW4e_portal_traversal_flag@@_N@Z");
//};

//public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$s_flags@W4e_portal_traversal_flag@@K$02@@QBA_NXZ");
//};

//public: class s_flags<enum e_portal_traversal_flag, unsigned long, 3> & s_flags<enum e_portal_traversal_flag, unsigned long, 3>::operator|=(class s_flags<enum e_portal_traversal_flag, unsigned long, 3> const &)
//{
//    mangled_ppc("??_5?$s_flags@W4e_portal_traversal_flag@@K$02@@QAAAAV0@ABV0@@Z");
//};

//public: struct s_scenario_portal_context::s_portal_list const & s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_portal_list@s_scenario_portal_context@@$0IAA@@@QBAABUs_portal_list@s_scenario_portal_context@@F@Z");
//};

//public: struct s_scenario_portal_context::s_portal_and_cluster_reference const & s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_portal_and_cluster_reference@s_scenario_portal_context@@$0CAAA@@@QBAABUs_portal_and_cluster_reference@s_scenario_portal_context@@J@Z");
//};

//public: long const & s_static_array<long, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BAA@@@QBAABJJ@Z");
//};

//public: class c_big_flags_typed<long, 1024> & s_static_array<class c_big_flags_typed<long, 1024>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags_typed@J$0EAA@@@$0BA@@@QAAAAV?$c_big_flags_typed@J$0EAA@@@J@Z");
//};

//public: class s_static_array<short, 1024> & s_static_array<class s_static_array<short, 1024>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@F$0EAA@@@$0BA@@@QAAAAV?$s_static_array@F$0EAA@@@J@Z");
//};

//public: short & s_static_array<short, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$0EAA@@@QAAAAFJ@Z");
//};

//public: class c_big_flags_typed<long, 255> & s_static_array<class c_big_flags_typed<long, 255>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags_typed@J$0PP@@@$0BA@@@QAAAAV?$c_big_flags_typed@J$0PP@@@J@Z");
//};

//public: long & s_static_array<long, 256>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@J$0BAA@@@QAAAAJH@Z");
//};

//public: class s_static_array<short, 255> & s_static_array<class s_static_array<short, 255>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@F$0PP@@@$0BA@@@QAAAAV?$s_static_array@F$0PP@@@J@Z");
//};

//public: long & s_static_array<long, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BAA@@@QAAAAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 1024>::get_mask_of_first_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0EAA@@@KAKJ@Z");
//};

//public: static bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::valid_bit(enum e_portal_traversal_flag)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_portal_traversal_flag@@K$02@@SA_NW4e_portal_traversal_flag@@@Z");
//};

//public: bool s_flags<enum e_portal_traversal_flag, unsigned long, 3>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_portal_traversal_flag@@K$02@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::flag_size_type(enum e_portal_traversal_flag)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_portal_traversal_flag@@K$02@@CAKW4e_portal_traversal_flag@@@Z");
//};

//private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_portal_traversal_flag@@K$02@@CAKXZ");
//};

//public: static bool s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_portal_list@s_scenario_portal_context@@$0IAA@@@SA_NF@Z");
//};

//public: static bool s_static_array<long, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0BAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_big_flags_typed<long, 1024>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_big_flags_typed@J$0EAA@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class s_static_array<short, 1024>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_array@F$0EAA@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<short, 1024>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@F$0EAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_big_flags_typed<long, 255>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_big_flags_typed@J$0PP@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 256>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@J$0BAA@@@SA_NH@Z");
//};

//public: static bool s_static_array<class s_static_array<short, 255>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_array@F$0PP@@@$0BA@@@SA_NJ@Z");
//};

//private: static unsigned long s_flags<enum e_portal_traversal_flag, unsigned long, 3>::make_N_bit_mask_size_type(enum e_portal_traversal_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_portal_traversal_flag@@K$02@@CAKW4e_portal_traversal_flag@@@Z");
//};

