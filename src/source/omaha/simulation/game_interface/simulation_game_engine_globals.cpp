/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_simulation_game_engine_request_boot_player_event_definition g_simulation_game_engine_request_boot_player_event_definition; // "?g_simulation_game_engine_request_boot_player_event_definition@@3Vc_simulation_game_engine_request_boot_player_event_definition@@A"

// public: virtual bool c_simulation_game_engine_globals_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *);
// public: virtual bool c_simulation_game_engine_globals_definition::entity_type_is_gameworld_object(void);
// public: virtual bool c_simulation_game_engine_globals_definition::gameworld_attachment_valid(long);
// public: virtual bool c_simulation_game_engine_globals_definition::build_baseline_state_data(long, void const *, long, void *);
// public: virtual bool c_simulation_game_engine_globals_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *);
// public: virtual void c_simulation_game_engine_globals_definition::rotate_entity_indices(struct s_simulation_entity const *);
// public: virtual bool c_simulation_game_engine_globals_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_game_engine_globals_definition::promote_game_entity_to_authority(long);
// public: virtual long c_simulation_game_engine_globals_definition::creation_data_size(void);
// public: virtual void c_simulation_game_engine_globals_definition::build_creation_data(long, long, void *);
// public: virtual bool c_simulation_game_engine_globals_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_game_engine_globals_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *);
// public: virtual void c_simulation_game_engine_globals_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool);
// public: virtual bool c_simulation_game_engine_globals_definition::entity_creation_decode(long, void *, class c_bitstream *, bool);
// public: virtual bool c_simulation_game_engine_globals_definition::entity_creation_lossy_compare(void *, void *, long);
// public: virtual void c_simulation_game_engine_globals_definition::prepare_creation_data_for_gameworld(long, void *);
// public: virtual void c_simulation_game_engine_globals_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *);
// public: virtual bool c_simulation_game_engine_globals_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *);
// public: virtual bool c_simulation_game_engine_globals_definition::delete_game_entity(long);
// public: static void c_simulation_game_engine_globals_definition::global_update_write_description_to_string(struct s_entity_evaluate_update_inputs const *, long, char *);
// public: static bool c_simulation_game_engine_globals_definition::global_update_encode(struct s_entity_update_encode_data *);
// enum e_multiplayer_team & operator++(enum e_multiplayer_team &);
// public: static bool c_simulation_game_engine_globals_definition::global_update_decode(struct s_entity_update_decode_data *);
// public: static bool c_simulation_game_engine_globals_definition::global_state_compare(struct s_game_engine_state_data *, struct s_game_engine_state_data *);
// public: virtual long c_simulation_game_engine_request_boot_player_event_definition::payload_size(void);
// public: virtual long c_simulation_game_engine_request_boot_player_event_definition::number_of_entity_references(void);
// public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::reference_delays_entity_deletion(void);
// public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual void c_simulation_game_engine_request_boot_player_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *);
// public: virtual void c_simulation_game_engine_request_boot_player_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *);
// public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool);
// public: virtual void c_simulation_game_engine_request_boot_player_event_definition::prepare_event_data_for_gameworld(long, void *);
// public: virtual void c_simulation_game_engine_request_boot_player_event_definition::apply_game_event(long, long const *, long, void const *);
// public: virtual long c_simulation_game_engine_request_boot_player_event_definition::get_player_index(long, long const *, long, void const *);
// public: bool c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::operator==(enum e_multiplayer_team_designator) const;
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_multiplayer_team) const;
// public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>);
// public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: void c_bitstream::write_index<1024, short>(char const *, short);
// public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_index<1024>(char const *);
// public: static bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_team);
// public: unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_team);
// public: unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: static bool s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team);
// long required_encoding_bits_for_index<1024>(void);
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_multiplayer_team);
// private: static unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_multiplayer_team_designator);
// public: c_simulation_game_engine_request_boot_player_event_definition::c_simulation_game_engine_request_boot_player_event_definition(void);
// public: virtual enum e_simulation_event_type c_simulation_game_engine_request_boot_player_event_definition::event_type(void);
// public: virtual char const * c_simulation_game_engine_request_boot_player_event_definition::event_type_name(void);
// public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_game_engine_request_boot_player_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *);
// public: virtual enum e_replication_entity_encoding_type c_simulation_game_engine_request_boot_player_event_definition::entity_reference_encoding_type(long);

//public: virtual bool c_simulation_game_engine_globals_definition::entity_replication_required_for_view_activation(struct s_simulation_entity const *)
//{
//    mangled_ppc("?entity_replication_required_for_view_activation@c_simulation_game_engine_globals_definition@@UAA_NPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::entity_type_is_gameworld_object(void)
//{
//    mangled_ppc("?entity_type_is_gameworld_object@c_simulation_game_engine_globals_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::gameworld_attachment_valid(long)
//{
//    mangled_ppc("?gameworld_attachment_valid@c_simulation_game_engine_globals_definition@@UAA_NJ@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::build_baseline_state_data(long, void const *, long, void *)
//{
//    mangled_ppc("?build_baseline_state_data@c_simulation_game_engine_globals_definition@@UAA_NJPBXJPAX@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::build_updated_state_data(struct s_simulation_entity const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, void *)
//{
//    mangled_ppc("?build_updated_state_data@c_simulation_game_engine_globals_definition@@UAA_NPBUs_simulation_entity@@PAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual void c_simulation_game_engine_globals_definition::rotate_entity_indices(struct s_simulation_entity const *)
//{
//    mangled_ppc("?rotate_entity_indices@c_simulation_game_engine_globals_definition@@UAAXPBUs_simulation_entity@@@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::update_game_entity(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?update_game_entity@c_simulation_game_engine_globals_definition@@UAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPBX@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::promote_game_entity_to_authority(long)
//{
//    mangled_ppc("?promote_game_entity_to_authority@c_simulation_game_engine_globals_definition@@UAA_NJ@Z");
//};

//public: virtual long c_simulation_game_engine_globals_definition::creation_data_size(void)
//{
//    mangled_ppc("?creation_data_size@c_simulation_game_engine_globals_definition@@UAAJXZ");
//};

//public: virtual void c_simulation_game_engine_globals_definition::build_creation_data(long, long, void *)
//{
//    mangled_ppc("?build_creation_data@c_simulation_game_engine_globals_definition@@UAAXJJPAX@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::entity_can_be_created(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?entity_can_be_created@c_simulation_game_engine_globals_definition@@UAA_NPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_game_engine_globals_definition::write_creation_description_to_string(struct s_simulation_entity const *, struct s_simulation_view_telemetry_data const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_simulation_game_engine_globals_definition@@UAAXPBUs_simulation_entity@@PBUs_simulation_view_telemetry_data@@JPAD@Z");
//};

//public: virtual void c_simulation_game_engine_globals_definition::entity_creation_encode(long, void const *, struct s_simulation_view_telemetry_data const *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_encode@c_simulation_game_engine_globals_definition@@UAAXJPBXPBUs_simulation_view_telemetry_data@@PAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::entity_creation_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?entity_creation_decode@c_simulation_game_engine_globals_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::entity_creation_lossy_compare(void *, void *, long)
//{
//    mangled_ppc("?entity_creation_lossy_compare@c_simulation_game_engine_globals_definition@@UAA_NPAX0J@Z");
//};

//public: virtual void c_simulation_game_engine_globals_definition::prepare_creation_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_creation_data_for_gameworld@c_simulation_game_engine_globals_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_game_engine_globals_definition::prepare_state_data_for_gameworld(class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void *)
//{
//    mangled_ppc("?prepare_state_data_for_gameworld@c_simulation_game_engine_globals_definition@@UAAXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAX@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::create_game_entity(long, long, void const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, void const *)
//{
//    mangled_ppc("?create_game_entity@c_simulation_game_engine_globals_definition@@UAA_NJJPBXV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0@Z");
//};

//public: virtual bool c_simulation_game_engine_globals_definition::delete_game_entity(long)
//{
//    mangled_ppc("?delete_game_entity@c_simulation_game_engine_globals_definition@@UAA_NJ@Z");
//};

//public: static void c_simulation_game_engine_globals_definition::global_update_write_description_to_string(struct s_entity_evaluate_update_inputs const *, long, char *)
//{
//    mangled_ppc("?global_update_write_description_to_string@c_simulation_game_engine_globals_definition@@SAXPBUs_entity_evaluate_update_inputs@@JPAD@Z");
//};

//public: static bool c_simulation_game_engine_globals_definition::global_update_encode(struct s_entity_update_encode_data *)
//{
//    mangled_ppc("?global_update_encode@c_simulation_game_engine_globals_definition@@SA_NPAUs_entity_update_encode_data@@@Z");
//};

//enum e_multiplayer_team & operator++(enum e_multiplayer_team &)
//{
//    mangled_ppc("??E@YAAAW4e_multiplayer_team@@AAW40@@Z");
//};

//public: static bool c_simulation_game_engine_globals_definition::global_update_decode(struct s_entity_update_decode_data *)
//{
//    mangled_ppc("?global_update_decode@c_simulation_game_engine_globals_definition@@SA_NPAUs_entity_update_decode_data@@@Z");
//};

//public: static bool c_simulation_game_engine_globals_definition::global_state_compare(struct s_game_engine_state_data *, struct s_game_engine_state_data *)
//{
//    mangled_ppc("?global_state_compare@c_simulation_game_engine_globals_definition@@SA_NPAUs_game_engine_state_data@@0@Z");
//};

//public: virtual long c_simulation_game_engine_request_boot_player_event_definition::payload_size(void)
//{
//    mangled_ppc("?payload_size@c_simulation_game_engine_request_boot_player_event_definition@@UAAJXZ");
//};

//public: virtual long c_simulation_game_engine_request_boot_player_event_definition::number_of_entity_references(void)
//{
//    mangled_ppc("?number_of_entity_references@c_simulation_game_engine_request_boot_player_event_definition@@UAAJXZ");
//};

//public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::reference_delays_entity_deletion(void)
//{
//    mangled_ppc("?reference_delays_entity_deletion@c_simulation_game_engine_request_boot_player_event_definition@@UAA_NXZ");
//};

//public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::event_can_be_transmitted(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?event_can_be_transmitted@c_simulation_game_engine_request_boot_player_event_definition@@UAA_NPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual void c_simulation_game_engine_request_boot_player_event_definition::write_description_to_string(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *, float, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_game_engine_request_boot_player_event_definition@@UAAXPBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@MJPAD@Z");
//};

//public: virtual void c_simulation_game_engine_request_boot_player_event_definition::event_payload_encode(long, void const *, class c_bitstream *, bool, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?event_payload_encode@c_simulation_game_engine_request_boot_player_event_definition@@UAAXJPBXPAVc_bitstream@@_NPBUs_event_payload_encode_parameters@@@Z");
//};

//public: virtual bool c_simulation_game_engine_request_boot_player_event_definition::event_payload_decode(long, void *, class c_bitstream *, bool)
//{
//    mangled_ppc("?event_payload_decode@c_simulation_game_engine_request_boot_player_event_definition@@UAA_NJPAXPAVc_bitstream@@_N@Z");
//};

//public: virtual void c_simulation_game_engine_request_boot_player_event_definition::prepare_event_data_for_gameworld(long, void *)
//{
//    mangled_ppc("?prepare_event_data_for_gameworld@c_simulation_game_engine_request_boot_player_event_definition@@UAAXJPAX@Z");
//};

//public: virtual void c_simulation_game_engine_request_boot_player_event_definition::apply_game_event(long, long const *, long, void const *)
//{
//    mangled_ppc("?apply_game_event@c_simulation_game_engine_request_boot_player_event_definition@@UAAXJPBJJPBX@Z");
//};

//public: virtual long c_simulation_game_engine_request_boot_player_event_definition::get_player_index(long, long const *, long, void const *)
//{
//    mangled_ppc("?get_player_index@c_simulation_game_engine_request_boot_player_event_definition@@UAAJJPBJJPBX@Z");
//};

//public: bool c_enum_no_init<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>::operator==(enum e_multiplayer_team_designator) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@QBA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_multiplayer_team) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_team@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver> & s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@QAAAAV?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@W4e_multiplayer_team@@@Z");
//};

//public: void c_bitstream::write_index<1024, short>(char const *, short)
//{
//    mangled_ppc("??$write_index@$0EAA@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_index<1024>(char const *)
//{
//    mangled_ppc("??$read_index@$0EAA@@c_bitstream@@QAAJPBD@Z");
//};

//public: static bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_team)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_team)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@CAGW4e_multiplayer_team@@@Z");
//};

//public: unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: static bool s_static_array<class c_enum<enum e_multiplayer_team_designator, char, -1, 9, struct s_multiplayer_team_designator_string_resolver>, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team@@@?$s_static_array@V?$c_enum@W4e_multiplayer_team_designator@@D$0?0$08Us_multiplayer_team_designator_string_resolver@@@@$07@@SA_NW4e_multiplayer_team@@@Z");
//};

//long required_encoding_bits_for_index<1024>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0EAA@@@YAJXZ");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_team, unsigned short, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_multiplayer_team)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_multiplayer_team@@G$07Us_default_enum_string_resolver@@@@CAGW4e_multiplayer_team@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_multiplayer_team_designator, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_multiplayer_team_designator@@G$08Us_default_enum_string_resolver@@@@CAGW4e_multiplayer_team_designator@@@Z");
//};

//public: c_simulation_game_engine_request_boot_player_event_definition::c_simulation_game_engine_request_boot_player_event_definition(void)
//{
//    mangled_ppc("??0c_simulation_game_engine_request_boot_player_event_definition@@QAA@XZ");
//};

//public: virtual enum e_simulation_event_type c_simulation_game_engine_request_boot_player_event_definition::event_type(void)
//{
//    mangled_ppc("?event_type@c_simulation_game_engine_request_boot_player_event_definition@@UAA?AW4e_simulation_event_type@@XZ");
//};

//public: virtual char const * c_simulation_game_engine_request_boot_player_event_definition::event_type_name(void)
//{
//    mangled_ppc("?event_type_name@c_simulation_game_engine_request_boot_player_event_definition@@UAAPBDXZ");
//};

//public: virtual struct c_simulation_event_definition::simulation_event_definition_return_value c_simulation_game_engine_request_boot_player_event_definition::gather_requirements_data(class c_replication_outgoing_event const *, struct s_simulation_view_telemetry_data const *)
//{
//    mangled_ppc("?gather_requirements_data@c_simulation_game_engine_request_boot_player_event_definition@@UAA?AUsimulation_event_definition_return_value@c_simulation_event_definition@@PBVc_replication_outgoing_event@@PBUs_simulation_view_telemetry_data@@@Z");
//};

//public: virtual enum e_replication_entity_encoding_type c_simulation_game_engine_request_boot_player_event_definition::entity_reference_encoding_type(long)
//{
//    mangled_ppc("?entity_reference_encoding_type@c_simulation_game_engine_request_boot_player_event_definition@@UAA?AW4e_replication_entity_encoding_type@@J@Z");
//};

