/* ---------- headers */

#include "omaha\game\player_rewards\internal\player_reward_persistence.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_waypoint_profile_unlock_flags const c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@2W4e_waypoint_profile_unlock_flags@@B"
// public: static int const c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_persistent_rewards_state_source const c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@2W4e_persistent_rewards_state_source@@B"
// public: static long const s_static_array<struct s_controller_reward_state, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_controller_reward_state@@$03@@2JB"
// public: static int const c_enum_no_init<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_lsp_download_completed_result const c_enum_no_init<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_lsp_download_completed_result@@B"
// char const **persistent_reward_state_source_strings; // "?persistent_reward_state_source_strings@@3PAPBDA"
// bool g_player_reward_disable_cookie_daily_caps; // "?g_player_reward_disable_cookie_daily_caps@@3_NA"
// bool g_player_reward_disable_lsp_syncs; // "?g_player_reward_disable_lsp_syncs@@3_NA"
// bool g_rewards_disable_automatic_purchase_sanitization; // "?g_rewards_disable_automatic_purchase_sanitization@@3_NA"
// struct s_reward_persistence_globals g_reward_persistence_globals; // "?g_reward_persistence_globals@@3Us_reward_persistence_globals@@A"

// void reward_persistence_initialize(void (*)(enum e_controller_index, long));
// void reward_persistence_dispose(void);
// void reward_persistence_update(void);
// void reward_persistence_game_ended(void);
// void reward_persistence_sync_with_lsp(void);
// void reward_persistence_write_to_profile(void);
// void reward_persistence_notify_network_configuration_changed(void);
// void reward_persistence_notify_local_box_quit(void);
// void reward_persistence_set_commendation_definition_checksum(unsigned long);
// void reward_persistence_set_purchase_definition_checksum(unsigned long);
// unsigned long reward_persistence_get_commendation_definition_checksum(void);
// unsigned long reward_persistence_get_purchase_definition_checksum(void);
// long reward_persistence_add_cookies(enum e_controller_index, long, bool);
// long reward_persistence_get_cookie_total(enum e_controller_index);
// bool reward_persistence_cookie_purchasable_item_buy(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_owned(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_force_owned(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_forced_visible_and_purchasable(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_bypassed(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_granted_by_LSP_or_DLC(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_granted_by_LSP(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_granted_by_DLC(enum e_controller_index, long);
// bool reward_persistence_cookie_purchasable_item_banned(enum e_controller_index, long);
// bool reward_persistence_commendation_increment(enum e_controller_index, long);
// long reward_persistence_commendation_get_progress(enum e_controller_index, long);
// bool reward_persistence_controller_has_synced_with_lsp(enum e_controller_index);
// bool reward_persistence_controller_is_online_user(enum e_controller_index);
// void reward_persistence_notify_controller_wants_to_become_online_rewards_player(enum e_controller_index);
// void reward_persistence_extract_current_reward_state(enum e_controller_index, struct s_persistent_reward_state *);
// unsigned char reward_persistence_get_purchasable_items_percentage_owned(enum e_controller_index);
// void reward_persistence_dump_current_reward_state_hs(void);
// void reward_persistence_reinitialize_reward_state_from_storage_hs(enum e_controller_index);
// void reward_persistence_commendation_set_progress(enum e_controller_index, long, long);
// void reward_persistence_reset_reward_state_hs(enum e_controller_index);
// void reward_persistence_set_purchase_state_hs(enum e_controller_index, long, long);
// void reward_persistence_update_controller(enum e_controller_index);
// void reward_persistence_build_and_start_lsp_sync(enum e_controller_index);
// public: s_lsp_upload_reward_state::s_lsp_upload_reward_state(void);
// void lsp_sync_completed_callback(class c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>, enum e_controller_index, struct s_lsp_upload_reward_state const *, struct s_lsp_download_reward_state const *);
// bool compare_purchases_for_highest_rank_and_cost(void const *, void const *, void const *);
// long get_total_cost_of_items(enum e_controller_index, struct s_persistent_purchase_state const *);
// void lsp_sync_failing_callback(enum e_controller_index, long);
// struct s_controller_reward_state * controller_reward_state_get_if_ready(enum e_controller_index);
// struct s_controller_reward_state * controller_reward_state_get(enum e_controller_index);
// struct s_controller_reward_state * controller_reward_state_try_and_get(enum e_controller_index);
// void persistent_reward_state_add_cookies(struct s_persistent_cookie_state *, long);
// void persistent_reward_state_record_purchase(struct s_persistent_purchase_state *, long);
// void persistent_reward_state_increment_commendation(struct s_persistent_reward_state *, long);
// void reward_persistence_reward_state_read_from_profile(unsigned __int64, struct s_controller_reward_state *, class c_player_profile_interface *);
// public: enum e_controller_index c_player_profile_interface::get_controller_index(void) const;
// public: s_profile_user_reward_state::s_profile_user_reward_state(void);
// void reward_persistence_record_last_read_canary_state(struct s_controller_reward_state *, struct s_profile_user_reward_state const *);
// void reward_persistence_reward_state_write_to_profile(unsigned __int64, struct s_controller_reward_state *, class c_player_profile_interface *);
// __int64 reward_persistence_compute_canary1(__int64, long);
// long reward_persistence_compute_canary2(unsigned __int64, long);
// void reward_persistence_update_time_tracking(struct s_controller_reward_state *);
// bool reward_persistence_controller_can_earn_online_rewards(enum e_controller_index);
// long get_days_since_january_1_2000_local_time(void);
// void reward_persistence_apply_persistent_state_delta(struct s_persistent_reward_state *, struct s_persistent_reward_state const *, struct s_persistent_reward_state_delta const *);
// void reward_persistence_subtract_persistent_states(struct s_persistent_reward_state_delta *, struct s_persistent_reward_state const *, struct s_persistent_reward_state const *);
// class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> * get_purchase_property_flags(struct s_persistent_purchase_state *, long);
// class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const * get_purchase_property_flags_const(struct s_persistent_purchase_state const *, long);
// class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const * get_purchase_property_flags_for_controller_const(enum e_controller_index, long);
// void reward_persistence_verify_definition_checksums_are_valid(void);
// void reward_persistence_set_reward_state_from_LSP(enum e_controller_index, struct s_pending_lsp_authenticated_user_state const *);
// bool purchasable_item_owned_through_dlc(enum e_controller_index, long);
// bool purchasable_item_owned_through_waypoint(enum e_controller_index, long);
// public: s_waypoint_controller_data::s_waypoint_controller_data(void);
// void update_cached_purchasable_items_percentage_owned(enum e_controller_index);
// void reward_persistence_controller_sanitize_owned_purchases(enum e_controller_index);
// public: virtual bool c_reward_persistence_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_reward_persistence_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_reward_persistence_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// public: static long s_static_array<struct s_persistent_per_commendation_state, 128>::get_count(void);
// public: static long s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::get_count(void);
// public: bool c_static_stack<short, 256>::full(void) const;
// public: long c_static_stack<short, 256>::count(void) const;
// public: void c_static_stack<short, 256>::resize(long);
// public: void c_static_stack<short, 256>::push_back(short const &);
// public: short & c_static_stack<short, 256>::operator[](long);
// public: c_static_stack<short, 256>::c_static_stack<short, 256>(void);
// public: c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_persistent_rewards_state_source);
// public: enum e_persistent_rewards_state_source c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_persistent_rewards_state_source(void) const;
// public: bool c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_persistent_rewards_state_source) const;
// public: bool c_enum_no_init<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_lsp_download_completed_result) const;
// public: long c_static_stack<long, 256>::count(void) const;
// public: void c_static_stack<long, 256>::push_back(long const &);
// public: long & c_static_stack<long, 256>::operator[](long);
// public: long * c_static_stack<long, 256>::get_elements(void);
// public: c_static_stack<long, 256>::c_static_stack<long, 256>(void);
// public: bool c_static_stack<short, 256>::valid(void) const;
// public: bool c_static_stack<short, 256>::valid(long) const;
// public: long c_static_stack<short, 256>::push(void);
// public: short * c_static_stack<short, 256>::get(long);
// public: bool c_static_stack<long, 256>::valid(long) const;
// public: long c_static_stack<long, 256>::push(void);
// public: long * c_static_stack<long, 256>::get(long);
// public: bool c_static_stack<long, 256>::valid(void) const;
// public: bool c_static_stack<long, 256>::full(void) const;
// public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_purchase_property) const;
// public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_purchase_property, bool);
// public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::operator^=(class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_player_reward_flag) const;
// public: void c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::set(enum e_player_reward_flag, bool);
// public: c_flags<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::c_flags<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_cookie_purchase_flags) const;
// public: long c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::count_set(void) const;
// public: unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>(void);
// void zero_and_reconstruct<struct s_reward_persistence_globals>(struct s_reward_persistence_globals *);
// public: struct s_persistent_per_commendation_state const & s_static_array<struct s_persistent_per_commendation_state, 128>::operator[]<long>(long) const;
// public: struct s_controller_reward_state & s_static_array<struct s_controller_reward_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: struct s_persistent_per_commendation_state & s_static_array<struct s_persistent_per_commendation_state, 128>::operator[]<long>(long);
// public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> & s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::operator[]<long>(long);
// public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const & s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::operator[]<long>(long) const;
// void zero_and_reconstruct<struct s_controller_reward_state>(struct s_controller_reward_state *);
// public: static bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_purchase_property);
// public: bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_purchase_property);
// public: void c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_player_reward_flag);
// private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_reward_flag);
// public: static bool c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_cookie_purchase_flags);
// private: static unsigned char c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_cookie_purchase_flags);
// public: void c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::is_clear(void) const;
// void reconstruct<struct s_reward_persistence_globals>(struct s_reward_persistence_globals *);
// public: s_reward_persistence_globals::s_reward_persistence_globals(void);
// public: s_static_array<struct s_controller_reward_state, 4>::s_static_array<struct s_controller_reward_state, 4>(void);
// public: c_reward_persistence_controller_monitor::c_reward_persistence_controller_monitor(void);
// public: s_controller_reward_state::s_controller_reward_state(void);
// public: s_user_reward_state::s_user_reward_state(void);
// public: s_pending_lsp_authenticated_user_state::s_pending_lsp_authenticated_user_state(void);
// public: c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: static bool s_static_array<struct s_persistent_per_commendation_state, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_controller_reward_state, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::valid<long>(long);
// void reconstruct<struct s_controller_reward_state>(struct s_controller_reward_state *);
// private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_purchase_property);
// private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_reward_flag);
// private: static unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_waypoint_profile_unlock_flags);
// difftime;
// ctime_s;
// mktime;
// time;

//void reward_persistence_initialize(void (*)(enum e_controller_index, long))
//{
//    mangled_ppc("?reward_persistence_initialize@@YAXP6AXW4e_controller_index@@J@Z@Z");
//};

//void reward_persistence_dispose(void)
//{
//    mangled_ppc("?reward_persistence_dispose@@YAXXZ");
//};

//void reward_persistence_update(void)
//{
//    mangled_ppc("?reward_persistence_update@@YAXXZ");
//};

//void reward_persistence_game_ended(void)
//{
//    mangled_ppc("?reward_persistence_game_ended@@YAXXZ");
//};

//void reward_persistence_sync_with_lsp(void)
//{
//    mangled_ppc("?reward_persistence_sync_with_lsp@@YAXXZ");
//};

//void reward_persistence_write_to_profile(void)
//{
//    mangled_ppc("?reward_persistence_write_to_profile@@YAXXZ");
//};

//void reward_persistence_notify_network_configuration_changed(void)
//{
//    mangled_ppc("?reward_persistence_notify_network_configuration_changed@@YAXXZ");
//};

//void reward_persistence_notify_local_box_quit(void)
//{
//    mangled_ppc("?reward_persistence_notify_local_box_quit@@YAXXZ");
//};

//void reward_persistence_set_commendation_definition_checksum(unsigned long)
//{
//    mangled_ppc("?reward_persistence_set_commendation_definition_checksum@@YAXK@Z");
//};

//void reward_persistence_set_purchase_definition_checksum(unsigned long)
//{
//    mangled_ppc("?reward_persistence_set_purchase_definition_checksum@@YAXK@Z");
//};

//unsigned long reward_persistence_get_commendation_definition_checksum(void)
//{
//    mangled_ppc("?reward_persistence_get_commendation_definition_checksum@@YAKXZ");
//};

//unsigned long reward_persistence_get_purchase_definition_checksum(void)
//{
//    mangled_ppc("?reward_persistence_get_purchase_definition_checksum@@YAKXZ");
//};

//long reward_persistence_add_cookies(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?reward_persistence_add_cookies@@YAJW4e_controller_index@@J_N@Z");
//};

//long reward_persistence_get_cookie_total(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_get_cookie_total@@YAJW4e_controller_index@@@Z");
//};

//bool reward_persistence_cookie_purchasable_item_buy(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_buy@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_owned(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_owned@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_force_owned(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_force_owned@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_forced_visible_and_purchasable(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_forced_visible_and_purchasable@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_bypassed(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_bypassed@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_granted_by_LSP_or_DLC(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_granted_by_LSP_or_DLC@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_granted_by_LSP(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_granted_by_LSP@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_granted_by_DLC(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_granted_by_DLC@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_cookie_purchasable_item_banned(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_cookie_purchasable_item_banned@@YA_NW4e_controller_index@@J@Z");
//};

//bool reward_persistence_commendation_increment(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_commendation_increment@@YA_NW4e_controller_index@@J@Z");
//};

//long reward_persistence_commendation_get_progress(enum e_controller_index, long)
//{
//    mangled_ppc("?reward_persistence_commendation_get_progress@@YAJW4e_controller_index@@J@Z");
//};

//bool reward_persistence_controller_has_synced_with_lsp(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_controller_has_synced_with_lsp@@YA_NW4e_controller_index@@@Z");
//};

//bool reward_persistence_controller_is_online_user(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_controller_is_online_user@@YA_NW4e_controller_index@@@Z");
//};

//void reward_persistence_notify_controller_wants_to_become_online_rewards_player(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_notify_controller_wants_to_become_online_rewards_player@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_extract_current_reward_state(enum e_controller_index, struct s_persistent_reward_state *)
//{
//    mangled_ppc("?reward_persistence_extract_current_reward_state@@YAXW4e_controller_index@@PAUs_persistent_reward_state@@@Z");
//};

//unsigned char reward_persistence_get_purchasable_items_percentage_owned(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_get_purchasable_items_percentage_owned@@YAEW4e_controller_index@@@Z");
//};

//void reward_persistence_dump_current_reward_state_hs(void)
//{
//    mangled_ppc("?reward_persistence_dump_current_reward_state_hs@@YAXXZ");
//};

//void reward_persistence_reinitialize_reward_state_from_storage_hs(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_reinitialize_reward_state_from_storage_hs@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_commendation_set_progress(enum e_controller_index, long, long)
//{
//    mangled_ppc("?reward_persistence_commendation_set_progress@@YAXW4e_controller_index@@JJ@Z");
//};

//void reward_persistence_reset_reward_state_hs(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_reset_reward_state_hs@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_set_purchase_state_hs(enum e_controller_index, long, long)
//{
//    mangled_ppc("?reward_persistence_set_purchase_state_hs@@YAXW4e_controller_index@@JJ@Z");
//};

//void reward_persistence_update_controller(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_update_controller@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_build_and_start_lsp_sync(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_build_and_start_lsp_sync@@YAXW4e_controller_index@@@Z");
//};

//public: s_lsp_upload_reward_state::s_lsp_upload_reward_state(void)
//{
//    mangled_ppc("??0s_lsp_upload_reward_state@@QAA@XZ");
//};

//void lsp_sync_completed_callback(class c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>, enum e_controller_index, struct s_lsp_upload_reward_state const *, struct s_lsp_download_reward_state const *)
//{
//    mangled_ppc("?lsp_sync_completed_callback@@YAXV?$c_enum@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@W4e_controller_index@@PBUs_lsp_upload_reward_state@@PBUs_lsp_download_reward_state@@@Z");
//};

//bool compare_purchases_for_highest_rank_and_cost(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_purchases_for_highest_rank_and_cost@@YA_NPBX00@Z");
//};

//long get_total_cost_of_items(enum e_controller_index, struct s_persistent_purchase_state const *)
//{
//    mangled_ppc("?get_total_cost_of_items@@YAJW4e_controller_index@@PBUs_persistent_purchase_state@@@Z");
//};

//void lsp_sync_failing_callback(enum e_controller_index, long)
//{
//    mangled_ppc("?lsp_sync_failing_callback@@YAXW4e_controller_index@@J@Z");
//};

//struct s_controller_reward_state * controller_reward_state_get_if_ready(enum e_controller_index)
//{
//    mangled_ppc("?controller_reward_state_get_if_ready@@YAPAUs_controller_reward_state@@W4e_controller_index@@@Z");
//};

//struct s_controller_reward_state * controller_reward_state_get(enum e_controller_index)
//{
//    mangled_ppc("?controller_reward_state_get@@YAPAUs_controller_reward_state@@W4e_controller_index@@@Z");
//};

//struct s_controller_reward_state * controller_reward_state_try_and_get(enum e_controller_index)
//{
//    mangled_ppc("?controller_reward_state_try_and_get@@YAPAUs_controller_reward_state@@W4e_controller_index@@@Z");
//};

//void persistent_reward_state_add_cookies(struct s_persistent_cookie_state *, long)
//{
//    mangled_ppc("?persistent_reward_state_add_cookies@@YAXPAUs_persistent_cookie_state@@J@Z");
//};

//void persistent_reward_state_record_purchase(struct s_persistent_purchase_state *, long)
//{
//    mangled_ppc("?persistent_reward_state_record_purchase@@YAXPAUs_persistent_purchase_state@@J@Z");
//};

//void persistent_reward_state_increment_commendation(struct s_persistent_reward_state *, long)
//{
//    mangled_ppc("?persistent_reward_state_increment_commendation@@YAXPAUs_persistent_reward_state@@J@Z");
//};

//void reward_persistence_reward_state_read_from_profile(unsigned __int64, struct s_controller_reward_state *, class c_player_profile_interface *)
//{
//    mangled_ppc("?reward_persistence_reward_state_read_from_profile@@YAX_KPAUs_controller_reward_state@@PAVc_player_profile_interface@@@Z");
//};

//public: enum e_controller_index c_player_profile_interface::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_player_profile_interface@@QBA?AW4e_controller_index@@XZ");
//};

//public: s_profile_user_reward_state::s_profile_user_reward_state(void)
//{
//    mangled_ppc("??0s_profile_user_reward_state@@QAA@XZ");
//};

//void reward_persistence_record_last_read_canary_state(struct s_controller_reward_state *, struct s_profile_user_reward_state const *)
//{
//    mangled_ppc("?reward_persistence_record_last_read_canary_state@@YAXPAUs_controller_reward_state@@PBUs_profile_user_reward_state@@@Z");
//};

//void reward_persistence_reward_state_write_to_profile(unsigned __int64, struct s_controller_reward_state *, class c_player_profile_interface *)
//{
//    mangled_ppc("?reward_persistence_reward_state_write_to_profile@@YAX_KPAUs_controller_reward_state@@PAVc_player_profile_interface@@@Z");
//};

//__int64 reward_persistence_compute_canary1(__int64, long)
//{
//    mangled_ppc("?reward_persistence_compute_canary1@@YA_J_JJ@Z");
//};

//long reward_persistence_compute_canary2(unsigned __int64, long)
//{
//    mangled_ppc("?reward_persistence_compute_canary2@@YAJ_KJ@Z");
//};

//void reward_persistence_update_time_tracking(struct s_controller_reward_state *)
//{
//    mangled_ppc("?reward_persistence_update_time_tracking@@YAXPAUs_controller_reward_state@@@Z");
//};

//bool reward_persistence_controller_can_earn_online_rewards(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_controller_can_earn_online_rewards@@YA_NW4e_controller_index@@@Z");
//};

//long get_days_since_january_1_2000_local_time(void)
//{
//    mangled_ppc("?get_days_since_january_1_2000_local_time@@YAJXZ");
//};

//void reward_persistence_apply_persistent_state_delta(struct s_persistent_reward_state *, struct s_persistent_reward_state const *, struct s_persistent_reward_state_delta const *)
//{
//    mangled_ppc("?reward_persistence_apply_persistent_state_delta@@YAXPAUs_persistent_reward_state@@PBU1@PBUs_persistent_reward_state_delta@@@Z");
//};

//void reward_persistence_subtract_persistent_states(struct s_persistent_reward_state_delta *, struct s_persistent_reward_state const *, struct s_persistent_reward_state const *)
//{
//    mangled_ppc("?reward_persistence_subtract_persistent_states@@YAXPAUs_persistent_reward_state_delta@@PBUs_persistent_reward_state@@1@Z");
//};

//class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> * get_purchase_property_flags(struct s_persistent_purchase_state *, long)
//{
//    mangled_ppc("?get_purchase_property_flags@@YAPAV?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@PAUs_persistent_purchase_state@@J@Z");
//};

//class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const * get_purchase_property_flags_const(struct s_persistent_purchase_state const *, long)
//{
//    mangled_ppc("?get_purchase_property_flags_const@@YAPBV?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@PBUs_persistent_purchase_state@@J@Z");
//};

//class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const * get_purchase_property_flags_for_controller_const(enum e_controller_index, long)
//{
//    mangled_ppc("?get_purchase_property_flags_for_controller_const@@YAPBV?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@W4e_controller_index@@J@Z");
//};

//void reward_persistence_verify_definition_checksums_are_valid(void)
//{
//    mangled_ppc("?reward_persistence_verify_definition_checksums_are_valid@@YAXXZ");
//};

//void reward_persistence_set_reward_state_from_LSP(enum e_controller_index, struct s_pending_lsp_authenticated_user_state const *)
//{
//    mangled_ppc("?reward_persistence_set_reward_state_from_LSP@@YAXW4e_controller_index@@PBUs_pending_lsp_authenticated_user_state@@@Z");
//};

//bool purchasable_item_owned_through_dlc(enum e_controller_index, long)
//{
//    mangled_ppc("?purchasable_item_owned_through_dlc@@YA_NW4e_controller_index@@J@Z");
//};

//bool purchasable_item_owned_through_waypoint(enum e_controller_index, long)
//{
//    mangled_ppc("?purchasable_item_owned_through_waypoint@@YA_NW4e_controller_index@@J@Z");
//};

//public: s_waypoint_controller_data::s_waypoint_controller_data(void)
//{
//    mangled_ppc("??0s_waypoint_controller_data@@QAA@XZ");
//};

//void update_cached_purchasable_items_percentage_owned(enum e_controller_index)
//{
//    mangled_ppc("?update_cached_purchasable_items_percentage_owned@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_controller_sanitize_owned_purchases(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_controller_sanitize_owned_purchases@@YAXW4e_controller_index@@@Z");
//};

//public: virtual bool c_reward_persistence_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_reward_persistence_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_reward_persistence_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_reward_persistence_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_reward_persistence_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_reward_persistence_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: static long s_static_array<struct s_persistent_per_commendation_state, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_persistent_per_commendation_state@@$0IA@@@SAJXZ");
//};

//public: static long s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@$0BAA@@@SAJXZ");
//};

//public: bool c_static_stack<short, 256>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@F$0BAA@@@QBA_NXZ");
//};

//public: long c_static_stack<short, 256>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@F$0BAA@@@QBAJXZ");
//};

//public: void c_static_stack<short, 256>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@F$0BAA@@@QAAXJ@Z");
//};

//public: void c_static_stack<short, 256>::push_back(short const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@F$0BAA@@@QAAXABF@Z");
//};

//public: short & c_static_stack<short, 256>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@F$0BAA@@@QAAAAFJ@Z");
//};

//public: c_static_stack<short, 256>::c_static_stack<short, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@F$0BAA@@@QAA@XZ");
//};

//public: c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum e_persistent_rewards_state_source)
//{
//    mangled_ppc("??0?$c_enum@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_persistent_rewards_state_source@@@Z");
//};

//public: enum e_persistent_rewards_state_source c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_persistent_rewards_state_source(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_persistent_rewards_state_source@@XZ");
//};

//public: bool c_enum_no_init<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_persistent_rewards_state_source) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_persistent_rewards_state_source@@@Z");
//};

//public: bool c_enum_no_init<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_lsp_download_completed_result) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_download_completed_result@@@Z");
//};

//public: long c_static_stack<long, 256>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$0BAA@@@QBAJXZ");
//};

//public: void c_static_stack<long, 256>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$0BAA@@@QAAXABJ@Z");
//};

//public: long & c_static_stack<long, 256>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@J$0BAA@@@QAAAAJJ@Z");
//};

//public: long * c_static_stack<long, 256>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@J$0BAA@@@QAAPAJXZ");
//};

//public: c_static_stack<long, 256>::c_static_stack<long, 256>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$0BAA@@@QAA@XZ");
//};

//public: bool c_static_stack<short, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@F$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<short, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@F$0BAA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<short, 256>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@F$0BAA@@@QAAJXZ");
//};

//public: short * c_static_stack<short, 256>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@F$0BAA@@@QAAPAFJ@Z");
//};

//public: bool c_static_stack<long, 256>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BAA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<long, 256>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$0BAA@@@QAAJXZ");
//};

//public: long * c_static_stack<long, 256>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0BAA@@@QAAPAJJ@Z");
//};

//public: bool c_static_stack<long, 256>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 256>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$0BAA@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_purchase_property) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_purchase_property@@@Z");
//};

//public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_purchase_property, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_purchase_property@@_N@Z");
//};

//public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::operator^=(class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_6?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_player_reward_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@QBA_NW4e_player_reward_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::set(enum e_player_reward_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@QAAXW4e_player_reward_flag@@_N@Z");
//};

//public: c_flags<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::c_flags<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_cookie_purchase_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cookie_purchase_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_cookie_purchase_flags@@@Z");
//};

//public: long c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: c_flags<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void zero_and_reconstruct<struct s_reward_persistence_globals>(struct s_reward_persistence_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_reward_persistence_globals@@@@YAXPAUs_reward_persistence_globals@@@Z");
//};

//public: struct s_persistent_per_commendation_state const & s_static_array<struct s_persistent_per_commendation_state, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_persistent_per_commendation_state@@$0IA@@@QBAABUs_persistent_per_commendation_state@@J@Z");
//};

//public: struct s_controller_reward_state & s_static_array<struct s_controller_reward_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_controller_reward_state@@$03@@QAAAAUs_controller_reward_state@@W4e_controller_index@@@Z");
//};

//public: struct s_persistent_per_commendation_state & s_static_array<struct s_persistent_per_commendation_state, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_persistent_per_commendation_state@@$0IA@@@QAAAAUs_persistent_per_commendation_state@@J@Z");
//};

//public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> & s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@$0BAA@@@QAAAAV?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver> const & s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@$0BAA@@@QBAABV?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@J@Z");
//};

//void zero_and_reconstruct<struct s_controller_reward_state>(struct s_controller_reward_state *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_controller_reward_state@@@@YAXPAUs_controller_reward_state@@@Z");
//};

//public: static bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_purchase_property)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_purchase_property@@@Z");
//};

//public: bool c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_purchase_property)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@CAEW4e_purchase_property@@@Z");
//};

//public: void c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_player_reward_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@SA_NW4e_player_reward_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_reward_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@CAKW4e_player_reward_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_cookie_purchase_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cookie_purchase_flags@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_cookie_purchase_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_cookie_purchase_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_cookie_purchase_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cookie_purchase_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_cookie_purchase_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//void reconstruct<struct s_reward_persistence_globals>(struct s_reward_persistence_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_reward_persistence_globals@@@@YAXPAUs_reward_persistence_globals@@@Z");
//};

//public: s_reward_persistence_globals::s_reward_persistence_globals(void)
//{
//    mangled_ppc("??0s_reward_persistence_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_controller_reward_state, 4>::s_static_array<struct s_controller_reward_state, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_controller_reward_state@@$03@@QAA@XZ");
//};

//public: c_reward_persistence_controller_monitor::c_reward_persistence_controller_monitor(void)
//{
//    mangled_ppc("??0c_reward_persistence_controller_monitor@@QAA@XZ");
//};

//public: s_controller_reward_state::s_controller_reward_state(void)
//{
//    mangled_ppc("??0s_controller_reward_state@@QAA@XZ");
//};

//public: s_user_reward_state::s_user_reward_state(void)
//{
//    mangled_ppc("??0s_user_reward_state@@QAA@XZ");
//};

//public: s_pending_lsp_authenticated_user_state::s_pending_lsp_authenticated_user_state(void)
//{
//    mangled_ppc("??0s_pending_lsp_authenticated_user_state@@QAA@XZ");
//};

//public: c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_persistent_rewards_state_source, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_persistent_rewards_state_source@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool s_static_array<struct s_persistent_per_commendation_state, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_persistent_per_commendation_state@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_controller_reward_state, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_controller_reward_state@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@$0BAA@@@SA_NJ@Z");
//};

//void reconstruct<struct s_controller_reward_state>(struct s_controller_reward_state *)
//{
//    mangled_ppc("??$reconstruct@Us_controller_reward_state@@@@YAXPAUs_controller_reward_state@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_purchase_property, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_purchase_property)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_purchase_property@@E$04Us_default_enum_string_resolver@@@@CAEW4e_purchase_property@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_reward_flag, unsigned long, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_reward_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_reward_flag@@K$01Us_default_enum_string_resolver@@@@CAKW4e_player_reward_flag@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_waypoint_profile_unlock_flags, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_waypoint_profile_unlock_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_waypoint_profile_unlock_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGW4e_waypoint_profile_unlock_flags@@@Z");
//};

//difftime
//{
//    mangled_ppc("difftime");
//};

//ctime_s
//{
//    mangled_ppc("ctime_s");
//};

//mktime
//{
//    mangled_ppc("mktime");
//};

//time
//{
//    mangled_ppc("time");
//};

