/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_object_refresh_event_definition g_simulation_object_refresh_event_definition; // "?g_simulation_object_refresh_event_definition@@3Vc_simulation_object_refresh_event_definition@@A"

// long simulation_object_get_replicated_object_from_entity(long);
// long simulation_object_get_entity(long);
// long simulation_object_get_authoritative_entity(long);
// long simulation_object_get_predictive_entity(long);
// long simulation_object_get_authoritative_entity_safe(long);
// long simulation_object_get_predictive_entity_safe(long);
// long simulation_object_get_entity_internal(long, enum e_entity_restriction, bool);
// public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_object_entity_definition::initial_update_mask(void);
// public: virtual bool c_simulation_object_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *);
// public: static bool c_simulation_object_entity_definition::object_required_to_join_game_children(long);
// public: virtual void c_simulation_object_entity_definition::build_creation_data(long, long, void *);
// public: virtual bool c_simulation_object_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *);
// public: virtual bool c_simulation_object_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_object_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_object_entity_definition::update_game_entity_with_out_of_order_data(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_object_entity_definition::delete_game_entity(long);
// protected: void c_simulation_object_entity_definition::object_rotate_entity_index(struct s_simulation_entity const *, struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data *);
// protected: void c_simulation_object_entity_definition::object_filter_update_flags(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, bool);
// public: virtual bool c_simulation_object_entity_definition::promote_game_entity_to_authority(long);
// public: virtual bool c_simulation_object_entity_definition::entity_type_is_gameworld_object(void);
// public: virtual bool c_simulation_object_entity_definition::gameworld_attachment_valid(long);
// public: virtual void c_simulation_object_entity_definition::filter_update_flags(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, bool);
// protected: static void c_simulation_object_entity_definition::object_build_creation_data(long, struct s_simulation_object_creation_data *);
// protected: static bool c_simulation_object_entity_definition::object_build_baseline_state_data(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data *);
// long test_and_clamp_maximum_vitality_internal(long, long, char const *);
// protected: static bool c_simulation_object_entity_definition::object_setup_placement_data(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_object_placement_data *);
// protected: long c_simulation_object_entity_definition::object_create_object(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_object_placement_data *);
// protected: static class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_object_entity_definition::object_handle_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data *);
// protected: static void c_simulation_object_entity_definition::object_apply_dead_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *);
// protected: static bool c_simulation_object_entity_definition::handle_object_multiplayer_properties_update(long, struct s_multiplayer_object_boundary *, class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> *, class c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver> *);
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> s_multiplayer_object_properties::get_team_designator(void) const;
// protected: void c_simulation_object_entity_definition::object_apply_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *);
// protected: static void c_simulation_object_entity_definition::object_apply_transform_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *, bool);
// protected: static void c_simulation_object_entity_definition::object_creation_encode(struct s_simulation_object_creation_data const *, class c_bitstream *, bool);
// protected: static bool c_simulation_object_entity_definition::object_creation_decode(struct s_simulation_object_creation_data *, class c_bitstream *, bool);
// protected: static bool c_simulation_object_entity_definition::object_creation_compare(struct s_simulation_object_creation_data *, struct s_simulation_object_creation_data *);
// protected: static bool c_simulation_object_entity_definition::object_can_be_created(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, struct s_simulation_view_telemetry_data const *);
// protected: void c_simulation_object_entity_definition::object_prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data *);
// public: static void c_simulation_object_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *);
// protected: static void c_simulation_object_entity_definition::object_write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *);
// protected: static bool c_simulation_object_entity_definition::object_update_encode(struct s_entity_update_encode_data *);
// protected: static bool c_simulation_object_entity_definition::object_update_decode(struct s_entity_update_decode_data *, bool);
// protected: static bool c_simulation_object_entity_definition::object_state_compare(struct s_simulation_object_state_data *, struct s_simulation_object_state_data *);
// private: static long c_simulation_object_entity_definition::object_create_object_by_scenario_datum_index(struct s_simulation_object_creation_data const *);
// private: void c_simulation_object_entity_definition::object_attach_to_initial_parent(long, struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *);
// public: virtual long c_simulation_object_refresh_event_definition::payload_size(void);
// public: virtual long c_simulation_object_refresh_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_object_refresh_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_object_refresh_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_object_refresh_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_object_refresh_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_object_refresh_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_object_refresh_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_object_refresh_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_object_refresh_event_definition::get_player_index(long, long const *, long, void const *);
// void encode_unit_weapon_set(struct s_unit_weapon_set const *, class c_bitstream *);
// bool decode_unit_weapon_set(struct s_unit_weapon_set *, class c_bitstream *);
// public: c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>(enum e_multiplayer_team_designator);
// public: static long s_static_array<struct s_damage_section_state_data, 16>::get_count(void);
// public: void c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::set(enum e_object_placement_flags, bool);
// public: void c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::set(enum e_object_data_flags, bool);
// public: class c_static_string<1024> c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::to_string(void) const;
// bool limit3d(union vector3d *, float);
// float reciprocal_square_root(float);
// public: bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_simulation_object_creation_data_flags) const;
// public: void c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_simulation_object_creation_data_flags, bool);
// public: void c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver> const &) const;
// public: struct s_damage_section_state_data & s_static_array<struct s_damage_section_state_data, 16>::operator[]<long>(long);
// public: struct s_damage_section_state_data const & s_static_array<struct s_damage_section_state_data, 16>::operator[]<long>(long) const;
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_index<112, long>(char const *, long);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_index<112>(char const *);
// void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_object_update_flag, 0, 17>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *);
// enum e_simulation_object_update_flag operator++(enum e_simulation_object_update_flag &, int);
// public: void c_bitstream::write_vector_fast<10, 19>(char const *, union vector3d const *, float, float);
// public: void c_bitstream::write_axes<8, 19>(char const *, union vector3d const *, union vector3d const *);
// public: void c_bitstream::write_vector_fast<8, 19>(char const *, union vector3d const *, float, float);
// public: void c_bitstream::write_index<255, short>(char const *, short);
// public: void c_bitstream::write_index<11, long>(char const *, long);
// public: void c_bitstream::write_unit_vector_fast<10>(char const *, union vector3d const *);
// public: void c_bitstream::read_axes<8, 19>(char const *, union vector3d *, union vector3d *);
// public: long c_bitstream::read_index<255>(char const *);
// public: long c_bitstream::read_index<11>(char const *);
// public: static bool c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_object_placement_flags);
// private: static unsigned long c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_placement_flags);
// public: static bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_object_creation_data_flags);
// public: unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_object_creation_data_flags);
// public: static bool s_static_array<struct s_damage_section_state_data, 16>::valid<long>(long);
// long required_encoding_bits_for_index<112>(void);
// public: void c_bitstream::write_logarithmic_quantized_real_fast<10>(char const *, float, float, float);
// public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 8, 0, 0>(char const *, float);
// public: void c_bitstream::write_logarithmic_quantized_real_fast<8>(char const *, float, float, float);
// long required_encoding_bits_for_index<255>(void);
// long required_encoding_bits_for_index<11>(void);
// long quantize_unit_vector3d_fast<10>(union vector3d const *);
// public: bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const;
// long quantize_real_logarithmic_fast<1024>(float, float, float);
// long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 256, 0, 0>(float);
// long quantize_real_logarithmic_fast<256>(float, float, float);
// long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 12, 1, 0>(float);
// private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// long quantize_real_fast2<1024, 0, 0>(float, float, float);
// long quantize_real_fast2<256, 0, 0>(float, float, float);
// private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_object_creation_data_flags);
// public: c_simulation_object_refresh_event_definition::c_simulation_object_refresh_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_object_refresh_event_definition::event_type(void);
// public: virtual char const * c_simulation_object_refresh_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_object_refresh_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_object_refresh_event_definition::entity_reference_encoding_type(long);

//long simulation_object_get_replicated_object_from_entity(long)
//{
//    mangled_ppc("?simulation_object_get_replicated_object_from_entity@@YAJJ@Z");
//};

//long simulation_object_get_entity(long)
//{
//    mangled_ppc("?simulation_object_get_entity@@YAJJ@Z");
//};

//long simulation_object_get_authoritative_entity(long)
//{
//    mangled_ppc("?simulation_object_get_authoritative_entity@@YAJJ@Z");
//};

//long simulation_object_get_predictive_entity(long)
//{
//    mangled_ppc("?simulation_object_get_predictive_entity@@YAJJ@Z");
//};

//long simulation_object_get_authoritative_entity_safe(long)
//{
//    mangled_ppc("?simulation_object_get_authoritative_entity_safe@@YAJJ@Z");
//};

//long simulation_object_get_predictive_entity_safe(long)
//{
//    mangled_ppc("?simulation_object_get_predictive_entity_safe@@YAJJ@Z");
//};

//long simulation_object_get_entity_internal(long, enum e_entity_restriction, bool)
//{
//    mangled_ppc("?simulation_object_get_entity_internal@@YAJJW4e_entity_restriction@@_N@Z");
//};

//public: virtual class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_object_entity_definition::initial_update_mask(void)
//{
//    mangled_ppc("?initial_update_mask@c_simulation_object_entity_definition@@UAA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: virtual bool c_simulation_object_entity_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *)
//{
//    mangled_ppc("?entity_replication_required_for_view_activation@c_simulation_object_entity_definition@@UAA_NPBUs_simulation_entity@@@Z");
//};

//public: static bool c_simulation_object_entity_definition::object_required_to_join_game_children(long)
//{
//    mangled_ppc("?object_required_to_join_game_children@c_simulation_object_entity_definition@@SA_NJ@Z");
//};

//public: virtual void c_simulation_object_entity_definition::build_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_creation_data@c_simulation_object_entity_definition@@UAAXJJPAX@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *)
//{
//    mangled_ppc("?build_updated_state_data@c_simulation_object_entity_definition@@UAA_NPBUs_simulation_entity@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?create_game_entity@c_simulation_object_entity_definition@@UAA_NJJPBXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity@c_simulation_object_entity_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::update_game_entity_with_out_of_order_data(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity_with_out_of_order_data@c_simulation_object_entity_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::delete_game_entity(long)
//{
//    mangled_ppc("?delete_game_entity@c_simulation_object_entity_definition@@UAA_NJ@Z");
//};

//protected: void c_simulation_object_entity_definition::object_rotate_entity_index(struct s_simulation_entity const *, struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data *)
//{
//    mangled_ppc("?object_rotate_entity_index@c_simulation_object_entity_definition@@IAAXPBUs_simulation_entity@@PBUs_simulation_object_creation_data@@PAUs_simulation_object_state_data@@@Z");
//};

//protected: void c_simulation_object_entity_definition::object_filter_update_flags(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, bool)
//{
//    mangled_ppc("?object_filter_update_flags@c_simulation_object_entity_definition@@IAAXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@_N@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::promote_game_entity_to_authority(long)
//{
//    mangled_ppc("?promote_game_entity_to_authority@c_simulation_object_entity_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_object_entity_definition::entity_type_is_gameworld_object(void)
//{
//    mangled_ppc("?entity_type_is_gameworld_object@c_simulation_object_entity_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_object_entity_definition::gameworld_attachment_valid(long)
//{
//    mangled_ppc("?gameworld_attachment_valid@c_simulation_object_entity_definition@@UAA_NJ@Z");
//};

//public: virtual void c_simulation_object_entity_definition::filter_update_flags(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, bool)
//{
//    mangled_ppc("?filter_update_flags@c_simulation_object_entity_definition@@UAAXPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@_N@Z");
//};

//protected: static void c_simulation_object_entity_definition::object_build_creation_data(long, struct s_simulation_object_creation_data *)
//{
//    mangled_ppc("?object_build_creation_data@c_simulation_object_entity_definition@@KAXJPAUs_simulation_object_creation_data@@@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_build_baseline_state_data(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data *)
//{
//    mangled_ppc("?object_build_baseline_state_data@c_simulation_object_entity_definition@@KA_NPBUs_simulation_object_creation_data@@PAUs_simulation_object_state_data@@@Z");
//};

//long test_and_clamp_maximum_vitality_internal(long, long, char const *)
//{
//    mangled_ppc("?test_and_clamp_maximum_vitality_internal@@YAJJJPBD@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_setup_placement_data(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_object_placement_data *)
//{
//    mangled_ppc("?object_setup_placement_data@c_simulation_object_entity_definition@@KA_NPBUs_simulation_object_creation_data@@PBUs_simulation_object_state_data@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAUs_object_placement_data@@@Z");
//};

//protected: long c_simulation_object_entity_definition::object_create_object(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_object_placement_data *)
//{
//    mangled_ppc("?object_create_object@c_simulation_object_entity_definition@@IAAJPBUs_simulation_object_creation_data@@PBUs_simulation_object_state_data@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAUs_object_placement_data@@@Z");
//};

//protected: static class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_simulation_object_entity_definition::object_handle_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data *)
//{
//    mangled_ppc("?object_handle_update@c_simulation_object_entity_definition@@KA?AV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JV2@PAUs_simulation_object_state_data@@@Z");
//};

//protected: static void c_simulation_object_entity_definition::object_apply_dead_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *)
//{
//    mangled_ppc("?object_apply_dead_update@c_simulation_object_entity_definition@@KAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBUs_simulation_object_state_data@@@Z");
//};

//protected: static bool c_simulation_object_entity_definition::handle_object_multiplayer_properties_update(long, struct s_multiplayer_object_boundary *, class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> *, class c_flags<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?handle_object_multiplayer_properties_update@c_simulation_object_entity_definition@@KA_NJPAUs_multiplayer_object_boundary@@PAV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@PAV?$c_flags@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> s_multiplayer_object_properties::get_team_designator(void) const
//{
//    mangled_ppc("?get_team_designator@s_multiplayer_object_properties@@QBA?AV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@XZ");
//};

//protected: void c_simulation_object_entity_definition::object_apply_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *)
//{
//    mangled_ppc("?object_apply_update@c_simulation_object_entity_definition@@IAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBUs_simulation_object_state_data@@@Z");
//};

//protected: static void c_simulation_object_entity_definition::object_apply_transform_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data const *, bool)
//{
//    mangled_ppc("?object_apply_transform_update@c_simulation_object_entity_definition@@KAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBUs_simulation_object_state_data@@_N@Z");
//};

//protected: static void c_simulation_object_entity_definition::object_creation_encode(struct s_simulation_object_creation_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?object_creation_encode@c_simulation_object_entity_definition@@KAXPBUs_simulation_object_creation_data@@PAVc_bitstream@@_N@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_creation_decode(struct s_simulation_object_creation_data *, class c_bitstream *, bool)
//{
//    mangled_ppc("?object_creation_decode@c_simulation_object_entity_definition@@KA_NPAUs_simulation_object_creation_data@@PAVc_bitstream@@_N@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_creation_compare(struct s_simulation_object_creation_data *, struct s_simulation_object_creation_data *)
//{
//    mangled_ppc("?object_creation_compare@c_simulation_object_entity_definition@@KA_NPAUs_simulation_object_creation_data@@0@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_can_be_created(struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?object_can_be_created@c_simulation_object_entity_definition@@KA_NPBUs_simulation_object_creation_data@@PBUs_simulation_object_state_data@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//protected: void c_simulation_object_entity_definition::object_prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, struct s_simulation_object_state_data *)
//{
//    mangled_ppc("?object_prepare_state_data_for_gameworld@c_simulation_object_entity_definition@@IAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAUs_simulation_object_state_data@@@Z");
//};

//public: static void c_simulation_object_entity_definition::evaluate_dirty_property_costs(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("?evaluate_dirty_property_costs@c_simulation_object_entity_definition@@SAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@PAUs_entity_evaluate_update_outputs@@@Z");
//};

//protected: static void c_simulation_object_entity_definition::object_write_update_description_to_string(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?object_write_update_description_to_string@c_simulation_object_entity_definition@@KAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?object_update_encode@c_simulation_object_entity_definition@@KA_NPAUs_entity_update_encode_data@@@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_update_decode(struct s_entity_update_decode_data *, bool)
//{
//    mangled_ppc("?object_update_decode@c_simulation_object_entity_definition@@KA_NPAUs_entity_update_decode_data@@_N@Z");
//};

//protected: static bool c_simulation_object_entity_definition::object_state_compare(struct s_simulation_object_state_data *, struct s_simulation_object_state_data *)
//{
//    mangled_ppc("?object_state_compare@c_simulation_object_entity_definition@@KA_NPAUs_simulation_object_state_data@@0@Z");
//};

//private: static long c_simulation_object_entity_definition::object_create_object_by_scenario_datum_index(struct s_simulation_object_creation_data const *)
//{
//    mangled_ppc("?object_create_object_by_scenario_datum_index@c_simulation_object_entity_definition@@CAJPBUs_simulation_object_creation_data@@@Z");
//};

//private: void c_simulation_object_entity_definition::object_attach_to_initial_parent(long, struct s_simulation_object_creation_data const *, struct s_simulation_object_state_data const *)
//{
//    mangled_ppc("?object_attach_to_initial_parent@c_simulation_object_entity_definition@@AAAXJPBUs_simulation_object_creation_data@@PBUs_simulation_object_state_data@@@Z");
//};

//public: virtual long c_simulation_object_refresh_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_object_refresh_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_object_refresh_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_object_refresh_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_object_refresh_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_object_refresh_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_object_refresh_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_object_refresh_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_object_refresh_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_object_refresh_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_object_refresh_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_object_refresh_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_object_refresh_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_object_refresh_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_object_refresh_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_object_refresh_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_object_refresh_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_object_refresh_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_object_refresh_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_object_refresh_event_definition@@UAAJJPBJJPBX@Z");
//};

//void encode_unit_weapon_set(struct s_unit_weapon_set const *, class c_bitstream *)
//{
//    mangled_ppc("?encode_unit_weapon_set@@YAXPBUs_unit_weapon_set@@PAVc_bitstream@@@Z");
//};

//bool decode_unit_weapon_set(struct s_unit_weapon_set *, class c_bitstream *)
//{
//    mangled_ppc("?decode_unit_weapon_set@@YA_NPAUs_unit_weapon_set@@PAVc_bitstream@@@Z");
//};

//public: c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??0?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@QAA@W4e_multiplayer_team_designator@@@Z");
//};

//public: static long s_static_array<struct s_damage_section_state_data, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_damage_section_state_data@@$0BA@@@SAJXZ");
//};

//public: void c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::set(enum e_object_placement_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@QAAXW4e_object_placement_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::set(enum e_object_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@QAAXW4e_object_data_flags@@_N@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@J_K$0EA@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//bool limit3d(union vector3d *, float)
//{
//    mangled_ppc("?limit3d@@YA_NPATvector3d@@M@Z");
//};

//float reciprocal_square_root(float)
//{
//    mangled_ppc("?reciprocal_square_root@@YAMM@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_simulation_object_creation_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_object_creation_data_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_simulation_object_creation_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_simulation_object_creation_data_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_multiplayer_object_data_flags, unsigned short, 15, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_multiplayer_object_data_flags@@G$0P@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: struct s_damage_section_state_data & s_static_array<struct s_damage_section_state_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_damage_section_state_data@@$0BA@@@QAAAAUs_damage_section_state_data@@J@Z");
//};

//public: struct s_damage_section_state_data const & s_static_array<struct s_damage_section_state_data, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_damage_section_state_data@@$0BA@@@QBAABUs_damage_section_state_data@@J@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<112, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0HA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_index<112>(char const *)
//{
//    mangled_ppc("??$read_index@$0HA@@c_bitstream@@QAAJPBD@Z");
//};

//void simulation_object_evaluate_dirty_property_costs_non_recursive<enum e_simulation_object_update_flag, 0, 17>(struct s_simulation_entity const *, struct s_entity_evaluate_update_inputs const *, long const *const, struct s_entity_evaluate_update_outputs *)
//{
//    mangled_ppc("??$simulation_object_evaluate_dirty_property_costs_non_recursive@W4e_simulation_object_update_flag@@$0A@$0BB@@@YAXPBUs_simulation_entity@@PBUs_entity_evaluate_update_inputs@@QBJPAUs_entity_evaluate_update_outputs@@@Z");
//};

//enum e_simulation_object_update_flag operator++(enum e_simulation_object_update_flag &, int)
//{
//    mangled_ppc("??E@YA?AW4e_simulation_object_update_flag@@AAW40@H@Z");
//};

//public: void c_bitstream::write_vector_fast<10, 19>(char const *, union vector3d const *, float, float)
//{
//    mangled_ppc("??$write_vector_fast@$09$0BD@@c_bitstream@@QAAXPBDPBTvector3d@@MM@Z");
//};

//public: void c_bitstream::write_axes<8, 19>(char const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("??$write_axes@$07$0BD@@c_bitstream@@QAAXPBDPBTvector3d@@1@Z");
//};

//public: void c_bitstream::write_vector_fast<8, 19>(char const *, union vector3d const *, float, float)
//{
//    mangled_ppc("??$write_vector_fast@$07$0BD@@c_bitstream@@QAAXPBDPBTvector3d@@MM@Z");
//};

//public: void c_bitstream::write_index<255, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0PP@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::write_index<11, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0L@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_unit_vector_fast<10>(char const *, union vector3d const *)
//{
//    mangled_ppc("??$write_unit_vector_fast@$09@c_bitstream@@QAAXPBDPBTvector3d@@@Z");
//};

//public: void c_bitstream::read_axes<8, 19>(char const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("??$read_axes@$07$0BD@@c_bitstream@@QAAXPBDPATvector3d@@1@Z");
//};

//public: long c_bitstream::read_index<255>(char const *)
//{
//    mangled_ppc("??$read_index@$0PP@@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_index<11>(char const *)
//{
//    mangled_ppc("??$read_index@$0L@@c_bitstream@@QAAJPBD@Z");
//};

//public: static bool c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_object_placement_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@SA_NW4e_object_placement_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_object_placement_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@CAKW4e_object_placement_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_object_creation_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_simulation_object_creation_data_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_object_creation_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_simulation_object_creation_data_flags@@@Z");
//};

//public: static bool s_static_array<struct s_damage_section_state_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_damage_section_state_data@@$0BA@@@SA_NJ@Z");
//};

//long required_encoding_bits_for_index<112>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0HA@@@YAJXZ");
//};

//public: void c_bitstream::write_logarithmic_quantized_real_fast<10>(char const *, float, float, float)
//{
//    mangled_ppc("??$write_logarithmic_quantized_real_fast@$09@c_bitstream@@QAAXPBDMMM@Z");
//};

//public: void c_bitstream::write_quantized_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 8, 0, 0>(char const *, float)
//{
//    mangled_ppc("??$write_quantized_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$07$0A@$0A@@c_bitstream@@QAAXPBDM@Z");
//};

//public: void c_bitstream::write_logarithmic_quantized_real_fast<8>(char const *, float, float, float)
//{
//    mangled_ppc("??$write_logarithmic_quantized_real_fast@$07@c_bitstream@@QAAXPBDMMM@Z");
//};

//long required_encoding_bits_for_index<255>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0PP@@@YAJXZ");
//};

//long required_encoding_bits_for_index<11>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0L@@@YAJXZ");
//};

//long quantize_unit_vector3d_fast<10>(union vector3d const *)
//{
//    mangled_ppc("??$quantize_unit_vector3d_fast@$09@@YAJPBTvector3d@@@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//long quantize_real_logarithmic_fast<1024>(float, float, float)
//{
//    mangled_ppc("??$quantize_real_logarithmic_fast@$0EAA@@@YAJMMM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-314159274, 100000000>, struct t_quantize_real_float<314159274, 100000000>, 256, 0, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?BCLJLAKK@$0FPFOBAA@@@U?$t_quantize_real_float@$0BCLJLAKK@$0FPFOBAA@@@$0BAA@$0A@$0A@@@YAJM@Z");
//};

//long quantize_real_logarithmic_fast<256>(float, float, float)
//{
//    mangled_ppc("??$quantize_real_logarithmic_fast@$0BAA@@@YAJMMM@Z");
//};

//long quantize_real_fast<struct t_quantize_real_float<-1, 1>, struct t_quantize_real_float<1, 1>, 12, 1, 0>(float)
//{
//    mangled_ppc("??$quantize_real_fast@U?$t_quantize_real_float@$0?0$00@@U?$t_quantize_real_float@$00$00@@$0M@$00$0A@@@YAJM@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//long quantize_real_fast2<1024, 0, 0>(float, float, float)
//{
//    mangled_ppc("??$quantize_real_fast2@$0EAA@$0A@$0A@@@YAJMMM@Z");
//};

//long quantize_real_fast2<256, 0, 0>(float, float, float)
//{
//    mangled_ppc("??$quantize_real_fast2@$0BAA@$0A@$0A@@@YAJMMM@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_object_creation_data_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_object_creation_data_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_object_creation_data_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_simulation_object_creation_data_flags@@@Z");
//};

//public: c_simulation_object_refresh_event_definition::c_simulation_object_refresh_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_object_refresh_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_object_refresh_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_object_refresh_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_object_refresh_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_object_refresh_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_object_refresh_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_object_refresh_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_object_refresh_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_object_refresh_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

