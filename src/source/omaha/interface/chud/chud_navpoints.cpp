/* ---------- headers */

#include "omaha\interface\chud\chud_navpoints.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_chud_scripted_object_manager::initialize(long);
// public: void c_chud_scripted_object_manager::reset(void);
// public: void c_chud_scripted_object_manager::update(void);
// public: void c_chud_scripted_object_manager::draw(enum e_output_user_index);
// public: bool c_chud_scripted_object_manager::scripted_object_is_active(long);
// public: struct c_chud_scripted_object_manager::s_scripted_object_info * c_chud_scripted_object_manager::get_scripted_object(long);
// public: void c_chud_scripted_object_manager::track_object(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long);
// public: void c_chud_scripted_object_manager::set_tracked_object_vertical_offset(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, float);
// public: void c_chud_navpoint_manager::initialize(enum e_output_user_index);
// public: void c_chud_navpoint_manager::reset(void);
// public: void c_chud_navpoint_manager::submit_navpoint(struct c_chud_navpoint const *);
// public: void c_chud_navpoint_manager::update(bool);
// private: void c_chud_navpoint_manager::submit_laser_designated_navpoints(void);
// private: void c_chud_navpoint_manager::submit_campaign_navpoints(void);
// private: long c_chud_navpoint_manager::determine_distanced_navpoint(void);
// private: long c_chud_navpoint_manager::get_managed_navpoint_index(long) const;
// private: long c_chud_navpoint_manager::new_managed_navpoint_index(void);
// void chud_scripting_track_object_for_player_internal(long, enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long);
// void chud_scripting_track_object_for_player(long, long, bool, long, long);
// void chud_scripting_track_object_for_player(long, long, bool);
// void chud_scripting_track_object_for_player_with_priority(long, long, long);
// void chud_scripting_track_object_for_player_with_priority(long, long, long, long);
// void chud_scripting_track_object_internal(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long);
// void chud_scripting_track_object_internal(long, bool, long, long);
// void chud_scripting_track_object(long, bool);
// void chud_scripting_track_object_with_priority(long, long);
// void chud_scripting_track_object_with_priority(long, long, long);
// void chud_scripting_track_cutscene_flag_for_player(long, short, bool, long, long);
// void chud_scripting_track_cutscene_flag_for_player(long, short, bool);
// void chud_scripting_track_cutscene_flag_for_player_with_priority(long, short, long);
// void chud_scripting_track_cutscene_flag_for_player_with_priority(long, short, long, long);
// void chud_scripting_track_cutscene_flag_internal(short, bool, long, long);
// void chud_scripting_track_cutscene_flag(short, bool);
// void chud_scripting_track_cutscene_flag_with_priority(short, long);
// void chud_scripting_track_cutscene_flag_with_priority(short, long, long);
// void chud_scripting_object_set_vertical_offset(long, float);
// void chud_scripting_cutscene_flag_set_vertical_offset(short, float);
// void chud_show_arbiter_ai_navpoint(bool);
// void player_navpoint_data_set_action(struct s_player_navpoint_data *, char);
// void player_navpoint_data_update(struct s_player_navpoint_data *);
// void campaign_navpoints_player_got_damaged(long);
// void campaign_navpoints_player_fired_weapon(long);
// bool operator!=<enum e_chud_navpoint_flags>(enum e_chud_navpoint_flags const &, enum e_none_sentinel const &);
// bool operator==<enum e_chud_navpoint_flags>(enum e_chud_navpoint_flags const &, enum e_none_sentinel const &);

//public: void c_chud_scripted_object_manager::initialize(long)
//{
//    mangled_ppc("?initialize@c_chud_scripted_object_manager@@QAAXJ@Z");
//};

//public: void c_chud_scripted_object_manager::reset(void)
//{
//    mangled_ppc("?reset@c_chud_scripted_object_manager@@QAAXXZ");
//};

//public: void c_chud_scripted_object_manager::update(void)
//{
//    mangled_ppc("?update@c_chud_scripted_object_manager@@QAAXXZ");
//};

//public: void c_chud_scripted_object_manager::draw(enum e_output_user_index)
//{
//    mangled_ppc("?draw@c_chud_scripted_object_manager@@QAAXW4e_output_user_index@@@Z");
//};

//public: bool c_chud_scripted_object_manager::scripted_object_is_active(long)
//{
//    mangled_ppc("?scripted_object_is_active@c_chud_scripted_object_manager@@QAA_NJ@Z");
//};

//public: struct c_chud_scripted_object_manager::s_scripted_object_info * c_chud_scripted_object_manager::get_scripted_object(long)
//{
//    mangled_ppc("?get_scripted_object@c_chud_scripted_object_manager@@QAAPAUs_scripted_object_info@1@J@Z");
//};

//public: void c_chud_scripted_object_manager::track_object(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long)
//{
//    mangled_ppc("?track_object@c_chud_scripted_object_manager@@QAAXW4e_scripted_object_type@1@ABTs_scripted_object_union@1@_NJJ@Z");
//};

//public: void c_chud_scripted_object_manager::set_tracked_object_vertical_offset(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, float)
//{
//    mangled_ppc("?set_tracked_object_vertical_offset@c_chud_scripted_object_manager@@QAAXW4e_scripted_object_type@1@ABTs_scripted_object_union@1@M@Z");
//};

//public: void c_chud_navpoint_manager::initialize(enum e_output_user_index)
//{
//    mangled_ppc("?initialize@c_chud_navpoint_manager@@QAAXW4e_output_user_index@@@Z");
//};

//public: void c_chud_navpoint_manager::reset(void)
//{
//    mangled_ppc("?reset@c_chud_navpoint_manager@@QAAXXZ");
//};

//public: void c_chud_navpoint_manager::submit_navpoint(struct c_chud_navpoint const *)
//{
//    mangled_ppc("?submit_navpoint@c_chud_navpoint_manager@@QAAXPBUc_chud_navpoint@@@Z");
//};

//public: void c_chud_navpoint_manager::update(bool)
//{
//    mangled_ppc("?update@c_chud_navpoint_manager@@QAAX_N@Z");
//};

//private: void c_chud_navpoint_manager::submit_laser_designated_navpoints(void)
//{
//    mangled_ppc("?submit_laser_designated_navpoints@c_chud_navpoint_manager@@AAAXXZ");
//};

//private: void c_chud_navpoint_manager::submit_campaign_navpoints(void)
//{
//    mangled_ppc("?submit_campaign_navpoints@c_chud_navpoint_manager@@AAAXXZ");
//};

//private: long c_chud_navpoint_manager::determine_distanced_navpoint(void)
//{
//    mangled_ppc("?determine_distanced_navpoint@c_chud_navpoint_manager@@AAAJXZ");
//};

//private: long c_chud_navpoint_manager::get_managed_navpoint_index(long) const
//{
//    mangled_ppc("?get_managed_navpoint_index@c_chud_navpoint_manager@@ABAJJ@Z");
//};

//private: long c_chud_navpoint_manager::new_managed_navpoint_index(void)
//{
//    mangled_ppc("?new_managed_navpoint_index@c_chud_navpoint_manager@@AAAJXZ");
//};

//void chud_scripting_track_object_for_player_internal(long, enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_for_player_internal@@YAXJW4e_scripted_object_type@c_chud_scripted_object_manager@@ABTs_scripted_object_union@2@_NJJ@Z");
//};

//void chud_scripting_track_object_for_player(long, long, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_for_player@@YAXJJ_NJJ@Z");
//};

//void chud_scripting_track_object_for_player(long, long, bool)
//{
//    mangled_ppc("?chud_scripting_track_object_for_player@@YAXJJ_N@Z");
//};

//void chud_scripting_track_object_for_player_with_priority(long, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_for_player_with_priority@@YAXJJJ@Z");
//};

//void chud_scripting_track_object_for_player_with_priority(long, long, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_for_player_with_priority@@YAXJJJJ@Z");
//};

//void chud_scripting_track_object_internal(enum c_chud_scripted_object_manager::e_scripted_object_type, union c_chud_scripted_object_manager::s_scripted_object_union const &, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_internal@@YAXW4e_scripted_object_type@c_chud_scripted_object_manager@@ABTs_scripted_object_union@2@_NJJ@Z");
//};

//void chud_scripting_track_object_internal(long, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_internal@@YAXJ_NJJ@Z");
//};

//void chud_scripting_track_object(long, bool)
//{
//    mangled_ppc("?chud_scripting_track_object@@YAXJ_N@Z");
//};

//void chud_scripting_track_object_with_priority(long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_with_priority@@YAXJJ@Z");
//};

//void chud_scripting_track_object_with_priority(long, long, long)
//{
//    mangled_ppc("?chud_scripting_track_object_with_priority@@YAXJJJ@Z");
//};

//void chud_scripting_track_cutscene_flag_for_player(long, short, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_for_player@@YAXJF_NJJ@Z");
//};

//void chud_scripting_track_cutscene_flag_for_player(long, short, bool)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_for_player@@YAXJF_N@Z");
//};

//void chud_scripting_track_cutscene_flag_for_player_with_priority(long, short, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_for_player_with_priority@@YAXJFJ@Z");
//};

//void chud_scripting_track_cutscene_flag_for_player_with_priority(long, short, long, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_for_player_with_priority@@YAXJFJJ@Z");
//};

//void chud_scripting_track_cutscene_flag_internal(short, bool, long, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_internal@@YAXF_NJJ@Z");
//};

//void chud_scripting_track_cutscene_flag(short, bool)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag@@YAXF_N@Z");
//};

//void chud_scripting_track_cutscene_flag_with_priority(short, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_with_priority@@YAXFJ@Z");
//};

//void chud_scripting_track_cutscene_flag_with_priority(short, long, long)
//{
//    mangled_ppc("?chud_scripting_track_cutscene_flag_with_priority@@YAXFJJ@Z");
//};

//void chud_scripting_object_set_vertical_offset(long, float)
//{
//    mangled_ppc("?chud_scripting_object_set_vertical_offset@@YAXJM@Z");
//};

//void chud_scripting_cutscene_flag_set_vertical_offset(short, float)
//{
//    mangled_ppc("?chud_scripting_cutscene_flag_set_vertical_offset@@YAXFM@Z");
//};

//void chud_show_arbiter_ai_navpoint(bool)
//{
//    mangled_ppc("?chud_show_arbiter_ai_navpoint@@YAX_N@Z");
//};

//void player_navpoint_data_set_action(struct s_player_navpoint_data *, char)
//{
//    mangled_ppc("?player_navpoint_data_set_action@@YAXPAUs_player_navpoint_data@@D@Z");
//};

//void player_navpoint_data_update(struct s_player_navpoint_data *)
//{
//    mangled_ppc("?player_navpoint_data_update@@YAXPAUs_player_navpoint_data@@@Z");
//};

//void campaign_navpoints_player_got_damaged(long)
//{
//    mangled_ppc("?campaign_navpoints_player_got_damaged@@YAXJ@Z");
//};

//void campaign_navpoints_player_fired_weapon(long)
//{
//    mangled_ppc("?campaign_navpoints_player_fired_weapon@@YAXJ@Z");
//};

//bool operator!=<enum e_chud_navpoint_flags>(enum e_chud_navpoint_flags const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_chud_navpoint_flags@@@@YA_NABW4e_chud_navpoint_flags@@ABW4e_none_sentinel@@@Z");
//};

//bool operator==<enum e_chud_navpoint_flags>(enum e_chud_navpoint_flags const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_chud_navpoint_flags@@@@YA_NABW4e_chud_navpoint_flags@@ABW4e_none_sentinel@@@Z");
//};

