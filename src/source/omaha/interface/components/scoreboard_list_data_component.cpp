/* ---------- headers */

#include "omaha\interface\components\scoreboard_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::k_element_count; // "?k_element_count@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@2JB"
// public: static int const c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_scoreboard_list_data_component::e_scoreboard_mode const c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@2W4e_scoreboard_mode@c_scoreboard_list_data_component@@B"
// public: static int const c_enum_no_init<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_synchronous_halt_type const c_enum_no_init<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_synchronous_halt_type@@B"
// public: static int const c_enum_no_init<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_user_interface_show_busy_state const c_enum_no_init<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@2W4e_user_interface_show_busy_state@@B"
// public: static int const c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_scoreboard_list_data_component::e_player_row_type const c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_player_row_type@c_scoreboard_list_data_component@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_scoreboard_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_scoreboard_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_scoreboard_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_scoreboard_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_scoreboard_list_data_component::c_scoreboard_list_data_component(void);
// public: void c_scoreboard_list_data_component::set_scoreboard_mode(class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// public: virtual long c_scoreboard_list_data_component::get_element_selectable(long) const;
// public: class c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_row_type(long) const;
// merged_84B7F240;
// public: s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>(void);
// public: virtual c_scoreboard_list_data_component::~c_scoreboard_list_data_component(void);
// public: c_scoreboard_list_data_component::s_player_row::s_player_row(void);
// protected: virtual void c_scoreboard_list_data_component::do_update(class c_cui_update_context *);
// protected: bool c_scoreboard_list_data_component::add_player_internal(class c_cui_update_context *, enum c_scoreboard_list_data_component::e_player_row_type, long, long, struct s_player_configuration const *, struct s_player_identifier const *, wchar_t const *, wchar_t const *, long, enum e_multiplayer_team, bool, enum e_controller_index, enum e_user_interface_voice_state, float, bool, long, long, long, long, bool, bool, bool);
// protected: void c_scoreboard_list_data_component::update_scoreboard(class c_cui_update_context *);
// protected: void c_scoreboard_list_data_component::update_scoreboard_game(class c_cui_update_context *);
// protected: void c_scoreboard_list_data_component::update_scoreboard_session(class c_cui_update_context *);
// protected: bool c_scoreboard_list_data_component::get_player_appearance(long, struct s_player_appearance *);
// protected: static bool c_scoreboard_list_data_component::scoreboard_sort_proc_for_multiplayer(void const *, void const *, void const *);
// protected: static bool c_scoreboard_list_data_component::scoreboard_sort_proc_for_session(void const *, void const *, void const *);
// public: long c_scoreboard_list_data_component::get_player_ringspeak_bitmap_frame(long) const;
// public: struct s_player_configuration const * c_scoreboard_list_data_component::get_player_configuration(long) const;
// public: bool c_scoreboard_list_data_component::get_emblem_info(long, struct s_emblem_info *) const;
// public: bool c_scoreboard_list_data_component::get_player_identifier(long, struct s_player_identifier *) const;
// public: wchar_t const * c_scoreboard_list_data_component::get_player_name(long) const;
// public: static long s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::get_count(void);
// ?sort_range@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum c_scoreboard_list_data_component::e_scoreboard_mode);
// public: enum c_scoreboard_list_data_component::e_scoreboard_mode c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum c_scoreboard_list_data_component::e_scoreboard_mode(void) const;
// public: c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_scoreboard_list_data_component::e_player_row_type);
// public: bool c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum c_scoreboard_list_data_component::e_player_row_type) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_scoreboard_list_data_component>::get_instance(void);
// public: void c_static_wchar_string<48>::clear(void);
// public: wchar_t const * c_static_wchar_string<48>::operator wchar_t const *(void) const;
// public: struct c_scoreboard_list_data_component::s_player_row const & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<long>(long) const;
// ??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_scoreboard_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_scoreboard_mode(void) const;
// bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_scoreboard_mode::*)(class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_item_count(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_synchronous_game_halt_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_synchronous_game_halt_type(void) const;
// public: c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_synchronous_halt_type);
// bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_synchronous_halt_seconds_til_give_up::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_synchronous_halt_seconds_til_give_up(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@$1?get_busy_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_busy_state(void) const;
// public: c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_user_interface_show_busy_state);
// long cui_object_component_get_property_element_count<class c_scoreboard_list_data_component, long & (c_scoreboard_list_data_component::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, struct s_player_configuration const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_scoreboard_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, struct s_emblem_info, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, struct s_player_identifier, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_identifier::*)(long, struct s_player_identifier *)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_scoreboard_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_controller_rating::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_controller_rating(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_desired_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_desired_team_index(void) const;
// bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_desired_team_index::*)(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_scoreboard_list_data_component::set_desired_team_index(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>);
// ??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_row_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, wchar_t const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), wchar_t const *& (c_scoreboard_list_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, wchar_t const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), wchar_t const *& (c_scoreboard_list_data_component::get_player_service_tag::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_scoreboard_list_data_component::get_player_service_tag(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_team(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_base_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_scoreboard_list_data_component::get_player_base_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_scoreboard_list_data_component::get_player_team_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_scoreboard_list_data_component::get_player_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_show_team::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_scoreboard_list_data_component::get_player_show_team(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_controller_index(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_user_interface_voice_state, char, 0, 5, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_voice_state(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_ringspeak_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, float, long & (c_scoreboard_list_data_component::get_item_count::*)(void), float & (c_scoreboard_list_data_component::get_player_connectivity_rating::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: float c_scoreboard_list_data_component::get_player_connectivity_rating(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_show_score::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_scoreboard_list_data_component::get_player_show_score(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_place::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_player_place(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_score::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_player_score(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_round_score::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_player_round_score(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_rating::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_scoreboard_list_data_component::get_player_rating(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_is_dead::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_scoreboard_list_data_component::get_player_is_dead(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_left_game::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_scoreboard_list_data_component::get_player_left_game(long) const;
// bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_halting_synchronous_game::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_scoreboard_list_data_component::get_player_halting_synchronous_game(long) const;
// public: struct c_scoreboard_list_data_component::s_player_row & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<int>(int);
// public: struct c_scoreboard_list_data_component::s_player_row & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<long>(long);
// public: c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: static bool s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::valid<long>(long);
// void cui_property_value_set<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver> const &);
// void cui_property_value_set<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &);
// public: static bool s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::valid<int>(int);
// public: bool c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: enum e_synchronous_halt_type c_enum_no_init<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_synchronous_halt_type(void) const;
// public: enum e_user_interface_show_busy_state c_enum_no_init<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_user_interface_show_busy_state(void) const;
// public: enum c_scoreboard_list_data_component::e_player_row_type c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_scoreboard_list_data_component::e_player_row_type(void) const;
// class c_cui_component * cui_component_create<class c_scoreboard_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_scoreboard_list_data_component>(class c_cui_component const *);
// public: c_scoreboard_list_data_component::c_scoreboard_list_data_component(class c_scoreboard_list_data_component const &);
// void g_scoreboard_mode_enum_table::`dynamic atexit destructor'(void);
// void g_synchronous_halt_type_enum_table::`dynamic atexit destructor'(void);
// void g_user_interface_show_busy_state_enum_table::`dynamic atexit destructor'(void);
// void g_player_row_type_enum_table::`dynamic atexit destructor'(void);

//public: c_scoreboard_list_data_component::c_scoreboard_list_data_component(void)
//{
//    mangled_ppc("??0c_scoreboard_list_data_component@@QAA@XZ");
//};

//public: void c_scoreboard_list_data_component::set_scoreboard_mode(class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_scoreboard_mode@c_scoreboard_list_data_component@@QAAXV?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual long c_scoreboard_list_data_component::get_element_selectable(long) const
//{
//    mangled_ppc("?get_element_selectable@c_scoreboard_list_data_component@@UBAJJ@Z");
//};

//public: class c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_row_type(long) const
//{
//    mangled_ppc("?get_player_row_type@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//merged_84B7F240
//{
//    mangled_ppc("merged_84B7F240");
//};

//public: s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAA@XZ");
//};

//public: virtual c_scoreboard_list_data_component::~c_scoreboard_list_data_component(void)
//{
//    mangled_ppc("??1c_scoreboard_list_data_component@@UAA@XZ");
//};

//public: c_scoreboard_list_data_component::s_player_row::s_player_row(void)
//{
//    mangled_ppc("??0s_player_row@c_scoreboard_list_data_component@@QAA@XZ");
//};

//protected: virtual void c_scoreboard_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_scoreboard_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: bool c_scoreboard_list_data_component::add_player_internal(class c_cui_update_context *, enum c_scoreboard_list_data_component::e_player_row_type, long, long, struct s_player_configuration const *, struct s_player_identifier const *, wchar_t const *, wchar_t const *, long, enum e_multiplayer_team, bool, enum e_controller_index, enum e_user_interface_voice_state, float, bool, long, long, long, long, bool, bool, bool)
//{
//    mangled_ppc("?add_player_internal@c_scoreboard_list_data_component@@IAA_NPAVc_cui_update_context@@W4e_player_row_type@1@JJPBUs_player_configuration@@PBUs_player_identifier@@PB_W4JW4e_multiplayer_team@@_NW4e_controller_index@@W4e_user_interface_voice_state@@M6JJJJ666@Z");
//};

//protected: void c_scoreboard_list_data_component::update_scoreboard(class c_cui_update_context *)
//{
//    mangled_ppc("?update_scoreboard@c_scoreboard_list_data_component@@IAAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_scoreboard_list_data_component::update_scoreboard_game(class c_cui_update_context *)
//{
//    mangled_ppc("?update_scoreboard_game@c_scoreboard_list_data_component@@IAAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_scoreboard_list_data_component::update_scoreboard_session(class c_cui_update_context *)
//{
//    mangled_ppc("?update_scoreboard_session@c_scoreboard_list_data_component@@IAAXPAVc_cui_update_context@@@Z");
//};

//protected: bool c_scoreboard_list_data_component::get_player_appearance(long, struct s_player_appearance *)
//{
//    mangled_ppc("?get_player_appearance@c_scoreboard_list_data_component@@IAA_NJPAUs_player_appearance@@@Z");
//};

//protected: static bool c_scoreboard_list_data_component::scoreboard_sort_proc_for_multiplayer(void const *, void const *, void const *)
//{
//    mangled_ppc("?scoreboard_sort_proc_for_multiplayer@c_scoreboard_list_data_component@@KA_NPBX00@Z");
//};

//protected: static bool c_scoreboard_list_data_component::scoreboard_sort_proc_for_session(void const *, void const *, void const *)
//{
//    mangled_ppc("?scoreboard_sort_proc_for_session@c_scoreboard_list_data_component@@KA_NPBX00@Z");
//};

//public: long c_scoreboard_list_data_component::get_player_ringspeak_bitmap_frame(long) const
//{
//    mangled_ppc("?get_player_ringspeak_bitmap_frame@c_scoreboard_list_data_component@@QBAJJ@Z");
//};

//public: struct s_player_configuration const * c_scoreboard_list_data_component::get_player_configuration(long) const
//{
//    mangled_ppc("?get_player_configuration@c_scoreboard_list_data_component@@QBAPBUs_player_configuration@@J@Z");
//};

//public: bool c_scoreboard_list_data_component::get_emblem_info(long, struct s_emblem_info *) const
//{
//    mangled_ppc("?get_emblem_info@c_scoreboard_list_data_component@@QBA_NJPAUs_emblem_info@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_identifier(long, struct s_player_identifier *) const
//{
//    mangled_ppc("?get_player_identifier@c_scoreboard_list_data_component@@QBA_NJPAUs_player_identifier@@@Z");
//};

//public: wchar_t const * c_scoreboard_list_data_component::get_player_name(long) const
//{
//    mangled_ppc("?get_player_name@c_scoreboard_list_data_component@@QBAPB_WJ@Z");
//};

//public: static long s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@SAJXZ");
//};

//?sort_range@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum c_scoreboard_list_data_component::e_scoreboard_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_scoreboard_mode@c_scoreboard_list_data_component@@@Z");
//};

//public: enum c_scoreboard_list_data_component::e_scoreboard_mode c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum c_scoreboard_list_data_component::e_scoreboard_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_scoreboard_mode@c_scoreboard_list_data_component@@XZ");
//};

//public: c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum c_scoreboard_list_data_component::e_player_row_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_player_row_type@c_scoreboard_list_data_component@@@Z");
//};

//public: bool c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum c_scoreboard_list_data_component::e_player_row_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_player_row_type@c_scoreboard_list_data_component@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_scoreboard_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_scoreboard_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: void c_static_wchar_string<48>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_wchar_string@$0DA@@@QAAXXZ");
//};

//public: wchar_t const * c_static_wchar_string<48>::operator wchar_t const *(void) const
//{
//    mangled_ppc("??B?$c_static_wchar_string@$0DA@@@QBAPB_WXZ");
//};

//public: struct c_scoreboard_list_data_component::s_player_row const & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QBAABUs_player_row@c_scoreboard_list_data_component@@J@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_scoreboard_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_scoreboard_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_scoreboard_mode(void) const
//{
//    mangled_ppc("?get_scoreboard_mode@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_scoreboard_mode::*)(class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@$1?set_scoreboard_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_scoreboard_list_data_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_synchronous_game_halt_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_synchronous_game_halt_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_synchronous_game_halt_type(void) const
//{
//    mangled_ppc("?get_synchronous_game_halt_type@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_synchronous_halt_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_synchronous_halt_type@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_synchronous_halt_seconds_til_give_up::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_synchronous_halt_seconds_til_give_up@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_synchronous_halt_seconds_til_give_up(void) const
//{
//    mangled_ppc("?get_synchronous_halt_seconds_til_give_up@c_scoreboard_list_data_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@$1?get_busy_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@$1?get_busy_state@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_busy_state(void) const
//{
//    mangled_ppc("?get_busy_state@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_user_interface_show_busy_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@W4e_user_interface_show_busy_state@@@Z");
//};

//long cui_object_component_get_property_element_count<class c_scoreboard_list_data_component, long & (c_scoreboard_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_scoreboard_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, struct s_player_configuration const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_scoreboard_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@PBUs_player_configuration@@$1?get_item_count@1@QBAJXZ$1?get_player_configuration@1@QBAPBU2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, struct s_emblem_info, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_scoreboard_list_data_component@@Us_emblem_info@@$1?get_item_count@1@QBAJXZ$1?get_emblem_info@1@QBA_NJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, struct s_player_identifier, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_identifier::*)(long, struct s_player_identifier *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_scoreboard_list_data_component@@Us_player_identifier@@$1?get_item_count@1@QBAJXZ$1?get_player_identifier@1@QBA_NJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_scoreboard_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_scoreboard_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_controller_rating::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_controller_rating@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_controller_rating(void) const
//{
//    mangled_ppc("?get_controller_rating@c_scoreboard_list_data_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_desired_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_desired_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_desired_team_index(void) const
//{
//    mangled_ppc("?get_desired_team_index@c_scoreboard_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_scoreboard_list_data_component, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, void & (c_scoreboard_list_data_component::set_desired_team_index::*)(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?set_desired_team_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_scoreboard_list_data_component::set_desired_team_index(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_desired_team_index@c_scoreboard_list_data_component@@QAAXV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_row_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_row_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, wchar_t const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), wchar_t const *& (c_scoreboard_list_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_player_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, wchar_t const *, long & (c_scoreboard_list_data_component::get_item_count::*)(void), wchar_t const *& (c_scoreboard_list_data_component::get_player_service_tag::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_player_service_tag@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_scoreboard_list_data_component::get_player_service_tag(long) const
//{
//    mangled_ppc("?get_player_service_tag@c_scoreboard_list_data_component@@QBAPB_WJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_team@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_team(long) const
//{
//    mangled_ppc("?get_player_team@c_scoreboard_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_base_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_scoreboard_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_base_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_scoreboard_list_data_component::get_player_base_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_base_bitmap_tint_color@c_scoreboard_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_scoreboard_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_team_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_scoreboard_list_data_component::get_player_team_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_team_bitmap_tint_color@c_scoreboard_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_scoreboard_list_data_component, union argb_color, long & (c_scoreboard_list_data_component::get_item_count::*)(void), void & (c_scoreboard_list_data_component::get_player_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_scoreboard_list_data_component@@Targb_color@@$1?get_item_count@1@QBAJXZ$1?get_player_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_scoreboard_list_data_component::get_player_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_player_bitmap_tint_color@c_scoreboard_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_show_team::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_show_team@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_show_team(long) const
//{
//    mangled_ppc("?get_player_show_team@c_scoreboard_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_controller_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_controller_index(long) const
//{
//    mangled_ppc("?get_player_controller_index@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@V?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_player_voice_state@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_user_interface_voice_state, char, 0, 5, struct s_default_enum_string_resolver> c_scoreboard_list_data_component::get_player_voice_state(long) const
//{
//    mangled_ppc("?get_player_voice_state@c_scoreboard_list_data_component@@QBA?AV?$c_enum@W4e_user_interface_voice_state@@D$0A@$04Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_ringspeak_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_ringspeak_bitmap_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, float, long & (c_scoreboard_list_data_component::get_item_count::*)(void), float & (c_scoreboard_list_data_component::get_player_connectivity_rating::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@M$1?get_item_count@1@QBAJXZ$1?get_player_connectivity_rating@1@QBAMJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_scoreboard_list_data_component::get_player_connectivity_rating(long) const
//{
//    mangled_ppc("?get_player_connectivity_rating@c_scoreboard_list_data_component@@QBAMJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_show_score::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_show_score@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_show_score(long) const
//{
//    mangled_ppc("?get_player_show_score@c_scoreboard_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_place::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_place@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_player_place(long) const
//{
//    mangled_ppc("?get_player_place@c_scoreboard_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_score::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_score@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_player_score(long) const
//{
//    mangled_ppc("?get_player_score@c_scoreboard_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_round_score::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_round_score@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_player_round_score(long) const
//{
//    mangled_ppc("?get_player_round_score@c_scoreboard_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, long, long & (c_scoreboard_list_data_component::get_item_count::*)(void), long & (c_scoreboard_list_data_component::get_player_rating::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_player_rating@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_scoreboard_list_data_component::get_player_rating(long) const
//{
//    mangled_ppc("?get_player_rating@c_scoreboard_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_is_dead::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_is_dead@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_is_dead(long) const
//{
//    mangled_ppc("?get_player_is_dead@c_scoreboard_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_left_game::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_left_game@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_left_game(long) const
//{
//    mangled_ppc("?get_player_left_game@c_scoreboard_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_scoreboard_list_data_component, bool, long & (c_scoreboard_list_data_component::get_item_count::*)(void), bool & (c_scoreboard_list_data_component::get_player_halting_synchronous_game::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_scoreboard_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_player_halting_synchronous_game@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_scoreboard_list_data_component::get_player_halting_synchronous_game(long) const
//{
//    mangled_ppc("?get_player_halting_synchronous_game@c_scoreboard_list_data_component@@QBA_NJ@Z");
//};

//public: struct c_scoreboard_list_data_component::s_player_row & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAAAAUs_player_row@c_scoreboard_list_data_component@@H@Z");
//};

//public: struct c_scoreboard_list_data_component::s_player_row & s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@QAAAAUs_player_row@c_scoreboard_list_data_component@@J@Z");
//};

//public: c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@SA_NJ@Z");
//};

//void cui_property_value_set<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct c_scoreboard_list_data_component::s_player_row, 24>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_player_row@c_scoreboard_list_data_component@@$0BI@@@SA_NH@Z");
//};

//public: bool c_enum_no_init<enum c_scoreboard_list_data_component::e_scoreboard_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_scoreboard_mode@c_scoreboard_list_data_component@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: enum e_synchronous_halt_type c_enum_no_init<enum e_synchronous_halt_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_synchronous_halt_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_synchronous_halt_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_synchronous_halt_type@@XZ");
//};

//public: enum e_user_interface_show_busy_state c_enum_no_init<enum e_user_interface_show_busy_state, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_user_interface_show_busy_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_user_interface_show_busy_state@@E$0A@$07Us_default_enum_string_resolver@@@@QBA?AW4e_user_interface_show_busy_state@@XZ");
//};

//public: enum c_scoreboard_list_data_component::e_player_row_type c_enum_no_init<enum c_scoreboard_list_data_component::e_player_row_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_scoreboard_list_data_component::e_player_row_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_player_row_type@c_scoreboard_list_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_player_row_type@c_scoreboard_list_data_component@@XZ");
//};

//class c_cui_component * cui_component_create<class c_scoreboard_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_scoreboard_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_scoreboard_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_scoreboard_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_scoreboard_list_data_component::c_scoreboard_list_data_component(class c_scoreboard_list_data_component const &)
//{
//    mangled_ppc("??0c_scoreboard_list_data_component@@QAA@ABV0@@Z");
//};

//void g_scoreboard_mode_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_scoreboard_mode_enum_table@@YAXXZ");
//};

//void g_synchronous_halt_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_synchronous_halt_type_enum_table@@YAXXZ");
//};

//void g_user_interface_show_busy_state_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_user_interface_show_busy_state_enum_table@@YAXXZ");
//};

//void g_player_row_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_row_type_enum_table@@YAXXZ");
//};

