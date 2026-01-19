/* ---------- headers */

#include "omaha\interface\components\roster_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct c_roster_list_data_component::s_item, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_item@c_roster_list_data_component@@$0BA@@@2JB"
// public: static int const c_enum_no_init<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_roster_list_data_component::e_item_type const c_enum_no_init<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_item_type@c_roster_list_data_component@@B"
// public: static int const c_enum_no_init<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_roster_list_data_component::e_status const c_enum_no_init<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_status@c_roster_list_data_component@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_roster_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_roster_list_data_component@@@@0Us_cui_component_description@@B"
// public: static long const s_static_array<enum e_multiplayer_team, 16>::k_element_count; // "?k_element_count@?$s_static_array@W4e_multiplayer_team@@$0BA@@@2JB"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_roster_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_roster_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_roster_list_data_component::c_roster_list_data_component(void);
// merged_84B5F118;
// public: s_static_array<struct c_roster_list_data_component::s_item, 16>::s_static_array<struct c_roster_list_data_component::s_item, 16>(void);
// public: virtual c_roster_list_data_component::~c_roster_list_data_component(void);
// public: c_roster_list_data_component::s_item::s_item(void);
// public: c_roster_list_data_component::s_item::<unnamed-type-player>::<unnamed-type-player>(void);
// protected: virtual void c_roster_list_data_component::do_update(class c_cui_update_context *);
// private: void c_roster_list_data_component::update_items_for_configuring_match_anonymous_opponents(class c_cui_update_context *);
// private: void c_roster_list_data_component::update_items(class c_cui_update_context *);
// private: void c_roster_list_data_component::clear_items(void);
// public: enum e_multiplayer_team c_roster_list_data_component::get_controller_desired_team(enum e_controller_index) const;
// private: static bool c_roster_list_data_component::squad_item_compare_sort(void const *, void const *, void const *);
// private: static bool c_roster_list_data_component::group_item_compare_sort(void const *, void const *, void const *);
// private: struct c_roster_list_data_component::s_item * c_roster_list_data_component::add_item(class c_cui_update_context *, enum c_roster_list_data_component::e_item_type, struct s_player_identifier const *, struct s_player_configuration const *, enum e_controller_index, enum e_user_interface_voice_state, enum c_roster_list_data_component::e_status);
// private: void c_roster_list_data_component::update_item_with_interactive_session_state(struct c_roster_list_data_component::s_item *);
// private: void c_roster_list_data_component::update_item_with_group_session_state(struct c_roster_list_data_component::s_item *);
// private: void c_roster_list_data_component::update_locally_joinable_items(void);
// private: void c_roster_list_data_component::update_matchmaking_items(void);
// private: void c_roster_list_data_component::update_sort_grouping(void);
// public: long c_roster_list_data_component::get_player_experience(long) const;
// public: long c_roster_list_data_component::get_player_skill(long) const;
// private: bool c_roster_list_data_component::players_in_same_party_and_team(struct c_roster_list_data_component::s_item const *, struct c_roster_list_data_component::s_item const *) const;
// public: void c_roster_list_data_component::get_player_primary_emblem_color(long, union argb_color *) const;
// public: void c_roster_list_data_component::get_player_secondary_emblem_color(long, union argb_color *) const;
// public: void c_roster_list_data_component::get_player_background_emblem_color(long, union argb_color *) const;
// public: struct s_player_configuration const * c_roster_list_data_component::get_player_configuration(long) const;
// public: bool c_roster_list_data_component::get_emblem_info(long, struct s_emblem_info *) const;
// public: bool c_roster_list_data_component::get_player_identifier(long, struct s_player_identifier *) const;
// public: long c_roster_list_data_component::get_player_ringspeak_bitmap_frame(long) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_roster_list_data_component>::get_instance(void);
// public: struct c_roster_list_data_component::s_item const & s_static_array<struct c_roster_list_data_component::s_item, 16>::operator[]<long>(long) const;
// class c_cui_component * cui_component_create<class c_roster_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_roster_list_data_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_team_switch_duration::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_team_switch_duration(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_list_data_component, long, void & (c_roster_list_data_component::set_team_switch_duration::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_roster_list_data_component::set_team_switch_duration(long);
// bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, bool, bool & (c_roster_list_data_component::get_show_skill::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_show_skill(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_list_data_component, bool, void & (c_roster_list_data_component::set_show_skill::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_roster_list_data_component::set_show_skill(bool);
// bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_player_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_count(void) const;
// bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_roster_list_data_component, long & (c_roster_list_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_item_type(long) const;
// public: c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum c_roster_list_data_component::e_item_type);
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_type_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_roster_list_data_component::get_item_type_string(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, struct s_player_configuration const *, long & (c_roster_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_roster_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_get_array_property_element_by_out_pointer<class c_roster_list_data_component, struct s_emblem_info, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_get_array_property_element_by_out_pointer<class c_roster_list_data_component, struct s_player_identifier, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_identifier::*)(long, struct s_player_identifier *)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_item::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_item(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_searching_for_player_item::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_searching_for_player_item(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_found_item::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_found_item(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_locally_joinable_item::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_locally_joinable_item(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_team(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_switching_teams::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_switching_teams(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_desired_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_desired_team(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_base_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_base_text_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_base_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_base_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_team_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_team_text_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_team_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_text_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_roster_list_data_component::get_player_bitmap_tint_color(long, union argb_color *) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_emblem_flags@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_emblem_flags(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_foreground_emblem_index::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_foreground_emblem_index(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_background_emblem_index::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_background_emblem_index(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_primary_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_secondary_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_background_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_controller_index(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_user_interface_voice_state, char, 0, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_voice_state(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_voice_present::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_voice_present(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_voice_absent::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_voice_absent(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_quiet::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_voice_quiet(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_speaking::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_voice_speaking(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_in_private_chat::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_voice_in_private_chat(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_status(long) const;
// public: c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_roster_list_data_component::e_status);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_status_error::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_status_error(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_experience::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_skill::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_registered_bungienet_user::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_registered_bungienet_user(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_bungie_pro_member::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_bungie_pro_member(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_bungie_staff::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_bungie_staff(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_background_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_background_bitmap_frame(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community0::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_bungienet_user_community0(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community1::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_bungienet_user_community1(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community2::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_bungienet_user_community2(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_model_choice(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_roster_list_data_component::get_player_model_choice_string(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, wchar_t const *, long & (c_roster_list_data_component::get_item_count::*)(void), wchar_t const *& (c_roster_list_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_roster_list_data_component::get_player_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, wchar_t const *, long & (c_roster_list_data_component::get_item_count::*)(void), wchar_t const *& (c_roster_list_data_component::get_player_service_tag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_roster_list_data_component::get_player_service_tag(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, unsigned __int64, long & (c_roster_list_data_component::get_item_count::*)(void), unsigned __int64& (c_roster_list_data_component::get_player_xuid::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_roster_list_data_component::get_player_xuid(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_ringspeak_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_ringspeak_bitmap_visible::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_player_ringspeak_bitmap_visible(long) const;
// ??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_list_data_component::get_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_roster_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_roster_list_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_roster_list_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_unavailable::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_arena_unavailable(long) const;
// public: bool c_roster_list_data_component::is_player_arena_statistics_available(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_statistics_available::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_tier_available::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_arena_tier_available(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_day_rating_progress_available::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::is_player_arena_day_rating_progress_available(long) const;
// public: bool c_roster_list_data_component::is_player_arena_day_rating_available(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_day_rating_available::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_tier::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_arena_tier(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating_progress::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_arena_day_rating_progress(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating_progress_max::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_arena_day_rating_progress_max(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_roster_list_data_component::get_player_arena_day_rating(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_grade(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_sub_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_sub_grade(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_recent_grade_advancement::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_recent_grade_advancement(long) const;
// bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_recent_sub_grade_advancement::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_roster_list_data_component::get_recent_sub_grade_advancement(long) const;
// public: enum e_multiplayer_team & s_static_array<enum e_multiplayer_team, 16>::operator[]<long>(long);
// public: struct c_roster_list_data_component::s_item & s_static_array<struct c_roster_list_data_component::s_item, 16>::operator[]<long>(long);
// public: c_roster_list_data_component::c_roster_list_data_component(class c_roster_list_data_component const &);
// public: static bool s_static_array<struct c_roster_list_data_component::s_item, 16>::valid<long>(long);
// void cui_property_value_set<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &);
// public: static bool s_static_array<enum e_multiplayer_team, 16>::valid<long>(long);
// public: enum c_roster_list_data_component::e_item_type c_enum_no_init<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum c_roster_list_data_component::e_item_type(void) const;
// public: enum c_roster_list_data_component::e_status c_enum_no_init<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_roster_list_data_component::e_status(void) const;
// void g_item_type_enum_table::`dynamic atexit destructor'(void);
// void g_item_type_string_enum_table::`dynamic atexit destructor'(void);
// void g_player_status_enum_table::`dynamic atexit destructor'(void);
// void g_player_model_choice_enum_table::`dynamic atexit destructor'(void);
// void g_player_model_choice_string_enum_table::`dynamic atexit destructor'(void);

//public: c_roster_list_data_component::c_roster_list_data_component(void)
//{
//    mangled_ppc("??0c_roster_list_data_component@@QAA@XZ");
//};

//merged_84B5F118
//{
//    mangled_ppc("merged_84B5F118");
//};

//public: s_static_array<struct c_roster_list_data_component::s_item, 16>::s_static_array<struct c_roster_list_data_component::s_item, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_item@c_roster_list_data_component@@$0BA@@@QAA@XZ");
//};

//public: virtual c_roster_list_data_component::~c_roster_list_data_component(void)
//{
//    mangled_ppc("??1c_roster_list_data_component@@UAA@XZ");
//};

//public: c_roster_list_data_component::s_item::s_item(void)
//{
//    mangled_ppc("??0s_item@c_roster_list_data_component@@QAA@XZ");
//};

//public: c_roster_list_data_component::s_item::<unnamed-type-player>::<unnamed-type-player>(void)
//{
//    mangled_ppc("??0<unnamed-type-player>@s_item@c_roster_list_data_component@@QAA@XZ");
//};

//protected: virtual void c_roster_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_roster_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_roster_list_data_component::update_items_for_configuring_match_anonymous_opponents(class c_cui_update_context *)
//{
//    mangled_ppc("?update_items_for_configuring_match_anonymous_opponents@c_roster_list_data_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_roster_list_data_component::update_items(class c_cui_update_context *)
//{
//    mangled_ppc("?update_items@c_roster_list_data_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_roster_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_roster_list_data_component@@AAAXXZ");
//};

//public: enum e_multiplayer_team c_roster_list_data_component::get_controller_desired_team(enum e_controller_index) const
//{
//    mangled_ppc("?get_controller_desired_team@c_roster_list_data_component@@QBA?AW4e_multiplayer_team@@W4e_controller_index@@@Z");
//};

//private: static bool c_roster_list_data_component::squad_item_compare_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?squad_item_compare_sort@c_roster_list_data_component@@CA_NPBX00@Z");
//};

//private: static bool c_roster_list_data_component::group_item_compare_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?group_item_compare_sort@c_roster_list_data_component@@CA_NPBX00@Z");
//};

//private: struct c_roster_list_data_component::s_item * c_roster_list_data_component::add_item(class c_cui_update_context *, enum c_roster_list_data_component::e_item_type, struct s_player_identifier const *, struct s_player_configuration const *, enum e_controller_index, enum e_user_interface_voice_state, enum c_roster_list_data_component::e_status)
//{
//    mangled_ppc("?add_item@c_roster_list_data_component@@AAAPAUs_item@1@PAVc_cui_update_context@@W4e_item_type@1@PBUs_player_identifier@@PBUs_player_configuration@@W4e_controller_index@@W4e_user_interface_voice_state@@W4e_status@1@@Z");
//};

//private: void c_roster_list_data_component::update_item_with_interactive_session_state(struct c_roster_list_data_component::s_item *)
//{
//    mangled_ppc("?update_item_with_interactive_session_state@c_roster_list_data_component@@AAAXPAUs_item@1@@Z");
//};

//private: void c_roster_list_data_component::update_item_with_group_session_state(struct c_roster_list_data_component::s_item *)
//{
//    mangled_ppc("?update_item_with_group_session_state@c_roster_list_data_component@@AAAXPAUs_item@1@@Z");
//};

//private: void c_roster_list_data_component::update_locally_joinable_items(void)
//{
//    mangled_ppc("?update_locally_joinable_items@c_roster_list_data_component@@AAAXXZ");
//};

//private: void c_roster_list_data_component::update_matchmaking_items(void)
//{
//    mangled_ppc("?update_matchmaking_items@c_roster_list_data_component@@AAAXXZ");
//};

//private: void c_roster_list_data_component::update_sort_grouping(void)
//{
//    mangled_ppc("?update_sort_grouping@c_roster_list_data_component@@AAAXXZ");
//};

//public: long c_roster_list_data_component::get_player_experience(long) const
//{
//    mangled_ppc("?get_player_experience@c_roster_list_data_component@@QBAJJ@Z");
//};

//public: long c_roster_list_data_component::get_player_skill(long) const
//{
//    mangled_ppc("?get_player_skill@c_roster_list_data_component@@QBAJJ@Z");
//};

//private: bool c_roster_list_data_component::players_in_same_party_and_team(struct c_roster_list_data_component::s_item const *, struct c_roster_list_data_component::s_item const *) const
//{
//    mangled_ppc("?players_in_same_party_and_team@c_roster_list_data_component@@ABA_NPBUs_item@1@0@Z");
//};

//public: void c_roster_list_data_component::get_player_primary_emblem_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_primary_emblem_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//public: void c_roster_list_data_component::get_player_secondary_emblem_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_secondary_emblem_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//public: void c_roster_list_data_component::get_player_background_emblem_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_background_emblem_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//public: struct s_player_configuration const * c_roster_list_data_component::get_player_configuration(long) const
//{
//    mangled_ppc("?get_player_configuration@c_roster_list_data_component@@QBAPBUs_player_configuration@@J@Z");
//};

//public: bool c_roster_list_data_component::get_emblem_info(long, struct s_emblem_info *) const
//{
//    mangled_ppc("?get_emblem_info@c_roster_list_data_component@@QBA_NJPAUs_emblem_info@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_identifier(long, struct s_player_identifier *) const
//{
//    mangled_ppc("?get_player_identifier@c_roster_list_data_component@@QBA_NJPAUs_player_identifier@@@Z");
//};

//public: long c_roster_list_data_component::get_player_ringspeak_bitmap_frame(long) const
//{
//    mangled_ppc("?get_player_ringspeak_bitmap_frame@c_roster_list_data_component@@QBAJJ@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_roster_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_roster_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: struct c_roster_list_data_component::s_item const & s_static_array<struct c_roster_list_data_component::s_item, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_item@c_roster_list_data_component@@$0BA@@@QBAABUs_item@c_roster_list_data_component@@J@Z");
//};

//class c_cui_component * cui_component_create<class c_roster_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_roster_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_roster_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_roster_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_team_switch_duration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@J$1?get_team_switch_duration@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_team_switch_duration(void) const
//{
//    mangled_ppc("?get_team_switch_duration@c_roster_list_data_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_list_data_component, long, void & (c_roster_list_data_component::set_team_switch_duration::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_list_data_component@@J$1?set_team_switch_duration@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::set_team_switch_duration(long)
//{
//    mangled_ppc("?set_team_switch_duration@c_roster_list_data_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, bool, bool & (c_roster_list_data_component::get_show_skill::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@_N$1?get_show_skill@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_show_skill(void) const
//{
//    mangled_ppc("?get_show_skill@c_roster_list_data_component@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_list_data_component, bool, void & (c_roster_list_data_component::set_show_skill::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_list_data_component@@_N$1?set_show_skill@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::set_show_skill(bool)
//{
//    mangled_ppc("?set_show_skill@c_roster_list_data_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_player_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@J$1?get_player_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_roster_list_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_roster_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_roster_list_data_component, long & (c_roster_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_roster_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_item_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_item_type(long) const
//{
//    mangled_ppc("?get_item_type@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@J@Z");
//};

//public: c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum c_roster_list_data_component::e_item_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_item_type@c_roster_list_data_component@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_type_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_type_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_roster_list_data_component::get_item_type_string(long) const
//{
//    mangled_ppc("?get_item_type_string@c_roster_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, struct s_player_configuration const *, long & (c_roster_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_roster_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@PBUs_player_configuration@@$1?get_item_count@1@QBAJXZ$1?get_player_configuration@1@QBAPBU2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_roster_list_data_component, struct s_emblem_info, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Us_emblem_info@@$1?get_item_count@1@QBAJXZ$1?get_emblem_info@1@QBA_NJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_roster_list_data_component, struct s_player_identifier, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_identifier::*)(long, struct s_player_identifier *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Us_player_identifier@@$1?get_item_count@1@QBAJXZ$1?get_player_identifier@1@QBA_NJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_item::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_item@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_item(long) const
//{
//    mangled_ppc("?is_player_item@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_searching_for_player_item::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_searching_for_player_item@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_searching_for_player_item(long) const
//{
//    mangled_ppc("?is_searching_for_player_item@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_found_item::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_found_item@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_found_item(long) const
//{
//    mangled_ppc("?is_player_found_item@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_locally_joinable_item::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_locally_joinable_item@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_locally_joinable_item(long) const
//{
//    mangled_ppc("?is_locally_joinable_item@c_roster_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_team(long) const
//{
//    mangled_ppc("?get_player_team@c_roster_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_switching_teams::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_switching_teams@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_switching_teams(long) const
//{
//    mangled_ppc("?is_player_switching_teams@c_roster_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_desired_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_desired_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_desired_team(long) const
//{
//    mangled_ppc("?get_player_desired_team@c_roster_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_base_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_base_text_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_base_text_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_base_text_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_base_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_base_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_base_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_base_bitmap_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_team_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_team_text_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_team_text_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_team_text_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_team_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_team_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_team_bitmap_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_text_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_text_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_text_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::get_player_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_bitmap_tint_color@c_roster_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_emblem_flags@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_emblem_flags@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_emblem_flags(long) const
//{
//    mangled_ppc("?get_player_emblem_flags@c_roster_list_data_component@@QBA?AV?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_foreground_emblem_index::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_foreground_emblem_index@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_foreground_emblem_index(long) const
//{
//    mangled_ppc("?get_player_foreground_emblem_index@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_background_emblem_index::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_background_emblem_index@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_background_emblem_index(long) const
//{
//    mangled_ppc("?get_player_background_emblem_index@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_primary_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_primary_emblem_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_secondary_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_secondary_emblem_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_roster_list_data_component, union argb_color, long & (c_roster_list_data_component::get_item_count::*)(void), void & (c_roster_list_data_component::get_player_background_emblem_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_roster_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_background_emblem_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_controller_index(long) const
//{
//    mangled_ppc("?get_player_controller_index@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_user_interface_voice_state, char, 0, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_voice_state(long) const
//{
//    mangled_ppc("?get_player_voice_state@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_voice_present::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_voice_present@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_voice_present(long) const
//{
//    mangled_ppc("?get_player_voice_present@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_voice_absent::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_voice_absent@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_voice_absent(long) const
//{
//    mangled_ppc("?get_player_voice_absent@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_quiet::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_voice_quiet@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_voice_quiet(long) const
//{
//    mangled_ppc("?is_player_voice_quiet@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_speaking::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_voice_speaking@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_voice_speaking(long) const
//{
//    mangled_ppc("?is_player_voice_speaking@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_voice_in_private_chat::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_voice_in_private_chat@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_voice_in_private_chat(long) const
//{
//    mangled_ppc("?is_player_voice_in_private_chat@c_roster_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_status@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_status(long) const
//{
//    mangled_ppc("?get_player_status@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_roster_list_data_component::e_status)
//{
//    mangled_ppc("??0?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_status@c_roster_list_data_component@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_status_error::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_status_error@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_status_error(long) const
//{
//    mangled_ppc("?is_player_status_error@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_experience::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_experience@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_skill::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_skill@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_registered_bungienet_user::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_registered_bungienet_user@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_registered_bungienet_user(long) const
//{
//    mangled_ppc("?is_player_registered_bungienet_user@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_bungie_pro_member::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_bungie_pro_member@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_bungie_pro_member(long) const
//{
//    mangled_ppc("?is_player_bungie_pro_member@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_bungie_staff::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_bungie_staff@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_bungie_staff(long) const
//{
//    mangled_ppc("?is_player_bungie_staff@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_background_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_background_bitmap_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_background_bitmap_frame(long) const
//{
//    mangled_ppc("?get_player_background_bitmap_frame@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community0::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_bungienet_user_community0@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_bungienet_user_community0(long) const
//{
//    mangled_ppc("?get_player_bungienet_user_community0@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community1::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_bungienet_user_community1@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_bungienet_user_community1(long) const
//{
//    mangled_ppc("?get_player_bungienet_user_community1@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_bungienet_user_community2::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_bungienet_user_community2@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_bungienet_user_community2(long) const
//{
//    mangled_ppc("?get_player_bungienet_user_community2@c_roster_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_model_choice(long) const
//{
//    mangled_ppc("?get_player_model_choice@c_roster_list_data_component@@QBA?AV?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_player_model_choice_string@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_roster_list_data_component::get_player_model_choice_string(long) const
//{
//    mangled_ppc("?get_player_model_choice_string@c_roster_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, wchar_t const *, long & (c_roster_list_data_component::get_item_count::*)(void), wchar_t const *& (c_roster_list_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_player_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_roster_list_data_component::get_player_name(long) const
//{
//    mangled_ppc("?get_player_name@c_roster_list_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, wchar_t const *, long & (c_roster_list_data_component::get_item_count::*)(void), wchar_t const *& (c_roster_list_data_component::get_player_service_tag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_player_service_tag@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_roster_list_data_component::get_player_service_tag(long) const
//{
//    mangled_ppc("?get_player_service_tag@c_roster_list_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, unsigned __int64, long & (c_roster_list_data_component::get_item_count::*)(void), unsigned __int64& (c_roster_list_data_component::get_player_xuid::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_K$1?get_item_count@1@QBAJXZ$1?get_player_xuid@1@QBA_KJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_roster_list_data_component::get_player_xuid(long) const
//{
//    mangled_ppc("?get_player_xuid@c_roster_list_data_component@@QBA_KJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_ringspeak_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_ringspeak_bitmap_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_player_ringspeak_bitmap_visible::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_ringspeak_bitmap_visible@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_player_ringspeak_bitmap_visible(long) const
//{
//    mangled_ppc("?get_player_ringspeak_bitmap_visible@c_roster_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_roster_list_data_component::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_roster_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_roster_list_data_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_roster_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_roster_list_data_component::set_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_index@c_roster_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_unavailable::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_arena_unavailable@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_arena_unavailable(long) const
//{
//    mangled_ppc("?is_player_arena_unavailable@c_roster_list_data_component@@QBA_NJ@Z");
//};

//public: bool c_roster_list_data_component::is_player_arena_statistics_available(long) const
//{
//    mangled_ppc("?is_player_arena_statistics_available@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_statistics_available::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_arena_statistics_available@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_tier_available::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_arena_tier_available@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_arena_tier_available(long) const
//{
//    mangled_ppc("?is_player_arena_tier_available@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_day_rating_progress_available::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_arena_day_rating_progress_available@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::is_player_arena_day_rating_progress_available(long) const
//{
//    mangled_ppc("?is_player_arena_day_rating_progress_available@c_roster_list_data_component@@QBA_NJ@Z");
//};

//public: bool c_roster_list_data_component::is_player_arena_day_rating_available(long) const
//{
//    mangled_ppc("?is_player_arena_day_rating_available@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::is_player_arena_day_rating_available::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?is_player_arena_day_rating_available@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_tier::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_arena_tier@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_arena_tier(long) const
//{
//    mangled_ppc("?get_player_arena_tier@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating_progress::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_arena_day_rating_progress@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_arena_day_rating_progress(long) const
//{
//    mangled_ppc("?get_player_arena_day_rating_progress@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating_progress_max::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_arena_day_rating_progress_max@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_arena_day_rating_progress_max(long) const
//{
//    mangled_ppc("?get_player_arena_day_rating_progress_max@c_roster_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, long, long & (c_roster_list_data_component::get_item_count::*)(void), long & (c_roster_list_data_component::get_player_arena_day_rating::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_arena_day_rating@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_roster_list_data_component::get_player_arena_day_rating(long) const
//{
//    mangled_ppc("?get_player_arena_day_rating@c_roster_list_data_component@@QBAJJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_player_grade, char, -1, 21, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_grade(long) const
//{
//    mangled_ppc("?get_player_grade@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_player_grade@@D$0?0$0BF@Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_sub_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@V?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_sub_grade@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_player_sub_grade, char, -1, 5, struct s_default_enum_string_resolver> c_roster_list_data_component::get_player_sub_grade(long) const
//{
//    mangled_ppc("?get_player_sub_grade@c_roster_list_data_component@@QBA?AV?$c_enum@W4e_player_sub_grade@@D$0?0$04Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_recent_grade_advancement::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_recent_grade_advancement@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_recent_grade_advancement(long) const
//{
//    mangled_ppc("?get_recent_grade_advancement@c_roster_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_roster_list_data_component, bool, long & (c_roster_list_data_component::get_item_count::*)(void), bool & (c_roster_list_data_component::get_recent_sub_grade_advancement::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_roster_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_recent_sub_grade_advancement@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_roster_list_data_component::get_recent_sub_grade_advancement(long) const
//{
//    mangled_ppc("?get_recent_sub_grade_advancement@c_roster_list_data_component@@QBA_NJ@Z");
//};

//public: enum e_multiplayer_team & s_static_array<enum e_multiplayer_team, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_multiplayer_team@@$0BA@@@QAAAAW4e_multiplayer_team@@J@Z");
//};

//public: struct c_roster_list_data_component::s_item & s_static_array<struct c_roster_list_data_component::s_item, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_item@c_roster_list_data_component@@$0BA@@@QAAAAUs_item@c_roster_list_data_component@@J@Z");
//};

//public: c_roster_list_data_component::c_roster_list_data_component(class c_roster_list_data_component const &)
//{
//    mangled_ppc("??0c_roster_list_data_component@@QAA@ABV0@@Z");
//};

//public: static bool s_static_array<struct c_roster_list_data_component::s_item, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_item@c_roster_list_data_component@@$0BA@@@SA_NJ@Z");
//};

//void cui_property_value_set<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<enum e_multiplayer_team, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_multiplayer_team@@$0BA@@@SA_NJ@Z");
//};

//public: enum c_roster_list_data_component::e_item_type c_enum_no_init<enum c_roster_list_data_component::e_item_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum c_roster_list_data_component::e_item_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_item_type@c_roster_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_item_type@c_roster_list_data_component@@XZ");
//};

//public: enum c_roster_list_data_component::e_status c_enum_no_init<enum c_roster_list_data_component::e_status, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_roster_list_data_component::e_status(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_status@c_roster_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_status@c_roster_list_data_component@@XZ");
//};

//void g_item_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_item_type_enum_table@@YAXXZ");
//};

//void g_item_type_string_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_item_type_string_enum_table@@YAXXZ");
//};

//void g_player_status_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_status_enum_table@@YAXXZ");
//};

//void g_player_model_choice_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_model_choice_enum_table@@YAXXZ");
//};

//void g_player_model_choice_string_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_model_choice_string_enum_table@@YAXXZ");
//};

