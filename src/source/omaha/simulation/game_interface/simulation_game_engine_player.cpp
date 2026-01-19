/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: __cdecl c_entity_update_encode_helper::~c_entity_update_encode_helper(void)'::`20'::x_event_category_index; // "?x_event_category_index@?BE@???1c_entity_update_encode_helper@@QAA@XZ@4JC"
// long volatile `public: bool __cdecl c_entity_update_encode_helper::start_encoding_update(class c_bitstream *, long, long, long, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long const *, long)'::`137'::x_event_category_index; // "?x_event_category_index@?IJ@??start_encoding_update@c_entity_update_encode_helper@@QAA_NPAVc_bitstream@@JJJJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBJJ@Z@4JC"
// long volatile `public: __cdecl c_entity_update_decode_helper::~c_entity_update_decode_helper(void)'::`20'::x_event_category_index; // "?x_event_category_index@?BE@???1c_entity_update_decode_helper@@QAA@XZ@4JC"
// class c_simulation_game_engine_player_entity_definition g_simulation_game_engine_player_entity_definition; // "?g_simulation_game_engine_player_entity_definition@@3Vc_simulation_game_engine_player_entity_definition@@A"
// class c_simulation_player_editor_request_event_definition g_simulation_player_editor_request_event_definition; // "?g_simulation_player_editor_request_event_definition@@3Vc_simulation_player_editor_request_event_definition@@A"
// class c_simulation_player_purchase_request_event_definition g_simulation_player_purchase_request_event_definition; // "?g_simulation_player_purchase_request_event_definition@@3Vc_simulation_player_purchase_request_event_definition@@A"
// class c_simulation_player_loadout_request_event_definition g_simulation_player_loadout_request_event_definition; // "?g_simulation_player_loadout_request_event_definition@@3Vc_simulation_player_loadout_request_event_definition@@A"
// class c_simulation_player_money_grant_event_definition g_simulation_player_money_grant_event_definition; // "?g_simulation_player_money_grant_event_definition@@3Vc_simulation_player_money_grant_event_definition@@A"
// class c_simulation_player_account_balance_notification_event_definition g_simulation_player_account_balance_notification_event_definition; // "?g_simulation_player_account_balance_notification_event_definition@@3Vc_simulation_player_account_balance_notification_event_definition@@A"
// class c_simulation_player_set_respawn_target_transform_event_definition g_simulation_player_set_respawn_target_transform_event_definition; // "?g_simulation_player_set_respawn_target_transform_event_definition@@3Vc_simulation_player_set_respawn_target_transform_event_definition@@A"
// class c_simulation_player_set_orbiting_camera_target_event_definition g_simulation_player_set_orbiting_camera_target_event_definition; // "?g_simulation_player_set_orbiting_camera_target_event_definition@@3Vc_simulation_player_set_orbiting_camera_target_event_definition@@A"
// class c_simulation_player_call_for_help_request_event_definition g_simulation_player_call_for_help_request_event_definition; // "?g_simulation_player_call_for_help_request_event_definition@@3Vc_simulation_player_call_for_help_request_event_definition@@A"
// class c_simulation_player_force_base_respawn_event_definition g_simulation_player_force_base_respawn_event_definition; // "?g_simulation_player_force_base_respawn_event_definition@@3Vc_simulation_player_force_base_respawn_event_definition@@A"
// class c_simulation_authority_ignored_predicted_position_event_definition g_simulation_authority_ignored_predicted_position_event_definition; // "?g_simulation_authority_ignored_predicted_position_event_definition@@3Vc_simulation_authority_ignored_predicted_position_event_definition@@A"

// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_game_engine_player_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::promote_game_entity_to_authority(long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_type_is_gameworld_object(void);
// public: virtual bool c_simulation_game_engine_player_entity_definition::gameworld_attachment_valid(long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_game_engine_player_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_game_engine_player_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// public: virtual void c_simulation_game_engine_player_entity_definition::build_creation_data(long, long, void *);
// public: virtual void c_simulation_game_engine_player_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_game_engine_player_entity_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_game_engine_player_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::delete_game_entity(long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *);
// public: virtual void c_simulation_game_engine_player_entity_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_update_encode(struct s_entity_update_encode_data *);
// public: class c_player_trait_shield_vitality const * c_player_traits::get_shield_vitality_traits(void) const;
// public: class c_player_trait_weapons const * c_player_traits::get_weapons_traits(void) const;
// public: class c_player_trait_movement const * c_player_traits::get_movement_traits(void) const;
// public: class c_player_trait_appearance const * c_player_traits::get_appearance_traits(void) const;
// public: class c_player_trait_sensors const * c_player_traits::get_sensor_traits(void) const;
// public: c_entity_update_encode_helper::c_entity_update_encode_helper(void);
// public: c_entity_update_encode_helper::~c_entity_update_encode_helper(void);
// public: bool c_entity_update_encode_helper::start_encoding_update(class c_bitstream *, long, long, long, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long const *, long);
// public: bool c_entity_update_encode_helper::start_component(long, char const *);
// public: void c_entity_update_encode_helper::finish_component(void);
// private: void c_entity_update_encode_helper::skip_component_silently(long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_update_decode(struct s_entity_update_decode_data *);
// public: class c_player_trait_shield_vitality * c_player_traits::get_shield_vitality_traits_writeable(void);
// public: class c_player_trait_weapons * c_player_traits::get_weapons_traits_writeable(void);
// public: class c_player_trait_movement * c_player_traits::get_movement_traits_writeable(void);
// public: class c_player_trait_appearance * c_player_traits::get_appearance_traits_writeable(void);
// public: class c_player_trait_sensors * c_player_traits::get_sensor_traits_writeable(void);
// public: c_entity_update_decode_helper::c_entity_update_decode_helper(void);
// public: c_entity_update_decode_helper::~c_entity_update_decode_helper(void);
// public: bool c_entity_update_decode_helper::read_component(long, char const *);
// private: void c_entity_update_decode_helper::read_handle_block_delimiters(long);
// private: void c_entity_update_decode_helper::read_validate_and_setup(long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_state_lossy_compare(void *, void *, long);
// public: virtual bool c_simulation_game_engine_player_entity_definition::entity_creation_lossy_compare(void *, void *, long);
// public: static long c_simulation_game_engine_player_entity_definition::game_engine_get_absolute_player_index_from_simulation_object_glue_index(long);
// public: virtual long c_simulation_player_editor_request_event_definition::payload_size(void);
// public: virtual long c_simulation_player_editor_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_editor_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_editor_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_editor_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_player_editor_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_editor_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_editor_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_editor_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_editor_request_event_definition::get_player_index(long, long const *, long, void const *);
// public: long c_sandbox_action::get_weak_absolute_player_index(void) const;
// public: virtual long c_simulation_player_purchase_request_event_definition::payload_size(void);
// public: virtual long c_simulation_player_purchase_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_purchase_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_purchase_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_purchase_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_player_purchase_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_purchase_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_purchase_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_purchase_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_purchase_request_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_loadout_request_event_definition::payload_size(void);
// public: virtual long c_simulation_player_loadout_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_loadout_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_loadout_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_loadout_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_player_loadout_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_loadout_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_loadout_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_loadout_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_loadout_request_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_money_grant_event_definition::payload_size(void);
// public: virtual long c_simulation_player_money_grant_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_money_grant_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_money_grant_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_money_grant_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_player_money_grant_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_money_grant_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_money_grant_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_money_grant_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_money_grant_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_account_balance_notification_event_definition::payload_size(void);
// public: virtual long c_simulation_player_account_balance_notification_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_account_balance_notification_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_account_balance_notification_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_account_balance_notification_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_player_account_balance_notification_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_player_account_balance_notification_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_account_balance_notification_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_account_balance_notification_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_account_balance_notification_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_account_balance_notification_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::payload_size(void);
// public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_player_set_respawn_target_transform_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::payload_size(void);
// public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_player_set_orbiting_camera_target_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_call_for_help_request_event_definition::payload_size(void);
// public: virtual long c_simulation_player_call_for_help_request_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_call_for_help_request_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_call_for_help_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_call_for_help_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_player_call_for_help_request_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_player_call_for_help_request_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_call_for_help_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_call_for_help_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_call_for_help_request_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_call_for_help_request_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_player_force_base_respawn_event_definition::payload_size(void);
// public: virtual long c_simulation_player_force_base_respawn_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_player_force_base_respawn_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_player_force_base_respawn_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_player_force_base_respawn_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual float c_simulation_player_force_base_respawn_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual void c_simulation_player_force_base_respawn_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_player_force_base_respawn_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_player_force_base_respawn_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_player_force_base_respawn_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_player_force_base_respawn_event_definition::get_player_index(long, long const *, long, void const *);
// public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::payload_size(void);
// public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::get_player_index(long, long const *, long, void const *);
// public: void c_bitstream::write_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_index<5, long>(char const *, long);
// public: void c_bitstream::read_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_index<5>(char const *);
// public: void c_bitstream::write_index<256, long>(char const *, long);
// public: void c_bitstream::write_index<3, enum e_weapon_purchase_slot>(char const *, enum e_weapon_purchase_slot);
// public: long c_bitstream::read_index<256>(char const *);
// public: void c_bitstream::write_index<16, short>(char const *, short);
// public: enum e_loadout_palette_type c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::operator enum e_loadout_palette_type(void) const;
// public: bool c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: enum e_player_respawn_failure c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::operator enum e_player_respawn_failure(void) const;
// public: bool c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_index<5>(void);
// public: static enum e_player_respawn_failure c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_loadout_palette_type c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_index<256>(void);
// bool operator==<enum e_weapon_purchase_slot>(enum e_weapon_purchase_slot const &, enum e_none_sentinel const &);
// public: c_simulation_game_engine_player_entity_definition::c_simulation_game_engine_player_entity_definition(void);
// public: virtual enum e_simulation_entity_type c_simulation_game_engine_player_entity_definition::entity_type(void);
// public: virtual char const * c_simulation_game_engine_player_entity_definition::entity_type_name(void);
// public: virtual long c_simulation_game_engine_player_entity_definition::state_data_size(void);
// public: virtual long c_simulation_game_engine_player_entity_definition::creation_data_size(void);
// public: virtual long c_simulation_game_engine_player_entity_definition::update_flag_count(void);
// public: c_simulation_player_editor_request_event_definition::c_simulation_player_editor_request_event_definition(void);
// public: virtual float c_simulation_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float);
// public: virtual enum e_simulation_event_type c_simulation_player_editor_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_editor_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_editor_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_editor_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_event_definition::c_simulation_event_definition(void);
// public: virtual void c_simulation_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual long c_simulation_event_definition::get_player_index(long, long const *, long, void const *);
// public: c_simulation_player_purchase_request_event_definition::c_simulation_player_purchase_request_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_purchase_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_purchase_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_purchase_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_purchase_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_loadout_request_event_definition::c_simulation_player_loadout_request_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_loadout_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_loadout_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_loadout_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_loadout_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_money_grant_event_definition::c_simulation_player_money_grant_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_money_grant_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_money_grant_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_money_grant_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_money_grant_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_account_balance_notification_event_definition::c_simulation_player_account_balance_notification_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_account_balance_notification_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_account_balance_notification_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_account_balance_notification_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_account_balance_notification_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_set_respawn_target_transform_event_definition::c_simulation_player_set_respawn_target_transform_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_set_respawn_target_transform_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_set_respawn_target_transform_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_set_respawn_target_transform_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_set_respawn_target_transform_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_set_orbiting_camera_target_event_definition::c_simulation_player_set_orbiting_camera_target_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_set_orbiting_camera_target_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_set_orbiting_camera_target_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_set_orbiting_camera_target_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_set_orbiting_camera_target_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_call_for_help_request_event_definition::c_simulation_player_call_for_help_request_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_call_for_help_request_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_call_for_help_request_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_call_for_help_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_call_for_help_request_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_player_force_base_respawn_event_definition::c_simulation_player_force_base_respawn_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_player_force_base_respawn_event_definition::event_type(void);
// public: virtual char const * c_simulation_player_force_base_respawn_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_force_base_respawn_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_player_force_base_respawn_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_authority_ignored_predicted_position_event_definition::c_simulation_authority_ignored_predicted_position_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_authority_ignored_predicted_position_event_definition::event_type(void);
// public: virtual char const * c_simulation_authority_ignored_predicted_position_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_authority_ignored_predicted_position_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_authority_ignored_predicted_position_event_definition::entity_reference_encoding_type(long);
// public: c_simulation_game_engine_player_entity_definition::~c_simulation_game_engine_player_entity_definition(void);
// void g_simulation_game_engine_player_entity_definition::`dynamic atexit destructor'(void);

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_game_engine_player_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_game_engine_player_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *)
//{
//    mangled_ppc("?entity_replication_required_for_view_activation@c_simulation_game_engine_player_entity_definition@@UAA_NPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::promote_game_entity_to_authority(long)
//{
//    mangled_ppc("?promote_game_entity_to_authority@c_simulation_game_engine_player_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_type_is_gameworld_object(void)
//{
//    mangled_ppc("?entity_type_is_gameworld_object@c_simulation_game_engine_player_entity_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::gameworld_attachment_valid(long)
//{
//    mangled_ppc("?gameworld_attachment_valid@c_simulation_game_engine_player_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_game_engine_player_entity_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_game_engine_player_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?write_update_description_to_string@c_simulation_game_engine_player_entity_definition@@UAAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::build_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_creation_data@c_simulation_game_engine_player_entity_definition@@UAAXJJPAX@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_game_engine_player_entity_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_game_engine_player_entity_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_game_engine_player_entity_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_game_engine_player_entity_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?create_game_entity@c_simulation_game_engine_player_entity_definition@@UAA_NJJPBXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::delete_game_entity(long)
//{
//    mangled_ppc("?delete_game_entity@c_simulation_game_engine_player_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_game_engine_player_entity_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *)
//{
//    mangled_ppc("?build_updated_state_data@c_simulation_game_engine_player_entity_definition@@UAA_NPBUs_simulation_entity@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual void c_simulation_game_engine_player_entity_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_game_engine_player_entity_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity@c_simulation_game_engine_player_entity_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?entity_update_encode@c_simulation_game_engine_player_entity_definition@@UAA_NPAUs_entity_update_encode_data@@@Z");
//};

//public: class c_player_trait_shield_vitality const * c_player_traits::get_shield_vitality_traits(void) const
//{
//    mangled_ppc("?get_shield_vitality_traits@c_player_traits@@QBAPBVc_player_trait_shield_vitality@@XZ");
//};

//public: class c_player_trait_weapons const * c_player_traits::get_weapons_traits(void) const
//{
//    mangled_ppc("?get_weapons_traits@c_player_traits@@QBAPBVc_player_trait_weapons@@XZ");
//};

//public: class c_player_trait_movement const * c_player_traits::get_movement_traits(void) const
//{
//    mangled_ppc("?get_movement_traits@c_player_traits@@QBAPBVc_player_trait_movement@@XZ");
//};

//public: class c_player_trait_appearance const * c_player_traits::get_appearance_traits(void) const
//{
//    mangled_ppc("?get_appearance_traits@c_player_traits@@QBAPBVc_player_trait_appearance@@XZ");
//};

//public: class c_player_trait_sensors const * c_player_traits::get_sensor_traits(void) const
//{
//    mangled_ppc("?get_sensor_traits@c_player_traits@@QBAPBVc_player_trait_sensors@@XZ");
//};

//public: c_entity_update_encode_helper::c_entity_update_encode_helper(void)
//{
//    mangled_ppc("??0c_entity_update_encode_helper@@QAA@XZ");
//};

//public: c_entity_update_encode_helper::~c_entity_update_encode_helper(void)
//{
//    mangled_ppc("??1c_entity_update_encode_helper@@QAA@XZ");
//};

//public: bool c_entity_update_encode_helper::start_encoding_update(class c_bitstream *, long, long, long, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long const *, long)
//{
//    mangled_ppc("?start_encoding_update@c_entity_update_encode_helper@@QAA_NPAVc_bitstream@@JJJJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBJJ@Z");
//};

//public: bool c_entity_update_encode_helper::start_component(long, char const *)
//{
//    mangled_ppc("?start_component@c_entity_update_encode_helper@@QAA_NJPBD@Z");
//};

//public: void c_entity_update_encode_helper::finish_component(void)
//{
//    mangled_ppc("?finish_component@c_entity_update_encode_helper@@QAAXXZ");
//};

//private: void c_entity_update_encode_helper::skip_component_silently(long)
//{
//    mangled_ppc("?skip_component_silently@c_entity_update_encode_helper@@AAAXJ@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?entity_update_decode@c_simulation_game_engine_player_entity_definition@@UAA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: class c_player_trait_shield_vitality * c_player_traits::get_shield_vitality_traits_writeable(void)
//{
//    mangled_ppc("?get_shield_vitality_traits_writeable@c_player_traits@@QAAPAVc_player_trait_shield_vitality@@XZ");
//};

//public: class c_player_trait_weapons * c_player_traits::get_weapons_traits_writeable(void)
//{
//    mangled_ppc("?get_weapons_traits_writeable@c_player_traits@@QAAPAVc_player_trait_weapons@@XZ");
//};

//public: class c_player_trait_movement * c_player_traits::get_movement_traits_writeable(void)
//{
//    mangled_ppc("?get_movement_traits_writeable@c_player_traits@@QAAPAVc_player_trait_movement@@XZ");
//};

//public: class c_player_trait_appearance * c_player_traits::get_appearance_traits_writeable(void)
//{
//    mangled_ppc("?get_appearance_traits_writeable@c_player_traits@@QAAPAVc_player_trait_appearance@@XZ");
//};

//public: class c_player_trait_sensors * c_player_traits::get_sensor_traits_writeable(void)
//{
//    mangled_ppc("?get_sensor_traits_writeable@c_player_traits@@QAAPAVc_player_trait_sensors@@XZ");
//};

//public: c_entity_update_decode_helper::c_entity_update_decode_helper(void)
//{
//    mangled_ppc("??0c_entity_update_decode_helper@@QAA@XZ");
//};

//public: c_entity_update_decode_helper::~c_entity_update_decode_helper(void)
//{
//    mangled_ppc("??1c_entity_update_decode_helper@@QAA@XZ");
//};

//public: bool c_entity_update_decode_helper::read_component(long, char const *)
//{
//    mangled_ppc("?read_component@c_entity_update_decode_helper@@QAA_NJPBD@Z");
//};

//private: void c_entity_update_decode_helper::read_handle_block_delimiters(long)
//{
//    mangled_ppc("?read_handle_block_delimiters@c_entity_update_decode_helper@@AAAXJ@Z");
//};

//private: void c_entity_update_decode_helper::read_validate_and_setup(long)
//{
//    mangled_ppc("?read_validate_and_setup@c_entity_update_decode_helper@@AAAXJ@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_state_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_state_lossy_compare@c_simulation_game_engine_player_entity_definition@@UAA_NPAX0J@Z");
//};

//public: virtual bool c_simulation_game_engine_player_entity_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_game_engine_player_entity_definition@@UAA_NPAX0J@Z");
//};

//public: static long c_simulation_game_engine_player_entity_definition::game_engine_get_absolute_player_index_from_simulation_object_glue_index(long)
//{
//    mangled_ppc("?game_engine_get_absolute_player_index_from_simulation_object_glue_index@c_simulation_game_engine_player_entity_definition@@SAJJ@Z");
//};

//public: virtual long c_simulation_player_editor_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_editor_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_editor_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_editor_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_editor_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_editor_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_editor_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_editor_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_editor_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_editor_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_player_editor_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_editor_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_editor_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_editor_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_editor_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_editor_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_editor_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_editor_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_editor_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_editor_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: long c_sandbox_action::get_weak_absolute_player_index(void) const
//{
//    mangled_ppc("?get_weak_absolute_player_index@c_sandbox_action@@QBAJXZ");
//};

//public: virtual long c_simulation_player_purchase_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_purchase_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_purchase_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_purchase_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_purchase_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_purchase_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_purchase_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_purchase_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_purchase_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_purchase_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_player_purchase_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_purchase_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_purchase_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_purchase_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_purchase_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_purchase_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_purchase_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_purchase_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_purchase_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_purchase_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_loadout_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_loadout_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_loadout_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_loadout_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_loadout_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_loadout_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_loadout_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_loadout_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_loadout_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_loadout_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_player_loadout_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_loadout_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_loadout_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_loadout_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_loadout_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_loadout_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_loadout_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_loadout_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_loadout_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_loadout_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_money_grant_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_money_grant_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_money_grant_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_money_grant_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_money_grant_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_money_grant_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_money_grant_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_money_grant_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_money_grant_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_money_grant_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_player_money_grant_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_money_grant_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_money_grant_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_money_grant_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_money_grant_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_money_grant_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_money_grant_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_money_grant_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_money_grant_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_money_grant_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_account_balance_notification_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_account_balance_notification_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_account_balance_notification_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_account_balance_notification_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_account_balance_notification_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_account_balance_notification_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_account_balance_notification_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_account_balance_notification_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_account_balance_notification_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_account_balance_notification_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_player_account_balance_notification_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_player_account_balance_notification_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_player_account_balance_notification_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_account_balance_notification_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_account_balance_notification_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_account_balance_notification_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_account_balance_notification_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_account_balance_notification_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_account_balance_notification_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_account_balance_notification_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_account_balance_notification_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_account_balance_notification_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_set_respawn_target_transform_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_set_respawn_target_transform_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_set_respawn_target_transform_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_set_respawn_target_transform_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_set_respawn_target_transform_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_player_set_respawn_target_transform_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_player_set_respawn_target_transform_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_set_respawn_target_transform_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_set_respawn_target_transform_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_set_respawn_target_transform_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_set_respawn_target_transform_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_set_respawn_target_transform_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_set_respawn_target_transform_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_set_respawn_target_transform_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_set_respawn_target_transform_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_player_set_orbiting_camera_target_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_set_orbiting_camera_target_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_set_orbiting_camera_target_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_set_orbiting_camera_target_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_call_for_help_request_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_call_for_help_request_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_call_for_help_request_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_call_for_help_request_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_call_for_help_request_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_call_for_help_request_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_call_for_help_request_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_call_for_help_request_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_call_for_help_request_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_call_for_help_request_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_player_call_for_help_request_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_player_call_for_help_request_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_player_call_for_help_request_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_call_for_help_request_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_call_for_help_request_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_call_for_help_request_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_call_for_help_request_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_call_for_help_request_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_call_for_help_request_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_call_for_help_request_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_call_for_help_request_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_call_for_help_request_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_force_base_respawn_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_player_force_base_respawn_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_player_force_base_respawn_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_player_force_base_respawn_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_player_force_base_respawn_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_player_force_base_respawn_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_player_force_base_respawn_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_player_force_base_respawn_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_player_force_base_respawn_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_player_force_base_respawn_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual float c_simulation_player_force_base_respawn_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_player_force_base_respawn_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual void c_simulation_player_force_base_respawn_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_player_force_base_respawn_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_player_force_base_respawn_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_player_force_base_respawn_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_player_force_base_respawn_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_player_force_base_respawn_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_player_force_base_respawn_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_player_force_base_respawn_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_player_force_base_respawn_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_player_force_base_respawn_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_authority_ignored_predicted_position_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_authority_ignored_predicted_position_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_authority_ignored_predicted_position_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_authority_ignored_predicted_position_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_authority_ignored_predicted_position_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_authority_ignored_predicted_position_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_authority_ignored_predicted_position_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_authority_ignored_predicted_position_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_authority_ignored_predicted_position_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_authority_ignored_predicted_position_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_authority_ignored_predicted_position_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_authority_ignored_predicted_position_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_authority_ignored_predicted_position_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<5, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$04J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_index<5>(char const *)
//{
//    mangled_ppc("??$read_index@$04@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_index<256, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0BAA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_index<3, enum e_weapon_purchase_slot>(char const *, enum e_weapon_purchase_slot)
//{
//    mangled_ppc("??$write_index@$02W4e_weapon_purchase_slot@@@c_bitstream@@QAAXPBDW4e_weapon_purchase_slot@@@Z");
//};

//public: long c_bitstream::read_index<256>(char const *)
//{
//    mangled_ppc("??$read_index@$0BAA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_index<16, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0BA@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: enum e_loadout_palette_type c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::operator enum e_loadout_palette_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@QBA?AW4e_loadout_palette_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: enum e_player_respawn_failure c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::operator enum e_player_respawn_failure(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@QBA?AW4e_player_respawn_failure@@XZ");
//};

//public: bool c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> >(class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_index<5>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$04@@YAJXZ");
//};

//public: static enum e_player_respawn_failure c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@SA?AW4e_player_respawn_failure@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_loadout_palette_type c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@SA?AW4e_loadout_palette_type@@H@Z");
//};

//public: static char c_enum_no_init<enum e_loadout_palette_type, char, -1, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_loadout_palette_type@@D$0?0$05Us_default_enum_string_resolver@@@@SADK@Z");
//};

//long required_encoding_bits_for_index<256>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0BAA@@@YAJXZ");
//};

//bool operator==<enum e_weapon_purchase_slot>(enum e_weapon_purchase_slot const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_weapon_purchase_slot@@@@YA_NABW4e_weapon_purchase_slot@@ABW4e_none_sentinel@@@Z");
//};

//public: c_simulation_game_engine_player_entity_definition::c_simulation_game_engine_player_entity_definition(void)
//{
//    mangled_ppc("??0c_simulation_game_engine_player_entity_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_entity_type c_simulation_game_engine_player_entity_definition::entity_type(void)
//{
//    mangled_ppc("?entity_type@c_simulation_game_engine_player_entity_definition@@UAA?AW4e_simulation_entity_type@@XZ");
//};

//public: virtual char const * c_simulation_game_engine_player_entity_definition::entity_type_name(void)
//{
//    mangled_ppc("?entity_type_name@c_simulation_game_engine_player_entity_definition@@UAAPBDXZ");
//};

//public: virtual long c_simulation_game_engine_player_entity_definition::state_data_size(void)
//{
//    mangled_ppc("?state_data_size@c_simulation_game_engine_player_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_game_engine_player_entity_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_game_engine_player_entity_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_game_engine_player_entity_definition::update_flag_count(void)
//{
//    mangled_ppc("?update_flag_count@c_simulation_game_engine_player_entity_definition@@UAAJXZ");
//};

//public: c_simulation_player_editor_request_event_definition::c_simulation_player_editor_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_editor_request_event_definition@@QAA@XZ");
//};

//public: virtual float c_simulation_event_definition::calculate_relevance(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float)
//{
//    mangled_ppc("?calculate_relevance@c_simulation_event_definition@@UAAMPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@M@Z");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_editor_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_editor_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_editor_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_editor_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_editor_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_editor_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_editor_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_editor_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_event_definition::c_simulation_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_event_definition@@QAA@XZ");
//};

//public: virtual void c_simulation_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_event_definition@@UAAXJPAX@Z");
//};

//public: virtual long c_simulation_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: c_simulation_player_purchase_request_event_definition::c_simulation_player_purchase_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_purchase_request_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_purchase_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_purchase_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_purchase_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_purchase_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_purchase_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_purchase_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_purchase_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_purchase_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_loadout_request_event_definition::c_simulation_player_loadout_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_loadout_request_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_loadout_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_loadout_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_loadout_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_loadout_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_loadout_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_loadout_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_loadout_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_loadout_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_money_grant_event_definition::c_simulation_player_money_grant_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_money_grant_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_money_grant_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_money_grant_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_money_grant_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_money_grant_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_money_grant_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_money_grant_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_money_grant_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_money_grant_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_account_balance_notification_event_definition::c_simulation_player_account_balance_notification_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_account_balance_notification_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_account_balance_notification_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_account_balance_notification_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_account_balance_notification_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_account_balance_notification_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_account_balance_notification_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_account_balance_notification_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_account_balance_notification_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_account_balance_notification_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_set_respawn_target_transform_event_definition::c_simulation_player_set_respawn_target_transform_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_set_respawn_target_transform_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_set_respawn_target_transform_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_set_respawn_target_transform_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_set_respawn_target_transform_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_set_respawn_target_transform_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_set_respawn_target_transform_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_set_respawn_target_transform_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_set_respawn_target_transform_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_set_respawn_target_transform_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_set_orbiting_camera_target_event_definition::c_simulation_player_set_orbiting_camera_target_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_set_orbiting_camera_target_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_set_orbiting_camera_target_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_set_orbiting_camera_target_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_set_orbiting_camera_target_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_set_orbiting_camera_target_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_set_orbiting_camera_target_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_set_orbiting_camera_target_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_call_for_help_request_event_definition::c_simulation_player_call_for_help_request_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_call_for_help_request_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_call_for_help_request_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_call_for_help_request_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_call_for_help_request_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_call_for_help_request_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_call_for_help_request_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_call_for_help_request_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_call_for_help_request_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_call_for_help_request_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_player_force_base_respawn_event_definition::c_simulation_player_force_base_respawn_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_player_force_base_respawn_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_player_force_base_respawn_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_player_force_base_respawn_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_player_force_base_respawn_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_player_force_base_respawn_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_player_force_base_respawn_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_player_force_base_respawn_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_player_force_base_respawn_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_player_force_base_respawn_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_authority_ignored_predicted_position_event_definition::c_simulation_authority_ignored_predicted_position_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_authority_ignored_predicted_position_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_authority_ignored_predicted_position_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_authority_ignored_predicted_position_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_authority_ignored_predicted_position_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_authority_ignored_predicted_position_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_authority_ignored_predicted_position_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_authority_ignored_predicted_position_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_authority_ignored_predicted_position_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_authority_ignored_predicted_position_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

//public: c_simulation_game_engine_player_entity_definition::~c_simulation_game_engine_player_entity_definition(void)
//{
//    mangled_ppc("??1c_simulation_game_engine_player_entity_definition@@QAA@XZ");
//};

//void g_simulation_game_engine_player_entity_definition::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_game_engine_player_entity_definition@@YAXXZ");
//};

