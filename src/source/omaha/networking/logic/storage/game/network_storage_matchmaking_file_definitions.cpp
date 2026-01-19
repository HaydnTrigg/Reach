/* ---------- headers */

#include "omaha\networking\logic\storage\game\network_storage_matchmaking_file_definitions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long multiplayer_game_hopper_pack_hopper_file(void *, long, struct s_hopper_configuration_table const *);
// bool multiplayer_game_hopper_unpack_hopper_file(void const *, long, struct s_hopper_configuration_table *);
// long multiplayer_game_hopper_pack_hopper_description(void *, long, struct s_game_hopper_description_table const *);
// bool multiplayer_game_hopper_unpack_hopper_description(void const *, long, struct s_game_hopper_description_table *);
// long multiplayer_game_hopper_pack_game_set(void *, long, struct s_game_set const *);
// bool multiplayer_game_hopper_unpack_game_set(void const *, long, struct s_game_set *);
// long multiplayer_game_hopper_pack_game_variant(void *, long, class c_game_variant const *);
// bool multiplayer_game_hopper_unpack_game_variant(void const *, long, class c_game_variant *);
// void multiplayer_game_hopper_encode(class c_bitstream *, struct s_hopper_configuration_table const *);
// void multiplayer_game_hopper_byte_swap_BE(struct s_hopper_configuration_table *, bool);
// bool multiplayer_game_hopper_decode(class c_bitstream *, struct s_hopper_configuration_table *);
// void multiplayer_game_hopper_description_encode(class c_bitstream *, struct s_game_hopper_description_table const *);
// bool multiplayer_game_hopper_description_decode(class c_bitstream *, struct s_game_hopper_description_table *);
// void multiplayer_game_set_replicated_data_encode(class c_bitstream *, struct s_game_set_replicated_data const *);
// void multiplayer_game_set_encode(class c_bitstream *, struct s_game_set const *);
// void multiplayer_game_set_byte_swap_BE(struct s_game_set *);
// bool multiplayer_game_set_replicated_data_decode(class c_bitstream *, struct s_game_set_replicated_data *);
// bool multiplayer_game_set_decode(class c_bitstream *, struct s_game_set *);
// void network_verify_packed_game_variant_file(char const *);
// void network_packed_game_variant_file_juju(char const *, bool);
// void network_load_and_use_packed_game_variant_file(char const *);
// void network_verify_packed_map_variant_file(char const *);
// void network_packed_map_variant_file_juju(char const *, bool);
// void network_load_and_use_packed_map_variant_file(char const *);
// void multiplayer_game_hopper_voting_configuration_encode(class c_bitstream *, struct s_hopper_voting_configuration const *);
// bool multiplayer_game_hopper_voting_configuration_decode(class c_bitstream *, struct s_hopper_voting_configuration *);
// bool multiplayer_game_hopper_game_type_uses_game_variants(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// bool multiplayer_game_hopper_game_type_uses_map_variants(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: bool c_hopper_configuration::is_active_for_current_arena_season(void) const;
// public: long c_hopper_configuration::roll_jackpot(void) const;
// public: static long s_static_array<struct s_hopper_jackpot_configuration, 3>::get_count(void);
// public: bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// public: struct s_hopper_query_configuration & s_static_array<struct s_hopper_query_configuration, 4>::operator[]<long>(long);
// public: struct s_hopper_query_latency_desirability_configuration & s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::operator[]<long>(long);
// public: float & s_static_array<float, 17>::operator[]<long>(long);
// public: struct s_hopper_universal_configuration::s_per_team_data & s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::operator[]<long>(long);
// public: struct s_hopper_jackpot_configuration & s_static_array<struct s_hopper_jackpot_configuration, 3>::operator[]<long>(long);
// public: void c_bitstream::write_non_zero_count<64, long>(char const *, long);
// public: long c_bitstream::read_non_zero_count<64>(char const *);
// public: void c_bitstream::write_flags<class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_valid_index<256, short>(char const *, short);
// public: void c_bitstream::read_flags<class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_valid_index<256>(char const *);
// public: void c_bitstream::write_non_zero_count<8, long>(char const *, long);
// public: void c_bitstream::write_non_zero_count<30, long>(char const *, long);
// public: void c_bitstream::write_flags<class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: long c_bitstream::read_non_zero_count<8>(char const *);
// public: long c_bitstream::read_non_zero_count<30>(char const *);
// public: void c_bitstream::read_flags<class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: struct s_hopper_jackpot_configuration const & s_static_array<struct s_hopper_jackpot_configuration, 3>::operator[]<long>(long) const;
// public: unsigned char c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: unsigned char c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: static bool s_static_array<struct s_hopper_query_configuration, 4>::valid<long>(long);
// public: static bool s_static_array<float, 17>::valid<long>(long);
// public: static bool s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_hopper_jackpot_configuration, 3>::valid<long>(long);
// public: bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;

//long multiplayer_game_hopper_pack_hopper_file(void *, long, struct s_hopper_configuration_table const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_pack_hopper_file@@YAJPAXJPBUs_hopper_configuration_table@@@Z");
//};

//bool multiplayer_game_hopper_unpack_hopper_file(void const *, long, struct s_hopper_configuration_table *)
//{
//    mangled_ppc("?multiplayer_game_hopper_unpack_hopper_file@@YA_NPBXJPAUs_hopper_configuration_table@@@Z");
//};

//long multiplayer_game_hopper_pack_hopper_description(void *, long, struct s_game_hopper_description_table const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_pack_hopper_description@@YAJPAXJPBUs_game_hopper_description_table@@@Z");
//};

//bool multiplayer_game_hopper_unpack_hopper_description(void const *, long, struct s_game_hopper_description_table *)
//{
//    mangled_ppc("?multiplayer_game_hopper_unpack_hopper_description@@YA_NPBXJPAUs_game_hopper_description_table@@@Z");
//};

//long multiplayer_game_hopper_pack_game_set(void *, long, struct s_game_set const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_pack_game_set@@YAJPAXJPBUs_game_set@@@Z");
//};

//bool multiplayer_game_hopper_unpack_game_set(void const *, long, struct s_game_set *)
//{
//    mangled_ppc("?multiplayer_game_hopper_unpack_game_set@@YA_NPBXJPAUs_game_set@@@Z");
//};

//long multiplayer_game_hopper_pack_game_variant(void *, long, class c_game_variant const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_pack_game_variant@@YAJPAXJPBVc_game_variant@@@Z");
//};

//bool multiplayer_game_hopper_unpack_game_variant(void const *, long, class c_game_variant *)
//{
//    mangled_ppc("?multiplayer_game_hopper_unpack_game_variant@@YA_NPBXJPAVc_game_variant@@@Z");
//};

//void multiplayer_game_hopper_encode(class c_bitstream *, struct s_hopper_configuration_table const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_encode@@YAXPAVc_bitstream@@PBUs_hopper_configuration_table@@@Z");
//};

//void multiplayer_game_hopper_byte_swap_BE(struct s_hopper_configuration_table *, bool)
//{
//    mangled_ppc("?multiplayer_game_hopper_byte_swap_BE@@YAXPAUs_hopper_configuration_table@@_N@Z");
//};

//bool multiplayer_game_hopper_decode(class c_bitstream *, struct s_hopper_configuration_table *)
//{
//    mangled_ppc("?multiplayer_game_hopper_decode@@YA_NPAVc_bitstream@@PAUs_hopper_configuration_table@@@Z");
//};

//void multiplayer_game_hopper_description_encode(class c_bitstream *, struct s_game_hopper_description_table const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_description_encode@@YAXPAVc_bitstream@@PBUs_game_hopper_description_table@@@Z");
//};

//bool multiplayer_game_hopper_description_decode(class c_bitstream *, struct s_game_hopper_description_table *)
//{
//    mangled_ppc("?multiplayer_game_hopper_description_decode@@YA_NPAVc_bitstream@@PAUs_game_hopper_description_table@@@Z");
//};

//void multiplayer_game_set_replicated_data_encode(class c_bitstream *, struct s_game_set_replicated_data const *)
//{
//    mangled_ppc("?multiplayer_game_set_replicated_data_encode@@YAXPAVc_bitstream@@PBUs_game_set_replicated_data@@@Z");
//};

//void multiplayer_game_set_encode(class c_bitstream *, struct s_game_set const *)
//{
//    mangled_ppc("?multiplayer_game_set_encode@@YAXPAVc_bitstream@@PBUs_game_set@@@Z");
//};

//void multiplayer_game_set_byte_swap_BE(struct s_game_set *)
//{
//    mangled_ppc("?multiplayer_game_set_byte_swap_BE@@YAXPAUs_game_set@@@Z");
//};

//bool multiplayer_game_set_replicated_data_decode(class c_bitstream *, struct s_game_set_replicated_data *)
//{
//    mangled_ppc("?multiplayer_game_set_replicated_data_decode@@YA_NPAVc_bitstream@@PAUs_game_set_replicated_data@@@Z");
//};

//bool multiplayer_game_set_decode(class c_bitstream *, struct s_game_set *)
//{
//    mangled_ppc("?multiplayer_game_set_decode@@YA_NPAVc_bitstream@@PAUs_game_set@@@Z");
//};

//void network_verify_packed_game_variant_file(char const *)
//{
//    mangled_ppc("?network_verify_packed_game_variant_file@@YAXPBD@Z");
//};

//void network_packed_game_variant_file_juju(char const *, bool)
//{
//    mangled_ppc("?network_packed_game_variant_file_juju@@YAXPBD_N@Z");
//};

//void network_load_and_use_packed_game_variant_file(char const *)
//{
//    mangled_ppc("?network_load_and_use_packed_game_variant_file@@YAXPBD@Z");
//};

//void network_verify_packed_map_variant_file(char const *)
//{
//    mangled_ppc("?network_verify_packed_map_variant_file@@YAXPBD@Z");
//};

//void network_packed_map_variant_file_juju(char const *, bool)
//{
//    mangled_ppc("?network_packed_map_variant_file_juju@@YAXPBD_N@Z");
//};

//void network_load_and_use_packed_map_variant_file(char const *)
//{
//    mangled_ppc("?network_load_and_use_packed_map_variant_file@@YAXPBD@Z");
//};

//void multiplayer_game_hopper_voting_configuration_encode(class c_bitstream *, struct s_hopper_voting_configuration const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_voting_configuration_encode@@YAXPAVc_bitstream@@PBUs_hopper_voting_configuration@@@Z");
//};

//bool multiplayer_game_hopper_voting_configuration_decode(class c_bitstream *, struct s_hopper_voting_configuration *)
//{
//    mangled_ppc("?multiplayer_game_hopper_voting_configuration_decode@@YA_NPAVc_bitstream@@PAUs_hopper_voting_configuration@@@Z");
//};

//bool multiplayer_game_hopper_game_type_uses_game_variants(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?multiplayer_game_hopper_game_type_uses_game_variants@@YA_NV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool multiplayer_game_hopper_game_type_uses_map_variants(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?multiplayer_game_hopper_game_type_uses_map_variants@@YA_NV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_hopper_configuration::is_active_for_current_arena_season(void) const
//{
//    mangled_ppc("?is_active_for_current_arena_season@c_hopper_configuration@@QBA_NXZ");
//};

//public: long c_hopper_configuration::roll_jackpot(void) const
//{
//    mangled_ppc("?roll_jackpot@c_hopper_configuration@@QBAJXZ");
//};

//public: static long s_static_array<struct s_hopper_jackpot_configuration, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_hopper_jackpot_configuration@@$02@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: struct s_hopper_query_configuration & s_static_array<struct s_hopper_query_configuration, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hopper_query_configuration@@$03@@QAAAAUs_hopper_query_configuration@@J@Z");
//};

//public: struct s_hopper_query_latency_desirability_configuration & s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hopper_query_latency_desirability_configuration@@$01@@QAAAAUs_hopper_query_latency_desirability_configuration@@J@Z");
//};

//public: float & s_static_array<float, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@M$0BB@@@QAAAAMJ@Z");
//};

//public: struct s_hopper_universal_configuration::s_per_team_data & s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_per_team_data@s_hopper_universal_configuration@@$07@@QAAAAUs_per_team_data@s_hopper_universal_configuration@@J@Z");
//};

//public: struct s_hopper_jackpot_configuration & s_static_array<struct s_hopper_jackpot_configuration, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hopper_jackpot_configuration@@$02@@QAAAAUs_hopper_jackpot_configuration@@J@Z");
//};

//public: void c_bitstream::write_non_zero_count<64, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$0EA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_non_zero_count<64>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$0EA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_valid_index<256, short>(char const *, short)
//{
//    mangled_ppc("??$write_valid_index@$0BAA@F@c_bitstream@@QAAXPBDF@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_valid_index<256>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0BAA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_non_zero_count<8, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$07J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_non_zero_count<30, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$0BO@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_non_zero_count<8>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$07@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_non_zero_count<30>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$0BO@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_hopper_jackpot_configuration const & s_static_array<struct s_hopper_jackpot_configuration, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hopper_jackpot_configuration@@$02@@QBAABUs_hopper_jackpot_configuration@@J@Z");
//};

//public: unsigned char c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: static bool s_static_array<struct s_hopper_query_configuration, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_hopper_query_configuration@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@M$0BB@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_per_team_data@s_hopper_universal_configuration@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_hopper_jackpot_configuration, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_hopper_jackpot_configuration@@$02@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

