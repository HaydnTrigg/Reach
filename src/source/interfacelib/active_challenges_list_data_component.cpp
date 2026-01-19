/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_active_challenge, 20>::k_element_count; // "?k_element_count@?$s_static_array@Us_active_challenge@@$0BE@@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_active_challenges_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_active_challenges_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_active_challenges_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_active_challenges_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_active_challenges_list_data_component::c_active_challenges_list_data_component(void);
// merged_84A2C150;
// public: s_static_array<struct s_active_challenge, 20>::s_static_array<struct s_active_challenge, 20>(void);
// public: virtual c_active_challenges_list_data_component::~c_active_challenges_list_data_component(void);
// protected: virtual void c_active_challenges_list_data_component::do_update(class c_cui_update_context *);
// public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_name(long) const;
// public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_string(long) const;
// public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_name(long) const;
// public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_description(long) const;
// public: class c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver> c_active_challenges_list_data_component::get_challenge_category(long) const;
// public: long c_active_challenges_list_data_component::get_required_progress(long) const;
// public: long c_active_challenges_list_data_component::get_current_progress(long) const;
// public: long c_active_challenges_list_data_component::get_cookie_reward(long) const;
// public: float c_active_challenges_list_data_component::get_completion_percent(long) const;
// public: bool c_active_challenges_list_data_component::get_is_challenge_completed(long) const;
// public: bool c_active_challenges_list_data_component::get_is_challenge_active(long) const;
// public: class c_cui_string_id c_active_challenges_list_data_component::get_level_name(long) const;
// public: long c_active_challenges_list_data_component::get_minimum_score(long) const;
// public: long c_active_challenges_list_data_component::get_maximum_level_completion_seconds(long) const;
// public: long c_active_challenges_list_data_component::get_maximum_player_death_count(long) const;
// public: struct s_active_challenge * c_active_challenges_list_data_component::get_challenge_info(long);
// private: bool c_active_challenges_list_data_component::test_challenge_set(long, enum e_challenge_set) const;
// private: bool c_active_challenges_list_data_component::test_game_type(long, enum e_game_type) const;
// private: bool c_active_challenges_list_data_component::test_game_activity_type(long, enum e_game_activity_type) const;
// private: bool c_active_challenges_list_data_component::test_game_player_count(long, enum e_game_type_player_count) const;
// private: bool c_active_challenges_list_data_component::test_difficulty(long, enum e_campaign_difficulty_level) const;
// private: bool c_active_challenges_list_data_component::test_skull(long, enum e_game_skulls) const;
// public: c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>(enum e_challenge_category);
// public: enum e_challenge_category c_enum_no_init<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_challenge_category(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_challenges_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_active_challenges_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_active_challenges_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_active_challenges_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_active_challenges_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_active_challenges_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_active_challenges_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_active_challenges_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_active_challenges_list_data_component, long & (c_active_challenges_list_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_challenge_active::*)(long)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_challenge_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_required_progress::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_current_progress::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_cookie_reward::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, float, long & (c_active_challenges_list_data_component::get_item_count::*)(void), float & (c_active_challenges_list_data_component::get_completion_percent::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_challenge_completed::*)(long)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_level_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_minimum_score::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_maximum_level_completion_seconds::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_maximum_player_death_count::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_daily_challenge::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_daily_challenge(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_weekly_challenge::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_weekly_challenge(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_campaign::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_type_campaign(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_firefight::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_type_firefight(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_multiplayer::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_type_multiplayer(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_activity_type_matchmaking::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_activity_type_matchmaking(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_activity_type_custom::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_activity_type_custom(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_any::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_player_count_any(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_1::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_player_count_1(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_4::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_player_count_4(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_greater_than_1::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_game_player_count_greater_than_1(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_easy::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_difficulty_easy(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_normal::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_difficulty_normal(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_heroic::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_difficulty_heroic(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_legendary::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_difficulty_legendary(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_iron::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_iron(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_black_eye::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_black_eye(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_tough_luck::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_tough_luck(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_catch::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_catch(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_fog::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_fog(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_famine::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_famine(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_thunderstorm::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_thunderstorm(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_tilt::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_tilt(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_mythic::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_mythic(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_assasin::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_assasin(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_blind::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_blind(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_superman::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_superman(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_grunt_birthday_party::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_grunt_birthday_party(long) const;
// bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_daddy::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_active_challenges_list_data_component::get_is_skull_daddy(long) const;
// public: struct s_active_challenge & s_static_array<struct s_active_challenge, 20>::operator[]<long>(long);
// public: struct s_active_challenge const & s_static_array<struct s_active_challenge, 20>::operator[]<long>(long) const;
// public: c_active_challenges_list_data_component::c_active_challenges_list_data_component(class c_active_challenges_list_data_component const &);
// void cui_property_value_set<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver> const &);
// public: static bool s_static_array<struct s_active_challenge, 20>::valid<long>(long);

//public: c_active_challenges_list_data_component::c_active_challenges_list_data_component(void)
//{
//    mangled_ppc("??0c_active_challenges_list_data_component@@QAA@XZ");
//};

//merged_84A2C150
//{
//    mangled_ppc("merged_84A2C150");
//};

//public: s_static_array<struct s_active_challenge, 20>::s_static_array<struct s_active_challenge, 20>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_active_challenge@@$0BE@@@QAA@XZ");
//};

//public: virtual c_active_challenges_list_data_component::~c_active_challenges_list_data_component(void)
//{
//    mangled_ppc("??1c_active_challenges_list_data_component@@UAA@XZ");
//};

//protected: virtual void c_active_challenges_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_active_challenges_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_name(long) const
//{
//    mangled_ppc("?get_challenge_name@c_active_challenges_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_string(long) const
//{
//    mangled_ppc("?get_challenge_display_string@c_active_challenges_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_name(long) const
//{
//    mangled_ppc("?get_challenge_display_name@c_active_challenges_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_cui_string_id c_active_challenges_list_data_component::get_challenge_display_description(long) const
//{
//    mangled_ppc("?get_challenge_display_description@c_active_challenges_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver> c_active_challenges_list_data_component::get_challenge_category(long) const
//{
//    mangled_ppc("?get_challenge_category@c_active_challenges_list_data_component@@QBA?AV?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@J@Z");
//};

//public: long c_active_challenges_list_data_component::get_required_progress(long) const
//{
//    mangled_ppc("?get_required_progress@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: long c_active_challenges_list_data_component::get_current_progress(long) const
//{
//    mangled_ppc("?get_current_progress@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: long c_active_challenges_list_data_component::get_cookie_reward(long) const
//{
//    mangled_ppc("?get_cookie_reward@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: float c_active_challenges_list_data_component::get_completion_percent(long) const
//{
//    mangled_ppc("?get_completion_percent@c_active_challenges_list_data_component@@QBAMJ@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_challenge_completed(long) const
//{
//    mangled_ppc("?get_is_challenge_completed@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_challenge_active(long) const
//{
//    mangled_ppc("?get_is_challenge_active@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//public: class c_cui_string_id c_active_challenges_list_data_component::get_level_name(long) const
//{
//    mangled_ppc("?get_level_name@c_active_challenges_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_active_challenges_list_data_component::get_minimum_score(long) const
//{
//    mangled_ppc("?get_minimum_score@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: long c_active_challenges_list_data_component::get_maximum_level_completion_seconds(long) const
//{
//    mangled_ppc("?get_maximum_level_completion_seconds@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: long c_active_challenges_list_data_component::get_maximum_player_death_count(long) const
//{
//    mangled_ppc("?get_maximum_player_death_count@c_active_challenges_list_data_component@@QBAJJ@Z");
//};

//public: struct s_active_challenge * c_active_challenges_list_data_component::get_challenge_info(long)
//{
//    mangled_ppc("?get_challenge_info@c_active_challenges_list_data_component@@QAAPAUs_active_challenge@@J@Z");
//};

//private: bool c_active_challenges_list_data_component::test_challenge_set(long, enum e_challenge_set) const
//{
//    mangled_ppc("?test_challenge_set@c_active_challenges_list_data_component@@ABA_NJW4e_challenge_set@@@Z");
//};

//private: bool c_active_challenges_list_data_component::test_game_type(long, enum e_game_type) const
//{
//    mangled_ppc("?test_game_type@c_active_challenges_list_data_component@@ABA_NJW4e_game_type@@@Z");
//};

//private: bool c_active_challenges_list_data_component::test_game_activity_type(long, enum e_game_activity_type) const
//{
//    mangled_ppc("?test_game_activity_type@c_active_challenges_list_data_component@@ABA_NJW4e_game_activity_type@@@Z");
//};

//private: bool c_active_challenges_list_data_component::test_game_player_count(long, enum e_game_type_player_count) const
//{
//    mangled_ppc("?test_game_player_count@c_active_challenges_list_data_component@@ABA_NJW4e_game_type_player_count@@@Z");
//};

//private: bool c_active_challenges_list_data_component::test_difficulty(long, enum e_campaign_difficulty_level) const
//{
//    mangled_ppc("?test_difficulty@c_active_challenges_list_data_component@@ABA_NJW4e_campaign_difficulty_level@@@Z");
//};

//private: bool c_active_challenges_list_data_component::test_skull(long, enum e_game_skulls) const
//{
//    mangled_ppc("?test_skull@c_active_challenges_list_data_component@@ABA_NJW4e_game_skulls@@@Z");
//};

//public: c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>(enum e_challenge_category)
//{
//    mangled_ppc("??0?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_challenge_category@@@Z");
//};

//public: enum e_challenge_category c_enum_no_init<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_challenge_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_challenge_category@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_active_challenges_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_active_challenges_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_active_challenges_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_active_challenges_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_active_challenges_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_active_challenges_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_active_challenges_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_active_challenges_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_active_challenges_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_active_challenges_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_active_challenges_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_active_challenges_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_active_challenges_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_active_challenges_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_active_challenges_list_data_component, long & (c_active_challenges_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_active_challenges_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_challenge_display_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_challenge_active::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_challenge_active@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_challenge_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@V?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_challenge_category@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_required_progress::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_required_progress@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_current_progress::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_current_progress@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_cookie_reward::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_cookie_reward@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, float, long & (c_active_challenges_list_data_component::get_item_count::*)(void), float & (c_active_challenges_list_data_component::get_completion_percent::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@M$1?get_item_count@1@QBAJXZ$1?get_completion_percent@1@QBAMJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_challenge_completed::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_challenge_completed@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_level_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_level_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_minimum_score::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_minimum_score@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_maximum_level_completion_seconds::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_maximum_level_completion_seconds@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, long, long & (c_active_challenges_list_data_component::get_item_count::*)(void), long & (c_active_challenges_list_data_component::get_maximum_player_death_count::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_maximum_player_death_count@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_daily_challenge::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_daily_challenge@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_daily_challenge(long) const
//{
//    mangled_ppc("?get_is_daily_challenge@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_weekly_challenge::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_weekly_challenge@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_weekly_challenge(long) const
//{
//    mangled_ppc("?get_is_weekly_challenge@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_campaign::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_type_campaign@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_type_campaign(long) const
//{
//    mangled_ppc("?get_is_game_type_campaign@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_firefight::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_type_firefight@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_type_firefight(long) const
//{
//    mangled_ppc("?get_is_game_type_firefight@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_type_multiplayer::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_type_multiplayer@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_type_multiplayer(long) const
//{
//    mangled_ppc("?get_is_game_type_multiplayer@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_activity_type_matchmaking::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_activity_type_matchmaking@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_activity_type_matchmaking(long) const
//{
//    mangled_ppc("?get_is_game_activity_type_matchmaking@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_activity_type_custom::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_activity_type_custom@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_activity_type_custom(long) const
//{
//    mangled_ppc("?get_is_game_activity_type_custom@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_any::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_player_count_any@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_player_count_any(long) const
//{
//    mangled_ppc("?get_is_game_player_count_any@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_1::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_player_count_1@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_player_count_1(long) const
//{
//    mangled_ppc("?get_is_game_player_count_1@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_4::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_player_count_4@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_player_count_4(long) const
//{
//    mangled_ppc("?get_is_game_player_count_4@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_game_player_count_greater_than_1::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_game_player_count_greater_than_1@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_game_player_count_greater_than_1(long) const
//{
//    mangled_ppc("?get_is_game_player_count_greater_than_1@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_easy::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_difficulty_easy@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_difficulty_easy(long) const
//{
//    mangled_ppc("?get_is_difficulty_easy@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_normal::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_difficulty_normal@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_difficulty_normal(long) const
//{
//    mangled_ppc("?get_is_difficulty_normal@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_heroic::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_difficulty_heroic@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_difficulty_heroic(long) const
//{
//    mangled_ppc("?get_is_difficulty_heroic@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_difficulty_legendary::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_difficulty_legendary@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_difficulty_legendary(long) const
//{
//    mangled_ppc("?get_is_difficulty_legendary@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_iron::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_iron@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_iron(long) const
//{
//    mangled_ppc("?get_is_skull_iron@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_black_eye::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_black_eye@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_black_eye(long) const
//{
//    mangled_ppc("?get_is_skull_black_eye@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_tough_luck::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_tough_luck@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_tough_luck(long) const
//{
//    mangled_ppc("?get_is_skull_tough_luck@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_catch::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_catch@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_catch(long) const
//{
//    mangled_ppc("?get_is_skull_catch@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_fog::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_fog@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_fog(long) const
//{
//    mangled_ppc("?get_is_skull_fog@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_famine::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_famine@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_famine(long) const
//{
//    mangled_ppc("?get_is_skull_famine@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_thunderstorm::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_thunderstorm@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_thunderstorm(long) const
//{
//    mangled_ppc("?get_is_skull_thunderstorm@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_tilt::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_tilt@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_tilt(long) const
//{
//    mangled_ppc("?get_is_skull_tilt@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_mythic::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_mythic@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_mythic(long) const
//{
//    mangled_ppc("?get_is_skull_mythic@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_assasin::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_assasin@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_assasin(long) const
//{
//    mangled_ppc("?get_is_skull_assasin@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_blind::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_blind@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_blind(long) const
//{
//    mangled_ppc("?get_is_skull_blind@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_superman::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_superman@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_superman(long) const
//{
//    mangled_ppc("?get_is_skull_superman@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_grunt_birthday_party::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_grunt_birthday_party@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_grunt_birthday_party(long) const
//{
//    mangled_ppc("?get_is_skull_grunt_birthday_party@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_active_challenges_list_data_component, bool, long & (c_active_challenges_list_data_component::get_item_count::*)(void), bool & (c_active_challenges_list_data_component::get_is_skull_daddy::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_active_challenges_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_is_skull_daddy@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_active_challenges_list_data_component::get_is_skull_daddy(long) const
//{
//    mangled_ppc("?get_is_skull_daddy@c_active_challenges_list_data_component@@QBA_NJ@Z");
//};

//public: struct s_active_challenge & s_static_array<struct s_active_challenge, 20>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_active_challenge@@$0BE@@@QAAAAUs_active_challenge@@J@Z");
//};

//public: struct s_active_challenge const & s_static_array<struct s_active_challenge, 20>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_active_challenge@@$0BE@@@QBAABUs_active_challenge@@J@Z");
//};

//public: c_active_challenges_list_data_component::c_active_challenges_list_data_component(class c_active_challenges_list_data_component const &)
//{
//    mangled_ppc("??0c_active_challenges_list_data_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_challenge_category, char, 0, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_challenge_category@@D$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct s_active_challenge, 20>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_active_challenge@@$0BE@@@SA_NJ@Z");
//};

