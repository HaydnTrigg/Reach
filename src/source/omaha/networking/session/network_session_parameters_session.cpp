/* ---------- headers */

#include "omaha\networking\session\network_session_parameters_session.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void remote_join_data_encode_function(class c_bitstream *, void const *, long);
// bool remote_join_data_decode_function(class c_bitstream *, void *, long);
// public: long c_network_session_parameter_session_size::get_max_peer_count(void) const;
// public: long c_network_session_parameter_session_size::get_max_player_count(void) const;
// public: bool c_network_session_parameter_session_size::set_max_peer_count(long);
// public: bool c_network_session_parameter_session_size::set_max_player_count(long);
// public: bool c_network_session_parameter_session_size::request_set_max_player_count(long);
// private: virtual bool c_network_session_parameter_session_size::handle_change_request_payload(void const *);
// void session_size_encode_function(class c_bitstream *, void const *, long);
// bool session_size_decode_function(class c_bitstream *, void *, long);
// public: bool c_network_session_parameter_life_cycle::set_state(enum e_life_cycle_state);
// public: bool c_network_session_parameter_life_cycle::set_mode(enum e_life_cycle_mode);
// public: bool c_network_session_parameter_life_cycle::increment_state_token(void);
// public: bool c_network_session_parameter_life_cycle::set_disbanding(enum e_life_cycle_disbanding_reason);
// private: void c_network_session_parameter_life_cycle::increment_state_token_internal(void);
// void life_cycle_encode_function(class c_bitstream *, void const *, long);
// bool life_cycle_decode_function(class c_bitstream *, void *, long);
// void network_active_roster_outgoing_join_request_encode_function(class c_bitstream *, void const *, long);
// bool network_active_roster_outgoing_join_request_decode_function(class c_bitstream *, void *, long);
// void network_active_roster_outgoing_join_data_encode_function(class c_bitstream *, void const *, long);
// bool network_active_roster_outgoing_join_data_decode_function(class c_bitstream *, void *, long);
// void network_active_roster_incoming_join_data_encode_function(class c_bitstream *, void const *, long);
// bool network_active_roster_incoming_join_data_decode_function(class c_bitstream *, void *, long);
// public: void s_network_session_parameter_speculative_migration::encode(class c_bitstream *) const;
// public: void s_network_session_parameter_speculative_migration::decode(class c_bitstream *);
// void speculative_migration_encode_function(class c_bitstream *, void const *, long);
// bool speculative_migration_decode_function(class c_bitstream *, void *, long);
// public: c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_life_cycle_mode);
// public: bool c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_life_cycle_mode) const;
// public: c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>(enum e_life_cycle_disbanding_reason);
// public: enum e_life_cycle_disbanding_reason c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::operator enum e_life_cycle_disbanding_reason(void) const;
// protected: void c_generic_network_session_parameter_data<struct s_network_session_parameter_session_size>::validate_request(void);
// public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: bool c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>);
// public: static enum e_life_cycle_join_result c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>);
// public: static enum e_life_cycle_mode c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_life_cycle_disbanding_reason c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);

//void remote_join_data_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?remote_join_data_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool remote_join_data_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?remote_join_data_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: long c_network_session_parameter_session_size::get_max_peer_count(void) const
//{
//    mangled_ppc("?get_max_peer_count@c_network_session_parameter_session_size@@QBAJXZ");
//};

//public: long c_network_session_parameter_session_size::get_max_player_count(void) const
//{
//    mangled_ppc("?get_max_player_count@c_network_session_parameter_session_size@@QBAJXZ");
//};

//public: bool c_network_session_parameter_session_size::set_max_peer_count(long)
//{
//    mangled_ppc("?set_max_peer_count@c_network_session_parameter_session_size@@QAA_NJ@Z");
//};

//public: bool c_network_session_parameter_session_size::set_max_player_count(long)
//{
//    mangled_ppc("?set_max_player_count@c_network_session_parameter_session_size@@QAA_NJ@Z");
//};

//public: bool c_network_session_parameter_session_size::request_set_max_player_count(long)
//{
//    mangled_ppc("?request_set_max_player_count@c_network_session_parameter_session_size@@QAA_NJ@Z");
//};

//private: virtual bool c_network_session_parameter_session_size::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_session_size@@EAA_NPBX@Z");
//};

//void session_size_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?session_size_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool session_size_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?session_size_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: bool c_network_session_parameter_life_cycle::set_state(enum e_life_cycle_state)
//{
//    mangled_ppc("?set_state@c_network_session_parameter_life_cycle@@QAA_NW4e_life_cycle_state@@@Z");
//};

//public: bool c_network_session_parameter_life_cycle::set_mode(enum e_life_cycle_mode)
//{
//    mangled_ppc("?set_mode@c_network_session_parameter_life_cycle@@QAA_NW4e_life_cycle_mode@@@Z");
//};

//public: bool c_network_session_parameter_life_cycle::increment_state_token(void)
//{
//    mangled_ppc("?increment_state_token@c_network_session_parameter_life_cycle@@QAA_NXZ");
//};

//public: bool c_network_session_parameter_life_cycle::set_disbanding(enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?set_disbanding@c_network_session_parameter_life_cycle@@QAA_NW4e_life_cycle_disbanding_reason@@@Z");
//};

//private: void c_network_session_parameter_life_cycle::increment_state_token_internal(void)
//{
//    mangled_ppc("?increment_state_token_internal@c_network_session_parameter_life_cycle@@AAAXXZ");
//};

//void life_cycle_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?life_cycle_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool life_cycle_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?life_cycle_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void network_active_roster_outgoing_join_request_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool network_active_roster_outgoing_join_request_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void network_active_roster_outgoing_join_data_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_data_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool network_active_roster_outgoing_join_data_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_data_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void network_active_roster_incoming_join_data_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?network_active_roster_incoming_join_data_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool network_active_roster_incoming_join_data_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?network_active_roster_incoming_join_data_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: void s_network_session_parameter_speculative_migration::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_network_session_parameter_speculative_migration@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_network_session_parameter_speculative_migration::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_network_session_parameter_speculative_migration@@QAAXPAVc_bitstream@@@Z");
//};

//void speculative_migration_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?speculative_migration_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool speculative_migration_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?speculative_migration_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_life_cycle_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_life_cycle_mode@@@Z");
//};

//public: bool c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_life_cycle_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_life_cycle_mode@@@Z");
//};

//public: c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>(enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("??0?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@QAA@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: enum e_life_cycle_disbanding_reason c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::operator enum e_life_cycle_disbanding_reason(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@QBA?AW4e_life_cycle_disbanding_reason@@XZ");
//};

//protected: void c_generic_network_session_parameter_data<struct s_network_session_parameter_session_size>::validate_request(void)
//{
//    mangled_ppc("?validate_request@?$c_generic_network_session_parameter_data@Us_network_session_parameter_session_size@@@@IAAXXZ");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: bool c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_life_cycle_join_result c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@SA?AW4e_life_cycle_join_result@@H@Z");
//};

//public: static char c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@SADK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver> >(class c_enum<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_life_cycle_mode c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_life_cycle_mode@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_life_cycle_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_life_cycle_mode@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_life_cycle_disbanding_reason c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@SA?AW4e_life_cycle_disbanding_reason@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_life_cycle_disbanding_reason, unsigned char, 0, 34, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_life_cycle_disbanding_reason@@E$0A@$0CC@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

