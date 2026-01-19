/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct structure_context, 16>::k_element_count; // "?k_element_count@?$s_static_array@Ustructure_context@@$0BA@@@2JB"
// bool g_structure_contexts_dirty; // "?g_structure_contexts_dirty@@3_NA"
// struct s_scenario_portal_context g_scenario_portal_context; // "?g_scenario_portal_context@@3Us_scenario_portal_context@@A"
// class s_static_array<struct structure_context, 16> g_structure_contexts; // "?g_structure_contexts@@3V?$s_static_array@Ustructure_context@@$0BA@@@A"

// void structures_initialize(void);
// void structures_dispose(void);
// void structures_initialize_for_new_map(void);
// void structures_dispose_from_old_map(void);
// void structures_initialize_for_new_structure_bsp(unsigned long);
// void structures_dispose_from_old_structure_bsp(unsigned long);
// void structures_prepare_for_new_zone_set(unsigned long, unsigned long);
// void structures_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *);
// void structures_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// void structures_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void structures_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void structures_context_cache_load_from_game_state(long);
// void structures_context_cache_initialize(void);
// void structures_context_cache_dirty(void);
// void structure_context_build(long, struct structure_context *);
// void scenario_portal_context_build(struct s_scenario_portal_context *, class s_static_array<struct structure_context, 16> *);
// long cluster_reference_packed_get(long, long);
// public: c_cluster_portal_iterator::c_cluster_portal_iterator(long);
// public: c_seam_connected_cluster_references_iterator::c_seam_connected_cluster_references_iterator(unsigned long, class c_seam_connected_cluster_references);
// public: c_seam_connected_cluster_references::c_seam_connected_cluster_references(class c_seam_connected_cluster_references const &);
// public: long c_cluster_portal_iterator::init(void) const;
// public: long c_seam_connected_cluster_references_iterator::next(long) const;
// private: long c_seam_connected_cluster_references::count(void) const;
// private: struct s_cluster_reference const c_seam_connected_cluster_references::get(long) const;
// public: long c_seam_connected_cluster_references_iterator::get_count(void) const;
// public: long c_cluster_portal_iterator::next(long) const;
// public: struct s_cluster_reference c_seam_connected_cluster_references_iterator::get(long) const;
// public: long c_cluster_portal_iterator::get_cluster_reference(long) const;
// public: long c_cluster_portal_iterator::get_portal_index(long) const;
// private: static long c_cluster_portal_iterator::pack_indices(long, long);
// private: static long c_cluster_portal_iterator::unpack_cluster_reference_index(long);
// private: static long c_cluster_portal_iterator::unpack_cluster_portal_index(long);
// struct s_scenario_portal_context const * scenario_portal_context_get(void);
// void structures_context_cache_validate(void);
// public: s_static_array<struct structure_context, 16>::s_static_array<struct structure_context, 16>(void);
// public: structure_context::structure_context(void);
// struct structure_context const * structure_context_get(long, class s_static_array<long, 280> *);
// float structure_distance_to_portal(struct structure_bsp const *, struct cluster_portal const *, union real_point3d const *);
// float structure_distance_to_closest_portal(union real_point3d const *, struct s_cluster_reference);
// public: unsigned char const & hkArrayBase<unsigned char>::operator[](int) const;
// public: struct structure_context & s_static_array<struct structure_context, 16>::element<long>(long);
// public: short & s_static_array<short, 256>::operator[]<long>(long);
// public: struct s_scenario_portal_context::s_portal_list & s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::operator[]<long>(long);
// public: struct s_scenario_portal_context::s_portal_and_cluster_reference & s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::operator[]<long>(long);
// public: struct structure_context & s_static_array<struct structure_context, 16>::operator[]<long>(long);
// public: static bool s_static_array<struct structure_context, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::valid<long>(long);
// public: static bool s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::valid<long>(long);
// public: class hkpMoppCode const * hkpMoppBvTreeShape::getMoppCode(void) const;

//void structures_initialize(void)
//{
//    mangled_ppc("?structures_initialize@@YAXXZ");
//};

//void structures_dispose(void)
//{
//    mangled_ppc("?structures_dispose@@YAXXZ");
//};

//void structures_initialize_for_new_map(void)
//{
//    mangled_ppc("?structures_initialize_for_new_map@@YAXXZ");
//};

//void structures_dispose_from_old_map(void)
//{
//    mangled_ppc("?structures_dispose_from_old_map@@YAXXZ");
//};

//void structures_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?structures_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void structures_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?structures_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void structures_prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?structures_prepare_for_new_zone_set@@YAXKK@Z");
//};

//void structures_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *)
//{
//    mangled_ppc("?structures_attach_resources_to_bsp_zone@@YAXJJPAVc_game_system_resource_registrar@@@Z");
//};

//void structures_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?structures_prepare_for_non_bsp_zone_set_switch@@YAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//void structures_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?structures_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void structures_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?structures_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void structures_context_cache_load_from_game_state(long)
//{
//    mangled_ppc("?structures_context_cache_load_from_game_state@@YAXJ@Z");
//};

//void structures_context_cache_initialize(void)
//{
//    mangled_ppc("?structures_context_cache_initialize@@YAXXZ");
//};

//void structures_context_cache_dirty(void)
//{
//    mangled_ppc("?structures_context_cache_dirty@@YAXXZ");
//};

//void structure_context_build(long, struct structure_context *)
//{
//    mangled_ppc("?structure_context_build@@YAXJPAUstructure_context@@@Z");
//};

//void scenario_portal_context_build(struct s_scenario_portal_context *, class s_static_array<struct structure_context, 16> *)
//{
//    mangled_ppc("?scenario_portal_context_build@@YAXPAUs_scenario_portal_context@@PAV?$s_static_array@Ustructure_context@@$0BA@@@@Z");
//};

//long cluster_reference_packed_get(long, long)
//{
//    mangled_ppc("?cluster_reference_packed_get@@YAJJJ@Z");
//};

//public: c_cluster_portal_iterator::c_cluster_portal_iterator(long)
//{
//    mangled_ppc("??0c_cluster_portal_iterator@@QAA@J@Z");
//};

//public: c_seam_connected_cluster_references_iterator::c_seam_connected_cluster_references_iterator(unsigned long, class c_seam_connected_cluster_references)
//{
//    mangled_ppc("??0c_seam_connected_cluster_references_iterator@@QAA@KVc_seam_connected_cluster_references@@@Z");
//};

//public: c_seam_connected_cluster_references::c_seam_connected_cluster_references(class c_seam_connected_cluster_references const &)
//{
//    mangled_ppc("??0c_seam_connected_cluster_references@@QAA@ABV0@@Z");
//};

//public: long c_cluster_portal_iterator::init(void) const
//{
//    mangled_ppc("?init@c_cluster_portal_iterator@@QBAJXZ");
//};

//public: long c_seam_connected_cluster_references_iterator::next(long) const
//{
//    mangled_ppc("?next@c_seam_connected_cluster_references_iterator@@QBAJJ@Z");
//};

//private: long c_seam_connected_cluster_references::count(void) const
//{
//    mangled_ppc("?count@c_seam_connected_cluster_references@@ABAJXZ");
//};

//private: struct s_cluster_reference const c_seam_connected_cluster_references::get(long) const
//{
//    mangled_ppc("?get@c_seam_connected_cluster_references@@ABA?BUs_cluster_reference@@J@Z");
//};

//public: long c_seam_connected_cluster_references_iterator::get_count(void) const
//{
//    mangled_ppc("?get_count@c_seam_connected_cluster_references_iterator@@QBAJXZ");
//};

//public: long c_cluster_portal_iterator::next(long) const
//{
//    mangled_ppc("?next@c_cluster_portal_iterator@@QBAJJ@Z");
//};

//public: struct s_cluster_reference c_seam_connected_cluster_references_iterator::get(long) const
//{
//    mangled_ppc("?get@c_seam_connected_cluster_references_iterator@@QBA?AUs_cluster_reference@@J@Z");
//};

//public: long c_cluster_portal_iterator::get_cluster_reference(long) const
//{
//    mangled_ppc("?get_cluster_reference@c_cluster_portal_iterator@@QBAJJ@Z");
//};

//public: long c_cluster_portal_iterator::get_portal_index(long) const
//{
//    mangled_ppc("?get_portal_index@c_cluster_portal_iterator@@QBAJJ@Z");
//};

//private: static long c_cluster_portal_iterator::pack_indices(long, long)
//{
//    mangled_ppc("?pack_indices@c_cluster_portal_iterator@@CAJJJ@Z");
//};

//private: static long c_cluster_portal_iterator::unpack_cluster_reference_index(long)
//{
//    mangled_ppc("?unpack_cluster_reference_index@c_cluster_portal_iterator@@CAJJ@Z");
//};

//private: static long c_cluster_portal_iterator::unpack_cluster_portal_index(long)
//{
//    mangled_ppc("?unpack_cluster_portal_index@c_cluster_portal_iterator@@CAJJ@Z");
//};

//struct s_scenario_portal_context const * scenario_portal_context_get(void)
//{
//    mangled_ppc("?scenario_portal_context_get@@YAPBUs_scenario_portal_context@@XZ");
//};

//void structures_context_cache_validate(void)
//{
//    mangled_ppc("?structures_context_cache_validate@@YAXXZ");
//};

//public: s_static_array<struct structure_context, 16>::s_static_array<struct structure_context, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Ustructure_context@@$0BA@@@QAA@XZ");
//};

//public: structure_context::structure_context(void)
//{
//    mangled_ppc("??0structure_context@@QAA@XZ");
//};

//struct structure_context const * structure_context_get(long, class s_static_array<long, 280> *)
//{
//    mangled_ppc("?structure_context_get@@YAPBUstructure_context@@JPAV?$s_static_array@J$0BBI@@@@Z");
//};

//float structure_distance_to_portal(struct structure_bsp const *, struct cluster_portal const *, union real_point3d const *)
//{
//    mangled_ppc("?structure_distance_to_portal@@YAMPBUstructure_bsp@@PBUcluster_portal@@PBTreal_point3d@@@Z");
//};

//float structure_distance_to_closest_portal(union real_point3d const *, struct s_cluster_reference)
//{
//    mangled_ppc("?structure_distance_to_closest_portal@@YAMPBTreal_point3d@@Us_cluster_reference@@@Z");
//};

//public: unsigned char const & hkArrayBase<unsigned char>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@E@@QBAABEH@Z");
//};

//public: struct structure_context & s_static_array<struct structure_context, 16>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@Ustructure_context@@$0BA@@@QAAAAUstructure_context@@J@Z");
//};

//public: short & s_static_array<short, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$0BAA@@@QAAAAFJ@Z");
//};

//public: struct s_scenario_portal_context::s_portal_list & s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_portal_list@s_scenario_portal_context@@$0IAA@@@QAAAAUs_portal_list@s_scenario_portal_context@@J@Z");
//};

//public: struct s_scenario_portal_context::s_portal_and_cluster_reference & s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_portal_and_cluster_reference@s_scenario_portal_context@@$0CAAA@@@QAAAAUs_portal_and_cluster_reference@s_scenario_portal_context@@J@Z");
//};

//public: struct structure_context & s_static_array<struct structure_context, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ustructure_context@@$0BA@@@QAAAAUstructure_context@@J@Z");
//};

//public: static bool s_static_array<struct structure_context, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ustructure_context@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_scenario_portal_context::s_portal_list, 2048>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_portal_list@s_scenario_portal_context@@$0IAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_scenario_portal_context::s_portal_and_cluster_reference, 8192>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_portal_and_cluster_reference@s_scenario_portal_context@@$0CAAA@@@SA_NJ@Z");
//};

//public: class hkpMoppCode const * hkpMoppBvTreeShape::getMoppCode(void) const
//{
//    mangled_ppc("?getMoppCode@hkpMoppBvTreeShape@@QBAPBVhkpMoppCode@@XZ");
//};

