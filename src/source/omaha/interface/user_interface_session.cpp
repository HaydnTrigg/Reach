/* ---------- headers */

#include "omaha\interface\user_interface_session.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned long const c_verify_strings_task<2, 128>::k_max_string_count; // "?k_max_string_count@?$c_verify_strings_task@$01$0IA@@@2KB"
// public: static unsigned long const c_verify_strings_task<2, 128>::k_max_string_length; // "?k_max_string_length@?$c_verify_strings_task@$01$0IA@@@2KB"
// public: static long const s_static_array<class c_static_wchar_string<128>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$0IA@@@$01@@2JB"
// char const **k_user_interface_session_leave_type_strings; // "?k_user_interface_session_leave_type_strings@@3PAPBDA"
// char const **k_user_interface_session_leave_reason_strings; // "?k_user_interface_session_leave_reason_strings@@3PAPBDA"
// struct s_user_interface_session_globals g_ui_session_globals; // "?g_ui_session_globals@@3Us_user_interface_session_globals@@A"

// void user_interface_session_initialize(void);
// void user_interface_session_dispose(void);
// void user_interface_session_memory_initialize(enum e_map_memory_configuration);
// void user_interface_session_memory_dispose(void);
// void user_interface_session_update(void);
// bool user_interface_session_is_verifying_strings(void);
// bool user_interface_create_new_squad(enum e_network_session_class);
// bool user_interface_squad_get_session_id(struct s_transport_secure_identifier *);
// void user_interface_leave_game(void);
// bool user_interface_available_squad_is_local_box(long);
// void user_interface_leave_sessions(enum e_user_interface_session_leave_type, enum e_user_interface_session_leave_reason);
// bool user_interface_squad_exists(void);
// bool user_interface_squad_exists_or_is_leaving(void);
// bool user_interface_squad_fully_established(void);
// bool user_interface_group_exists(void);
// bool user_interface_interactive_session_exists(void);
// long user_interface_interactive_session_get_machine_count(void);
// bool user_interface_target_squad_exists(void);
// bool user_interface_squad_is_offline(void);
// bool user_interface_squad_local_peer_is_leader(void);
// bool user_interface_squad_local_peer_is_host(void);
// enum e_network_join_refuse_reason user_interface_squad_is_joinable(void);
// bool user_interface_remote_squad_is_joinable(struct s_network_session_status_data const *);
// bool user_interface_remote_squad_contains_local_peer(struct s_network_session_status_data const *);
// bool user_interface_squad_is_booting_allowed(void);
// bool user_interface_squad_is_countdown_delayed_for_precaching(void);
// long user_interface_squad_get_open_player_slot_count(void);
// enum e_network_session_class user_interface_squad_get_session_class(void);
// enum e_squad_join_permission user_interface_squad_get_join_permission(void);
// enum e_network_game_start_mode user_interface_squad_get_start_mode(void);
// bool user_interface_network_player_is_in_squad(struct s_player_identifier const *);
// long user_interface_squad_get_countdown_timer(void);
// bool user_interface_squad_get_countdown_delaying_player(struct s_user_interface_session_player_index *);
// long user_interface_squad_get_percent_loaded(void);
// bool user_interface_squad_get_host_player(struct s_user_interface_session_player_index *);
// long user_interface_squad_get_maximum_player_count(void);
// long user_interface_squad_get_best_host_estimated_maximum_player_count(void);
// bool user_interface_squad_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *);
// unsigned __int64 user_interface_squad_player_get_player_xuid(struct s_player_identifier const *);
// bool user_interface_squad_set_maximum_player_count(long);
// long user_interface_squad_get_player_count(void);
// long user_interface_squad_get_machine_count(void);
// long user_interface_squad_get_local_player_count(void);
// bool user_interface_squad_get_leader_player_index(struct s_user_interface_session_player_index *);
// bool user_interface_squad_get_player_at_local_controller(enum e_controller_index, struct s_user_interface_session_player_index *);
// bool user_interface_interactive_session_get_player_at_local_controller(enum e_controller_index, struct s_user_interface_session_player_index *);
// enum e_controller_index user_interface_squad_get_controller_index(struct s_user_interface_session_player_index const *);
// enum e_controller_index user_interface_interactive_session_get_controller_index(struct s_user_interface_session_player_index const *);
// bool user_interface_squad_is_local_player(struct s_user_interface_session_player_index const *);
// bool user_interface_group_is_local_player(struct s_user_interface_session_player_index const *);
// bool user_interface_interactive_session_is_local_player(struct s_user_interface_session_player_index const *);
// unsigned __int64 user_interface_interactive_session_get_player_party_nonce(struct s_user_interface_session_player_index const *);
// bool user_interface_group_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *);
// bool user_interface_squad_is_player_valid(struct s_user_interface_session_player_index const *);
// bool user_interface_group_is_player_valid(struct s_user_interface_session_player_index const *);
// bool user_interface_interactive_session_is_player_valid(struct s_user_interface_session_player_index const *);
// struct s_player_identifier const * user_interface_squad_get_player_identifier(struct s_user_interface_session_player_index const *);
// unsigned __int64 user_interface_squad_get_player_xuid(struct s_user_interface_session_player_index const *);
// unsigned __int64 user_interface_squad_get_usable_player_xuid(struct s_user_interface_session_player_index const *);
// public: unsigned __int64 c_network_session_membership::get_usable_player_xuid(long) const;
// struct s_player_identifier const * user_interface_interactive_session_get_player_identifier(struct s_user_interface_session_player_index const *);
// unsigned __int64 user_interface_interactive_session_get_player_xuid(struct s_user_interface_session_player_index const *);
// unsigned __int64 user_interface_interactive_session_get_usable_player_xuid(struct s_user_interface_session_player_index const *);
// long user_interface_interactive_session_get_machine_index(struct s_user_interface_session_player_index const *);
// bool user_interface_interactive_session_get_leader_player_index(struct s_user_interface_session_player_index *);
// long user_interface_interactive_session_get_player_join_sequence_number(struct s_user_interface_session_player_index const *);
// struct s_player_configuration const * user_interface_squad_get_player_data(struct s_user_interface_session_player_index const *);
// struct s_player_configuration const * user_interface_interactive_session_get_player_data(struct s_user_interface_session_player_index const *);
// long user_interface_squad_get_machine_index(struct s_user_interface_session_player_index const *);
// long user_interface_squad_get_player_join_sequence_number(struct s_user_interface_session_player_index const *);
// enum e_gui_game_mode user_interface_squad_get_ui_game_mode(void);
// bool user_interface_squad_in_matchmaking(void);
// class c_map_variant const * user_interface_squad_get_map_variant(void);
// class c_game_variant const * user_interface_squad_get_game_variant(void);
// bool user_interface_squad_game_variant_change_request_in_flight(void);
// bool user_interface_squad_game_variant_incoming(void);
// struct s_saved_film_description const * user_interface_squad_get_film(void);
// enum e_campaign_difficulty_level user_interface_squad_get_campaign_difficulty(void);
// class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> user_interface_squad_get_active_skulls(void);
// enum e_campaign_metagame_scoring user_interface_squad_get_campaign_metagame_scoring(void);
// short user_interface_squad_get_campaign_insertion_point(void);
// long user_interface_group_get_player_count(void);
// long user_interface_interactive_session_get_player_count(void);
// void user_interface_squad_set_start_mode(enum e_network_game_start_mode);
// bool user_interface_squad_delegate_leadership(struct s_user_interface_session_player_index const *);
// bool user_interface_squad_end_game(void);
// bool user_interface_squad_boot_player(struct s_user_interface_session_player_index const *);
// bool user_interface_is_joining_allowed(void);
// enum e_session_game_mode user_interface_get_session_game_mode(void);
// enum e_session_game_start_status user_interface_squad_get_game_start_status(enum e_session_game_start_warning *, unsigned long *, enum e_session_game_start_error *, unsigned long *);
// unsigned short user_interface_squad_get_precaching_progress(void);
// bool user_interface_squad_set_campaign_level(enum e_campaign_id, enum e_map_id, bool);
// bool user_interface_squad_set_firefight_map(enum e_map_id, bool);
// bool user_interface_squad_set_multiplayer_map(class c_map_variant const *, struct s_owned_content_item const &, bool, bool);
// bool user_interface_squad_set_multiplayer_map_internal(class c_map_variant const *, struct s_owned_content_item const &, bool, bool);
// bool user_interface_squad_set_simulation_protocol(enum e_network_game_simulation_protocol);
// bool user_interface_squad_set_ui_game_mode(enum e_gui_game_mode);
// class c_flags<enum e_network_session_parameter_type, unsigned __int64, 53, struct s_default_enum_string_resolver> user_interface_get_required_session_parameter_mask_for_ui_game_mode(enum e_gui_game_mode);
// bool user_interface_session_parameters_are_valid_for_ui_game_mode(class c_network_session_parameters const *);
// bool user_interface_squad_can_new_user_join(enum e_output_user_index);
// long user_interface_squad_get_current_party_size(void);
// bool user_interface_squad_get_closed(void);
// enum e_gui_network_session_advertisement_mode user_interface_squad_get_session_advertisement(void);
// long user_interface_squad_get_maximum_party_size(void);
// bool user_interface_all_local_players_are_online_enabled(void);
// bool user_interface_in_matchmaking_pre_game_lobby(void);
// bool user_interface_squad_set_closed_by_user(bool);
// void user_interface_squad_set_maximum_party_size(long);
// bool user_interface_squad_set_session_advertisement(enum e_gui_network_session_advertisement_mode);
// public: c_gui_single_game_setup_storage::~c_gui_single_game_setup_storage(void);
// public: enum e_gui_game_mode c_gui_single_game_setup_storage::get_game_mode(void) const;
// public: void c_gui_pregame_setup_manager::restore_game_setup(struct c_gui_single_game_setup_storage const *);
// void user_interface_posse_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *);
// long user_interface_posse_get_machine_index(struct s_user_interface_session_player_index const *);
// bool user_interface_posse_is_player_valid(struct s_user_interface_session_player_index const *);
// long user_interface_posse_get_player_join_sequence_number(struct s_user_interface_session_player_index const *);
// struct s_player_configuration const * user_interface_posse_get_player_data(struct s_user_interface_session_player_index const *);
// bool user_interface_posse_get_leader_player_index(struct s_user_interface_session_player_index *);
// long user_interface_posse_get_player_count(void);
// bool user_interface_squad_set_game_variant(class c_game_variant const *, struct s_owned_content_item const &, bool, bool);
// bool user_interface_squad_set_game_variant_internal(class c_game_variant const *, struct s_owned_content_item const &, bool, bool);
// bool user_interface_squad_set_film(struct s_saved_film_description const *);
// bool user_interface_squad_set_film_internal(struct s_saved_film_description const *, bool);
// void saved_film_description_set_display_name(struct s_saved_film_description *, wchar_t const *);
// bool user_interface_squad_set_complete_film(struct s_saved_film_description const *, struct s_game_options const *);
// bool user_interface_squad_set_campaign_difficulty(enum e_campaign_difficulty_level, bool);
// bool user_interface_squad_set_active_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool);
// bool user_interface_squad_set_campaign_metagame_scoring(enum e_campaign_metagame_scoring, bool);
// bool user_interface_squad_set_campaign_insertion_point(short);
// bool user_interface_squad_start_countdown_timer(enum e_controller_index, long, long);
// bool user_interface_squad_stop_countdown_timer(enum e_controller_index, long);
// bool user_interface_squad_get_map(enum e_campaign_id *, enum e_map_id *);
// bool user_interface_squad_in_or_after_countdown(void);
// bool user_interface_interactive_session_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *);
// void user_interface_interactive_session_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *);
// unsigned __int64 user_interface_interactive_session_player_get_player_xuid(struct s_player_identifier const *);
// unsigned __int64 user_interface_interactive_session_player_get_usable_player_xuid(struct s_player_identifier const *);
// bool user_interface_interactive_session_is_group(void);
// bool user_interface_interactive_session_is_posse(void);
// bool user_interface_interactive_session_is_squad(void);
// long user_interface_interactive_session_get_player_netdebug_filled_bar_count(struct s_user_interface_session_player_index const *);
// float user_interface_interactive_session_get_player_netdebug_rating(struct s_user_interface_session_player_index const *);
// bool user_interface_session_set_name(wchar_t const *, wchar_t const *);
// bool user_interface_game_ending_writing_stats(void);
// long user_interface_local_player_count(void);
// void user_interface_squad_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_squad_get_first_valid_player(struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_session_get_first_valid_player(class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_squad_get_next_valid_player(struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_session_get_next_valid_player(class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *);
// bool user_interface_get_session_precaching_progress(unsigned short *, enum e_session_game_start_status *, enum e_session_game_start_error *);
// void user_interface_group_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_group_get_first_valid_player(struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_group_get_next_valid_player(struct s_user_interface_session_player_index *);
// bool user_interface_group_set_matchmaking_vote(long, struct s_user_interface_matchmaking_vote const *);
// void user_interface_interactive_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_interactive_get_first_valid_player(struct s_user_interface_session_player_index *);
// struct s_user_interface_session_player_index * user_interface_interactive_get_next_valid_player(struct s_user_interface_session_player_index *);
// bool user_interface_interactive_session_get_campaign_quit(void);
// bool user_interface_interactive_session_request_campaign_quit(enum e_network_session_request_campaign_quit_reason);
// class c_game_variant const * user_interface_interactive_session_get_game_variant(void);
// bool user_interface_interactive_session_get_party_player_indices(struct s_user_interface_session_player_index const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *const, long *);
// bool user_interface_session_get_player_index(struct s_player_identifier const *, class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *);
// void user_interface_session_string_verify_update(void);
// public: class c_game_variant const & s_gui_game_setup_storage::c_game_variant_settings::get_variant(void) const;
// bool user_interface_session_build_session_player_index(class c_network_session const *, enum e_life_cycle_session_type, long, struct s_user_interface_session_player_index *);
// bool user_interface_session_player_index_valid_for_squad_session(struct s_user_interface_session_player_index const *);
// bool user_interface_session_player_index_valid_for_posse_session(struct s_user_interface_session_player_index const *);
// bool user_interface_session_player_index_valid_for_group_session(struct s_user_interface_session_player_index const *);
// bool user_interface_session_player_index_valid_for_interactive_session(struct s_user_interface_session_player_index const *);
// public: wchar_t const * c_verify_strings_task<2, 128>::get_string(long) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::set(unsigned long, bool);
// public: void c_verify_strings_task<2, 128>::initialize(enum e_language, wchar_t const **, long);
// protected: void c_verify_strings_task_base::initialize(enum e_language, unsigned long);
// public: bool c_verify_strings_task<2, 128>::string_passed_verification(long) const;
// public: bool c_static_wchar_string<128>::is_equal(wchar_t const *) const;
// public: class c_static_wchar_string<128> const & s_static_array<class c_static_wchar_string<128>, 2>::operator[]<long>(long) const;
// public: class c_static_wchar_string<128> & s_static_array<class c_static_wchar_string<128>, 2>::operator[]<long>(long);
// public: bool c_static_wchar_string<128>::is_equal(wchar_t const *, bool) const;
// public: static bool s_static_array<class c_static_wchar_string<128>, 2>::valid<long>(long);
// public: s_user_interface_session_globals::s_user_interface_session_globals(void);
// public: s_string_purgatory::s_string_purgatory(void);
// public: s_string_purgatory::s_verification_data::s_verification_data(void);
// public: c_verify_strings_task<2, 128>::c_verify_strings_task<2, 128>(void);
// public: virtual void c_verify_strings_task<2, 128>::reset(void);
// public: virtual unsigned long c_verify_strings_task<2, 128>::start(void *);
// merged_8496DE20;
// public: virtual c_verify_strings_task<2, 128>::~c_verify_strings_task<2, 128>(void);
// public: s_static_array<class c_static_wchar_string<128>, 2>::s_static_array<class c_static_wchar_string<128>, 2>(void);
// public: s_user_interface_session_globals::~s_user_interface_session_globals(void);
// public: s_string_purgatory::~s_string_purgatory(void);
// public: s_string_purgatory::s_verification_data::~s_verification_data(void);
// void g_ui_session_globals::`dynamic atexit destructor'(void);

//void user_interface_session_initialize(void)
//{
//    mangled_ppc("?user_interface_session_initialize@@YAXXZ");
//};

//void user_interface_session_dispose(void)
//{
//    mangled_ppc("?user_interface_session_dispose@@YAXXZ");
//};

//void user_interface_session_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?user_interface_session_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void user_interface_session_memory_dispose(void)
//{
//    mangled_ppc("?user_interface_session_memory_dispose@@YAXXZ");
//};

//void user_interface_session_update(void)
//{
//    mangled_ppc("?user_interface_session_update@@YAXXZ");
//};

//bool user_interface_session_is_verifying_strings(void)
//{
//    mangled_ppc("?user_interface_session_is_verifying_strings@@YA_NXZ");
//};

//bool user_interface_create_new_squad(enum e_network_session_class)
//{
//    mangled_ppc("?user_interface_create_new_squad@@YA_NW4e_network_session_class@@@Z");
//};

//bool user_interface_squad_get_session_id(struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?user_interface_squad_get_session_id@@YA_NPAUs_transport_secure_identifier@@@Z");
//};

//void user_interface_leave_game(void)
//{
//    mangled_ppc("?user_interface_leave_game@@YAXXZ");
//};

//bool user_interface_available_squad_is_local_box(long)
//{
//    mangled_ppc("?user_interface_available_squad_is_local_box@@YA_NJ@Z");
//};

//void user_interface_leave_sessions(enum e_user_interface_session_leave_type, enum e_user_interface_session_leave_reason)
//{
//    mangled_ppc("?user_interface_leave_sessions@@YAXW4e_user_interface_session_leave_type@@W4e_user_interface_session_leave_reason@@@Z");
//};

//bool user_interface_squad_exists(void)
//{
//    mangled_ppc("?user_interface_squad_exists@@YA_NXZ");
//};

//bool user_interface_squad_exists_or_is_leaving(void)
//{
//    mangled_ppc("?user_interface_squad_exists_or_is_leaving@@YA_NXZ");
//};

//bool user_interface_squad_fully_established(void)
//{
//    mangled_ppc("?user_interface_squad_fully_established@@YA_NXZ");
//};

//bool user_interface_group_exists(void)
//{
//    mangled_ppc("?user_interface_group_exists@@YA_NXZ");
//};

//bool user_interface_interactive_session_exists(void)
//{
//    mangled_ppc("?user_interface_interactive_session_exists@@YA_NXZ");
//};

//long user_interface_interactive_session_get_machine_count(void)
//{
//    mangled_ppc("?user_interface_interactive_session_get_machine_count@@YAJXZ");
//};

//bool user_interface_target_squad_exists(void)
//{
//    mangled_ppc("?user_interface_target_squad_exists@@YA_NXZ");
//};

//bool user_interface_squad_is_offline(void)
//{
//    mangled_ppc("?user_interface_squad_is_offline@@YA_NXZ");
//};

//bool user_interface_squad_local_peer_is_leader(void)
//{
//    mangled_ppc("?user_interface_squad_local_peer_is_leader@@YA_NXZ");
//};

//bool user_interface_squad_local_peer_is_host(void)
//{
//    mangled_ppc("?user_interface_squad_local_peer_is_host@@YA_NXZ");
//};

//enum e_network_join_refuse_reason user_interface_squad_is_joinable(void)
//{
//    mangled_ppc("?user_interface_squad_is_joinable@@YA?AW4e_network_join_refuse_reason@@XZ");
//};

//bool user_interface_remote_squad_is_joinable(struct s_network_session_status_data const *)
//{
//    mangled_ppc("?user_interface_remote_squad_is_joinable@@YA_NPBUs_network_session_status_data@@@Z");
//};

//bool user_interface_remote_squad_contains_local_peer(struct s_network_session_status_data const *)
//{
//    mangled_ppc("?user_interface_remote_squad_contains_local_peer@@YA_NPBUs_network_session_status_data@@@Z");
//};

//bool user_interface_squad_is_booting_allowed(void)
//{
//    mangled_ppc("?user_interface_squad_is_booting_allowed@@YA_NXZ");
//};

//bool user_interface_squad_is_countdown_delayed_for_precaching(void)
//{
//    mangled_ppc("?user_interface_squad_is_countdown_delayed_for_precaching@@YA_NXZ");
//};

//long user_interface_squad_get_open_player_slot_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_open_player_slot_count@@YAJXZ");
//};

//enum e_network_session_class user_interface_squad_get_session_class(void)
//{
//    mangled_ppc("?user_interface_squad_get_session_class@@YA?AW4e_network_session_class@@XZ");
//};

//enum e_squad_join_permission user_interface_squad_get_join_permission(void)
//{
//    mangled_ppc("?user_interface_squad_get_join_permission@@YA?AW4e_squad_join_permission@@XZ");
//};

//enum e_network_game_start_mode user_interface_squad_get_start_mode(void)
//{
//    mangled_ppc("?user_interface_squad_get_start_mode@@YA?AW4e_network_game_start_mode@@XZ");
//};

//bool user_interface_network_player_is_in_squad(struct s_player_identifier const *)
//{
//    mangled_ppc("?user_interface_network_player_is_in_squad@@YA_NPBUs_player_identifier@@@Z");
//};

//long user_interface_squad_get_countdown_timer(void)
//{
//    mangled_ppc("?user_interface_squad_get_countdown_timer@@YAJXZ");
//};

//bool user_interface_squad_get_countdown_delaying_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_countdown_delaying_player@@YA_NPAUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_squad_get_percent_loaded(void)
//{
//    mangled_ppc("?user_interface_squad_get_percent_loaded@@YAJXZ");
//};

//bool user_interface_squad_get_host_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_host_player@@YA_NPAUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_squad_get_maximum_player_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_maximum_player_count@@YAJXZ");
//};

//long user_interface_squad_get_best_host_estimated_maximum_player_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_best_host_estimated_maximum_player_count@@YAJXZ");
//};

//bool user_interface_squad_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_player_index@@YA_NPBUs_player_identifier@@PAUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_squad_player_get_player_xuid(struct s_player_identifier const *)
//{
//    mangled_ppc("?user_interface_squad_player_get_player_xuid@@YA_KPBUs_player_identifier@@@Z");
//};

//bool user_interface_squad_set_maximum_player_count(long)
//{
//    mangled_ppc("?user_interface_squad_set_maximum_player_count@@YA_NJ@Z");
//};

//long user_interface_squad_get_player_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_player_count@@YAJXZ");
//};

//long user_interface_squad_get_machine_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_machine_count@@YAJXZ");
//};

//long user_interface_squad_get_local_player_count(void)
//{
//    mangled_ppc("?user_interface_squad_get_local_player_count@@YAJXZ");
//};

//bool user_interface_squad_get_leader_player_index(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_leader_player_index@@YA_NPAUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_squad_get_player_at_local_controller(enum e_controller_index, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_player_at_local_controller@@YA_NW4e_controller_index@@PAUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_interactive_session_get_player_at_local_controller(enum e_controller_index, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_at_local_controller@@YA_NW4e_controller_index@@PAUs_user_interface_session_player_index@@@Z");
//};

//enum e_controller_index user_interface_squad_get_controller_index(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_controller_index@@YA?AW4e_controller_index@@PBUs_user_interface_session_player_index@@@Z");
//};

//enum e_controller_index user_interface_interactive_session_get_controller_index(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_controller_index@@YA?AW4e_controller_index@@PBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_squad_is_local_player(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_is_local_player@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_group_is_local_player(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_group_is_local_player@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_interactive_session_is_local_player(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_is_local_player@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_interactive_session_get_player_party_nonce(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_party_nonce@@YA_KPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_group_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_group_get_player_index@@YA_NPBUs_player_identifier@@PAUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_squad_is_player_valid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_is_player_valid@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_group_is_player_valid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_group_is_player_valid@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_interactive_session_is_player_valid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_is_player_valid@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//struct s_player_identifier const * user_interface_squad_get_player_identifier(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_player_identifier@@YAPBUs_player_identifier@@PBUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_squad_get_player_xuid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_player_xuid@@YA_KPBUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_squad_get_usable_player_xuid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_usable_player_xuid@@YA_KPBUs_user_interface_session_player_index@@@Z");
//};

//public: unsigned __int64 c_network_session_membership::get_usable_player_xuid(long) const
//{
//    mangled_ppc("?get_usable_player_xuid@c_network_session_membership@@QBA_KJ@Z");
//};

//struct s_player_identifier const * user_interface_interactive_session_get_player_identifier(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_identifier@@YAPBUs_player_identifier@@PBUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_interactive_session_get_player_xuid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_xuid@@YA_KPBUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_interactive_session_get_usable_player_xuid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_usable_player_xuid@@YA_KPBUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_interactive_session_get_machine_index(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_machine_index@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_interactive_session_get_leader_player_index(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_leader_player_index@@YA_NPAUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_interactive_session_get_player_join_sequence_number(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_join_sequence_number@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//struct s_player_configuration const * user_interface_squad_get_player_data(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_player_data@@YAPBUs_player_configuration@@PBUs_user_interface_session_player_index@@@Z");
//};

//struct s_player_configuration const * user_interface_interactive_session_get_player_data(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_data@@YAPBUs_player_configuration@@PBUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_squad_get_machine_index(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_machine_index@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_squad_get_player_join_sequence_number(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_get_player_join_sequence_number@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//enum e_gui_game_mode user_interface_squad_get_ui_game_mode(void)
//{
//    mangled_ppc("?user_interface_squad_get_ui_game_mode@@YA?AW4e_gui_game_mode@@XZ");
//};

//bool user_interface_squad_in_matchmaking(void)
//{
//    mangled_ppc("?user_interface_squad_in_matchmaking@@YA_NXZ");
//};

//class c_map_variant const * user_interface_squad_get_map_variant(void)
//{
//    mangled_ppc("?user_interface_squad_get_map_variant@@YAPBVc_map_variant@@XZ");
//};

//class c_game_variant const * user_interface_squad_get_game_variant(void)
//{
//    mangled_ppc("?user_interface_squad_get_game_variant@@YAPBVc_game_variant@@XZ");
//};

//bool user_interface_squad_game_variant_change_request_in_flight(void)
//{
//    mangled_ppc("?user_interface_squad_game_variant_change_request_in_flight@@YA_NXZ");
//};

//bool user_interface_squad_game_variant_incoming(void)
//{
//    mangled_ppc("?user_interface_squad_game_variant_incoming@@YA_NXZ");
//};

//struct s_saved_film_description const * user_interface_squad_get_film(void)
//{
//    mangled_ppc("?user_interface_squad_get_film@@YAPBUs_saved_film_description@@XZ");
//};

//enum e_campaign_difficulty_level user_interface_squad_get_campaign_difficulty(void)
//{
//    mangled_ppc("?user_interface_squad_get_campaign_difficulty@@YA?AW4e_campaign_difficulty_level@@XZ");
//};

//class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> user_interface_squad_get_active_skulls(void)
//{
//    mangled_ppc("?user_interface_squad_get_active_skulls@@YA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//enum e_campaign_metagame_scoring user_interface_squad_get_campaign_metagame_scoring(void)
//{
//    mangled_ppc("?user_interface_squad_get_campaign_metagame_scoring@@YA?AW4e_campaign_metagame_scoring@@XZ");
//};

//short user_interface_squad_get_campaign_insertion_point(void)
//{
//    mangled_ppc("?user_interface_squad_get_campaign_insertion_point@@YAFXZ");
//};

//long user_interface_group_get_player_count(void)
//{
//    mangled_ppc("?user_interface_group_get_player_count@@YAJXZ");
//};

//long user_interface_interactive_session_get_player_count(void)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_count@@YAJXZ");
//};

//void user_interface_squad_set_start_mode(enum e_network_game_start_mode)
//{
//    mangled_ppc("?user_interface_squad_set_start_mode@@YAXW4e_network_game_start_mode@@@Z");
//};

//bool user_interface_squad_delegate_leadership(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_delegate_leadership@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_squad_end_game(void)
//{
//    mangled_ppc("?user_interface_squad_end_game@@YA_NXZ");
//};

//bool user_interface_squad_boot_player(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_squad_boot_player@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_is_joining_allowed(void)
//{
//    mangled_ppc("?user_interface_is_joining_allowed@@YA_NXZ");
//};

//enum e_session_game_mode user_interface_get_session_game_mode(void)
//{
//    mangled_ppc("?user_interface_get_session_game_mode@@YA?AW4e_session_game_mode@@XZ");
//};

//enum e_session_game_start_status user_interface_squad_get_game_start_status(enum e_session_game_start_warning *, unsigned long *, enum e_session_game_start_error *, unsigned long *)
//{
//    mangled_ppc("?user_interface_squad_get_game_start_status@@YA?AW4e_session_game_start_status@@PAW4e_session_game_start_warning@@PAKPAW4e_session_game_start_error@@1@Z");
//};

//unsigned short user_interface_squad_get_precaching_progress(void)
//{
//    mangled_ppc("?user_interface_squad_get_precaching_progress@@YAGXZ");
//};

//bool user_interface_squad_set_campaign_level(enum e_campaign_id, enum e_map_id, bool)
//{
//    mangled_ppc("?user_interface_squad_set_campaign_level@@YA_NW4e_campaign_id@@W4e_map_id@@_N@Z");
//};

//bool user_interface_squad_set_firefight_map(enum e_map_id, bool)
//{
//    mangled_ppc("?user_interface_squad_set_firefight_map@@YA_NW4e_map_id@@_N@Z");
//};

//bool user_interface_squad_set_multiplayer_map(class c_map_variant const *, struct s_owned_content_item const &, bool, bool)
//{
//    mangled_ppc("?user_interface_squad_set_multiplayer_map@@YA_NPBVc_map_variant@@ABUs_owned_content_item@@_N2@Z");
//};

//bool user_interface_squad_set_multiplayer_map_internal(class c_map_variant const *, struct s_owned_content_item const &, bool, bool)
//{
//    mangled_ppc("?user_interface_squad_set_multiplayer_map_internal@@YA_NPBVc_map_variant@@ABUs_owned_content_item@@_N2@Z");
//};

//bool user_interface_squad_set_simulation_protocol(enum e_network_game_simulation_protocol)
//{
//    mangled_ppc("?user_interface_squad_set_simulation_protocol@@YA_NW4e_network_game_simulation_protocol@@@Z");
//};

//bool user_interface_squad_set_ui_game_mode(enum e_gui_game_mode)
//{
//    mangled_ppc("?user_interface_squad_set_ui_game_mode@@YA_NW4e_gui_game_mode@@@Z");
//};

//class c_flags<enum e_network_session_parameter_type, unsigned __int64, 53, struct s_default_enum_string_resolver> user_interface_get_required_session_parameter_mask_for_ui_game_mode(enum e_gui_game_mode)
//{
//    mangled_ppc("?user_interface_get_required_session_parameter_mask_for_ui_game_mode@@YA?AV?$c_flags@W4e_network_session_parameter_type@@_K$0DF@Us_default_enum_string_resolver@@@@W4e_gui_game_mode@@@Z");
//};

//bool user_interface_session_parameters_are_valid_for_ui_game_mode(class c_network_session_parameters const *)
//{
//    mangled_ppc("?user_interface_session_parameters_are_valid_for_ui_game_mode@@YA_NPBVc_network_session_parameters@@@Z");
//};

//bool user_interface_squad_can_new_user_join(enum e_output_user_index)
//{
//    mangled_ppc("?user_interface_squad_can_new_user_join@@YA_NW4e_output_user_index@@@Z");
//};

//long user_interface_squad_get_current_party_size(void)
//{
//    mangled_ppc("?user_interface_squad_get_current_party_size@@YAJXZ");
//};

//bool user_interface_squad_get_closed(void)
//{
//    mangled_ppc("?user_interface_squad_get_closed@@YA_NXZ");
//};

//enum e_gui_network_session_advertisement_mode user_interface_squad_get_session_advertisement(void)
//{
//    mangled_ppc("?user_interface_squad_get_session_advertisement@@YA?AW4e_gui_network_session_advertisement_mode@@XZ");
//};

//long user_interface_squad_get_maximum_party_size(void)
//{
//    mangled_ppc("?user_interface_squad_get_maximum_party_size@@YAJXZ");
//};

//bool user_interface_all_local_players_are_online_enabled(void)
//{
//    mangled_ppc("?user_interface_all_local_players_are_online_enabled@@YA_NXZ");
//};

//bool user_interface_in_matchmaking_pre_game_lobby(void)
//{
//    mangled_ppc("?user_interface_in_matchmaking_pre_game_lobby@@YA_NXZ");
//};

//bool user_interface_squad_set_closed_by_user(bool)
//{
//    mangled_ppc("?user_interface_squad_set_closed_by_user@@YA_N_N@Z");
//};

//void user_interface_squad_set_maximum_party_size(long)
//{
//    mangled_ppc("?user_interface_squad_set_maximum_party_size@@YAXJ@Z");
//};

//bool user_interface_squad_set_session_advertisement(enum e_gui_network_session_advertisement_mode)
//{
//    mangled_ppc("?user_interface_squad_set_session_advertisement@@YA_NW4e_gui_network_session_advertisement_mode@@@Z");
//};

//public: c_gui_single_game_setup_storage::~c_gui_single_game_setup_storage(void)
//{
//    mangled_ppc("??1c_gui_single_game_setup_storage@@QAA@XZ");
//};

//public: enum e_gui_game_mode c_gui_single_game_setup_storage::get_game_mode(void) const
//{
//    mangled_ppc("?get_game_mode@c_gui_single_game_setup_storage@@QBA?AW4e_gui_game_mode@@XZ");
//};

//public: void c_gui_pregame_setup_manager::restore_game_setup(struct c_gui_single_game_setup_storage const *)
//{
//    mangled_ppc("?restore_game_setup@c_gui_pregame_setup_manager@@QAAXPBUc_gui_single_game_setup_storage@@@Z");
//};

//void user_interface_posse_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_posse_build_session_player_index_from_absolute@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_posse_get_machine_index(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_posse_get_machine_index@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_posse_is_player_valid(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_posse_is_player_valid@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_posse_get_player_join_sequence_number(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_posse_get_player_join_sequence_number@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//struct s_player_configuration const * user_interface_posse_get_player_data(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_posse_get_player_data@@YAPBUs_player_configuration@@PBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_posse_get_leader_player_index(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_posse_get_leader_player_index@@YA_NPAUs_user_interface_session_player_index@@@Z");
//};

//long user_interface_posse_get_player_count(void)
//{
//    mangled_ppc("?user_interface_posse_get_player_count@@YAJXZ");
//};

//bool user_interface_squad_set_game_variant(class c_game_variant const *, struct s_owned_content_item const &, bool, bool)
//{
//    mangled_ppc("?user_interface_squad_set_game_variant@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@_N2@Z");
//};

//bool user_interface_squad_set_game_variant_internal(class c_game_variant const *, struct s_owned_content_item const &, bool, bool)
//{
//    mangled_ppc("?user_interface_squad_set_game_variant_internal@@YA_NPBVc_game_variant@@ABUs_owned_content_item@@_N2@Z");
//};

//bool user_interface_squad_set_film(struct s_saved_film_description const *)
//{
//    mangled_ppc("?user_interface_squad_set_film@@YA_NPBUs_saved_film_description@@@Z");
//};

//bool user_interface_squad_set_film_internal(struct s_saved_film_description const *, bool)
//{
//    mangled_ppc("?user_interface_squad_set_film_internal@@YA_NPBUs_saved_film_description@@_N@Z");
//};

//void saved_film_description_set_display_name(struct s_saved_film_description *, wchar_t const *)
//{
//    mangled_ppc("?saved_film_description_set_display_name@@YAXPAUs_saved_film_description@@PB_W@Z");
//};

//bool user_interface_squad_set_complete_film(struct s_saved_film_description const *, struct s_game_options const *)
//{
//    mangled_ppc("?user_interface_squad_set_complete_film@@YA_NPBUs_saved_film_description@@PBUs_game_options@@@Z");
//};

//bool user_interface_squad_set_campaign_difficulty(enum e_campaign_difficulty_level, bool)
//{
//    mangled_ppc("?user_interface_squad_set_campaign_difficulty@@YA_NW4e_campaign_difficulty_level@@_N@Z");
//};

//bool user_interface_squad_set_active_skulls(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("?user_interface_squad_set_active_skulls@@YA_NV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@_N@Z");
//};

//bool user_interface_squad_set_campaign_metagame_scoring(enum e_campaign_metagame_scoring, bool)
//{
//    mangled_ppc("?user_interface_squad_set_campaign_metagame_scoring@@YA_NW4e_campaign_metagame_scoring@@_N@Z");
//};

//bool user_interface_squad_set_campaign_insertion_point(short)
//{
//    mangled_ppc("?user_interface_squad_set_campaign_insertion_point@@YA_NF@Z");
//};

//bool user_interface_squad_start_countdown_timer(enum e_controller_index, long, long)
//{
//    mangled_ppc("?user_interface_squad_start_countdown_timer@@YA_NW4e_controller_index@@JJ@Z");
//};

//bool user_interface_squad_stop_countdown_timer(enum e_controller_index, long)
//{
//    mangled_ppc("?user_interface_squad_stop_countdown_timer@@YA_NW4e_controller_index@@J@Z");
//};

//bool user_interface_squad_get_map(enum e_campaign_id *, enum e_map_id *)
//{
//    mangled_ppc("?user_interface_squad_get_map@@YA_NPAW4e_campaign_id@@PAW4e_map_id@@@Z");
//};

//bool user_interface_squad_in_or_after_countdown(void)
//{
//    mangled_ppc("?user_interface_squad_in_or_after_countdown@@YA_NXZ");
//};

//bool user_interface_interactive_session_get_player_index(struct s_player_identifier const *, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_index@@YA_NPBUs_player_identifier@@PAUs_user_interface_session_player_index@@@Z");
//};

//void user_interface_interactive_session_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_session_build_session_player_index_from_absolute@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//unsigned __int64 user_interface_interactive_session_player_get_player_xuid(struct s_player_identifier const *)
//{
//    mangled_ppc("?user_interface_interactive_session_player_get_player_xuid@@YA_KPBUs_player_identifier@@@Z");
//};

//unsigned __int64 user_interface_interactive_session_player_get_usable_player_xuid(struct s_player_identifier const *)
//{
//    mangled_ppc("?user_interface_interactive_session_player_get_usable_player_xuid@@YA_KPBUs_player_identifier@@@Z");
//};

//bool user_interface_interactive_session_is_group(void)
//{
//    mangled_ppc("?user_interface_interactive_session_is_group@@YA_NXZ");
//};

//bool user_interface_interactive_session_is_posse(void)
//{
//    mangled_ppc("?user_interface_interactive_session_is_posse@@YA_NXZ");
//};

//bool user_interface_interactive_session_is_squad(void)
//{
//    mangled_ppc("?user_interface_interactive_session_is_squad@@YA_NXZ");
//};

//long user_interface_interactive_session_get_player_netdebug_filled_bar_count(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_netdebug_filled_bar_count@@YAJPBUs_user_interface_session_player_index@@@Z");
//};

//float user_interface_interactive_session_get_player_netdebug_rating(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_player_netdebug_rating@@YAMPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_set_name(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?user_interface_session_set_name@@YA_NPB_W0@Z");
//};

//bool user_interface_game_ending_writing_stats(void)
//{
//    mangled_ppc("?user_interface_game_ending_writing_stats@@YA_NXZ");
//};

//long user_interface_local_player_count(void)
//{
//    mangled_ppc("?user_interface_local_player_count@@YAJXZ");
//};

//void user_interface_squad_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_build_session_player_index_from_absolute@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_squad_get_first_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_first_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_session_get_first_valid_player(class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_session_get_first_valid_player@@YAPAUs_user_interface_session_player_index@@PBVc_network_session@@W4e_life_cycle_session_type@@PAU1@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_squad_get_next_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_squad_get_next_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_session_get_next_valid_player(class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_session_get_next_valid_player@@YAPAUs_user_interface_session_player_index@@PBVc_network_session@@W4e_life_cycle_session_type@@PAU1@@Z");
//};

//bool user_interface_get_session_precaching_progress(unsigned short *, enum e_session_game_start_status *, enum e_session_game_start_error *)
//{
//    mangled_ppc("?user_interface_get_session_precaching_progress@@YA_NPAGPAW4e_session_game_start_status@@PAW4e_session_game_start_error@@@Z");
//};

//void user_interface_group_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_group_build_session_player_index_from_absolute@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_group_get_first_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_group_get_first_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_group_get_next_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_group_get_next_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//bool user_interface_group_set_matchmaking_vote(long, struct s_user_interface_matchmaking_vote const *)
//{
//    mangled_ppc("?user_interface_group_set_matchmaking_vote@@YA_NJPBUs_user_interface_matchmaking_vote@@@Z");
//};

//void user_interface_interactive_build_session_player_index_from_absolute(long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_build_session_player_index_from_absolute@@YAXJPAUs_user_interface_session_player_index@@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_interactive_get_first_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_get_first_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//struct s_user_interface_session_player_index * user_interface_interactive_get_next_valid_player(struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_interactive_get_next_valid_player@@YAPAUs_user_interface_session_player_index@@PAU1@@Z");
//};

//bool user_interface_interactive_session_get_campaign_quit(void)
//{
//    mangled_ppc("?user_interface_interactive_session_get_campaign_quit@@YA_NXZ");
//};

//bool user_interface_interactive_session_request_campaign_quit(enum e_network_session_request_campaign_quit_reason)
//{
//    mangled_ppc("?user_interface_interactive_session_request_campaign_quit@@YA_NW4e_network_session_request_campaign_quit_reason@@@Z");
//};

//class c_game_variant const * user_interface_interactive_session_get_game_variant(void)
//{
//    mangled_ppc("?user_interface_interactive_session_get_game_variant@@YAPBVc_game_variant@@XZ");
//};

//bool user_interface_interactive_session_get_party_player_indices(struct s_user_interface_session_player_index const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *const, long *)
//{
//    mangled_ppc("?user_interface_interactive_session_get_party_player_indices@@YA_NPBUs_user_interface_session_player_index@@W4e_life_cycle_session_type@@QAU1@PAJ@Z");
//};

//bool user_interface_session_get_player_index(struct s_player_identifier const *, class c_network_session const *, enum e_life_cycle_session_type, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_session_get_player_index@@YA_NPBUs_player_identifier@@PBVc_network_session@@W4e_life_cycle_session_type@@PAUs_user_interface_session_player_index@@@Z");
//};

//void user_interface_session_string_verify_update(void)
//{
//    mangled_ppc("?user_interface_session_string_verify_update@@YAXXZ");
//};

//public: class c_game_variant const & s_gui_game_setup_storage::c_game_variant_settings::get_variant(void) const
//{
//    mangled_ppc("?get_variant@c_game_variant_settings@s_gui_game_setup_storage@@QBAABVc_game_variant@@XZ");
//};

//bool user_interface_session_build_session_player_index(class c_network_session const *, enum e_life_cycle_session_type, long, struct s_user_interface_session_player_index *)
//{
//    mangled_ppc("?user_interface_session_build_session_player_index@@YA_NPBVc_network_session@@W4e_life_cycle_session_type@@JPAUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_player_index_valid_for_squad_session(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_session_player_index_valid_for_squad_session@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_player_index_valid_for_posse_session(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_session_player_index_valid_for_posse_session@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_player_index_valid_for_group_session(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_session_player_index_valid_for_group_session@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//bool user_interface_session_player_index_valid_for_interactive_session(struct s_user_interface_session_player_index const *)
//{
//    mangled_ppc("?user_interface_session_player_index_valid_for_interactive_session@@YA_NPBUs_user_interface_session_player_index@@@Z");
//};

//public: wchar_t const * c_verify_strings_task<2, 128>::get_string(long) const
//{
//    mangled_ppc("?get_string@?$c_verify_strings_task@$01$0IA@@@QBAPB_WJ@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::set(unsigned long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QAAXK_N@Z");
//};

//public: void c_verify_strings_task<2, 128>::initialize(enum e_language, wchar_t const **, long)
//{
//    mangled_ppc("?initialize@?$c_verify_strings_task@$01$0IA@@@QAAXW4e_language@@PAPB_WJ@Z");
//};

//protected: void c_verify_strings_task_base::initialize(enum e_language, unsigned long)
//{
//    mangled_ppc("?initialize@c_verify_strings_task_base@@IAAXW4e_language@@K@Z");
//};

//public: bool c_verify_strings_task<2, 128>::string_passed_verification(long) const
//{
//    mangled_ppc("?string_passed_verification@?$c_verify_strings_task@$01$0IA@@@QBA_NJ@Z");
//};

//public: bool c_static_wchar_string<128>::is_equal(wchar_t const *) const
//{
//    mangled_ppc("?is_equal@?$c_static_wchar_string@$0IA@@@QBA_NPB_W@Z");
//};

//public: class c_static_wchar_string<128> const & s_static_array<class c_static_wchar_string<128>, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_wchar_string@$0IA@@@$01@@QBAABV?$c_static_wchar_string@$0IA@@@J@Z");
//};

//public: class c_static_wchar_string<128> & s_static_array<class c_static_wchar_string<128>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_wchar_string@$0IA@@@$01@@QAAAAV?$c_static_wchar_string@$0IA@@@J@Z");
//};

//public: bool c_static_wchar_string<128>::is_equal(wchar_t const *, bool) const
//{
//    mangled_ppc("?is_equal@?$c_static_wchar_string@$0IA@@@QBA_NPB_W_N@Z");
//};

//public: static bool s_static_array<class c_static_wchar_string<128>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_wchar_string@$0IA@@@$01@@SA_NJ@Z");
//};

//public: s_user_interface_session_globals::s_user_interface_session_globals(void)
//{
//    mangled_ppc("??0s_user_interface_session_globals@@QAA@XZ");
//};

//public: s_string_purgatory::s_string_purgatory(void)
//{
//    mangled_ppc("??0s_string_purgatory@@QAA@XZ");
//};

//public: s_string_purgatory::s_verification_data::s_verification_data(void)
//{
//    mangled_ppc("??0s_verification_data@s_string_purgatory@@QAA@XZ");
//};

//public: c_verify_strings_task<2, 128>::c_verify_strings_task<2, 128>(void)
//{
//    mangled_ppc("??0?$c_verify_strings_task@$01$0IA@@@QAA@XZ");
//};

//public: virtual void c_verify_strings_task<2, 128>::reset(void)
//{
//    mangled_ppc("?reset@?$c_verify_strings_task@$01$0IA@@@UAAXXZ");
//};

//public: virtual unsigned long c_verify_strings_task<2, 128>::start(void *)
//{
//    mangled_ppc("?start@?$c_verify_strings_task@$01$0IA@@@UAAKPAX@Z");
//};

//merged_8496DE20
//{
//    mangled_ppc("merged_8496DE20");
//};

//public: virtual c_verify_strings_task<2, 128>::~c_verify_strings_task<2, 128>(void)
//{
//    mangled_ppc("??1?$c_verify_strings_task@$01$0IA@@@UAA@XZ");
//};

//public: s_static_array<class c_static_wchar_string<128>, 2>::s_static_array<class c_static_wchar_string<128>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_wchar_string@$0IA@@@$01@@QAA@XZ");
//};

//public: s_user_interface_session_globals::~s_user_interface_session_globals(void)
//{
//    mangled_ppc("??1s_user_interface_session_globals@@QAA@XZ");
//};

//public: s_string_purgatory::~s_string_purgatory(void)
//{
//    mangled_ppc("??1s_string_purgatory@@QAA@XZ");
//};

//public: s_string_purgatory::s_verification_data::~s_verification_data(void)
//{
//    mangled_ppc("??1s_verification_data@s_string_purgatory@@QAA@XZ");
//};

//void g_ui_session_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ui_session_globals@@YAXXZ");
//};

