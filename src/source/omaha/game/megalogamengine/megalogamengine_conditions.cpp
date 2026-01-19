/* ---------- headers */

#include "omaha\game\megalogamengine\megalogamengine_conditions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_condition::c_condition(void);
// public: void c_condition::initialize(void);
// public: bool c_condition::is_valid(struct s_custom_game_engine_definition const *) const;
// public: bool c_condition::evaluate(void) const;
// public: void c_condition::encode(class c_bitstream *) const;
// public: bool c_condition::is_empty(void) const;
// public: void c_condition::decode(class c_bitstream *);
// public: void s_condition_if_parameters::encode(class c_bitstream *) const;
// public: void s_condition_if_parameters::decode(class c_bitstream *);
// public: void s_condition_object_in_area_parameters::encode(class c_bitstream *) const;
// public: void s_condition_object_in_area_parameters::decode(class c_bitstream *);
// public: void s_condition_player_died_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_died_parameters::decode(class c_bitstream *);
// public: void s_condition_team_disposition_parameters::encode(class c_bitstream *) const;
// public: void s_condition_team_disposition_parameters::decode(class c_bitstream *);
// public: void s_condition_timer_expired_parameters::encode(class c_bitstream *) const;
// public: void s_condition_timer_expired_parameters::decode(class c_bitstream *);
// public: void s_condition_object_is_type_parameters::encode(class c_bitstream *) const;
// public: void s_condition_object_is_type_parameters::decode(class c_bitstream *);
// public: void s_condition_team_is_active_parameters::encode(class c_bitstream *) const;
// public: void s_condition_team_is_active_parameters::decode(class c_bitstream *);
// public: void s_condition_object_out_of_bounds_parameters::encode(class c_bitstream *) const;
// public: void s_condition_object_out_of_bounds_parameters::decode(class c_bitstream *);
// public: void s_condition_player_is_fire_team_leader_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_is_fire_team_leader_parameters::decode(class c_bitstream *);
// public: void s_condition_player_assisted_with_kill_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_assisted_with_kill_parameters::decode(class c_bitstream *);
// public: void s_condition_player_is_active_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_is_active_parameters::decode(class c_bitstream *);
// public: void s_condition_object_matches_filter_parameters::encode(class c_bitstream *) const;
// public: void s_condition_object_matches_filter_parameters::decode(class c_bitstream *);
// public: void s_condition_equipment_is_active_parameters::encode(class c_bitstream *) const;
// public: void s_condition_equipment_is_active_parameters::decode(class c_bitstream *);
// public: void s_condition_player_is_spartan_parameters::decode(class c_bitstream *);
// public: void s_condition_player_is_spartan_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_is_elite_parameters::decode(class c_bitstream *);
// public: void s_condition_player_is_elite_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_is_editor_parameters::encode(class c_bitstream *) const;
// public: void s_condition_player_is_editor_parameters::decode(class c_bitstream *);
// public: void s_condition_game_is_forge_parameters::encode(class c_bitstream *) const;
// public: void s_condition_game_is_forge_parameters::decode(class c_bitstream *);
// public: c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>(enum e_condition_type);
// public: enum e_condition_type c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::operator enum e_condition_type(void) const;
// public: bool c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::operator==(enum e_condition_type) const;
// public: bool c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_numeric_comparison c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_numeric_comparison(void) const;
// public: bool c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_disposition c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_disposition(void) const;
// public: bool c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>);
// public: static enum e_condition_type c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: static enum e_numeric_comparison c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_disposition c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: bool c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_death_killer_type);

//public: c_condition::c_condition(void)
//{
//    mangled_ppc("??0c_condition@@QAA@XZ");
//};

//public: void c_condition::initialize(void)
//{
//    mangled_ppc("?initialize@c_condition@@QAAXXZ");
//};

//public: bool c_condition::is_valid(struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?is_valid@c_condition@@QBA_NPBUs_custom_game_engine_definition@@@Z");
//};

//public: bool c_condition::evaluate(void) const
//{
//    mangled_ppc("?evaluate@c_condition@@QBA_NXZ");
//};

//public: void c_condition::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_condition@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_condition::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_condition@@QBA_NXZ");
//};

//public: void c_condition::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_condition@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_if_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_if_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_if_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_if_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_in_area_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_object_in_area_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_in_area_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_object_in_area_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_died_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_died_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_died_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_died_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_team_disposition_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_team_disposition_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_team_disposition_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_team_disposition_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_timer_expired_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_timer_expired_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_timer_expired_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_timer_expired_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_is_type_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_object_is_type_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_is_type_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_object_is_type_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_team_is_active_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_team_is_active_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_team_is_active_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_team_is_active_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_out_of_bounds_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_object_out_of_bounds_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_out_of_bounds_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_object_out_of_bounds_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_fire_team_leader_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_is_fire_team_leader_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_fire_team_leader_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_is_fire_team_leader_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_assisted_with_kill_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_assisted_with_kill_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_assisted_with_kill_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_assisted_with_kill_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_active_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_is_active_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_active_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_is_active_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_matches_filter_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_object_matches_filter_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_object_matches_filter_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_object_matches_filter_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_equipment_is_active_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_equipment_is_active_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_equipment_is_active_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_equipment_is_active_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_spartan_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_is_spartan_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_spartan_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_is_spartan_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_elite_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_is_elite_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_elite_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_is_elite_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_editor_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_player_is_editor_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_player_is_editor_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_player_is_editor_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_game_is_forge_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_condition_game_is_forge_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_condition_game_is_forge_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_condition_game_is_forge_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>(enum e_condition_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QAA@W4e_condition_type@@@Z");
//};

//public: enum e_condition_type c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::operator enum e_condition_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QBA?AW4e_condition_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::operator==(enum e_condition_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_condition_type@@@Z");
//};

//public: bool c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_numeric_comparison c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_numeric_comparison(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_numeric_comparison@@XZ");
//};

//public: bool c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_disposition c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_disposition(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_disposition@@XZ");
//};

//public: bool c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver> >(class c_enum<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_condition_type c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@SA?AW4e_condition_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_condition_type, unsigned char, 0, 18, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_condition_type@@E$0A@$0BC@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_numeric_comparison c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_numeric_comparison@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_numeric_comparison, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_numeric_comparison@@E$0A@$05Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_disposition c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_disposition@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_disposition, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_disposition@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: bool c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_player_death_killer_type, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_death_killer_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_death_killer_type@@E$04Us_default_enum_string_resolver@@@@CAEW4e_player_death_killer_type@@@Z");
//};

