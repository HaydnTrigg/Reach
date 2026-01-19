/* ---------- headers */

#include "omaha\interface\components\party_details_components.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_network_game_privacy const c_enum_no_init<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_network_game_privacy@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_party_details_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_party_details_data_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_party_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_party_details_pipe_writer_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_party_details_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_party_details_pipe_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_party_details_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_party_details_data_component@@@@0Vc_cui_object_property_table@@A"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_party_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_party_details_pipe_writer_component@@@@0Vc_cui_object_property_table@@A"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_party_details_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_party_details_pipe_component@@@@0Vc_cui_object_property_table@@A"

// public: c_party_details_pipe_component::c_party_details_pipe_component(void);
// merged_84B1C6A0;
// public: virtual c_party_details_pipe_component::~c_party_details_pipe_component(void);
// protected: virtual class c_cui_screen_pipe * c_party_details_pipe_component::do_create_pipe(void);
// public: c_cui_party_details_pipe::c_cui_party_details_pipe(void);
// public: c_party_details_pipe_writer_component::c_party_details_pipe_writer_component(void);
// protected: c_party_details_pipe_client_component::c_party_details_pipe_client_component(struct s_cui_component_description const *, class c_cui_object_property_table *);
// merged_84B1C888;
// public: virtual c_party_details_pipe_client_component::~c_party_details_pipe_client_component(void);
// merged_84B1C8F8;
// public: virtual c_party_details_pipe_writer_component::~c_party_details_pipe_writer_component(void);
// protected: virtual void c_party_details_pipe_writer_component::do_update(class c_cui_update_context *);
// public: void c_cui_party_details_parameters::set_xuid(unsigned __int64);
// public: void c_cui_party_details_parameters::set_player_identifier(struct s_player_identifier const &);
// public: class c_cui_party_details_parameters & c_cui_party_details_pipe::get_parameters(void);
// public: class c_cui_party_details_pipe * c_party_details_pipe_client_component::get_pipe(void) const;
// public: class c_cui_party_details_pipe * c_party_details_pipe_component::get_pipe(void) const;
// public: c_party_details_data_component::c_party_details_data_component(void);
// merged_84B1CB60;
// public: virtual c_party_details_data_component::~c_party_details_data_component(void);
// public: union argb_color c_party_details_data_component::get_player_bitmap_tint_color(long) const;
// public: bool c_party_details_data_component::get_has_teams(void) const;
// private: struct s_network_session_status_data_player const & c_party_details_data_component::get_player(long) const;
// private: struct s_network_session_status_data_optional_game_details const & c_party_details_data_component::get_optional_game_details(void) const;
// private: struct s_network_session_status_data_game_details const & c_party_details_data_component::get_game_details(void) const;
// public: struct s_network_session_status_data const & c_cui_party_details_parameters::get_network_session_status_data(void) const;
// private: struct s_network_session_status_game_data const & c_party_details_data_component::get_game_data(void) const;
// public: union argb_color c_party_details_data_component::get_player_text_tint_color(long) const;
// protected: virtual void c_party_details_data_component::do_update(class c_cui_update_context *);
// public: unsigned __int64 c_cui_party_details_parameters::get_xuid(void) const;
// public: struct s_player_identifier const & c_cui_party_details_parameters::get_player_identifier(void) const;
// public: void c_cui_party_details_parameters::set_network_session_status_data(struct s_network_session_status_data const &);
// public: bool c_cui_party_details_parameters::is_valid(void) const;
// private: struct s_network_session_status_data_optional_game_details & c_party_details_data_component::get_optional_game_details(void);
// private: struct s_network_session_status_data_game_details & c_party_details_data_component::get_game_details(void);
// public: struct s_network_session_status_data & c_cui_party_details_parameters::get_network_session_status_data(void);
// bool compare_players_sort(void const *, void const *, void const *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_pipe_component>::get_instance(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_pipe_writer_component>::get_instance(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_data_component>::get_instance(void);
// class c_party_details_pipe_component const * cui_dynamic_cast<class c_party_details_pipe_component const *>(class c_cui_component *);
// public: c_static_wchar_string<19>::c_static_wchar_string<19>(void);
// public: void c_static_wchar_string<19>::clear(void);
// public: void c_static_wchar_string<19>::set_char(char const *);
// public: wchar_t const * c_static_wchar_string<19>::append(wchar_t const *);
// bool cui_get_scalar_property_by_return_value<class c_party_details_pipe_writer_component, unsigned __int64, unsigned __int64& (c_party_details_pipe_writer_component::get_xuid::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: unsigned __int64 c_party_details_pipe_writer_component::get_xuid(void) const;
// bool cui_set_scalar_property_by_value<class c_party_details_pipe_writer_component, unsigned __int64, void & (c_party_details_pipe_writer_component::set_xuid::*)(unsigned __int64)>(void *, long, struct s_cui_property_value const *);
// public: void c_party_details_pipe_writer_component::set_xuid(unsigned __int64);
// bool cui_get_scalar_property_by_return_value<class c_party_details_pipe_writer_component, struct s_player_identifier const &, struct s_player_identifier &volatile & (c_party_details_pipe_writer_component::get_player_identifier::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_player_identifier const & c_party_details_pipe_writer_component::get_player_identifier(void) const;
// bool cui_set_scalar_property_by_const_reference<class c_party_details_pipe_writer_component, struct s_player_identifier, void & (c_party_details_pipe_writer_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *);
// public: void c_party_details_pipe_writer_component::set_player_identifier(struct s_player_identifier const &);
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, bool, bool & (c_party_details_data_component::is_valid::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::is_valid(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_player_count::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_player_count::*)(void)>(long *) const;
// public: long c_party_details_data_component::get_player_count(void) const;
// long cui_object_component_get_property_element_count<class c_party_details_data_component, long & (c_party_details_data_component::get_player_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_party_details_data_component, wchar_t const *, long & (c_party_details_data_component::get_player_count::*)(void), wchar_t const *& (c_party_details_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_player_name(long) const;
// bool cui_get_array_property_element_by_return_value<class c_party_details_data_component, struct s_emblem_info const &, long & (c_party_details_data_component::get_player_count::*)(void), struct s_emblem_info &volatile & (c_party_details_data_component::get_player_emblem_info::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: struct s_emblem_info const & c_party_details_data_component::get_player_emblem_info(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_bitmap_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_text_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_game_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_game_variant_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_map_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_map_variant_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_film_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_film_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_playlist_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_playlist_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_map_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_party_details_data_component::get_map_name(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@@Z;
// public: class c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_network_game_privacy(void) const;
// public: c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_game_privacy);
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z;
// public: class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> c_party_details_data_component::get_activity(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@@Z;
// public: class c_enum<enum e_session_game_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_party_details_data_component::get_session_game_mode(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@@Z;
// public: class c_enum<enum e_network_game_type, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_network_game_type(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z;
// public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_party_details_data_component::get_game_engine_type(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_campaign_id::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_campaign_id::*)(void)>(long *) const;
// public: long c_party_details_data_component::get_campaign_id(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z;
// public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_campaign_difficulty_level(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_map_id::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_map_id::*)(void)>(long *) const;
// public: long c_party_details_data_component::get_map_id(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, bool, bool & (c_party_details_data_component::try_get_by_out_pointer<bool, bool & (c_party_details_data_component::get_has_teams::*)(void)>::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<bool, bool & (c_party_details_data_component::get_has_teams::*)(void)>(bool *) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z;
// public: short c_party_details_data_component::get_target_score(void) const;
// ??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z;
// public: short c_party_details_data_component::get_current_score(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_type::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_type::*)(void)>(long *) const;
// public: long c_party_details_data_component::get_game_engine_timer_type(void) const;
// bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_seconds::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_seconds::*)(void)>(long *) const;
// public: long c_party_details_data_component::get_game_engine_timer_seconds(void) const;
// public: c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: static class c_party_details_pipe_component const * s_cui_dynamic_cast<class c_party_details_pipe_component const *>::cast(class c_cui_component const *);
// void cui_property_value_set<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &);
// public: enum e_network_game_privacy c_enum_no_init<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_game_privacy(void) const;
// class c_cui_component * cui_component_create<class c_party_details_pipe_component>(void);
// class c_cui_component * cui_component_clone<class c_party_details_pipe_component>(class c_cui_component const *);
// public: c_party_details_pipe_component::c_party_details_pipe_component(class c_party_details_pipe_component const &);
// class c_cui_component * cui_component_create<class c_party_details_pipe_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_party_details_pipe_writer_component>(class c_cui_component const *);
// public: c_party_details_pipe_writer_component::c_party_details_pipe_writer_component(class c_party_details_pipe_writer_component const &);
// public: c_party_details_pipe_client_component::c_party_details_pipe_client_component(class c_party_details_pipe_client_component const &);
// class c_cui_component * cui_component_create<class c_party_details_data_component>(void);
// class c_cui_component * cui_component_clone<class c_party_details_data_component>(class c_cui_component const *);
// public: c_party_details_data_component::c_party_details_data_component(class c_party_details_data_component const &);

//public: c_party_details_pipe_component::c_party_details_pipe_component(void)
//{
//    mangled_ppc("??0c_party_details_pipe_component@@QAA@XZ");
//};

//merged_84B1C6A0
//{
//    mangled_ppc("merged_84B1C6A0");
//};

//public: virtual c_party_details_pipe_component::~c_party_details_pipe_component(void)
//{
//    mangled_ppc("??1c_party_details_pipe_component@@UAA@XZ");
//};

//protected: virtual class c_cui_screen_pipe * c_party_details_pipe_component::do_create_pipe(void)
//{
//    mangled_ppc("?do_create_pipe@c_party_details_pipe_component@@MAAPAVc_cui_screen_pipe@@XZ");
//};

//public: c_cui_party_details_pipe::c_cui_party_details_pipe(void)
//{
//    mangled_ppc("??0c_cui_party_details_pipe@@QAA@XZ");
//};

//public: c_party_details_pipe_writer_component::c_party_details_pipe_writer_component(void)
//{
//    mangled_ppc("??0c_party_details_pipe_writer_component@@QAA@XZ");
//};

//protected: c_party_details_pipe_client_component::c_party_details_pipe_client_component(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_party_details_pipe_client_component@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//merged_84B1C888
//{
//    mangled_ppc("merged_84B1C888");
//};

//public: virtual c_party_details_pipe_client_component::~c_party_details_pipe_client_component(void)
//{
//    mangled_ppc("??1c_party_details_pipe_client_component@@UAA@XZ");
//};

//merged_84B1C8F8
//{
//    mangled_ppc("merged_84B1C8F8");
//};

//public: virtual c_party_details_pipe_writer_component::~c_party_details_pipe_writer_component(void)
//{
//    mangled_ppc("??1c_party_details_pipe_writer_component@@UAA@XZ");
//};

//protected: virtual void c_party_details_pipe_writer_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_party_details_pipe_writer_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_cui_party_details_parameters::set_xuid(unsigned __int64)
//{
//    mangled_ppc("?set_xuid@c_cui_party_details_parameters@@QAAX_K@Z");
//};

//public: void c_cui_party_details_parameters::set_player_identifier(struct s_player_identifier const &)
//{
//    mangled_ppc("?set_player_identifier@c_cui_party_details_parameters@@QAAXABUs_player_identifier@@@Z");
//};

//public: class c_cui_party_details_parameters & c_cui_party_details_pipe::get_parameters(void)
//{
//    mangled_ppc("?get_parameters@c_cui_party_details_pipe@@QAAAAVc_cui_party_details_parameters@@XZ");
//};

//public: class c_cui_party_details_pipe * c_party_details_pipe_client_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_party_details_pipe_client_component@@QBAPAVc_cui_party_details_pipe@@XZ");
//};

//public: class c_cui_party_details_pipe * c_party_details_pipe_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_party_details_pipe_component@@QBAPAVc_cui_party_details_pipe@@XZ");
//};

//public: c_party_details_data_component::c_party_details_data_component(void)
//{
//    mangled_ppc("??0c_party_details_data_component@@QAA@XZ");
//};

//merged_84B1CB60
//{
//    mangled_ppc("merged_84B1CB60");
//};

//public: virtual c_party_details_data_component::~c_party_details_data_component(void)
//{
//    mangled_ppc("??1c_party_details_data_component@@UAA@XZ");
//};

//public: union argb_color c_party_details_data_component::get_player_bitmap_tint_color(long) const
//{
//    mangled_ppc("?get_player_bitmap_tint_color@c_party_details_data_component@@QBA?ATargb_color@@J@Z");
//};

//public: bool c_party_details_data_component::get_has_teams(void) const
//{
//    mangled_ppc("?get_has_teams@c_party_details_data_component@@QBA_NXZ");
//};

//private: struct s_network_session_status_data_player const & c_party_details_data_component::get_player(long) const
//{
//    mangled_ppc("?get_player@c_party_details_data_component@@ABAABUs_network_session_status_data_player@@J@Z");
//};

//private: struct s_network_session_status_data_optional_game_details const & c_party_details_data_component::get_optional_game_details(void) const
//{
//    mangled_ppc("?get_optional_game_details@c_party_details_data_component@@ABAABUs_network_session_status_data_optional_game_details@@XZ");
//};

//private: struct s_network_session_status_data_game_details const & c_party_details_data_component::get_game_details(void) const
//{
//    mangled_ppc("?get_game_details@c_party_details_data_component@@ABAABUs_network_session_status_data_game_details@@XZ");
//};

//public: struct s_network_session_status_data const & c_cui_party_details_parameters::get_network_session_status_data(void) const
//{
//    mangled_ppc("?get_network_session_status_data@c_cui_party_details_parameters@@QBAABUs_network_session_status_data@@XZ");
//};

//private: struct s_network_session_status_game_data const & c_party_details_data_component::get_game_data(void) const
//{
//    mangled_ppc("?get_game_data@c_party_details_data_component@@ABAABUs_network_session_status_game_data@@XZ");
//};

//public: union argb_color c_party_details_data_component::get_player_text_tint_color(long) const
//{
//    mangled_ppc("?get_player_text_tint_color@c_party_details_data_component@@QBA?ATargb_color@@J@Z");
//};

//protected: virtual void c_party_details_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_party_details_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: unsigned __int64 c_cui_party_details_parameters::get_xuid(void) const
//{
//    mangled_ppc("?get_xuid@c_cui_party_details_parameters@@QBA_KXZ");
//};

//public: struct s_player_identifier const & c_cui_party_details_parameters::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_cui_party_details_parameters@@QBAABUs_player_identifier@@XZ");
//};

//public: void c_cui_party_details_parameters::set_network_session_status_data(struct s_network_session_status_data const &)
//{
//    mangled_ppc("?set_network_session_status_data@c_cui_party_details_parameters@@QAAXABUs_network_session_status_data@@@Z");
//};

//public: bool c_cui_party_details_parameters::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_cui_party_details_parameters@@QBA_NXZ");
//};

//private: struct s_network_session_status_data_optional_game_details & c_party_details_data_component::get_optional_game_details(void)
//{
//    mangled_ppc("?get_optional_game_details@c_party_details_data_component@@AAAAAUs_network_session_status_data_optional_game_details@@XZ");
//};

//private: struct s_network_session_status_data_game_details & c_party_details_data_component::get_game_details(void)
//{
//    mangled_ppc("?get_game_details@c_party_details_data_component@@AAAAAUs_network_session_status_data_game_details@@XZ");
//};

//public: struct s_network_session_status_data & c_cui_party_details_parameters::get_network_session_status_data(void)
//{
//    mangled_ppc("?get_network_session_status_data@c_cui_party_details_parameters@@QAAAAUs_network_session_status_data@@XZ");
//};

//bool compare_players_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_players_sort@@YA_NPBX00@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_pipe_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_party_details_pipe_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_pipe_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_party_details_pipe_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_party_details_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_party_details_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_party_details_pipe_component const * cui_dynamic_cast<class c_party_details_pipe_component const *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PBVc_party_details_pipe_component@@@@YAPBVc_party_details_pipe_component@@PAVc_cui_component@@@Z");
//};

//public: c_static_wchar_string<19>::c_static_wchar_string<19>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0BD@@@QAA@XZ");
//};

//public: void c_static_wchar_string<19>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_wchar_string@$0BD@@@QAAXXZ");
//};

//public: void c_static_wchar_string<19>::set_char(char const *)
//{
//    mangled_ppc("?set_char@?$c_static_wchar_string@$0BD@@@QAAXPBD@Z");
//};

//public: wchar_t const * c_static_wchar_string<19>::append(wchar_t const *)
//{
//    mangled_ppc("?append@?$c_static_wchar_string@$0BD@@@QAAPB_WPB_W@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_pipe_writer_component, unsigned __int64, unsigned __int64& (c_party_details_pipe_writer_component::get_xuid::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_pipe_writer_component@@_K$1?get_xuid@1@QBA_KXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned __int64 c_party_details_pipe_writer_component::get_xuid(void) const
//{
//    mangled_ppc("?get_xuid@c_party_details_pipe_writer_component@@QBA_KXZ");
//};

//bool cui_set_scalar_property_by_value<class c_party_details_pipe_writer_component, unsigned __int64, void & (c_party_details_pipe_writer_component::set_xuid::*)(unsigned __int64)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_party_details_pipe_writer_component@@_K$1?set_xuid@1@QAAX_K@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_party_details_pipe_writer_component::set_xuid(unsigned __int64)
//{
//    mangled_ppc("?set_xuid@c_party_details_pipe_writer_component@@QAAX_K@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_pipe_writer_component, struct s_player_identifier const &, struct s_player_identifier &volatile & (c_party_details_pipe_writer_component::get_player_identifier::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_pipe_writer_component@@ABUs_player_identifier@@$1?get_player_identifier@1@QBAABU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_identifier const & c_party_details_pipe_writer_component::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_party_details_pipe_writer_component@@QBAABUs_player_identifier@@XZ");
//};

//bool cui_set_scalar_property_by_const_reference<class c_party_details_pipe_writer_component, struct s_player_identifier, void & (c_party_details_pipe_writer_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_reference@Vc_party_details_pipe_writer_component@@Us_player_identifier@@$1?set_player_identifier@1@QAAXABU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_party_details_pipe_writer_component::set_player_identifier(struct s_player_identifier const &)
//{
//    mangled_ppc("?set_player_identifier@c_party_details_pipe_writer_component@@QAAXABUs_player_identifier@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, bool, bool & (c_party_details_data_component::is_valid::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@_N$1?is_valid@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_party_details_data_component@@QBA_NXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_player_count::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@J$1??$try_get_by_out_pointer@J$1?get_player_count@c_party_details_data_component@@QBAJXZ@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_player_count::*)(void)>(long *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@J$1?get_player_count@c_party_details_data_component@@QBAJXZ@c_party_details_data_component@@QBA_NPAJ@Z");
//};

//public: long c_party_details_data_component::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_party_details_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_party_details_data_component, long & (c_party_details_data_component::get_player_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_party_details_data_component@@$1?get_player_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_party_details_data_component, wchar_t const *, long & (c_party_details_data_component::get_player_count::*)(void), wchar_t const *& (c_party_details_data_component::get_player_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@PB_W$1?get_player_count@1@QBAJXZ$1?get_player_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_player_name(long) const
//{
//    mangled_ppc("?get_player_name@c_party_details_data_component@@QBAPB_WJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_party_details_data_component, struct s_emblem_info const &, long & (c_party_details_data_component::get_player_count::*)(void), struct s_emblem_info &volatile & (c_party_details_data_component::get_player_emblem_info::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@ABUs_emblem_info@@$1?get_player_count@1@QBAJXZ$1?get_player_emblem_info@1@QBAABU2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_emblem_info const & c_party_details_data_component::get_player_emblem_info(long) const
//{
//    mangled_ppc("?get_player_emblem_info@c_party_details_data_component@@QBAABUs_emblem_info@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_bitmap_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_bitmap_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_text_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_party_details_data_component@@Targb_color@@$1?get_player_count@1@QBAJXZ$1?get_player_text_tint_color@1@QBA?AT2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_game_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@PB_W$1?get_game_variant_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_game_variant_name(void) const
//{
//    mangled_ppc("?get_game_variant_name@c_party_details_data_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_map_variant_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@PB_W$1?get_map_variant_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_map_variant_name(void) const
//{
//    mangled_ppc("?get_map_variant_name@c_party_details_data_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_film_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@PB_W$1?get_film_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_film_name(void) const
//{
//    mangled_ppc("?get_film_name@c_party_details_data_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_playlist_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@PB_W$1?get_playlist_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_playlist_name(void) const
//{
//    mangled_ppc("?get_playlist_name@c_party_details_data_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_party_details_data_component, wchar_t const *, wchar_t const *& (c_party_details_data_component::get_map_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_party_details_data_component@@PB_W$1?get_map_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_party_details_data_component::get_map_name(void) const
//{
//    mangled_ppc("?get_map_name@c_party_details_data_component@@QBAPB_WXZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_privacy@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_network_game_privacy(void) const
//{
//    mangled_ppc("?get_network_game_privacy@c_party_details_data_component@@QBA?AV?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_game_privacy)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_network_game_privacy@@@Z");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_activity@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_gui_game_mode, char, -1, 7, struct s_default_enum_string_resolver> c_party_details_data_component::get_activity(void) const
//{
//    mangled_ppc("?get_activity@c_party_details_data_component@@QBA?AV?$c_enum@W4e_gui_game_mode@@D$0?0$06Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@$1?get_session_game_mode@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_session_game_mode, unsigned char, 0, 5, struct s_default_enum_string_resolver> c_party_details_data_component::get_session_game_mode(void) const
//{
//    mangled_ppc("?get_session_game_mode@c_party_details_data_component@@QBA?AV?$c_enum@W4e_session_game_mode@@E$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_network_game_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_network_game_type, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_network_game_type(void) const
//{
//    mangled_ppc("?get_network_game_type@c_party_details_data_component@@QBA?AV?$c_enum@W4e_network_game_type@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@$1?get_game_engine_type@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver> c_party_details_data_component::get_game_engine_type(void) const
//{
//    mangled_ppc("?get_game_engine_type@c_party_details_data_component@@QBA?AV?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_campaign_id::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@J$1??$try_get_by_out_pointer@J$1?get_campaign_id@c_party_details_data_component@@QBAJXZ@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_campaign_id::*)(void)>(long *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@J$1?get_campaign_id@c_party_details_data_component@@QBAJXZ@c_party_details_data_component@@QBA_NPAJ@Z");
//};

//public: long c_party_details_data_component::get_campaign_id(void) const
//{
//    mangled_ppc("?get_campaign_id@c_party_details_data_component@@QBAJXZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@1@QBA_NPAV2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@V?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@$1?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV1@XZ@c_party_details_data_component@@QBA_NPAV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum e_campaign_difficulty_level, char, -1, 4, struct s_default_enum_string_resolver> c_party_details_data_component::get_campaign_difficulty_level(void) const
//{
//    mangled_ppc("?get_campaign_difficulty_level@c_party_details_data_component@@QBA?AV?$c_enum@W4e_campaign_difficulty_level@@D$0?0$03Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_map_id::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@J$1??$try_get_by_out_pointer@J$1?get_map_id@c_party_details_data_component@@QBAJXZ@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_map_id::*)(void)>(long *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@J$1?get_map_id@c_party_details_data_component@@QBAJXZ@c_party_details_data_component@@QBA_NPAJ@Z");
//};

//public: long c_party_details_data_component::get_map_id(void) const
//{
//    mangled_ppc("?get_map_id@c_party_details_data_component@@QBAJXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, bool, bool & (c_party_details_data_component::try_get_by_out_pointer<bool, bool & (c_party_details_data_component::get_has_teams::*)(void)>::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@_N$1??$try_get_by_out_pointer@_N$1?get_has_teams@c_party_details_data_component@@QBA_NXZ@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<bool, bool & (c_party_details_data_component::get_has_teams::*)(void)>(bool *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@_N$1?get_has_teams@c_party_details_data_component@@QBA_NXZ@c_party_details_data_component@@QBA_NPA_N@Z");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@F$1?get_target_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z");
//};

//public: short c_party_details_data_component::get_target_score(void) const
//{
//    mangled_ppc("?get_target_score@c_party_details_data_component@@QBAFXZ");
//};

//??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@F$1??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@1@QBA_NPAF@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z
//{
//    mangled_ppc("??$try_get_by_out_pointer@F$1?get_current_score@c_party_details_data_component@@QBAFXZ@c_party_details_data_component@@QBA_NPAF@Z");
//};

//public: short c_party_details_data_component::get_current_score(void) const
//{
//    mangled_ppc("?get_current_score@c_party_details_data_component@@QBAFXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_type::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@J$1??$try_get_by_out_pointer@J$1?get_game_engine_timer_type@c_party_details_data_component@@QBAJXZ@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_type::*)(void)>(long *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@J$1?get_game_engine_timer_type@c_party_details_data_component@@QBAJXZ@c_party_details_data_component@@QBA_NPAJ@Z");
//};

//public: long c_party_details_data_component::get_game_engine_timer_type(void) const
//{
//    mangled_ppc("?get_game_engine_timer_type@c_party_details_data_component@@QBAJXZ");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_party_details_data_component, long, bool & (c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_seconds::*)(void)>::*)(long *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_party_details_data_component@@J$1??$try_get_by_out_pointer@J$1?get_game_engine_timer_seconds@c_party_details_data_component@@QBAJXZ@1@QBA_NPAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_party_details_data_component::try_get_by_out_pointer<long, long & (c_party_details_data_component::get_game_engine_timer_seconds::*)(void)>(long *) const
//{
//    mangled_ppc("??$try_get_by_out_pointer@J$1?get_game_engine_timer_seconds@c_party_details_data_component@@QBAJXZ@c_party_details_data_component@@QBA_NPAJ@Z");
//};

//public: long c_party_details_data_component::get_game_engine_timer_seconds(void) const
//{
//    mangled_ppc("?get_game_engine_timer_seconds@c_party_details_data_component@@QBAJXZ");
//};

//public: c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static class c_party_details_pipe_component const * s_cui_dynamic_cast<class c_party_details_pipe_component const *>::cast(class c_cui_component const *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PBVc_party_details_pipe_component@@@@SAPBVc_party_details_pipe_component@@PBVc_cui_component@@@Z");
//};

//void cui_property_value_set<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_network_game_privacy c_enum_no_init<enum e_network_game_privacy, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_game_privacy(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_game_privacy@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_network_game_privacy@@XZ");
//};

//class c_cui_component * cui_component_create<class c_party_details_pipe_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_party_details_pipe_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_party_details_pipe_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_party_details_pipe_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_party_details_pipe_component::c_party_details_pipe_component(class c_party_details_pipe_component const &)
//{
//    mangled_ppc("??0c_party_details_pipe_component@@QAA@ABV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_party_details_pipe_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_party_details_pipe_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_party_details_pipe_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_party_details_pipe_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_party_details_pipe_writer_component::c_party_details_pipe_writer_component(class c_party_details_pipe_writer_component const &)
//{
//    mangled_ppc("??0c_party_details_pipe_writer_component@@QAA@ABV0@@Z");
//};

//public: c_party_details_pipe_client_component::c_party_details_pipe_client_component(class c_party_details_pipe_client_component const &)
//{
//    mangled_ppc("??0c_party_details_pipe_client_component@@QAA@ABV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_party_details_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_party_details_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_party_details_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_party_details_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_party_details_data_component::c_party_details_data_component(class c_party_details_data_component const &)
//{
//    mangled_ppc("??0c_party_details_data_component@@QAA@ABV0@@Z");
//};

