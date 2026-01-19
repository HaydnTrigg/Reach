/* ---------- headers */

#include "omaha\objects\damage_new.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_damage_acceleration@s_damage_globals@@$0EA@@@2JB"
// public: static long const s_static_array<struct s_area_of_effect_object, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_area_of_effect_object@@$0EA@@@2JB"
// struct s_damage_inflicted_history *g_debug_damage_inflicted_history; // "?g_debug_damage_inflicted_history@@3PAUs_damage_inflicted_history@@A"
// struct s_damage_debug_sections global_debug_damage_sections_data; // "?global_debug_damage_sections_data@@3Us_damage_debug_sections@@A"
// bool global_debug_damage_object_index_locked; // "?global_debug_damage_object_index_locked@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_damage_globals_allocator::*)(void *)> g_damage_globals_allocator; // "?g_damage_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@A"
// struct s_damage_globals *damage_globals; // "?damage_globals@@3PAUs_damage_globals@@A"

// void __tls_set_g_damage_globals_allocator(void *);
// void damage_initialize(void);
// void damage_dispose(void);
// void damage_initialize_for_new_map(void);
// void damage_dispose_from_old_map(void);
// void damage_acceleration_queue_begin(void);
// bool objects_move_in_progress(void);
// void damage_acceleration_queue_handle_deleted_object(long);
// void damage_acceleration_queue_end(void);
// bool damage_can_be_adjusted_for_difficulty(struct s_damage_owner const *);
// void damage_object_compute_instant_kill(long, long, struct damage_definition const *, struct s_damage_data const *, bool *, bool *);
// public: enum e_damage_modifier_percentage_setting c_player_trait_weapons::get_damage_modifier_percentage_setting(void) const;
// public: enum e_damage_modifier_percentage_setting c_player_trait_weapons::get_melee_damage_modifier_percentage_setting(void) const;
// bool object_has_headshot_immunity(long, struct s_damage_data const *);
// void damage_transfer_dump_single(long);
// bool can_transfer_damage(long, long, struct s_damage_data *);
// void damage_section_aftermath(long, long, float, float, struct s_damage_data *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *);
// void handle_shield_vampirism(long, float, float, struct s_damage_owner const *);
// void damage_section_pre_recharge(long, long);
// void damage_section_pre_recharge_abort(long, long);
// void damage_notify_skull_change(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &);
// void damage_acceleration_apply(struct s_damage_globals::s_damage_acceleration const *);
// public: void c_motor_request_accelerate::setup(enum e_action, union real_point3d const *, union vector3d const *);
// public: c_motor_request_accelerate::c_motor_request_accelerate(void);
// public: virtual void const * c_motor_request_accelerate::cast_to(enum e_motor_task) const;
// void object_limit_acceleration(long, union vector3d *);
// void damage_acceleration_queue(long, bool, long, bool, bool, union real_point3d const *, union vector3d const *);
// void object_deplete_body_internal(long, struct s_damage_data const *, struct s_damage_owner const *, struct s_damage_response_data *, bool, struct s_damage_reporting_info const &);
// void object_model_state_update_shielded(long, struct s_new_model_damage_info const *, long, bool, bool);
// void object_deplete_shield_internal(long, struct s_damage_owner const *, struct s_damage_response_data *);
// void damage_section_deplete(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, struct s_damage_response_data *);
// void damage_response_fire(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *, bool);
// void damage_response_handle_damage_transfers(long, long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *);
// bool damage_transfer_is_valid(struct s_damage_data *, struct s_damage_transfer const *);
// void damage_transfer_fire(struct s_damage_transfer const *, long, long, long, struct s_damage_data *, float, struct s_damage_response_data *);
// void add_object_to_transfer_list(long, long, struct s_damage_data *);
// void remove_object_from_transfer_list(long, long, struct s_damage_data *);
// void apply_transfer_damage_amount(long, float, long, long, long, long, short, struct s_new_model_damage_info const *, struct s_damage_transfer const *, struct s_damage_data *, struct s_damage_response_data *);
// void object_cause_damage_amount(struct s_damage_data *, float, long, short, short, short, enum e_predictability);
// float adjust_total_damage(struct s_damage_data *, long, float);
// long object_cause_damage_find_damageable_objects(long, struct s_damage_data *, long *, long);
// bool object_cause_damage_to_object(long, long, long, bool, float *, float *, short, short, short, enum e_predictability, struct s_damage_data *);
// public: bool c_global_material_type::operator==(class c_global_material_type const &) const;
// void object_damage_body(long, struct s_damage_data *, struct s_damage_response_data *);
// float damage_get_damage_scale_from_game_options(long);
// void object_execute_damage_aftermath_with_networking(struct s_damage_data const *, long, float, enum e_predictability, struct s_damage_response_data const *);
// void object_damage_shields(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *);
// void damage_transfer_debug(struct s_new_model_damage_info const *, long, long, float, long, long, long, long, long, long, struct s_damage_transfer const *);
// bool can_accept_transfer_damage(long, long, struct s_damage_data const *);
// void object_damage_damage_section(struct s_damage_data *, struct s_new_model_damage_info const *, long, long, float, struct s_damage_response_data *);
// void damage_section_handle_damage_transfers(struct s_damage_data *, struct s_new_model_damage_info const *, long, long, float, struct s_damage_response_data *);
// void damage_section_fire_damage_responses(long, long, struct s_damage_data *, struct s_damage_response_data *);
// void damage_section_respond_to_damage(long, long, struct s_damage_data *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *);
// bool damage_section_deplete_next_response(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, float, struct s_damage_reporting_info const &, long, struct damage_definition const *, struct s_damage_response_data *);
// void damage_section_spawn_damage_response_transition_effects(long, struct s_new_model_damage_info const *, long, struct s_damage_data const *, struct s_damage_response_data *);
// void damage_response_spawn_transition_effects(long, struct s_new_instantaneous_damage_response const *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *);
// void damage_response_handle_pending_response_conflicts(long, long, struct s_damage_owner const *, struct s_damage_response_data *);
// void destroy_child_objects_from_marker_name(long, long);
// void object_damage_handle_stun(long, long, struct s_new_model_damage_section const *, float, bool);
// void stun_damage_section(long, long);
// void object_compute_damage_aftermath(long, struct s_damage_data const *, struct s_damage_response_data const *, struct s_damage_aftermath_result_data *);
// void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *);
// void object_apply_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool);
// float object_compute_damage_acceleration(long, long, float, bool, bool, bool, bool *, bool *);
// bool object_can_be_accelerated_by_damage(long);
// void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability);
// void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability);
// float compute_total_damage(struct s_damage_data *, long);
// void object_destroy(long);
// void object_destroy_with_information(long, long, long, struct s_damage_reporting_info const &, bool);
// void object_destroy_notify_children(long);
// void damage_spawn_effect_from_marker_name(long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, bool, bool);
// void damage_spawn_damage_effect_from_marker_name(long, long, struct s_damage_owner const *, long, struct s_damage_reporting_info const &);
// bool object_is_vehicle_occupied_by_object_or_player(long, bool, bool, long, bool *, long *);
// void object_damage_constraints(long, unsigned short, unsigned short);
// void damage_section_damage_one_constraint(struct s_new_model_damage_info const *, struct s_new_instantaneous_damage_response const *, unsigned short, unsigned short *);
// void damage_section_damage_all_constraints(struct s_new_model_damage_info const *, struct s_new_instantaneous_damage_response const *, unsigned short, unsigned short *);
// long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability);
// long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability);
// void area_of_effect_result_new(struct s_area_of_effect_result *);
// void area_of_effect_cause_damage_to_object_and_children(long, long, struct s_damage_data *, float, enum e_predictability, struct s_area_of_effect_result *);
// long area_of_effect_cause_attached_damage_to_object(long, struct s_damage_data *, enum e_predictability);
// void area_of_effect_damage_test_model_target_obstruction(struct s_damage_data *, long);
// void area_of_effect_cause_damage_to_object(struct s_damage_data *, long, long, bool, enum e_predictability, struct s_area_of_effect_result *);
// void area_of_effect_cause_damage_to_children_recursive(long, long, float, struct s_damage_data const *, enum e_predictability, struct s_area_of_effect_result *);
// long compute_aoe_damage_to_object_model_targets(struct s_damage_data *, long, float, struct s_damage_response_data *);
// bool area_effect_damage_consider_object(long, struct s_damage_data const *);
// void area_of_effect_result_record(struct s_area_of_effect_result *, long, float);
// long area_of_effect_result_get_primary_damage_object_index(struct s_area_of_effect_result const *);
// bool area_of_effect_object_comparison_function(void const *, void const *, void const *);
// bool object_is_non_critical_area_of_effect_object(long);
// bool area_effect_damage_test_obstruction(long, union real_point3d const *, struct s_damage_data const *, long);
// void debug_damage_add_obstruction_test(union real_point3d const *, union real_point3d const *, union real_point3d const *);
// void debug_damage_add_obstruction_test(union real_point3d const *, union vector3d const *, union real_point3d const *);
// struct s_new_model_damage_info const * object_get_damage_info(long);
// struct object_damage_section * object_damage_section_get(long, long);
// void object_initialize_damage_sections(long);
// void object_deplete_shield(long, bool, struct s_damage_owner const *);
// void object_undeplete_shield_internal(long);
// long get_player_index_from_object_or_parents(long);
// bool object_is_cheating_death(long, struct s_damage_data const *);
// bool player_is_cheating_death(long, struct s_damage_data const *);
// public: enum e_damage_resistance_percentage_setting c_player_trait_shield_vitality::get_damage_resistance_percentage_setting(void) const;
// float damage_section_get_absolute_maximum_vitality(long, long);
// void debug_damage_track_damage_inflicted(long, float);
// public: struct s_damage_inflicted_history_event & s_damage_inflicted_history::get(void);
// public: void s_damage_inflicted_history::advance(void);
// void render_debug_damage_radius(struct s_damage_data const *, struct s_damage_effect_definition const *);
// struct s_new_model_damage_section const * damage_info_get_body_damage_section(struct s_new_model_damage_info const *);
// struct s_new_model_damage_section const * damage_info_get_shield_damage_section(struct s_new_model_damage_info const *);
// long damage_info_get_shield_damage_section_index(struct s_new_model_damage_info const *);
// bool damage_info_section_is_body(long, long);
// bool damage_info_section_is_any_shield(long, long);
// bool damage_info_section_is_main_shield(long, long);
// class c_global_material_type model_damage_get_shield_material_type(struct s_new_model_damage_info const *);
// bool object_can_damage_authoritatively(long);
// bool object_clients_can_damage_authoritatively(long);
// void object_enable_damage_section(struct object_damage_section *, float);
// void object_disable_damage_section(struct object_damage_section *);
// void object_enable_damage_section_by_name(long, long, float);
// void object_enable_damage_section_by_name_internal(long, long, bool, float);
// void object_disable_damage_section_by_name(long, long);
// char * damage_transfer_format_block_proc(long, __int64, struct s_tag_block *, long, char *, long);
// char * new_instantaneous_damage_response_format_block_proc(long, __int64, struct s_tag_block *, long, char *, long);
// void model_postprocess_build_damage_new(long);
// long resolve_damage_section_index(struct s_model_damage_info const *, struct s_new_model_damage_info const *, long);
// void damage_info_postprocess_new(long);
// void damage_info_postprocess_verify_damage_section_index(long, short &);
// bool compare_recharge_fractions(void const *, void const *, void const *);
// bool compare_instant_responses(void const *, void const *, void const *);
// void object_damage_new_new(long);
// void object_damage_new(long);
// void object_cause_damage_new(struct s_damage_data *, long, short, short, short, enum e_predictability);
// bool object_damage_update_new(long);
// bool object_damage_update(long);
// bool object_damage_update_damage_section_timers(long, struct s_new_model_damage_info const *);
// bool object_damage_update_current_and_recent_damage(long);
// void object_damage_update_dies_from_no_riders(long);
// void object_damage_update_perform_act_of_god_damage(long);
// void object_damage_update_reset_damage_responses(long);
// bool object_damage_update_current_and_recent_damage(struct s_damage_decay const *, bool, float, float *, float *, char *, char *);
// bool object_damage_update_shield_impacts(struct s_damage_decay const *, bool, float, float *, float *, char *);
// bool object_damage_update_recharging(long, struct s_new_model_damage_info const *);
// bool object_damage_update_recharging_body(long, struct s_new_model_damage_info const *, struct s_new_model_damage_section *, struct object_damage_section *, struct s_unit_cached_damage_traits const *);
// bool object_damage_update_recharging_shield(long, struct s_new_model_damage_info const *, long, struct s_new_model_damage_section *, struct object_damage_section *, struct s_unit_cached_damage_traits const *);
// public: enum e_shield_recharge_rate_percentage_setting c_player_trait_shield_vitality::get_overshield_recharge_rate_percentage_setting(void) const;
// bool object_damage_update_recharging_damage_section(long, struct s_new_model_damage_info const *, long, struct s_new_model_damage_section *, struct object_damage_section *);
// void damage_effect_new_on_object(long, long, struct s_damage_owner const *);
// void object_apply_damage_aftermath_new(long, struct s_damage_aftermath_result_data const *);
// void object_apply_damage_aftermath_from_authority_new(long, struct s_damage_aftermath_result_data const *);
// void object_destroy_new(long);
// void object_destroy_without_delayed_effects_new(long);
// void object_destroy_without_delayed_effects(long);
// void object_kill_instantly_new(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_damage_damage_section_new(long, long, float, struct s_damage_reporting_info const &);
// void object_scripting_cause_damage_to_damage_section(long, long, float, struct s_damage_reporting_info const &);
// void object_deplete_body_new(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_body_silent_new(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_cause_fatal_damage_aftermath_new(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long);
// void object_cause_fatal_damage_aftermath(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long);
// void render_debug_object_damage_new(void);
// void render_debug_object_damage(void);
// void render_debug_damage_sections(void);
// void render_debug_damage_player_recent_inflicted(void);
// void object_deplete_shield_new(long, bool, struct s_damage_owner const *);
// bool object_constraint_is_broken_new(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_loosened_new(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long);
// void object_damage_constraints_new(long, unsigned short, unsigned short);
// void object_damage_handle_resurrection_new(long);
// void object_damage_handle_resurrection(long);
// bool object_scripting_vitality_pinned_new(long);
// bool object_scripting_vitality_pinned(long);
// void damage_section_response_fire_from_simulation_event_new(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type);
// void damage_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type);
// long area_of_effect_cause_damage_new(struct s_damage_data *, long, enum e_predictability);
// long area_of_effect_cause_damage_new(struct s_damage_data *, long, long, enum e_predictability);
// void object_initialize_vitality_new(long, float *, float *);
// void object_initialize_vitality(long, float *, float *);
// void damage_handle_vehicle_exit_new(long, long);
// void damage_handle_vehicle_exit(long, long);
// void damage_effect_new_on_weapon_new(long, long);
// void damage_effect_new_on_weapon(long, long);
// bool material_is_headshotable_new(long, struct s_model_material const *);
// bool material_is_headshotable(struct s_new_model_damage_info const *, struct s_model_material const *);
// void object_scripting_ignores_emp_new(long, bool);
// void object_damage_stop_recharging_effect_new(long, long);
// public: bool c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>::operator==(enum e_damage_reporting_type) const;
// public: static long s_static_array<struct s_damage_transfer_initiator, 16>::get_count(void);
// public: void s_static_array<struct s_damage_transfer_initiator, 16>::set_memory(long);
// public: static long s_static_array<struct s_aoe_obstruction_result, 32>::get_count(void);
// public: c_basic_buffer<void>::c_basic_buffer<void>(void *, unsigned long);
// public: long * s_static_array<long, 2>::get_elements(void);
// public: static long s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::get_count(void);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// ?sort_range@?$s_static_array@Us_area_of_effect_object@@$0EA@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::valid(void) const;
// public: void c_flags_no_init<short, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: void c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_object_inhibited_flags, bool);
// public: void c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::set(enum e_new_damage_section_flag, bool);
// public: bool c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_damage_effect_definition_flags) const;
// public: void c_big_flags_typed_no_init<long, 64>::set(long, bool);
// public: long c_big_flags_typed_no_init<long, 64>::get_lowest_bit_set(void) const;
// public: enum e_damage_resistance_percentage_setting c_game_engine_option_real<struct s_damage_resistance_option_metadata>::get_value_direct(void) const;
// public: enum e_shield_recharge_rate_percentage_setting c_game_engine_option_real<struct s_shield_recharge_rate_option_metadata>::get_value_direct(void) const;
// public: enum e_damage_modifier_percentage_setting c_game_engine_option_real<struct s_damage_modifier_option_metadata>::get_value_direct(void) const;
// public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::test(enum e_game_skulls) const;
// public: struct s_damage_globals::s_damage_acceleration & s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::operator[]<long>(long);
// public: struct s_damage_transfer_initiator & s_static_array<struct s_damage_transfer_initiator, 16>::operator[]<long>(long);
// public: struct s_damage_transfer_initiator const & s_static_array<struct s_damage_transfer_initiator, 16>::operator[]<int>(int) const;
// public: struct s_area_of_effect_object & s_static_array<struct s_area_of_effect_object, 64>::operator[]<long>(long);
// public: struct s_aoe_obstruction_result & s_static_array<struct s_aoe_obstruction_result, 32>::operator[]<long>(long);
// public: bool c_flags_no_init<short, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_damage_effect_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_damage_effect_definition_flags);
// protected: void c_game_engine_option<struct s_damage_resistance_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct s_shield_recharge_rate_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct s_damage_modifier_option_metadata>::assert_parameters_valid(void) const;
// public: static bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::valid_bit(enum e_game_skulls);
// private: static unsigned long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_skulls);
// public: static bool s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::valid<long>(long);
// public: static bool s_static_array<struct s_damage_transfer_initiator, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_damage_transfer_initiator, 16>::valid<int>(int);
// public: static bool s_static_array<struct s_area_of_effect_object, 64>::valid<long>(long);
// public: static bool s_static_array<struct s_aoe_obstruction_result, 32>::valid<long>(long);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>(void);
// void g_damage_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_damage_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_damage_globals_allocator@@YAXPAX@Z");
//};

//void damage_initialize(void)
//{
//    mangled_ppc("?damage_initialize@@YAXXZ");
//};

//void damage_dispose(void)
//{
//    mangled_ppc("?damage_dispose@@YAXXZ");
//};

//void damage_initialize_for_new_map(void)
//{
//    mangled_ppc("?damage_initialize_for_new_map@@YAXXZ");
//};

//void damage_dispose_from_old_map(void)
//{
//    mangled_ppc("?damage_dispose_from_old_map@@YAXXZ");
//};

//void damage_acceleration_queue_begin(void)
//{
//    mangled_ppc("?damage_acceleration_queue_begin@@YAXXZ");
//};

//bool objects_move_in_progress(void)
//{
//    mangled_ppc("?objects_move_in_progress@@YA_NXZ");
//};

//void damage_acceleration_queue_handle_deleted_object(long)
//{
//    mangled_ppc("?damage_acceleration_queue_handle_deleted_object@@YAXJ@Z");
//};

//void damage_acceleration_queue_end(void)
//{
//    mangled_ppc("?damage_acceleration_queue_end@@YAXXZ");
//};

//bool damage_can_be_adjusted_for_difficulty(struct s_damage_owner const *)
//{
//    mangled_ppc("?damage_can_be_adjusted_for_difficulty@@YA_NPBUs_damage_owner@@@Z");
//};

//void damage_object_compute_instant_kill(long, long, struct damage_definition const *, struct s_damage_data const *, bool *, bool *)
//{
//    mangled_ppc("?damage_object_compute_instant_kill@@YAXJJPBUdamage_definition@@PBUs_damage_data@@PA_N2@Z");
//};

//public: enum e_damage_modifier_percentage_setting c_player_trait_weapons::get_damage_modifier_percentage_setting(void) const
//{
//    mangled_ppc("?get_damage_modifier_percentage_setting@c_player_trait_weapons@@QBA?AW4e_damage_modifier_percentage_setting@@XZ");
//};

//public: enum e_damage_modifier_percentage_setting c_player_trait_weapons::get_melee_damage_modifier_percentage_setting(void) const
//{
//    mangled_ppc("?get_melee_damage_modifier_percentage_setting@c_player_trait_weapons@@QBA?AW4e_damage_modifier_percentage_setting@@XZ");
//};

//bool object_has_headshot_immunity(long, struct s_damage_data const *)
//{
//    mangled_ppc("?object_has_headshot_immunity@@YA_NJPBUs_damage_data@@@Z");
//};

//void damage_transfer_dump_single(long)
//{
//    mangled_ppc("?damage_transfer_dump_single@@YAXJ@Z");
//};

//bool can_transfer_damage(long, long, struct s_damage_data *)
//{
//    mangled_ppc("?can_transfer_damage@@YA_NJJPAUs_damage_data@@@Z");
//};

//void damage_section_aftermath(long, long, float, float, struct s_damage_data *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_aftermath@@YAXJJMMPAUs_damage_data@@PBUs_damage_owner@@ABUs_damage_reporting_info@@PAUs_damage_response_data@@@Z");
//};

//void handle_shield_vampirism(long, float, float, struct s_damage_owner const *)
//{
//    mangled_ppc("?handle_shield_vampirism@@YAXJMMPBUs_damage_owner@@@Z");
//};

//void damage_section_pre_recharge(long, long)
//{
//    mangled_ppc("?damage_section_pre_recharge@@YAXJJ@Z");
//};

//void damage_section_pre_recharge_abort(long, long)
//{
//    mangled_ppc("?damage_section_pre_recharge_abort@@YAXJJ@Z");
//};

//void damage_notify_skull_change(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?damage_notify_skull_change@@YAXABV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//void damage_acceleration_apply(struct s_damage_globals::s_damage_acceleration const *)
//{
//    mangled_ppc("?damage_acceleration_apply@@YAXPBUs_damage_acceleration@s_damage_globals@@@Z");
//};

//public: void c_motor_request_accelerate::setup(enum e_action, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?setup@c_motor_request_accelerate@@QAAXW4e_action@@PBTreal_point3d@@PBTvector3d@@@Z");
//};

//public: c_motor_request_accelerate::c_motor_request_accelerate(void)
//{
//    mangled_ppc("??0c_motor_request_accelerate@@QAA@XZ");
//};

//public: virtual void const * c_motor_request_accelerate::cast_to(enum e_motor_task) const
//{
//    mangled_ppc("?cast_to@c_motor_request_accelerate@@UBAPBXW4e_motor_task@@@Z");
//};

//void object_limit_acceleration(long, union vector3d *)
//{
//    mangled_ppc("?object_limit_acceleration@@YAXJPATvector3d@@@Z");
//};

//void damage_acceleration_queue(long, bool, long, bool, bool, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?damage_acceleration_queue@@YAXJ_NJ00PBTreal_point3d@@PBTvector3d@@@Z");
//};

//void object_deplete_body_internal(long, struct s_damage_data const *, struct s_damage_owner const *, struct s_damage_response_data *, bool, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_internal@@YAXJPBUs_damage_data@@PBUs_damage_owner@@PAUs_damage_response_data@@_NABUs_damage_reporting_info@@@Z");
//};

//void object_model_state_update_shielded(long, struct s_new_model_damage_info const *, long, bool, bool)
//{
//    mangled_ppc("?object_model_state_update_shielded@@YAXJPBUs_new_model_damage_info@@J_N1@Z");
//};

//void object_deplete_shield_internal(long, struct s_damage_owner const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_deplete_shield_internal@@YAXJPBUs_damage_owner@@PAUs_damage_response_data@@@Z");
//};

//void damage_section_deplete(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_deplete@@YAXPBUs_new_model_damage_info@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@JPAUs_damage_response_data@@@Z");
//};

//void damage_response_fire(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, long, struct s_damage_response_data *, bool)
//{
//    mangled_ppc("?damage_response_fire@@YAXPBUs_new_model_damage_info@@JPBUs_damage_owner@@ABUs_damage_reporting_info@@JJPAUs_damage_response_data@@_N@Z");
//};

//void damage_response_handle_damage_transfers(long, long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_response_handle_damage_transfers@@YAXJJJPBUs_damage_owner@@ABUs_damage_reporting_info@@PAUs_damage_response_data@@@Z");
//};

//bool damage_transfer_is_valid(struct s_damage_data *, struct s_damage_transfer const *)
//{
//    mangled_ppc("?damage_transfer_is_valid@@YA_NPAUs_damage_data@@PBUs_damage_transfer@@@Z");
//};

//void damage_transfer_fire(struct s_damage_transfer const *, long, long, long, struct s_damage_data *, float, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_transfer_fire@@YAXPBUs_damage_transfer@@JJJPAUs_damage_data@@MPAUs_damage_response_data@@@Z");
//};

//void add_object_to_transfer_list(long, long, struct s_damage_data *)
//{
//    mangled_ppc("?add_object_to_transfer_list@@YAXJJPAUs_damage_data@@@Z");
//};

//void remove_object_from_transfer_list(long, long, struct s_damage_data *)
//{
//    mangled_ppc("?remove_object_from_transfer_list@@YAXJJPAUs_damage_data@@@Z");
//};

//void apply_transfer_damage_amount(long, float, long, long, long, long, short, struct s_new_model_damage_info const *, struct s_damage_transfer const *, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?apply_transfer_damage_amount@@YAXJMJJJJFPBUs_new_model_damage_info@@PBUs_damage_transfer@@PAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void object_cause_damage_amount(struct s_damage_data *, float, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_amount@@YAXPAUs_damage_data@@MJFFFW4e_predictability@@@Z");
//};

//float adjust_total_damage(struct s_damage_data *, long, float)
//{
//    mangled_ppc("?adjust_total_damage@@YAMPAUs_damage_data@@JM@Z");
//};

//long object_cause_damage_find_damageable_objects(long, struct s_damage_data *, long *, long)
//{
//    mangled_ppc("?object_cause_damage_find_damageable_objects@@YAJJPAUs_damage_data@@PAJJ@Z");
//};

//bool object_cause_damage_to_object(long, long, long, bool, float *, float *, short, short, short, enum e_predictability, struct s_damage_data *)
//{
//    mangled_ppc("?object_cause_damage_to_object@@YA_NJJJ_NPAM1FFFW4e_predictability@@PAUs_damage_data@@@Z");
//};

//public: bool c_global_material_type::operator==(class c_global_material_type const &) const
//{
//    mangled_ppc("??8c_global_material_type@@QBA_NABV0@@Z");
//};

//void object_damage_body(long, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_damage_body@@YAXJPAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//float damage_get_damage_scale_from_game_options(long)
//{
//    mangled_ppc("?damage_get_damage_scale_from_game_options@@YAMJ@Z");
//};

//void object_execute_damage_aftermath_with_networking(struct s_damage_data const *, long, float, enum e_predictability, struct s_damage_response_data const *)
//{
//    mangled_ppc("?object_execute_damage_aftermath_with_networking@@YAXPBUs_damage_data@@JMW4e_predictability@@PBUs_damage_response_data@@@Z");
//};

//void object_damage_shields(long, struct damage_definition const *, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_damage_shields@@YAXJPBUdamage_definition@@PAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void damage_transfer_debug(struct s_new_model_damage_info const *, long, long, float, long, long, long, long, long, long, struct s_damage_transfer const *)
//{
//    mangled_ppc("?damage_transfer_debug@@YAXPBUs_new_model_damage_info@@JJMJJJJJJPBUs_damage_transfer@@@Z");
//};

//bool can_accept_transfer_damage(long, long, struct s_damage_data const *)
//{
//    mangled_ppc("?can_accept_transfer_damage@@YA_NJJPBUs_damage_data@@@Z");
//};

//void object_damage_damage_section(struct s_damage_data *, struct s_new_model_damage_info const *, long, long, float, struct s_damage_response_data *)
//{
//    mangled_ppc("?object_damage_damage_section@@YAXPAUs_damage_data@@PBUs_new_model_damage_info@@JJMPAUs_damage_response_data@@@Z");
//};

//void damage_section_handle_damage_transfers(struct s_damage_data *, struct s_new_model_damage_info const *, long, long, float, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_handle_damage_transfers@@YAXPAUs_damage_data@@PBUs_new_model_damage_info@@JJMPAUs_damage_response_data@@@Z");
//};

//void damage_section_fire_damage_responses(long, long, struct s_damage_data *, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_fire_damage_responses@@YAXJJPAUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void damage_section_respond_to_damage(long, long, struct s_damage_data *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_respond_to_damage@@YAXJJPAUs_damage_data@@PBUs_damage_owner@@ABUs_damage_reporting_info@@PAUs_damage_response_data@@@Z");
//};

//bool damage_section_deplete_next_response(struct s_new_model_damage_info const *, long, struct s_damage_owner const *, float, struct s_damage_reporting_info const &, long, struct damage_definition const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_deplete_next_response@@YA_NPBUs_new_model_damage_info@@JPBUs_damage_owner@@MABUs_damage_reporting_info@@JPBUdamage_definition@@PAUs_damage_response_data@@@Z");
//};

//void damage_section_spawn_damage_response_transition_effects(long, struct s_new_model_damage_info const *, long, struct s_damage_data const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_section_spawn_damage_response_transition_effects@@YAXJPBUs_new_model_damage_info@@JPBUs_damage_data@@PAUs_damage_response_data@@@Z");
//};

//void damage_response_spawn_transition_effects(long, struct s_new_instantaneous_damage_response const *, struct s_damage_owner const *, struct s_damage_reporting_info const &, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_response_spawn_transition_effects@@YAXJPBUs_new_instantaneous_damage_response@@PBUs_damage_owner@@ABUs_damage_reporting_info@@PAUs_damage_response_data@@@Z");
//};

//void damage_response_handle_pending_response_conflicts(long, long, struct s_damage_owner const *, struct s_damage_response_data *)
//{
//    mangled_ppc("?damage_response_handle_pending_response_conflicts@@YAXJJPBUs_damage_owner@@PAUs_damage_response_data@@@Z");
//};

//void destroy_child_objects_from_marker_name(long, long)
//{
//    mangled_ppc("?destroy_child_objects_from_marker_name@@YAXJJ@Z");
//};

//void object_damage_handle_stun(long, long, struct s_new_model_damage_section const *, float, bool)
//{
//    mangled_ppc("?object_damage_handle_stun@@YAXJJPBUs_new_model_damage_section@@M_N@Z");
//};

//void stun_damage_section(long, long)
//{
//    mangled_ppc("?stun_damage_section@@YAXJJ@Z");
//};

//void object_compute_damage_aftermath(long, struct s_damage_data const *, struct s_damage_response_data const *, struct s_damage_aftermath_result_data *)
//{
//    mangled_ppc("?object_compute_damage_aftermath@@YAXJPBUs_damage_data@@PBUs_damage_response_data@@PAUs_damage_aftermath_result_data@@@Z");
//};

//void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_apply_damage_acceleration(long, long, long, struct s_damage_owner const *, float, union vector3d const *, union real_point3d const *, bool, bool, bool, bool)
//{
//    mangled_ppc("?object_apply_damage_acceleration@@YAXJJJPBUs_damage_owner@@MPBTvector3d@@PBTreal_point3d@@_N333@Z");
//};

//float object_compute_damage_acceleration(long, long, float, bool, bool, bool, bool *, bool *)
//{
//    mangled_ppc("?object_compute_damage_acceleration@@YAMJJM_N00PA_N1@Z");
//};

//bool object_can_be_accelerated_by_damage(long)
//{
//    mangled_ppc("?object_can_be_accelerated_by_damage@@YA_NJ@Z");
//};

//void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_kill_instantly@@YAXJ_N00PBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_simple@@YAXPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage@@YAXPAUs_damage_data@@JFFFW4e_predictability@@@Z");
//};

//float compute_total_damage(struct s_damage_data *, long)
//{
//    mangled_ppc("?compute_total_damage@@YAMPAUs_damage_data@@J@Z");
//};

//void object_destroy(long)
//{
//    mangled_ppc("?object_destroy@@YAXJ@Z");
//};

//void object_destroy_with_information(long, long, long, struct s_damage_reporting_info const &, bool)
//{
//    mangled_ppc("?object_destroy_with_information@@YAXJJJABUs_damage_reporting_info@@_N@Z");
//};

//void object_destroy_notify_children(long)
//{
//    mangled_ppc("?object_destroy_notify_children@@YAXJ@Z");
//};

//void damage_spawn_effect_from_marker_name(long, long, struct s_damage_owner const *, struct s_damage_reporting_info const &, long, bool, bool)
//{
//    mangled_ppc("?damage_spawn_effect_from_marker_name@@YAXJJPBUs_damage_owner@@ABUs_damage_reporting_info@@J_N2@Z");
//};

//void damage_spawn_damage_effect_from_marker_name(long, long, struct s_damage_owner const *, long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?damage_spawn_damage_effect_from_marker_name@@YAXJJPBUs_damage_owner@@JABUs_damage_reporting_info@@@Z");
//};

//bool object_is_vehicle_occupied_by_object_or_player(long, bool, bool, long, bool *, long *)
//{
//    mangled_ppc("?object_is_vehicle_occupied_by_object_or_player@@YA_NJ_N0JPA_NPAJ@Z");
//};

//void object_damage_constraints(long, unsigned short, unsigned short)
//{
//    mangled_ppc("?object_damage_constraints@@YAXJGG@Z");
//};

//void damage_section_damage_one_constraint(struct s_new_model_damage_info const *, struct s_new_instantaneous_damage_response const *, unsigned short, unsigned short *)
//{
//    mangled_ppc("?damage_section_damage_one_constraint@@YAXPBUs_new_model_damage_info@@PBUs_new_instantaneous_damage_response@@GPAG@Z");
//};

//void damage_section_damage_all_constraints(struct s_new_model_damage_info const *, struct s_new_instantaneous_damage_response const *, unsigned short, unsigned short *)
//{
//    mangled_ppc("?damage_section_damage_all_constraints@@YAXPBUs_new_model_damage_info@@PBUs_new_instantaneous_damage_response@@GPAG@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JJW4e_predictability@@@Z");
//};

//void area_of_effect_result_new(struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_result_new@@YAXPAUs_area_of_effect_result@@@Z");
//};

//void area_of_effect_cause_damage_to_object_and_children(long, long, struct s_damage_data *, float, enum e_predictability, struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_object_and_children@@YAXJJPAUs_damage_data@@MW4e_predictability@@PAUs_area_of_effect_result@@@Z");
//};

//long area_of_effect_cause_attached_damage_to_object(long, struct s_damage_data *, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_attached_damage_to_object@@YAJJPAUs_damage_data@@W4e_predictability@@@Z");
//};

//void area_of_effect_damage_test_model_target_obstruction(struct s_damage_data *, long)
//{
//    mangled_ppc("?area_of_effect_damage_test_model_target_obstruction@@YAXPAUs_damage_data@@J@Z");
//};

//void area_of_effect_cause_damage_to_object(struct s_damage_data *, long, long, bool, enum e_predictability, struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_object@@YAXPAUs_damage_data@@JJ_NW4e_predictability@@PAUs_area_of_effect_result@@@Z");
//};

//void area_of_effect_cause_damage_to_children_recursive(long, long, float, struct s_damage_data const *, enum e_predictability, struct s_area_of_effect_result *)
//{
//    mangled_ppc("?area_of_effect_cause_damage_to_children_recursive@@YAXJJMPBUs_damage_data@@W4e_predictability@@PAUs_area_of_effect_result@@@Z");
//};

//long compute_aoe_damage_to_object_model_targets(struct s_damage_data *, long, float, struct s_damage_response_data *)
//{
//    mangled_ppc("?compute_aoe_damage_to_object_model_targets@@YAJPAUs_damage_data@@JMPAUs_damage_response_data@@@Z");
//};

//bool area_effect_damage_consider_object(long, struct s_damage_data const *)
//{
//    mangled_ppc("?area_effect_damage_consider_object@@YA_NJPBUs_damage_data@@@Z");
//};

//void area_of_effect_result_record(struct s_area_of_effect_result *, long, float)
//{
//    mangled_ppc("?area_of_effect_result_record@@YAXPAUs_area_of_effect_result@@JM@Z");
//};

//long area_of_effect_result_get_primary_damage_object_index(struct s_area_of_effect_result const *)
//{
//    mangled_ppc("?area_of_effect_result_get_primary_damage_object_index@@YAJPBUs_area_of_effect_result@@@Z");
//};

//bool area_of_effect_object_comparison_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?area_of_effect_object_comparison_function@@YA_NPBX00@Z");
//};

//bool object_is_non_critical_area_of_effect_object(long)
//{
//    mangled_ppc("?object_is_non_critical_area_of_effect_object@@YA_NJ@Z");
//};

//bool area_effect_damage_test_obstruction(long, union real_point3d const *, struct s_damage_data const *, long)
//{
//    mangled_ppc("?area_effect_damage_test_obstruction@@YA_NJPBTreal_point3d@@PBUs_damage_data@@J@Z");
//};

//void debug_damage_add_obstruction_test(union real_point3d const *, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?debug_damage_add_obstruction_test@@YAXPBTreal_point3d@@00@Z");
//};

//void debug_damage_add_obstruction_test(union real_point3d const *, union vector3d const *, union real_point3d const *)
//{
//    mangled_ppc("?debug_damage_add_obstruction_test@@YAXPBTreal_point3d@@PBTvector3d@@0@Z");
//};

//struct s_new_model_damage_info const * object_get_damage_info(long)
//{
//    mangled_ppc("?object_get_damage_info@@YAPBUs_new_model_damage_info@@J@Z");
//};

//struct object_damage_section * object_damage_section_get(long, long)
//{
//    mangled_ppc("?object_damage_section_get@@YAPAUobject_damage_section@@JJ@Z");
//};

//void object_initialize_damage_sections(long)
//{
//    mangled_ppc("?object_initialize_damage_sections@@YAXJ@Z");
//};

//void object_deplete_shield(long, bool, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_deplete_shield@@YAXJ_NPBUs_damage_owner@@@Z");
//};

//void object_undeplete_shield_internal(long)
//{
//    mangled_ppc("?object_undeplete_shield_internal@@YAXJ@Z");
//};

//long get_player_index_from_object_or_parents(long)
//{
//    mangled_ppc("?get_player_index_from_object_or_parents@@YAJJ@Z");
//};

//bool object_is_cheating_death(long, struct s_damage_data const *)
//{
//    mangled_ppc("?object_is_cheating_death@@YA_NJPBUs_damage_data@@@Z");
//};

//bool player_is_cheating_death(long, struct s_damage_data const *)
//{
//    mangled_ppc("?player_is_cheating_death@@YA_NJPBUs_damage_data@@@Z");
//};

//public: enum e_damage_resistance_percentage_setting c_player_trait_shield_vitality::get_damage_resistance_percentage_setting(void) const
//{
//    mangled_ppc("?get_damage_resistance_percentage_setting@c_player_trait_shield_vitality@@QBA?AW4e_damage_resistance_percentage_setting@@XZ");
//};

//float damage_section_get_absolute_maximum_vitality(long, long)
//{
//    mangled_ppc("?damage_section_get_absolute_maximum_vitality@@YAMJJ@Z");
//};

//void debug_damage_track_damage_inflicted(long, float)
//{
//    mangled_ppc("?debug_damage_track_damage_inflicted@@YAXJM@Z");
//};

//public: struct s_damage_inflicted_history_event & s_damage_inflicted_history::get(void)
//{
//    mangled_ppc("?get@s_damage_inflicted_history@@QAAAAUs_damage_inflicted_history_event@@XZ");
//};

//public: void s_damage_inflicted_history::advance(void)
//{
//    mangled_ppc("?advance@s_damage_inflicted_history@@QAAXXZ");
//};

//void render_debug_damage_radius(struct s_damage_data const *, struct s_damage_effect_definition const *)
//{
//    mangled_ppc("?render_debug_damage_radius@@YAXPBUs_damage_data@@PBUs_damage_effect_definition@@@Z");
//};

//struct s_new_model_damage_section const * damage_info_get_body_damage_section(struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?damage_info_get_body_damage_section@@YAPBUs_new_model_damage_section@@PBUs_new_model_damage_info@@@Z");
//};

//struct s_new_model_damage_section const * damage_info_get_shield_damage_section(struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?damage_info_get_shield_damage_section@@YAPBUs_new_model_damage_section@@PBUs_new_model_damage_info@@@Z");
//};

//long damage_info_get_shield_damage_section_index(struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?damage_info_get_shield_damage_section_index@@YAJPBUs_new_model_damage_info@@@Z");
//};

//bool damage_info_section_is_body(long, long)
//{
//    mangled_ppc("?damage_info_section_is_body@@YA_NJJ@Z");
//};

//bool damage_info_section_is_any_shield(long, long)
//{
//    mangled_ppc("?damage_info_section_is_any_shield@@YA_NJJ@Z");
//};

//bool damage_info_section_is_main_shield(long, long)
//{
//    mangled_ppc("?damage_info_section_is_main_shield@@YA_NJJ@Z");
//};

//class c_global_material_type model_damage_get_shield_material_type(struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?model_damage_get_shield_material_type@@YA?AVc_global_material_type@@PBUs_new_model_damage_info@@@Z");
//};

//bool object_can_damage_authoritatively(long)
//{
//    mangled_ppc("?object_can_damage_authoritatively@@YA_NJ@Z");
//};

//bool object_clients_can_damage_authoritatively(long)
//{
//    mangled_ppc("?object_clients_can_damage_authoritatively@@YA_NJ@Z");
//};

//void object_enable_damage_section(struct object_damage_section *, float)
//{
//    mangled_ppc("?object_enable_damage_section@@YAXPAUobject_damage_section@@M@Z");
//};

//void object_disable_damage_section(struct object_damage_section *)
//{
//    mangled_ppc("?object_disable_damage_section@@YAXPAUobject_damage_section@@@Z");
//};

//void object_enable_damage_section_by_name(long, long, float)
//{
//    mangled_ppc("?object_enable_damage_section_by_name@@YAXJJM@Z");
//};

//void object_enable_damage_section_by_name_internal(long, long, bool, float)
//{
//    mangled_ppc("?object_enable_damage_section_by_name_internal@@YAXJJ_NM@Z");
//};

//void object_disable_damage_section_by_name(long, long)
//{
//    mangled_ppc("?object_disable_damage_section_by_name@@YAXJJ@Z");
//};

//char * damage_transfer_format_block_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?damage_transfer_format_block_proc@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//char * new_instantaneous_damage_response_format_block_proc(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?new_instantaneous_damage_response_format_block_proc@@YAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//void model_postprocess_build_damage_new(long)
//{
//    mangled_ppc("?model_postprocess_build_damage_new@@YAXJ@Z");
//};

//long resolve_damage_section_index(struct s_model_damage_info const *, struct s_new_model_damage_info const *, long)
//{
//    mangled_ppc("?resolve_damage_section_index@@YAJPBUs_model_damage_info@@PBUs_new_model_damage_info@@J@Z");
//};

//void damage_info_postprocess_new(long)
//{
//    mangled_ppc("?damage_info_postprocess_new@@YAXJ@Z");
//};

//void damage_info_postprocess_verify_damage_section_index(long, short &)
//{
//    mangled_ppc("?damage_info_postprocess_verify_damage_section_index@@YAXJAAF@Z");
//};

//bool compare_recharge_fractions(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_recharge_fractions@@YA_NPBX00@Z");
//};

//bool compare_instant_responses(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_instant_responses@@YA_NPBX00@Z");
//};

//void object_damage_new_new(long)
//{
//    mangled_ppc("?object_damage_new_new@@YAXJ@Z");
//};

//void object_damage_new(long)
//{
//    mangled_ppc("?object_damage_new@@YAXJ@Z");
//};

//void object_cause_damage_new(struct s_damage_data *, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_new@@YAXPAUs_damage_data@@JFFFW4e_predictability@@@Z");
//};

//bool object_damage_update_new(long)
//{
//    mangled_ppc("?object_damage_update_new@@YA_NJ@Z");
//};

//bool object_damage_update(long)
//{
//    mangled_ppc("?object_damage_update@@YA_NJ@Z");
//};

//bool object_damage_update_damage_section_timers(long, struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?object_damage_update_damage_section_timers@@YA_NJPBUs_new_model_damage_info@@@Z");
//};

//bool object_damage_update_current_and_recent_damage(long)
//{
//    mangled_ppc("?object_damage_update_current_and_recent_damage@@YA_NJ@Z");
//};

//void object_damage_update_dies_from_no_riders(long)
//{
//    mangled_ppc("?object_damage_update_dies_from_no_riders@@YAXJ@Z");
//};

//void object_damage_update_perform_act_of_god_damage(long)
//{
//    mangled_ppc("?object_damage_update_perform_act_of_god_damage@@YAXJ@Z");
//};

//void object_damage_update_reset_damage_responses(long)
//{
//    mangled_ppc("?object_damage_update_reset_damage_responses@@YAXJ@Z");
//};

//bool object_damage_update_current_and_recent_damage(struct s_damage_decay const *, bool, float, float *, float *, char *, char *)
//{
//    mangled_ppc("?object_damage_update_current_and_recent_damage@@YA_NPBUs_damage_decay@@_NMPAM2PAD3@Z");
//};

//bool object_damage_update_shield_impacts(struct s_damage_decay const *, bool, float, float *, float *, char *)
//{
//    mangled_ppc("?object_damage_update_shield_impacts@@YA_NPBUs_damage_decay@@_NMPAM2PAD@Z");
//};

//bool object_damage_update_recharging(long, struct s_new_model_damage_info const *)
//{
//    mangled_ppc("?object_damage_update_recharging@@YA_NJPBUs_new_model_damage_info@@@Z");
//};

//bool object_damage_update_recharging_body(long, struct s_new_model_damage_info const *, struct s_new_model_damage_section *, struct object_damage_section *, struct s_unit_cached_damage_traits const *)
//{
//    mangled_ppc("?object_damage_update_recharging_body@@YA_NJPBUs_new_model_damage_info@@PAUs_new_model_damage_section@@PAUobject_damage_section@@PBUs_unit_cached_damage_traits@@@Z");
//};

//bool object_damage_update_recharging_shield(long, struct s_new_model_damage_info const *, long, struct s_new_model_damage_section *, struct object_damage_section *, struct s_unit_cached_damage_traits const *)
//{
//    mangled_ppc("?object_damage_update_recharging_shield@@YA_NJPBUs_new_model_damage_info@@JPAUs_new_model_damage_section@@PAUobject_damage_section@@PBUs_unit_cached_damage_traits@@@Z");
//};

//public: enum e_shield_recharge_rate_percentage_setting c_player_trait_shield_vitality::get_overshield_recharge_rate_percentage_setting(void) const
//{
//    mangled_ppc("?get_overshield_recharge_rate_percentage_setting@c_player_trait_shield_vitality@@QBA?AW4e_shield_recharge_rate_percentage_setting@@XZ");
//};

//bool object_damage_update_recharging_damage_section(long, struct s_new_model_damage_info const *, long, struct s_new_model_damage_section *, struct object_damage_section *)
//{
//    mangled_ppc("?object_damage_update_recharging_damage_section@@YA_NJPBUs_new_model_damage_info@@JPAUs_new_model_damage_section@@PAUobject_damage_section@@@Z");
//};

//void damage_effect_new_on_object(long, long, struct s_damage_owner const *)
//{
//    mangled_ppc("?damage_effect_new_on_object@@YAXJJPBUs_damage_owner@@@Z");
//};

//void object_apply_damage_aftermath_new(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath_new@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_apply_damage_aftermath_from_authority_new(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath_from_authority_new@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_destroy_new(long)
//{
//    mangled_ppc("?object_destroy_new@@YAXJ@Z");
//};

//void object_destroy_without_delayed_effects_new(long)
//{
//    mangled_ppc("?object_destroy_without_delayed_effects_new@@YAXJ@Z");
//};

//void object_destroy_without_delayed_effects(long)
//{
//    mangled_ppc("?object_destroy_without_delayed_effects@@YAXJ@Z");
//};

//void object_kill_instantly_new(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_kill_instantly_new@@YAXJ_N00PBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_damage_damage_section_new(long, long, float, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_damage_damage_section_new@@YAXJJMABUs_damage_reporting_info@@@Z");
//};

//void object_scripting_cause_damage_to_damage_section(long, long, float, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_scripting_cause_damage_to_damage_section@@YAXJJMABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_new(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_new@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_silent_new(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_silent_new@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_silent@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_cause_fatal_damage_aftermath_new(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long)
//{
//    mangled_ppc("?object_cause_fatal_damage_aftermath_new@@YAXJJ_NDFPBTvector3d@@ABUs_damage_reporting_info@@JJ@Z");
//};

//void object_cause_fatal_damage_aftermath(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long)
//{
//    mangled_ppc("?object_cause_fatal_damage_aftermath@@YAXJJ_NDFPBTvector3d@@ABUs_damage_reporting_info@@JJ@Z");
//};

//void render_debug_object_damage_new(void)
//{
//    mangled_ppc("?render_debug_object_damage_new@@YAXXZ");
//};

//void render_debug_object_damage(void)
//{
//    mangled_ppc("?render_debug_object_damage@@YAXXZ");
//};

//void render_debug_damage_sections(void)
//{
//    mangled_ppc("?render_debug_damage_sections@@YAXXZ");
//};

//void render_debug_damage_player_recent_inflicted(void)
//{
//    mangled_ppc("?render_debug_damage_player_recent_inflicted@@YAXXZ");
//};

//void object_deplete_shield_new(long, bool, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_deplete_shield_new@@YAXJ_NPBUs_damage_owner@@@Z");
//};

//bool object_constraint_is_broken_new(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_broken_new@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_broken@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_loosened_new(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_loosened_new@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_loosened@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//void object_damage_constraints_new(long, unsigned short, unsigned short)
//{
//    mangled_ppc("?object_damage_constraints_new@@YAXJGG@Z");
//};

//void object_damage_handle_resurrection_new(long)
//{
//    mangled_ppc("?object_damage_handle_resurrection_new@@YAXJ@Z");
//};

//void object_damage_handle_resurrection(long)
//{
//    mangled_ppc("?object_damage_handle_resurrection@@YAXJ@Z");
//};

//bool object_scripting_vitality_pinned_new(long)
//{
//    mangled_ppc("?object_scripting_vitality_pinned_new@@YA_NJ@Z");
//};

//bool object_scripting_vitality_pinned(long)
//{
//    mangled_ppc("?object_scripting_vitality_pinned@@YA_NJ@Z");
//};

//void damage_section_response_fire_from_simulation_event_new(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type)
//{
//    mangled_ppc("?damage_section_response_fire_from_simulation_event_new@@YAXJJJABUs_damage_reporting_info@@W4e_damage_section_response_type@@@Z");
//};

//void damage_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type)
//{
//    mangled_ppc("?damage_response_fire_from_simulation_event@@YAXJJJABUs_damage_reporting_info@@W4e_damage_section_response_type@@@Z");
//};

//long area_of_effect_cause_damage_new(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage_new@@YAJPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//long area_of_effect_cause_damage_new(struct s_damage_data *, long, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage_new@@YAJPAUs_damage_data@@JJW4e_predictability@@@Z");
//};

//void object_initialize_vitality_new(long, float *, float *)
//{
//    mangled_ppc("?object_initialize_vitality_new@@YAXJPAM0@Z");
//};

//void object_initialize_vitality(long, float *, float *)
//{
//    mangled_ppc("?object_initialize_vitality@@YAXJPAM0@Z");
//};

//void damage_handle_vehicle_exit_new(long, long)
//{
//    mangled_ppc("?damage_handle_vehicle_exit_new@@YAXJJ@Z");
//};

//void damage_handle_vehicle_exit(long, long)
//{
//    mangled_ppc("?damage_handle_vehicle_exit@@YAXJJ@Z");
//};

//void damage_effect_new_on_weapon_new(long, long)
//{
//    mangled_ppc("?damage_effect_new_on_weapon_new@@YAXJJ@Z");
//};

//void damage_effect_new_on_weapon(long, long)
//{
//    mangled_ppc("?damage_effect_new_on_weapon@@YAXJJ@Z");
//};

//bool material_is_headshotable_new(long, struct s_model_material const *)
//{
//    mangled_ppc("?material_is_headshotable_new@@YA_NJPBUs_model_material@@@Z");
//};

//bool material_is_headshotable(struct s_new_model_damage_info const *, struct s_model_material const *)
//{
//    mangled_ppc("?material_is_headshotable@@YA_NPBUs_new_model_damage_info@@PBUs_model_material@@@Z");
//};

//void object_scripting_ignores_emp_new(long, bool)
//{
//    mangled_ppc("?object_scripting_ignores_emp_new@@YAXJ_N@Z");
//};

//void object_damage_stop_recharging_effect_new(long, long)
//{
//    mangled_ppc("?object_damage_stop_recharging_effect_new@@YAXJJ@Z");
//};

//public: bool c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>::operator==(enum e_damage_reporting_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@QBA_NW4e_damage_reporting_type@@@Z");
//};

//public: static long s_static_array<struct s_damage_transfer_initiator, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@SAJXZ");
//};

//public: void s_static_array<struct s_damage_transfer_initiator, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@QAAXJ@Z");
//};

//public: static long s_static_array<struct s_aoe_obstruction_result, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_aoe_obstruction_result@@$0CA@@@SAJXZ");
//};

//public: c_basic_buffer<void>::c_basic_buffer<void>(void *, unsigned long)
//{
//    mangled_ppc("??0?$c_basic_buffer@X@@QAA@PAXK@Z");
//};

//public: long * s_static_array<long, 2>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$01@@QAAPAJXZ");
//};

//public: static long s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_damage_acceleration@s_damage_globals@@$0EA@@@SAJXZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//?sort_range@?$s_static_array@Us_area_of_effect_object@@$0EA@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@Us_area_of_effect_object@@$0EA@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: void c_flags_no_init<short, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@FG$0BA@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: void c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_object_inhibited_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_object_inhibited_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::set(enum e_new_damage_section_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@QAAXW4e_new_damage_section_flag@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_damage_effect_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_damage_effect_definition_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_damage_effect_definition_flags@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 64>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0EA@@@QAAXJ_N@Z");
//};

//public: long c_big_flags_typed_no_init<long, 64>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@J$0EA@@@QBAJXZ");
//};

//public: enum e_damage_resistance_percentage_setting c_game_engine_option_real<struct s_damage_resistance_option_metadata>::get_value_direct(void) const
//{
//    mangled_ppc("?get_value_direct@?$c_game_engine_option_real@Us_damage_resistance_option_metadata@@@@QBA?AW4e_damage_resistance_percentage_setting@@XZ");
//};

//public: enum e_shield_recharge_rate_percentage_setting c_game_engine_option_real<struct s_shield_recharge_rate_option_metadata>::get_value_direct(void) const
//{
//    mangled_ppc("?get_value_direct@?$c_game_engine_option_real@Us_shield_recharge_rate_option_metadata@@@@QBA?AW4e_shield_recharge_rate_percentage_setting@@XZ");
//};

//public: enum e_damage_modifier_percentage_setting c_game_engine_option_real<struct s_damage_modifier_option_metadata>::get_value_direct(void) const
//{
//    mangled_ppc("?get_value_direct@?$c_game_engine_option_real@Us_damage_modifier_option_metadata@@@@QBA?AW4e_damage_modifier_percentage_setting@@XZ");
//};

//public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::test(enum e_game_skulls) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA_NW4e_game_skulls@@@Z");
//};

//public: struct s_damage_globals::s_damage_acceleration & s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_damage_acceleration@s_damage_globals@@$0EA@@@QAAAAUs_damage_acceleration@s_damage_globals@@J@Z");
//};

//public: struct s_damage_transfer_initiator & s_static_array<struct s_damage_transfer_initiator, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@QAAAAUs_damage_transfer_initiator@@J@Z");
//};

//public: struct s_damage_transfer_initiator const & s_static_array<struct s_damage_transfer_initiator, 16>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@QBAABUs_damage_transfer_initiator@@H@Z");
//};

//public: struct s_area_of_effect_object & s_static_array<struct s_area_of_effect_object, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_area_of_effect_object@@$0EA@@@QAAAAUs_area_of_effect_object@@J@Z");
//};

//public: struct s_aoe_obstruction_result & s_static_array<struct s_aoe_obstruction_result, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_aoe_obstruction_result@@$0CA@@@QAAAAUs_aoe_obstruction_result@@J@Z");
//};

//public: bool c_flags_no_init<short, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@FG$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_damage_effect_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_damage_effect_definition_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_damage_effect_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_damage_effect_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_damage_effect_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_damage_effect_definition_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_damage_effect_definition_flags@@@Z");
//};

//protected: void c_game_engine_option<struct s_damage_resistance_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Us_damage_resistance_option_metadata@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct s_shield_recharge_rate_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Us_shield_recharge_rate_option_metadata@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct s_damage_modifier_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Us_damage_modifier_option_metadata@@@@IBAXXZ");
//};

//public: static bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::valid_bit(enum e_game_skulls)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@SA_NW4e_game_skulls@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_skulls)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@CAKW4e_game_skulls@@@Z");
//};

//public: static bool s_static_array<struct s_damage_globals::s_damage_acceleration, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_damage_acceleration@s_damage_globals@@$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_damage_transfer_initiator, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_damage_transfer_initiator, 16>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_damage_transfer_initiator@@$0BA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_area_of_effect_object, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_area_of_effect_object@@$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_aoe_obstruction_result, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_aoe_obstruction_result@@$0CA@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_damage_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_damage_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_damage_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_damage_globals_allocator@@YAXXZ");
//};

