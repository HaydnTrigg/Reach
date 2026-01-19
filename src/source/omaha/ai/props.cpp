/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83942C58; // "except_record_83942C58"
// except_record_839435C0; // "except_record_839435C0"
// struct prop_type *global_prop_types; // "?global_prop_types@@3PAUprop_type@@A"
// enum e_clump_importance *g_stimulus_clump_importance; // "?g_stimulus_clump_importance@@3PAW4e_clump_importance@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_prop_data_allocator::*)(void *)> g_prop_data_allocator; // "?g_prop_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_prop_ref_data_allocator::*)(void *)> g_prop_ref_data_allocator; // "?g_prop_ref_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_tracking_data_allocator::*)(void *)> g_tracking_data_allocator; // "?g_tracking_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_prop_search_data_allocator::*)(void *)> g_prop_search_data_allocator; // "?g_prop_search_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *prop_data; // "?prop_data@@3PAUs_data_array@@A"
// struct s_data_array *prop_ref_data; // "?prop_ref_data@@3PAUs_data_array@@A"
// struct s_data_array *tracking_data; // "?tracking_data@@3PAUs_data_array@@A"
// struct s_data_array *prop_search_data; // "?prop_search_data@@3PAUs_data_array@@A"

// void __tls_set_g_prop_data_allocator(void *);
// void __tls_set_g_prop_ref_data_allocator(void *);
// void __tls_set_g_tracking_data_allocator(void *);
// void __tls_set_g_prop_search_data_allocator(void *);
// void props_initialize(void);
// void props_dispose(void);
// void props_initialize_for_new_map(void);
// void props_dispose_from_old_map(void);
// void prop_ref_delete(long, long, long);
// void prop_state_new(struct prop_state *);
// void prop_view_new(struct prop_view *);
// void prop_view_reset_search(struct prop_view *);
// long prop_track(long, long);
// void prop_remove_tracking(long, long);
// float prop_search_get_max_decay_time(struct s_ai_globals_data const *);
// float prop_search_get_decay_time_ping(struct s_ai_globals_data const *);
// float prop_search_radial_get_radius(struct s_ai_globals_data const *);
// short prop_search_radial_get_shell_count(struct s_ai_globals_data const *);
// short prop_search_radial_get_shell_cell_count(struct s_ai_globals_data const *, short);
// short prop_search_radial_build_cell_index(struct s_ai_globals_data const *, short, short);
// short prop_search_pattern_get_cell_index(struct s_prop_search_pattern const *, union real_point3d const *);
// float prop_search_pattern_get_cell_value(struct s_prop_search_pattern const *, short);
// void prop_search_pattern_ping_cell_decay(struct s_prop_search_pattern *, union real_point3d const *, float);
// void prop_search_pattern_ping_cell_decay(struct s_prop_search_pattern *, short, float);
// void prop_search_pattern_set_radial(struct s_prop_search_pattern *, union real_point3d const *, float);
// long prop_search_new(void);
// void prop_search_clear(long);
// void prop_search_pattern_clear(struct s_prop_search_pattern *);
// void prop_search_delete(long);
// void prop_search_states_update(void);
// bool prop_acknowledge(long, long, bool);
// void prop_unacknowledge(long, long);
// void prop_orphan(long, long, bool);
// void prop_ref_reset_search(long, bool);
// short prop_get_visibility(long, long, bool, struct actor_position_data *, struct actor_position_data const *, bool *, bool *, float *);
// short prop_get_audibility(long, long, struct actor_position_data *, union real_point3d const *, struct s_location const *, short);
// bool prop_can_magically_see(long, long);
// short prop_get_ineffability(long, long, short);
// bool prop_get_battle_vector(long, union vector3d *, bool *);
// bool prop_state_refresh(struct prop_state *, long, short, struct actor_position_data const *);
// bool prop_perceive(long, long, short, long, long, long);
// bool prop_perceive(long, long, short, enum e_prop_stimulus, short, long, long, long);
// void actor_prop_abandon_search(long, long, short);
// void actor_disregard_orphans(long);
// void actor_unacknowledge_orphans(long);
// void actor_prop_update_new_position(long, long, bool);
// bool prop_should_refresh_status(struct prop_ref_datum const *);
// bool prop_should_refresh_state(struct prop_ref_datum const *);
// bool prop_acknowledged_once(struct prop_ref_datum const *);
// struct prop_state * prop_state_get(long);
// struct prop_state * prop_state_get(struct prop_ref_datum const *);
// struct prop_view * prop_view_get(long);
// struct prop_view * prop_view_get(struct prop_ref_datum const *);
// long prop_object_get_actor_index(long);
// long prop_ref_get_acknowledged_by_object_index(long, long);
// long prop_ref_get_by_object_index(long, long);
// long prop_ref_get_by_object_index(long, long, bool, enum e_clump_importance);
// float prop_ref_get_vision_awareness_fraction(struct prop_ref_datum const *);
// void prop_ref_set_vision_awareness_fraction(struct prop_ref_datum *, float);
// float prop_ref_get_awareness(struct prop_ref_datum const *);
// void prop_ref_set_awareness(struct prop_ref_datum *, float);
// long prop_get_target_object_index(long);
// bool prop_allow_state_update(struct prop_datum const *);
// bool pref_uninspected_orphan(struct prop_ref_datum const *);
// bool pref_inspected_orphan(struct prop_ref_datum const *);
// bool pref_unreachable(long);
// bool pref_unassailable(long);
// bool track_prop_ref(struct prop_ref_datum const *);
// bool tracking_prop_ref(struct prop_ref_datum const *);
// bool allow_orphanhood(struct prop_ref_datum const *);
// void tracking_datum_iterator_new(struct tracking_datum_iterator *);
// struct tracking_datum * tracking_datum_iterator_next(struct tracking_datum_iterator *);
// void prop_iterator_new(struct prop_iterator *);
// struct prop_datum * prop_iterator_next(struct prop_iterator *);
// bool prop_essential(long, long);
// float prop_track_weight(long);
// bool tracking_data_cleanup(long, float);
// short actor_flush_prop_tracks(long, float);
// bool pref_acknowledged(struct prop_ref_datum const *);
// bool pref_unacknowledged(struct prop_ref_datum const *);
// bool prop_acknowledged(struct prop_datum const *);
// bool prop_unacknowledged(struct prop_datum const *);
// bool pref_immediate(struct prop_ref_datum const *);
// bool pref_orphaned(struct prop_ref_datum const *);
// bool prop_search_initiated(long, long);
// bool pref_armor_locked(long);
// bool pref_recently_armor_locked(long, long);
// public: void s_static_array<unsigned short, 512>::set_memory(long);
// public: void c_data_iterator<struct s_prop_search_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_prop_search_datum>::next(void);
// public: struct s_prop_search_datum * c_data_iterator<struct s_prop_search_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_prop_search_datum>::get_index(void) const;
// public: unsigned short const & s_static_array<unsigned short, 512>::operator[]<short>(short) const;
// public: unsigned short & s_static_array<unsigned short, 512>::operator[]<short>(short);
// public: static bool s_static_array<unsigned short, 512>::valid<short>(short);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>(void);
// void g_prop_data_allocator::`dynamic atexit destructor'(void);
// void g_prop_ref_data_allocator::`dynamic atexit destructor'(void);
// void g_tracking_data_allocator::`dynamic atexit destructor'(void);
// void g_prop_search_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_prop_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_prop_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_prop_ref_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_tracking_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_tracking_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_prop_search_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z");
//};

//void props_initialize(void)
//{
//    mangled_ppc("?props_initialize@@YAXXZ");
//};

//void props_dispose(void)
//{
//    mangled_ppc("?props_dispose@@YAXXZ");
//};

//void props_initialize_for_new_map(void)
//{
//    mangled_ppc("?props_initialize_for_new_map@@YAXXZ");
//};

//void props_dispose_from_old_map(void)
//{
//    mangled_ppc("?props_dispose_from_old_map@@YAXXZ");
//};

//void prop_ref_delete(long, long, long)
//{
//    mangled_ppc("?prop_ref_delete@@YAXJJJ@Z");
//};

//void prop_state_new(struct prop_state *)
//{
//    mangled_ppc("?prop_state_new@@YAXPAUprop_state@@@Z");
//};

//void prop_view_new(struct prop_view *)
//{
//    mangled_ppc("?prop_view_new@@YAXPAUprop_view@@@Z");
//};

//void prop_view_reset_search(struct prop_view *)
//{
//    mangled_ppc("?prop_view_reset_search@@YAXPAUprop_view@@@Z");
//};

//long prop_track(long, long)
//{
//    mangled_ppc("?prop_track@@YAJJJ@Z");
//};

//void prop_remove_tracking(long, long)
//{
//    mangled_ppc("?prop_remove_tracking@@YAXJJ@Z");
//};

//float prop_search_get_max_decay_time(struct s_ai_globals_data const *)
//{
//    mangled_ppc("?prop_search_get_max_decay_time@@YAMPBUs_ai_globals_data@@@Z");
//};

//float prop_search_get_decay_time_ping(struct s_ai_globals_data const *)
//{
//    mangled_ppc("?prop_search_get_decay_time_ping@@YAMPBUs_ai_globals_data@@@Z");
//};

//float prop_search_radial_get_radius(struct s_ai_globals_data const *)
//{
//    mangled_ppc("?prop_search_radial_get_radius@@YAMPBUs_ai_globals_data@@@Z");
//};

//short prop_search_radial_get_shell_count(struct s_ai_globals_data const *)
//{
//    mangled_ppc("?prop_search_radial_get_shell_count@@YAFPBUs_ai_globals_data@@@Z");
//};

//short prop_search_radial_get_shell_cell_count(struct s_ai_globals_data const *, short)
//{
//    mangled_ppc("?prop_search_radial_get_shell_cell_count@@YAFPBUs_ai_globals_data@@F@Z");
//};

//short prop_search_radial_build_cell_index(struct s_ai_globals_data const *, short, short)
//{
//    mangled_ppc("?prop_search_radial_build_cell_index@@YAFPBUs_ai_globals_data@@FF@Z");
//};

//short prop_search_pattern_get_cell_index(struct s_prop_search_pattern const *, union real_point3d const *)
//{
//    mangled_ppc("?prop_search_pattern_get_cell_index@@YAFPBUs_prop_search_pattern@@PBTreal_point3d@@@Z");
//};

//float prop_search_pattern_get_cell_value(struct s_prop_search_pattern const *, short)
//{
//    mangled_ppc("?prop_search_pattern_get_cell_value@@YAMPBUs_prop_search_pattern@@F@Z");
//};

//void prop_search_pattern_ping_cell_decay(struct s_prop_search_pattern *, union real_point3d const *, float)
//{
//    mangled_ppc("?prop_search_pattern_ping_cell_decay@@YAXPAUs_prop_search_pattern@@PBTreal_point3d@@M@Z");
//};

//void prop_search_pattern_ping_cell_decay(struct s_prop_search_pattern *, short, float)
//{
//    mangled_ppc("?prop_search_pattern_ping_cell_decay@@YAXPAUs_prop_search_pattern@@FM@Z");
//};

//void prop_search_pattern_set_radial(struct s_prop_search_pattern *, union real_point3d const *, float)
//{
//    mangled_ppc("?prop_search_pattern_set_radial@@YAXPAUs_prop_search_pattern@@PBTreal_point3d@@M@Z");
//};

//long prop_search_new(void)
//{
//    mangled_ppc("?prop_search_new@@YAJXZ");
//};

//void prop_search_clear(long)
//{
//    mangled_ppc("?prop_search_clear@@YAXJ@Z");
//};

//void prop_search_pattern_clear(struct s_prop_search_pattern *)
//{
//    mangled_ppc("?prop_search_pattern_clear@@YAXPAUs_prop_search_pattern@@@Z");
//};

//void prop_search_delete(long)
//{
//    mangled_ppc("?prop_search_delete@@YAXJ@Z");
//};

//void prop_search_states_update(void)
//{
//    mangled_ppc("?prop_search_states_update@@YAXXZ");
//};

//bool prop_acknowledge(long, long, bool)
//{
//    mangled_ppc("?prop_acknowledge@@YA_NJJ_N@Z");
//};

//void prop_unacknowledge(long, long)
//{
//    mangled_ppc("?prop_unacknowledge@@YAXJJ@Z");
//};

//void prop_orphan(long, long, bool)
//{
//    mangled_ppc("?prop_orphan@@YAXJJ_N@Z");
//};

//void prop_ref_reset_search(long, bool)
//{
//    mangled_ppc("?prop_ref_reset_search@@YAXJ_N@Z");
//};

//short prop_get_visibility(long, long, bool, struct actor_position_data *, struct actor_position_data const *, bool *, bool *, float *)
//{
//    mangled_ppc("?prop_get_visibility@@YAFJJ_NPAUactor_position_data@@PBU1@PA_N3PAM@Z");
//};

//short prop_get_audibility(long, long, struct actor_position_data *, union real_point3d const *, struct s_location const *, short)
//{
//    mangled_ppc("?prop_get_audibility@@YAFJJPAUactor_position_data@@PBTreal_point3d@@PBUs_location@@F@Z");
//};

//bool prop_can_magically_see(long, long)
//{
//    mangled_ppc("?prop_can_magically_see@@YA_NJJ@Z");
//};

//short prop_get_ineffability(long, long, short)
//{
//    mangled_ppc("?prop_get_ineffability@@YAFJJF@Z");
//};

//bool prop_get_battle_vector(long, union vector3d *, bool *)
//{
//    mangled_ppc("?prop_get_battle_vector@@YA_NJPATvector3d@@PA_N@Z");
//};

//bool prop_state_refresh(struct prop_state *, long, short, struct actor_position_data const *)
//{
//    mangled_ppc("?prop_state_refresh@@YA_NPAUprop_state@@JFPBUactor_position_data@@@Z");
//};

//bool prop_perceive(long, long, short, long, long, long)
//{
//    mangled_ppc("?prop_perceive@@YA_NJJFJJJ@Z");
//};

//bool prop_perceive(long, long, short, enum e_prop_stimulus, short, long, long, long)
//{
//    mangled_ppc("?prop_perceive@@YA_NJJFW4e_prop_stimulus@@FJJJ@Z");
//};

//void actor_prop_abandon_search(long, long, short)
//{
//    mangled_ppc("?actor_prop_abandon_search@@YAXJJF@Z");
//};

//void actor_disregard_orphans(long)
//{
//    mangled_ppc("?actor_disregard_orphans@@YAXJ@Z");
//};

//void actor_unacknowledge_orphans(long)
//{
//    mangled_ppc("?actor_unacknowledge_orphans@@YAXJ@Z");
//};

//void actor_prop_update_new_position(long, long, bool)
//{
//    mangled_ppc("?actor_prop_update_new_position@@YAXJJ_N@Z");
//};

//bool prop_should_refresh_status(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_should_refresh_status@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool prop_should_refresh_state(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_should_refresh_state@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool prop_acknowledged_once(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_acknowledged_once@@YA_NPBUprop_ref_datum@@@Z");
//};

//struct prop_state * prop_state_get(long)
//{
//    mangled_ppc("?prop_state_get@@YAPAUprop_state@@J@Z");
//};

//struct prop_state * prop_state_get(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_state_get@@YAPAUprop_state@@PBUprop_ref_datum@@@Z");
//};

//struct prop_view * prop_view_get(long)
//{
//    mangled_ppc("?prop_view_get@@YAPAUprop_view@@J@Z");
//};

//struct prop_view * prop_view_get(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_view_get@@YAPAUprop_view@@PBUprop_ref_datum@@@Z");
//};

//long prop_object_get_actor_index(long)
//{
//    mangled_ppc("?prop_object_get_actor_index@@YAJJ@Z");
//};

//long prop_ref_get_acknowledged_by_object_index(long, long)
//{
//    mangled_ppc("?prop_ref_get_acknowledged_by_object_index@@YAJJJ@Z");
//};

//long prop_ref_get_by_object_index(long, long)
//{
//    mangled_ppc("?prop_ref_get_by_object_index@@YAJJJ@Z");
//};

//long prop_ref_get_by_object_index(long, long, bool, enum e_clump_importance)
//{
//    mangled_ppc("?prop_ref_get_by_object_index@@YAJJJ_NW4e_clump_importance@@@Z");
//};

//float prop_ref_get_vision_awareness_fraction(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_ref_get_vision_awareness_fraction@@YAMPBUprop_ref_datum@@@Z");
//};

//void prop_ref_set_vision_awareness_fraction(struct prop_ref_datum *, float)
//{
//    mangled_ppc("?prop_ref_set_vision_awareness_fraction@@YAXPAUprop_ref_datum@@M@Z");
//};

//float prop_ref_get_awareness(struct prop_ref_datum const *)
//{
//    mangled_ppc("?prop_ref_get_awareness@@YAMPBUprop_ref_datum@@@Z");
//};

//void prop_ref_set_awareness(struct prop_ref_datum *, float)
//{
//    mangled_ppc("?prop_ref_set_awareness@@YAXPAUprop_ref_datum@@M@Z");
//};

//long prop_get_target_object_index(long)
//{
//    mangled_ppc("?prop_get_target_object_index@@YAJJ@Z");
//};

//bool prop_allow_state_update(struct prop_datum const *)
//{
//    mangled_ppc("?prop_allow_state_update@@YA_NPBUprop_datum@@@Z");
//};

//bool pref_uninspected_orphan(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_uninspected_orphan@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool pref_inspected_orphan(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_inspected_orphan@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool pref_unreachable(long)
//{
//    mangled_ppc("?pref_unreachable@@YA_NJ@Z");
//};

//bool pref_unassailable(long)
//{
//    mangled_ppc("?pref_unassailable@@YA_NJ@Z");
//};

//bool track_prop_ref(struct prop_ref_datum const *)
//{
//    mangled_ppc("?track_prop_ref@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool tracking_prop_ref(struct prop_ref_datum const *)
//{
//    mangled_ppc("?tracking_prop_ref@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool allow_orphanhood(struct prop_ref_datum const *)
//{
//    mangled_ppc("?allow_orphanhood@@YA_NPBUprop_ref_datum@@@Z");
//};

//void tracking_datum_iterator_new(struct tracking_datum_iterator *)
//{
//    mangled_ppc("?tracking_datum_iterator_new@@YAXPAUtracking_datum_iterator@@@Z");
//};

//struct tracking_datum * tracking_datum_iterator_next(struct tracking_datum_iterator *)
//{
//    mangled_ppc("?tracking_datum_iterator_next@@YAPAUtracking_datum@@PAUtracking_datum_iterator@@@Z");
//};

//void prop_iterator_new(struct prop_iterator *)
//{
//    mangled_ppc("?prop_iterator_new@@YAXPAUprop_iterator@@@Z");
//};

//struct prop_datum * prop_iterator_next(struct prop_iterator *)
//{
//    mangled_ppc("?prop_iterator_next@@YAPAUprop_datum@@PAUprop_iterator@@@Z");
//};

//bool prop_essential(long, long)
//{
//    mangled_ppc("?prop_essential@@YA_NJJ@Z");
//};

//float prop_track_weight(long)
//{
//    mangled_ppc("?prop_track_weight@@YAMJ@Z");
//};

//bool tracking_data_cleanup(long, float)
//{
//    mangled_ppc("?tracking_data_cleanup@@YA_NJM@Z");
//};

//short actor_flush_prop_tracks(long, float)
//{
//    mangled_ppc("?actor_flush_prop_tracks@@YAFJM@Z");
//};

//bool pref_acknowledged(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_acknowledged@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool pref_unacknowledged(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_unacknowledged@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool prop_acknowledged(struct prop_datum const *)
//{
//    mangled_ppc("?prop_acknowledged@@YA_NPBUprop_datum@@@Z");
//};

//bool prop_unacknowledged(struct prop_datum const *)
//{
//    mangled_ppc("?prop_unacknowledged@@YA_NPBUprop_datum@@@Z");
//};

//bool pref_immediate(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_immediate@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool pref_orphaned(struct prop_ref_datum const *)
//{
//    mangled_ppc("?pref_orphaned@@YA_NPBUprop_ref_datum@@@Z");
//};

//bool prop_search_initiated(long, long)
//{
//    mangled_ppc("?prop_search_initiated@@YA_NJJ@Z");
//};

//bool pref_armor_locked(long)
//{
//    mangled_ppc("?pref_armor_locked@@YA_NJ@Z");
//};

//bool pref_recently_armor_locked(long, long)
//{
//    mangled_ppc("?pref_recently_armor_locked@@YA_NJJ@Z");
//};

//public: void s_static_array<unsigned short, 512>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@G$0CAA@@@QAAXJ@Z");
//};

//public: void c_data_iterator<struct s_prop_search_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_prop_search_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_prop_search_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_prop_search_datum@@@@QAA_NXZ");
//};

//public: struct s_prop_search_datum * c_data_iterator<struct s_prop_search_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_prop_search_datum@@@@QBAPAUs_prop_search_datum@@XZ");
//};

//public: long c_data_iterator<struct s_prop_search_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_prop_search_datum@@@@QBAJXZ");
//};

//public: unsigned short const & s_static_array<unsigned short, 512>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@G$0CAA@@@QBAABGF@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 512>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@G$0CAA@@@QAAAAGF@Z");
//};

//public: static bool s_static_array<unsigned short, 512>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@G$0CAA@@@SA_NF@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_ref_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_ref_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_tracking_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_tracking_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_prop_search_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_prop_search_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_prop_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_prop_data_allocator@@YAXXZ");
//};

//void g_prop_ref_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_prop_ref_data_allocator@@YAXXZ");
//};

//void g_tracking_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_tracking_data_allocator@@YAXXZ");
//};

//void g_prop_search_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_prop_search_data_allocator@@YAXXZ");
//};

