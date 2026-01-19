/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_network_session_class const c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@2W4e_network_session_class@@B"
// public: static int const c_enum_no_init<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_saved_film_category const c_enum_no_init<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@2W4e_saved_film_category@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_networking_squad_session_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_networking_squad_session_reader_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_networking_squad_session_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_networking_squad_session_reader_component@@@@0Vc_cui_object_property_table@@A"

// public: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(void);
// merged_84B0BB60;
// public: virtual c_networking_squad_session_reader_component::~c_networking_squad_session_reader_component(void);
// protected: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// public: class c_cui_string_id c_networking_squad_session_reader_component::get_campaign_difficulty_level_string(void) const;
// public: class c_cui_string_id c_networking_squad_session_reader_component::get_campaign_metagame_scoring_string(void) const;
// public: wchar_t const * c_networking_squad_session_reader_component::get_leader_player_name(void) const;
// public: bool c_networking_squad_session_reader_component::get_game_start_warning_name(class c_cui_string_id *) const;
// public: bool c_networking_squad_session_reader_component::get_game_start_error_name(class c_cui_string_id *) const;
// protected: virtual void c_networking_squad_session_reader_component::do_update(class c_cui_update_context *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_countdown(void) const;
// public: bool c_networking_squad_session_reader_component::is_game_start_status_error(void) const;
// long get_game_start_warning_name(enum e_session_game_start_warning);
// long get_game_start_error_name(enum e_session_game_start_error);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_squad_session_reader_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_networking_squad_session_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_networking_squad_session_reader_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_mode(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_advertisement_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_advertisement_mode(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_system_link::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_advertisement_mode_system_link(void) const;
// public: bool c_enum_no_init<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_gui_network_session_advertisement_mode) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_friends_only::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_friends_only(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_invite_only::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_invite_only(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_public::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_public(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_campaign_difficulty_level(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_difficulty_level_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_campaign_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_campaign_id(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@F$1?get_campaign_insertion_point@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: short c_networking_squad_session_reader_component::get_campaign_insertion_point(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_campaign_map_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_campaign_map_name(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_campaign_metagame_scoring@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_campaign_metagame_scoring(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_metagame_scoring_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_skull_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_game_skull_count(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@$1?get_game_skulls@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_skulls(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@$1?get_class@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_class(void) const;
// public: c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>(enum e_network_session_class);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_offline::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_class_offline(void) const;
// public: bool c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_class) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_system_link::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_class_system_link(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_xbox_live::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_class_xbox_live(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_closed::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_closed(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_firefight_map_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_firefight_map_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_countdown_delayed::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_countdown_delayed(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, wchar_t const *, bool & (c_networking_squad_session_reader_component::get_game_start_countdown_delaying_player_name::*)(wchar_t const **)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::get_game_start_countdown_delaying_player_name(wchar_t const **) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, long, bool & (c_networking_squad_session_reader_component::get_game_start_countdown_timer_total_seconds::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::get_game_start_countdown_timer_total_seconds(long *) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, class c_cui_string_id, bool & (c_networking_squad_session_reader_component::get_game_start_warning_name::*)(class c_cui_string_id *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, class c_cui_string_id, bool & (c_networking_squad_session_reader_component::get_game_start_error_name::*)(class c_cui_string_id *)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@$1?get_game_start_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_start_status(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_countdown::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_error::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_join_in_progress(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_loading::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_loading(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_not_leader::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_not_leader(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_not_pregame::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_not_pregame(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_ready::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_start_status_ready(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: unsigned short c_networking_squad_session_reader_component::get_hopper_id(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_in_or_after_game_start_countdown::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_in_or_after_game_start_countdown(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_leader_player_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_local_peer_leader::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_local_peer_leader(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_local_peer_follower::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_local_peer_follower(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_map_id::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_map_id(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_max_player_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_max_player_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_multiplayer_map_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_multiplayer_map_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_open::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_open(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_player_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_player_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_machine_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_machine_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_precaching_progress::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_precaching_progress(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_privacy@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_privacy(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_friends_only::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_privacy_friends_only(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_invite_only::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_privacy_invite_only(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_open::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_privacy_open(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::get_game_variant_has_teams::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::get_game_variant_has_teams(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_variant_max_team_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_game_variant_max_team_count(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_game_variant_model_override_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_variant_model_override_type(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_variant_designator_switch_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_variant_designator_switch_type(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_variant_available_team_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_game_variant_available_team_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_map::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_map(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_variant::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_variant(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_saved_film_length::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_networking_squad_session_reader_component::get_saved_film_length(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@$1?get_saved_film_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_saved_film_category(void) const;
// public: c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>(enum e_saved_film_category);
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_saved_film_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_saved_film_difficulty_level(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_variant_valid::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_networking_squad_session_reader_component::is_game_variant_valid(void) const;
// bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_game_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_networking_squad_session_reader_component::get_game_variant_name(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@D$1?get_game_engine_icon_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: char c_networking_squad_session_reader_component::get_game_engine_icon_index(void) const;
// public: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(class c_networking_squad_session_reader_component const &);
// void cui_property_value_set<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver> const &);
// public: enum e_network_session_class c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::operator enum e_network_session_class(void) const;
// public: enum e_saved_film_category c_enum_no_init<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::operator enum e_saved_film_category(void) const;
// void g_game_start_status_enum_table::`dynamic atexit destructor'(void);
// void g_game_start_warning_name_enum_table::`dynamic atexit destructor'(void);
// void g_game_start_error_name_enum_table::`dynamic atexit destructor'(void);

//public: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(void)
//{
//    mangled_ppc("??0c_networking_squad_session_reader_component@@QAA@XZ");
//};

//merged_84B0BB60
//{
//    mangled_ppc("merged_84B0BB60");
//};

//public: virtual c_networking_squad_session_reader_component::~c_networking_squad_session_reader_component(void)
//{
//    mangled_ppc("??1c_networking_squad_session_reader_component@@UAA@XZ");
//};

//protected: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_networking_squad_session_reader_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//public: class c_cui_string_id c_networking_squad_session_reader_component::get_campaign_difficulty_level_string(void) const
//{
//    mangled_ppc("?get_campaign_difficulty_level_string@c_networking_squad_session_reader_component@@QBA?AVc_cui_string_id@@XZ");
//};

//public: class c_cui_string_id c_networking_squad_session_reader_component::get_campaign_metagame_scoring_string(void) const
//{
//    mangled_ppc("?get_campaign_metagame_scoring_string@c_networking_squad_session_reader_component@@QBA?AVc_cui_string_id@@XZ");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_leader_player_name(void) const
//{
//    mangled_ppc("?get_leader_player_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//public: bool c_networking_squad_session_reader_component::get_game_start_warning_name(class c_cui_string_id *) const
//{
//    mangled_ppc("?get_game_start_warning_name@c_networking_squad_session_reader_component@@QBA_NPAVc_cui_string_id@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::get_game_start_error_name(class c_cui_string_id *) const
//{
//    mangled_ppc("?get_game_start_error_name@c_networking_squad_session_reader_component@@QBA_NPAVc_cui_string_id@@@Z");
//};

//protected: virtual void c_networking_squad_session_reader_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_networking_squad_session_reader_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_countdown(void) const
//{
//    mangled_ppc("?is_game_start_status_countdown@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_error(void) const
//{
//    mangled_ppc("?is_game_start_status_error@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//long get_game_start_warning_name(enum e_session_game_start_warning)
//{
//    mangled_ppc("?get_game_start_warning_name@@YAJW4e_session_game_start_warning@@@Z");
//};

//long get_game_start_error_name(enum e_session_game_start_error)
//{
//    mangled_ppc("?get_game_start_error_name@@YAJW4e_session_game_start_error@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_networking_squad_session_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_networking_squad_session_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_networking_squad_session_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_networking_squad_session_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_networking_squad_session_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_networking_squad_session_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_mode(void) const
//{
//    mangled_ppc("?get_game_mode@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_advertisement_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_advertisement_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_advertisement_mode(void) const
//{
//    mangled_ppc("?get_advertisement_mode@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_system_link::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_advertisement_mode_system_link@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_advertisement_mode_system_link(void) const
//{
//    mangled_ppc("?is_advertisement_mode_system_link@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_gui_network_session_advertisement_mode, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_gui_network_session_advertisement_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_gui_network_session_advertisement_mode@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_gui_network_session_advertisement_mode@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_friends_only::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_advertisement_mode_xbox_live_friends_only@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_friends_only(void) const
//{
//    mangled_ppc("?is_advertisement_mode_xbox_live_friends_only@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_invite_only::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_advertisement_mode_xbox_live_invite_only@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_invite_only(void) const
//{
//    mangled_ppc("?is_advertisement_mode_xbox_live_invite_only@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_public::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_advertisement_mode_xbox_live_public@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_advertisement_mode_xbox_live_public(void) const
//{
//    mangled_ppc("?is_advertisement_mode_xbox_live_public@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_campaign_difficulty_level(void) const
//{
//    mangled_ppc("?get_campaign_difficulty_level@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_difficulty_level_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_difficulty_level_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_campaign_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_campaign_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_campaign_id(void) const
//{
//    mangled_ppc("?get_campaign_id@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@F$1?get_campaign_insertion_point@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@F$1?get_campaign_insertion_point@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: short c_networking_squad_session_reader_component::get_campaign_insertion_point(void) const
//{
//    mangled_ppc("?get_campaign_insertion_point@c_networking_squad_session_reader_component@@QBAFXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_campaign_map_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_campaign_map_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_campaign_map_name(void) const
//{
//    mangled_ppc("?get_campaign_map_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_campaign_metagame_scoring@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_campaign_metagame_scoring@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_metagame_scoring, char, 0, 3, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_campaign_metagame_scoring(void) const
//{
//    mangled_ppc("?get_campaign_metagame_scoring@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_campaign_metagame_scoring@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_metagame_scoring_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_campaign_metagame_scoring_string@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_skull_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_game_skull_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_game_skull_count(void) const
//{
//    mangled_ppc("?get_game_skull_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@$1?get_game_skulls@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@$1?get_game_skulls@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_skulls(void) const
//{
//    mangled_ppc("?get_game_skulls@c_networking_squad_session_reader_component@@QBA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@$1?get_class@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@$1?get_class@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_class(void) const
//{
//    mangled_ppc("?get_class@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>(enum e_network_session_class)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@QAA@W4e_network_session_class@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_offline::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_class_offline@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_class_offline(void) const
//{
//    mangled_ppc("?is_class_offline@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_class) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_class@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_system_link::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_class_system_link@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_class_system_link(void) const
//{
//    mangled_ppc("?is_class_system_link@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_class_xbox_live::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_class_xbox_live@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_class_xbox_live(void) const
//{
//    mangled_ppc("?is_class_xbox_live@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_closed::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_closed@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_closed(void) const
//{
//    mangled_ppc("?is_closed@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_firefight_map_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_firefight_map_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_firefight_map_name(void) const
//{
//    mangled_ppc("?get_firefight_map_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_countdown_delayed::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_countdown_delayed@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_countdown_delayed(void) const
//{
//    mangled_ppc("?is_game_start_countdown_delayed@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, wchar_t const *, bool & (c_networking_squad_session_reader_component::get_game_start_countdown_delaying_player_name::*)(wchar_t const **)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_squad_session_reader_component@@PB_W$1?get_game_start_countdown_delaying_player_name@1@QBA_NPAPB_W@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::get_game_start_countdown_delaying_player_name(wchar_t const **) const
//{
//    mangled_ppc("?get_game_start_countdown_delaying_player_name@c_networking_squad_session_reader_component@@QBA_NPAPB_W@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, long, bool & (c_networking_squad_session_reader_component::get_game_start_countdown_timer_total_seconds::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_squad_session_reader_component@@J$1?get_game_start_countdown_timer_total_seconds@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::get_game_start_countdown_timer_total_seconds(long *) const
//{
//    mangled_ppc("?get_game_start_countdown_timer_total_seconds@c_networking_squad_session_reader_component@@QBA_NPAJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, class c_cui_string_id, bool & (c_networking_squad_session_reader_component::get_game_start_warning_name::*)(class c_cui_string_id *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_game_start_warning_name@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_networking_squad_session_reader_component, class c_cui_string_id, bool & (c_networking_squad_session_reader_component::get_game_start_error_name::*)(class c_cui_string_id *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_networking_squad_session_reader_component@@Vc_cui_string_id@@$1?get_game_start_error_name@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@$1?get_game_start_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@$1?get_game_start_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_start_status(void) const
//{
//    mangled_ppc("?get_game_start_status@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_countdown::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_countdown@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_error::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_error@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_join_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_join_in_progress@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_join_in_progress(void) const
//{
//    mangled_ppc("?is_game_start_status_join_in_progress@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_loading::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_loading@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_loading(void) const
//{
//    mangled_ppc("?is_game_start_status_loading@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_not_leader::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_not_leader@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_not_leader(void) const
//{
//    mangled_ppc("?is_game_start_status_not_leader@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_not_pregame::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_not_pregame@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_not_pregame(void) const
//{
//    mangled_ppc("?is_game_start_status_not_pregame@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_start_status_ready::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_start_status_ready@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_start_status_ready(void) const
//{
//    mangled_ppc("?is_game_start_status_ready@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned short c_networking_squad_session_reader_component::get_hopper_id(void) const
//{
//    mangled_ppc("?get_hopper_id@c_networking_squad_session_reader_component@@QBAGXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_in_or_after_game_start_countdown::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_in_or_after_game_start_countdown@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_in_or_after_game_start_countdown(void) const
//{
//    mangled_ppc("?is_in_or_after_game_start_countdown@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_leader_player_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_leader_player_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_local_peer_leader::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_local_peer_leader@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_local_peer_leader(void) const
//{
//    mangled_ppc("?is_local_peer_leader@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_local_peer_follower::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_local_peer_follower@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_local_peer_follower(void) const
//{
//    mangled_ppc("?is_local_peer_follower@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_map_id::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_map_id@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_map_id(void) const
//{
//    mangled_ppc("?get_map_id@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_max_player_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_max_player_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_max_player_count(void) const
//{
//    mangled_ppc("?get_max_player_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_multiplayer_map_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_multiplayer_map_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_multiplayer_map_name(void) const
//{
//    mangled_ppc("?get_multiplayer_map_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_open::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_open@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_open(void) const
//{
//    mangled_ppc("?is_open@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_player_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_player_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_machine_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_machine_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_machine_count(void) const
//{
//    mangled_ppc("?get_machine_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_precaching_progress::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_precaching_progress@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_precaching_progress(void) const
//{
//    mangled_ppc("?get_precaching_progress@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_privacy@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_privacy@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_privacy(void) const
//{
//    mangled_ppc("?get_privacy@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_friends_only::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_privacy_friends_only@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_privacy_friends_only(void) const
//{
//    mangled_ppc("?is_privacy_friends_only@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_invite_only::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_privacy_invite_only@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_privacy_invite_only(void) const
//{
//    mangled_ppc("?is_privacy_invite_only@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_privacy_open::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_privacy_open@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_privacy_open(void) const
//{
//    mangled_ppc("?is_privacy_open@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::get_game_variant_has_teams::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?get_game_variant_has_teams@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::get_game_variant_has_teams(void) const
//{
//    mangled_ppc("?get_game_variant_has_teams@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_variant_max_team_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_game_variant_max_team_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_game_variant_max_team_count(void) const
//{
//    mangled_ppc("?get_game_variant_max_team_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_game_variant_model_override_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_game_variant_model_override_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_variant_model_override_type(void) const
//{
//    mangled_ppc("?get_game_variant_model_override_type@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_variant_designator_switch_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_variant_designator_switch_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_game_variant_designator_switch_type(void) const
//{
//    mangled_ppc("?get_game_variant_designator_switch_type@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_game_variant_available_team_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_game_variant_available_team_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_game_variant_available_team_count(void) const
//{
//    mangled_ppc("?get_game_variant_available_team_count@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_saved_film_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_name(void) const
//{
//    mangled_ppc("?get_saved_film_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_map::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_saved_film_map@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_map(void) const
//{
//    mangled_ppc("?get_saved_film_map@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_saved_film_variant::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_saved_film_variant@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_saved_film_variant(void) const
//{
//    mangled_ppc("?get_saved_film_variant@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, long, long & (c_networking_squad_session_reader_component::get_saved_film_length::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@J$1?get_saved_film_length@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_networking_squad_session_reader_component::get_saved_film_length(void) const
//{
//    mangled_ppc("?get_saved_film_length@c_networking_squad_session_reader_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@$1?get_saved_film_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@$1?get_saved_film_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_saved_film_category(void) const
//{
//    mangled_ppc("?get_saved_film_category@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>(enum e_saved_film_category)
//{
//    mangled_ppc("??0?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@QAA@W4e_saved_film_category@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_saved_film_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_saved_film_difficulty_level@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_networking_squad_session_reader_component::get_saved_film_difficulty_level(void) const
//{
//    mangled_ppc("?get_saved_film_difficulty_level@c_networking_squad_session_reader_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, bool, bool & (c_networking_squad_session_reader_component::is_game_variant_valid::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@_N$1?is_game_variant_valid@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_networking_squad_session_reader_component::is_game_variant_valid(void) const
//{
//    mangled_ppc("?is_game_variant_valid@c_networking_squad_session_reader_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_networking_squad_session_reader_component, wchar_t const *, wchar_t const *& (c_networking_squad_session_reader_component::get_game_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@PB_W$1?get_game_variant_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_networking_squad_session_reader_component::get_game_variant_name(void) const
//{
//    mangled_ppc("?get_game_variant_name@c_networking_squad_session_reader_component@@QBAPB_WXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@D$1?get_game_engine_icon_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_networking_squad_session_reader_component@@D$1?get_game_engine_icon_index@1@QBADXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char c_networking_squad_session_reader_component::get_game_engine_icon_index(void) const
//{
//    mangled_ppc("?get_game_engine_icon_index@c_networking_squad_session_reader_component@@QBADXZ");
//};

//public: c_networking_squad_session_reader_component::c_networking_squad_session_reader_component(class c_networking_squad_session_reader_component const &)
//{
//    mangled_ppc("??0c_networking_squad_session_reader_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_game_engine_team_options_designator_switch_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_game_engine_team_options_designator_switch_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_network_session_class c_enum_no_init<enum e_network_session_class, char, 1, 4, struct s_default_enum_string_resolver>::operator enum e_network_session_class(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_session_class@@D$00$03Us_default_enum_string_resolver@@@@QBA?AW4e_network_session_class@@XZ");
//};

//public: enum e_saved_film_category c_enum_no_init<enum e_saved_film_category, char, 0, 7, struct s_default_enum_string_resolver>::operator enum e_saved_film_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_saved_film_category@@D$0A@$06Us_default_enum_string_resolver@@@@QBA?AW4e_saved_film_category@@XZ");
//};

//void g_game_start_status_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_start_status_enum_table@@YAXXZ");
//};

//void g_game_start_warning_name_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_start_warning_name_enum_table@@YAXXZ");
//};

//void g_game_start_error_name_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_start_error_name_enum_table@@YAXXZ");
//};

