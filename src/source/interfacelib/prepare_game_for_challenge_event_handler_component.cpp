/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `public: enum e_campaign_difficulty_level __cdecl c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const'::`3'::x_event_category_index; // "?x_event_category_index@?2??get_lowest_bit_set@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_difficulty_level@@XZ@4JC"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_prepare_game_for_challenge_event_handler_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_prepare_game_for_challenge_event_handler_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_prepare_game_for_challenge_event_handler_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_prepare_game_for_challenge_event_handler_component@@@@0Vc_cui_object_property_table@@A"

// public: c_prepare_game_for_challenge_event_handler_component::c_prepare_game_for_challenge_event_handler_component(void);
// merged_84B4F198;
// public: virtual c_prepare_game_for_challenge_event_handler_component::~c_prepare_game_for_challenge_event_handler_component(void);
// protected: virtual void c_prepare_game_for_challenge_event_handler_component::do_update(class c_cui_update_context *);
// protected: virtual void c_prepare_game_for_challenge_event_handler_component::do_handle_event(class c_cui_update_context *, class c_event_component *);
// private: void c_prepare_game_for_challenge_event_handler_component::wait_for_campaign_save_enumeration(class c_cui_update_context *);
// private: void c_prepare_game_for_challenge_event_handler_component::prompt_campaign_save_deletion(class c_cui_update_context *);
// private: void c_prepare_game_for_challenge_event_handler_component::update_wait_for_campaign_save_enumeration(class c_cui_update_context *);
// private: void c_prepare_game_for_challenge_event_handler_component::update_prompt_campaign_save_deletion(class c_cui_update_context *);
// private: void c_prepare_game_for_challenge_event_handler_component::prepare_campaign_challenge(void);
// private: void c_prepare_game_for_challenge_event_handler_component::prepare_survival_challenge(void);
// private: void c_prepare_game_for_challenge_event_handler_component::prepare_multiplayer_challenge(void);
// private: void c_prepare_game_for_challenge_event_handler_component::prepare_matchmaking_challenge(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_prepare_game_for_challenge_event_handler_component>::get_instance(void);
// public: enum e_campaign_difficulty_level c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const;
// bool cui_get_scalar_property_by_return_value<class c_prepare_game_for_challenge_event_handler_component, long, long & (c_prepare_game_for_challenge_event_handler_component::get_selected_challenge_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_prepare_game_for_challenge_event_handler_component::get_selected_challenge_index(void) const;
// bool cui_set_scalar_property_by_value<class c_prepare_game_for_challenge_event_handler_component, long, void & (c_prepare_game_for_challenge_event_handler_component::set_selected_challenge_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_prepare_game_for_challenge_event_handler_component::set_selected_challenge_index(long);
// bool cui_get_scalar_property_by_return_value<class c_prepare_game_for_challenge_event_handler_component, class c_active_challenges_list_data_component *, class c_active_challenges_list_data_component *& (c_prepare_game_for_challenge_event_handler_component::get_challenge_list_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_active_challenges_list_data_component * c_prepare_game_for_challenge_event_handler_component::get_challenge_list_component(void) const;
// void cui_property_value_set(struct s_cui_property_value *, class c_active_challenges_list_data_component *);
// bool cui_set_scalar_property_by_value<class c_prepare_game_for_challenge_event_handler_component, class c_active_challenges_list_data_component *, void & (c_prepare_game_for_challenge_event_handler_component::set_challenge_list_component::*)(class c_active_challenges_list_data_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_prepare_game_for_challenge_event_handler_component::set_challenge_list_component(class c_active_challenges_list_data_component *);
// bool cui_property_value_get(struct s_cui_property_value const *, class c_active_challenges_list_data_component **);
// class c_active_challenges_list_data_component * cui_dynamic_cast<class c_active_challenges_list_data_component *>(class c_cui_component *);
// ??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_type@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_type, char, 0, 3, struct s_default_enum_string_resolver> c_prepare_game_for_challenge_event_handler_component::get_game_type(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_activity_type@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_game_activity_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_activity_type, char, 0, 2, struct s_default_enum_string_resolver> c_prepare_game_for_challenge_event_handler_component::get_game_activity_type(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_prepare_game_for_challenge_event_handler_component, class c_input_event_component *, bool & (c_prepare_game_for_challenge_event_handler_component::get_result_event_component::*)(class c_input_event_component **)>(void const *, long, struct s_cui_property_value *);
// public: bool c_prepare_game_for_challenge_event_handler_component::get_result_event_component(class c_input_event_component **) const;
// public: static class c_active_challenges_list_data_component * s_cui_dynamic_cast<class c_active_challenges_list_data_component *>::cast(class c_cui_component *);
// class c_cui_component * cui_component_create<class c_prepare_game_for_challenge_event_handler_component>(void);
// class c_cui_component * cui_component_clone<class c_prepare_game_for_challenge_event_handler_component>(class c_cui_component const *);
// public: c_prepare_game_for_challenge_event_handler_component::c_prepare_game_for_challenge_event_handler_component(class c_prepare_game_for_challenge_event_handler_component const &);

//public: c_prepare_game_for_challenge_event_handler_component::c_prepare_game_for_challenge_event_handler_component(void)
//{
//    mangled_ppc("??0c_prepare_game_for_challenge_event_handler_component@@QAA@XZ");
//};

//merged_84B4F198
//{
//    mangled_ppc("merged_84B4F198");
//};

//public: virtual c_prepare_game_for_challenge_event_handler_component::~c_prepare_game_for_challenge_event_handler_component(void)
//{
//    mangled_ppc("??1c_prepare_game_for_challenge_event_handler_component@@UAA@XZ");
//};

//protected: virtual void c_prepare_game_for_challenge_event_handler_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_prepare_game_for_challenge_event_handler_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_prepare_game_for_challenge_event_handler_component::do_handle_event(class c_cui_update_context *, class c_event_component *)
//{
//    mangled_ppc("?do_handle_event@c_prepare_game_for_challenge_event_handler_component@@MAAXPAVc_cui_update_context@@PAVc_event_component@@@Z");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::wait_for_campaign_save_enumeration(class c_cui_update_context *)
//{
//    mangled_ppc("?wait_for_campaign_save_enumeration@c_prepare_game_for_challenge_event_handler_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::prompt_campaign_save_deletion(class c_cui_update_context *)
//{
//    mangled_ppc("?prompt_campaign_save_deletion@c_prepare_game_for_challenge_event_handler_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::update_wait_for_campaign_save_enumeration(class c_cui_update_context *)
//{
//    mangled_ppc("?update_wait_for_campaign_save_enumeration@c_prepare_game_for_challenge_event_handler_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::update_prompt_campaign_save_deletion(class c_cui_update_context *)
//{
//    mangled_ppc("?update_prompt_campaign_save_deletion@c_prepare_game_for_challenge_event_handler_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::prepare_campaign_challenge(void)
//{
//    mangled_ppc("?prepare_campaign_challenge@c_prepare_game_for_challenge_event_handler_component@@AAAXXZ");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::prepare_survival_challenge(void)
//{
//    mangled_ppc("?prepare_survival_challenge@c_prepare_game_for_challenge_event_handler_component@@AAAXXZ");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::prepare_multiplayer_challenge(void)
//{
//    mangled_ppc("?prepare_multiplayer_challenge@c_prepare_game_for_challenge_event_handler_component@@AAAXXZ");
//};

//private: void c_prepare_game_for_challenge_event_handler_component::prepare_matchmaking_challenge(void)
//{
//    mangled_ppc("?prepare_matchmaking_challenge@c_prepare_game_for_challenge_event_handler_component@@AAAXXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_prepare_game_for_challenge_event_handler_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_prepare_game_for_challenge_event_handler_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: enum e_campaign_difficulty_level c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_difficulty_level@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_prepare_game_for_challenge_event_handler_component, long, long & (c_prepare_game_for_challenge_event_handler_component::get_selected_challenge_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@J$1?get_selected_challenge_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_prepare_game_for_challenge_event_handler_component::get_selected_challenge_index(void) const
//{
//    mangled_ppc("?get_selected_challenge_index@c_prepare_game_for_challenge_event_handler_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_prepare_game_for_challenge_event_handler_component, long, void & (c_prepare_game_for_challenge_event_handler_component::set_selected_challenge_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_prepare_game_for_challenge_event_handler_component@@J$1?set_selected_challenge_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_prepare_game_for_challenge_event_handler_component::set_selected_challenge_index(long)
//{
//    mangled_ppc("?set_selected_challenge_index@c_prepare_game_for_challenge_event_handler_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_prepare_game_for_challenge_event_handler_component, class c_active_challenges_list_data_component *, class c_active_challenges_list_data_component *& (c_prepare_game_for_challenge_event_handler_component::get_challenge_list_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@PAVc_active_challenges_list_data_component@@$1?get_challenge_list_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_active_challenges_list_data_component * c_prepare_game_for_challenge_event_handler_component::get_challenge_list_component(void) const
//{
//    mangled_ppc("?get_challenge_list_component@c_prepare_game_for_challenge_event_handler_component@@QBAPAVc_active_challenges_list_data_component@@XZ");
//};

//void cui_property_value_set(struct s_cui_property_value *, class c_active_challenges_list_data_component *)
//{
//    mangled_ppc("?cui_property_value_set@@YAXPAUs_cui_property_value@@PAVc_active_challenges_list_data_component@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_prepare_game_for_challenge_event_handler_component, class c_active_challenges_list_data_component *, void & (c_prepare_game_for_challenge_event_handler_component::set_challenge_list_component::*)(class c_active_challenges_list_data_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_prepare_game_for_challenge_event_handler_component@@PAVc_active_challenges_list_data_component@@$1?set_challenge_list_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_prepare_game_for_challenge_event_handler_component::set_challenge_list_component(class c_active_challenges_list_data_component *)
//{
//    mangled_ppc("?set_challenge_list_component@c_prepare_game_for_challenge_event_handler_component@@QAAXPAVc_active_challenges_list_data_component@@@Z");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, class c_active_challenges_list_data_component **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPAVc_active_challenges_list_data_component@@@Z");
//};

//class c_active_challenges_list_data_component * cui_dynamic_cast<class c_active_challenges_list_data_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_active_challenges_list_data_component@@@@YAPAVc_active_challenges_list_data_component@@PAVc_cui_component@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_type@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_type@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_game_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_type, char, 0, 3, struct s_default_enum_string_resolver> c_prepare_game_for_challenge_event_handler_component::get_game_type(void) const
//{
//    mangled_ppc("?get_game_type@c_prepare_game_for_challenge_event_handler_component@@QBA?AV?$c_enum@W4e_game_type@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_activity_type@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_game_activity_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_prepare_game_for_challenge_event_handler_component@@V?$c_enum@W4e_game_activity_type@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_game_activity_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_activity_type, char, 0, 2, struct s_default_enum_string_resolver> c_prepare_game_for_challenge_event_handler_component::get_game_activity_type(void) const
//{
//    mangled_ppc("?get_game_activity_type@c_prepare_game_for_challenge_event_handler_component@@QBA?AV?$c_enum@W4e_game_activity_type@@D$0A@$01Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_prepare_game_for_challenge_event_handler_component, class c_input_event_component *, bool & (c_prepare_game_for_challenge_event_handler_component::get_result_event_component::*)(class c_input_event_component **)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_prepare_game_for_challenge_event_handler_component@@PAVc_input_event_component@@$1?get_result_event_component@1@QBA_NPAPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_prepare_game_for_challenge_event_handler_component::get_result_event_component(class c_input_event_component **) const
//{
//    mangled_ppc("?get_result_event_component@c_prepare_game_for_challenge_event_handler_component@@QBA_NPAPAVc_input_event_component@@@Z");
//};

//public: static class c_active_challenges_list_data_component * s_cui_dynamic_cast<class c_active_challenges_list_data_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_active_challenges_list_data_component@@@@SAPAVc_active_challenges_list_data_component@@PAVc_cui_component@@@Z");
//};

//class c_cui_component * cui_component_create<class c_prepare_game_for_challenge_event_handler_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_prepare_game_for_challenge_event_handler_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_prepare_game_for_challenge_event_handler_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_prepare_game_for_challenge_event_handler_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_prepare_game_for_challenge_event_handler_component::c_prepare_game_for_challenge_event_handler_component(class c_prepare_game_for_challenge_event_handler_component const &)
//{
//    mangled_ppc("??0c_prepare_game_for_challenge_event_handler_component@@QAA@ABV0@@Z");
//};

