/* ---------- headers */

#include "omaha\devices\devices.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool debug_objects_devices; // "?debug_objects_devices@@3_NA"
// bool device_groups_non_gamestate; // "?device_groups_non_gamestate@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_device_groups_data_allocator::*)(void *)> g_device_groups_data_allocator; // "?g_device_groups_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *device_groups_data; // "?device_groups_data@@3PAUs_data_array@@A"

// void __tls_set_g_device_groups_data_allocator(void *);
// void devices_initialize(void);
// void devices_dispose(void);
// void devices_initialize_for_new_map(void);
// void devices_dispose_from_old_map(void);
// bool device_new(long, struct s_object_placement_data *, bool *);
// void device_unplace(long);
// void device_delete(long);
// bool device_update(long);
// bool device_compute_function_value(long, long, long, float *, bool *, bool *);
// void device_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *);
// void device_render_debug(long);
// long device_group_get_from_scenario_index(short);
// bool device_set_desired_position(long, float);
// float device_get_position(long);
// void device_set_power(long, float);
// float device_get_power(long);
// bool device_group_set_desired_value(long, long, float);
// void device_set_actual_position(long, float);
// bool device_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *);
// void device_set_never_appears_locked(long, bool);
// void device_groups_reset(void);
// void device_group_set_actual_value(long, float);
// void device_set_animation_changed(long);
// void device_set_position_transition_time(long, float);
// void device_one_sided_set(long, bool);
// void device_one_sided_for_player_set(long, bool);
// void device_ignore_player_set(long, bool);
// void device_operates_automatically_set(long, bool);
// void device_closes_automatically_set(long, bool);
// void device_group_change_only_once_more_set(long, bool);
// float device_group_get_value(long);
// void device_place(long, struct s_scenario_device const *);
// void device_add_control_children_to_groups(long);
// long device_get_action_string(long);
// void device_touched(long, long);
// bool device_allow_interaction(long, union real_point3d const *, union vector3d const *, float);
// bool device_can_change_position(long);
// bool device_frontfacing(long, union real_point3d const *, union vector3d const *);
// void device_effect_new(long, long);
// long device_group_new(long, float, unsigned long);
// void device_group_delete(long, long);
// void create_initial_device_groups(void);
// void clear_device_animation_control(struct s_device_animation_control *);
// bool update_device_animation_control(long, struct s_device_animation_control *, class c_animation_manager const *, class c_animation_channel *, float, float *);
// void setup_device_animation_control(struct s_device_animation_control *, float, float, float, float, float, float);
// long device_get_position_track(long);
// bool device_set_position_track(long, long, float);
// bool device_set_overlay_track(long, long);
// void device_animate_position(long, float, float, float, float, bool);
// void device_set_position_animation_control_direct(long, struct s_device_animation_control const *);
// void device_animate_overlay(long, float, float, float, float);
// bool device_setup_position_animation_channel(long, long);
// bool device_setup_power_and_overlay_track_animation_channel(long, long);
// void device_reset_animation_channels(long);
// bool device_get_touch_position(long, long, union real_point3d const *, union real_point3d *, union vector3d *);
// public: void c_object_iterator<struct device_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct device_datum>::next(void);
// public: struct device_datum * c_object_iterator<struct device_datum>::get_datum(void);
// public: void c_data_iterator<struct device_group_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct device_group_datum>::next(void);
// public: struct device_group_datum * c_data_iterator<struct device_group_datum>::get_datum(void) const;
// public: long c_data_iterator<struct device_group_datum>::get_index(void) const;
// void simulation_action_object_update<enum e_simulation_device_update_flag>(long, enum e_simulation_device_update_flag);
// public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_device_update_flag);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>(void);
// void g_device_groups_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_device_groups_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z");
//};

//void devices_initialize(void)
//{
//    mangled_ppc("?devices_initialize@@YAXXZ");
//};

//void devices_dispose(void)
//{
//    mangled_ppc("?devices_dispose@@YAXXZ");
//};

//void devices_initialize_for_new_map(void)
//{
//    mangled_ppc("?devices_initialize_for_new_map@@YAXXZ");
//};

//void devices_dispose_from_old_map(void)
//{
//    mangled_ppc("?devices_dispose_from_old_map@@YAXXZ");
//};

//bool device_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?device_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void device_unplace(long)
//{
//    mangled_ppc("?device_unplace@@YAXJ@Z");
//};

//void device_delete(long)
//{
//    mangled_ppc("?device_delete@@YAXJ@Z");
//};

//bool device_update(long)
//{
//    mangled_ppc("?device_update@@YA_NJ@Z");
//};

//bool device_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?device_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//void device_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *)
//{
//    mangled_ppc("?device_preprocess_node_orientations@@YAXJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@@Z");
//};

//void device_render_debug(long)
//{
//    mangled_ppc("?device_render_debug@@YAXJ@Z");
//};

//long device_group_get_from_scenario_index(short)
//{
//    mangled_ppc("?device_group_get_from_scenario_index@@YAJF@Z");
//};

//bool device_set_desired_position(long, float)
//{
//    mangled_ppc("?device_set_desired_position@@YA_NJM@Z");
//};

//float device_get_position(long)
//{
//    mangled_ppc("?device_get_position@@YAMJ@Z");
//};

//void device_set_power(long, float)
//{
//    mangled_ppc("?device_set_power@@YAXJM@Z");
//};

//float device_get_power(long)
//{
//    mangled_ppc("?device_get_power@@YAMJ@Z");
//};

//bool device_group_set_desired_value(long, long, float)
//{
//    mangled_ppc("?device_group_set_desired_value@@YA_NJJM@Z");
//};

//void device_set_actual_position(long, float)
//{
//    mangled_ppc("?device_set_actual_position@@YAXJM@Z");
//};

//bool device_compute_activation(long, struct s_game_cluster_bit_vectors const *, bool *)
//{
//    mangled_ppc("?device_compute_activation@@YA_NJPBUs_game_cluster_bit_vectors@@PA_N@Z");
//};

//void device_set_never_appears_locked(long, bool)
//{
//    mangled_ppc("?device_set_never_appears_locked@@YAXJ_N@Z");
//};

//void device_groups_reset(void)
//{
//    mangled_ppc("?device_groups_reset@@YAXXZ");
//};

//void device_group_set_actual_value(long, float)
//{
//    mangled_ppc("?device_group_set_actual_value@@YAXJM@Z");
//};

//void device_set_animation_changed(long)
//{
//    mangled_ppc("?device_set_animation_changed@@YAXJ@Z");
//};

//void device_set_position_transition_time(long, float)
//{
//    mangled_ppc("?device_set_position_transition_time@@YAXJM@Z");
//};

//void device_one_sided_set(long, bool)
//{
//    mangled_ppc("?device_one_sided_set@@YAXJ_N@Z");
//};

//void device_one_sided_for_player_set(long, bool)
//{
//    mangled_ppc("?device_one_sided_for_player_set@@YAXJ_N@Z");
//};

//void device_ignore_player_set(long, bool)
//{
//    mangled_ppc("?device_ignore_player_set@@YAXJ_N@Z");
//};

//void device_operates_automatically_set(long, bool)
//{
//    mangled_ppc("?device_operates_automatically_set@@YAXJ_N@Z");
//};

//void device_closes_automatically_set(long, bool)
//{
//    mangled_ppc("?device_closes_automatically_set@@YAXJ_N@Z");
//};

//void device_group_change_only_once_more_set(long, bool)
//{
//    mangled_ppc("?device_group_change_only_once_more_set@@YAXJ_N@Z");
//};

//float device_group_get_value(long)
//{
//    mangled_ppc("?device_group_get_value@@YAMJ@Z");
//};

//void device_place(long, struct s_scenario_device const *)
//{
//    mangled_ppc("?device_place@@YAXJPBUs_scenario_device@@@Z");
//};

//void device_add_control_children_to_groups(long)
//{
//    mangled_ppc("?device_add_control_children_to_groups@@YAXJ@Z");
//};

//long device_get_action_string(long)
//{
//    mangled_ppc("?device_get_action_string@@YAJJ@Z");
//};

//void device_touched(long, long)
//{
//    mangled_ppc("?device_touched@@YAXJJ@Z");
//};

//bool device_allow_interaction(long, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?device_allow_interaction@@YA_NJPBTreal_point3d@@PBTvector3d@@M@Z");
//};

//bool device_can_change_position(long)
//{
//    mangled_ppc("?device_can_change_position@@YA_NJ@Z");
//};

//bool device_frontfacing(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?device_frontfacing@@YA_NJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//void device_effect_new(long, long)
//{
//    mangled_ppc("?device_effect_new@@YAXJJ@Z");
//};

//long device_group_new(long, float, unsigned long)
//{
//    mangled_ppc("?device_group_new@@YAJJMK@Z");
//};

//void device_group_delete(long, long)
//{
//    mangled_ppc("?device_group_delete@@YAXJJ@Z");
//};

//void create_initial_device_groups(void)
//{
//    mangled_ppc("?create_initial_device_groups@@YAXXZ");
//};

//void clear_device_animation_control(struct s_device_animation_control *)
//{
//    mangled_ppc("?clear_device_animation_control@@YAXPAUs_device_animation_control@@@Z");
//};

//bool update_device_animation_control(long, struct s_device_animation_control *, class c_animation_manager const *, class c_animation_channel *, float, float *)
//{
//    mangled_ppc("?update_device_animation_control@@YA_NJPAUs_device_animation_control@@PBVc_animation_manager@@PAVc_animation_channel@@MPAM@Z");
//};

//void setup_device_animation_control(struct s_device_animation_control *, float, float, float, float, float, float)
//{
//    mangled_ppc("?setup_device_animation_control@@YAXPAUs_device_animation_control@@MMMMMM@Z");
//};

//long device_get_position_track(long)
//{
//    mangled_ppc("?device_get_position_track@@YAJJ@Z");
//};

//bool device_set_position_track(long, long, float)
//{
//    mangled_ppc("?device_set_position_track@@YA_NJJM@Z");
//};

//bool device_set_overlay_track(long, long)
//{
//    mangled_ppc("?device_set_overlay_track@@YA_NJJ@Z");
//};

//void device_animate_position(long, float, float, float, float, bool)
//{
//    mangled_ppc("?device_animate_position@@YAXJMMMM_N@Z");
//};

//void device_set_position_animation_control_direct(long, struct s_device_animation_control const *)
//{
//    mangled_ppc("?device_set_position_animation_control_direct@@YAXJPBUs_device_animation_control@@@Z");
//};

//void device_animate_overlay(long, float, float, float, float)
//{
//    mangled_ppc("?device_animate_overlay@@YAXJMMMM@Z");
//};

//bool device_setup_position_animation_channel(long, long)
//{
//    mangled_ppc("?device_setup_position_animation_channel@@YA_NJJ@Z");
//};

//bool device_setup_power_and_overlay_track_animation_channel(long, long)
//{
//    mangled_ppc("?device_setup_power_and_overlay_track_animation_channel@@YA_NJJ@Z");
//};

//void device_reset_animation_channels(long)
//{
//    mangled_ppc("?device_reset_animation_channels@@YAXJ@Z");
//};

//bool device_get_touch_position(long, long, union real_point3d const *, union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?device_get_touch_position@@YA_NJJPBTreal_point3d@@PAT1@PATvector3d@@@Z");
//};

//public: void c_object_iterator<struct device_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Udevice_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct device_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Udevice_datum@@@@QAA_NXZ");
//};

//public: struct device_datum * c_object_iterator<struct device_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Udevice_datum@@@@QAAPAUdevice_datum@@XZ");
//};

//public: void c_data_iterator<struct device_group_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Udevice_group_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct device_group_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Udevice_group_datum@@@@QAA_NXZ");
//};

//public: struct device_group_datum * c_data_iterator<struct device_group_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Udevice_group_datum@@@@QBAPAUdevice_group_datum@@XZ");
//};

//public: long c_data_iterator<struct device_group_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Udevice_group_datum@@@@QBAJXZ");
//};

//void simulation_action_object_update<enum e_simulation_device_update_flag>(long, enum e_simulation_device_update_flag)
//{
//    mangled_ppc("??$simulation_action_object_update@W4e_simulation_device_update_flag@@@@YAXJW4e_simulation_device_update_flag@@@Z");
//};

//public: c_simulation_object_update_flags::c_simulation_object_update_flags(long, enum e_simulation_device_update_flag)
//{
//    mangled_ppc("??0c_simulation_object_update_flags@@QAA@JW4e_simulation_device_update_flag@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_device_groups_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_device_groups_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_device_groups_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_device_groups_data_allocator@@YAXXZ");
//};

