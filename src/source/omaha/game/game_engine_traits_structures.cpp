/* ---------- headers */

#include "omaha\game\game_engine_traits_structures.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: bool __cdecl c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::validate(void)'::`6'::x_event_category_index; // "?x_event_category_index@?5??validate@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QAA_NXZ@4JC"
// long volatile `public: bool __cdecl c_game_engine_option<struct s_game_engine_grace_period_metadata>::validate(void)'::`6'::x_event_category_index; // "?x_event_category_index@?5??validate@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QAA_NXZ@4JC"

// public: void c_game_engine_miscellaneous_options::initialize(void);
// public: void c_game_engine_miscellaneous_options::set(class c_game_engine_miscellaneous_options const *);
// public: void c_game_engine_miscellaneous_options::set(struct s_game_engine_miscellaneous_options_definition const *);
// public: void c_game_engine_miscellaneous_options::set_teams_enabled(bool);
// public: void c_game_engine_miscellaneous_options::set_perfection_enabled(bool);
// public: void c_game_engine_miscellaneous_options::set_round_reset_players(bool);
// public: void c_game_engine_miscellaneous_options::set_round_reset_map(bool);
// public: void c_game_engine_miscellaneous_options::encode(class c_bitstream *) const;
// public: bool c_game_engine_miscellaneous_options::get_round_reset_players(void) const;
// public: bool c_game_engine_miscellaneous_options::get_round_reset_map(void) const;
// public: void c_game_engine_miscellaneous_options::decode(class c_bitstream *);
// public: virtual bool c_game_engine_base_variant::can_add_to_recent_list(void) const;
// public: enum c_game_engine_miscellaneous_options::e_round_reset c_game_engine_miscellaneous_options::get_round_reset_setting(void) const;
// public: void c_game_engine_miscellaneous_options::set_round_reset_setting(enum c_game_engine_miscellaneous_options::e_round_reset);
// public: void c_game_engine_miscellaneous_options::set_round_time_limit_minutes(unsigned char);
// public: void c_game_engine_miscellaneous_options::set_round_limit(unsigned char);
// public: void c_game_engine_miscellaneous_options::set_early_victory_win_count(unsigned char);
// public: void c_game_engine_respawn_options::initialize(void);
// public: void c_game_engine_respawn_options::set(class c_game_engine_respawn_options const *);
// public: void c_game_engine_respawn_options::set_inherit_respawn_time_enabled(bool);
// public: bool c_game_engine_respawn_options::get_respawn_with_teammate_enabled(void) const;
// public: void c_game_engine_respawn_options::set_respawn_with_teammate_enabled(bool);
// public: bool c_game_engine_respawn_options::get_respawn_at_location_enabled(void) const;
// public: void c_game_engine_respawn_options::set_respawn_at_location_enabled(bool);
// public: bool c_game_engine_respawn_options::get_respawn_on_kills_enabled(void) const;
// public: void c_game_engine_respawn_options::set_respawn_on_kills_enabled(bool);
// public: class c_player_traits const * c_game_engine_respawn_options::get_respawn_player_traits(void) const;
// public: void c_game_engine_respawn_options::set_respawn_player_traits(class c_player_traits const *);
// public: void c_game_engine_respawn_options::encode(class c_bitstream *) const;
// public: void c_game_engine_respawn_options::decode(class c_bitstream *);
// public: void c_game_engine_respawn_options::set_lives_per_round(unsigned char);
// public: void c_game_engine_respawn_options::set_team_lives_per_round(unsigned char);
// public: void c_game_engine_respawn_options::set_respawn_time_seconds(unsigned char);
// public: void c_game_engine_respawn_options::set_suicide_penalty_seconds(unsigned char);
// public: void c_game_engine_respawn_options::set_betrayal_penalty_seconds(unsigned char);
// public: void c_game_engine_respawn_options::set_respawn_growth_seconds(unsigned char);
// public: void c_game_engine_respawn_options::set_initial_loadout_selection_time_seconds(unsigned char);
// public: void c_game_engine_respawn_options::set_respawn_player_traits_duration_seconds(unsigned char);
// public: void c_game_engine_social_options::initialize(void);
// public: void c_game_engine_social_options::set(class c_game_engine_social_options const *);
// public: void c_game_engine_social_options::set_observers_enabled(bool);
// public: void c_game_engine_social_options::set_friendly_fire_enabled(bool);
// public: void c_game_engine_social_options::set_betrayal_booting_enabled(bool);
// public: bool c_game_engine_social_options::get_enemy_voice_enabled(void) const;
// public: void c_game_engine_social_options::set_enemy_voice_enabled(bool);
// public: bool c_game_engine_social_options::get_open_channel_voice_enabled(void) const;
// public: void c_game_engine_social_options::set_open_channel_voice_enabled(bool);
// public: bool c_game_engine_social_options::get_dead_player_voice_enabled(void) const;
// public: void c_game_engine_social_options::set_dead_player_voice_enabled(bool);
// public: void c_game_engine_social_options::set_team_changing_setting(enum e_team_changing_type);
// public: void c_game_engine_map_override_options::initialize(void);
// public: void c_game_engine_map_override_options::set(class c_game_engine_map_override_options const *);
// public: void c_game_engine_map_override_options::set_base_player_traits(class c_player_traits const *);
// public: class c_player_traits const * c_game_engine_map_override_options::get_red_powerup_traits(void) const;
// public: void c_game_engine_map_override_options::set_red_powerup_traits(class c_player_traits const *);
// public: class c_player_traits const * c_game_engine_map_override_options::get_blue_powerup_traits(void) const;
// public: void c_game_engine_map_override_options::set_blue_powerup_traits(class c_player_traits const *);
// public: class c_player_traits const * c_game_engine_map_override_options::get_yellow_powerup_traits(void) const;
// public: void c_game_engine_map_override_options::set_yellow_powerup_traits(class c_player_traits const *);
// public: unsigned char c_game_engine_map_override_options::get_red_powerup_duration_seconds(void) const;
// public: unsigned char c_game_engine_map_override_options::get_blue_powerup_duration_seconds(void) const;
// public: unsigned char c_game_engine_map_override_options::get_yellow_powerup_duration_seconds(void) const;
// public: void c_game_engine_map_override_options::encode(class c_bitstream *) const;
// public: void c_game_engine_map_override_options::decode(class c_bitstream *);
// public: class c_player_traits * c_game_engine_map_override_options::get_base_player_traits_writeable(void);
// public: class c_player_traits * c_game_engine_map_override_options::get_red_powerup_traits_writeable(void);
// public: class c_player_traits * c_game_engine_map_override_options::get_blue_powerup_traits_writeable(void);
// public: class c_player_traits * c_game_engine_map_override_options::get_yellow_powerup_traits_writeable(void);
// public: void c_game_engine_map_override_options::set_weapon_set_absolute_index(short);
// public: void c_game_engine_map_override_options::set_vehicle_set_absolute_index(short);
// public: void c_game_engine_map_override_options::set_red_powerup_duration_seconds(unsigned char);
// public: void c_game_engine_map_override_options::set_blue_powerup_duration_seconds(unsigned char);
// public: void c_game_engine_map_override_options::set_yellow_powerup_duration_seconds(unsigned char);
// public: void c_game_engine_team_options_team::initialize(long);
// public: void c_game_engine_team_options_team::set(class c_game_engine_team_options_team const *);
// public: void c_game_engine_team_options_team::encode(class c_bitstream *) const;
// public: void c_game_engine_team_options_team::decode(class c_bitstream *);
// public: void c_game_engine_team_options::initialize(void);
// public: void c_game_engine_team_options::set(class c_game_engine_team_options const *);
// public: void c_game_engine_team_options::encode(class c_bitstream *) const;
// public: void c_game_engine_team_options::decode(class c_bitstream *);
// public: virtual void c_game_engine_base_variant::initialize(void);
// public: virtual void c_game_engine_base_variant::validate(void);
// public: virtual void c_game_engine_base_variant::encode(class c_bitstream *) const;
// public: virtual void c_game_engine_base_variant::decode(class c_bitstream *);
// public: virtual bool c_game_engine_base_variant::lossy_compare(class c_game_engine_base_variant *);
// public: class c_game_engine_map_override_options * c_game_engine_base_variant::get_map_override_options_writeable(void);
// public: virtual long c_game_engine_base_variant::get_score_to_win_round(void) const;
// public: virtual void c_game_engine_base_variant::set_score_to_win_round(long);
// public: virtual bool c_game_engine_base_variant::can_be_cast_to(enum e_game_engine_type, void const **) const;
// public: virtual void c_game_engine_base_variant::custom_team_score_stats(enum e_multiplayer_team, long, long) const;
// public: void c_game_engine_base_variant::set(class c_game_engine_base_variant const *);
// public: void c_game_engine_base_variant::set_metadata(struct s_content_item_metadata const *);
// public: void c_game_engine_base_variant::set_name(wchar_t const *);
// public: void c_game_engine_base_variant::set_description(wchar_t const *);
// public: bool c_game_engine_base_variant::get_built_in(void) const;
// public: void c_game_engine_base_variant::set_built_in(bool);
// public: void c_game_engine_base_variant::set_team_scoring_method(enum e_team_scoring_method);
// public: virtual char c_game_engine_base_variant::get_betrayal_points(void) const;
// public: virtual bool c_game_engine_base_variant::scoreboard_should_show_player_rating(void) const;
// public: c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_game_engine_team_options_designator_switch_type);
// public: c_enum<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>(enum e_team_changing_type);
// public: static long s_static_array<class c_game_engine_team_options_team, 8>::get_count(void);
// public: c_enum<enum e_team_scoring_method, short, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_team_scoring_method, short, 0, 4, struct s_default_enum_string_resolver>(enum e_team_scoring_method);
// public: void c_flags_no_init<enum e_game_engine_miscellaneous_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_game_engine_miscellaneous_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_engine_miscellaneous_option_flags, bool);
// public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::initialize(void);
// public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::encode(class c_bitstream *) const;
// public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::decode(class c_bitstream *);
// public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::set_value(short);
// public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::initialize(void);
// public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::encode(class c_bitstream *) const;
// public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::decode(class c_bitstream *);
// public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::set_value(short);
// public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::set(enum e_map_override_option_flags, bool);
// public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_engine_team_options_team_flags, bool);
// public: void c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, bool);
// public: void c_flags_no_init<enum c_game_engine_social_options::e_game_engine_social_options_flags, short, 5, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum c_game_engine_social_options::e_game_engine_social_options_flags, short, 5, struct s_default_enum_string_resolver>::set(enum c_game_engine_social_options::e_game_engine_social_options_flags, bool);
// public: void c_string_table<1, 32>::initialize(void);
// public: void c_string_table<1, 32>::encode(class c_bitstream *) const;
// public: void c_string_table<1, 32>::decode(class c_bitstream *);
// public: bool c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_base_variant_flags) const;
// public: void c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_base_variant_flags, bool);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> >(char const *, class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> >(char const *, class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> *);
// public: class c_game_engine_team_options_team & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<long>(long);
// public: class c_game_engine_team_options_team const & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<long>(long) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: enum e_game_engine_team_options_designator_switch_type c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_game_engine_team_options_designator_switch_type(void) const;
// public: bool c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: void c_string_buffer<32>::initialize(void);
// public: void s_static_array<struct utf8, 32>::set_memory(long);
// public: char const * c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::get_name(void) const;
// public: static char const * s_game_engine_sudden_death_time_limit_metadata::get_name(void);
// public: bool c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::validate(void);
// public: void c_bitstream::write_valid_index<122, int>(char const *, int);
// public: long c_bitstream::read_valid_index<122>(char const *);
// public: char const * c_game_engine_option<struct s_game_engine_grace_period_metadata>::get_name(void) const;
// public: static char const * s_game_engine_grace_period_metadata::get_name(void);
// public: bool c_game_engine_option<struct s_game_engine_grace_period_metadata>::validate(void);
// public: void c_bitstream::write_valid_index<31, int>(char const *, int);
// public: long c_bitstream::read_valid_index<31>(char const *);
// public: unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::set_unsafe(unsigned char);
// public: unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: void c_string_table<1, 32>::clear(void);
// public: void c_string_buffer<32>::encode(class c_bitstream *) const;
// public: void c_string_buffer<32>::decode(class c_bitstream *);
// public: class s_static_array<short, 1> const & s_static_array<class s_static_array<short, 1>, 12>::operator[]<long>(long) const;
// public: class s_static_array<short, 1> & s_static_array<class s_static_array<short, 1>, 12>::operator[]<long>(long);
// public: short & s_static_array<short, 1>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_base_variant_flags);
// private: static unsigned short c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_base_variant_flags);
// public: static bool s_static_array<class c_game_engine_team_options_team, 8>::valid<long>(long);
// long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_game_engine_team_options_designator_switch_type c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static long s_static_array<class s_static_array<short, 1>, 12>::get_count(void);
// public: void s_static_array<short, 1>::set_all(short const &);
// public: void c_string_buffer<32>::clear(void);
// public: struct utf8const * s_static_array<struct utf8, 32>::get_elements(void) const;
// public: struct utf8* s_static_array<struct utf8, 32>::get_elements(void);
// public: bool c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool s_static_array<class s_static_array<short, 1>, 12>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::make_N_bit_mask_size_type(enum e_map_override_option_flags);
// private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_engine_team_options_team_flags);

//public: void c_game_engine_miscellaneous_options::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_miscellaneous_options@@QAAXXZ");
//};

//public: void c_game_engine_miscellaneous_options::set(class c_game_engine_miscellaneous_options const *)
//{
//    mangled_ppc("?set@c_game_engine_miscellaneous_options@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_miscellaneous_options::set(struct s_game_engine_miscellaneous_options_definition const *)
//{
//    mangled_ppc("?set@c_game_engine_miscellaneous_options@@QAAXPBUs_game_engine_miscellaneous_options_definition@@@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_teams_enabled(bool)
//{
//    mangled_ppc("?set_teams_enabled@c_game_engine_miscellaneous_options@@QAAX_N@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_perfection_enabled(bool)
//{
//    mangled_ppc("?set_perfection_enabled@c_game_engine_miscellaneous_options@@QAAX_N@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_round_reset_players(bool)
//{
//    mangled_ppc("?set_round_reset_players@c_game_engine_miscellaneous_options@@QAAX_N@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_round_reset_map(bool)
//{
//    mangled_ppc("?set_round_reset_map@c_game_engine_miscellaneous_options@@QAAX_N@Z");
//};

//public: void c_game_engine_miscellaneous_options::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_miscellaneous_options@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_game_engine_miscellaneous_options::get_round_reset_players(void) const
//{
//    mangled_ppc("?get_round_reset_players@c_game_engine_miscellaneous_options@@QBA_NXZ");
//};

//public: bool c_game_engine_miscellaneous_options::get_round_reset_map(void) const
//{
//    mangled_ppc("?get_round_reset_map@c_game_engine_miscellaneous_options@@QBA_NXZ");
//};

//public: void c_game_engine_miscellaneous_options::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_miscellaneous_options@@QAAXPAVc_bitstream@@@Z");
//};

//public: virtual bool c_game_engine_base_variant::can_add_to_recent_list(void) const
//{
//    mangled_ppc("?can_add_to_recent_list@c_game_engine_base_variant@@UBA_NXZ");
//};

//public: enum c_game_engine_miscellaneous_options::e_round_reset c_game_engine_miscellaneous_options::get_round_reset_setting(void) const
//{
//    mangled_ppc("?get_round_reset_setting@c_game_engine_miscellaneous_options@@QBA?AW4e_round_reset@1@XZ");
//};

//public: void c_game_engine_miscellaneous_options::set_round_reset_setting(enum c_game_engine_miscellaneous_options::e_round_reset)
//{
//    mangled_ppc("?set_round_reset_setting@c_game_engine_miscellaneous_options@@QAAXW4e_round_reset@1@@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_round_time_limit_minutes(unsigned char)
//{
//    mangled_ppc("?set_round_time_limit_minutes@c_game_engine_miscellaneous_options@@QAAXE@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_round_limit(unsigned char)
//{
//    mangled_ppc("?set_round_limit@c_game_engine_miscellaneous_options@@QAAXE@Z");
//};

//public: void c_game_engine_miscellaneous_options::set_early_victory_win_count(unsigned char)
//{
//    mangled_ppc("?set_early_victory_win_count@c_game_engine_miscellaneous_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_respawn_options@@QAAXXZ");
//};

//public: void c_game_engine_respawn_options::set(class c_game_engine_respawn_options const *)
//{
//    mangled_ppc("?set@c_game_engine_respawn_options@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_respawn_options::set_inherit_respawn_time_enabled(bool)
//{
//    mangled_ppc("?set_inherit_respawn_time_enabled@c_game_engine_respawn_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_respawn_options::get_respawn_with_teammate_enabled(void) const
//{
//    mangled_ppc("?get_respawn_with_teammate_enabled@c_game_engine_respawn_options@@QBA_NXZ");
//};

//public: void c_game_engine_respawn_options::set_respawn_with_teammate_enabled(bool)
//{
//    mangled_ppc("?set_respawn_with_teammate_enabled@c_game_engine_respawn_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_respawn_options::get_respawn_at_location_enabled(void) const
//{
//    mangled_ppc("?get_respawn_at_location_enabled@c_game_engine_respawn_options@@QBA_NXZ");
//};

//public: void c_game_engine_respawn_options::set_respawn_at_location_enabled(bool)
//{
//    mangled_ppc("?set_respawn_at_location_enabled@c_game_engine_respawn_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_respawn_options::get_respawn_on_kills_enabled(void) const
//{
//    mangled_ppc("?get_respawn_on_kills_enabled@c_game_engine_respawn_options@@QBA_NXZ");
//};

//public: void c_game_engine_respawn_options::set_respawn_on_kills_enabled(bool)
//{
//    mangled_ppc("?set_respawn_on_kills_enabled@c_game_engine_respawn_options@@QAAX_N@Z");
//};

//public: class c_player_traits const * c_game_engine_respawn_options::get_respawn_player_traits(void) const
//{
//    mangled_ppc("?get_respawn_player_traits@c_game_engine_respawn_options@@QBAPBVc_player_traits@@XZ");
//};

//public: void c_game_engine_respawn_options::set_respawn_player_traits(class c_player_traits const *)
//{
//    mangled_ppc("?set_respawn_player_traits@c_game_engine_respawn_options@@QAAXPBVc_player_traits@@@Z");
//};

//public: void c_game_engine_respawn_options::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_respawn_options@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_respawn_options::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_respawn_options@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_respawn_options::set_lives_per_round(unsigned char)
//{
//    mangled_ppc("?set_lives_per_round@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_team_lives_per_round(unsigned char)
//{
//    mangled_ppc("?set_team_lives_per_round@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_respawn_time_seconds(unsigned char)
//{
//    mangled_ppc("?set_respawn_time_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_suicide_penalty_seconds(unsigned char)
//{
//    mangled_ppc("?set_suicide_penalty_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_betrayal_penalty_seconds(unsigned char)
//{
//    mangled_ppc("?set_betrayal_penalty_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_respawn_growth_seconds(unsigned char)
//{
//    mangled_ppc("?set_respawn_growth_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_initial_loadout_selection_time_seconds(unsigned char)
//{
//    mangled_ppc("?set_initial_loadout_selection_time_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_respawn_options::set_respawn_player_traits_duration_seconds(unsigned char)
//{
//    mangled_ppc("?set_respawn_player_traits_duration_seconds@c_game_engine_respawn_options@@QAAXE@Z");
//};

//public: void c_game_engine_social_options::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_social_options@@QAAXXZ");
//};

//public: void c_game_engine_social_options::set(class c_game_engine_social_options const *)
//{
//    mangled_ppc("?set@c_game_engine_social_options@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_social_options::set_observers_enabled(bool)
//{
//    mangled_ppc("?set_observers_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: void c_game_engine_social_options::set_friendly_fire_enabled(bool)
//{
//    mangled_ppc("?set_friendly_fire_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: void c_game_engine_social_options::set_betrayal_booting_enabled(bool)
//{
//    mangled_ppc("?set_betrayal_booting_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_social_options::get_enemy_voice_enabled(void) const
//{
//    mangled_ppc("?get_enemy_voice_enabled@c_game_engine_social_options@@QBA_NXZ");
//};

//public: void c_game_engine_social_options::set_enemy_voice_enabled(bool)
//{
//    mangled_ppc("?set_enemy_voice_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_social_options::get_open_channel_voice_enabled(void) const
//{
//    mangled_ppc("?get_open_channel_voice_enabled@c_game_engine_social_options@@QBA_NXZ");
//};

//public: void c_game_engine_social_options::set_open_channel_voice_enabled(bool)
//{
//    mangled_ppc("?set_open_channel_voice_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: bool c_game_engine_social_options::get_dead_player_voice_enabled(void) const
//{
//    mangled_ppc("?get_dead_player_voice_enabled@c_game_engine_social_options@@QBA_NXZ");
//};

//public: void c_game_engine_social_options::set_dead_player_voice_enabled(bool)
//{
//    mangled_ppc("?set_dead_player_voice_enabled@c_game_engine_social_options@@QAAX_N@Z");
//};

//public: void c_game_engine_social_options::set_team_changing_setting(enum e_team_changing_type)
//{
//    mangled_ppc("?set_team_changing_setting@c_game_engine_social_options@@QAAXW4e_team_changing_type@@@Z");
//};

//public: void c_game_engine_map_override_options::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_map_override_options@@QAAXXZ");
//};

//public: void c_game_engine_map_override_options::set(class c_game_engine_map_override_options const *)
//{
//    mangled_ppc("?set@c_game_engine_map_override_options@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_map_override_options::set_base_player_traits(class c_player_traits const *)
//{
//    mangled_ppc("?set_base_player_traits@c_game_engine_map_override_options@@QAAXPBVc_player_traits@@@Z");
//};

//public: class c_player_traits const * c_game_engine_map_override_options::get_red_powerup_traits(void) const
//{
//    mangled_ppc("?get_red_powerup_traits@c_game_engine_map_override_options@@QBAPBVc_player_traits@@XZ");
//};

//public: void c_game_engine_map_override_options::set_red_powerup_traits(class c_player_traits const *)
//{
//    mangled_ppc("?set_red_powerup_traits@c_game_engine_map_override_options@@QAAXPBVc_player_traits@@@Z");
//};

//public: class c_player_traits const * c_game_engine_map_override_options::get_blue_powerup_traits(void) const
//{
//    mangled_ppc("?get_blue_powerup_traits@c_game_engine_map_override_options@@QBAPBVc_player_traits@@XZ");
//};

//public: void c_game_engine_map_override_options::set_blue_powerup_traits(class c_player_traits const *)
//{
//    mangled_ppc("?set_blue_powerup_traits@c_game_engine_map_override_options@@QAAXPBVc_player_traits@@@Z");
//};

//public: class c_player_traits const * c_game_engine_map_override_options::get_yellow_powerup_traits(void) const
//{
//    mangled_ppc("?get_yellow_powerup_traits@c_game_engine_map_override_options@@QBAPBVc_player_traits@@XZ");
//};

//public: void c_game_engine_map_override_options::set_yellow_powerup_traits(class c_player_traits const *)
//{
//    mangled_ppc("?set_yellow_powerup_traits@c_game_engine_map_override_options@@QAAXPBVc_player_traits@@@Z");
//};

//public: unsigned char c_game_engine_map_override_options::get_red_powerup_duration_seconds(void) const
//{
//    mangled_ppc("?get_red_powerup_duration_seconds@c_game_engine_map_override_options@@QBAEXZ");
//};

//public: unsigned char c_game_engine_map_override_options::get_blue_powerup_duration_seconds(void) const
//{
//    mangled_ppc("?get_blue_powerup_duration_seconds@c_game_engine_map_override_options@@QBAEXZ");
//};

//public: unsigned char c_game_engine_map_override_options::get_yellow_powerup_duration_seconds(void) const
//{
//    mangled_ppc("?get_yellow_powerup_duration_seconds@c_game_engine_map_override_options@@QBAEXZ");
//};

//public: void c_game_engine_map_override_options::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_map_override_options@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_map_override_options::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_map_override_options@@QAAXPAVc_bitstream@@@Z");
//};

//public: class c_player_traits * c_game_engine_map_override_options::get_base_player_traits_writeable(void)
//{
//    mangled_ppc("?get_base_player_traits_writeable@c_game_engine_map_override_options@@QAAPAVc_player_traits@@XZ");
//};

//public: class c_player_traits * c_game_engine_map_override_options::get_red_powerup_traits_writeable(void)
//{
//    mangled_ppc("?get_red_powerup_traits_writeable@c_game_engine_map_override_options@@QAAPAVc_player_traits@@XZ");
//};

//public: class c_player_traits * c_game_engine_map_override_options::get_blue_powerup_traits_writeable(void)
//{
//    mangled_ppc("?get_blue_powerup_traits_writeable@c_game_engine_map_override_options@@QAAPAVc_player_traits@@XZ");
//};

//public: class c_player_traits * c_game_engine_map_override_options::get_yellow_powerup_traits_writeable(void)
//{
//    mangled_ppc("?get_yellow_powerup_traits_writeable@c_game_engine_map_override_options@@QAAPAVc_player_traits@@XZ");
//};

//public: void c_game_engine_map_override_options::set_weapon_set_absolute_index(short)
//{
//    mangled_ppc("?set_weapon_set_absolute_index@c_game_engine_map_override_options@@QAAXF@Z");
//};

//public: void c_game_engine_map_override_options::set_vehicle_set_absolute_index(short)
//{
//    mangled_ppc("?set_vehicle_set_absolute_index@c_game_engine_map_override_options@@QAAXF@Z");
//};

//public: void c_game_engine_map_override_options::set_red_powerup_duration_seconds(unsigned char)
//{
//    mangled_ppc("?set_red_powerup_duration_seconds@c_game_engine_map_override_options@@QAAXE@Z");
//};

//public: void c_game_engine_map_override_options::set_blue_powerup_duration_seconds(unsigned char)
//{
//    mangled_ppc("?set_blue_powerup_duration_seconds@c_game_engine_map_override_options@@QAAXE@Z");
//};

//public: void c_game_engine_map_override_options::set_yellow_powerup_duration_seconds(unsigned char)
//{
//    mangled_ppc("?set_yellow_powerup_duration_seconds@c_game_engine_map_override_options@@QAAXE@Z");
//};

//public: void c_game_engine_team_options_team::initialize(long)
//{
//    mangled_ppc("?initialize@c_game_engine_team_options_team@@QAAXJ@Z");
//};

//public: void c_game_engine_team_options_team::set(class c_game_engine_team_options_team const *)
//{
//    mangled_ppc("?set@c_game_engine_team_options_team@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_team_options_team::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_team_options_team@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_team_options_team::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_team_options_team@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_team_options::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_team_options@@QAAXXZ");
//};

//public: void c_game_engine_team_options::set(class c_game_engine_team_options const *)
//{
//    mangled_ppc("?set@c_game_engine_team_options@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_team_options::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_team_options@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_team_options::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_team_options@@QAAXPAVc_bitstream@@@Z");
//};

//public: virtual void c_game_engine_base_variant::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_engine_base_variant@@UAAXXZ");
//};

//public: virtual void c_game_engine_base_variant::validate(void)
//{
//    mangled_ppc("?validate@c_game_engine_base_variant@@UAAXXZ");
//};

//public: virtual void c_game_engine_base_variant::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_game_engine_base_variant@@UBAXPAVc_bitstream@@@Z");
//};

//public: virtual void c_game_engine_base_variant::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_game_engine_base_variant@@UAAXPAVc_bitstream@@@Z");
//};

//public: virtual bool c_game_engine_base_variant::lossy_compare(class c_game_engine_base_variant *)
//{
//    mangled_ppc("?lossy_compare@c_game_engine_base_variant@@UAA_NPAV1@@Z");
//};

//public: class c_game_engine_map_override_options * c_game_engine_base_variant::get_map_override_options_writeable(void)
//{
//    mangled_ppc("?get_map_override_options_writeable@c_game_engine_base_variant@@QAAPAVc_game_engine_map_override_options@@XZ");
//};

//public: virtual long c_game_engine_base_variant::get_score_to_win_round(void) const
//{
//    mangled_ppc("?get_score_to_win_round@c_game_engine_base_variant@@UBAJXZ");
//};

//public: virtual void c_game_engine_base_variant::set_score_to_win_round(long)
//{
//    mangled_ppc("?set_score_to_win_round@c_game_engine_base_variant@@UAAXJ@Z");
//};

//public: virtual bool c_game_engine_base_variant::can_be_cast_to(enum e_game_engine_type, void const **) const
//{
//    mangled_ppc("?can_be_cast_to@c_game_engine_base_variant@@UBA_NW4e_game_engine_type@@PAPBX@Z");
//};

//public: virtual void c_game_engine_base_variant::custom_team_score_stats(enum e_multiplayer_team, long, long) const
//{
//    mangled_ppc("?custom_team_score_stats@c_game_engine_base_variant@@UBAXW4e_multiplayer_team@@JJ@Z");
//};

//public: void c_game_engine_base_variant::set(class c_game_engine_base_variant const *)
//{
//    mangled_ppc("?set@c_game_engine_base_variant@@QAAXPBV1@@Z");
//};

//public: void c_game_engine_base_variant::set_metadata(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?set_metadata@c_game_engine_base_variant@@QAAXPBUs_content_item_metadata@@@Z");
//};

//public: void c_game_engine_base_variant::set_name(wchar_t const *)
//{
//    mangled_ppc("?set_name@c_game_engine_base_variant@@QAAXPB_W@Z");
//};

//public: void c_game_engine_base_variant::set_description(wchar_t const *)
//{
//    mangled_ppc("?set_description@c_game_engine_base_variant@@QAAXPB_W@Z");
//};

//public: bool c_game_engine_base_variant::get_built_in(void) const
//{
//    mangled_ppc("?get_built_in@c_game_engine_base_variant@@QBA_NXZ");
//};

//public: void c_game_engine_base_variant::set_built_in(bool)
//{
//    mangled_ppc("?set_built_in@c_game_engine_base_variant@@QAAX_N@Z");
//};

//public: void c_game_engine_base_variant::set_team_scoring_method(enum e_team_scoring_method)
//{
//    mangled_ppc("?set_team_scoring_method@c_game_engine_base_variant@@QAAXW4e_team_scoring_method@@@Z");
//};

//public: virtual char c_game_engine_base_variant::get_betrayal_points(void) const
//{
//    mangled_ppc("?get_betrayal_points@c_game_engine_base_variant@@UBADXZ");
//};

//public: virtual bool c_game_engine_base_variant::scoreboard_should_show_player_rating(void) const
//{
//    mangled_ppc("?scoreboard_should_show_player_rating@c_game_engine_base_variant@@UBA_NXZ");
//};

//public: c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_game_engine_team_options_designator_switch_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_game_engine_team_options_designator_switch_type@@@Z");
//};

//public: c_enum<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_team_changing_type, short, 0, 3, struct s_default_enum_string_resolver>(enum e_team_changing_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_team_changing_type@@F$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_team_changing_type@@@Z");
//};

//public: static long s_static_array<class c_game_engine_team_options_team, 8>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_game_engine_team_options_team@@$07@@SAJXZ");
//};

//public: c_enum<enum e_team_scoring_method, short, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_team_scoring_method, short, 0, 4, struct s_default_enum_string_resolver>(enum e_team_scoring_method)
//{
//    mangled_ppc("??0?$c_enum@W4e_team_scoring_method@@F$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_team_scoring_method@@@Z");
//};

//public: void c_flags_no_init<enum e_game_engine_miscellaneous_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_engine_miscellaneous_option_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_game_engine_miscellaneous_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_engine_miscellaneous_option_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_engine_miscellaneous_option_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_game_engine_miscellaneous_option_flags@@_N@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QAAXXZ");
//};

//public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::set_value(short)
//{
//    mangled_ppc("?set_value@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QAAXF@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QAAXXZ");
//};

//public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_game_engine_option<struct s_game_engine_grace_period_metadata>::set_value(short)
//{
//    mangled_ppc("?set_value@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QAAXF@Z");
//};

//public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::set(enum e_map_override_option_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@QAAXW4e_map_override_option_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_engine_team_options_team_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_game_engine_team_options_team_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum c_game_engine_respawn_options::e_game_engine_respawn_option_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_game_engine_respawn_option_flags@c_game_engine_respawn_options@@_N@Z");
//};

//public: void c_flags_no_init<enum c_game_engine_social_options::e_game_engine_social_options_flags, short, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_engine_social_options_flags@c_game_engine_social_options@@F$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum c_game_engine_social_options::e_game_engine_social_options_flags, short, 5, struct s_default_enum_string_resolver>::set(enum c_game_engine_social_options::e_game_engine_social_options_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_engine_social_options_flags@c_game_engine_social_options@@F$04Us_default_enum_string_resolver@@@@QAAXW4e_game_engine_social_options_flags@c_game_engine_social_options@@_N@Z");
//};

//public: void c_string_table<1, 32>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_string_table@$00$0CA@@@QAAXXZ");
//};

//public: void c_string_table<1, 32>::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@?$c_string_table@$00$0CA@@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_string_table<1, 32>::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@?$c_string_table@$00$0CA@@@QAAXPAVc_bitstream@@@Z");
//};

//public: bool c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_base_variant_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_base_variant_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_base_variant_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_base_variant_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_base_variant_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_base_variant_flags@@_N@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> >(char const *, class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> >(char const *, class c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_game_engine_team_options_team & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_game_engine_team_options_team@@$07@@QAAAAVc_game_engine_team_options_team@@J@Z");
//};

//public: class c_game_engine_team_options_team const & s_static_array<class c_game_engine_team_options_team, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_game_engine_team_options_team@@$07@@QBAABVc_game_engine_team_options_team@@J@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_game_engine_team_options_designator_switch_type c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_game_engine_team_options_designator_switch_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_game_engine_team_options_designator_switch_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: void c_string_buffer<32>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_string_buffer@$0CA@@@QAAXXZ");
//};

//public: void s_static_array<struct utf8, 32>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Uutf8@@$0CA@@@QAAXJ@Z");
//};

//public: char const * c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::get_name(void) const
//{
//    mangled_ppc("?get_name@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QBAPBDXZ");
//};

//public: static char const * s_game_engine_sudden_death_time_limit_metadata::get_name(void)
//{
//    mangled_ppc("?get_name@s_game_engine_sudden_death_time_limit_metadata@@SAPBDXZ");
//};

//public: bool c_game_engine_option<struct s_game_engine_sudden_death_time_limit_metadata>::validate(void)
//{
//    mangled_ppc("?validate@?$c_game_engine_option@Us_game_engine_sudden_death_time_limit_metadata@@@@QAA_NXZ");
//};

//public: void c_bitstream::write_valid_index<122, int>(char const *, int)
//{
//    mangled_ppc("??$write_valid_index@$0HK@H@c_bitstream@@QAAXPBDH@Z");
//};

//public: long c_bitstream::read_valid_index<122>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0HK@@c_bitstream@@QAAJPBD@Z");
//};

//public: char const * c_game_engine_option<struct s_game_engine_grace_period_metadata>::get_name(void) const
//{
//    mangled_ppc("?get_name@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QBAPBDXZ");
//};

//public: static char const * s_game_engine_grace_period_metadata::get_name(void)
//{
//    mangled_ppc("?get_name@s_game_engine_grace_period_metadata@@SAPBDXZ");
//};

//public: bool c_game_engine_option<struct s_game_engine_grace_period_metadata>::validate(void)
//{
//    mangled_ppc("?validate@?$c_game_engine_option@Us_game_engine_grace_period_metadata@@@@QAA_NXZ");
//};

//public: void c_bitstream::write_valid_index<31, int>(char const *, int)
//{
//    mangled_ppc("??$write_valid_index@$0BP@H@c_bitstream@@QAAXPBDH@Z");
//};

//public: long c_bitstream::read_valid_index<31>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0BP@@c_bitstream@@QAAJPBD@Z");
//};

//public: unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: void c_string_table<1, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_string_table@$00$0CA@@@QAAXXZ");
//};

//public: void c_string_buffer<32>::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@?$c_string_buffer@$0CA@@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_string_buffer<32>::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@?$c_string_buffer@$0CA@@@QAAXPAVc_bitstream@@@Z");
//};

//public: class s_static_array<short, 1> const & s_static_array<class s_static_array<short, 1>, 12>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@F$00@@$0M@@@QBAABV?$s_static_array@F$00@@J@Z");
//};

//public: class s_static_array<short, 1> & s_static_array<class s_static_array<short, 1>, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$s_static_array@F$00@@$0M@@@QAAAAV?$s_static_array@F$00@@J@Z");
//};

//public: short & s_static_array<short, 1>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@F$00@@QAAAAFJ@Z");
//};

//public: static bool c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_base_variant_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_base_variant_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_base_variant_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_base_variant_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_base_variant_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_base_variant_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_base_variant_flags@@@Z");
//};

//public: static bool s_static_array<class c_game_engine_team_options_team, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_game_engine_team_options_team@@$07@@SA_NJ@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_game_engine_team_options_designator_switch_type c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_game_engine_team_options_designator_switch_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static long s_static_array<class s_static_array<short, 1>, 12>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$s_static_array@F$00@@$0M@@@SAJXZ");
//};

//public: void s_static_array<short, 1>::set_all(short const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@F$00@@QAAXABF@Z");
//};

//public: void c_string_buffer<32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_string_buffer@$0CA@@@QAAXXZ");
//};

//public: struct utf8const * s_static_array<struct utf8, 32>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Uutf8@@$0CA@@@QBAPBUutf8@@XZ");
//};

//public: struct utf8* s_static_array<struct utf8, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Uutf8@@$0CA@@@QAAPAUutf8@@XZ");
//};

//public: bool c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<class s_static_array<short, 1>, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$s_static_array@F$00@@$0M@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_map_override_option_flags, unsigned char, 6, struct s_map_override_option_string_resolver>::make_N_bit_mask_size_type(enum e_map_override_option_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_map_override_option_flags@@E$05Us_map_override_option_string_resolver@@@@CAEW4e_map_override_option_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_engine_team_options_team_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_engine_team_options_team_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_engine_team_options_team_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_game_engine_team_options_team_flags@@@Z");
//};

