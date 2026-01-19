/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float k_simulation_weapon_fire_event_maximum_nonthreatening_relevance; // "?k_simulation_weapon_fire_event_maximum_nonthreatening_relevance@@3MA"
// float k_simulation_weapon_fire_event_threatening_relevance_max; // "?k_simulation_weapon_fire_event_threatening_relevance_max@@3MA"
// float k_simulation_weapon_fire_event_predicted_hit_relevance; // "?k_simulation_weapon_fire_event_predicted_hit_relevance@@3MA"
// float k_simulation_weapon_fire_event_threatening_far_range; // "?k_simulation_weapon_fire_event_threatening_far_range@@3MA"
// float k_simulation_weapon_fire_event_threatening_near_range; // "?k_simulation_weapon_fire_event_threatening_near_range@@3MA"
// float k_simulation_weapon_fire_event_threatening_far_cosine_threshold; // "?k_simulation_weapon_fire_event_threatening_far_cosine_threshold@@3MA"
// float k_simulation_weapon_fire_event_threatening_near_cosine_threshold; // "?k_simulation_weapon_fire_event_threatening_near_cosine_threshold@@3MA"
// float k_simulation_weapon_fire_event_threatening_relevance_min; // "?k_simulation_weapon_fire_event_threatening_relevance_min@@3MA"
// class c_simulation_weapon_entity_definition g_simulation_weapon_entity_definition; // "?g_simulation_weapon_entity_definition@@3Vc_simulation_weapon_entity_definition@@A"
// class c_simulation_request_weapon_fire_event_definition g_simulation_request_weapon_fire_event_definition; // "?g_simulation_request_weapon_fire_event_definition@@3Vc_simulation_request_weapon_fire_event_definition@@A"
// class c_simulation_action_weapon_fire_event_definition g_simulation_action_weapon_fire_event_definition; // "?g_simulation_action_weapon_fire_event_definition@@3Vc_simulation_action_weapon_fire_event_definition@@A"
// class c_simulation_weapon_reload_event_definition g_simulation_weapon_reload_event_definition; // "?g_simulation_weapon_reload_event_definition@@3Vc_simulation_weapon_reload_event_definition@@A"
// class c_simulation_weapon_pickup_event_definition g_simulation_weapon_pickup_event_definition; // "?g_simulation_weapon_pickup_event_definition@@3Vc_simulation_weapon_pickup_event_definition@@A"
// class c_simulation_weapon_put_away_event_definition g_simulation_weapon_put_away_event_definition; // "?g_simulation_weapon_put_away_event_definition@@3Vc_simulation_weapon_put_away_event_definition@@A"
// class c_simulation_weapon_drop_event_definition g_simulation_weapon_drop_event_definition; // "?g_simulation_weapon_drop_event_definition@@3Vc_simulation_weapon_drop_event_definition@@A"
// class c_simulation_weapon_effect_event_definition g_simulation_weapon_effect_event_definition; // "?g_simulation_weapon_effect_event_definition@@3Vc_simulation_weapon_effect_event_definition@@A"
// class c_simulation_weapon_empty_click_event_definition g_simulation_weapon_empty_click_event_definition; // "?g_simulation_weapon_empty_click_event_definition@@3Vc_simulation_weapon_empty_click_event_definition@@A"
// class c_simulation_weapon_tether_request_event_definition g_simulation_weapon_tether_request_event_definition; // "?g_simulation_weapon_tether_request_event_definition@@3Vc_simulation_weapon_tether_request_event_definition@@A"

// public: virtual enum e_simulation_entity_type c_simulation_weapon_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_weapon_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_weapon_entity_definition::state_data_size(void);
// public: virtual long c_simulation_weapon_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_weapon_entity_definition::update_flag_count(void);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_weapon_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_weapon_entity_definition::object_required_to_join_game(long);
// public: virtual void c_simulation_weapon_entity_definition::build_object_creation_data(long, long, void *);
// public: virtual bool c_simulation_weapon_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_weapon_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual void c_simulation_weapon_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual long c_simulation_weapon_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *);
// public: virtual bool c_simulation_weapon_entity_definition::handle_delete_object(long);
// public: virtual void c_simulation_weapon_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual struct s_simulation_object_state_data const * c_simulation_weapon_entity_definition::get_object_state_data(long, long, void const *);
// public: virtual bool c_simulation_weapon_entity_definition::promote_object_to_authority(long);
// public: virtual bool c_simulation_weapon_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_weapon_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_weapon_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual bool c_simulation_weapon_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: virtual void c_simulation_weapon_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: static void c_simulation_weapon_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_weapon_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// public: virtual void c_simulation_weapon_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual bool c_simulation_weapon_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: virtual bool c_simulation_weapon_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: virtual bool c_simulation_weapon_entity_definition::entity_state_lossy_compare(void *, void *, long);
// void weapon_fire_prepare_event_data_for_gameworld(struct s_simulation_weapon_fire_event_data *);
// void weapon_fire_apply_game_event(long, long const *, struct s_simulation_weapon_fire_event_data const *);
// void calculate_post_death_gun_position(long, union real_point3d *, union vector3d *, union vector3d *);
// public: virtual long c_simulation_request_weapon_fire_event_definition::payload_size(void);
// public: virtual long c_simulation_request_weapon_fire_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_request_weapon_fire_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_request_weapon_fire_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_request_weapon_fire_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_request_weapon_fire_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_request_weapon_fire_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_request_weapon_fire_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_request_weapon_fire_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_request_weapon_fire_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_action_weapon_fire_event_definition::payload_size(void);
// public: virtual long c_simulation_action_weapon_fire_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_action_weapon_fire_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_action_weapon_fire_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_action_weapon_fire_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_action_weapon_fire_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// void encode_fire_data_and_impact_target_counts(class c_bitstream *, long, long);
// void decode_fire_data_and_impact_target_counts(class c_bitstream *, long *, long *);
// public: virtual void c_simulation_action_weapon_fire_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_action_weapon_fire_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_action_weapon_fire_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_action_weapon_fire_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_action_weapon_fire_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_reload_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_reload_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_reload_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_reload_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_reload_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_reload_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_reload_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_reload_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_reload_event_definition::apply_game_event(long, long const *, long, void const *);
// bool evaluate_rounds_loaded_before_reload_interruption(long, bool);
// public: virtual long c_simulation_weapon_reload_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_drop_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_drop_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_drop_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_drop_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_drop_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_drop_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_drop_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_drop_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_drop_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_drop_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_put_away_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_put_away_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_put_away_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_put_away_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_put_away_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_put_away_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_put_away_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_put_away_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_put_away_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_put_away_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_pickup_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_pickup_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_pickup_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_pickup_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_pickup_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_pickup_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_pickup_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_pickup_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_pickup_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_pickup_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_effect_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_effect_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_effect_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual float c_simulation_weapon_effect_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_weapon_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_effect_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_effect_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_effect_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_empty_click_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_empty_click_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_empty_click_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_empty_click_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_empty_click_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_empty_click_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_empty_click_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_empty_click_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_empty_click_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_empty_click_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_tether_request_event_definition::payload_size(void);
// public: virtual long c_simulation_weapon_tether_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_weapon_tether_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_weapon_tether_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_weapon_tether_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_weapon_tether_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_weapon_tether_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_weapon_tether_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_weapon_tether_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_weapon_tether_request_event_definition::get_player_index(long, long const *, long, void const *);
// void simulation_weapon_prepare_for_interruption(long, bool, bool, float, bool *);
// long simulation_weapon_quantize_projectile_error(float);
// float simulation_weapon_dequantize_projectile_error(long);
// float simulation_weapon_quantize_and_dequantize_projectile_error(float);
// long simulation_weapon_quantize_aiming_vector(union vector3d const *);
// void simulation_weapon_dequantize_aiming_vector(long, union vector3d *);
// void simulation_weapon_quantize_and_dequantize_aiming_vector(union vector3d *);
// void simulation_weapon_encode_weapon_unit_inventory_index(class c_bitstream *, long);
// long simulation_weapon_decode_weapon_unit_inventory_index(class c_bitstream *);
// public: static long s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::get_count(void);
// public: class c_target_tracking_system * c_opaque_data<class c_target_tracking_system, 60, 4>::get(void);
// public: void c_flags_no_init<enum e_unit_flags, unsigned long, 32, struct s_default_enum_string_resolver>::set(enum e_unit_flags, bool);
// void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_weapon_update_flag, class c_simulation_item_entity_definition, 22, 23>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// void simulation_object_evaluate_dirty_property_costs<class c_simulation_weapon_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *);
// public: struct s_predicted_weapon_fire_projectile_data & s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::operator[]<long>(long);
// public: void c_bitstream::write_index<7, long>(char const *, long);
// long quantize_real_fast2<64, 0, 1>(float, float, float);
// long quantize_unit_vector3d_fast<30>(union vector3d const *);
// void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_weapon_update_flag, 22, 23>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// enum e_simulation_weapon_update_flag operator++(enum e_simulation_weapon_update_flag &, int);
// public: static bool s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::valid<long>(long);
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 13376, 1, 0>(float);
// public: c_simulation_weapon_entity_definition::c_simulation_weapon_entity_definition(void);
// public: c_simulation_item_entity_definition::c_simulation_item_entity_definition(void);
// public: c_simulation_request_weapon_fire_event_definition::c_simulation_request_weapon_fire_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_request_weapon_fire_event_definition::event_type(void);
// public: virtual char const * c_simulation_request_weapon_fire_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_request_weapon_fire_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_request_weapon_fire_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_action_weapon_fire_event_definition::c_simulation_action_weapon_fire_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_action_weapon_fire_event_definition::event_type(void);
// public: virtual char const * c_simulation_action_weapon_fire_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_action_weapon_fire_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_action_weapon_fire_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_reload_event_definition::c_simulation_weapon_reload_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_reload_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_reload_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_reload_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_reload_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_pickup_event_definition::c_simulation_weapon_pickup_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_pickup_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_pickup_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_pickup_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_pickup_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_put_away_event_definition::c_simulation_weapon_put_away_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_put_away_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_put_away_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_put_away_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_put_away_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_drop_event_definition::c_simulation_weapon_drop_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_drop_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_drop_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_drop_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_drop_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_effect_event_definition::c_simulation_weapon_effect_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_effect_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_effect_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_effect_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_empty_click_event_definition::c_simulation_weapon_empty_click_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_empty_click_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_empty_click_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_empty_click_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_empty_click_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_tether_request_event_definition::c_simulation_weapon_tether_request_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_weapon_tether_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_weapon_tether_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_tether_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_tether_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_weapon_entity_definition::~c_simulation_weapon_entity_definition(void);
// public: c_simulation_item_entity_definition::~c_simulation_item_entity_definition(void);
// void g_simulation_weapon_entity_definition::`dynamic atexit destructor'(void);

//public: virtual enum e_simulation_entity_type c_simulation_weapon_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_weapon_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_weapon_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_weapon_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_weapon_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_weapon_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_weapon_entity_definition@@UAAJXZ");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_weapon_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_weapon_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_weapon_entity_definition::object_required_to_join_game(long)
//{
//    mangled_ppc("?object_required_to_join_game@c_simulation_weapon_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::build_object_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_object_creation_data@c_simulation_weapon_entity_definition@@UAAXJJPAX@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_weapon_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_weapon_entity_definition::handle_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?handle_object_update@c_simulation_weapon_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JV2@JPAX@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_weapon_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_weapon_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual long c_simulation_weapon_entity_definition::create_object(long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void const *)
//{
//    mangled_ppc("?create_object@c_simulation_weapon_entity_definition@@UAAJJPBXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::handle_delete_object(long)
//{
//    mangled_ppc("?handle_delete_object@c_simulation_weapon_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::apply_object_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?apply_object_update@c_simulation_weapon_entity_definition@@UAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual struct s_simulation_object_state_data const * c_simulation_weapon_entity_definition::get_object_state_data(long, long, void const *)
//{
//    mangled_ppc("?get_object_state_data@c_simulation_weapon_entity_definition@@UAAPBUs_simulation_object_state_data@@JJPBX@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::promote_object_to_authority(long)
//{
//    mangled_ppc("?promote_object_to_authority@c_simulation_weapon_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_weapon_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_weapon_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_weapon_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_weapon_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_weapon_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_weapon_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: static void c_simulation_weapon_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_dirty_property_costs@c_simulation_weapon_entity_definition@@SAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::evaluate_update_cost(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_update_cost@c_simulation_weapon_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: virtual void c_simulation_weapon_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_weapon_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_weapon_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_weapon_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: virtual bool c_simulation_weapon_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_weapon_entity_definition@@UAA_NPAX0J@Z");
//};

//void weapon_fire_prepare_event_data_for_gameworld(struct s_simulation_weapon_fire_event_data *)
//{
//    mangled_ppc("?weapon_fire_prepare_event_data_for_gameworld@@YAXPAUs_simulation_weapon_fire_event_data@@@Z");
//};

//void weapon_fire_apply_game_event(long, long const *, struct s_simulation_weapon_fire_event_data const *)
//{
//    mangled_ppc("?weapon_fire_apply_game_event@@YAXJPBJPBUs_simulation_weapon_fire_event_data@@@Z");
//};

//void calculate_post_death_gun_position(long, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?calculate_post_death_gun_position@@YAXJPATreal_point3d@@PATvector3d@@1@Z");
//};

//public: virtual long c_simulation_request_weapon_fire_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_request_weapon_fire_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_request_weapon_fire_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_request_weapon_fire_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_request_weapon_fire_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_request_weapon_fire_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_request_weapon_fire_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_request_weapon_fire_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_request_weapon_fire_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_request_weapon_fire_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_request_weapon_fire_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_request_weapon_fire_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_request_weapon_fire_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_request_weapon_fire_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_request_weapon_fire_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_request_weapon_fire_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_request_weapon_fire_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_request_weapon_fire_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_request_weapon_fire_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_request_weapon_fire_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_action_weapon_fire_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_action_weapon_fire_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_action_weapon_fire_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_action_weapon_fire_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_action_weapon_fire_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_action_weapon_fire_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_action_weapon_fire_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_action_weapon_fire_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_action_weapon_fire_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_action_weapon_fire_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_action_weapon_fire_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_action_weapon_fire_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//void encode_fire_data_and_impact_target_counts(class c_bitstream *, long, long)
//{
//    mangled_ppc("?encode_fire_data_and_impact_target_counts@@YAXPAVc_bitstream@@JJ@Z");
//};

//void decode_fire_data_and_impact_target_counts(class c_bitstream *, long *, long *)
//{
//    mangled_ppc("?decode_fire_data_and_impact_target_counts@@YAXPAVc_bitstream@@PAJ1@Z");
//};

//public: virtual void c_simulation_action_weapon_fire_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_action_weapon_fire_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_action_weapon_fire_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_action_weapon_fire_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_action_weapon_fire_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_action_weapon_fire_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_action_weapon_fire_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_action_weapon_fire_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_action_weapon_fire_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_action_weapon_fire_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_reload_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_reload_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_reload_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_reload_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_reload_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_reload_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_reload_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_reload_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_reload_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_reload_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_reload_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_reload_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_reload_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_reload_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_reload_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_reload_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_reload_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_reload_event_definition@@UAAXJPBJJPBX@Z");
//};

//bool evaluate_rounds_loaded_before_reload_interruption(long, bool)
//{
//    mangled_ppc("?evaluate_rounds_loaded_before_reload_interruption@@YA_NJ_N@Z");
//};

//public: virtual long c_simulation_weapon_reload_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_reload_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_drop_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_drop_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_drop_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_drop_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_drop_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_drop_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_drop_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_drop_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_drop_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_drop_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_drop_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_drop_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_drop_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_drop_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_drop_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_drop_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_drop_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_drop_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_drop_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_drop_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_put_away_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_put_away_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_put_away_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_put_away_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_put_away_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_put_away_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_put_away_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_put_away_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_put_away_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_put_away_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_put_away_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_put_away_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_put_away_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_put_away_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_put_away_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_put_away_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_put_away_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_put_away_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_put_away_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_put_away_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_pickup_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_pickup_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_pickup_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_pickup_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_pickup_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_pickup_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_pickup_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_pickup_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_pickup_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_pickup_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_pickup_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_pickup_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_pickup_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_pickup_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_pickup_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_pickup_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_pickup_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_pickup_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_pickup_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_pickup_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_effect_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_effect_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_effect_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_effect_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_effect_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_effect_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_effect_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_effect_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual float c_simulation_weapon_effect_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_weapon_effect_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_weapon_effect_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_effect_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_effect_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_effect_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_effect_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_effect_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_effect_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_effect_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_effect_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_effect_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_effect_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_effect_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_empty_click_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_empty_click_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_empty_click_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_empty_click_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_empty_click_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_empty_click_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_empty_click_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_empty_click_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_empty_click_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_empty_click_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_empty_click_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_empty_click_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_empty_click_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_empty_click_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_empty_click_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_empty_click_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_empty_click_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_empty_click_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_empty_click_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_empty_click_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_tether_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_weapon_tether_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_weapon_tether_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_weapon_tether_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_weapon_tether_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_weapon_tether_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_weapon_tether_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_weapon_tether_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_weapon_tether_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_weapon_tether_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_weapon_tether_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_weapon_tether_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_weapon_tether_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_weapon_tether_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_weapon_tether_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_weapon_tether_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_weapon_tether_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_weapon_tether_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_weapon_tether_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_weapon_tether_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//void simulation_weapon_prepare_for_interruption(long, bool, bool, float, bool *)
//{
//    mangled_ppc("?simulation_weapon_prepare_for_interruption@@YAXJ_N0MPA_N@Z");
//};

//long simulation_weapon_quantize_projectile_error(float)
//{
//    mangled_ppc("?simulation_weapon_quantize_projectile_error@@YAJM@Z");
//};

//float simulation_weapon_dequantize_projectile_error(long)
//{
//    mangled_ppc("?simulation_weapon_dequantize_projectile_error@@YAMJ@Z");
//};

//float simulation_weapon_quantize_and_dequantize_projectile_error(float)
//{
//    mangled_ppc("?simulation_weapon_quantize_and_dequantize_projectile_error@@YAMM@Z");
//};

//long simulation_weapon_quantize_aiming_vector(union vector3d const *)
//{
//    mangled_ppc("?simulation_weapon_quantize_aiming_vector@@YAJPBTvector3d@@@Z");
//};

//void simulation_weapon_dequantize_aiming_vector(long, union vector3d *)
//{
//    mangled_ppc("?simulation_weapon_dequantize_aiming_vector@@YAXJPATvector3d@@@Z");
//};

//void simulation_weapon_quantize_and_dequantize_aiming_vector(union vector3d *)
//{
//    mangled_ppc("?simulation_weapon_quantize_and_dequantize_aiming_vector@@YAXPATvector3d@@@Z");
//};

//void simulation_weapon_encode_weapon_unit_inventory_index(class c_bitstream *, long)
//{
//    mangled_ppc("?simulation_weapon_encode_weapon_unit_inventory_index@@YAXPAVc_bitstream@@J@Z");
//};

//long simulation_weapon_decode_weapon_unit_inventory_index(class c_bitstream *)
//{
//    mangled_ppc("?simulation_weapon_decode_weapon_unit_inventory_index@@YAJPAVc_bitstream@@@Z");
//};

//public: static long s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_predicted_weapon_fire_projectile_data@@$03@@SAJXZ");
//};

//public: class c_target_tracking_system * c_opaque_data<class c_target_tracking_system, 60, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_target_tracking_system@@$0DM@$03@@QAAPAVc_target_tracking_system@@XZ");
//};

//public: void c_flags_no_init<enum e_unit_flags, unsigned long, 32, struct s_default_enum_string_resolver>::set(enum e_unit_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_unit_flags@@K$0CA@Us_default_enum_string_resolver@@@@QAAXW4e_unit_flags@@_N@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_recursive<enum e_simulation_weapon_update_flag, class c_simulation_item_entity_definition, 22, 23>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_recursive@W4e_simulation_weapon_update_flag@@Vc_simulation_item_entity_definition@@$0BG@$0BH@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs<class c_simulation_weapon_entity_definition>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs@Vc_simulation_weapon_entity_definition@@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAUs_entity_evaluate_update_outputs@@@Z");
//};

//public: struct s_predicted_weapon_fire_projectile_data & s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_predicted_weapon_fire_projectile_data@@$03@@QAAAAUs_predicted_weapon_fire_projectile_data@@J@Z");
//};

//public: void c_bitstream::write_index<7, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$06J@c_bitstream@@QAAXPBDJ@Z");
//};

//long quantize_real_fast2<64, 0, 1>(float, float, float)
//{
//    mangled_ppc("??$quantize_real_fast2@$0EA@$0A@$00@@YAJMMM@Z");
//};

//long quantize_unit_vector3d_fast<30>(union vector3d const *)
//{
//    mangled_ppc("??$quantize_unit_vector3d_fast@$0BO@@@YAJPBTvector3d@@@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_weapon_update_flag, 22, 23>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_non_recursive@W4e_simulation_weapon_update_flag@@$0BG@$0BH@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//enum e_simulation_weapon_update_flag operator++(enum e_simulation_weapon_update_flag &, int)
//{
//    mangled_ppc("??E@YA?AW4e_simulation_weapon_update_flag@@AAW40@H@Z");
//};

//public: static bool s_static_array<struct s_predicted_weapon_fire_projectile_data, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_predicted_weapon_fire_projectile_data@@$03@@SA_NJ@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 13376, 1, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$0DEEA@$00$0A@@@YAJM@Z");
//};

//public: c_simulation_weapon_entity_definition::c_simulation_weapon_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_entity_definition@@QAA@XZ");
//};

//public: c_simulation_item_entity_definition::c_simulation_item_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_item_entity_definition@@QAA@XZ");
//};

//public: c_simulation_request_weapon_fire_event_definition::c_simulation_request_weapon_fire_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_request_weapon_fire_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_request_weapon_fire_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_request_weapon_fire_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_request_weapon_fire_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_request_weapon_fire_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_request_weapon_fire_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_request_weapon_fire_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_request_weapon_fire_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_request_weapon_fire_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_action_weapon_fire_event_definition::c_simulation_action_weapon_fire_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_action_weapon_fire_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_action_weapon_fire_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_action_weapon_fire_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_action_weapon_fire_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_action_weapon_fire_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_action_weapon_fire_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_action_weapon_fire_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_action_weapon_fire_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_action_weapon_fire_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_reload_event_definition::c_simulation_weapon_reload_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_reload_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_reload_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_reload_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_reload_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_reload_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_reload_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_reload_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_reload_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_reload_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_pickup_event_definition::c_simulation_weapon_pickup_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_pickup_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_pickup_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_pickup_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_pickup_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_pickup_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_pickup_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_pickup_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_pickup_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_pickup_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_put_away_event_definition::c_simulation_weapon_put_away_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_put_away_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_put_away_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_put_away_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_put_away_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_put_away_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_put_away_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_put_away_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_put_away_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_put_away_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_drop_event_definition::c_simulation_weapon_drop_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_drop_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_drop_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_drop_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_drop_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_drop_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_drop_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_drop_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_drop_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_drop_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_effect_event_definition::c_simulation_weapon_effect_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_effect_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_effect_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_effect_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_effect_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_effect_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_effect_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_effect_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_effect_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_effect_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_empty_click_event_definition::c_simulation_weapon_empty_click_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_empty_click_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_empty_click_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_empty_click_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_empty_click_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_empty_click_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_empty_click_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_empty_click_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_empty_click_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_empty_click_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_tether_request_event_definition::c_simulation_weapon_tether_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_weapon_tether_request_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_weapon_tether_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_weapon_tether_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_weapon_tether_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_weapon_tether_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_weapon_tether_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_weapon_tether_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_weapon_tether_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_weapon_tether_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_weapon_entity_definition::~c_simulation_weapon_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_weapon_entity_definition@@QAA@XZ");
//};

//public: c_simulation_item_entity_definition::~c_simulation_item_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_item_entity_definition@@QAA@XZ");
//};

//void g_simulation_weapon_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_weapon_entity_definition@@YAXXZ");
//};

