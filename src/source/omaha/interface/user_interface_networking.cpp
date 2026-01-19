/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void user_interface_networking_initialize(void);
// void user_interface_networking_dispose(void);
// void user_interface_networking_initialize_for_new_map(void);
// void user_interface_networking_dispose_from_old_map(void);
// void user_interface_networking_memory_initialize(enum e_map_memory_configuration);
// void user_interface_networking_memory_dispose(void);
// void user_interface_networking_update(void);
// void user_interface_network_dialogs_update(void);
// public: long c_cui_dialog_reference::get_name(void) const;
// protected: class c_cui_dialog_pipe * c_cui_dialog_reference::get_pipe(void) const;
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// bool user_interface_networking_dialogs_handle_results(class c_dialog_result_message const *);
// void user_interface_networking_dialogs_request_join(enum e_output_user_index);
// void user_interface_set_desired_multiplayer_mode(enum e_desired_multiplayer_mode);
// bool user_interface_networking_xbox_guide_was_active_recently(void);
// void user_interface_simulation_describe_status(long *, float *);
// void user_interface_network_update_live_service_qos(struct s_transport_qos_result const *);
// bool user_interface_network_get_live_connection_info(struct s_transport_qos_result *, enum e_online_nat_type *, long *);
// bool user_interface_network_get_is_processing_sign_in_error(void);
// long user_interface_networking_get_name_from_gui_game_mode(enum e_gui_game_mode);
// enum e_gui_location user_interface_networking_get_current_location(void);
// bool user_interface_networking_enter_pregame_location(enum e_gui_game_mode);
// void user_interface_networking_set_start_game_when_ready(bool, enum e_controller_index);
// void user_interface_networking_clear_last_game_started(void);
// bool user_interface_networking_get_start_game_when_ready(void);
// enum e_controller_index user_interface_networking_get_saved_game_controller(void);
// bool user_interface_networking_build_is_compatible(long, long, long);
// void user_interface_initialize_coop_game_settings(void);
// void user_interface_networking_set_ui_upload_quota(long);
// class c_game_results const * user_interface_networking_get_final_game_results(void);
// void user_interface_networking_show_signed_out_while_in_live_alert(void);
// void user_interface_join_remote_session(bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_address const *, struct s_transport_secure_key const *);
// bool user_interface_join_squad_active(void);
// bool user_interface_networking_handle_dialog_result(class c_dialog_result_message const *);
// void user_interface_networking_notify_booted_from_session(enum e_network_session_boot_reason);
// void user_interface_networking_notify_file_transfer_event(struct s_content_item_metadata const *, long);
// void user_interface_networking_notify_file_download_started(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_download_paused(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_download_resumed(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_download_complete(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_upload_started(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_upload_paused(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_upload_resumed(struct s_content_item_metadata const *);
// void user_interface_networking_notify_file_upload_complete(enum e_controller_index, struct s_content_item_metadata const *);
// bool user_interface_networking_should_show_teams(void);
// bool user_interface_networking_should_allow_team_switching(void);
// bool user_interface_networking_should_show_skill(void);
// class c_cui_arena_message_screen_reference * user_interface_networking_get_arena_message_screen_reference(void);
// class c_cui_in_progress_reference * user_interface_networking_get_data_mine_in_progress_reference(void);
// void user_interface_networking_set_data_mine_in_progress_enabled(bool);
// class c_cui_challenge_toast_screen_reference * user_interface_networking_get_challenge_toast_screen_reference(enum e_controller_index);
// class c_cui_in_progress_reference * user_interface_networking_get_online_guide_in_progress_reference(void);
// class c_cui_dialog_reference * user_interface_controller_get_no_storage_device_chosen_reference(void);
// void user_interface_networking_handle_missing_required_dlc(void);
// public: c_cui_dialog_reference::c_cui_dialog_reference(void);
// public: c_cui_dialog_reference::~c_cui_dialog_reference(void);
// void user_interface_networking_game_start_when_ready(void);
// void user_interface_networking_game_start_when_joined(long);
// void user_interface_networking_reset(void);
// void data_mine_insert_qos_service(struct s_transport_qos_result const *, enum e_online_nat_type);
// void user_interface_networking_start_game_when_ready_update(void);
// void user_interface_networking_join_update(void);
// void user_interface_networking_in_progress_update(void);
// void user_interface_sanitize_game_setup_preferences_for_remote_squad_join(void);
// void user_interface_join_to_remote_squad_internal(bool, bool, bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *);
// bool handle_missing_required_dlc_marketplace_prompt_result(class c_dialog_result_message const *);
// public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::destruct(void);
// public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::get(void);
// public: class c_cui_dialog_reference const * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::get_const(void) const;
// public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::try_and_get(void);
// public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::destruct(void);
// public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::get(void);
// public: class c_cui_in_progress_reference const * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::get_const(void) const;
// public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::try_and_get(void);
// public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::destruct(void);
// public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::try_and_get(void);
// public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::destruct(void);
// public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::try_and_get(void);
// public: void * c_cui_dialog_reference::`scalar deleting destructor'(unsigned int);
// public: c_cui_in_progress_reference::c_cui_in_progress_reference(void);
// public: void * c_cui_in_progress_reference::`scalar deleting destructor'(unsigned int);
// public: c_cui_arena_message_screen_reference::c_cui_arena_message_screen_reference(void);
// public: void * c_cui_arena_message_screen_reference::`scalar deleting destructor'(unsigned int);
// public: c_cui_challenge_toast_screen_reference::c_cui_challenge_toast_screen_reference(void);
// public: void * c_cui_challenge_toast_screen_reference::`scalar deleting destructor'(unsigned int);
// public: c_cui_in_progress_reference::~c_cui_in_progress_reference(void);
// public: c_cui_arena_message_screen_reference::~c_cui_arena_message_screen_reference(void);
// public: c_cui_challenge_toast_screen_reference::~c_cui_challenge_toast_screen_reference(void);
// public: bool c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::alive(void) const;
// public: bool c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::alive(void) const;
// public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::alive(void) const;
// public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::alive(void) const;
// public: class c_cui_dialog_reference * c_opaque_data<class c_cui_dialog_reference, 8, 4>::get(void);
// public: class c_cui_in_progress_reference * c_opaque_data<class c_cui_in_progress_reference, 8, 4>::get(void);
// public: class c_cui_arena_message_screen_reference * c_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::get(void);
// public: class c_cui_challenge_toast_screen_reference * c_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::get(void);
// protected: class c_cui_screen_pipe * c_cui_screen_reference::get_pipe(void) const;
// public: class c_cui_screen_pipe * c_cui_screen_pipe_endpoint::get_pipe(void) const;
// public: long c_dialog_result_message::get_dialog_name(void) const;
// public: s_user_interface_networking_globals::s_user_interface_networking_globals(void);
// public: c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>(void);
// public: s_user_interface_networking_globals::~s_user_interface_networking_globals(void);
// public: c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::~c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::~c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::~c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>(void);
// public: c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::~c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>(void);
// void user_interface_networking_globals::`dynamic atexit destructor'(void);

//void user_interface_networking_initialize(void)
//{
//    mangled_ppc("?user_interface_networking_initialize@@YAXXZ");
//};

//void user_interface_networking_dispose(void)
//{
//    mangled_ppc("?user_interface_networking_dispose@@YAXXZ");
//};

//void user_interface_networking_initialize_for_new_map(void)
//{
//    mangled_ppc("?user_interface_networking_initialize_for_new_map@@YAXXZ");
//};

//void user_interface_networking_dispose_from_old_map(void)
//{
//    mangled_ppc("?user_interface_networking_dispose_from_old_map@@YAXXZ");
//};

//void user_interface_networking_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?user_interface_networking_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void user_interface_networking_memory_dispose(void)
//{
//    mangled_ppc("?user_interface_networking_memory_dispose@@YAXXZ");
//};

//void user_interface_networking_update(void)
//{
//    mangled_ppc("?user_interface_networking_update@@YAXXZ");
//};

//void user_interface_network_dialogs_update(void)
//{
//    mangled_ppc("?user_interface_network_dialogs_update@@YAXXZ");
//};

//public: long c_cui_dialog_reference::get_name(void) const
//{
//    mangled_ppc("?get_name@c_cui_dialog_reference@@QBAJXZ");
//};

//protected: class c_cui_dialog_pipe * c_cui_dialog_reference::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_cui_dialog_reference@@IBAPAVc_cui_dialog_pipe@@XZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//bool user_interface_networking_dialogs_handle_results(class c_dialog_result_message const *)
//{
//    mangled_ppc("?user_interface_networking_dialogs_handle_results@@YA_NPBVc_dialog_result_message@@@Z");
//};

//void user_interface_networking_dialogs_request_join(enum e_output_user_index)
//{
//    mangled_ppc("?user_interface_networking_dialogs_request_join@@YAXW4e_output_user_index@@@Z");
//};

//void user_interface_set_desired_multiplayer_mode(enum e_desired_multiplayer_mode)
//{
//    mangled_ppc("?user_interface_set_desired_multiplayer_mode@@YAXW4e_desired_multiplayer_mode@@@Z");
//};

//bool user_interface_networking_xbox_guide_was_active_recently(void)
//{
//    mangled_ppc("?user_interface_networking_xbox_guide_was_active_recently@@YA_NXZ");
//};

//void user_interface_simulation_describe_status(long *, float *)
//{
//    mangled_ppc("?user_interface_simulation_describe_status@@YAXPAJPAM@Z");
//};

//void user_interface_network_update_live_service_qos(struct s_transport_qos_result const *)
//{
//    mangled_ppc("?user_interface_network_update_live_service_qos@@YAXPBUs_transport_qos_result@@@Z");
//};

//bool user_interface_network_get_live_connection_info(struct s_transport_qos_result *, enum e_online_nat_type *, long *)
//{
//    mangled_ppc("?user_interface_network_get_live_connection_info@@YA_NPAUs_transport_qos_result@@PAW4e_online_nat_type@@PAJ@Z");
//};

//bool user_interface_network_get_is_processing_sign_in_error(void)
//{
//    mangled_ppc("?user_interface_network_get_is_processing_sign_in_error@@YA_NXZ");
//};

//long user_interface_networking_get_name_from_gui_game_mode(enum e_gui_game_mode)
//{
//    mangled_ppc("?user_interface_networking_get_name_from_gui_game_mode@@YAJW4e_gui_game_mode@@@Z");
//};

//enum e_gui_location user_interface_networking_get_current_location(void)
//{
//    mangled_ppc("?user_interface_networking_get_current_location@@YA?AW4e_gui_location@@XZ");
//};

//bool user_interface_networking_enter_pregame_location(enum e_gui_game_mode)
//{
//    mangled_ppc("?user_interface_networking_enter_pregame_location@@YA_NW4e_gui_game_mode@@@Z");
//};

//void user_interface_networking_set_start_game_when_ready(bool, enum e_controller_index)
//{
//    mangled_ppc("?user_interface_networking_set_start_game_when_ready@@YAX_NW4e_controller_index@@@Z");
//};

//void user_interface_networking_clear_last_game_started(void)
//{
//    mangled_ppc("?user_interface_networking_clear_last_game_started@@YAXXZ");
//};

//bool user_interface_networking_get_start_game_when_ready(void)
//{
//    mangled_ppc("?user_interface_networking_get_start_game_when_ready@@YA_NXZ");
//};

//enum e_controller_index user_interface_networking_get_saved_game_controller(void)
//{
//    mangled_ppc("?user_interface_networking_get_saved_game_controller@@YA?AW4e_controller_index@@XZ");
//};

//bool user_interface_networking_build_is_compatible(long, long, long)
//{
//    mangled_ppc("?user_interface_networking_build_is_compatible@@YA_NJJJ@Z");
//};

//void user_interface_initialize_coop_game_settings(void)
//{
//    mangled_ppc("?user_interface_initialize_coop_game_settings@@YAXXZ");
//};

//void user_interface_networking_set_ui_upload_quota(long)
//{
//    mangled_ppc("?user_interface_networking_set_ui_upload_quota@@YAXJ@Z");
//};

//class c_game_results const * user_interface_networking_get_final_game_results(void)
//{
//    mangled_ppc("?user_interface_networking_get_final_game_results@@YAPBVc_game_results@@XZ");
//};

//void user_interface_networking_show_signed_out_while_in_live_alert(void)
//{
//    mangled_ppc("?user_interface_networking_show_signed_out_while_in_live_alert@@YAXXZ");
//};

//void user_interface_join_remote_session(bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_address const *, struct s_transport_secure_key const *)
//{
//    mangled_ppc("?user_interface_join_remote_session@@YAX_NW4e_network_session_class@@PBUs_transport_secure_identifier@@PBUs_transport_secure_address@@PBUs_transport_secure_key@@@Z");
//};

//bool user_interface_join_squad_active(void)
//{
//    mangled_ppc("?user_interface_join_squad_active@@YA_NXZ");
//};

//bool user_interface_networking_handle_dialog_result(class c_dialog_result_message const *)
//{
//    mangled_ppc("?user_interface_networking_handle_dialog_result@@YA_NPBVc_dialog_result_message@@@Z");
//};

//void user_interface_networking_notify_booted_from_session(enum e_network_session_boot_reason)
//{
//    mangled_ppc("?user_interface_networking_notify_booted_from_session@@YAXW4e_network_session_boot_reason@@@Z");
//};

//void user_interface_networking_notify_file_transfer_event(struct s_content_item_metadata const *, long)
//{
//    mangled_ppc("?user_interface_networking_notify_file_transfer_event@@YAXPBUs_content_item_metadata@@J@Z");
//};

//void user_interface_networking_notify_file_download_started(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_download_started@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_download_paused(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_download_paused@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_download_resumed(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_download_resumed@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_download_complete(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_download_complete@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_upload_started(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_upload_started@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_upload_paused(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_upload_paused@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_upload_resumed(struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_upload_resumed@@YAXPBUs_content_item_metadata@@@Z");
//};

//void user_interface_networking_notify_file_upload_complete(enum e_controller_index, struct s_content_item_metadata const *)
//{
//    mangled_ppc("?user_interface_networking_notify_file_upload_complete@@YAXW4e_controller_index@@PBUs_content_item_metadata@@@Z");
//};

//bool user_interface_networking_should_show_teams(void)
//{
//    mangled_ppc("?user_interface_networking_should_show_teams@@YA_NXZ");
//};

//bool user_interface_networking_should_allow_team_switching(void)
//{
//    mangled_ppc("?user_interface_networking_should_allow_team_switching@@YA_NXZ");
//};

//bool user_interface_networking_should_show_skill(void)
//{
//    mangled_ppc("?user_interface_networking_should_show_skill@@YA_NXZ");
//};

//class c_cui_arena_message_screen_reference * user_interface_networking_get_arena_message_screen_reference(void)
//{
//    mangled_ppc("?user_interface_networking_get_arena_message_screen_reference@@YAPAVc_cui_arena_message_screen_reference@@XZ");
//};

//class c_cui_in_progress_reference * user_interface_networking_get_data_mine_in_progress_reference(void)
//{
//    mangled_ppc("?user_interface_networking_get_data_mine_in_progress_reference@@YAPAVc_cui_in_progress_reference@@XZ");
//};

//void user_interface_networking_set_data_mine_in_progress_enabled(bool)
//{
//    mangled_ppc("?user_interface_networking_set_data_mine_in_progress_enabled@@YAX_N@Z");
//};

//class c_cui_challenge_toast_screen_reference * user_interface_networking_get_challenge_toast_screen_reference(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_networking_get_challenge_toast_screen_reference@@YAPAVc_cui_challenge_toast_screen_reference@@W4e_controller_index@@@Z");
//};

//class c_cui_in_progress_reference * user_interface_networking_get_online_guide_in_progress_reference(void)
//{
//    mangled_ppc("?user_interface_networking_get_online_guide_in_progress_reference@@YAPAVc_cui_in_progress_reference@@XZ");
//};

//class c_cui_dialog_reference * user_interface_controller_get_no_storage_device_chosen_reference(void)
//{
//    mangled_ppc("?user_interface_controller_get_no_storage_device_chosen_reference@@YAPAVc_cui_dialog_reference@@XZ");
//};

//void user_interface_networking_handle_missing_required_dlc(void)
//{
//    mangled_ppc("?user_interface_networking_handle_missing_required_dlc@@YAXXZ");
//};

//public: c_cui_dialog_reference::c_cui_dialog_reference(void)
//{
//    mangled_ppc("??0c_cui_dialog_reference@@QAA@XZ");
//};

//public: c_cui_dialog_reference::~c_cui_dialog_reference(void)
//{
//    mangled_ppc("??1c_cui_dialog_reference@@QAA@XZ");
//};

//void user_interface_networking_game_start_when_ready(void)
//{
//    mangled_ppc("?user_interface_networking_game_start_when_ready@@YAXXZ");
//};

//void user_interface_networking_game_start_when_joined(long)
//{
//    mangled_ppc("?user_interface_networking_game_start_when_joined@@YAXJ@Z");
//};

//void user_interface_networking_reset(void)
//{
//    mangled_ppc("?user_interface_networking_reset@@YAXXZ");
//};

//void data_mine_insert_qos_service(struct s_transport_qos_result const *, enum e_online_nat_type)
//{
//    mangled_ppc("?data_mine_insert_qos_service@@YAXPBUs_transport_qos_result@@W4e_online_nat_type@@@Z");
//};

//void user_interface_networking_start_game_when_ready_update(void)
//{
//    mangled_ppc("?user_interface_networking_start_game_when_ready_update@@YAXXZ");
//};

//void user_interface_networking_join_update(void)
//{
//    mangled_ppc("?user_interface_networking_join_update@@YAXXZ");
//};

//void user_interface_networking_in_progress_update(void)
//{
//    mangled_ppc("?user_interface_networking_in_progress_update@@YAXXZ");
//};

//void user_interface_sanitize_game_setup_preferences_for_remote_squad_join(void)
//{
//    mangled_ppc("?user_interface_sanitize_game_setup_preferences_for_remote_squad_join@@YAXXZ");
//};

//void user_interface_join_to_remote_squad_internal(bool, bool, bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?user_interface_join_to_remote_squad_internal@@YAX_N00W4e_network_session_class@@PBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@@Z");
//};

//bool handle_missing_required_dlc_marketplace_prompt_result(class c_dialog_result_message const *)
//{
//    mangled_ppc("?handle_missing_required_dlc_marketplace_prompt_result@@YA_NPBVc_dialog_result_message@@@Z");
//};

//public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAAPAVc_cui_dialog_reference@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAAXXZ");
//};

//public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAAPAVc_cui_dialog_reference@@XZ");
//};

//public: class c_cui_dialog_reference const * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QBAPBVc_cui_dialog_reference@@XZ");
//};

//public: class c_cui_dialog_reference * c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAAPAVc_cui_dialog_reference@@XZ");
//};

//public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAAPAVc_cui_in_progress_reference@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAAXXZ");
//};

//public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAAPAVc_cui_in_progress_reference@@XZ");
//};

//public: class c_cui_in_progress_reference const * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QBAPBVc_cui_in_progress_reference@@XZ");
//};

//public: class c_cui_in_progress_reference * c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAAPAVc_cui_in_progress_reference@@XZ");
//};

//public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAAPAVc_cui_arena_message_screen_reference@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAAXXZ");
//};

//public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAAPAVc_cui_arena_message_screen_reference@@XZ");
//};

//public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAAPAVc_cui_challenge_toast_screen_reference@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAAXXZ");
//};

//public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAAPAVc_cui_challenge_toast_screen_reference@@XZ");
//};

//public: void * c_cui_dialog_reference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_dialog_reference@@QAAPAXI@Z");
//};

//public: c_cui_in_progress_reference::c_cui_in_progress_reference(void)
//{
//    mangled_ppc("??0c_cui_in_progress_reference@@QAA@XZ");
//};

//public: void * c_cui_in_progress_reference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_in_progress_reference@@QAAPAXI@Z");
//};

//public: c_cui_arena_message_screen_reference::c_cui_arena_message_screen_reference(void)
//{
//    mangled_ppc("??0c_cui_arena_message_screen_reference@@QAA@XZ");
//};

//public: void * c_cui_arena_message_screen_reference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_arena_message_screen_reference@@QAAPAXI@Z");
//};

//public: c_cui_challenge_toast_screen_reference::c_cui_challenge_toast_screen_reference(void)
//{
//    mangled_ppc("??0c_cui_challenge_toast_screen_reference@@QAA@XZ");
//};

//public: void * c_cui_challenge_toast_screen_reference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_challenge_toast_screen_reference@@QAAPAXI@Z");
//};

//public: c_cui_in_progress_reference::~c_cui_in_progress_reference(void)
//{
//    mangled_ppc("??1c_cui_in_progress_reference@@QAA@XZ");
//};

//public: c_cui_arena_message_screen_reference::~c_cui_arena_message_screen_reference(void)
//{
//    mangled_ppc("??1c_cui_arena_message_screen_reference@@QAA@XZ");
//};

//public: c_cui_challenge_toast_screen_reference::~c_cui_challenge_toast_screen_reference(void)
//{
//    mangled_ppc("??1c_cui_challenge_toast_screen_reference@@QAA@XZ");
//};

//public: bool c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QBA_NXZ");
//};

//public: bool c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QBA_NXZ");
//};

//public: class c_cui_arena_message_screen_reference * c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAAPAVc_cui_arena_message_screen_reference@@XZ");
//};

//public: bool c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QBA_NXZ");
//};

//public: class c_cui_challenge_toast_screen_reference * c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAAPAVc_cui_challenge_toast_screen_reference@@XZ");
//};

//public: bool c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QBA_NXZ");
//};

//public: class c_cui_dialog_reference * c_opaque_data<class c_cui_dialog_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAAPAVc_cui_dialog_reference@@XZ");
//};

//public: class c_cui_in_progress_reference * c_opaque_data<class c_cui_in_progress_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAAPAVc_cui_in_progress_reference@@XZ");
//};

//public: class c_cui_arena_message_screen_reference * c_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAAPAVc_cui_arena_message_screen_reference@@XZ");
//};

//public: class c_cui_challenge_toast_screen_reference * c_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAAPAVc_cui_challenge_toast_screen_reference@@XZ");
//};

//protected: class c_cui_screen_pipe * c_cui_screen_reference::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_cui_screen_reference@@IBAPAVc_cui_screen_pipe@@XZ");
//};

//public: class c_cui_screen_pipe * c_cui_screen_pipe_endpoint::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_cui_screen_pipe_endpoint@@QBAPAVc_cui_screen_pipe@@XZ");
//};

//public: long c_dialog_result_message::get_dialog_name(void) const
//{
//    mangled_ppc("?get_dialog_name@c_dialog_result_message@@QBAJXZ");
//};

//public: s_user_interface_networking_globals::s_user_interface_networking_globals(void)
//{
//    mangled_ppc("??0s_user_interface_networking_globals@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAA@XZ");
//};

//public: s_user_interface_networking_globals::~s_user_interface_networking_globals(void)
//{
//    mangled_ppc("??1s_user_interface_networking_globals@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>::~c_typed_opaque_data<class c_cui_dialog_reference, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_dialog_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>::~c_typed_opaque_data<class c_cui_in_progress_reference, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_in_progress_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>::~c_typed_opaque_data<class c_cui_arena_message_screen_reference, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_arena_message_screen_reference@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>::~c_typed_opaque_data<class c_cui_challenge_toast_screen_reference, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_challenge_toast_screen_reference@@$07$03@@QAA@XZ");
//};

//void user_interface_networking_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fuser_interface_networking_globals@@YAXXZ");
//};

