/* ---------- headers */

#include "omaha\interface\components\lobby_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_lobby_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_lobby_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_lobby_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_lobby_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_lobby_data_component::c_lobby_data_component(void);
// merged_84ADB3B0;
// public: c_lobby_data_component::s_enumerate_last_film::s_enumerate_last_film(void);
// public: c_lobby_data_component::s_load_last_film::s_load_last_film(void);
// public: c_lobby_data_component::c_lobby_data_component(class c_lobby_data_component const &);
// public: virtual c_lobby_data_component::~c_lobby_data_component(void);
// public: c_lobby_data_component::s_enumerate_last_film::~s_enumerate_last_film(void);
// public: c_lobby_data_component::s_load_last_film::~s_load_last_film(void);
// protected: virtual void c_lobby_data_component::do_initialize(class c_cui_update_context *);
// protected: virtual void c_lobby_data_component::do_update(class c_cui_update_context *);
// public: bool c_gui_location_manager::get_show_postgame_stats_upon_lobby_entrance(void) const;
// private: void c_lobby_data_component::update_theater_enumerate(void);
// private: void c_lobby_data_component::update_theater_load(void);
// private: void c_lobby_data_component::update_theater(void);
// bool find_last_film(struct s_file_reference *, class c_synchronized_int32*);
// public: c_cui_unique_ptr<struct s_blf_saved_film>::c_cui_unique_ptr<struct s_blf_saved_film>(void);
// public: c_cui_unique_ptr<struct s_blf_saved_film>::~c_cui_unique_ptr<struct s_blf_saved_film>(void);
// public: struct s_blf_saved_film * c_cui_unique_ptr<struct s_blf_saved_film>::operator->(void) const;
// public: struct s_blf_saved_film * c_cui_unique_ptr<struct s_blf_saved_film>::get(void) const;
// ??B?$c_cui_unique_ptr@Us_blf_saved_film@@@@QBAPQ0@PAUs_blf_saved_film@@XZ;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_lobby_data_component>::get_instance(void);
// public: void c_cui_unique_ptr<struct s_blf_saved_film>::reset(struct s_blf_saved_film *);
// class c_cui_component * cui_component_create<class c_lobby_data_component>(void);
// class c_cui_component * cui_component_clone<class c_lobby_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_lobby_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_lobby_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_lobby_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_lobby_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> c_lobby_data_component::get_game_mode(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_campaign::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_game_mode_campaign(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_firefight::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_game_mode_firefight(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_multiplayer::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_game_mode_multiplayer(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_matchmade::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_game_matchmade(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_pgcr_data_available(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_campaign::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_pgcr_data_available_campaign(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_firefight::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_pgcr_data_available_firefight(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_multiplayer::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_pgcr_data_available_multiplayer(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_exit_experience_data_available::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_exit_experience_data_available(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_exit_experience_data_suppressed::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_lobby_data_component::is_exit_experience_data_suppressed(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@Vc_cui_string_id@@$1?get_earned_credits_message_string_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_lobby_data_component::get_earned_credits_message_string_id(void) const;
// bool cui_set_scalar_property_by_value<class c_lobby_data_component, class c_cui_string_id, void & (c_lobby_data_component::set_earned_credits_message_string_id::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_lobby_data_component::set_earned_credits_message_string_id(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, long, long & (c_lobby_data_component::get_earned_credits_amount::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_lobby_data_component::get_earned_credits_amount(void) const;
// bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, class c_input_event_component *, class c_input_event_component *& (c_lobby_data_component::get_launch_exit_experience_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_lobby_data_component::get_launch_exit_experience_event(void) const;
// class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> async_function_make<bool, struct s_file_reference *, class c_synchronized_int32*, struct s_file_reference *, class c_synchronized_int32*>(bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *);
// void ui_track_delete<struct s_blf_saved_film>(struct s_blf_saved_film *);
// public: c_cui_unique_ptr<struct s_blf_saved_film>::c_cui_unique_ptr<struct s_blf_saved_film>(struct s_blf_saved_film *);
// public: void c_cui_unique_ptr<struct s_blf_saved_film>::swap(class c_cui_unique_ptr<struct s_blf_saved_film> &);
// public: c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>(bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *);
// public: static enum e_async_completion s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<bool> *, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: bool c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);

//public: c_lobby_data_component::c_lobby_data_component(void)
//{
//    mangled_ppc("??0c_lobby_data_component@@QAA@XZ");
//};

//merged_84ADB3B0
//{
//    mangled_ppc("merged_84ADB3B0");
//};

//public: c_lobby_data_component::s_enumerate_last_film::s_enumerate_last_film(void)
//{
//    mangled_ppc("??0s_enumerate_last_film@c_lobby_data_component@@QAA@XZ");
//};

//public: c_lobby_data_component::s_load_last_film::s_load_last_film(void)
//{
//    mangled_ppc("??0s_load_last_film@c_lobby_data_component@@QAA@XZ");
//};

//public: c_lobby_data_component::c_lobby_data_component(class c_lobby_data_component const &)
//{
//    mangled_ppc("??0c_lobby_data_component@@QAA@ABV0@@Z");
//};

//public: virtual c_lobby_data_component::~c_lobby_data_component(void)
//{
//    mangled_ppc("??1c_lobby_data_component@@UAA@XZ");
//};

//public: c_lobby_data_component::s_enumerate_last_film::~s_enumerate_last_film(void)
//{
//    mangled_ppc("??1s_enumerate_last_film@c_lobby_data_component@@QAA@XZ");
//};

//public: c_lobby_data_component::s_load_last_film::~s_load_last_film(void)
//{
//    mangled_ppc("??1s_load_last_film@c_lobby_data_component@@QAA@XZ");
//};

//protected: virtual void c_lobby_data_component::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_lobby_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_lobby_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_lobby_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: bool c_gui_location_manager::get_show_postgame_stats_upon_lobby_entrance(void) const
//{
//    mangled_ppc("?get_show_postgame_stats_upon_lobby_entrance@c_gui_location_manager@@QBA_NXZ");
//};

//private: void c_lobby_data_component::update_theater_enumerate(void)
//{
//    mangled_ppc("?update_theater_enumerate@c_lobby_data_component@@AAAXXZ");
//};

//private: void c_lobby_data_component::update_theater_load(void)
//{
//    mangled_ppc("?update_theater_load@c_lobby_data_component@@AAAXXZ");
//};

//private: void c_lobby_data_component::update_theater(void)
//{
//    mangled_ppc("?update_theater@c_lobby_data_component@@AAAXXZ");
//};

//bool find_last_film(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?find_last_film@@YA_NPAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: c_cui_unique_ptr<struct s_blf_saved_film>::c_cui_unique_ptr<struct s_blf_saved_film>(void)
//{
//    mangled_ppc("??0?$c_cui_unique_ptr@Us_blf_saved_film@@@@QAA@XZ");
//};

//public: c_cui_unique_ptr<struct s_blf_saved_film>::~c_cui_unique_ptr<struct s_blf_saved_film>(void)
//{
//    mangled_ppc("??1?$c_cui_unique_ptr@Us_blf_saved_film@@@@QAA@XZ");
//};

//public: struct s_blf_saved_film * c_cui_unique_ptr<struct s_blf_saved_film>::operator->(void) const
//{
//    mangled_ppc("??C?$c_cui_unique_ptr@Us_blf_saved_film@@@@QBAPAUs_blf_saved_film@@XZ");
//};

//public: struct s_blf_saved_film * c_cui_unique_ptr<struct s_blf_saved_film>::get(void) const
//{
//    mangled_ppc("?get@?$c_cui_unique_ptr@Us_blf_saved_film@@@@QBAPAUs_blf_saved_film@@XZ");
//};

//??B?$c_cui_unique_ptr@Us_blf_saved_film@@@@QBAPQ0@PAUs_blf_saved_film@@XZ
//{
//    mangled_ppc("??B?$c_cui_unique_ptr@Us_blf_saved_film@@@@QBAPQ0@PAUs_blf_saved_film@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_lobby_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_lobby_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: void c_cui_unique_ptr<struct s_blf_saved_film>::reset(struct s_blf_saved_film *)
//{
//    mangled_ppc("?reset@?$c_cui_unique_ptr@Us_blf_saved_film@@@@QAAXPAUs_blf_saved_film@@@Z");
//};

//class c_cui_component * cui_component_create<class c_lobby_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_lobby_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_lobby_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_lobby_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_lobby_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_lobby_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_lobby_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_lobby_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_lobby_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_lobby_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_lobby_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@V?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@$1?get_game_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_game_mode, char, 0, 6, struct s_default_enum_string_resolver> c_lobby_data_component::get_game_mode(void) const
//{
//    mangled_ppc("?get_game_mode@c_lobby_data_component@@QBA?AV?$c_enum@W4e_game_mode@@D$0A@$05Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_campaign::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_game_mode_campaign@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_game_mode_campaign(void) const
//{
//    mangled_ppc("?is_game_mode_campaign@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_firefight::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_game_mode_firefight@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_game_mode_firefight(void) const
//{
//    mangled_ppc("?is_game_mode_firefight@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_mode_multiplayer::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_game_mode_multiplayer@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_game_mode_multiplayer(void) const
//{
//    mangled_ppc("?is_game_mode_multiplayer@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_game_matchmade::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_game_matchmade@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_game_matchmade(void) const
//{
//    mangled_ppc("?is_game_matchmade@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_pgcr_data_available@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_pgcr_data_available(void) const
//{
//    mangled_ppc("?is_pgcr_data_available@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_campaign::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_pgcr_data_available_campaign@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_pgcr_data_available_campaign(void) const
//{
//    mangled_ppc("?is_pgcr_data_available_campaign@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_firefight::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_pgcr_data_available_firefight@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_pgcr_data_available_firefight(void) const
//{
//    mangled_ppc("?is_pgcr_data_available_firefight@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_pgcr_data_available_multiplayer::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_pgcr_data_available_multiplayer@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_pgcr_data_available_multiplayer(void) const
//{
//    mangled_ppc("?is_pgcr_data_available_multiplayer@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_exit_experience_data_available::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_exit_experience_data_available@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_exit_experience_data_available(void) const
//{
//    mangled_ppc("?is_exit_experience_data_available@c_lobby_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, bool, bool & (c_lobby_data_component::is_exit_experience_data_suppressed::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@_N$1?is_exit_experience_data_suppressed@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_lobby_data_component::is_exit_experience_data_suppressed(void) const
//{
//    mangled_ppc("?is_exit_experience_data_suppressed@c_lobby_data_component@@QBA_NXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@Vc_cui_string_id@@$1?get_earned_credits_message_string_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@Vc_cui_string_id@@$1?get_earned_credits_message_string_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_lobby_data_component::get_earned_credits_message_string_id(void) const
//{
//    mangled_ppc("?get_earned_credits_message_string_id@c_lobby_data_component@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_lobby_data_component, class c_cui_string_id, void & (c_lobby_data_component::set_earned_credits_message_string_id::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_lobby_data_component@@Vc_cui_string_id@@$1?set_earned_credits_message_string_id@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_lobby_data_component::set_earned_credits_message_string_id(class c_cui_string_id)
//{
//    mangled_ppc("?set_earned_credits_message_string_id@c_lobby_data_component@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, long, long & (c_lobby_data_component::get_earned_credits_amount::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@J$1?get_earned_credits_amount@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_lobby_data_component::get_earned_credits_amount(void) const
//{
//    mangled_ppc("?get_earned_credits_amount@c_lobby_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_lobby_data_component, class c_input_event_component *, class c_input_event_component *& (c_lobby_data_component::get_launch_exit_experience_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_lobby_data_component@@PAVc_input_event_component@@$1?get_launch_exit_experience_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_lobby_data_component::get_launch_exit_experience_event(void) const
//{
//    mangled_ppc("?get_launch_exit_experience_event@c_lobby_data_component@@QBAPAVc_input_event_component@@XZ");
//};

//class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> async_function_make<bool, struct s_file_reference *, class c_synchronized_int32*, struct s_file_reference *, class c_synchronized_int32*>(bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@_NPAUs_file_reference@@PAVc_synchronized_int32@@PAU1@PAV2@@@YA?AV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@P6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@Z01@Z");
//};

//bool async_function_submit<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *)
//{
//    mangled_ppc("??$async_function_submit@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@YA_NABV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@JJPAV?$c_async_task@_N@@@Z");
//};

//void ui_track_delete<struct s_blf_saved_film>(struct s_blf_saved_film *)
//{
//    mangled_ppc("??$ui_track_delete@Us_blf_saved_film@@@@YAXPAUs_blf_saved_film@@@Z");
//};

//public: c_cui_unique_ptr<struct s_blf_saved_film>::c_cui_unique_ptr<struct s_blf_saved_film>(struct s_blf_saved_film *)
//{
//    mangled_ppc("??0?$c_cui_unique_ptr@Us_blf_saved_film@@@@QAA@PAUs_blf_saved_film@@@Z");
//};

//public: void c_cui_unique_ptr<struct s_blf_saved_film>::swap(class c_cui_unique_ptr<struct s_blf_saved_film> &)
//{
//    mangled_ppc("?swap@?$c_cui_unique_ptr@Us_blf_saved_film@@@@QAAXAAV1@@Z");
//};

//public: c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>(bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@QAA@P6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@Z01@Z");
//};

//public: static bool s_async_task_functions::submit<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *)
//{
//    mangled_ppc("??$submit@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@s_async_task_functions@@SA_NABV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@JJPAV?$c_async_task@_N@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<bool> *, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@QAA@PAV?$c_async_task@_N@@ABV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: bool c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@QAA_NXZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function2<bool, bool (*)(struct s_file_reference *, class c_synchronized_int32*), struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@_NV?$c_async_function2@_NP6A_NPAUs_file_reference@@PAVc_synchronized_int32@@@ZPAU1@PAV2@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

