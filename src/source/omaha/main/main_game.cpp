/* ---------- headers */

#include "omaha\main\main_game.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char *g_delay_load_variant_name; // "?g_delay_load_variant_name@@3PADA"
// bool debug_load_panic_to_main_menu; // "?debug_load_panic_to_main_menu@@3_NA"

// void saved_film_manager_memory_initialize(enum e_map_memory_configuration);
// void saved_film_manager_memory_dispose(void);
// void cache_file_tag_resources_memory_initialize(enum e_map_memory_configuration);
// void cache_file_tag_resources_memory_dispose(void);
// void main_game_initialize(void);
// void main_game_launch_default(void);
// void main_game_reset_map(bool, bool);
// bool main_game_reset_in_progress(void);
// bool main_game_reset_preserve_simulation(void);
// void main_game_change(struct s_game_options const *);
// bool main_game_change_in_progress(void);
// void main_game_change_abort(void);
// void main_game_change_update(void);
// bool main_game_change_immediate(struct s_game_options const *);
// void main_game_reload_map(char const *);
// void main_game_reload_map_by_name(char const *, char const *);
// void main_game_request_level_advance(void);
// bool main_game_goto_next_level(void);
// void main_game_notify_language_change(enum e_language);
// bool main_game_load_map(struct s_game_options const *);
// void cache_files_copy_pause(void);
// void cache_files_copy_resume(void);
// void main_game_cleanup_loading_screen(void);
// void main_game_unload_and_prepare_for_next_game(struct s_game_options const *);
// bool main_game_loaded_pregame(void);
// bool main_game_loaded_map(void);
// char const * main_game_loaded_map_name(void);
// enum e_map_id main_game_pending_map_id(void);
// enum e_game_mode main_game_pending_game_mode(void);
// void main_game_internal_map_load_begin(bool);
// bool main_game_internal_map_load_complete(bool, struct s_game_options const *);
// void main_game_internal_map_load_abort(bool);
// void main_game_internal_map_unload_begin(void);
// void main_game_internal_map_unload_complete(void);
// void main_game_internal_pregame_load(void);
// void main_game_internal_pregame_unload(void);
// void main_game_internal_pregame_blocking_load(void);
// void main_game_internal_pregame_blocking_unload(void);
// bool main_game_internal_open_caches(struct s_game_options const *);
// void cache_file_tag_resources_initialize_for_new_map(enum e_game_mode);
// void main_game_internal_close_caches(void);
// void cache_file_tag_resources_dispose_from_old_map(void);
// bool map_memory_configuration_is_main_menu(enum e_map_memory_configuration);
// bool map_memory_configuration_is_multiplayer(enum e_map_memory_configuration);
// bool map_memory_configuration_is_campaign(enum e_map_memory_configuration);
// bool map_memory_configuration_is_campaign_epilogue(enum e_map_memory_configuration);
// bool map_memory_configuration_is_saved_film(enum e_map_memory_configuration);
// void main_game_configure_map_memory_push(enum e_map_memory_configuration);
// void main_game_configure_map_memory(struct s_game_options const *);
// enum e_map_memory_configuration compute_desired_map_memory_configuration(struct s_game_options const *);
// void main_game_configure_map_memory_pop(void);
// void main_game_load_panic(void);
// void main_game_load_from_core_name(char const *);
// void main_game_load_from_core(void);
// bool main_game_start(struct s_game_options const *);
// void main_game_campaign_loaded(struct s_game_options const *);
// bool main_game_load_blocking(char const *);
// void main_game_editor_world_controller_update(void);
// void main_menu_build_game_options(struct s_game_options *);
// void main_menu_launch(void);
// void main_menu_launch_force(void);
// void data_mine_insert_single_player_game_options(char const *);
// void game_load_variant_on_next_map_load_or_reset(char const *);
// void game_load_variant_and_reset_map(char const *);
// bool operator!=<enum e_campaign_id>(enum e_campaign_id const &, enum e_none_sentinel const &);
// bool operator==<enum e_campaign_id>(enum e_campaign_id const &, enum e_none_sentinel const &);
// public: s_main_game_globals::s_main_game_globals(void);

//void saved_film_manager_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?saved_film_manager_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void saved_film_manager_memory_dispose(void)
//{
//    mangled_ppc("?saved_film_manager_memory_dispose@@YAXXZ");
//};

//void cache_file_tag_resources_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?cache_file_tag_resources_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void cache_file_tag_resources_memory_dispose(void)
//{
//    mangled_ppc("?cache_file_tag_resources_memory_dispose@@YAXXZ");
//};

//void main_game_initialize(void)
//{
//    mangled_ppc("?main_game_initialize@@YAXXZ");
//};

//void main_game_launch_default(void)
//{
//    mangled_ppc("?main_game_launch_default@@YAXXZ");
//};

//void main_game_reset_map(bool, bool)
//{
//    mangled_ppc("?main_game_reset_map@@YAX_N0@Z");
//};

//bool main_game_reset_in_progress(void)
//{
//    mangled_ppc("?main_game_reset_in_progress@@YA_NXZ");
//};

//bool main_game_reset_preserve_simulation(void)
//{
//    mangled_ppc("?main_game_reset_preserve_simulation@@YA_NXZ");
//};

//void main_game_change(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_change@@YAXPBUs_game_options@@@Z");
//};

//bool main_game_change_in_progress(void)
//{
//    mangled_ppc("?main_game_change_in_progress@@YA_NXZ");
//};

//void main_game_change_abort(void)
//{
//    mangled_ppc("?main_game_change_abort@@YAXXZ");
//};

//void main_game_change_update(void)
//{
//    mangled_ppc("?main_game_change_update@@YAXXZ");
//};

//bool main_game_change_immediate(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_change_immediate@@YA_NPBUs_game_options@@@Z");
//};

//void main_game_reload_map(char const *)
//{
//    mangled_ppc("?main_game_reload_map@@YAXPBD@Z");
//};

//void main_game_reload_map_by_name(char const *, char const *)
//{
//    mangled_ppc("?main_game_reload_map_by_name@@YAXPBD0@Z");
//};

//void main_game_request_level_advance(void)
//{
//    mangled_ppc("?main_game_request_level_advance@@YAXXZ");
//};

//bool main_game_goto_next_level(void)
//{
//    mangled_ppc("?main_game_goto_next_level@@YA_NXZ");
//};

//void main_game_notify_language_change(enum e_language)
//{
//    mangled_ppc("?main_game_notify_language_change@@YAXW4e_language@@@Z");
//};

//bool main_game_load_map(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_load_map@@YA_NPBUs_game_options@@@Z");
//};

//void cache_files_copy_pause(void)
//{
//    mangled_ppc("?cache_files_copy_pause@@YAXXZ");
//};

//void cache_files_copy_resume(void)
//{
//    mangled_ppc("?cache_files_copy_resume@@YAXXZ");
//};

//void main_game_cleanup_loading_screen(void)
//{
//    mangled_ppc("?main_game_cleanup_loading_screen@@YAXXZ");
//};

//void main_game_unload_and_prepare_for_next_game(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_unload_and_prepare_for_next_game@@YAXPBUs_game_options@@@Z");
//};

//bool main_game_loaded_pregame(void)
//{
//    mangled_ppc("?main_game_loaded_pregame@@YA_NXZ");
//};

//bool main_game_loaded_map(void)
//{
//    mangled_ppc("?main_game_loaded_map@@YA_NXZ");
//};

//char const * main_game_loaded_map_name(void)
//{
//    mangled_ppc("?main_game_loaded_map_name@@YAPBDXZ");
//};

//enum e_map_id main_game_pending_map_id(void)
//{
//    mangled_ppc("?main_game_pending_map_id@@YA?AW4e_map_id@@XZ");
//};

//enum e_game_mode main_game_pending_game_mode(void)
//{
//    mangled_ppc("?main_game_pending_game_mode@@YA?AW4e_game_mode@@XZ");
//};

//void main_game_internal_map_load_begin(bool)
//{
//    mangled_ppc("?main_game_internal_map_load_begin@@YAX_N@Z");
//};

//bool main_game_internal_map_load_complete(bool, struct s_game_options const *)
//{
//    mangled_ppc("?main_game_internal_map_load_complete@@YA_N_NPBUs_game_options@@@Z");
//};

//void main_game_internal_map_load_abort(bool)
//{
//    mangled_ppc("?main_game_internal_map_load_abort@@YAX_N@Z");
//};

//void main_game_internal_map_unload_begin(void)
//{
//    mangled_ppc("?main_game_internal_map_unload_begin@@YAXXZ");
//};

//void main_game_internal_map_unload_complete(void)
//{
//    mangled_ppc("?main_game_internal_map_unload_complete@@YAXXZ");
//};

//void main_game_internal_pregame_load(void)
//{
//    mangled_ppc("?main_game_internal_pregame_load@@YAXXZ");
//};

//void main_game_internal_pregame_unload(void)
//{
//    mangled_ppc("?main_game_internal_pregame_unload@@YAXXZ");
//};

//void main_game_internal_pregame_blocking_load(void)
//{
//    mangled_ppc("?main_game_internal_pregame_blocking_load@@YAXXZ");
//};

//void main_game_internal_pregame_blocking_unload(void)
//{
//    mangled_ppc("?main_game_internal_pregame_blocking_unload@@YAXXZ");
//};

//bool main_game_internal_open_caches(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_internal_open_caches@@YA_NPBUs_game_options@@@Z");
//};

//void cache_file_tag_resources_initialize_for_new_map(enum e_game_mode)
//{
//    mangled_ppc("?cache_file_tag_resources_initialize_for_new_map@@YAXW4e_game_mode@@@Z");
//};

//void main_game_internal_close_caches(void)
//{
//    mangled_ppc("?main_game_internal_close_caches@@YAXXZ");
//};

//void cache_file_tag_resources_dispose_from_old_map(void)
//{
//    mangled_ppc("?cache_file_tag_resources_dispose_from_old_map@@YAXXZ");
//};

//bool map_memory_configuration_is_main_menu(enum e_map_memory_configuration)
//{
//    mangled_ppc("?map_memory_configuration_is_main_menu@@YA_NW4e_map_memory_configuration@@@Z");
//};

//bool map_memory_configuration_is_multiplayer(enum e_map_memory_configuration)
//{
//    mangled_ppc("?map_memory_configuration_is_multiplayer@@YA_NW4e_map_memory_configuration@@@Z");
//};

//bool map_memory_configuration_is_campaign(enum e_map_memory_configuration)
//{
//    mangled_ppc("?map_memory_configuration_is_campaign@@YA_NW4e_map_memory_configuration@@@Z");
//};

//bool map_memory_configuration_is_campaign_epilogue(enum e_map_memory_configuration)
//{
//    mangled_ppc("?map_memory_configuration_is_campaign_epilogue@@YA_NW4e_map_memory_configuration@@@Z");
//};

//bool map_memory_configuration_is_saved_film(enum e_map_memory_configuration)
//{
//    mangled_ppc("?map_memory_configuration_is_saved_film@@YA_NW4e_map_memory_configuration@@@Z");
//};

//void main_game_configure_map_memory_push(enum e_map_memory_configuration)
//{
//    mangled_ppc("?main_game_configure_map_memory_push@@YAXW4e_map_memory_configuration@@@Z");
//};

//void main_game_configure_map_memory(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_configure_map_memory@@YAXPBUs_game_options@@@Z");
//};

//enum e_map_memory_configuration compute_desired_map_memory_configuration(struct s_game_options const *)
//{
//    mangled_ppc("?compute_desired_map_memory_configuration@@YA?AW4e_map_memory_configuration@@PBUs_game_options@@@Z");
//};

//void main_game_configure_map_memory_pop(void)
//{
//    mangled_ppc("?main_game_configure_map_memory_pop@@YAXXZ");
//};

//void main_game_load_panic(void)
//{
//    mangled_ppc("?main_game_load_panic@@YAXXZ");
//};

//void main_game_load_from_core_name(char const *)
//{
//    mangled_ppc("?main_game_load_from_core_name@@YAXPBD@Z");
//};

//void main_game_load_from_core(void)
//{
//    mangled_ppc("?main_game_load_from_core@@YAXXZ");
//};

//bool main_game_start(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_start@@YA_NPBUs_game_options@@@Z");
//};

//void main_game_campaign_loaded(struct s_game_options const *)
//{
//    mangled_ppc("?main_game_campaign_loaded@@YAXPBUs_game_options@@@Z");
//};

//bool main_game_load_blocking(char const *)
//{
//    mangled_ppc("?main_game_load_blocking@@YA_NPBD@Z");
//};

//void main_game_editor_world_controller_update(void)
//{
//    mangled_ppc("?main_game_editor_world_controller_update@@YAXXZ");
//};

//void main_menu_build_game_options(struct s_game_options *)
//{
//    mangled_ppc("?main_menu_build_game_options@@YAXPAUs_game_options@@@Z");
//};

//void main_menu_launch(void)
//{
//    mangled_ppc("?main_menu_launch@@YAXXZ");
//};

//void main_menu_launch_force(void)
//{
//    mangled_ppc("?main_menu_launch_force@@YAXXZ");
//};

//void data_mine_insert_single_player_game_options(char const *)
//{
//    mangled_ppc("?data_mine_insert_single_player_game_options@@YAXPBD@Z");
//};

//void game_load_variant_on_next_map_load_or_reset(char const *)
//{
//    mangled_ppc("?game_load_variant_on_next_map_load_or_reset@@YAXPBD@Z");
//};

//void game_load_variant_and_reset_map(char const *)
//{
//    mangled_ppc("?game_load_variant_and_reset_map@@YAXPBD@Z");
//};

//bool operator!=<enum e_campaign_id>(enum e_campaign_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_campaign_id@@@@YA_NABW4e_campaign_id@@ABW4e_none_sentinel@@@Z");
//};

//bool operator==<enum e_campaign_id>(enum e_campaign_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_campaign_id@@@@YA_NABW4e_campaign_id@@ABW4e_none_sentinel@@@Z");
//};

//public: s_main_game_globals::s_main_game_globals(void)
//{
//    mangled_ppc("??0s_main_game_globals@@QAA@XZ");
//};

