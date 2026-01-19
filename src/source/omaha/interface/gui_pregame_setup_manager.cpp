/* ---------- headers */

#include "omaha\interface\gui_pregame_setup_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: s_owned_content_item::s_owned_content_item(void);
// public: s_owned_content_item::s_owned_content_item(struct s_player_identifier const &, struct s_content_item_platform_handle const &);
// public: s_owned_content_item::s_owned_content_item(enum e_controller_index, struct s_content_item_platform_handle const &);
// public: bool s_owned_content_item::is_valid(void) const;
// public: void s_owned_content_item::clear(void);
// public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(void);
// public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(enum e_game_engine_type);
// public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(class s_gui_game_setup_storage::c_game_variant_settings const &);
// public: class s_gui_game_setup_storage::c_game_variant_settings & s_gui_game_setup_storage::c_game_variant_settings::operator=(class s_gui_game_setup_storage::c_game_variant_settings const &);
// public: bool s_gui_game_setup_storage::c_game_variant_settings::is_valid(void) const;
// public: void s_gui_game_setup_storage::c_game_variant_settings::set_variant(class c_game_variant const &);
// public: void s_gui_game_setup_storage::c_game_variant_settings::create_default_variant(enum e_game_engine_type);
// public: s_gui_game_setup_storage::c_map_variant_settings::c_map_variant_settings(void);
// public: s_gui_game_setup_storage::c_map_variant_settings::c_map_variant_settings(class s_gui_game_setup_storage::c_map_variant_settings const &);
// public: class s_gui_game_setup_storage::c_map_variant_settings & s_gui_game_setup_storage::c_map_variant_settings::operator=(class s_gui_game_setup_storage::c_map_variant_settings const &);
// public: bool s_gui_game_setup_storage::c_map_variant_settings::is_valid(void) const;
// public: class c_map_variant const * s_gui_game_setup_storage::c_map_variant_settings::get_variant(void) const;
// public: void s_gui_game_setup_storage::c_map_variant_settings::set_variant(class c_map_variant const *);
// public: void s_gui_game_setup_storage::c_map_variant_settings::create_default_variant(enum e_map_id);
// public: s_gui_game_setup_storage::s_campaign_settings::s_campaign_settings(void);
// public: bool s_gui_game_setup_storage::s_campaign_settings::is_valid(void) const;
// public: s_gui_game_setup_storage::s_survival_settings::s_survival_settings(void);
// public: bool s_gui_game_setup_storage::s_survival_settings::is_valid(void) const;
// public: s_gui_game_setup_storage::s_matchmaking_settings::s_matchmaking_settings(void);
// public: bool s_gui_game_setup_storage::s_matchmaking_settings::is_valid(void) const;
// public: bool s_gui_game_setup_storage::s_multiplayer_settings::is_valid(void) const;
// public: bool s_gui_game_setup_storage::s_map_editor_settings::is_valid(void) const;
// public: s_gui_game_setup_storage::s_theater_settings::s_theater_settings(void);
// public: bool s_gui_game_setup_storage::s_theater_settings::is_valid(void) const;
// public: c_gui_single_game_setup_storage::c_gui_single_game_setup_storage(void);
// public: c_gui_single_game_setup_storage::c_gui_single_game_setup_storage(enum e_gui_game_mode);
// public: struct c_gui_single_game_setup_storage & c_gui_single_game_setup_storage::operator=(struct c_gui_single_game_setup_storage const &);
// public: void c_gui_single_game_setup_storage::set_game_mode(enum e_gui_game_mode);
// public: c_gui_pregame_setup_manager::c_gui_pregame_setup_manager(void);
// public: static class c_gui_pregame_setup_manager * c_gui_pregame_setup_manager::get(void);
// public: bool c_gui_pregame_setup_manager::try_to_get_last_set_game_mode(enum e_gui_game_mode *) const;
// public: bool c_gui_pregame_setup_manager::initialize_game_mode(enum e_gui_game_mode, bool);
// public: void c_gui_pregame_setup_manager::restore_from_last(enum e_gui_game_mode);
// public: struct s_gui_game_setup_storage::s_campaign_settings * c_gui_single_game_setup_storage::get_campaign(void);
// public: struct s_gui_game_setup_storage::s_survival_settings * c_gui_single_game_setup_storage::get_survival(void);
// public: struct s_gui_game_setup_storage::s_matchmaking_settings * c_gui_single_game_setup_storage::get_matchmaking(void);
// public: struct s_gui_game_setup_storage::s_multiplayer_settings * c_gui_single_game_setup_storage::get_multiplayer(void);
// public: struct s_gui_game_setup_storage::s_map_editor_settings * c_gui_single_game_setup_storage::get_mapeditor(void);
// public: struct s_gui_game_setup_storage::s_theater_settings * c_gui_single_game_setup_storage::get_theater(void);
// public: static void c_gui_pregame_setup_manager::save_game_setup(struct s_gui_game_setup_storage const *, struct c_gui_single_game_setup_storage *);
// public: void c_gui_pregame_setup_manager::update(void);
// public: bool c_gui_pregame_setup_manager::restore_campaign_setup_from_game_state_header(struct s_game_state_header const *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_activities(void);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_campaign(struct s_gui_game_setup_storage::s_campaign_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_matchmaking(struct s_gui_game_setup_storage::s_matchmaking_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_multiplayer(struct s_gui_game_setup_storage::s_multiplayer_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_mapeditor(struct s_gui_game_setup_storage::s_map_editor_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_theater(struct s_gui_game_setup_storage::s_theater_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_mode_survival(struct s_gui_game_setup_storage::s_survival_settings *);
// private: void c_gui_pregame_setup_manager::restore_game_setup_internal(struct c_gui_single_game_setup_storage *);
// void build_campaign_settings_from_game_options(struct s_game_options const *, struct s_gui_game_setup_storage::s_campaign_settings *);
// void set_default_privacy(enum e_gui_game_mode, bool);
// bool change_multiplayer_settings_custom_game_variant_type(struct s_gui_game_setup_storage::s_multiplayer_settings *);
// bool pregame_setup_manager_owned_content_item_matches_controller(struct s_owned_content_item const &, enum e_controller_index);
// public: struct s_gui_game_setup_storage::s_campaign_settings * c_opaque_data<struct s_gui_game_setup_storage::s_campaign_settings, 63832, 4>::get(void);
// public: struct s_gui_game_setup_storage::s_survival_settings * c_opaque_data<struct s_gui_game_setup_storage::s_survival_settings, 63820, 4>::get(void);
// public: struct s_gui_game_setup_storage::s_matchmaking_settings * c_opaque_data<struct s_gui_game_setup_storage::s_matchmaking_settings, 2, 4>::get(void);
// public: struct s_gui_game_setup_storage::s_multiplayer_settings * c_opaque_data<struct s_gui_game_setup_storage::s_multiplayer_settings, 119852, 4>::get(void);
// public: struct s_gui_game_setup_storage::s_map_editor_settings * c_opaque_data<struct s_gui_game_setup_storage::s_map_editor_settings, 119852, 4>::get(void);
// public: struct s_gui_game_setup_storage::s_theater_settings * c_opaque_data<struct s_gui_game_setup_storage::s_theater_settings, 556, 4>::get(void);
// public: c_gui_pregame_setup_manager::~c_gui_pregame_setup_manager(void);
// void g_gui_pregame_setup_manager::`dynamic atexit destructor'(void);

//public: s_owned_content_item::s_owned_content_item(void)
//{
//    mangled_ppc("??0s_owned_content_item@@QAA@XZ");
//};

//public: s_owned_content_item::s_owned_content_item(struct s_player_identifier const &, struct s_content_item_platform_handle const &)
//{
//    mangled_ppc("??0s_owned_content_item@@QAA@ABUs_player_identifier@@ABUs_content_item_platform_handle@@@Z");
//};

//public: s_owned_content_item::s_owned_content_item(enum e_controller_index, struct s_content_item_platform_handle const &)
//{
//    mangled_ppc("??0s_owned_content_item@@QAA@W4e_controller_index@@ABUs_content_item_platform_handle@@@Z");
//};

//public: bool s_owned_content_item::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_owned_content_item@@QBA_NXZ");
//};

//public: void s_owned_content_item::clear(void)
//{
//    mangled_ppc("?clear@s_owned_content_item@@QAAXXZ");
//};

//public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(void)
//{
//    mangled_ppc("??0c_game_variant_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(enum e_game_engine_type)
//{
//    mangled_ppc("??0c_game_variant_settings@s_gui_game_setup_storage@@QAA@W4e_game_engine_type@@@Z");
//};

//public: s_gui_game_setup_storage::c_game_variant_settings::c_game_variant_settings(class s_gui_game_setup_storage::c_game_variant_settings const &)
//{
//    mangled_ppc("??0c_game_variant_settings@s_gui_game_setup_storage@@QAA@ABV01@@Z");
//};

//public: class s_gui_game_setup_storage::c_game_variant_settings & s_gui_game_setup_storage::c_game_variant_settings::operator=(class s_gui_game_setup_storage::c_game_variant_settings const &)
//{
//    mangled_ppc("??4c_game_variant_settings@s_gui_game_setup_storage@@QAAAAV01@ABV01@@Z");
//};

//public: bool s_gui_game_setup_storage::c_game_variant_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_game_variant_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: void s_gui_game_setup_storage::c_game_variant_settings::set_variant(class c_game_variant const &)
//{
//    mangled_ppc("?set_variant@c_game_variant_settings@s_gui_game_setup_storage@@QAAXABVc_game_variant@@@Z");
//};

//public: void s_gui_game_setup_storage::c_game_variant_settings::create_default_variant(enum e_game_engine_type)
//{
//    mangled_ppc("?create_default_variant@c_game_variant_settings@s_gui_game_setup_storage@@QAAXW4e_game_engine_type@@@Z");
//};

//public: s_gui_game_setup_storage::c_map_variant_settings::c_map_variant_settings(void)
//{
//    mangled_ppc("??0c_map_variant_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: s_gui_game_setup_storage::c_map_variant_settings::c_map_variant_settings(class s_gui_game_setup_storage::c_map_variant_settings const &)
//{
//    mangled_ppc("??0c_map_variant_settings@s_gui_game_setup_storage@@QAA@ABV01@@Z");
//};

//public: class s_gui_game_setup_storage::c_map_variant_settings & s_gui_game_setup_storage::c_map_variant_settings::operator=(class s_gui_game_setup_storage::c_map_variant_settings const &)
//{
//    mangled_ppc("??4c_map_variant_settings@s_gui_game_setup_storage@@QAAAAV01@ABV01@@Z");
//};

//public: bool s_gui_game_setup_storage::c_map_variant_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_map_variant_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: class c_map_variant const * s_gui_game_setup_storage::c_map_variant_settings::get_variant(void) const
//{
//    mangled_ppc("?get_variant@c_map_variant_settings@s_gui_game_setup_storage@@QBAPBVc_map_variant@@XZ");
//};

//public: void s_gui_game_setup_storage::c_map_variant_settings::set_variant(class c_map_variant const *)
//{
//    mangled_ppc("?set_variant@c_map_variant_settings@s_gui_game_setup_storage@@QAAXPBVc_map_variant@@@Z");
//};

//public: void s_gui_game_setup_storage::c_map_variant_settings::create_default_variant(enum e_map_id)
//{
//    mangled_ppc("?create_default_variant@c_map_variant_settings@s_gui_game_setup_storage@@QAAXW4e_map_id@@@Z");
//};

//public: s_gui_game_setup_storage::s_campaign_settings::s_campaign_settings(void)
//{
//    mangled_ppc("??0s_campaign_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: bool s_gui_game_setup_storage::s_campaign_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_campaign_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: s_gui_game_setup_storage::s_survival_settings::s_survival_settings(void)
//{
//    mangled_ppc("??0s_survival_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: bool s_gui_game_setup_storage::s_survival_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_survival_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: s_gui_game_setup_storage::s_matchmaking_settings::s_matchmaking_settings(void)
//{
//    mangled_ppc("??0s_matchmaking_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: bool s_gui_game_setup_storage::s_matchmaking_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_matchmaking_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: bool s_gui_game_setup_storage::s_multiplayer_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_multiplayer_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: bool s_gui_game_setup_storage::s_map_editor_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_map_editor_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: s_gui_game_setup_storage::s_theater_settings::s_theater_settings(void)
//{
//    mangled_ppc("??0s_theater_settings@s_gui_game_setup_storage@@QAA@XZ");
//};

//public: bool s_gui_game_setup_storage::s_theater_settings::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_theater_settings@s_gui_game_setup_storage@@QBA_NXZ");
//};

//public: c_gui_single_game_setup_storage::c_gui_single_game_setup_storage(void)
//{
//    mangled_ppc("??0c_gui_single_game_setup_storage@@QAA@XZ");
//};

//public: c_gui_single_game_setup_storage::c_gui_single_game_setup_storage(enum e_gui_game_mode)
//{
//    mangled_ppc("??0c_gui_single_game_setup_storage@@QAA@W4e_gui_game_mode@@@Z");
//};

//public: struct c_gui_single_game_setup_storage & c_gui_single_game_setup_storage::operator=(struct c_gui_single_game_setup_storage const &)
//{
//    mangled_ppc("??4c_gui_single_game_setup_storage@@QAAAAU0@ABU0@@Z");
//};

//public: void c_gui_single_game_setup_storage::set_game_mode(enum e_gui_game_mode)
//{
//    mangled_ppc("?set_game_mode@c_gui_single_game_setup_storage@@QAAXW4e_gui_game_mode@@@Z");
//};

//public: c_gui_pregame_setup_manager::c_gui_pregame_setup_manager(void)
//{
//    mangled_ppc("??0c_gui_pregame_setup_manager@@QAA@XZ");
//};

//public: static class c_gui_pregame_setup_manager * c_gui_pregame_setup_manager::get(void)
//{
//    mangled_ppc("?get@c_gui_pregame_setup_manager@@SAPAV1@XZ");
//};

//public: bool c_gui_pregame_setup_manager::try_to_get_last_set_game_mode(enum e_gui_game_mode *) const
//{
//    mangled_ppc("?try_to_get_last_set_game_mode@c_gui_pregame_setup_manager@@QBA_NPAW4e_gui_game_mode@@@Z");
//};

//public: bool c_gui_pregame_setup_manager::initialize_game_mode(enum e_gui_game_mode, bool)
//{
//    mangled_ppc("?initialize_game_mode@c_gui_pregame_setup_manager@@QAA_NW4e_gui_game_mode@@_N@Z");
//};

//public: void c_gui_pregame_setup_manager::restore_from_last(enum e_gui_game_mode)
//{
//    mangled_ppc("?restore_from_last@c_gui_pregame_setup_manager@@QAAXW4e_gui_game_mode@@@Z");
//};

//public: struct s_gui_game_setup_storage::s_campaign_settings * c_gui_single_game_setup_storage::get_campaign(void)
//{
//    mangled_ppc("?get_campaign@c_gui_single_game_setup_storage@@QAAPAUs_campaign_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_survival_settings * c_gui_single_game_setup_storage::get_survival(void)
//{
//    mangled_ppc("?get_survival@c_gui_single_game_setup_storage@@QAAPAUs_survival_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_matchmaking_settings * c_gui_single_game_setup_storage::get_matchmaking(void)
//{
//    mangled_ppc("?get_matchmaking@c_gui_single_game_setup_storage@@QAAPAUs_matchmaking_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_multiplayer_settings * c_gui_single_game_setup_storage::get_multiplayer(void)
//{
//    mangled_ppc("?get_multiplayer@c_gui_single_game_setup_storage@@QAAPAUs_multiplayer_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_map_editor_settings * c_gui_single_game_setup_storage::get_mapeditor(void)
//{
//    mangled_ppc("?get_mapeditor@c_gui_single_game_setup_storage@@QAAPAUs_map_editor_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_theater_settings * c_gui_single_game_setup_storage::get_theater(void)
//{
//    mangled_ppc("?get_theater@c_gui_single_game_setup_storage@@QAAPAUs_theater_settings@s_gui_game_setup_storage@@XZ");
//};

//public: static void c_gui_pregame_setup_manager::save_game_setup(struct s_gui_game_setup_storage const *, struct c_gui_single_game_setup_storage *)
//{
//    mangled_ppc("?save_game_setup@c_gui_pregame_setup_manager@@SAXPBUs_gui_game_setup_storage@@PAUc_gui_single_game_setup_storage@@@Z");
//};

//public: void c_gui_pregame_setup_manager::update(void)
//{
//    mangled_ppc("?update@c_gui_pregame_setup_manager@@QAAXXZ");
//};

//public: bool c_gui_pregame_setup_manager::restore_campaign_setup_from_game_state_header(struct s_game_state_header const *)
//{
//    mangled_ppc("?restore_campaign_setup_from_game_state_header@c_gui_pregame_setup_manager@@QAA_NPBUs_game_state_header@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_activities(void)
//{
//    mangled_ppc("?restore_game_setup_mode_activities@c_gui_pregame_setup_manager@@AAAXXZ");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_campaign(struct s_gui_game_setup_storage::s_campaign_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_campaign@c_gui_pregame_setup_manager@@AAAXPAUs_campaign_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_matchmaking(struct s_gui_game_setup_storage::s_matchmaking_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_matchmaking@c_gui_pregame_setup_manager@@AAAXPAUs_matchmaking_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_multiplayer(struct s_gui_game_setup_storage::s_multiplayer_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_multiplayer@c_gui_pregame_setup_manager@@AAAXPAUs_multiplayer_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_mapeditor(struct s_gui_game_setup_storage::s_map_editor_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_mapeditor@c_gui_pregame_setup_manager@@AAAXPAUs_map_editor_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_theater(struct s_gui_game_setup_storage::s_theater_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_theater@c_gui_pregame_setup_manager@@AAAXPAUs_theater_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_mode_survival(struct s_gui_game_setup_storage::s_survival_settings *)
//{
//    mangled_ppc("?restore_game_setup_mode_survival@c_gui_pregame_setup_manager@@AAAXPAUs_survival_settings@s_gui_game_setup_storage@@@Z");
//};

//private: void c_gui_pregame_setup_manager::restore_game_setup_internal(struct c_gui_single_game_setup_storage *)
//{
//    mangled_ppc("?restore_game_setup_internal@c_gui_pregame_setup_manager@@AAAXPAUc_gui_single_game_setup_storage@@@Z");
//};

//void build_campaign_settings_from_game_options(struct s_game_options const *, struct s_gui_game_setup_storage::s_campaign_settings *)
//{
//    mangled_ppc("?build_campaign_settings_from_game_options@@YAXPBUs_game_options@@PAUs_campaign_settings@s_gui_game_setup_storage@@@Z");
//};

//void set_default_privacy(enum e_gui_game_mode, bool)
//{
//    mangled_ppc("?set_default_privacy@@YAXW4e_gui_game_mode@@_N@Z");
//};

//bool change_multiplayer_settings_custom_game_variant_type(struct s_gui_game_setup_storage::s_multiplayer_settings *)
//{
//    mangled_ppc("?change_multiplayer_settings_custom_game_variant_type@@YA_NPAUs_multiplayer_settings@s_gui_game_setup_storage@@@Z");
//};

//bool pregame_setup_manager_owned_content_item_matches_controller(struct s_owned_content_item const &, enum e_controller_index)
//{
//    mangled_ppc("?pregame_setup_manager_owned_content_item_matches_controller@@YA_NABUs_owned_content_item@@W4e_controller_index@@@Z");
//};

//public: struct s_gui_game_setup_storage::s_campaign_settings * c_opaque_data<struct s_gui_game_setup_storage::s_campaign_settings, 63832, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_campaign_settings@s_gui_game_setup_storage@@$0PJFI@$03@@QAAPAUs_campaign_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_survival_settings * c_opaque_data<struct s_gui_game_setup_storage::s_survival_settings, 63820, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_survival_settings@s_gui_game_setup_storage@@$0PJEM@$03@@QAAPAUs_survival_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_matchmaking_settings * c_opaque_data<struct s_gui_game_setup_storage::s_matchmaking_settings, 2, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_matchmaking_settings@s_gui_game_setup_storage@@$01$03@@QAAPAUs_matchmaking_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_multiplayer_settings * c_opaque_data<struct s_gui_game_setup_storage::s_multiplayer_settings, 119852, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_multiplayer_settings@s_gui_game_setup_storage@@$0BNECM@$03@@QAAPAUs_multiplayer_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_map_editor_settings * c_opaque_data<struct s_gui_game_setup_storage::s_map_editor_settings, 119852, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_map_editor_settings@s_gui_game_setup_storage@@$0BNECM@$03@@QAAPAUs_map_editor_settings@s_gui_game_setup_storage@@XZ");
//};

//public: struct s_gui_game_setup_storage::s_theater_settings * c_opaque_data<struct s_gui_game_setup_storage::s_theater_settings, 556, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_theater_settings@s_gui_game_setup_storage@@$0CCM@$03@@QAAPAUs_theater_settings@s_gui_game_setup_storage@@XZ");
//};

//public: c_gui_pregame_setup_manager::~c_gui_pregame_setup_manager(void)
//{
//    mangled_ppc("??1c_gui_pregame_setup_manager@@QAA@XZ");
//};

//void g_gui_pregame_setup_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_gui_pregame_setup_manager@@YAXXZ");
//};

