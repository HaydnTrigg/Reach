/* ---------- headers */

#include "omaha\ai\ai_sync_action_arranger.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_838A7850; // "except_record_838A7850"
// except_record_838AA750; // "except_record_838AA750"
// except_record_838AC218; // "except_record_838AC218"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)> g_ai_sync_action_arranger_data_allocator; // "?g_ai_sync_action_arranger_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *ai_sync_action_arranger_data; // "?ai_sync_action_arranger_data@@3PAUs_data_array@@A"

// void __tls_set_g_ai_sync_action_arranger_data_allocator(void *);
// void ai_sync_actions_initialize(void);
// void ai_sync_actions_initialize_for_new_map(void);
// void ai_sync_actions_dispose_from_old_map(void);
// void ai_sync_actions_handle_deleted_actor(long);
// void local_ai_sync_actions_handle_interrupted_actor(long, bool);
// void ai_sync_actions_handle_interrupted_object(long, bool);
// void ai_sync_actions_handle_interrupted_actor(long);
// void ai_sync_action_arranger_handle_deleted_object(long);
// void ai_sync_actions_handle_interrupted_object(long);
// void ai_sync_action_arranger_handle_animation_event(long, class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>);
// long ai_sync_action_arranger_new(void);
// void ai_sync_action_arranger_state_new(struct s_ai_sync_action_arranger_state *);
// void ai_sync_action_arranger_delete(long, bool);
// bool ai_sync_action_arranger_search(long, long, long *, long, float, struct s_ai_sync_action_arranger_state *);
// bool ai_sync_action_arranger_setup(long, long, long, long *, long, union real_point3d const *, float, long, union real_point3d *, union euler_angles2d *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>);
// bool ai_sync_action_arranger_setup_internal(struct s_ai_sync_action_arranger_state *, long, long, long *, long, union real_point3d const *, float, long, union real_point3d *, union euler_angles2d *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>);
// void ai_sync_action_arranger_begin(long);
// void ai_sync_action_arranger_begin(long, long);
// bool ai_sync_action_arranger_start_sync_action(long);
// void ai_sync_action_arranger_cancel_object_sync_action(long, long, bool);
// bool ai_sync_action_arranger_interrupt_sync_action_motor_task(long);
// bool ai_sync_action_arranger_cast_roles(struct s_ai_sync_action_arranger_state *, long, long, long *, long, union real_point3d const *, float, long, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>);
// bool ai_sync_action_arranger_cast_initiator(struct s_ai_sync_action_arranger_state *, long, struct s_animation_sync_action const *);
// long ai_sync_action_arranger_cast_objects(struct s_ai_sync_action_arranger_state *, long, long, bool, bool, long *, long *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>);
// struct s_animation_sync_action_same_type_participant const * ai_sync_action_arranger_cast_object(long, long, struct s_ai_sync_action_arranger_state *, bool, long, long);
// long ai_sync_action_arranger_cast_object_recursive(long, long, struct s_ai_sync_action_arranger_state *, bool, long, long, struct s_animation_sync_action_same_type_participant const **);
// bool ai_sync_action_arranger_compute_participant_targets(struct s_ai_sync_action_arranger_state *, union real_point3d *, union euler_angles2d *, bool, float);
// void arranger_make_origin_relative_to_participant(struct s_ai_sync_action_arranger_state *, struct s_ai_sync_action_participant *);
// void arranger_make_participant_targets_relative_to_sync_action_origin(struct s_ai_sync_action_arranger_state *);
// void arranger_align_participant_targets_along_participant_facing(struct s_ai_sync_action_arranger_state *, short);
// bool arranger_compute_participant_pathfinding_targets(struct s_ai_sync_action_arranger_state *, bool);
// void ai_sync_action_arranger_score_state(struct s_ai_sync_action_arranger_state *, float);
// void ai_sync_action_arranger_set_participant_active(long, short, bool);
// void ai_sync_action_arranger_add_participant(struct s_ai_sync_action_arranger_state *, long, long, class c_animation_id, bool, union real_point3d const *, union vector3d const *);
// long ai_sync_action_arranger_find_participant_by_role(struct s_ai_sync_action_arranger_state *, long, short, short);
// bool ai_sync_action_has_scenery(struct s_animation_sync_action const *, bool);
// bool ai_sync_action_arranger_datum_available_to_current_thread(void);
// long ai_sync_action_arranger_find_participant_by_object(long, long);
// long ai_sync_action_arranger_get_are_all_actors_in_state(long, enum e_actor_sync_action_state);
// long ai_sync_action_arranger_get_are_all_participants_done_with_sync_action(long);
// void ai_sync_action_arranger_iterator_new(struct ai_sync_action_arranger_iterator *, bool);
// struct s_ai_sync_action_arranger_datum * ai_sync_action_arranger_iterator_next(struct ai_sync_action_arranger_iterator *);
// bool ai_sync_action_arranger_update_state_machine(long, class c_arrange_sync_action_data *);
// void ai_arranger_setup_aligning_state(long, class c_arrange_sync_action_data *);
// public: void c_data_iterator<struct s_ai_sync_action_arranger_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_ai_sync_action_arranger_datum>::next(void);
// public: struct s_ai_sync_action_arranger_datum * c_data_iterator<struct s_ai_sync_action_arranger_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_ai_sync_action_arranger_datum>::get_index(void) const;
// public: void c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_ai_sync_action_participant_flags, bool);
// public: bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_ai_sync_action_arranger_setup_flags) const;
// void remove_element_from_list<struct s_ai_sync_action_participant>(struct s_ai_sync_action_participant *, long, long *);
// void remove_element_from_list<long>(long *, long, long *);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>(void);
// void g_ai_sync_action_arranger_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_ai_sync_action_arranger_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z");
//};

//void ai_sync_actions_initialize(void)
//{
//    mangled_ppc("?ai_sync_actions_initialize@@YAXXZ");
//};

//void ai_sync_actions_initialize_for_new_map(void)
//{
//    mangled_ppc("?ai_sync_actions_initialize_for_new_map@@YAXXZ");
//};

//void ai_sync_actions_dispose_from_old_map(void)
//{
//    mangled_ppc("?ai_sync_actions_dispose_from_old_map@@YAXXZ");
//};

//void ai_sync_actions_handle_deleted_actor(long)
//{
//    mangled_ppc("?ai_sync_actions_handle_deleted_actor@@YAXJ@Z");
//};

//void local_ai_sync_actions_handle_interrupted_actor(long, bool)
//{
//    mangled_ppc("?local_ai_sync_actions_handle_interrupted_actor@@YAXJ_N@Z");
//};

//void ai_sync_actions_handle_interrupted_object(long, bool)
//{
//    mangled_ppc("?ai_sync_actions_handle_interrupted_object@@YAXJ_N@Z");
//};

//void ai_sync_actions_handle_interrupted_actor(long)
//{
//    mangled_ppc("?ai_sync_actions_handle_interrupted_actor@@YAXJ@Z");
//};

//void ai_sync_action_arranger_handle_deleted_object(long)
//{
//    mangled_ppc("?ai_sync_action_arranger_handle_deleted_object@@YAXJ@Z");
//};

//void ai_sync_actions_handle_interrupted_object(long)
//{
//    mangled_ppc("?ai_sync_actions_handle_interrupted_object@@YAXJ@Z");
//};

//void ai_sync_action_arranger_handle_animation_event(long, class c_flags<enum e_animation_frame_event_types, unsigned long, 23, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?ai_sync_action_arranger_handle_animation_event@@YAXJV?$c_flags@W4e_animation_frame_event_types@@K$0BH@Us_default_enum_string_resolver@@@@@Z");
//};

//long ai_sync_action_arranger_new(void)
//{
//    mangled_ppc("?ai_sync_action_arranger_new@@YAJXZ");
//};

//void ai_sync_action_arranger_state_new(struct s_ai_sync_action_arranger_state *)
//{
//    mangled_ppc("?ai_sync_action_arranger_state_new@@YAXPAUs_ai_sync_action_arranger_state@@@Z");
//};

//void ai_sync_action_arranger_delete(long, bool)
//{
//    mangled_ppc("?ai_sync_action_arranger_delete@@YAXJ_N@Z");
//};

//bool ai_sync_action_arranger_search(long, long, long *, long, float, struct s_ai_sync_action_arranger_state *)
//{
//    mangled_ppc("?ai_sync_action_arranger_search@@YA_NJJPAJJMPAUs_ai_sync_action_arranger_state@@@Z");
//};

//bool ai_sync_action_arranger_setup(long, long, long, long *, long, union real_point3d const *, float, long, union real_point3d *, union euler_angles2d *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?ai_sync_action_arranger_setup@@YA_NJJJPAJJPBTreal_point3d@@MJPAT1@PATeuler_angles2d@@V?$c_flags@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool ai_sync_action_arranger_setup_internal(struct s_ai_sync_action_arranger_state *, long, long, long *, long, union real_point3d const *, float, long, union real_point3d *, union euler_angles2d *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?ai_sync_action_arranger_setup_internal@@YA_NPAUs_ai_sync_action_arranger_state@@JJPAJJPBTreal_point3d@@MJPAT2@PATeuler_angles2d@@V?$c_flags@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//void ai_sync_action_arranger_begin(long)
//{
//    mangled_ppc("?ai_sync_action_arranger_begin@@YAXJ@Z");
//};

//void ai_sync_action_arranger_begin(long, long)
//{
//    mangled_ppc("?ai_sync_action_arranger_begin@@YAXJJ@Z");
//};

//bool ai_sync_action_arranger_start_sync_action(long)
//{
//    mangled_ppc("?ai_sync_action_arranger_start_sync_action@@YA_NJ@Z");
//};

//void ai_sync_action_arranger_cancel_object_sync_action(long, long, bool)
//{
//    mangled_ppc("?ai_sync_action_arranger_cancel_object_sync_action@@YAXJJ_N@Z");
//};

//bool ai_sync_action_arranger_interrupt_sync_action_motor_task(long)
//{
//    mangled_ppc("?ai_sync_action_arranger_interrupt_sync_action_motor_task@@YA_NJ@Z");
//};

//bool ai_sync_action_arranger_cast_roles(struct s_ai_sync_action_arranger_state *, long, long, long *, long, union real_point3d const *, float, long, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?ai_sync_action_arranger_cast_roles@@YA_NPAUs_ai_sync_action_arranger_state@@JJPAJJPBTreal_point3d@@MJV?$c_flags@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool ai_sync_action_arranger_cast_initiator(struct s_ai_sync_action_arranger_state *, long, struct s_animation_sync_action const *)
//{
//    mangled_ppc("?ai_sync_action_arranger_cast_initiator@@YA_NPAUs_ai_sync_action_arranger_state@@JPBUs_animation_sync_action@@@Z");
//};

//long ai_sync_action_arranger_cast_objects(struct s_ai_sync_action_arranger_state *, long, long, bool, bool, long *, long *, class c_flags<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?ai_sync_action_arranger_cast_objects@@YAJPAUs_ai_sync_action_arranger_state@@JJ_N1PAJ2V?$c_flags@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//struct s_animation_sync_action_same_type_participant const * ai_sync_action_arranger_cast_object(long, long, struct s_ai_sync_action_arranger_state *, bool, long, long)
//{
//    mangled_ppc("?ai_sync_action_arranger_cast_object@@YAPBUs_animation_sync_action_same_type_participant@@JJPAUs_ai_sync_action_arranger_state@@_NJJ@Z");
//};

//long ai_sync_action_arranger_cast_object_recursive(long, long, struct s_ai_sync_action_arranger_state *, bool, long, long, struct s_animation_sync_action_same_type_participant const **)
//{
//    mangled_ppc("?ai_sync_action_arranger_cast_object_recursive@@YAJJJPAUs_ai_sync_action_arranger_state@@_NJJPAPBUs_animation_sync_action_same_type_participant@@@Z");
//};

//bool ai_sync_action_arranger_compute_participant_targets(struct s_ai_sync_action_arranger_state *, union real_point3d *, union euler_angles2d *, bool, float)
//{
//    mangled_ppc("?ai_sync_action_arranger_compute_participant_targets@@YA_NPAUs_ai_sync_action_arranger_state@@PATreal_point3d@@PATeuler_angles2d@@_NM@Z");
//};

//void arranger_make_origin_relative_to_participant(struct s_ai_sync_action_arranger_state *, struct s_ai_sync_action_participant *)
//{
//    mangled_ppc("?arranger_make_origin_relative_to_participant@@YAXPAUs_ai_sync_action_arranger_state@@PAUs_ai_sync_action_participant@@@Z");
//};

//void arranger_make_participant_targets_relative_to_sync_action_origin(struct s_ai_sync_action_arranger_state *)
//{
//    mangled_ppc("?arranger_make_participant_targets_relative_to_sync_action_origin@@YAXPAUs_ai_sync_action_arranger_state@@@Z");
//};

//void arranger_align_participant_targets_along_participant_facing(struct s_ai_sync_action_arranger_state *, short)
//{
//    mangled_ppc("?arranger_align_participant_targets_along_participant_facing@@YAXPAUs_ai_sync_action_arranger_state@@F@Z");
//};

//bool arranger_compute_participant_pathfinding_targets(struct s_ai_sync_action_arranger_state *, bool)
//{
//    mangled_ppc("?arranger_compute_participant_pathfinding_targets@@YA_NPAUs_ai_sync_action_arranger_state@@_N@Z");
//};

//void ai_sync_action_arranger_score_state(struct s_ai_sync_action_arranger_state *, float)
//{
//    mangled_ppc("?ai_sync_action_arranger_score_state@@YAXPAUs_ai_sync_action_arranger_state@@M@Z");
//};

//void ai_sync_action_arranger_set_participant_active(long, short, bool)
//{
//    mangled_ppc("?ai_sync_action_arranger_set_participant_active@@YAXJF_N@Z");
//};

//void ai_sync_action_arranger_add_participant(struct s_ai_sync_action_arranger_state *, long, long, class c_animation_id, bool, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?ai_sync_action_arranger_add_participant@@YAXPAUs_ai_sync_action_arranger_state@@JJVc_animation_id@@_NPBTreal_point3d@@PBTvector3d@@@Z");
//};

//long ai_sync_action_arranger_find_participant_by_role(struct s_ai_sync_action_arranger_state *, long, short, short)
//{
//    mangled_ppc("?ai_sync_action_arranger_find_participant_by_role@@YAJPAUs_ai_sync_action_arranger_state@@JFF@Z");
//};

//bool ai_sync_action_has_scenery(struct s_animation_sync_action const *, bool)
//{
//    mangled_ppc("?ai_sync_action_has_scenery@@YA_NPBUs_animation_sync_action@@_N@Z");
//};

//bool ai_sync_action_arranger_datum_available_to_current_thread(void)
//{
//    mangled_ppc("?ai_sync_action_arranger_datum_available_to_current_thread@@YA_NXZ");
//};

//long ai_sync_action_arranger_find_participant_by_object(long, long)
//{
//    mangled_ppc("?ai_sync_action_arranger_find_participant_by_object@@YAJJJ@Z");
//};

//long ai_sync_action_arranger_get_are_all_actors_in_state(long, enum e_actor_sync_action_state)
//{
//    mangled_ppc("?ai_sync_action_arranger_get_are_all_actors_in_state@@YAJJW4e_actor_sync_action_state@@@Z");
//};

//long ai_sync_action_arranger_get_are_all_participants_done_with_sync_action(long)
//{
//    mangled_ppc("?ai_sync_action_arranger_get_are_all_participants_done_with_sync_action@@YAJJ@Z");
//};

//void ai_sync_action_arranger_iterator_new(struct ai_sync_action_arranger_iterator *, bool)
//{
//    mangled_ppc("?ai_sync_action_arranger_iterator_new@@YAXPAUai_sync_action_arranger_iterator@@_N@Z");
//};

//struct s_ai_sync_action_arranger_datum * ai_sync_action_arranger_iterator_next(struct ai_sync_action_arranger_iterator *)
//{
//    mangled_ppc("?ai_sync_action_arranger_iterator_next@@YAPAUs_ai_sync_action_arranger_datum@@PAUai_sync_action_arranger_iterator@@@Z");
//};

//bool ai_sync_action_arranger_update_state_machine(long, class c_arrange_sync_action_data *)
//{
//    mangled_ppc("?ai_sync_action_arranger_update_state_machine@@YA_NJPAVc_arrange_sync_action_data@@@Z");
//};

//void ai_arranger_setup_aligning_state(long, class c_arrange_sync_action_data *)
//{
//    mangled_ppc("?ai_arranger_setup_aligning_state@@YAXJPAVc_arrange_sync_action_data@@@Z");
//};

//public: void c_data_iterator<struct s_ai_sync_action_arranger_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_ai_sync_action_arranger_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_ai_sync_action_arranger_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_ai_sync_action_arranger_datum@@@@QAA_NXZ");
//};

//public: struct s_ai_sync_action_arranger_datum * c_data_iterator<struct s_ai_sync_action_arranger_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_ai_sync_action_arranger_datum@@@@QBAPAUs_ai_sync_action_arranger_datum@@XZ");
//};

//public: long c_data_iterator<struct s_ai_sync_action_arranger_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_ai_sync_action_arranger_datum@@@@QBAJXZ");
//};

//public: void c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_ai_sync_action_participant_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_ai_sync_action_participant_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_ai_sync_action_arranger_setup_flags, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_ai_sync_action_arranger_setup_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_ai_sync_action_arranger_setup_flags@@K$04Us_default_enum_string_resolver@@@@QBA_NW4e_ai_sync_action_arranger_setup_flags@@@Z");
//};

//void remove_element_from_list<struct s_ai_sync_action_participant>(struct s_ai_sync_action_participant *, long, long *)
//{
//    mangled_ppc("??$remove_element_from_list@Us_ai_sync_action_participant@@@@YAXPAUs_ai_sync_action_participant@@JPAJ@Z");
//};

//void remove_element_from_list<long>(long *, long, long *)
//{
//    mangled_ppc("??$remove_element_from_list@J@@YAXPAJJ0@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_sync_action_arranger_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_sync_action_arranger_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_ai_sync_action_arranger_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ai_sync_action_arranger_data_allocator@@YAXXZ");
//};

