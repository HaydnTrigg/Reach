/* ---------- headers */

#include "omaha\ai\actor_stimulus.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_danger_assessment_flags const c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@2W4e_danger_assessment_flags@@B"
// public: static long const c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@2JB"
// except_record_837B80C0; // "except_record_837B80C0"
// except_record_837B8EE8; // "except_record_837B8EE8"
// except_record_837BACD8; // "except_record_837BACD8"
// except_record_837BB1C8; // "except_record_837BB1C8"
// except_record_837BB5D0; // "except_record_837BB5D0"
// except_record_837BC930; // "except_record_837BC930"
// except_record_837BD008; // "except_record_837BD008"
// except_record_837BEC00; // "except_record_837BEC00"
// except_record_837BFF80; // "except_record_837BFF80"
// struct s_stimulus_definition g_attach_script_stimulus_definition; // "?g_attach_script_stimulus_definition@@3Us_stimulus_definition@@A"
// struct s_stimulus_definition g_performance_stimulus_definition; // "?g_performance_stimulus_definition@@3Us_stimulus_definition@@A"
// struct s_stimulus_definition g_vehicle_stimulus_definition; // "?g_vehicle_stimulus_definition@@3Us_stimulus_definition@@A"
// struct s_stimulus_definition g_volatile_stimulus_definition; // "?g_volatile_stimulus_definition@@3Us_stimulus_definition@@A"
// struct s_stimulus_definition g_projectile_stimulus_definition; // "?g_projectile_stimulus_definition@@3Us_stimulus_definition@@A"
// struct s_stimulus_definition g_activity_stimulus_definition; // "?g_activity_stimulus_definition@@3Us_stimulus_definition@@A"
// class c_stimulus_flags g_situational_stimuli_flags; // "?g_situational_stimuli_flags@@3Vc_stimulus_flags@@A"
// class c_stimulus_flags g_danger_stimuli_flags; // "?g_danger_stimuli_flags@@3Vc_stimulus_flags@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_stimulus_data_allocator::*)(void *)> g_stimulus_data_allocator; // "?g_stimulus_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_stimulus_ref_allocator::*)(void *)> g_stimulus_ref_allocator; // "?g_stimulus_ref_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@A"
// struct s_data_array *stimulus_data; // "?stimulus_data@@3PAUs_data_array@@A"
// struct s_data_array *stimulus_ref_data; // "?stimulus_ref_data@@3PAUs_data_array@@A"

// void __tls_set_g_stimulus_data_allocator(void *);
// void __tls_set_g_stimulus_ref_allocator(void *);
// public: struct c_stimulus_type & c_stimulus_type::operator=(long const &);
// void stimuli_initialize(void);
// void stimuli_initialize_for_new_map(void);
// public: s_stimulus_datum::s_stimulus_datum(void);
// void stimuli_dispose_from_old_map(void);
// void stimuli_update(void);
// void stimulus_data_delete(long);
// bool stimulus_update(long);
// void stimulus_distribute(long);
// void stimulus_datum_iterator_new(struct s_stimulus_datum_iterator *);
// void stimulus_datum_iterator_new(struct s_stimulus_datum_iterator *, class c_stimulus_flags *);
// struct s_stimulus_datum * stimulus_datum_iterator_next(struct s_stimulus_datum_iterator *);
// void stimulus_data_ref_iterator_new(struct s_stimulus_ref_iterator *, long);
// void stimulus_data_ref_iterator_new(struct s_stimulus_ref_iterator *, long, class c_stimulus_flags *);
// void stimulus_actor_ref_iterator_new(struct s_stimulus_ref_iterator *, long);
// void stimulus_actor_ref_iterator_new(struct s_stimulus_ref_iterator *, long, class c_stimulus_flags *);
// void stimulus_ref_iterator_new(struct s_stimulus_ref_iterator *, long, enum e_stimulus_ref_link_type, class c_stimulus_flags *);
// struct s_stimulus_ref_datum * stimulus_ref_iterator_next(struct s_stimulus_ref_iterator *);
// void stimulus_register_on_actor(class c_stimulus_payload const *, long);
// long stimulus_register(class c_stimulus_payload const *, class c_stimulus_distribution const *, class c_stimulus_origin const *);
// long stimulus_data_new(void);
// void stimulus_data_initialize(long);
// long stimulus_find_existing(class c_stimulus_payload const *, class c_stimulus_distribution const *, class c_stimulus_origin const *);
// void stimulus_remove(long);
// void stimulus_remove_references(long);
// void stimulus_ref_remove(long);
// void stimulus_ref_delete(long);
// public: void c_stimulus_payload::clear(void);
// public: bool c_stimulus_payload::active(void) const;
// public: void c_stimulus_payload::set(enum e_stimulus, short);
// public: void c_stimulus_payload::set_stimulus_by_name(long, short);
// public: void c_stimulus_payload::set_prefer_firing_points(float);
// public: bool c_stimulus_payload::set_attach_script(long);
// public: void c_stimulus_payload::set_combat_cue(long);
// public: void c_stimulus_payload::set_performance(long);
// public: void c_stimulus_payload::set_destination_changed_juke(float, enum e_physics_animation_state);
// public: void c_stimulus_payload::set_combat_sync_action_group(long, float);
// public: void c_stimulus_payload::set_projectile(long);
// public: void c_stimulus_payload::set_random_duration(float, float);
// public: void c_stimulus_payload::set_duration(float);
// public: void c_stimulus_payload::set_duration_ticks(short);
// public: short c_stimulus_payload::get_duration(void) const;
// public: void c_stimulus_origin::clear(void);
// public: void c_stimulus_origin::set_actor(long);
// public: void c_stimulus_origin::set_object(long);
// public: void c_stimulus_origin::set_instantaneous_projectile(long);
// public: void c_stimulus_origin::set_cue(long);
// public: void c_stimulus_origin::set_performance(long);
// public: void c_stimulus_origin::set_fireteam(long);
// public: enum e_stimulus_hostility c_stimulus_origin::get_hostility(long) const;
// public: bool c_stimulus_origin::get_position_velocity(union real_point3d *, union vector3d *) const;
// public: void c_stimulus_distribution::clear(void);
// public: void c_stimulus_distribution::set_radial(float);
// public: void c_stimulus_distribution::set_radial_travel_time(float);
// public: void c_stimulus_distribution::set_actor(long);
// public: void c_stimulus_distribution::set_clump(long);
// public: void c_stimulus_distribution::set_prop(long, class c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>);
// public: void c_stimulus_distribution::set_projectile(long);
// public: void c_stimulus_distribution::set_cue(long);
// public: void c_stimulus_distribution::set_performance(long, class c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>);
// public: void c_stimulus_distribution::set_probability(float);
// public: void c_stimulus_distribution::set_character(short);
// public: void c_stimulus_distribution::set_weapon(short);
// public: void c_stimulus_distribution::set_task(short, short);
// public: void c_stimulus_distribution::set_fireteam(long);
// public: void c_stimulus_distribution::set_lifetime(float);
// private: bool c_stimulus_distribution::stimulus_cue_distribution_test_actor(long, long, class c_stimulus_origin const *) const;
// private: bool c_stimulus_distribution::stimulus_performance_distribution_test_actor(long, class c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>, long, class c_stimulus_origin const *) const;
// public: bool c_stimulus_distribution::test_actor(long, class c_stimulus_origin const *) const;
// private: bool c_stimulus_distribution::test_actor(enum e_stimulus_distribution, unsigned char const *, long, class c_stimulus_origin const *) const;
// public: bool c_stimulus_distribution::get_radius(float *) const;
// private: bool c_stimulus_distribution::get_radius(enum e_stimulus_distribution, unsigned char const *, float *) const;
// public: bool c_stimulus_distribution::active(void) const;
// public: bool c_stimulus_distribution::valid(void) const;
// void stimulus_distribution_iterator_new(struct s_stimulus_distribution_iterator *, long);
// struct actor_datum * stimulus_distribution_iterator_next(struct s_stimulus_distribution_iterator *);
// public: char const * c_stimulus_distribution::get_name(void) const;
// bool actor_stimulus_register(long, long);
// long stimulus_ref_new(void);
// void stimulus_ref_initialize(long);
// bool actor_stimulus_test(long, enum e_stimulus);
// bool actor_stimulus_test(long, struct c_stimulus_type);
// bool actor_stimulus_test(long, class c_stimulus_flags *);
// void actor_stimuli_update(long);
// void actor_apply_situational_stimuli(long);
// void actor_stimulus_set_evasion_chances(long, long);
// void stimuli_handle_deleted_actor(long);
// void stimuli_handle_deleted_prop(long);
// void stimuli_handle_deleted_cue(long);
// void stimuli_handle_new_prop(long);
// void stimulus_assess_danger_zone(long);
// void stimulus_register_for_prop(long, enum e_stimulus);
// void stimulus_assess_vehicle_danger(long);
// float stimulus_get_prop_radius(long);
// void stimuli_handle_deleted_clump(long);
// bool stimulus_data_build_information(long, struct s_stimulus_data_information *);
// void stimulus_information_build_actor_information(struct s_stimulus_data_information *, class c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5> *, long, struct s_stimulus_actor_information *);
// bool attach_script_stimulus_test_func(long, long);
// void attach_script_stimulus_register_func(long);
// void activity_stimulus_register_func(long);
// void performance_stimulus_register_func(long);
// bool destroyed_vehicle_is_dangerous(long, short *);
// bool volatile_stimulus_test_func(long, long);
// void volatile_stimulus_register_func(long);
// bool projectile_stimulus_test_func(long, long);
// bool vehicle_stimulus_test_func(long, long);
// bool actor_assess_danger(long, float, class c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5> *, struct s_danger_assessment *, struct s_stimulus_data_information *);
// bool volatile_stimulus_imminent(long);
// long stimulus_get_name(struct c_stimulus_type);
// void actor_render_stimuli(long);
// void stimulus_ref_render(long, union real_point3d const *);
// void stimulus_data_render(long);
// void stimuli_debug(void);
// void actor_stimulus_tracking_or_locking(long, long, short);
// void actor_stimulus_allegiance_update(long, long);
// void actor_stimulus_surprise(long, short, long, union vector3d const *);
// void actor_stimulus_prop_acknowledged(long, long, bool);
// void actor_stimulus_prop_sighted(long, long, bool);
// void actor_stimulus_friend_body_sighted(long, long);
// void actor_stimulus_prop_sound(long, long, bool);
// void actor_stimulus_acknowledged_danger_zone(long, long);
// void actor_stimulus_damage(long, short, long, long, float, union vector3d const *);
// void actor_stimulus_bumped(long, long);
// void actor_stimulus_environmental_noise(long, long, union real_point3d const *, short);
// void actor_stimulus_weapon_impact(long, long, union real_point3d const *, short);
// void actor_stimulus_weapon_detonation(long, long, union real_point3d const *, short);
// void actor_stimulus_heard_shooting(long, long, long);
// void actor_stimulus_prop_just_killed(long, long, long);
// void actor_stimulus_prop_fleeing(long, long);
// void actor_stimulus_vehicle_eviction(long, long);
// public: void c_data_iterator<struct s_stimulus_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_stimulus_datum>::next(void);
// public: long c_data_iterator<struct s_stimulus_datum>::get_index(void) const;
// public: bool c_enum_no_init<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::operator==(enum e_prop_stimulus) const;
// public: enum e_task_attitude c_enum_no_init<enum e_task_attitude, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_task_attitude(void) const;
// public: c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>(unsigned long);
// public: class c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: bool c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_stimulus_ref_flags) const;
// public: void c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_stimulus_ref_flags, bool);
// public: enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::get_highest_bit_set(void) const;
// public: enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::get_lowest_bit_set(void) const;
// public: void c_big_flags_typed_no_init<enum e_stimulus, 43>::and_range(class c_big_flags_typed_no_init<enum e_stimulus, 43> const *, enum e_stimulus, enum e_stimulus);
// public: void c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_distribution_performance_flags) const;
// public: void c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_distribution_prop_flags) const;
// public: void c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_distribution_prop_flags, bool);
// public: bool c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_distribution_character_flags) const;
// public: bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::test(enum e_danger_assessment_flags) const;
// public: bool c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_prop_ref_flags) const;
// public: void c_flags_no_init<enum e_squad_runtime_flags, short, 16, struct s_default_enum_string_resolver>::set(enum e_squad_runtime_flags, bool);
// public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_stimulus_ref_flags);
// private: static short c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_stimulus_ref_flags);
// protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_first_slice_of_chunk_inclusive(enum e_stimulus);
// public: static bool c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_prop_flags);
// private: static short c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_prop_flags);
// public: static bool c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_character_flags);
// private: static unsigned char c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_character_flags);
// public: static bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::valid_bit(enum e_danger_assessment_flags);
// public: static bool c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_prop_ref_flags);
// private: static unsigned short c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_prop_ref_flags);
// public: bool c_stimulus_type::operator==(enum e_stimulus const &) const;
// public: bool c_stimulus_type::operator!=(enum e_stimulus const &) const;
// public: struct c_stimulus_type & c_stimulus_type::operator=(enum e_stimulus const &);
// public: enum e_stimulus_distribution c_stimulus_distribution::get_distribution_type(void) const;
// public: void c_stimulus_distribution::set_lifetime_ticks(short);
// public: bool c_stimulus_distribution::is_immediate(void) const;
// public: struct s_stimulus_distribution_actor * c_stimulus_distribution::get_actor_data(void);
// public: struct s_stimulus_distribution_actor * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_actor, 0>(void);
// public: struct s_stimulus_distribution_actor const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_actor, 0>(void) const;
// public: struct s_stimulus_distribution_radial * c_stimulus_distribution::get_radial_data(void);
// public: struct s_stimulus_distribution_radial * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_radial, 2>(void);
// public: struct s_stimulus_distribution_radial const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_radial, 2>(void) const;
// public: struct s_stimulus_distribution_clump * c_stimulus_distribution::get_clump_data(void);
// public: struct s_stimulus_distribution_clump * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_clump, 1>(void);
// public: struct s_stimulus_distribution_clump const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_clump, 1>(void) const;
// public: struct s_stimulus_distribution_prop * c_stimulus_distribution::get_prop_data(void);
// public: struct s_stimulus_distribution_prop * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_prop, 3>(void);
// public: struct s_stimulus_distribution_prop const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_prop, 3>(void) const;
// public: struct s_stimulus_distribution_prop const * c_stimulus_distribution::get_prop_data_const(void) const;
// public: struct s_stimulus_distribution_projectile * c_stimulus_distribution::get_projectile_data(void);
// public: struct s_stimulus_distribution_projectile * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_projectile, 4>(void);
// public: struct s_stimulus_distribution_projectile const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_projectile, 4>(void) const;
// public: struct s_stimulus_distribution_performance * c_stimulus_distribution::get_performance_data(void);
// public: struct s_stimulus_distribution_performance * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_performance, 5>(void);
// public: struct s_stimulus_distribution_performance const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_performance, 5>(void) const;
// public: struct s_stimulus_distribution_probability * c_stimulus_distribution::get_probability_data(void);
// public: struct s_stimulus_distribution_probability * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_probability, 6>(void);
// public: struct s_stimulus_distribution_probability const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_probability, 6>(void) const;
// public: struct s_stimulus_distribution_character * c_stimulus_distribution::get_character_data(void);
// public: struct s_stimulus_distribution_character * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_character, 7>(void);
// public: struct s_stimulus_distribution_character const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_character, 7>(void) const;
// public: struct s_stimulus_distribution_weapon * c_stimulus_distribution::get_weapon_data(void);
// public: struct s_stimulus_distribution_weapon * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_weapon, 8>(void);
// public: struct s_stimulus_distribution_weapon const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_weapon, 8>(void) const;
// public: struct s_stimulus_distribution_task * c_stimulus_distribution::get_task_data(void);
// public: struct s_stimulus_distribution_task * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_task, 9>(void);
// public: struct s_stimulus_distribution_task const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_task, 9>(void) const;
// public: struct s_stimulus_distribution_fireteam * c_stimulus_distribution::get_fireteam_data(void);
// public: struct s_stimulus_distribution_fireteam * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_fireteam, 10>(void);
// public: struct s_stimulus_distribution_fireteam const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_fireteam, 10>(void) const;
// public: struct s_stimulus_distribution_cue * c_stimulus_distribution::get_cue_data(void);
// public: struct s_stimulus_distribution_cue * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_cue, 11>(void);
// public: struct s_stimulus_distribution_cue const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_cue, 11>(void) const;
// public: bool c_stimulus_distribution::operator==(class c_stimulus_distribution const &) const;
// private: void c_stimulus_distribution::clear_data(void);
// public: enum e_stimulus_origin c_stimulus_origin::get_origin_type(void) const;
// public: bool c_stimulus_origin::valid(void) const;
// public: struct s_stimulus_origin_actor * c_stimulus_origin::get_actor_data(void);
// public: struct s_stimulus_origin_actor * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_actor, 0>(void);
// public: struct s_stimulus_origin_actor const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_actor, 0>(void) const;
// public: struct s_stimulus_origin_actor const * c_stimulus_origin::get_actor_data_const(void) const;
// public: struct s_stimulus_origin_object * c_stimulus_origin::get_object_data(void);
// public: struct s_stimulus_origin_object * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_object, 1>(void);
// public: struct s_stimulus_origin_object const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_object, 1>(void) const;
// public: struct s_stimulus_origin_object const * c_stimulus_origin::get_object_data_const(void) const;
// public: struct s_stimulus_origin_instantaneous_projectile * c_stimulus_origin::get_instantaneous_projectile_data(void);
// public: struct s_stimulus_origin_instantaneous_projectile * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_instantaneous_projectile, 2>(void);
// public: struct s_stimulus_origin_instantaneous_projectile const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_instantaneous_projectile, 2>(void) const;
// public: struct s_stimulus_origin_instantaneous_projectile const * c_stimulus_origin::get_instantaneous_projectile_data_const(void) const;
// public: struct s_stimulus_origin_cue * c_stimulus_origin::get_cue_data(void);
// public: struct s_stimulus_origin_cue * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_cue, 3>(void);
// public: struct s_stimulus_origin_cue const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_cue, 3>(void) const;
// public: struct s_stimulus_origin_cue const * c_stimulus_origin::get_cue_data_const(void) const;
// public: struct s_stimulus_origin_performance * c_stimulus_origin::get_performance_data(void);
// public: struct s_stimulus_origin_performance * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_performance, 4>(void);
// public: struct s_stimulus_origin_performance const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_performance, 4>(void) const;
// public: struct s_stimulus_origin_performance const * c_stimulus_origin::get_performance_data_const(void) const;
// public: struct s_stimulus_origin_fireteam * c_stimulus_origin::get_fireteam_data(void);
// public: struct s_stimulus_origin_fireteam * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_fireteam, 5>(void);
// public: struct s_stimulus_origin_fireteam const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_fireteam, 5>(void) const;
// public: struct s_stimulus_origin_fireteam const * c_stimulus_origin::get_fireteam_data_const(void) const;
// public: bool c_stimulus_origin::operator==(class c_stimulus_origin const &) const;
// private: void c_stimulus_origin::clear_data(void);
// public: struct c_stimulus_type c_stimulus_payload::get_stimulus_type(void) const;
// public: bool c_stimulus_payload::valid(void) const;
// public: bool c_stimulus_payload::operator==(class c_stimulus_payload const &) const;
// public: bool c_stimulus_type::operator==(struct c_stimulus_type const &) const;
// public: struct s_stimulus_payload_combat_cue * c_stimulus_payload::get_combat_cue_data(void);
// public: struct s_stimulus_payload_combat_cue * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_combat_cue, 32>(void);
// public: struct s_stimulus_payload_combat_cue const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_combat_cue, 32>(void) const;
// public: bool c_stimulus_type::operator==(short const &) const;
// public: struct s_stimulus_payload_performance * c_stimulus_payload::get_performance_data(void);
// public: struct s_stimulus_payload_performance * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_performance, 30>(void);
// public: struct s_stimulus_payload_performance const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_performance, 30>(void) const;
// public: struct s_stimulus_payload_performance const * c_stimulus_payload::get_performance_data_const(void) const;
// public: struct s_stimulus_payload_attach_script * c_stimulus_payload::get_attach_script_data(void);
// public: struct s_stimulus_payload_attach_script * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_attach_script, 29>(void);
// public: struct s_stimulus_payload_attach_script const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_attach_script, 29>(void) const;
// public: struct s_stimulus_payload_attach_script const * c_stimulus_payload::get_attach_script_data_const(void) const;
// public: struct s_stimulus_payload_combat_sync_action * c_stimulus_payload::get_combat_sync_action_data(void);
// public: struct s_stimulus_payload_combat_sync_action * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_combat_sync_action, 31>(void);
// public: struct s_stimulus_payload_combat_sync_action const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_combat_sync_action, 31>(void) const;
// public: struct s_stimulus_payload_direction_changed_juke * c_stimulus_payload::get_juke_data(void);
// public: struct s_stimulus_payload_direction_changed_juke * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_direction_changed_juke, 21>(void);
// public: struct s_stimulus_payload_direction_changed_juke const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_direction_changed_juke, 21>(void) const;
// public: struct s_stimulus_payload_prefer_firing_points * c_stimulus_payload::get_firing_points_data(void);
// public: struct s_stimulus_payload_prefer_firing_points * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_prefer_firing_points, 28>(void);
// public: struct s_stimulus_payload_prefer_firing_points const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_prefer_firing_points, 28>(void) const;
// public: struct s_stimulus_payload_projectile * c_stimulus_payload::get_projectile_data(void);
// public: struct s_stimulus_payload_projectile * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_projectile, 36>(void);
// public: struct s_stimulus_payload_projectile const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_projectile, 36>(void) const;
// public: struct s_stimulus_payload_projectile const * c_stimulus_payload::get_projectile_data_const(void) const;
// private: void c_stimulus_payload::clear_data(void);
// public: void c_stimulus_flags::set(struct c_stimulus_type, long, bool);
// public: void c_stimulus_flags::set(enum e_stimulus, bool);
// public: bool c_stimulus_flags::test(struct c_stimulus_type) const;
// public: bool c_stimulus_flags::test(enum e_stimulus) const;
// public: bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_distribution_flags) const;
// public: bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_payload_flags) const;
// public: void c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_payload_flags, bool);
// public: bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver> const &) const;
// public: bool c_big_flags_typed_no_init<enum e_stimulus, 43>::test(enum e_stimulus) const;
// public: void c_big_flags_typed_no_init<enum e_stimulus, 43>::set(enum e_stimulus, bool);
// public: static bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_payload_flags);
// private: static short c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_payload_flags);
// public: static bool c_big_flags_typed_no_init<enum e_stimulus, 43>::valid_bit(enum e_stimulus);
// public: bool c_big_flags_typed_no_init<enum e_stimulus, 43>::valid(void) const;
// protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_second_slice_of_chunk_inclusive(enum e_stimulus);
// protected: static enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<enum e_stimulus, 43>::bit_index_to_flag_chunk_index(enum e_stimulus);
// protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_first_slice_of_chunk_exclusive(enum e_stimulus);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>(void);
// void g_stimulus_data_allocator::`dynamic atexit destructor'(void);
// void g_stimulus_ref_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_stimulus_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_stimulus_ref_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z");
//};

//public: struct c_stimulus_type & c_stimulus_type::operator=(long const &)
//{
//    mangled_ppc("??4c_stimulus_type@@QAAAAU0@ABJ@Z");
//};

//void stimuli_initialize(void)
//{
//    mangled_ppc("?stimuli_initialize@@YAXXZ");
//};

//void stimuli_initialize_for_new_map(void)
//{
//    mangled_ppc("?stimuli_initialize_for_new_map@@YAXXZ");
//};

//public: s_stimulus_datum::s_stimulus_datum(void)
//{
//    mangled_ppc("??0s_stimulus_datum@@QAA@XZ");
//};

//void stimuli_dispose_from_old_map(void)
//{
//    mangled_ppc("?stimuli_dispose_from_old_map@@YAXXZ");
//};

//void stimuli_update(void)
//{
//    mangled_ppc("?stimuli_update@@YAXXZ");
//};

//void stimulus_data_delete(long)
//{
//    mangled_ppc("?stimulus_data_delete@@YAXJ@Z");
//};

//bool stimulus_update(long)
//{
//    mangled_ppc("?stimulus_update@@YA_NJ@Z");
//};

//void stimulus_distribute(long)
//{
//    mangled_ppc("?stimulus_distribute@@YAXJ@Z");
//};

//void stimulus_datum_iterator_new(struct s_stimulus_datum_iterator *)
//{
//    mangled_ppc("?stimulus_datum_iterator_new@@YAXPAUs_stimulus_datum_iterator@@@Z");
//};

//void stimulus_datum_iterator_new(struct s_stimulus_datum_iterator *, class c_stimulus_flags *)
//{
//    mangled_ppc("?stimulus_datum_iterator_new@@YAXPAUs_stimulus_datum_iterator@@PAVc_stimulus_flags@@@Z");
//};

//struct s_stimulus_datum * stimulus_datum_iterator_next(struct s_stimulus_datum_iterator *)
//{
//    mangled_ppc("?stimulus_datum_iterator_next@@YAPAUs_stimulus_datum@@PAUs_stimulus_datum_iterator@@@Z");
//};

//void stimulus_data_ref_iterator_new(struct s_stimulus_ref_iterator *, long)
//{
//    mangled_ppc("?stimulus_data_ref_iterator_new@@YAXPAUs_stimulus_ref_iterator@@J@Z");
//};

//void stimulus_data_ref_iterator_new(struct s_stimulus_ref_iterator *, long, class c_stimulus_flags *)
//{
//    mangled_ppc("?stimulus_data_ref_iterator_new@@YAXPAUs_stimulus_ref_iterator@@JPAVc_stimulus_flags@@@Z");
//};

//void stimulus_actor_ref_iterator_new(struct s_stimulus_ref_iterator *, long)
//{
//    mangled_ppc("?stimulus_actor_ref_iterator_new@@YAXPAUs_stimulus_ref_iterator@@J@Z");
//};

//void stimulus_actor_ref_iterator_new(struct s_stimulus_ref_iterator *, long, class c_stimulus_flags *)
//{
//    mangled_ppc("?stimulus_actor_ref_iterator_new@@YAXPAUs_stimulus_ref_iterator@@JPAVc_stimulus_flags@@@Z");
//};

//void stimulus_ref_iterator_new(struct s_stimulus_ref_iterator *, long, enum e_stimulus_ref_link_type, class c_stimulus_flags *)
//{
//    mangled_ppc("?stimulus_ref_iterator_new@@YAXPAUs_stimulus_ref_iterator@@JW4e_stimulus_ref_link_type@@PAVc_stimulus_flags@@@Z");
//};

//struct s_stimulus_ref_datum * stimulus_ref_iterator_next(struct s_stimulus_ref_iterator *)
//{
//    mangled_ppc("?stimulus_ref_iterator_next@@YAPAUs_stimulus_ref_datum@@PAUs_stimulus_ref_iterator@@@Z");
//};

//void stimulus_register_on_actor(class c_stimulus_payload const *, long)
//{
//    mangled_ppc("?stimulus_register_on_actor@@YAXPBVc_stimulus_payload@@J@Z");
//};

//long stimulus_register(class c_stimulus_payload const *, class c_stimulus_distribution const *, class c_stimulus_origin const *)
//{
//    mangled_ppc("?stimulus_register@@YAJPBVc_stimulus_payload@@PBVc_stimulus_distribution@@PBVc_stimulus_origin@@@Z");
//};

//long stimulus_data_new(void)
//{
//    mangled_ppc("?stimulus_data_new@@YAJXZ");
//};

//void stimulus_data_initialize(long)
//{
//    mangled_ppc("?stimulus_data_initialize@@YAXJ@Z");
//};

//long stimulus_find_existing(class c_stimulus_payload const *, class c_stimulus_distribution const *, class c_stimulus_origin const *)
//{
//    mangled_ppc("?stimulus_find_existing@@YAJPBVc_stimulus_payload@@PBVc_stimulus_distribution@@PBVc_stimulus_origin@@@Z");
//};

//void stimulus_remove(long)
//{
//    mangled_ppc("?stimulus_remove@@YAXJ@Z");
//};

//void stimulus_remove_references(long)
//{
//    mangled_ppc("?stimulus_remove_references@@YAXJ@Z");
//};

//void stimulus_ref_remove(long)
//{
//    mangled_ppc("?stimulus_ref_remove@@YAXJ@Z");
//};

//void stimulus_ref_delete(long)
//{
//    mangled_ppc("?stimulus_ref_delete@@YAXJ@Z");
//};

//public: void c_stimulus_payload::clear(void)
//{
//    mangled_ppc("?clear@c_stimulus_payload@@QAAXXZ");
//};

//public: bool c_stimulus_payload::active(void) const
//{
//    mangled_ppc("?active@c_stimulus_payload@@QBA_NXZ");
//};

//public: void c_stimulus_payload::set(enum e_stimulus, short)
//{
//    mangled_ppc("?set@c_stimulus_payload@@QAAXW4e_stimulus@@F@Z");
//};

//public: void c_stimulus_payload::set_stimulus_by_name(long, short)
//{
//    mangled_ppc("?set_stimulus_by_name@c_stimulus_payload@@QAAXJF@Z");
//};

//public: void c_stimulus_payload::set_prefer_firing_points(float)
//{
//    mangled_ppc("?set_prefer_firing_points@c_stimulus_payload@@QAAXM@Z");
//};

//public: bool c_stimulus_payload::set_attach_script(long)
//{
//    mangled_ppc("?set_attach_script@c_stimulus_payload@@QAA_NJ@Z");
//};

//public: void c_stimulus_payload::set_combat_cue(long)
//{
//    mangled_ppc("?set_combat_cue@c_stimulus_payload@@QAAXJ@Z");
//};

//public: void c_stimulus_payload::set_performance(long)
//{
//    mangled_ppc("?set_performance@c_stimulus_payload@@QAAXJ@Z");
//};

//public: void c_stimulus_payload::set_destination_changed_juke(float, enum e_physics_animation_state)
//{
//    mangled_ppc("?set_destination_changed_juke@c_stimulus_payload@@QAAXMW4e_physics_animation_state@@@Z");
//};

//public: void c_stimulus_payload::set_combat_sync_action_group(long, float)
//{
//    mangled_ppc("?set_combat_sync_action_group@c_stimulus_payload@@QAAXJM@Z");
//};

//public: void c_stimulus_payload::set_projectile(long)
//{
//    mangled_ppc("?set_projectile@c_stimulus_payload@@QAAXJ@Z");
//};

//public: void c_stimulus_payload::set_random_duration(float, float)
//{
//    mangled_ppc("?set_random_duration@c_stimulus_payload@@QAAXMM@Z");
//};

//public: void c_stimulus_payload::set_duration(float)
//{
//    mangled_ppc("?set_duration@c_stimulus_payload@@QAAXM@Z");
//};

//public: void c_stimulus_payload::set_duration_ticks(short)
//{
//    mangled_ppc("?set_duration_ticks@c_stimulus_payload@@QAAXF@Z");
//};

//public: short c_stimulus_payload::get_duration(void) const
//{
//    mangled_ppc("?get_duration@c_stimulus_payload@@QBAFXZ");
//};

//public: void c_stimulus_origin::clear(void)
//{
//    mangled_ppc("?clear@c_stimulus_origin@@QAAXXZ");
//};

//public: void c_stimulus_origin::set_actor(long)
//{
//    mangled_ppc("?set_actor@c_stimulus_origin@@QAAXJ@Z");
//};

//public: void c_stimulus_origin::set_object(long)
//{
//    mangled_ppc("?set_object@c_stimulus_origin@@QAAXJ@Z");
//};

//public: void c_stimulus_origin::set_instantaneous_projectile(long)
//{
//    mangled_ppc("?set_instantaneous_projectile@c_stimulus_origin@@QAAXJ@Z");
//};

//public: void c_stimulus_origin::set_cue(long)
//{
//    mangled_ppc("?set_cue@c_stimulus_origin@@QAAXJ@Z");
//};

//public: void c_stimulus_origin::set_performance(long)
//{
//    mangled_ppc("?set_performance@c_stimulus_origin@@QAAXJ@Z");
//};

//public: void c_stimulus_origin::set_fireteam(long)
//{
//    mangled_ppc("?set_fireteam@c_stimulus_origin@@QAAXJ@Z");
//};

//public: enum e_stimulus_hostility c_stimulus_origin::get_hostility(long) const
//{
//    mangled_ppc("?get_hostility@c_stimulus_origin@@QBA?AW4e_stimulus_hostility@@J@Z");
//};

//public: bool c_stimulus_origin::get_position_velocity(union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_position_velocity@c_stimulus_origin@@QBA_NPATreal_point3d@@PATvector3d@@@Z");
//};

//public: void c_stimulus_distribution::clear(void)
//{
//    mangled_ppc("?clear@c_stimulus_distribution@@QAAXXZ");
//};

//public: void c_stimulus_distribution::set_radial(float)
//{
//    mangled_ppc("?set_radial@c_stimulus_distribution@@QAAXM@Z");
//};

//public: void c_stimulus_distribution::set_radial_travel_time(float)
//{
//    mangled_ppc("?set_radial_travel_time@c_stimulus_distribution@@QAAXM@Z");
//};

//public: void c_stimulus_distribution::set_actor(long)
//{
//    mangled_ppc("?set_actor@c_stimulus_distribution@@QAAXJ@Z");
//};

//public: void c_stimulus_distribution::set_clump(long)
//{
//    mangled_ppc("?set_clump@c_stimulus_distribution@@QAAXJ@Z");
//};

//public: void c_stimulus_distribution::set_prop(long, class c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_prop@c_stimulus_distribution@@QAAXJV?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_stimulus_distribution::set_projectile(long)
//{
//    mangled_ppc("?set_projectile@c_stimulus_distribution@@QAAXJ@Z");
//};

//public: void c_stimulus_distribution::set_cue(long)
//{
//    mangled_ppc("?set_cue@c_stimulus_distribution@@QAAXJ@Z");
//};

//public: void c_stimulus_distribution::set_performance(long, class c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_performance@c_stimulus_distribution@@QAAXJV?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_stimulus_distribution::set_probability(float)
//{
//    mangled_ppc("?set_probability@c_stimulus_distribution@@QAAXM@Z");
//};

//public: void c_stimulus_distribution::set_character(short)
//{
//    mangled_ppc("?set_character@c_stimulus_distribution@@QAAXF@Z");
//};

//public: void c_stimulus_distribution::set_weapon(short)
//{
//    mangled_ppc("?set_weapon@c_stimulus_distribution@@QAAXF@Z");
//};

//public: void c_stimulus_distribution::set_task(short, short)
//{
//    mangled_ppc("?set_task@c_stimulus_distribution@@QAAXFF@Z");
//};

//public: void c_stimulus_distribution::set_fireteam(long)
//{
//    mangled_ppc("?set_fireteam@c_stimulus_distribution@@QAAXJ@Z");
//};

//public: void c_stimulus_distribution::set_lifetime(float)
//{
//    mangled_ppc("?set_lifetime@c_stimulus_distribution@@QAAXM@Z");
//};

//private: bool c_stimulus_distribution::stimulus_cue_distribution_test_actor(long, long, class c_stimulus_origin const *) const
//{
//    mangled_ppc("?stimulus_cue_distribution_test_actor@c_stimulus_distribution@@ABA_NJJPBVc_stimulus_origin@@@Z");
//};

//private: bool c_stimulus_distribution::stimulus_performance_distribution_test_actor(long, class c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>, long, class c_stimulus_origin const *) const
//{
//    mangled_ppc("?stimulus_performance_distribution_test_actor@c_stimulus_distribution@@ABA_NJV?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@JPBVc_stimulus_origin@@@Z");
//};

//public: bool c_stimulus_distribution::test_actor(long, class c_stimulus_origin const *) const
//{
//    mangled_ppc("?test_actor@c_stimulus_distribution@@QBA_NJPBVc_stimulus_origin@@@Z");
//};

//private: bool c_stimulus_distribution::test_actor(enum e_stimulus_distribution, unsigned char const *, long, class c_stimulus_origin const *) const
//{
//    mangled_ppc("?test_actor@c_stimulus_distribution@@ABA_NW4e_stimulus_distribution@@PBEJPBVc_stimulus_origin@@@Z");
//};

//public: bool c_stimulus_distribution::get_radius(float *) const
//{
//    mangled_ppc("?get_radius@c_stimulus_distribution@@QBA_NPAM@Z");
//};

//private: bool c_stimulus_distribution::get_radius(enum e_stimulus_distribution, unsigned char const *, float *) const
//{
//    mangled_ppc("?get_radius@c_stimulus_distribution@@ABA_NW4e_stimulus_distribution@@PBEPAM@Z");
//};

//public: bool c_stimulus_distribution::active(void) const
//{
//    mangled_ppc("?active@c_stimulus_distribution@@QBA_NXZ");
//};

//public: bool c_stimulus_distribution::valid(void) const
//{
//    mangled_ppc("?valid@c_stimulus_distribution@@QBA_NXZ");
//};

//void stimulus_distribution_iterator_new(struct s_stimulus_distribution_iterator *, long)
//{
//    mangled_ppc("?stimulus_distribution_iterator_new@@YAXPAUs_stimulus_distribution_iterator@@J@Z");
//};

//struct actor_datum * stimulus_distribution_iterator_next(struct s_stimulus_distribution_iterator *)
//{
//    mangled_ppc("?stimulus_distribution_iterator_next@@YAPAUactor_datum@@PAUs_stimulus_distribution_iterator@@@Z");
//};

//public: char const * c_stimulus_distribution::get_name(void) const
//{
//    mangled_ppc("?get_name@c_stimulus_distribution@@QBAPBDXZ");
//};

//bool actor_stimulus_register(long, long)
//{
//    mangled_ppc("?actor_stimulus_register@@YA_NJJ@Z");
//};

//long stimulus_ref_new(void)
//{
//    mangled_ppc("?stimulus_ref_new@@YAJXZ");
//};

//void stimulus_ref_initialize(long)
//{
//    mangled_ppc("?stimulus_ref_initialize@@YAXJ@Z");
//};

//bool actor_stimulus_test(long, enum e_stimulus)
//{
//    mangled_ppc("?actor_stimulus_test@@YA_NJW4e_stimulus@@@Z");
//};

//bool actor_stimulus_test(long, struct c_stimulus_type)
//{
//    mangled_ppc("?actor_stimulus_test@@YA_NJUc_stimulus_type@@@Z");
//};

//bool actor_stimulus_test(long, class c_stimulus_flags *)
//{
//    mangled_ppc("?actor_stimulus_test@@YA_NJPAVc_stimulus_flags@@@Z");
//};

//void actor_stimuli_update(long)
//{
//    mangled_ppc("?actor_stimuli_update@@YAXJ@Z");
//};

//void actor_apply_situational_stimuli(long)
//{
//    mangled_ppc("?actor_apply_situational_stimuli@@YAXJ@Z");
//};

//void actor_stimulus_set_evasion_chances(long, long)
//{
//    mangled_ppc("?actor_stimulus_set_evasion_chances@@YAXJJ@Z");
//};

//void stimuli_handle_deleted_actor(long)
//{
//    mangled_ppc("?stimuli_handle_deleted_actor@@YAXJ@Z");
//};

//void stimuli_handle_deleted_prop(long)
//{
//    mangled_ppc("?stimuli_handle_deleted_prop@@YAXJ@Z");
//};

//void stimuli_handle_deleted_cue(long)
//{
//    mangled_ppc("?stimuli_handle_deleted_cue@@YAXJ@Z");
//};

//void stimuli_handle_new_prop(long)
//{
//    mangled_ppc("?stimuli_handle_new_prop@@YAXJ@Z");
//};

//void stimulus_assess_danger_zone(long)
//{
//    mangled_ppc("?stimulus_assess_danger_zone@@YAXJ@Z");
//};

//void stimulus_register_for_prop(long, enum e_stimulus)
//{
//    mangled_ppc("?stimulus_register_for_prop@@YAXJW4e_stimulus@@@Z");
//};

//void stimulus_assess_vehicle_danger(long)
//{
//    mangled_ppc("?stimulus_assess_vehicle_danger@@YAXJ@Z");
//};

//float stimulus_get_prop_radius(long)
//{
//    mangled_ppc("?stimulus_get_prop_radius@@YAMJ@Z");
//};

//void stimuli_handle_deleted_clump(long)
//{
//    mangled_ppc("?stimuli_handle_deleted_clump@@YAXJ@Z");
//};

//bool stimulus_data_build_information(long, struct s_stimulus_data_information *)
//{
//    mangled_ppc("?stimulus_data_build_information@@YA_NJPAUs_stimulus_data_information@@@Z");
//};

//void stimulus_information_build_actor_information(struct s_stimulus_data_information *, class c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5> *, long, struct s_stimulus_actor_information *)
//{
//    mangled_ppc("?stimulus_information_build_actor_information@@YAXPAUs_stimulus_data_information@@PAV?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@JPAUs_stimulus_actor_information@@@Z");
//};

//bool attach_script_stimulus_test_func(long, long)
//{
//    mangled_ppc("?attach_script_stimulus_test_func@@YA_NJJ@Z");
//};

//void attach_script_stimulus_register_func(long)
//{
//    mangled_ppc("?attach_script_stimulus_register_func@@YAXJ@Z");
//};

//void activity_stimulus_register_func(long)
//{
//    mangled_ppc("?activity_stimulus_register_func@@YAXJ@Z");
//};

//void performance_stimulus_register_func(long)
//{
//    mangled_ppc("?performance_stimulus_register_func@@YAXJ@Z");
//};

//bool destroyed_vehicle_is_dangerous(long, short *)
//{
//    mangled_ppc("?destroyed_vehicle_is_dangerous@@YA_NJPAF@Z");
//};

//bool volatile_stimulus_test_func(long, long)
//{
//    mangled_ppc("?volatile_stimulus_test_func@@YA_NJJ@Z");
//};

//void volatile_stimulus_register_func(long)
//{
//    mangled_ppc("?volatile_stimulus_register_func@@YAXJ@Z");
//};

//bool projectile_stimulus_test_func(long, long)
//{
//    mangled_ppc("?projectile_stimulus_test_func@@YA_NJJ@Z");
//};

//bool vehicle_stimulus_test_func(long, long)
//{
//    mangled_ppc("?vehicle_stimulus_test_func@@YA_NJJ@Z");
//};

//bool actor_assess_danger(long, float, class c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5> *, struct s_danger_assessment *, struct s_stimulus_data_information *)
//{
//    mangled_ppc("?actor_assess_danger@@YA_NJMPAV?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@PAUs_danger_assessment@@PAUs_stimulus_data_information@@@Z");
//};

//bool volatile_stimulus_imminent(long)
//{
//    mangled_ppc("?volatile_stimulus_imminent@@YA_NJ@Z");
//};

//long stimulus_get_name(struct c_stimulus_type)
//{
//    mangled_ppc("?stimulus_get_name@@YAJUc_stimulus_type@@@Z");
//};

//void actor_render_stimuli(long)
//{
//    mangled_ppc("?actor_render_stimuli@@YAXJ@Z");
//};

//void stimulus_ref_render(long, union real_point3d const *)
//{
//    mangled_ppc("?stimulus_ref_render@@YAXJPBTreal_point3d@@@Z");
//};

//void stimulus_data_render(long)
//{
//    mangled_ppc("?stimulus_data_render@@YAXJ@Z");
//};

//void stimuli_debug(void)
//{
//    mangled_ppc("?stimuli_debug@@YAXXZ");
//};

//void actor_stimulus_tracking_or_locking(long, long, short)
//{
//    mangled_ppc("?actor_stimulus_tracking_or_locking@@YAXJJF@Z");
//};

//void actor_stimulus_allegiance_update(long, long)
//{
//    mangled_ppc("?actor_stimulus_allegiance_update@@YAXJJ@Z");
//};

//void actor_stimulus_surprise(long, short, long, union vector3d const *)
//{
//    mangled_ppc("?actor_stimulus_surprise@@YAXJFJPBTvector3d@@@Z");
//};

//void actor_stimulus_prop_acknowledged(long, long, bool)
//{
//    mangled_ppc("?actor_stimulus_prop_acknowledged@@YAXJJ_N@Z");
//};

//void actor_stimulus_prop_sighted(long, long, bool)
//{
//    mangled_ppc("?actor_stimulus_prop_sighted@@YAXJJ_N@Z");
//};

//void actor_stimulus_friend_body_sighted(long, long)
//{
//    mangled_ppc("?actor_stimulus_friend_body_sighted@@YAXJJ@Z");
//};

//void actor_stimulus_prop_sound(long, long, bool)
//{
//    mangled_ppc("?actor_stimulus_prop_sound@@YAXJJ_N@Z");
//};

//void actor_stimulus_acknowledged_danger_zone(long, long)
//{
//    mangled_ppc("?actor_stimulus_acknowledged_danger_zone@@YAXJJ@Z");
//};

//void actor_stimulus_damage(long, short, long, long, float, union vector3d const *)
//{
//    mangled_ppc("?actor_stimulus_damage@@YAXJFJJMPBTvector3d@@@Z");
//};

//void actor_stimulus_bumped(long, long)
//{
//    mangled_ppc("?actor_stimulus_bumped@@YAXJJ@Z");
//};

//void actor_stimulus_environmental_noise(long, long, union real_point3d const *, short)
//{
//    mangled_ppc("?actor_stimulus_environmental_noise@@YAXJJPBTreal_point3d@@F@Z");
//};

//void actor_stimulus_weapon_impact(long, long, union real_point3d const *, short)
//{
//    mangled_ppc("?actor_stimulus_weapon_impact@@YAXJJPBTreal_point3d@@F@Z");
//};

//void actor_stimulus_weapon_detonation(long, long, union real_point3d const *, short)
//{
//    mangled_ppc("?actor_stimulus_weapon_detonation@@YAXJJPBTreal_point3d@@F@Z");
//};

//void actor_stimulus_heard_shooting(long, long, long)
//{
//    mangled_ppc("?actor_stimulus_heard_shooting@@YAXJJJ@Z");
//};

//void actor_stimulus_prop_just_killed(long, long, long)
//{
//    mangled_ppc("?actor_stimulus_prop_just_killed@@YAXJJJ@Z");
//};

//void actor_stimulus_prop_fleeing(long, long)
//{
//    mangled_ppc("?actor_stimulus_prop_fleeing@@YAXJJ@Z");
//};

//void actor_stimulus_vehicle_eviction(long, long)
//{
//    mangled_ppc("?actor_stimulus_vehicle_eviction@@YAXJJ@Z");
//};

//public: void c_data_iterator<struct s_stimulus_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_stimulus_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_stimulus_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_stimulus_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_stimulus_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_stimulus_datum@@@@QBAJXZ");
//};

//public: bool c_enum_no_init<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::operator==(enum e_prop_stimulus) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_prop_stimulus@@D$0?0$03Us_default_enum_string_resolver@@@@QBA_NW4e_prop_stimulus@@@Z");
//};

//public: enum e_task_attitude c_enum_no_init<enum e_task_attitude, short, 0, 5, struct s_default_enum_string_resolver>::operator enum e_task_attitude(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_task_attitude@@F$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_task_attitude@@XZ");
//};

//public: c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: class c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: bool c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_stimulus_ref_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_stimulus_ref_flags@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_stimulus_ref_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::set(enum e_stimulus_ref_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_stimulus_ref_flags@@F$00Us_default_enum_string_resolver@@@@QAAXW4e_stimulus_ref_flags@@_N@Z");
//};

//public: enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::get_highest_bit_set(void) const
//{
//    mangled_ppc("?get_highest_bit_set@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QBA?AW4e_stimulus@@XZ");
//};

//public: enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QBA?AW4e_stimulus@@XZ");
//};

//public: void c_big_flags_typed_no_init<enum e_stimulus, 43>::and_range(class c_big_flags_typed_no_init<enum e_stimulus, 43> const *, enum e_stimulus, enum e_stimulus)
//{
//    mangled_ppc("?and_range@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QAAXPBV1@W4e_stimulus@@1@Z");
//};

//public: void c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_distribution_performance_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_distribution_performance_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_distribution_performance_flags@@F$01Us_default_enum_string_resolver@@@@QBA_NW4e_distribution_performance_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_distribution_prop_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@QBA_NW4e_distribution_prop_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_distribution_prop_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@QAAXW4e_distribution_prop_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_distribution_character_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_distribution_character_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_distribution_character_flags@@@Z");
//};

//public: bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::test(enum e_danger_assessment_flags) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@QBA_NW4e_danger_assessment_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_prop_ref_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_prop_ref_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_prop_ref_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_squad_runtime_flags, short, 16, struct s_default_enum_string_resolver>::set(enum e_squad_runtime_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_squad_runtime_flags@@F$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_squad_runtime_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_stimulus_ref_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_stimulus_ref_flags@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_stimulus_ref_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_stimulus_ref_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_stimulus_ref_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_stimulus_ref_flags@@F$00Us_default_enum_string_resolver@@@@CAFW4e_stimulus_ref_flags@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_first_slice_of_chunk_inclusive(enum e_stimulus)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KAKW4e_stimulus@@@Z");
//};

//public: static bool c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_prop_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@SA_NW4e_distribution_prop_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_distribution_prop_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_prop_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_distribution_prop_flags@@F$01Us_default_enum_string_resolver@@@@CAFW4e_distribution_prop_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_distribution_character_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_distribution_character_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_distribution_character_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_distribution_character_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_distribution_character_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_distribution_character_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_distribution_character_flags@@@Z");
//};

//public: static bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::valid_bit(enum e_danger_assessment_flags)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@SA_NW4e_danger_assessment_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_prop_ref_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_prop_ref_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_prop_ref_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_prop_ref_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_prop_ref_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_prop_ref_flags@@@Z");
//};

//public: bool c_stimulus_type::operator==(enum e_stimulus const &) const
//{
//    mangled_ppc("??8c_stimulus_type@@QBA_NABW4e_stimulus@@@Z");
//};

//public: bool c_stimulus_type::operator!=(enum e_stimulus const &) const
//{
//    mangled_ppc("??9c_stimulus_type@@QBA_NABW4e_stimulus@@@Z");
//};

//public: struct c_stimulus_type & c_stimulus_type::operator=(enum e_stimulus const &)
//{
//    mangled_ppc("??4c_stimulus_type@@QAAAAU0@ABW4e_stimulus@@@Z");
//};

//public: enum e_stimulus_distribution c_stimulus_distribution::get_distribution_type(void) const
//{
//    mangled_ppc("?get_distribution_type@c_stimulus_distribution@@QBA?AW4e_stimulus_distribution@@XZ");
//};

//public: void c_stimulus_distribution::set_lifetime_ticks(short)
//{
//    mangled_ppc("?set_lifetime_ticks@c_stimulus_distribution@@QAAXF@Z");
//};

//public: bool c_stimulus_distribution::is_immediate(void) const
//{
//    mangled_ppc("?is_immediate@c_stimulus_distribution@@QBA_NXZ");
//};

//public: struct s_stimulus_distribution_actor * c_stimulus_distribution::get_actor_data(void)
//{
//    mangled_ppc("?get_actor_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_actor@@XZ");
//};

//public: struct s_stimulus_distribution_actor * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_actor, 0>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_actor@@$0A@@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_actor@@XZ");
//};

//public: struct s_stimulus_distribution_actor const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_actor, 0>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_actor@@$0A@@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_actor@@XZ");
//};

//public: struct s_stimulus_distribution_radial * c_stimulus_distribution::get_radial_data(void)
//{
//    mangled_ppc("?get_radial_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_radial@@XZ");
//};

//public: struct s_stimulus_distribution_radial * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_radial, 2>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_radial@@$01@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_radial@@XZ");
//};

//public: struct s_stimulus_distribution_radial const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_radial, 2>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_radial@@$01@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_radial@@XZ");
//};

//public: struct s_stimulus_distribution_clump * c_stimulus_distribution::get_clump_data(void)
//{
//    mangled_ppc("?get_clump_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_clump@@XZ");
//};

//public: struct s_stimulus_distribution_clump * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_clump, 1>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_clump@@$00@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_clump@@XZ");
//};

//public: struct s_stimulus_distribution_clump const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_clump, 1>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_clump@@$00@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_clump@@XZ");
//};

//public: struct s_stimulus_distribution_prop * c_stimulus_distribution::get_prop_data(void)
//{
//    mangled_ppc("?get_prop_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_prop@@XZ");
//};

//public: struct s_stimulus_distribution_prop * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_prop, 3>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_prop@@$02@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_prop@@XZ");
//};

//public: struct s_stimulus_distribution_prop const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_prop, 3>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_prop@@$02@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_prop@@XZ");
//};

//public: struct s_stimulus_distribution_prop const * c_stimulus_distribution::get_prop_data_const(void) const
//{
//    mangled_ppc("?get_prop_data_const@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_prop@@XZ");
//};

//public: struct s_stimulus_distribution_projectile * c_stimulus_distribution::get_projectile_data(void)
//{
//    mangled_ppc("?get_projectile_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_projectile@@XZ");
//};

//public: struct s_stimulus_distribution_projectile * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_projectile, 4>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_projectile@@$03@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_projectile@@XZ");
//};

//public: struct s_stimulus_distribution_projectile const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_projectile, 4>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_projectile@@$03@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_projectile@@XZ");
//};

//public: struct s_stimulus_distribution_performance * c_stimulus_distribution::get_performance_data(void)
//{
//    mangled_ppc("?get_performance_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_performance@@XZ");
//};

//public: struct s_stimulus_distribution_performance * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_performance, 5>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_performance@@$04@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_performance@@XZ");
//};

//public: struct s_stimulus_distribution_performance const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_performance, 5>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_performance@@$04@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_performance@@XZ");
//};

//public: struct s_stimulus_distribution_probability * c_stimulus_distribution::get_probability_data(void)
//{
//    mangled_ppc("?get_probability_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_probability@@XZ");
//};

//public: struct s_stimulus_distribution_probability * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_probability, 6>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_probability@@$05@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_probability@@XZ");
//};

//public: struct s_stimulus_distribution_probability const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_probability, 6>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_probability@@$05@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_probability@@XZ");
//};

//public: struct s_stimulus_distribution_character * c_stimulus_distribution::get_character_data(void)
//{
//    mangled_ppc("?get_character_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_character@@XZ");
//};

//public: struct s_stimulus_distribution_character * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_character, 7>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_character@@$06@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_character@@XZ");
//};

//public: struct s_stimulus_distribution_character const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_character, 7>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_character@@$06@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_character@@XZ");
//};

//public: struct s_stimulus_distribution_weapon * c_stimulus_distribution::get_weapon_data(void)
//{
//    mangled_ppc("?get_weapon_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_weapon@@XZ");
//};

//public: struct s_stimulus_distribution_weapon * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_weapon, 8>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_weapon@@$07@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_weapon@@XZ");
//};

//public: struct s_stimulus_distribution_weapon const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_weapon, 8>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_weapon@@$07@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_weapon@@XZ");
//};

//public: struct s_stimulus_distribution_task * c_stimulus_distribution::get_task_data(void)
//{
//    mangled_ppc("?get_task_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_task@@XZ");
//};

//public: struct s_stimulus_distribution_task * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_task, 9>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_task@@$08@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_task@@XZ");
//};

//public: struct s_stimulus_distribution_task const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_task, 9>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_task@@$08@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_task@@XZ");
//};

//public: struct s_stimulus_distribution_fireteam * c_stimulus_distribution::get_fireteam_data(void)
//{
//    mangled_ppc("?get_fireteam_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_fireteam@@XZ");
//};

//public: struct s_stimulus_distribution_fireteam * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_fireteam, 10>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_fireteam@@$09@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_fireteam@@XZ");
//};

//public: struct s_stimulus_distribution_fireteam const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_fireteam, 10>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_fireteam@@$09@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_fireteam@@XZ");
//};

//public: struct s_stimulus_distribution_cue * c_stimulus_distribution::get_cue_data(void)
//{
//    mangled_ppc("?get_cue_data@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_cue@@XZ");
//};

//public: struct s_stimulus_distribution_cue * c_stimulus_distribution::get_typed_data<struct s_stimulus_distribution_cue, 11>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_distribution_cue@@$0L@@c_stimulus_distribution@@QAAPAUs_stimulus_distribution_cue@@XZ");
//};

//public: struct s_stimulus_distribution_cue const * c_stimulus_distribution::get_typed_data_const<struct s_stimulus_distribution_cue, 11>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_distribution_cue@@$0L@@c_stimulus_distribution@@QBAPBUs_stimulus_distribution_cue@@XZ");
//};

//public: bool c_stimulus_distribution::operator==(class c_stimulus_distribution const &) const
//{
//    mangled_ppc("??8c_stimulus_distribution@@QBA_NABV0@@Z");
//};

//private: void c_stimulus_distribution::clear_data(void)
//{
//    mangled_ppc("?clear_data@c_stimulus_distribution@@AAAXXZ");
//};

//public: enum e_stimulus_origin c_stimulus_origin::get_origin_type(void) const
//{
//    mangled_ppc("?get_origin_type@c_stimulus_origin@@QBA?AW4e_stimulus_origin@@XZ");
//};

//public: bool c_stimulus_origin::valid(void) const
//{
//    mangled_ppc("?valid@c_stimulus_origin@@QBA_NXZ");
//};

//public: struct s_stimulus_origin_actor * c_stimulus_origin::get_actor_data(void)
//{
//    mangled_ppc("?get_actor_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_actor@@XZ");
//};

//public: struct s_stimulus_origin_actor * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_actor, 0>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_actor@@$0A@@c_stimulus_origin@@QAAPAUs_stimulus_origin_actor@@XZ");
//};

//public: struct s_stimulus_origin_actor const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_actor, 0>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_actor@@$0A@@c_stimulus_origin@@QBAPBUs_stimulus_origin_actor@@XZ");
//};

//public: struct s_stimulus_origin_actor const * c_stimulus_origin::get_actor_data_const(void) const
//{
//    mangled_ppc("?get_actor_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_actor@@XZ");
//};

//public: struct s_stimulus_origin_object * c_stimulus_origin::get_object_data(void)
//{
//    mangled_ppc("?get_object_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_object@@XZ");
//};

//public: struct s_stimulus_origin_object * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_object, 1>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_object@@$00@c_stimulus_origin@@QAAPAUs_stimulus_origin_object@@XZ");
//};

//public: struct s_stimulus_origin_object const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_object, 1>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_object@@$00@c_stimulus_origin@@QBAPBUs_stimulus_origin_object@@XZ");
//};

//public: struct s_stimulus_origin_object const * c_stimulus_origin::get_object_data_const(void) const
//{
//    mangled_ppc("?get_object_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_object@@XZ");
//};

//public: struct s_stimulus_origin_instantaneous_projectile * c_stimulus_origin::get_instantaneous_projectile_data(void)
//{
//    mangled_ppc("?get_instantaneous_projectile_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_instantaneous_projectile@@XZ");
//};

//public: struct s_stimulus_origin_instantaneous_projectile * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_instantaneous_projectile, 2>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_instantaneous_projectile@@$01@c_stimulus_origin@@QAAPAUs_stimulus_origin_instantaneous_projectile@@XZ");
//};

//public: struct s_stimulus_origin_instantaneous_projectile const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_instantaneous_projectile, 2>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_instantaneous_projectile@@$01@c_stimulus_origin@@QBAPBUs_stimulus_origin_instantaneous_projectile@@XZ");
//};

//public: struct s_stimulus_origin_instantaneous_projectile const * c_stimulus_origin::get_instantaneous_projectile_data_const(void) const
//{
//    mangled_ppc("?get_instantaneous_projectile_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_instantaneous_projectile@@XZ");
//};

//public: struct s_stimulus_origin_cue * c_stimulus_origin::get_cue_data(void)
//{
//    mangled_ppc("?get_cue_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_cue@@XZ");
//};

//public: struct s_stimulus_origin_cue * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_cue, 3>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_cue@@$02@c_stimulus_origin@@QAAPAUs_stimulus_origin_cue@@XZ");
//};

//public: struct s_stimulus_origin_cue const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_cue, 3>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_cue@@$02@c_stimulus_origin@@QBAPBUs_stimulus_origin_cue@@XZ");
//};

//public: struct s_stimulus_origin_cue const * c_stimulus_origin::get_cue_data_const(void) const
//{
//    mangled_ppc("?get_cue_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_cue@@XZ");
//};

//public: struct s_stimulus_origin_performance * c_stimulus_origin::get_performance_data(void)
//{
//    mangled_ppc("?get_performance_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_performance@@XZ");
//};

//public: struct s_stimulus_origin_performance * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_performance, 4>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_performance@@$03@c_stimulus_origin@@QAAPAUs_stimulus_origin_performance@@XZ");
//};

//public: struct s_stimulus_origin_performance const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_performance, 4>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_performance@@$03@c_stimulus_origin@@QBAPBUs_stimulus_origin_performance@@XZ");
//};

//public: struct s_stimulus_origin_performance const * c_stimulus_origin::get_performance_data_const(void) const
//{
//    mangled_ppc("?get_performance_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_performance@@XZ");
//};

//public: struct s_stimulus_origin_fireteam * c_stimulus_origin::get_fireteam_data(void)
//{
//    mangled_ppc("?get_fireteam_data@c_stimulus_origin@@QAAPAUs_stimulus_origin_fireteam@@XZ");
//};

//public: struct s_stimulus_origin_fireteam * c_stimulus_origin::get_typed_data<struct s_stimulus_origin_fireteam, 5>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_origin_fireteam@@$04@c_stimulus_origin@@QAAPAUs_stimulus_origin_fireteam@@XZ");
//};

//public: struct s_stimulus_origin_fireteam const * c_stimulus_origin::get_typed_data_const<struct s_stimulus_origin_fireteam, 5>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_origin_fireteam@@$04@c_stimulus_origin@@QBAPBUs_stimulus_origin_fireteam@@XZ");
//};

//public: struct s_stimulus_origin_fireteam const * c_stimulus_origin::get_fireteam_data_const(void) const
//{
//    mangled_ppc("?get_fireteam_data_const@c_stimulus_origin@@QBAPBUs_stimulus_origin_fireteam@@XZ");
//};

//public: bool c_stimulus_origin::operator==(class c_stimulus_origin const &) const
//{
//    mangled_ppc("??8c_stimulus_origin@@QBA_NABV0@@Z");
//};

//private: void c_stimulus_origin::clear_data(void)
//{
//    mangled_ppc("?clear_data@c_stimulus_origin@@AAAXXZ");
//};

//public: struct c_stimulus_type c_stimulus_payload::get_stimulus_type(void) const
//{
//    mangled_ppc("?get_stimulus_type@c_stimulus_payload@@QBA?AUc_stimulus_type@@XZ");
//};

//public: bool c_stimulus_payload::valid(void) const
//{
//    mangled_ppc("?valid@c_stimulus_payload@@QBA_NXZ");
//};

//public: bool c_stimulus_payload::operator==(class c_stimulus_payload const &) const
//{
//    mangled_ppc("??8c_stimulus_payload@@QBA_NABV0@@Z");
//};

//public: bool c_stimulus_type::operator==(struct c_stimulus_type const &) const
//{
//    mangled_ppc("??8c_stimulus_type@@QBA_NABU0@@Z");
//};

//public: struct s_stimulus_payload_combat_cue * c_stimulus_payload::get_combat_cue_data(void)
//{
//    mangled_ppc("?get_combat_cue_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_combat_cue@@XZ");
//};

//public: struct s_stimulus_payload_combat_cue * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_combat_cue, 32>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_combat_cue@@$0CA@@c_stimulus_payload@@QAAPAUs_stimulus_payload_combat_cue@@XZ");
//};

//public: struct s_stimulus_payload_combat_cue const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_combat_cue, 32>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_combat_cue@@$0CA@@c_stimulus_payload@@QBAPBUs_stimulus_payload_combat_cue@@XZ");
//};

//public: bool c_stimulus_type::operator==(short const &) const
//{
//    mangled_ppc("??8c_stimulus_type@@QBA_NABF@Z");
//};

//public: struct s_stimulus_payload_performance * c_stimulus_payload::get_performance_data(void)
//{
//    mangled_ppc("?get_performance_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_performance@@XZ");
//};

//public: struct s_stimulus_payload_performance * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_performance, 30>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_performance@@$0BO@@c_stimulus_payload@@QAAPAUs_stimulus_payload_performance@@XZ");
//};

//public: struct s_stimulus_payload_performance const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_performance, 30>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_performance@@$0BO@@c_stimulus_payload@@QBAPBUs_stimulus_payload_performance@@XZ");
//};

//public: struct s_stimulus_payload_performance const * c_stimulus_payload::get_performance_data_const(void) const
//{
//    mangled_ppc("?get_performance_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_performance@@XZ");
//};

//public: struct s_stimulus_payload_attach_script * c_stimulus_payload::get_attach_script_data(void)
//{
//    mangled_ppc("?get_attach_script_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_attach_script@@XZ");
//};

//public: struct s_stimulus_payload_attach_script * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_attach_script, 29>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_attach_script@@$0BN@@c_stimulus_payload@@QAAPAUs_stimulus_payload_attach_script@@XZ");
//};

//public: struct s_stimulus_payload_attach_script const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_attach_script, 29>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_attach_script@@$0BN@@c_stimulus_payload@@QBAPBUs_stimulus_payload_attach_script@@XZ");
//};

//public: struct s_stimulus_payload_attach_script const * c_stimulus_payload::get_attach_script_data_const(void) const
//{
//    mangled_ppc("?get_attach_script_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_attach_script@@XZ");
//};

//public: struct s_stimulus_payload_combat_sync_action * c_stimulus_payload::get_combat_sync_action_data(void)
//{
//    mangled_ppc("?get_combat_sync_action_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_combat_sync_action@@XZ");
//};

//public: struct s_stimulus_payload_combat_sync_action * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_combat_sync_action, 31>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_combat_sync_action@@$0BP@@c_stimulus_payload@@QAAPAUs_stimulus_payload_combat_sync_action@@XZ");
//};

//public: struct s_stimulus_payload_combat_sync_action const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_combat_sync_action, 31>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_combat_sync_action@@$0BP@@c_stimulus_payload@@QBAPBUs_stimulus_payload_combat_sync_action@@XZ");
//};

//public: struct s_stimulus_payload_direction_changed_juke * c_stimulus_payload::get_juke_data(void)
//{
//    mangled_ppc("?get_juke_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_direction_changed_juke@@XZ");
//};

//public: struct s_stimulus_payload_direction_changed_juke * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_direction_changed_juke, 21>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_direction_changed_juke@@$0BF@@c_stimulus_payload@@QAAPAUs_stimulus_payload_direction_changed_juke@@XZ");
//};

//public: struct s_stimulus_payload_direction_changed_juke const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_direction_changed_juke, 21>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_direction_changed_juke@@$0BF@@c_stimulus_payload@@QBAPBUs_stimulus_payload_direction_changed_juke@@XZ");
//};

//public: struct s_stimulus_payload_prefer_firing_points * c_stimulus_payload::get_firing_points_data(void)
//{
//    mangled_ppc("?get_firing_points_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_prefer_firing_points@@XZ");
//};

//public: struct s_stimulus_payload_prefer_firing_points * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_prefer_firing_points, 28>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_prefer_firing_points@@$0BM@@c_stimulus_payload@@QAAPAUs_stimulus_payload_prefer_firing_points@@XZ");
//};

//public: struct s_stimulus_payload_prefer_firing_points const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_prefer_firing_points, 28>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_prefer_firing_points@@$0BM@@c_stimulus_payload@@QBAPBUs_stimulus_payload_prefer_firing_points@@XZ");
//};

//public: struct s_stimulus_payload_projectile * c_stimulus_payload::get_projectile_data(void)
//{
//    mangled_ppc("?get_projectile_data@c_stimulus_payload@@QAAPAUs_stimulus_payload_projectile@@XZ");
//};

//public: struct s_stimulus_payload_projectile * c_stimulus_payload::get_typed_data<struct s_stimulus_payload_projectile, 36>(void)
//{
//    mangled_ppc("??$get_typed_data@Us_stimulus_payload_projectile@@$0CE@@c_stimulus_payload@@QAAPAUs_stimulus_payload_projectile@@XZ");
//};

//public: struct s_stimulus_payload_projectile const * c_stimulus_payload::get_typed_data_const<struct s_stimulus_payload_projectile, 36>(void) const
//{
//    mangled_ppc("??$get_typed_data_const@Us_stimulus_payload_projectile@@$0CE@@c_stimulus_payload@@QBAPBUs_stimulus_payload_projectile@@XZ");
//};

//public: struct s_stimulus_payload_projectile const * c_stimulus_payload::get_projectile_data_const(void) const
//{
//    mangled_ppc("?get_projectile_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_projectile@@XZ");
//};

//private: void c_stimulus_payload::clear_data(void)
//{
//    mangled_ppc("?clear_data@c_stimulus_payload@@AAAXXZ");
//};

//public: void c_stimulus_flags::set(struct c_stimulus_type, long, bool)
//{
//    mangled_ppc("?set@c_stimulus_flags@@QAAXUc_stimulus_type@@J_N@Z");
//};

//public: void c_stimulus_flags::set(enum e_stimulus, bool)
//{
//    mangled_ppc("?set@c_stimulus_flags@@QAAXW4e_stimulus@@_N@Z");
//};

//public: bool c_stimulus_flags::test(struct c_stimulus_type) const
//{
//    mangled_ppc("?test@c_stimulus_flags@@QBA_NUc_stimulus_type@@@Z");
//};

//public: bool c_stimulus_flags::test(enum e_stimulus) const
//{
//    mangled_ppc("?test@c_stimulus_flags@@QBA_NW4e_stimulus@@@Z");
//};

//public: bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_distribution_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_distribution_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_distribution_flags, short, 1, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_distribution_flags@@F$00Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_payload_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@QBA_NW4e_payload_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::set(enum e_payload_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@QAAXW4e_payload_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_big_flags_typed_no_init<enum e_stimulus, 43>::test(enum e_stimulus) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QBA_NW4e_stimulus@@@Z");
//};

//public: void c_big_flags_typed_no_init<enum e_stimulus, 43>::set(enum e_stimulus, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QAAXW4e_stimulus@@_N@Z");
//};

//public: static bool c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_payload_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@SA_NW4e_payload_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_payload_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_payload_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_payload_flags@@F$01Us_default_enum_string_resolver@@@@CAFW4e_payload_flags@@@Z");
//};

//public: static bool c_big_flags_typed_no_init<enum e_stimulus, 43>::valid_bit(enum e_stimulus)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@SA_NW4e_stimulus@@@Z");
//};

//public: bool c_big_flags_typed_no_init<enum e_stimulus, 43>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@QBA_NXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_second_slice_of_chunk_inclusive(enum e_stimulus)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KAKW4e_stimulus@@@Z");
//};

//protected: static enum e_stimulus c_big_flags_typed_no_init<enum e_stimulus, 43>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KA?AW4e_stimulus@@J@Z");
//};

//protected: static long c_big_flags_typed_no_init<enum e_stimulus, 43>::bit_index_to_flag_chunk_index(enum e_stimulus)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KAJW4e_stimulus@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_stimulus, 43>::get_mask_of_first_slice_of_chunk_exclusive(enum e_stimulus)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@W4e_stimulus@@$0CL@@@KAKW4e_stimulus@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_stimulus_ref_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_stimulus_ref_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_stimulus_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_stimulus_data_allocator@@YAXXZ");
//};

//void g_stimulus_ref_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_stimulus_ref_allocator@@YAXXZ");
//};

