/* ---------- headers */

#include "omaha\structures\structure_seams.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::k_element_count; // "?k_element_count@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@2JB"
// public: static long const s_static_array<struct s_collision_materials_extant_flags, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_collision_materials_extant_flags@@$0BA@@@2JB"
// public: static long const s_static_array<struct s_seam_mapping, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_seam_mapping@@$0IA@@@2JB"
// public: static long const s_static_array<struct s_identical_instance_reference, 256>::k_element_count; // "?k_element_count@?$s_static_array@Us_identical_instance_reference@@$0BAA@@@2JB"
// public: static long const s_static_array<struct s_identical_instance_reference, 32768>::k_element_count; // "?k_element_count@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@2JB"
// public: static long const s_static_array<struct s_cluster_reference, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_cluster_reference@@$0EA@@@2JB"
// class c_opaque_data<struct s_structure_seam_globals, 133148, 4> g_structure_seam_globals_memory; // "?g_structure_seam_globals_memory@@3V?$c_opaque_data@Us_structure_seam_globals@@$0CAIBM@$03@@A"
// struct s_structure_seam_globals const *const g_structure_seam_globals; // "?g_structure_seam_globals@@3PBUs_structure_seam_globals@@B"

// void structure_seams_initialize(void);
// void structure_seams_initialize_no_game(void);
// void structure_seams_initialize_for_new_map(void);
// void structure_seams_initialize_for_new_structure_bsp(long, struct s_structure_seams const *, unsigned long);
// void structure_seams_dispose_from_old_structure_bsp(unsigned long);
// void structure_seams_dispose_from_old_map(void);
// void structure_seams_dispose(void);
// void structure_seams_load_from_game_state(long);
// void structure_seams_save_to_game_state(long);
// void structure_seams_initialize_for_new_structure_bsp_internal(struct s_structure_seam_globals *, long, struct s_structure_seams const *, unsigned long);
// bool compare_identical_instance_references_function(void const *, void const *, void const *);
// bool compare_identical_instance_transform(struct real_matrix4x3const *, struct real_matrix4x3const *);
// void collision_materials_extant_flags_initialize(long, struct s_collision_materials_extant_flags *, long);
// struct s_collision_materials_extant_flags const * collision_materials_extant_flags_get(long);
// void structure_seams_connect(struct s_structure_seam_globals *, long, long);
// public: long s_seam_mapping::s_seam_cluster_mapping::get_cluster_index(long) const;
// public: long s_seam_mapping::s_seam_cluster_mapping::get_cluster_mapping_index(long) const;
// public: void s_seam_mapping::s_seam_cluster_mapping::set_cluster_index(long, long);
// public: void s_seam_mapping::s_seam_cluster_mapping::set_cluster_mapping_index(long, long);
// long structure_seams_connected_structure_bsp_get(long, long);
// long structure_seams_connected_cluster_references_get(struct s_cluster_reference, long, class s_static_array<struct s_cluster_reference, 64> *);
// void structure_seams_connected_structure_bsp_indices_get(long, long *, long *);
// class c_big_flags_typed_no_init<long, 128> const * structure_seams_active_seams_mask_get(void);
// bool structure_seams_connected_edge_get(long, long, long *, long *);
// void structure_seams_reset(struct s_structure_seam_globals *);
// class c_big_flags_typed_no_init<long, 128> structure_seams_calculate_active_seams_mask(struct s_structure_seam_globals const *);
// unsigned long structure_seams_connected_bsps_mask_get(void);
// void structure_seams_runtime_render_debug(long, bool, bool, bool, long);
// void structure_seams_duplicate_instances_render_debug(void);
// bool structure_seams_are_dirty(long, long);
// class c_static_stack<struct s_structure_seam_identifier, 128> const * structure_seams_identifiers_get(long, class c_static_stack<struct s_structure_seam_identifier, 128> *);
// bool structure_seams_are_dirty(long, class c_static_stack<struct s_structure_seam_identifier, 128> const *);
// bool structure_seams_is_root_cluster_reference(long, unsigned long, struct s_cluster_reference);
// class c_seam_connected_cluster_references structure_seams_connected_cluster_references_get(long, struct s_cluster_reference, bool);
// class c_seam_connected_cluster_references structure_seams_connected_cluster_references_get(long, long, bool);
// public: c_seam_connected_cluster_references::c_seam_connected_cluster_references(struct s_cluster_reference const *, long);
// class c_seam_connected_cluster_references structure_seams_connected_cluster_references_no_resource_access_get(long, struct s_cluster_reference, bool);
// struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, struct s_cluster_reference);
// struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, long, long);
// struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, long, long, long);
// bool structure_seams_connected_cluster_references_compute(long, struct s_cluster_reference, bool, class c_static_stack<struct s_cluster_reference, 1024> *);
// bool structure_seams_attached_cluster_references_compute(long, struct s_cluster_reference, class c_static_stack<struct s_cluster_reference, 1024> *);
// struct s_cluster_reference structure_seams_root_cluster_reference_compute(long, struct s_cluster_reference);
// bool structure_seams_have_errors(void);
// public: static long s_static_array<struct s_seam_mapping, 128>::get_count(void);
// public: static long s_static_array<struct s_identical_instance_reference, 32768>::get_count(void);
// ?sort_range@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: long c_static_stack<struct s_structure_seam_identifier, 128>::count(void) const;
// public: void c_static_stack<struct s_structure_seam_identifier, 128>::resize(long);
// public: void c_static_stack<struct s_structure_seam_identifier, 128>::push_back(struct s_structure_seam_identifier const &);
// public: struct s_structure_seam_identifier const & c_static_stack<struct s_structure_seam_identifier, 128>::operator[](long) const;
// public: c_static_stack<struct s_structure_seam_identifier, 128>::c_static_stack<struct s_structure_seam_identifier, 128>(void);
// public: bool c_static_stack<struct s_cluster_reference, 1024>::empty(void) const;
// public: bool c_static_stack<struct s_cluster_reference, 1024>::full(void) const;
// public: long c_static_stack<struct s_cluster_reference, 1024>::count(void) const;
// public: void c_static_stack<struct s_cluster_reference, 1024>::push_back(struct s_cluster_reference const &);
// public: struct s_cluster_reference & c_static_stack<struct s_cluster_reference, 1024>::operator[](long);
// public: struct s_cluster_reference * c_static_stack<struct s_cluster_reference, 1024>::get(long);
// public: c_static_stack<struct s_cluster_reference, 1024>::c_static_stack<struct s_cluster_reference, 1024>(void);
// public: bool c_static_stack<struct s_structure_seam_identifier, 128>::valid(void) const;
// public: bool c_static_stack<struct s_structure_seam_identifier, 128>::valid(long) const;
// public: long c_static_stack<struct s_structure_seam_identifier, 128>::push(void);
// public: struct s_structure_seam_identifier * c_static_stack<struct s_structure_seam_identifier, 128>::get(long);
// public: bool c_static_stack<struct s_cluster_reference, 1024>::valid(void) const;
// public: bool c_static_stack<struct s_cluster_reference, 1024>::valid(long) const;
// public: long c_static_stack<struct s_cluster_reference, 1024>::push(void);
// public: bool c_static_stack<struct s_structure_seam_identifier, 128>::full(void) const;
// public: bool c_flags_no_init<enum structure_collision_material::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum structure_collision_material::e_flag) const;
// public: struct s_structure_seam_globals * c_opaque_data<struct s_structure_seam_globals, 133148, 4>::get(void);
// public: struct s_collision_materials_extant_flags & s_static_array<struct s_collision_materials_extant_flags, 16>::operator[]<long>(long);
// public: struct s_identical_instance_reference & s_static_array<struct s_identical_instance_reference, 32768>::operator[]<long>(long);
// public: struct s_identical_instance_reference & s_static_array<struct s_identical_instance_reference, 256>::operator[]<long>(long);
// public: struct s_collision_materials_extant_flags const & s_static_array<struct s_collision_materials_extant_flags, 16>::operator[]<long>(long) const;
// public: struct s_seam_mapping & s_static_array<struct s_seam_mapping, 128>::element<long>(long);
// public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<long>(long);
// public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<short>(short);
// public: struct s_seam_mapping const & s_static_array<struct s_seam_mapping, 128>::element<long>(long) const;
// public: struct s_seam_mapping::s_seam_cluster_mapping const & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::operator[]<long>(long) const;
// public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 64>::operator[]<long>(long);
// public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::operator[]<long>(long);
// public: struct s_seam_mapping::s_seam_cluster_mapping const & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<long>(long) const;
// public: struct s_identical_instance_reference const & s_static_array<struct s_identical_instance_reference, 256>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_collision_materials_extant_flags, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_identical_instance_reference, 32768>::valid<long>(long);
// public: static bool s_static_array<struct s_identical_instance_reference, 256>::valid<long>(long);
// public: static bool s_static_array<struct s_seam_mapping, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::valid<long>(long);
// public: static bool s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::valid<short>(short);
// public: static bool s_static_array<struct s_cluster_reference, 64>::valid<long>(long);

//void structure_seams_initialize(void)
//{
//    mangled_ppc("?structure_seams_initialize@@YAXXZ");
//};

//void structure_seams_initialize_no_game(void)
//{
//    mangled_ppc("?structure_seams_initialize_no_game@@YAXXZ");
//};

//void structure_seams_initialize_for_new_map(void)
//{
//    mangled_ppc("?structure_seams_initialize_for_new_map@@YAXXZ");
//};

//void structure_seams_initialize_for_new_structure_bsp(long, struct s_structure_seams const *, unsigned long)
//{
//    mangled_ppc("?structure_seams_initialize_for_new_structure_bsp@@YAXJPBUs_structure_seams@@K@Z");
//};

//void structure_seams_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?structure_seams_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void structure_seams_dispose_from_old_map(void)
//{
//    mangled_ppc("?structure_seams_dispose_from_old_map@@YAXXZ");
//};

//void structure_seams_dispose(void)
//{
//    mangled_ppc("?structure_seams_dispose@@YAXXZ");
//};

//void structure_seams_load_from_game_state(long)
//{
//    mangled_ppc("?structure_seams_load_from_game_state@@YAXJ@Z");
//};

//void structure_seams_save_to_game_state(long)
//{
//    mangled_ppc("?structure_seams_save_to_game_state@@YAXJ@Z");
//};

//void structure_seams_initialize_for_new_structure_bsp_internal(struct s_structure_seam_globals *, long, struct s_structure_seams const *, unsigned long)
//{
//    mangled_ppc("?structure_seams_initialize_for_new_structure_bsp_internal@@YAXPAUs_structure_seam_globals@@JPBUs_structure_seams@@K@Z");
//};

//bool compare_identical_instance_references_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_identical_instance_references_function@@YA_NPBX00@Z");
//};

//bool compare_identical_instance_transform(struct real_matrix4x3const *, struct real_matrix4x3const *)
//{
//    mangled_ppc("?compare_identical_instance_transform@@YA_NPBUreal_matrix4x3@@0@Z");
//};

//void collision_materials_extant_flags_initialize(long, struct s_collision_materials_extant_flags *, long)
//{
//    mangled_ppc("?collision_materials_extant_flags_initialize@@YAXJPAUs_collision_materials_extant_flags@@J@Z");
//};

//struct s_collision_materials_extant_flags const * collision_materials_extant_flags_get(long)
//{
//    mangled_ppc("?collision_materials_extant_flags_get@@YAPBUs_collision_materials_extant_flags@@J@Z");
//};

//void structure_seams_connect(struct s_structure_seam_globals *, long, long)
//{
//    mangled_ppc("?structure_seams_connect@@YAXPAUs_structure_seam_globals@@JJ@Z");
//};

//public: long s_seam_mapping::s_seam_cluster_mapping::get_cluster_index(long) const
//{
//    mangled_ppc("?get_cluster_index@s_seam_cluster_mapping@s_seam_mapping@@QBAJJ@Z");
//};

//public: long s_seam_mapping::s_seam_cluster_mapping::get_cluster_mapping_index(long) const
//{
//    mangled_ppc("?get_cluster_mapping_index@s_seam_cluster_mapping@s_seam_mapping@@QBAJJ@Z");
//};

//public: void s_seam_mapping::s_seam_cluster_mapping::set_cluster_index(long, long)
//{
//    mangled_ppc("?set_cluster_index@s_seam_cluster_mapping@s_seam_mapping@@QAAXJJ@Z");
//};

//public: void s_seam_mapping::s_seam_cluster_mapping::set_cluster_mapping_index(long, long)
//{
//    mangled_ppc("?set_cluster_mapping_index@s_seam_cluster_mapping@s_seam_mapping@@QAAXJJ@Z");
//};

//long structure_seams_connected_structure_bsp_get(long, long)
//{
//    mangled_ppc("?structure_seams_connected_structure_bsp_get@@YAJJJ@Z");
//};

//long structure_seams_connected_cluster_references_get(struct s_cluster_reference, long, class s_static_array<struct s_cluster_reference, 64> *)
//{
//    mangled_ppc("?structure_seams_connected_cluster_references_get@@YAJUs_cluster_reference@@JPAV?$s_static_array@Us_cluster_reference@@$0EA@@@@Z");
//};

//void structure_seams_connected_structure_bsp_indices_get(long, long *, long *)
//{
//    mangled_ppc("?structure_seams_connected_structure_bsp_indices_get@@YAXJPAJ0@Z");
//};

//class c_big_flags_typed_no_init<long, 128> const * structure_seams_active_seams_mask_get(void)
//{
//    mangled_ppc("?structure_seams_active_seams_mask_get@@YAPBV?$c_big_flags_typed_no_init@J$0IA@@@XZ");
//};

//bool structure_seams_connected_edge_get(long, long, long *, long *)
//{
//    mangled_ppc("?structure_seams_connected_edge_get@@YA_NJJPAJ0@Z");
//};

//void structure_seams_reset(struct s_structure_seam_globals *)
//{
//    mangled_ppc("?structure_seams_reset@@YAXPAUs_structure_seam_globals@@@Z");
//};

//class c_big_flags_typed_no_init<long, 128> structure_seams_calculate_active_seams_mask(struct s_structure_seam_globals const *)
//{
//    mangled_ppc("?structure_seams_calculate_active_seams_mask@@YA?AV?$c_big_flags_typed_no_init@J$0IA@@@PBUs_structure_seam_globals@@@Z");
//};

//unsigned long structure_seams_connected_bsps_mask_get(void)
//{
//    mangled_ppc("?structure_seams_connected_bsps_mask_get@@YAKXZ");
//};

//void structure_seams_runtime_render_debug(long, bool, bool, bool, long)
//{
//    mangled_ppc("?structure_seams_runtime_render_debug@@YAXJ_N00J@Z");
//};

//void structure_seams_duplicate_instances_render_debug(void)
//{
//    mangled_ppc("?structure_seams_duplicate_instances_render_debug@@YAXXZ");
//};

//bool structure_seams_are_dirty(long, long)
//{
//    mangled_ppc("?structure_seams_are_dirty@@YA_NJJ@Z");
//};

//class c_static_stack<struct s_structure_seam_identifier, 128> const * structure_seams_identifiers_get(long, class c_static_stack<struct s_structure_seam_identifier, 128> *)
//{
//    mangled_ppc("?structure_seams_identifiers_get@@YAPBV?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@JPAV1@@Z");
//};

//bool structure_seams_are_dirty(long, class c_static_stack<struct s_structure_seam_identifier, 128> const *)
//{
//    mangled_ppc("?structure_seams_are_dirty@@YA_NJPBV?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@@Z");
//};

//bool structure_seams_is_root_cluster_reference(long, unsigned long, struct s_cluster_reference)
//{
//    mangled_ppc("?structure_seams_is_root_cluster_reference@@YA_NJKUs_cluster_reference@@@Z");
//};

//class c_seam_connected_cluster_references structure_seams_connected_cluster_references_get(long, struct s_cluster_reference, bool)
//{
//    mangled_ppc("?structure_seams_connected_cluster_references_get@@YA?AVc_seam_connected_cluster_references@@JUs_cluster_reference@@_N@Z");
//};

//class c_seam_connected_cluster_references structure_seams_connected_cluster_references_get(long, long, bool)
//{
//    mangled_ppc("?structure_seams_connected_cluster_references_get@@YA?AVc_seam_connected_cluster_references@@JJ_N@Z");
//};

//public: c_seam_connected_cluster_references::c_seam_connected_cluster_references(struct s_cluster_reference const *, long)
//{
//    mangled_ppc("??0c_seam_connected_cluster_references@@QAA@PBUs_cluster_reference@@J@Z");
//};

//class c_seam_connected_cluster_references structure_seams_connected_cluster_references_no_resource_access_get(long, struct s_cluster_reference, bool)
//{
//    mangled_ppc("?structure_seams_connected_cluster_references_no_resource_access_get@@YA?AVc_seam_connected_cluster_references@@JUs_cluster_reference@@_N@Z");
//};

//struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, struct s_cluster_reference)
//{
//    mangled_ppc("?structure_seams_root_cluster_reference_get@@YA?AUs_cluster_reference@@JKU1@@Z");
//};

//struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, long, long)
//{
//    mangled_ppc("?structure_seams_root_cluster_reference_get@@YA?AUs_cluster_reference@@JKJJ@Z");
//};

//struct s_cluster_reference structure_seams_root_cluster_reference_get(long, unsigned long, long, long, long)
//{
//    mangled_ppc("?structure_seams_root_cluster_reference_get@@YA?AUs_cluster_reference@@JKJJJ@Z");
//};

//bool structure_seams_connected_cluster_references_compute(long, struct s_cluster_reference, bool, class c_static_stack<struct s_cluster_reference, 1024> *)
//{
//    mangled_ppc("?structure_seams_connected_cluster_references_compute@@YA_NJUs_cluster_reference@@_NPAV?$c_static_stack@Us_cluster_reference@@$0EAA@@@@Z");
//};

//bool structure_seams_attached_cluster_references_compute(long, struct s_cluster_reference, class c_static_stack<struct s_cluster_reference, 1024> *)
//{
//    mangled_ppc("?structure_seams_attached_cluster_references_compute@@YA_NJUs_cluster_reference@@PAV?$c_static_stack@Us_cluster_reference@@$0EAA@@@@Z");
//};

//struct s_cluster_reference structure_seams_root_cluster_reference_compute(long, struct s_cluster_reference)
//{
//    mangled_ppc("?structure_seams_root_cluster_reference_compute@@YA?AUs_cluster_reference@@JU1@@Z");
//};

//bool structure_seams_have_errors(void)
//{
//    mangled_ppc("?structure_seams_have_errors@@YA_NXZ");
//};

//public: static long s_static_array<struct s_seam_mapping, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_seam_mapping@@$0IA@@@SAJXZ");
//};

//public: static long s_static_array<struct s_identical_instance_reference, 32768>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@SAJXZ");
//};

//?sort_range@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: long c_static_stack<struct s_structure_seam_identifier, 128>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_structure_seam_identifier, 128>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QAAXJ@Z");
//};

//public: void c_static_stack<struct s_structure_seam_identifier, 128>::push_back(struct s_structure_seam_identifier const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QAAXABUs_structure_seam_identifier@@@Z");
//};

//public: struct s_structure_seam_identifier const & c_static_stack<struct s_structure_seam_identifier, 128>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QBAABUs_structure_seam_identifier@@J@Z");
//};

//public: c_static_stack<struct s_structure_seam_identifier, 128>::c_static_stack<struct s_structure_seam_identifier, 128>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_cluster_reference, 1024>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_cluster_reference, 1024>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_cluster_reference, 1024>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_cluster_reference, 1024>::push_back(struct s_cluster_reference const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAAXABUs_cluster_reference@@@Z");
//};

//public: struct s_cluster_reference & c_static_stack<struct s_cluster_reference, 1024>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAAAAUs_cluster_reference@@J@Z");
//};

//public: struct s_cluster_reference * c_static_stack<struct s_cluster_reference, 1024>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAAPAUs_cluster_reference@@J@Z");
//};

//public: c_static_stack<struct s_cluster_reference, 1024>::c_static_stack<struct s_cluster_reference, 1024>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_structure_seam_identifier, 128>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_structure_seam_identifier, 128>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_structure_seam_identifier, 128>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QAAJXZ");
//};

//public: struct s_structure_seam_identifier * c_static_stack<struct s_structure_seam_identifier, 128>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QAAPAUs_structure_seam_identifier@@J@Z");
//};

//public: bool c_static_stack<struct s_cluster_reference, 1024>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_cluster_reference, 1024>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_cluster_reference, 1024>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_cluster_reference@@$0EAA@@@QAAJXZ");
//};

//public: bool c_static_stack<struct s_structure_seam_identifier, 128>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_structure_seam_identifier@@$0IA@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum structure_collision_material::e_flag, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum structure_collision_material::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@structure_collision_material@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@structure_collision_material@@@Z");
//};

//public: struct s_structure_seam_globals * c_opaque_data<struct s_structure_seam_globals, 133148, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_structure_seam_globals@@$0CAIBM@$03@@QAAPAUs_structure_seam_globals@@XZ");
//};

//public: struct s_collision_materials_extant_flags & s_static_array<struct s_collision_materials_extant_flags, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_materials_extant_flags@@$0BA@@@QAAAAUs_collision_materials_extant_flags@@J@Z");
//};

//public: struct s_identical_instance_reference & s_static_array<struct s_identical_instance_reference, 32768>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@QAAAAUs_identical_instance_reference@@J@Z");
//};

//public: struct s_identical_instance_reference & s_static_array<struct s_identical_instance_reference, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_identical_instance_reference@@$0BAA@@@QAAAAUs_identical_instance_reference@@J@Z");
//};

//public: struct s_collision_materials_extant_flags const & s_static_array<struct s_collision_materials_extant_flags, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_collision_materials_extant_flags@@$0BA@@@QBAABUs_collision_materials_extant_flags@@J@Z");
//};

//public: struct s_seam_mapping & s_static_array<struct s_seam_mapping, 128>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@Us_seam_mapping@@$0IA@@@QAAAAUs_seam_mapping@@J@Z");
//};

//public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@QAAAAUs_seam_cluster_mapping@s_seam_mapping@@J@Z");
//};

//public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<short>(short)
//{
//    mangled_ppc("??$element@F@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@QAAAAUs_seam_cluster_mapping@s_seam_mapping@@F@Z");
//};

//public: struct s_seam_mapping const & s_static_array<struct s_seam_mapping, 128>::element<long>(long) const
//{
//    mangled_ppc("??$element@J@?$s_static_array@Us_seam_mapping@@$0IA@@@QBAABUs_seam_mapping@@J@Z");
//};

//public: struct s_seam_mapping::s_seam_cluster_mapping const & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@QBAABUs_seam_cluster_mapping@s_seam_mapping@@J@Z");
//};

//public: struct s_cluster_reference & s_static_array<struct s_cluster_reference, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cluster_reference@@$0EA@@@QAAAAUs_cluster_reference@@J@Z");
//};

//public: struct s_seam_mapping::s_seam_cluster_mapping & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@QAAAAUs_seam_cluster_mapping@s_seam_mapping@@J@Z");
//};

//public: struct s_seam_mapping::s_seam_cluster_mapping const & s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::element<long>(long) const
//{
//    mangled_ppc("??$element@J@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@QBAABUs_seam_cluster_mapping@s_seam_mapping@@J@Z");
//};

//public: struct s_identical_instance_reference const & s_static_array<struct s_identical_instance_reference, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_identical_instance_reference@@$0BAA@@@QBAABUs_identical_instance_reference@@J@Z");
//};

//public: static bool s_static_array<struct s_collision_materials_extant_flags, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_collision_materials_extant_flags@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_identical_instance_reference, 32768>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_identical_instance_reference@@$0IAAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_identical_instance_reference, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_identical_instance_reference@@$0BAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_seam_mapping, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_seam_mapping@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_seam_mapping::s_seam_cluster_mapping, 255>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_seam_cluster_mapping@s_seam_mapping@@$0PP@@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_cluster_reference, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cluster_reference@@$0EA@@@SA_NJ@Z");
//};

