/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void game_start_status_encode_function(class c_bitstream *, void const *, long);
// bool game_start_status_decode_function(class c_bitstream *, void *, long);
// public: long c_network_session_parameter_countdown_timer::get_countdown_timer(void) const;
// public: enum e_network_game_countdown_delayed_reason c_network_session_parameter_countdown_timer::get_countdown_delayed_reason(void) const;
// public: struct s_player_identifier const * c_network_session_parameter_countdown_timer::get_countdown_delayed_culprit(void) const;
// public: bool c_network_session_parameter_countdown_timer::set(bool, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *);
// public: bool c_network_session_parameter_countdown_timer::request_change(bool, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *);
// private: virtual bool c_network_session_parameter_countdown_timer::handle_change_payload(void const *);
// private: virtual bool c_network_session_parameter_countdown_timer::handle_change_request_payload(void const *);
// private: bool c_network_session_parameter_countdown_timer::set_internal(bool, long, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *);
// void countdown_timer_encode_function(class c_bitstream *, void const *, long);
// bool countdown_timer_decode_function(class c_bitstream *, void *, long);
// void map_encode_function(class c_bitstream *, void const *, long);
// bool map_decode_function(class c_bitstream *, void *, long);
// public: bool c_network_session_parameter_initial_participants::get(struct game_machine_options const **, struct game_player_options const **) const;
// public: bool c_network_session_parameter_initial_participants::set(struct game_machine_options const *, struct game_player_options const *);
// void initial_participants_encode_function(class c_bitstream *, void const *, long);
// bool initial_participants_decode_function(class c_bitstream *, void *, long);
// void game_instance_encode_function(class c_bitstream *, void const *, long);
// bool game_instance_decode_function(class c_bitstream *, void *, long);
// void random_seed_encode_function(class c_bitstream *, void const *, long);
// bool random_seed_decode_function(class c_bitstream *, void *, long);
// void language_encode_function(class c_bitstream *, void const *, long);
// bool language_decode_function(class c_bitstream *, void *, long);
// void determinism_version_encode_function(class c_bitstream *, void const *, long);
// bool determinism_version_decode_function(class c_bitstream *, void *, long);
// void simulation_protocol_encode_function(class c_bitstream *, void const *, long);
// bool simulation_protocol_decode_function(class c_bitstream *, void *, long);
// void campaign_difficulty_encode_function(class c_bitstream *, void const *, long);
// bool campaign_difficulty_decode_function(class c_bitstream *, void *, long);
// void active_skulls_encode_function(class c_bitstream *, void const *, long);
// bool active_skulls_decode_function(class c_bitstream *, void *, long);
// void campaign_metagame_scoring_encode_function(class c_bitstream *, void const *, long);
// bool campaign_metagame_scoring_decode_function(class c_bitstream *, void *, long);
// void campaign_insertion_point_encode_function(class c_bitstream *, void const *, long);
// bool campaign_insertion_point_decode_function(class c_bitstream *, void *, long);
// void end_game_encode_function(class c_bitstream *, void const *, long);
// bool end_game_decode_function(class c_bitstream *, void *, long);
// void privacy_mode_encode_function(class c_bitstream *, void const *, long);
// bool privacy_mode_decode_function(class c_bitstream *, void *, long);
// void start_mode_encode_function(class c_bitstream *, void const *, long);
// bool start_mode_decode_function(class c_bitstream *, void *, long);
// void synchronous_out_of_sync_encode_function(class c_bitstream *, void const *, long);
// bool synchronous_out_of_sync_decode_function(class c_bitstream *, void *, long);
// void request_campaign_quit_encode_function(class c_bitstream *, void const *, long);
// bool request_campaign_quit_decode_function(class c_bitstream *, void *, long);
// void leader_properties_encode_function(class c_bitstream *, void const *, long);
// bool leader_properties_decode_function(class c_bitstream *, void *, long);
// void synchronous_halt_state_encode_function(class c_bitstream *, void const *, long);
// bool synchronous_halt_state_decode_function(class c_bitstream *, void *, long);
// public: c_enum<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>(enum e_input_user_index);
// public: enum e_input_user_index c_enum_no_init<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_input_user_index(void) const;
// public: bool c_enum_no_init<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_input_user_index) const;
// protected: void c_generic_network_session_parameter_data<struct s_network_session_parameter_countdown_timer>::validate_request(void);
// public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: bool c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_session_game_start_status c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_session_game_start_status(void) const;
// public: bool c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::set_raw_value(char);
// long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>);
// public: static enum e_session_game_start_status c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: unsigned long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: static enum e_network_session_privacy c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_network_session_closed_status c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::valid(void) const;

//void game_start_status_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?game_start_status_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool game_start_status_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?game_start_status_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: long c_network_session_parameter_countdown_timer::get_countdown_timer(void) const
//{
//    mangled_ppc("?get_countdown_timer@c_network_session_parameter_countdown_timer@@QBAJXZ");
//};

//public: enum e_network_game_countdown_delayed_reason c_network_session_parameter_countdown_timer::get_countdown_delayed_reason(void) const
//{
//    mangled_ppc("?get_countdown_delayed_reason@c_network_session_parameter_countdown_timer@@QBA?AW4e_network_game_countdown_delayed_reason@@XZ");
//};

//public: struct s_player_identifier const * c_network_session_parameter_countdown_timer::get_countdown_delayed_culprit(void) const
//{
//    mangled_ppc("?get_countdown_delayed_culprit@c_network_session_parameter_countdown_timer@@QBAPBUs_player_identifier@@XZ");
//};

//public: bool c_network_session_parameter_countdown_timer::set(bool, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *)
//{
//    mangled_ppc("?set@c_network_session_parameter_countdown_timer@@QAA_N_NJW4e_network_game_countdown_delayed_reason@@PBUs_player_identifier@@@Z");
//};

//public: bool c_network_session_parameter_countdown_timer::request_change(bool, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *)
//{
//    mangled_ppc("?request_change@c_network_session_parameter_countdown_timer@@QAA_N_NJW4e_network_game_countdown_delayed_reason@@PBUs_player_identifier@@@Z");
//};

//private: virtual bool c_network_session_parameter_countdown_timer::handle_change_payload(void const *)
//{
//    mangled_ppc("?handle_change_payload@c_network_session_parameter_countdown_timer@@EAA_NPBX@Z");
//};

//private: virtual bool c_network_session_parameter_countdown_timer::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_countdown_timer@@EAA_NPBX@Z");
//};

//private: bool c_network_session_parameter_countdown_timer::set_internal(bool, long, long, enum e_network_game_countdown_delayed_reason, struct s_player_identifier const *)
//{
//    mangled_ppc("?set_internal@c_network_session_parameter_countdown_timer@@AAA_N_NJJW4e_network_game_countdown_delayed_reason@@PBUs_player_identifier@@@Z");
//};

//void countdown_timer_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?countdown_timer_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool countdown_timer_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?countdown_timer_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void map_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?map_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool map_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?map_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: bool c_network_session_parameter_initial_participants::get(struct game_machine_options const **, struct game_player_options const **) const
//{
//    mangled_ppc("?get@c_network_session_parameter_initial_participants@@QBA_NPAPBUgame_machine_options@@PAPBUgame_player_options@@@Z");
//};

//public: bool c_network_session_parameter_initial_participants::set(struct game_machine_options const *, struct game_player_options const *)
//{
//    mangled_ppc("?set@c_network_session_parameter_initial_participants@@QAA_NPBUgame_machine_options@@PBUgame_player_options@@@Z");
//};

//void initial_participants_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?initial_participants_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool initial_participants_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?initial_participants_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void game_instance_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?game_instance_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool game_instance_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?game_instance_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void random_seed_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?random_seed_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool random_seed_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?random_seed_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void language_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?language_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool language_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?language_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void determinism_version_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?determinism_version_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool determinism_version_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?determinism_version_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void simulation_protocol_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?simulation_protocol_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool simulation_protocol_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?simulation_protocol_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void campaign_difficulty_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?campaign_difficulty_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool campaign_difficulty_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?campaign_difficulty_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void active_skulls_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?active_skulls_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool active_skulls_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?active_skulls_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void campaign_metagame_scoring_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?campaign_metagame_scoring_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool campaign_metagame_scoring_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?campaign_metagame_scoring_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void campaign_insertion_point_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?campaign_insertion_point_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool campaign_insertion_point_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?campaign_insertion_point_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void end_game_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?end_game_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool end_game_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?end_game_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void privacy_mode_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?privacy_mode_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool privacy_mode_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?privacy_mode_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void start_mode_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?start_mode_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool start_mode_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?start_mode_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void synchronous_out_of_sync_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?synchronous_out_of_sync_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool synchronous_out_of_sync_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?synchronous_out_of_sync_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void request_campaign_quit_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?request_campaign_quit_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool request_campaign_quit_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?request_campaign_quit_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void leader_properties_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?leader_properties_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool leader_properties_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?leader_properties_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void synchronous_halt_state_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?synchronous_halt_state_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool synchronous_halt_state_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?synchronous_halt_state_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: c_enum<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>(enum e_input_user_index)
//{
//    mangled_ppc("??0?$c_enum@W4e_input_user_index@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_input_user_index@@@Z");
//};

//public: enum e_input_user_index c_enum_no_init<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_input_user_index(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_input_user_index@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_input_user_index@@XZ");
//};

//public: bool c_enum_no_init<enum e_input_user_index, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_input_user_index) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_input_user_index@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_input_user_index@@@Z");
//};

//protected: void c_generic_network_session_parameter_data<struct s_network_session_parameter_countdown_timer>::validate_request(void)
//{
//    mangled_ppc("?validate_request@?$c_generic_network_session_parameter_data@Us_network_session_parameter_countdown_timer@@@@IAAXXZ");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: bool c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_session_game_start_status c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_session_game_start_status(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@QBA?AW4e_session_game_start_status@@XZ");
//};

//public: bool c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_session_game_start_status c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@SA?AW4e_session_game_start_status@@H@Z");
//};

//public: static char c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: unsigned long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_network_session_privacy c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_network_session_privacy@@H@Z");
//};

//public: static char c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static enum e_network_session_closed_status c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_network_session_closed_status@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

