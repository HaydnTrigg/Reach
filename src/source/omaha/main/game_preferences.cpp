/* ---------- headers */

#include "omaha\main\game_preferences.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned long const c_global_preferences_version::k_global_preferences_version; // "?k_global_preferences_version@c_global_preferences_version@@0KB"
// char const *const k_global_preferences_path; // "?k_global_preferences_path@@3PBDB"
// struct s_global_preferences_internals_type *g_global_preferences; // "?g_global_preferences@@3PAUs_global_preferences_internals_type@@A"

// void global_preferences_initialize(void);
// public: c_global_preferences_scope_lock::c_global_preferences_scope_lock(void);
// void lock_global_preferences(bool *);
// bool global_preferences_available(void);
// public: c_global_preferences_scope_lock::~c_global_preferences_scope_lock(void);
// void unlock_global_preferences(bool);
// void global_preferences_dispose(void);
// void global_preferences_flush_utility_drive(void);
// void global_preferences_update(void);
// void global_preferences_flush(void);
// void global_preferences_clear(void);
// void global_preferences_set_last_language(enum e_language);
// enum e_language global_preferences_get_last_language(void);
// void global_preferences_set_last_font_language(enum e_language);
// enum e_language global_preferences_get_last_font_language(void);
// void global_preferences_set_last_fonts_modification_date(struct s_file_last_modification_date const *);
// void global_preferences_get_last_fonts_modification_date(struct s_file_last_modification_date *);
// long global_preferences_get_build_number(void);
// void global_preferences_set_build_number(long);
// float global_preferences_get_betrayal_penalty(void);
// void global_preferences_set_betrayal_penalty(float);
// float global_preferences_get_eviction_penalty(void);
// void global_preferences_set_eviction_penalty(float);
// void global_preferences_invalidate_maps(void);
// long global_preferences_get_last_main_menu_item(void);
// void global_preferences_set_last_main_menu_item(long);
// long global_preferences_get_last_title_menu_item(void);
// void global_preferences_set_last_title_menu_item(long);
// bool global_preferences_get_last_game_setup(struct s_gui_game_setup_storage *);
// public: struct s_gui_game_setup_storage & s_gui_game_setup_storage::operator=(struct s_gui_game_setup_storage const &);
// public: struct s_gui_game_setup_storage::s_campaign_settings & s_gui_game_setup_storage::s_campaign_settings::operator=(struct s_gui_game_setup_storage::s_campaign_settings const &);
// public: struct s_gui_game_setup_storage::s_survival_settings & s_gui_game_setup_storage::s_survival_settings::operator=(struct s_gui_game_setup_storage::s_survival_settings const &);
// public: struct s_gui_game_setup_storage::s_multiplayer_settings & s_gui_game_setup_storage::s_multiplayer_settings::operator=(struct s_gui_game_setup_storage::s_multiplayer_settings const &);
// public: struct s_gui_game_setup_storage::s_map_editor_settings & s_gui_game_setup_storage::s_map_editor_settings::operator=(struct s_gui_game_setup_storage::s_map_editor_settings const &);
// bool global_preferences_get_last_game_setup_map(enum e_gui_game_mode, enum e_campaign_id *, enum e_map_id *);
// void global_preferences_set_last_game_setup(struct s_gui_game_setup_storage const *);
// bool global_preferences_get_last_campaign_settings(struct s_gui_game_setup_storage::s_campaign_settings *);
// bool global_preferences_set_last_campaign_settings(struct s_gui_game_setup_storage::s_campaign_settings const *);
// bool global_preferences_get_last_survival_settings(struct s_gui_game_setup_storage::s_survival_settings *);
// bool global_preferences_set_last_survival_settings(struct s_gui_game_setup_storage::s_survival_settings const *);
// bool global_preferences_get_last_multiplayer_settings(struct s_gui_game_setup_storage::s_multiplayer_settings *);
// bool global_preferences_set_last_multiplayer_settings(struct s_gui_game_setup_storage::s_multiplayer_settings const *);
// bool global_preferences_get_last_mapeditor_settings(struct s_gui_game_setup_storage::s_map_editor_settings *);
// bool global_preferences_set_last_mapeditor_settings(struct s_gui_game_setup_storage::s_map_editor_settings const *);
// bool global_preferences_get_last_matchmaking_settings(struct s_gui_game_setup_storage::s_matchmaking_settings *);
// bool global_preferences_set_last_matchmaking_settings(struct s_gui_game_setup_storage::s_matchmaking_settings const *);
// bool global_preferences_get_last_theater_settings(struct s_gui_game_setup_storage::s_theater_settings *);
// bool global_preferences_set_last_theater_settings(struct s_gui_game_setup_storage::s_theater_settings const *);
// bool global_preferences_set_campaign_map(enum e_campaign_id, enum e_map_id);
// bool global_preferences_set_campaign_difficulty(enum e_campaign_difficulty_level);
// bool global_preferences_set_campaign_metagame_scoring(enum e_campaign_metagame_scoring);
// bool global_preferences_set_campaign_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>);
// bool global_preferences_set_multiplayer_game_variant(class c_game_variant const *, struct s_owned_content_item const &);
// public: void s_gui_game_setup_storage::c_game_variant_settings::set_owned_content_item(struct s_owned_content_item const &);
// bool global_preferences_set_multiplayer_map_variant(class c_map_variant const *, struct s_owned_content_item const &);
// public: void s_gui_game_setup_storage::c_map_variant_settings::set_owned_content_item(struct s_owned_content_item const &);
// bool global_preferences_set_mapeditor_game_variant(class c_game_variant const *, struct s_owned_content_item const &);
// bool global_preferences_get_mapeditor_map_variant(class c_map_variant *);
// bool global_preferences_set_mapeditor_map_variant(class c_map_variant const *, struct s_owned_content_item const &);
// bool global_preferences_set_survival_game_variant(class c_game_variant const *, struct s_owned_content_item const &);
// bool global_preferences_set_survival_map_id(enum e_map_id);
// bool global_preferences_set_survival_difficulty(enum e_campaign_difficulty_level);
// bool global_preferences_set_matchmaking_hopper_id(unsigned short);
// bool global_preferences_set_game_variant(class c_game_variant const *, struct s_owned_content_item const &);
// bool global_preferences_get_game_variant_owned_content_item(enum e_game_engine_type, struct s_owned_content_item *);
// public: struct s_owned_content_item const & s_gui_game_setup_storage::c_game_variant_settings::get_owned_content_item(void) const;
// bool global_preferences_get_multiplayer_game_variant_owned_content_item(struct s_owned_content_item *);
// bool global_preferences_get_survival_game_variant_owned_content_item(struct s_owned_content_item *);
// bool global_preferences_get_mapeditor_game_variant_owned_content_item(struct s_owned_content_item *);
// bool global_preferences_get_multiplayer_map_variant_owned_content_item(struct s_owned_content_item *);
// public: struct s_owned_content_item const & s_gui_game_setup_storage::c_map_variant_settings::get_owned_content_item(void) const;
// bool global_preferences_get_mapeditor_map_variant_owned_content_item(struct s_owned_content_item *);
// enum e_gui_network_session_advertisement_mode global_preferences_get_xbox_live_private_privacy_setting(void);
// void global_preferences_set_xbox_live_private_privacy_setting(enum e_gui_network_session_advertisement_mode);
// enum e_display_brightness global_preferences_get_display_brightness(void);
// void global_preferences_set_display_brightness(enum e_display_brightness);
// enum e_subtitle_setting global_preferences_get_subtitle_setting(void);
// void global_preferences_set_subtitle_setting(enum e_subtitle_setting);
// long global_preferences_get_content_item_unique_name_number_seed(enum e_content_item_type);
// void global_preferences_set_content_item_unique_name_number_seed(enum e_content_item_type, long);
// long global_preferences_get_qos_maximum_simultaneous_responses(void);
// void global_preferences_set_qos_maximum_simultaneous_responses(long);
// bool global_preferences_get_campaign_state(struct s_global_preferences_campaign_state *);
// bool global_preferences_set_campaign_state(struct s_global_preferences_campaign_state const &);
// bool test_global_preferences_set_campaign_state(long);
// public: s_global_preferences_campaign_state::s_global_preferences_campaign_state(enum e_campaign_id, enum e_map_id);
// public: c_global_preferences_accessor::c_global_preferences_accessor(void);
// public: c_global_preferences_accessor::~c_global_preferences_accessor(void);
// public: struct s_gui_game_setup_storage * c_global_preferences_accessor::get_last_game_setup(void);
// void global_preferences_write(void);
// void global_preferences_create_default(void);
// public: s_global_preferences_campaign_state::s_global_preferences_campaign_state(void);
// public: static unsigned __int64 c_global_preferences_version::get(void);
// void global_preferences_init(void);
// public: s_global_preferences::s_global_preferences(void);
// public: s_global_preferences_data::s_global_preferences_data(void);
// public: s_gui_game_setup_storage::s_gui_game_setup_storage(void);
// public: s_gui_game_setup_storage::s_multiplayer_settings::s_multiplayer_settings(void);
// public: s_gui_game_setup_storage::s_map_editor_settings::s_map_editor_settings(void);
// void global_preferences_make_safe(struct s_global_preferences *);
// public: class c_async_completion_flag & c_async_completion_flag::operator=(class c_async_completion_flag const &);
// public: class c_synchronized_int32& c_synchronized_int32::operator=(class c_synchronized_int32const &);
// void global_preferences_dirty(bool);
// bool global_preferences_are_dirty(void);
// public: c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>::c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>(void);
// public: void s_flags<enum e_write_position_flags, unsigned long, 1>::clear(void);
// public: void s_flags<enum e_write_position_flags, unsigned long, 1>::set(enum e_write_position_flags, bool);
// void zero_and_reconstruct<struct s_global_preferences>(struct s_global_preferences *);
// void zero_and_reconstruct<struct s_global_preferences_data>(struct s_global_preferences_data *);
// public: static bool s_flags<enum e_write_position_flags, unsigned long, 1>::valid_bit(enum e_write_position_flags);
// public: bool s_flags<enum e_write_position_flags, unsigned long, 1>::valid(void) const;
// private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::flag_size_type(enum e_write_position_flags);
// void reconstruct<struct s_global_preferences>(struct s_global_preferences *);
// void reconstruct<struct s_global_preferences_data>(struct s_global_preferences_data *);
// private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_write_position_flags);
// public: s_global_preferences_internals_type::s_global_preferences_internals_type(void);
// public: s_global_preferences_internals_type::~s_global_preferences_internals_type(void);
// void g_global_preferences_internal::`dynamic atexit destructor'(void);

//void global_preferences_initialize(void)
//{
//    mangled_ppc("?global_preferences_initialize@@YAXXZ");
//};

//public: c_global_preferences_scope_lock::c_global_preferences_scope_lock(void)
//{
//    mangled_ppc("??0c_global_preferences_scope_lock@@QAA@XZ");
//};

//void lock_global_preferences(bool *)
//{
//    mangled_ppc("?lock_global_preferences@@YAXPA_N@Z");
//};

//bool global_preferences_available(void)
//{
//    mangled_ppc("?global_preferences_available@@YA_NXZ");
//};

//public: c_global_preferences_scope_lock::~c_global_preferences_scope_lock(void)
//{
//    mangled_ppc("??1c_global_preferences_scope_lock@@QAA@XZ");
//};

//void unlock_global_preferences(bool)
//{
//    mangled_ppc("?unlock_global_preferences@@YAX_N@Z");
//};

//void global_preferences_dispose(void)
//{
//    mangled_ppc("?global_preferences_dispose@@YAXXZ");
//};

//void global_preferences_flush_utility_drive(void)
//{
//    mangled_ppc("?global_preferences_flush_utility_drive@@YAXXZ");
//};

//void global_preferences_update(void)
//{
//    mangled_ppc("?global_preferences_update@@YAXXZ");
//};

//void global_preferences_flush(void)
//{
//    mangled_ppc("?global_preferences_flush@@YAXXZ");
//};

//void global_preferences_clear(void)
//{
//    mangled_ppc("?global_preferences_clear@@YAXXZ");
//};

//void global_preferences_set_last_language(enum e_language)
//{
//    mangled_ppc("?global_preferences_set_last_language@@YAXW4e_language@@@Z");
//};

//enum e_language global_preferences_get_last_language(void)
//{
//    mangled_ppc("?global_preferences_get_last_language@@YA?AW4e_language@@XZ");
//};

//void global_preferences_set_last_font_language(enum e_language)
//{
//    mangled_ppc("?global_preferences_set_last_font_language@@YAXW4e_language@@@Z");
//};

//enum e_language global_preferences_get_last_font_language(void)
//{
//    mangled_ppc("?global_preferences_get_last_font_language@@YA?AW4e_language@@XZ");
//};

//void global_preferences_set_last_fonts_modification_date(struct s_file_last_modification_date const *)
//{
//    mangled_ppc("?global_preferences_set_last_fonts_modification_date@@YAXPBUs_file_last_modification_date@@@Z");
//};

//void global_preferences_get_last_fonts_modification_date(struct s_file_last_modification_date *)
//{
//    mangled_ppc("?global_preferences_get_last_fonts_modification_date@@YAXPAUs_file_last_modification_date@@@Z");
//};

//long global_preferences_get_build_number(void)
//{
//    mangled_ppc("?global_preferences_get_build_number@@YAJXZ");
//};

//void global_preferences_set_build_number(long)
//{
//    mangled_ppc("?global_preferences_set_build_number@@YAXJ@Z");
//};

//float global_preferences_get_betrayal_penalty(void)
//{
//    mangled_ppc("?global_preferences_get_betrayal_penalty@@YAMXZ");
//};

//void global_preferences_set_betrayal_penalty(float)
//{
//    mangled_ppc("?global_preferences_set_betrayal_penalty@@YAXM@Z");
//};

//float global_preferences_get_eviction_penalty(void)
//{
//    mangled_ppc("?global_preferences_get_eviction_penalty@@YAMXZ");
//};

//void global_preferences_set_eviction_penalty(float)
//{
//    mangled_ppc("?global_preferences_set_eviction_penalty@@YAXM@Z");
//};

//void global_preferences_invalidate_maps(void)
//{
//    mangled_ppc("?global_preferences_invalidate_maps@@YAXXZ");
//};

//long global_preferences_get_last_main_menu_item(void)
//{
//    mangled_ppc("?global_preferences_get_last_main_menu_item@@YAJXZ");
//};

//void global_preferences_set_last_main_menu_item(long)
//{
//    mangled_ppc("?global_preferences_set_last_main_menu_item@@YAXJ@Z");
//};

//long global_preferences_get_last_title_menu_item(void)
//{
//    mangled_ppc("?global_preferences_get_last_title_menu_item@@YAJXZ");
//};

//void global_preferences_set_last_title_menu_item(long)
//{
//    mangled_ppc("?global_preferences_set_last_title_menu_item@@YAXJ@Z");
//};

//bool global_preferences_get_last_game_setup(struct s_gui_game_setup_storage *)
//{
//    mangled_ppc("?global_preferences_get_last_game_setup@@YA_NPAUs_gui_game_setup_storage@@@Z");
//};

//public: struct s_gui_game_setup_storage & s_gui_game_setup_storage::operator=(struct s_gui_game_setup_storage const &)
//{
//    mangled_ppc("??4s_gui_game_setup_storage@@QAAAAU0@ABU0@@Z");
//};

//public: struct s_gui_game_setup_storage::s_campaign_settings & s_gui_game_setup_storage::s_campaign_settings::operator=(struct s_gui_game_setup_storage::s_campaign_settings const &)
//{
//    mangled_ppc("??4s_campaign_settings@s_gui_game_setup_storage@@QAAAAU01@ABU01@@Z");
//};

//public: struct s_gui_game_setup_storage::s_survival_settings & s_gui_game_setup_storage::s_survival_settings::operator=(struct s_gui_game_setup_storage::s_survival_settings const &)
//{
//    mangled_ppc("??4s_survival_settings@s_gui_game_setup_storage@@QAAAAU01@ABU01@@Z");
//};

//public: struct s_gui_game_setup_storage::s_multiplayer_settings & s_gui_game_setup_storage::s_multiplayer_settings::operator=(struct s_gui_game_setup_storage::s_multiplayer_settings const &)
//{
//    mangled_ppc("??4s_multiplayer_settings@s_gui_game_setup_storage@@QAAAAU01@ABU01@@Z");
//};

//public: struct s_gui_game_setup_storage::s_map_editor_settings & s_gui_game_setup_storage::s_map_editor_settings::operator=(struct s_gui_game_setup_storage::s_map_editor_settings const &)
//{
//    mangled_ppc("??4s_map_editor_settings@s_gui_game_setup_storage@@QAAAAU01@ABU01@@Z");
//};

//bool global_preferences_get_last_game_setup_map(enum e_gui_game_mode, enum e_campaign_id *, enum e_map_id *)
//{
//    mangled_ppc("?global_preferences_get_last_game_setup_map@@YA_NW4e_gui_game_mode@@PAW4e_campaign_id@@PAW4e_map_id@@@Z");
//};

//void global_preferences_set_last_game_setup(struct s_gui_game_setup_storage const *)
//{
//    mangled_ppc("?global_preferences_set_last_game_setup@@YAXPBUs_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_campaign_settings(struct s_gui_game_setup_storage::s_campaign_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_campaign_settings@@YA_NPAUs_campaign_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_campaign_settings(struct s_gui_game_setup_storage::s_campaign_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_campaign_settings@@YA_NPBUs_campaign_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_survival_settings(struct s_gui_game_setup_storage::s_survival_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_survival_settings@@YA_NPAUs_survival_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_survival_settings(struct s_gui_game_setup_storage::s_survival_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_survival_settings@@YA_NPBUs_survival_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_multiplayer_settings(struct s_gui_game_setup_storage::s_multiplayer_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_multiplayer_settings@@YA_NPAUs_multiplayer_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_multiplayer_settings(struct s_gui_game_setup_storage::s_multiplayer_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_multiplayer_settings@@YA_NPBUs_multiplayer_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_mapeditor_settings(struct s_gui_game_setup_storage::s_map_editor_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_mapeditor_settings@@YA_NPAUs_map_editor_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_mapeditor_settings(struct s_gui_game_setup_storage::s_map_editor_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_mapeditor_settings@@YA_NPBUs_map_editor_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_matchmaking_settings(struct s_gui_game_setup_storage::s_matchmaking_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_matchmaking_settings@@YA_NPAUs_matchmaking_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_matchmaking_settings(struct s_gui_game_setup_storage::s_matchmaking_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_matchmaking_settings@@YA_NPBUs_matchmaking_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_get_last_theater_settings(struct s_gui_game_setup_storage::s_theater_settings *)
//{
//    mangled_ppc("?global_preferences_get_last_theater_settings@@YA_NPAUs_theater_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_last_theater_settings(struct s_gui_game_setup_storage::s_theater_settings const *)
//{
//    mangled_ppc("?global_preferences_set_last_theater_settings@@YA_NPBUs_theater_settings@s_gui_game_setup_storage@@@Z");
//};

//bool global_preferences_set_campaign_map(enum e_campaign_id, enum e_map_id)
//{
//    mangled_ppc("?global_preferences_set_campaign_map@@YA_NW4e_campaign_id@@W4e_map_id@@@Z");
//};

//bool global_preferences_set_campaign_difficulty(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?global_preferences_set_campaign_difficulty@@YA_NW4e_campaign_difficulty_level@@@Z");
//};

//bool global_preferences_set_campaign_metagame_scoring(enum e_campaign_metagame_scoring)
//{
//    mangled_ppc("?global_preferences_set_campaign_metagame_scoring@@YA_NW4e_campaign_metagame_scoring@@@Z");
//};

//bool global_preferences_set_campaign_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?global_preferences_set_campaign_skulls@@YA_NV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool global_preferences_set_multiplayer_game_variant(class c_game_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_multiplayer_game_variant@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@@Z");
//};

//public: void s_gui_game_setup_storage::c_game_variant_settings::set_owned_content_item(struct s_owned_content_item const &)
//{
//    mangled_ppc("?set_owned_content_item@c_game_variant_settings@s_gui_game_setup_storage@@QAAXABUs_owned_content_item@@@Z");
//};

//bool global_preferences_set_multiplayer_map_variant(class c_map_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_multiplayer_map_variant@@YA_NPBVc_map_variant@@ABUs_owned_content_item@@@Z");
//};

//public: void s_gui_game_setup_storage::c_map_variant_settings::set_owned_content_item(struct s_owned_content_item const &)
//{
//    mangled_ppc("?set_owned_content_item@c_map_variant_settings@s_gui_game_setup_storage@@QAAXABUs_owned_content_item@@@Z");
//};

//bool global_preferences_set_mapeditor_game_variant(class c_game_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_mapeditor_game_variant@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@@Z");
//};

//bool global_preferences_get_mapeditor_map_variant(class c_map_variant *)
//{
//    mangled_ppc("?global_preferences_get_mapeditor_map_variant@@YA_NPAVc_map_variant@@@Z");
//};

//bool global_preferences_set_mapeditor_map_variant(class c_map_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_mapeditor_map_variant@@YA_NPBVc_map_variant@@ABUs_owned_content_item@@@Z");
//};

//bool global_preferences_set_survival_game_variant(class c_game_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_survival_game_variant@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@@Z");
//};

//bool global_preferences_set_survival_map_id(enum e_map_id)
//{
//    mangled_ppc("?global_preferences_set_survival_map_id@@YA_NW4e_map_id@@@Z");
//};

//bool global_preferences_set_survival_difficulty(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?global_preferences_set_survival_difficulty@@YA_NW4e_campaign_difficulty_level@@@Z");
//};

//bool global_preferences_set_matchmaking_hopper_id(unsigned short)
//{
//    mangled_ppc("?global_preferences_set_matchmaking_hopper_id@@YA_NG@Z");
//};

//bool global_preferences_set_game_variant(class c_game_variant const *, struct s_owned_content_item const &)
//{
//    mangled_ppc("?global_preferences_set_game_variant@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@@Z");
//};

//bool global_preferences_get_game_variant_owned_content_item(enum e_game_engine_type, struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_game_variant_owned_content_item@@YA_NW4e_game_engine_type@@PAUs_owned_content_item@@@Z");
//};

//public: struct s_owned_content_item const & s_gui_game_setup_storage::c_game_variant_settings::get_owned_content_item(void) const
//{
//    mangled_ppc("?get_owned_content_item@c_game_variant_settings@s_gui_game_setup_storage@@QBAABUs_owned_content_item@@XZ");
//};

//bool global_preferences_get_multiplayer_game_variant_owned_content_item(struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_multiplayer_game_variant_owned_content_item@@YA_NPAUs_owned_content_item@@@Z");
//};

//bool global_preferences_get_survival_game_variant_owned_content_item(struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_survival_game_variant_owned_content_item@@YA_NPAUs_owned_content_item@@@Z");
//};

//bool global_preferences_get_mapeditor_game_variant_owned_content_item(struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_mapeditor_game_variant_owned_content_item@@YA_NPAUs_owned_content_item@@@Z");
//};

//bool global_preferences_get_multiplayer_map_variant_owned_content_item(struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_multiplayer_map_variant_owned_content_item@@YA_NPAUs_owned_content_item@@@Z");
//};

//public: struct s_owned_content_item const & s_gui_game_setup_storage::c_map_variant_settings::get_owned_content_item(void) const
//{
//    mangled_ppc("?get_owned_content_item@c_map_variant_settings@s_gui_game_setup_storage@@QBAABUs_owned_content_item@@XZ");
//};

//bool global_preferences_get_mapeditor_map_variant_owned_content_item(struct s_owned_content_item *)
//{
//    mangled_ppc("?global_preferences_get_mapeditor_map_variant_owned_content_item@@YA_NPAUs_owned_content_item@@@Z");
//};

//enum e_gui_network_session_advertisement_mode global_preferences_get_xbox_live_private_privacy_setting(void)
//{
//    mangled_ppc("?global_preferences_get_xbox_live_private_privacy_setting@@YA?AW4e_gui_network_session_advertisement_mode@@XZ");
//};

//void global_preferences_set_xbox_live_private_privacy_setting(enum e_gui_network_session_advertisement_mode)
//{
//    mangled_ppc("?global_preferences_set_xbox_live_private_privacy_setting@@YAXW4e_gui_network_session_advertisement_mode@@@Z");
//};

//enum e_display_brightness global_preferences_get_display_brightness(void)
//{
//    mangled_ppc("?global_preferences_get_display_brightness@@YA?AW4e_display_brightness@@XZ");
//};

//void global_preferences_set_display_brightness(enum e_display_brightness)
//{
//    mangled_ppc("?global_preferences_set_display_brightness@@YAXW4e_display_brightness@@@Z");
//};

//enum e_subtitle_setting global_preferences_get_subtitle_setting(void)
//{
//    mangled_ppc("?global_preferences_get_subtitle_setting@@YA?AW4e_subtitle_setting@@XZ");
//};

//void global_preferences_set_subtitle_setting(enum e_subtitle_setting)
//{
//    mangled_ppc("?global_preferences_set_subtitle_setting@@YAXW4e_subtitle_setting@@@Z");
//};

//long global_preferences_get_content_item_unique_name_number_seed(enum e_content_item_type)
//{
//    mangled_ppc("?global_preferences_get_content_item_unique_name_number_seed@@YAJW4e_content_item_type@@@Z");
//};

//void global_preferences_set_content_item_unique_name_number_seed(enum e_content_item_type, long)
//{
//    mangled_ppc("?global_preferences_set_content_item_unique_name_number_seed@@YAXW4e_content_item_type@@J@Z");
//};

//long global_preferences_get_qos_maximum_simultaneous_responses(void)
//{
//    mangled_ppc("?global_preferences_get_qos_maximum_simultaneous_responses@@YAJXZ");
//};

//void global_preferences_set_qos_maximum_simultaneous_responses(long)
//{
//    mangled_ppc("?global_preferences_set_qos_maximum_simultaneous_responses@@YAXJ@Z");
//};

//bool global_preferences_get_campaign_state(struct s_global_preferences_campaign_state *)
//{
//    mangled_ppc("?global_preferences_get_campaign_state@@YA_NPAUs_global_preferences_campaign_state@@@Z");
//};

//bool global_preferences_set_campaign_state(struct s_global_preferences_campaign_state const &)
//{
//    mangled_ppc("?global_preferences_set_campaign_state@@YA_NABUs_global_preferences_campaign_state@@@Z");
//};

//bool test_global_preferences_set_campaign_state(long)
//{
//    mangled_ppc("?test_global_preferences_set_campaign_state@@YA_NJ@Z");
//};

//public: s_global_preferences_campaign_state::s_global_preferences_campaign_state(enum e_campaign_id, enum e_map_id)
//{
//    mangled_ppc("??0s_global_preferences_campaign_state@@QAA@W4e_campaign_id@@W4e_map_id@@@Z");
//};

//public: c_global_preferences_accessor::c_global_preferences_accessor(void)
//{
//    mangled_ppc("??0c_global_preferences_accessor@@QAA@XZ");
//};

//public: c_global_preferences_accessor::~c_global_preferences_accessor(void)
//{
//    mangled_ppc("??1c_global_preferences_accessor@@QAA@XZ");
//};

//public: struct s_gui_game_setup_storage * c_global_preferences_accessor::get_last_game_setup(void)
//{
//    mangled_ppc("?get_last_game_setup@c_global_preferences_accessor@@QAAPAUs_gui_game_setup_storage@@XZ");
//};

//void global_preferences_write(void)
//{
//    mangled_ppc("?global_preferences_write@@YAXXZ");
//};

//void global_preferences_create_default(void)
//{
//    mangled_ppc("?global_preferences_create_default@@YAXXZ");
//};

//public: s_global_preferences_campaign_state::s_global_preferences_campaign_state(void)
//{
//    mangled_ppc("??0s_global_preferences_campaign_state@@QAA@XZ");
//};

//public: static unsigned __int64 c_global_preferences_version::get(void)
//{
//    mangled_ppc("?get@c_global_preferences_version@@SA_KXZ");
//};

//void global_preferences_init(void)
//{
//    mangled_ppc("?global_preferences_init@@YAXXZ");
//};

//public: s_global_preferences::s_global_preferences(void)
//{
//    mangled_ppc("??0s_global_preferences@@QAA@XZ");
//};

//public: s_global_preferences_data::s_global_preferences_data(void)
//{
//    mangled_ppc("??0s_global_preferences_data@@QAA@XZ");
//};

//public: s_gui_game_setup_storage::s_gui_game_setup_storage(void)
//{
//    mangled_ppc("??0s_gui_game_setup_storage@@QAA@XZ");
//};

//public: s_gui_game_setup_storage::s_multiplayer_settings::s_multiplayer_settings(void)
//{
//    mangled_ppc("??0s_multiplayer_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: s_gui_game_setup_storage::s_map_editor_settings::s_map_editor_settings(void)
//{
//    mangled_ppc("??0s_map_editor_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//void global_preferences_make_safe(struct s_global_preferences *)
//{
//    mangled_ppc("?global_preferences_make_safe@@YAXPAUs_global_preferences@@@Z");
//};

//public: class c_async_completion_flag & c_async_completion_flag::operator=(class c_async_completion_flag const &)
//{
//    mangled_ppc("??4c_async_completion_flag@@QAAAAV0@ABV0@@Z");
//};

//public: class c_synchronized_int32& c_synchronized_int32::operator=(class c_synchronized_int32const &)
//{
//    mangled_ppc("??4c_synchronized_int32@@QAAAAV0@ABV0@@Z");
//};

//void global_preferences_dirty(bool)
//{
//    mangled_ppc("?global_preferences_dirty@@YAX_N@Z");
//};

//bool global_preferences_are_dirty(void)
//{
//    mangled_ppc("?global_preferences_are_dirty@@YA_NXZ");
//};

//public: c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>::c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>(void)
//{
//    mangled_ppc("??0?$c_flags_zero_init@W4e_write_position_flags@@K$00@@QAA@XZ");
//};

//public: void s_flags<enum e_write_position_flags, unsigned long, 1>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_write_position_flags@@K$00@@QAAXXZ");
//};

//public: void s_flags<enum e_write_position_flags, unsigned long, 1>::set(enum e_write_position_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_write_position_flags@@K$00@@QAAXW4e_write_position_flags@@_N@Z");
//};

//void zero_and_reconstruct<struct s_global_preferences>(struct s_global_preferences *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_global_preferences@@@@YAXPAUs_global_preferences@@@Z");
//};

//void zero_and_reconstruct<struct s_global_preferences_data>(struct s_global_preferences_data *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_global_preferences_data@@@@YAXPAUs_global_preferences_data@@@Z");
//};

//public: static bool s_flags<enum e_write_position_flags, unsigned long, 1>::valid_bit(enum e_write_position_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_write_position_flags@@K$00@@SA_NW4e_write_position_flags@@@Z");
//};

//public: bool s_flags<enum e_write_position_flags, unsigned long, 1>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_write_position_flags@@K$00@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::flag_size_type(enum e_write_position_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_write_position_flags@@K$00@@CAKW4e_write_position_flags@@@Z");
//};

//void reconstruct<struct s_global_preferences>(struct s_global_preferences *)
//{
//    mangled_ppc("??$reconstruct@Us_global_preferences@@@@YAXPAUs_global_preferences@@@Z");
//};

//void reconstruct<struct s_global_preferences_data>(struct s_global_preferences_data *)
//{
//    mangled_ppc("??$reconstruct@Us_global_preferences_data@@@@YAXPAUs_global_preferences_data@@@Z");
//};

//private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_write_position_flags@@K$00@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_write_position_flags, unsigned long, 1>::make_N_bit_mask_size_type(enum e_write_position_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_write_position_flags@@K$00@@CAKW4e_write_position_flags@@@Z");
//};

//public: s_global_preferences_internals_type::s_global_preferences_internals_type(void)
//{
//    mangled_ppc("??0s_global_preferences_internals_type@@QAA@XZ");
//};

//public: s_global_preferences_internals_type::~s_global_preferences_internals_type(void)
//{
//    mangled_ppc("??1s_global_preferences_internals_type@@QAA@XZ");
//};

//void g_global_preferences_internal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_global_preferences_internal@@YAXXZ");
//};

