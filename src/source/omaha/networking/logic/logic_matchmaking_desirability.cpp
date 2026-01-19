/* ---------- headers */

#include "omaha\networking\logic\logic_matchmaking_desirability.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void network_matchmaking_build_gather_party_properties(struct s_network_session_matchmaking_composition const *, struct s_matchmaking_gather_party_properties *);
// void network_matchmaking_build_shared_party_properties(struct s_network_session_matchmaking_composition const *, enum e_matchmaking_search_stage, long, struct s_matchmaking_shared_party_properties *);
// bool network_matchmaking_shared_party_properties_valid(struct s_matchmaking_shared_party_properties const *);
// void network_matchmaking_build_search_party_properties(struct s_network_session_matchmaking_composition const *, enum e_matchmaking_search_stage, long, struct s_matchmaking_search_party_properties *);
// void network_matchmaking_search_party_properties_set_connection_latency(bool, long, struct s_matchmaking_search_party_properties *);
// bool network_matchmaking_gather_party_properties_valid(struct s_matchmaking_gather_party_properties const *);
// void network_matchmaking_gather_party_properties_encode(class c_bitstream *, struct s_matchmaking_gather_party_properties const *);
// void network_matchmaking_shared_party_properties_encode(class c_bitstream *, struct s_matchmaking_shared_party_properties const *);
// bool network_matchmaking_shared_party_properties_decode(class c_bitstream *, struct s_matchmaking_shared_party_properties *);
// bool network_matchmaking_gather_party_properties_decode(class c_bitstream *, struct s_matchmaking_gather_party_properties *);
// bool network_matchmaking_search_party_properties_valid(struct s_matchmaking_search_party_properties const *);
// void network_matchmaking_search_party_properties_encode(class c_bitstream *, struct s_matchmaking_search_party_properties const *);
// bool network_matchmaking_search_party_properties_decode(class c_bitstream *, struct s_matchmaking_search_party_properties *);
// void network_matchmaking_build_allowed_skill_range(struct s_matchmaking_session_properties const *, long, long *, long *);
// void network_matchmaking_get_skill_bounds_for_prefer_skill(struct s_matchmaking_session_properties const *, long *, long *);
// void network_matchmaking_get_latency_for_prefer_good_connection(struct s_matchmaking_session_properties const *, long *);
// enum e_matchmaking_desirability_result network_matchmaking_compute_session_desirability(enum e_matchmaking_desirability_build_type, char const *, struct s_matchmaking_gather_party_properties const *, char const *, struct s_matchmaking_search_party_properties const *, float *);
// enum e_matchmaking_desirability_result network_matchmaking_compute_session_desirability_evaluate_disqualifiers(struct s_matchmaking_gather_party_properties const *, struct s_matchmaking_search_party_properties const *);
// public: long c_hopper_configuration::get_maximum_team_imbalance(void) const;
// public: long c_hopper_configuration::get_maximum_team_count(void) const;
// public: bool c_hopper_configuration::is_big_squad_restriction_enabled(void) const;
// public: long c_hopper_configuration::get_big_squad_size_threshold(void) const;
// public: enum e_undersized_party_split_permissions c_hopper_configuration::get_undersized_party_split_permissions(void) const;
// bool network_matchmaking_session_properties_valid(struct s_matchmaking_session_properties const *);
// bool network_matchmaking_session_preferences_valid(struct s_matchmaking_search_party_preferences const *);
// void network_matchmaking_search_party_preferences_encode(class c_bitstream *, struct s_matchmaking_search_party_preferences const *);
// bool network_matchmaking_search_party_preferences_decode(class c_bitstream *, struct s_matchmaking_search_party_preferences *);
// void network_matchmaking_session_properties_encode(class c_bitstream *, struct s_matchmaking_session_properties const *);
// void network_matchmaking_session_properties_encode_party_player_counts(class c_bitstream *, char const *, class s_static_array<long, 16>);
// bool network_matchmaking_session_properties_decode(class c_bitstream *, struct s_matchmaking_session_properties *);
// class s_static_array<long, 16> network_matchmaking_session_properties_decode_party_player_counts(class c_bitstream *, char const *);
// bool network_matchmaking_session_properties_party_player_counts_valid(class s_static_array<long, 16>);
// void network_matchmaking_dump_search_party_properties(char const *, struct s_matchmaking_search_party_properties const *);
// void network_matchmaking_dump_shared_party_properties(char const *, struct s_matchmaking_shared_party_properties const *);
// void network_matchmaking_dump_search_party_preferences(struct s_matchmaking_search_party_preferences const *);
// void network_matchmaking_dump_session_properties(char const *, struct s_matchmaking_session_properties const *);
// void network_matchmaking_dump_gather_party_properties(char const *, struct s_matchmaking_gather_party_properties const *);
// public: static long s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::get_count(void);
// public: static long s_static_array<long, 2>::get_count(void);
// public: static long s_static_array<long, 16>::get_count(void);
// public: bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_network_session_matchmaking_composition_flags) const;
// public: unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_matchmaking_preference_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_matchmaking_preference_flags, bool);
// public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const;
// long int_pin<long, long, long>(long const &, long const &, long const &);
// public: struct s_matchmaking_session_player_properties const & s_static_array<struct s_matchmaking_session_player_properties, 16>::operator[]<long>(long) const;
// public: long const & s_static_array<long, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type) const;
// public: struct s_hopper_query_latency_desirability_configuration const & s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::operator[]<long>(long) const;
// public: void c_bitstream::write_non_zero_count<16, long>(char const *, long);
// public: void c_bitstream::write_valid_index<16, long>(char const *, long);
// public: long const & s_static_array<long, 2>::operator[]<long>(long) const;
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: long c_bitstream::read_non_zero_count<16>(char const *);
// public: long c_bitstream::read_valid_index<16>(char const *);
// public: long & s_static_array<long, 2>::operator[]<long>(long);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: static bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_composition_flags);
// public: bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_composition_flags);
// public: static bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_preference_flags);
// public: unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_preference_flags);
// public: static bool s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::valid<long>(long);
// public: static bool s_static_array<long, 2>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_matchmaking_composition_flags);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_matchmaking_preference_flags);

//void network_matchmaking_build_gather_party_properties(struct s_network_session_matchmaking_composition const *, struct s_matchmaking_gather_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_build_gather_party_properties@@YAXPBUs_network_session_matchmaking_composition@@PAUs_matchmaking_gather_party_properties@@@Z");
//};

//void network_matchmaking_build_shared_party_properties(struct s_network_session_matchmaking_composition const *, enum e_matchmaking_search_stage, long, struct s_matchmaking_shared_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_build_shared_party_properties@@YAXPBUs_network_session_matchmaking_composition@@W4e_matchmaking_search_stage@@JPAUs_matchmaking_shared_party_properties@@@Z");
//};

//bool network_matchmaking_shared_party_properties_valid(struct s_matchmaking_shared_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_shared_party_properties_valid@@YA_NPBUs_matchmaking_shared_party_properties@@@Z");
//};

//void network_matchmaking_build_search_party_properties(struct s_network_session_matchmaking_composition const *, enum e_matchmaking_search_stage, long, struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_build_search_party_properties@@YAXPBUs_network_session_matchmaking_composition@@W4e_matchmaking_search_stage@@JPAUs_matchmaking_search_party_properties@@@Z");
//};

//void network_matchmaking_search_party_properties_set_connection_latency(bool, long, struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_search_party_properties_set_connection_latency@@YAX_NJPAUs_matchmaking_search_party_properties@@@Z");
//};

//bool network_matchmaking_gather_party_properties_valid(struct s_matchmaking_gather_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_gather_party_properties_valid@@YA_NPBUs_matchmaking_gather_party_properties@@@Z");
//};

//void network_matchmaking_gather_party_properties_encode(class c_bitstream *, struct s_matchmaking_gather_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_gather_party_properties_encode@@YAXPAVc_bitstream@@PBUs_matchmaking_gather_party_properties@@@Z");
//};

//void network_matchmaking_shared_party_properties_encode(class c_bitstream *, struct s_matchmaking_shared_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_shared_party_properties_encode@@YAXPAVc_bitstream@@PBUs_matchmaking_shared_party_properties@@@Z");
//};

//bool network_matchmaking_shared_party_properties_decode(class c_bitstream *, struct s_matchmaking_shared_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_shared_party_properties_decode@@YA_NPAVc_bitstream@@PAUs_matchmaking_shared_party_properties@@@Z");
//};

//bool network_matchmaking_gather_party_properties_decode(class c_bitstream *, struct s_matchmaking_gather_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_gather_party_properties_decode@@YA_NPAVc_bitstream@@PAUs_matchmaking_gather_party_properties@@@Z");
//};

//bool network_matchmaking_search_party_properties_valid(struct s_matchmaking_search_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_search_party_properties_valid@@YA_NPBUs_matchmaking_search_party_properties@@@Z");
//};

//void network_matchmaking_search_party_properties_encode(class c_bitstream *, struct s_matchmaking_search_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_search_party_properties_encode@@YAXPAVc_bitstream@@PBUs_matchmaking_search_party_properties@@@Z");
//};

//bool network_matchmaking_search_party_properties_decode(class c_bitstream *, struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?network_matchmaking_search_party_properties_decode@@YA_NPAVc_bitstream@@PAUs_matchmaking_search_party_properties@@@Z");
//};

//void network_matchmaking_build_allowed_skill_range(struct s_matchmaking_session_properties const *, long, long *, long *)
//{
//    mangled_ppc("?network_matchmaking_build_allowed_skill_range@@YAXPBUs_matchmaking_session_properties@@JPAJ1@Z");
//};

//void network_matchmaking_get_skill_bounds_for_prefer_skill(struct s_matchmaking_session_properties const *, long *, long *)
//{
//    mangled_ppc("?network_matchmaking_get_skill_bounds_for_prefer_skill@@YAXPBUs_matchmaking_session_properties@@PAJ1@Z");
//};

//void network_matchmaking_get_latency_for_prefer_good_connection(struct s_matchmaking_session_properties const *, long *)
//{
//    mangled_ppc("?network_matchmaking_get_latency_for_prefer_good_connection@@YAXPBUs_matchmaking_session_properties@@PAJ@Z");
//};

//enum e_matchmaking_desirability_result network_matchmaking_compute_session_desirability(enum e_matchmaking_desirability_build_type, char const *, struct s_matchmaking_gather_party_properties const *, char const *, struct s_matchmaking_search_party_properties const *, float *)
//{
//    mangled_ppc("?network_matchmaking_compute_session_desirability@@YA?AW4e_matchmaking_desirability_result@@W4e_matchmaking_desirability_build_type@@PBDPBUs_matchmaking_gather_party_properties@@1PBUs_matchmaking_search_party_properties@@PAM@Z");
//};

//enum e_matchmaking_desirability_result network_matchmaking_compute_session_desirability_evaluate_disqualifiers(struct s_matchmaking_gather_party_properties const *, struct s_matchmaking_search_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_compute_session_desirability_evaluate_disqualifiers@@YA?AW4e_matchmaking_desirability_result@@PBUs_matchmaking_gather_party_properties@@PBUs_matchmaking_search_party_properties@@@Z");
//};

//public: long c_hopper_configuration::get_maximum_team_imbalance(void) const
//{
//    mangled_ppc("?get_maximum_team_imbalance@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_team_count(void) const
//{
//    mangled_ppc("?get_maximum_team_count@c_hopper_configuration@@QBAJXZ");
//};

//public: bool c_hopper_configuration::is_big_squad_restriction_enabled(void) const
//{
//    mangled_ppc("?is_big_squad_restriction_enabled@c_hopper_configuration@@QBA_NXZ");
//};

//public: long c_hopper_configuration::get_big_squad_size_threshold(void) const
//{
//    mangled_ppc("?get_big_squad_size_threshold@c_hopper_configuration@@QBAJXZ");
//};

//public: enum e_undersized_party_split_permissions c_hopper_configuration::get_undersized_party_split_permissions(void) const
//{
//    mangled_ppc("?get_undersized_party_split_permissions@c_hopper_configuration@@QBA?AW4e_undersized_party_split_permissions@@XZ");
//};

//bool network_matchmaking_session_properties_valid(struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?network_matchmaking_session_properties_valid@@YA_NPBUs_matchmaking_session_properties@@@Z");
//};

//bool network_matchmaking_session_preferences_valid(struct s_matchmaking_search_party_preferences const *)
//{
//    mangled_ppc("?network_matchmaking_session_preferences_valid@@YA_NPBUs_matchmaking_search_party_preferences@@@Z");
//};

//void network_matchmaking_search_party_preferences_encode(class c_bitstream *, struct s_matchmaking_search_party_preferences const *)
//{
//    mangled_ppc("?network_matchmaking_search_party_preferences_encode@@YAXPAVc_bitstream@@PBUs_matchmaking_search_party_preferences@@@Z");
//};

//bool network_matchmaking_search_party_preferences_decode(class c_bitstream *, struct s_matchmaking_search_party_preferences *)
//{
//    mangled_ppc("?network_matchmaking_search_party_preferences_decode@@YA_NPAVc_bitstream@@PAUs_matchmaking_search_party_preferences@@@Z");
//};

//void network_matchmaking_session_properties_encode(class c_bitstream *, struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?network_matchmaking_session_properties_encode@@YAXPAVc_bitstream@@PBUs_matchmaking_session_properties@@@Z");
//};

//void network_matchmaking_session_properties_encode_party_player_counts(class c_bitstream *, char const *, class s_static_array<long, 16>)
//{
//    mangled_ppc("?network_matchmaking_session_properties_encode_party_player_counts@@YAXPAVc_bitstream@@PBDV?$s_static_array@J$0BA@@@@Z");
//};

//bool network_matchmaking_session_properties_decode(class c_bitstream *, struct s_matchmaking_session_properties *)
//{
//    mangled_ppc("?network_matchmaking_session_properties_decode@@YA_NPAVc_bitstream@@PAUs_matchmaking_session_properties@@@Z");
//};

//class s_static_array<long, 16> network_matchmaking_session_properties_decode_party_player_counts(class c_bitstream *, char const *)
//{
//    mangled_ppc("?network_matchmaking_session_properties_decode_party_player_counts@@YA?AV?$s_static_array@J$0BA@@@PAVc_bitstream@@PBD@Z");
//};

//bool network_matchmaking_session_properties_party_player_counts_valid(class s_static_array<long, 16>)
//{
//    mangled_ppc("?network_matchmaking_session_properties_party_player_counts_valid@@YA_NV?$s_static_array@J$0BA@@@@Z");
//};

//void network_matchmaking_dump_search_party_properties(char const *, struct s_matchmaking_search_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_dump_search_party_properties@@YAXPBDPBUs_matchmaking_search_party_properties@@@Z");
//};

//void network_matchmaking_dump_shared_party_properties(char const *, struct s_matchmaking_shared_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_dump_shared_party_properties@@YAXPBDPBUs_matchmaking_shared_party_properties@@@Z");
//};

//void network_matchmaking_dump_search_party_preferences(struct s_matchmaking_search_party_preferences const *)
//{
//    mangled_ppc("?network_matchmaking_dump_search_party_preferences@@YAXPBUs_matchmaking_search_party_preferences@@@Z");
//};

//void network_matchmaking_dump_session_properties(char const *, struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?network_matchmaking_dump_session_properties@@YAXPBDPBUs_matchmaking_session_properties@@@Z");
//};

//void network_matchmaking_dump_gather_party_properties(char const *, struct s_matchmaking_gather_party_properties const *)
//{
//    mangled_ppc("?network_matchmaking_dump_gather_party_properties@@YAXPBDPBUs_matchmaking_gather_party_properties@@@Z");
//};

//public: static long s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_hopper_query_latency_desirability_configuration@@$01@@SAJXZ");
//};

//public: static long s_static_array<long, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$01@@SAJXZ");
//};

//public: static long s_static_array<long, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0BA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_network_session_matchmaking_composition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_matchmaking_composition_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_matchmaking_preference_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_preference_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_matchmaking_preference_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_preference_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//long int_pin<long, long, long>(long const &, long const &, long const &)
//{
//    mangled_ppc("??$int_pin@JJJ@@YAJABJ00@Z");
//};

//public: struct s_matchmaking_session_player_properties const & s_static_array<struct s_matchmaking_session_player_properties, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_player_properties@@$0BA@@@QBAABUs_matchmaking_session_player_properties@@J@Z");
//};

//public: long const & s_static_array<long, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type) const
//{
//    mangled_ppc("??$?AW4e_life_cycle_session_type@@@?$s_static_array@J$01@@QBAABJW4e_life_cycle_session_type@@@Z");
//};

//public: struct s_hopper_query_latency_desirability_configuration const & s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_hopper_query_latency_desirability_configuration@@$01@@QBAABUs_hopper_query_latency_desirability_configuration@@J@Z");
//};

//public: void c_bitstream::write_non_zero_count<16, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$0BA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_valid_index<16, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$0BA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long const & s_static_array<long, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$01@@QBAABJJ@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_non_zero_count<16>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$0BA@@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_valid_index<16>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0BA@@c_bitstream@@QAAJPBD@Z");
//};

//public: long & s_static_array<long, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$01@@QAAAAJJ@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_composition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_network_session_matchmaking_composition_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_composition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_network_session_matchmaking_composition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_preference_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_preference_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_preference_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_matchmaking_preference_flags@@@Z");
//};

//public: static bool s_static_array<struct s_hopper_query_latency_desirability_configuration, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_hopper_query_latency_desirability_configuration@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$01@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: bool c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_matchmaking_composition_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_network_session_matchmaking_composition_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_matchmaking_preference_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_matchmaking_preference_flags@@@Z");
//};

