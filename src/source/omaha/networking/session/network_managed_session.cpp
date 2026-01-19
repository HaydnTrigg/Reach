/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_online_managed_session_flags const c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@2W4e_online_managed_session_flags@@B"
// public: static enum e_online_managed_session_operation_flags const c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@2W4e_online_managed_session_operation_flags@@B"
// struct s_online_session_manager_globals online_session_manager_globals; // "?online_session_manager_globals@@3Us_online_session_manager_globals@@A"

// void online_session_manager_initialize(void);
// void online_session_manager_dispose(void);
// bool managed_session_can_create_session(enum e_network_session_class);
// void online_session_manager_update(void);
// struct s_online_managed_session * managed_session_get(long);
// long managed_session_create_host(enum e_network_session_class, class c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_transport_platform, long, long, struct s_online_context const *, long);
// long managed_session_create_client(enum e_network_session_class, class c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_transport_platform, long, long, struct s_transport_secure_identifier const *, struct s_transport_secure_address const *, struct s_transport_secure_key const *, struct s_online_context const *, long);
// long managed_session_who_has_this_session_id(struct s_transport_secure_identifier const *);
// void managed_session_delete(long);
// void managed_session_mark_session_to_be_created_offline(long);
// void managed_session_reset_session(long, bool);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void managed_session_modify_slot_counts(long, long, long, bool, bool);
// void managed_session_add_players(long, unsigned __int64const *, bool const *, bool const *, long);
// void managed_session_remove_players(long, unsigned __int64const *, long);
// bool managed_session_synchronize_to_player_list(long, class c_network_session_membership *, enum e_managed_session_synchronization_failure_reason *);
// void managed_session_game_start(long);
// void managed_session_game_end(long);
// class c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver> managed_session_get_status(long);
// void managed_session_reset_players_add_status(long);
// bool managed_session_experienced_error(long);
// bool managed_session_get_security_information(long, bool, struct s_transport_session_description *, enum e_transport_platform *);
// long managed_session_retrieve_security_information(struct transport_address const *, enum e_transport_platform, struct s_transport_session_description *, struct s_transport_secure_address *);
// bool managed_session_get_id(long, struct s_transport_secure_identifier *);
// bool managed_session_compare_id(long, struct s_transport_secure_identifier const *);
// char const * managed_session_get_id_string(long);
// bool managed_session_is_host(long);
// bool managed_session_is_live(long);
// bool managed_session_is_master_session(long);
// long managed_session_count_master_sessions(void);
// bool managed_session_get_handle(long, void **);
// bool managed_session_handle_valid(void *);
// bool managed_session_get_nonce(long, unsigned __int64*);
// void managed_session_connect_client_to_new_host(long, struct s_transport_session_description const *, enum e_transport_platform);
// void managed_session_start_host_migration(long);
// void managed_session_get_new_host_information(long, struct s_transport_session_description *, enum e_transport_platform *);
// void managed_session_use_new_host(long);
// void managed_session_commit_new_host(long);
// void managed_session_cancel_new_host(long);
// void managed_session_validate(long);
// void managed_session_process_pending_operations(long);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void managed_session_delete_session_internal(long, struct s_online_managed_session *);
// void managed_session_create_session_internal(long, struct s_online_managed_session *);
// void managed_session_create_host_migration_internal(long, struct s_online_managed_session *);
// void managed_session_delete_host_migration_internal(long, struct s_online_managed_session *);
// bool managed_session_build_removal_xuid_list(long);
// bool managed_session_build_add_xuid_list(long);
// void add_to_player_list(struct s_online_session_player *, long, unsigned __int64const *, bool const *, bool const *, long);
// void remove_from_player_list(struct s_online_session_player *, long, unsigned __int64const *, long);
// long managed_session_allocate(void);
// public: c_managed_session_overlapped_task::c_managed_session_overlapped_task(char const *, long);
// public: virtual char const * c_managed_session_overlapped_task::get_context_string(void) const;
// public: virtual void c_managed_session_overlapped_task::success(unsigned long);
// public: virtual void c_managed_session_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_managed_session_overlapped_task::complete(void);
// merged_828E63F8;
// public: virtual c_managed_session_overlapped_task::~c_managed_session_overlapped_task(void);
// void managed_session_free(long);
// enum e_controller_index get_first_signed_in_controller_index(void);
// void managed_session_successful_creation_complete(long);
// void managed_session_creation_complete(long, bool, unsigned long);
// void managed_session_successful_delete_complete(long);
// void managed_session_deletion_complete(long, bool, unsigned long);
// void managed_session_successful_host_migration_creation_complete(long);
// void managed_session_successful_delete_host_migration_complete(long);
// void managed_session_host_migration_complete(long, bool, unsigned long);
// void managed_session_successful_modify_complete(long);
// void managed_session_modify_complete(long, bool, unsigned long);
// void managed_session_successful_players_add_complete(long);
// void managed_session_players_add_complete(long, bool, unsigned long);
// void managed_session_successful_players_remove_complete(long);
// void managed_session_players_remove_complete(long, bool, unsigned long);
// void managed_session_successful_game_start_complete(long);
// void managed_session_game_start_complete(long, bool, unsigned long);
// void managed_session_successful_game_end_complete(long);
// void managed_session_game_end_complete(long, bool, unsigned long);
// void managed_session_completely_reset_session_on_error(long);
// void managed_session_dump_session_state_for_errors(long);
// void managed_session_dump_session_state_for_errors_do_the_write(bool, struct _XSESSION_LOCAL_DETAILS *);
// void managed_session_verify_user_publicity(long);
// public: bool c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_online_session_player_flags) const;
// public: void c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::set(enum e_online_session_player_flags, bool);
// public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_online_session_flags) const;
// public: void c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_online_session_flags, bool);
// public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const;
// public: unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: void c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_online_managed_session_flags) const;
// public: void c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::set(enum e_online_managed_session_flags, bool);
// public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::test(enum e_online_managed_session_operation_flags) const;
// public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum e_online_managed_session_operation_flags, bool);
// public: class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> const &);
// public: unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_managed_session_creation_flags) const;
// public: static bool c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_online_session_player_flags);
// private: static unsigned short c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_session_player_flags);
// public: static bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_online_session_flags);
// public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_session_flags);
// public: static bool c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_online_managed_session_flags);
// private: static unsigned long c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_managed_session_flags);
// public: static bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_online_managed_session_operation_flags);
// public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_managed_session_operation_flags);
// private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_managed_session_operation_flags);
// private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_session_flags);
// public: s_online_session_manager_globals::s_online_session_manager_globals(void);
// public: s_online_managed_session::s_online_managed_session(void);
// public: c_managed_session_overlapped_task::c_managed_session_overlapped_task(void);
// public: s_online_session_manager_globals::~s_online_session_manager_globals(void);
// public: s_online_managed_session::~s_online_managed_session(void);
// void online_session_manager_globals::`dynamic atexit destructor'(void);

//void online_session_manager_initialize(void)
//{
//    mangled_ppc("?online_session_manager_initialize@@YAXXZ");
//};

//void online_session_manager_dispose(void)
//{
//    mangled_ppc("?online_session_manager_dispose@@YAXXZ");
//};

//bool managed_session_can_create_session(enum e_network_session_class)
//{
//    mangled_ppc("?managed_session_can_create_session@@YA_NW4e_network_session_class@@@Z");
//};

//void online_session_manager_update(void)
//{
//    mangled_ppc("?online_session_manager_update@@YAXXZ");
//};

//struct s_online_managed_session * managed_session_get(long)
//{
//    mangled_ppc("?managed_session_get@@YAPAUs_online_managed_session@@J@Z");
//};

//long managed_session_create_host(enum e_network_session_class, class c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_transport_platform, long, long, struct s_online_context const *, long)
//{
//    mangled_ppc("?managed_session_create_host@@YAJW4e_network_session_class@@V?$c_flags@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_transport_platform@@JJPBUs_online_context@@J@Z");
//};

//long managed_session_create_client(enum e_network_session_class, class c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_transport_platform, long, long, struct s_transport_secure_identifier const *, struct s_transport_secure_address const *, struct s_transport_secure_key const *, struct s_online_context const *, long)
//{
//    mangled_ppc("?managed_session_create_client@@YAJW4e_network_session_class@@V?$c_flags@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_transport_platform@@JJPBUs_transport_secure_identifier@@PBUs_transport_secure_address@@PBUs_transport_secure_key@@PBUs_online_context@@J@Z");
//};

//long managed_session_who_has_this_session_id(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?managed_session_who_has_this_session_id@@YAJPBUs_transport_secure_identifier@@@Z");
//};

//void managed_session_delete(long)
//{
//    mangled_ppc("?managed_session_delete@@YAXJ@Z");
//};

//void managed_session_mark_session_to_be_created_offline(long)
//{
//    mangled_ppc("?managed_session_mark_session_to_be_created_offline@@YAXJ@Z");
//};

//void managed_session_reset_session(long, bool)
//{
//    mangled_ppc("?managed_session_reset_session@@YAXJ_N@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void managed_session_modify_slot_counts(long, long, long, bool, bool)
//{
//    mangled_ppc("?managed_session_modify_slot_counts@@YAXJJJ_N0@Z");
//};

//void managed_session_add_players(long, unsigned __int64const *, bool const *, bool const *, long)
//{
//    mangled_ppc("?managed_session_add_players@@YAXJPB_KPB_N1J@Z");
//};

//void managed_session_remove_players(long, unsigned __int64const *, long)
//{
//    mangled_ppc("?managed_session_remove_players@@YAXJPB_KJ@Z");
//};

//bool managed_session_synchronize_to_player_list(long, class c_network_session_membership *, enum e_managed_session_synchronization_failure_reason *)
//{
//    mangled_ppc("?managed_session_synchronize_to_player_list@@YA_NJPAVc_network_session_membership@@PAW4e_managed_session_synchronization_failure_reason@@@Z");
//};

//void managed_session_game_start(long)
//{
//    mangled_ppc("?managed_session_game_start@@YAXJ@Z");
//};

//void managed_session_game_end(long)
//{
//    mangled_ppc("?managed_session_game_end@@YAXJ@Z");
//};

//class c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver> managed_session_get_status(long)
//{
//    mangled_ppc("?managed_session_get_status@@YA?AV?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@J@Z");
//};

//void managed_session_reset_players_add_status(long)
//{
//    mangled_ppc("?managed_session_reset_players_add_status@@YAXJ@Z");
//};

//bool managed_session_experienced_error(long)
//{
//    mangled_ppc("?managed_session_experienced_error@@YA_NJ@Z");
//};

//bool managed_session_get_security_information(long, bool, struct s_transport_session_description *, enum e_transport_platform *)
//{
//    mangled_ppc("?managed_session_get_security_information@@YA_NJ_NPAUs_transport_session_description@@PAW4e_transport_platform@@@Z");
//};

//long managed_session_retrieve_security_information(struct transport_address const *, enum e_transport_platform, struct s_transport_session_description *, struct s_transport_secure_address *)
//{
//    mangled_ppc("?managed_session_retrieve_security_information@@YAJPBUtransport_address@@W4e_transport_platform@@PAUs_transport_session_description@@PAUs_transport_secure_address@@@Z");
//};

//bool managed_session_get_id(long, struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?managed_session_get_id@@YA_NJPAUs_transport_secure_identifier@@@Z");
//};

//bool managed_session_compare_id(long, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?managed_session_compare_id@@YA_NJPBUs_transport_secure_identifier@@@Z");
//};

//char const * managed_session_get_id_string(long)
//{
//    mangled_ppc("?managed_session_get_id_string@@YAPBDJ@Z");
//};

//bool managed_session_is_host(long)
//{
//    mangled_ppc("?managed_session_is_host@@YA_NJ@Z");
//};

//bool managed_session_is_live(long)
//{
//    mangled_ppc("?managed_session_is_live@@YA_NJ@Z");
//};

//bool managed_session_is_master_session(long)
//{
//    mangled_ppc("?managed_session_is_master_session@@YA_NJ@Z");
//};

//long managed_session_count_master_sessions(void)
//{
//    mangled_ppc("?managed_session_count_master_sessions@@YAJXZ");
//};

//bool managed_session_get_handle(long, void **)
//{
//    mangled_ppc("?managed_session_get_handle@@YA_NJPAPAX@Z");
//};

//bool managed_session_handle_valid(void *)
//{
//    mangled_ppc("?managed_session_handle_valid@@YA_NPAX@Z");
//};

//bool managed_session_get_nonce(long, unsigned __int64*)
//{
//    mangled_ppc("?managed_session_get_nonce@@YA_NJPA_K@Z");
//};

//void managed_session_connect_client_to_new_host(long, struct s_transport_session_description const *, enum e_transport_platform)
//{
//    mangled_ppc("?managed_session_connect_client_to_new_host@@YAXJPBUs_transport_session_description@@W4e_transport_platform@@@Z");
//};

//void managed_session_start_host_migration(long)
//{
//    mangled_ppc("?managed_session_start_host_migration@@YAXJ@Z");
//};

//void managed_session_get_new_host_information(long, struct s_transport_session_description *, enum e_transport_platform *)
//{
//    mangled_ppc("?managed_session_get_new_host_information@@YAXJPAUs_transport_session_description@@PAW4e_transport_platform@@@Z");
//};

//void managed_session_use_new_host(long)
//{
//    mangled_ppc("?managed_session_use_new_host@@YAXJ@Z");
//};

//void managed_session_commit_new_host(long)
//{
//    mangled_ppc("?managed_session_commit_new_host@@YAXJ@Z");
//};

//void managed_session_cancel_new_host(long)
//{
//    mangled_ppc("?managed_session_cancel_new_host@@YAXJ@Z");
//};

//void managed_session_validate(long)
//{
//    mangled_ppc("?managed_session_validate@@YAXJ@Z");
//};

//void managed_session_process_pending_operations(long)
//{
//    mangled_ppc("?managed_session_process_pending_operations@@YAXJ@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void managed_session_delete_session_internal(long, struct s_online_managed_session *)
//{
//    mangled_ppc("?managed_session_delete_session_internal@@YAXJPAUs_online_managed_session@@@Z");
//};

//void managed_session_create_session_internal(long, struct s_online_managed_session *)
//{
//    mangled_ppc("?managed_session_create_session_internal@@YAXJPAUs_online_managed_session@@@Z");
//};

//void managed_session_create_host_migration_internal(long, struct s_online_managed_session *)
//{
//    mangled_ppc("?managed_session_create_host_migration_internal@@YAXJPAUs_online_managed_session@@@Z");
//};

//void managed_session_delete_host_migration_internal(long, struct s_online_managed_session *)
//{
//    mangled_ppc("?managed_session_delete_host_migration_internal@@YAXJPAUs_online_managed_session@@@Z");
//};

//bool managed_session_build_removal_xuid_list(long)
//{
//    mangled_ppc("?managed_session_build_removal_xuid_list@@YA_NJ@Z");
//};

//bool managed_session_build_add_xuid_list(long)
//{
//    mangled_ppc("?managed_session_build_add_xuid_list@@YA_NJ@Z");
//};

//void add_to_player_list(struct s_online_session_player *, long, unsigned __int64const *, bool const *, bool const *, long)
//{
//    mangled_ppc("?add_to_player_list@@YAXPAUs_online_session_player@@JPB_KPB_N2J@Z");
//};

//void remove_from_player_list(struct s_online_session_player *, long, unsigned __int64const *, long)
//{
//    mangled_ppc("?remove_from_player_list@@YAXPAUs_online_session_player@@JPB_KJ@Z");
//};

//long managed_session_allocate(void)
//{
//    mangled_ppc("?managed_session_allocate@@YAJXZ");
//};

//public: c_managed_session_overlapped_task::c_managed_session_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_managed_session_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_managed_session_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_managed_session_overlapped_task@@UBAPBDXZ");
//};

//public: virtual void c_managed_session_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_managed_session_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_managed_session_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_managed_session_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_managed_session_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_managed_session_overlapped_task@@UAAXXZ");
//};

//merged_828E63F8
//{
//    mangled_ppc("merged_828E63F8");
//};

//public: virtual c_managed_session_overlapped_task::~c_managed_session_overlapped_task(void)
//{
//    mangled_ppc("??1c_managed_session_overlapped_task@@UAA@XZ");
//};

//void managed_session_free(long)
//{
//    mangled_ppc("?managed_session_free@@YAXJ@Z");
//};

//enum e_controller_index get_first_signed_in_controller_index(void)
//{
//    mangled_ppc("?get_first_signed_in_controller_index@@YA?AW4e_controller_index@@XZ");
//};

//void managed_session_successful_creation_complete(long)
//{
//    mangled_ppc("?managed_session_successful_creation_complete@@YAXJ@Z");
//};

//void managed_session_creation_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_creation_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_delete_complete(long)
//{
//    mangled_ppc("?managed_session_successful_delete_complete@@YAXJ@Z");
//};

//void managed_session_deletion_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_deletion_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_host_migration_creation_complete(long)
//{
//    mangled_ppc("?managed_session_successful_host_migration_creation_complete@@YAXJ@Z");
//};

//void managed_session_successful_delete_host_migration_complete(long)
//{
//    mangled_ppc("?managed_session_successful_delete_host_migration_complete@@YAXJ@Z");
//};

//void managed_session_host_migration_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_host_migration_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_modify_complete(long)
//{
//    mangled_ppc("?managed_session_successful_modify_complete@@YAXJ@Z");
//};

//void managed_session_modify_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_modify_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_players_add_complete(long)
//{
//    mangled_ppc("?managed_session_successful_players_add_complete@@YAXJ@Z");
//};

//void managed_session_players_add_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_players_add_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_players_remove_complete(long)
//{
//    mangled_ppc("?managed_session_successful_players_remove_complete@@YAXJ@Z");
//};

//void managed_session_players_remove_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_players_remove_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_game_start_complete(long)
//{
//    mangled_ppc("?managed_session_successful_game_start_complete@@YAXJ@Z");
//};

//void managed_session_game_start_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_game_start_complete@@YAXJ_NK@Z");
//};

//void managed_session_successful_game_end_complete(long)
//{
//    mangled_ppc("?managed_session_successful_game_end_complete@@YAXJ@Z");
//};

//void managed_session_game_end_complete(long, bool, unsigned long)
//{
//    mangled_ppc("?managed_session_game_end_complete@@YAXJ_NK@Z");
//};

//void managed_session_completely_reset_session_on_error(long)
//{
//    mangled_ppc("?managed_session_completely_reset_session_on_error@@YAXJ@Z");
//};

//void managed_session_dump_session_state_for_errors(long)
//{
//    mangled_ppc("?managed_session_dump_session_state_for_errors@@YAXJ@Z");
//};

//void managed_session_dump_session_state_for_errors_do_the_write(bool, struct _XSESSION_LOCAL_DETAILS *)
//{
//    mangled_ppc("?managed_session_dump_session_state_for_errors_do_the_write@@YAX_NPAU_XSESSION_LOCAL_DETAILS@@@Z");
//};

//void managed_session_verify_user_publicity(long)
//{
//    mangled_ppc("?managed_session_verify_user_publicity@@YAXJ@Z");
//};

//public: bool c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_online_session_player_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_session_player_flags@@G$02Us_default_enum_string_resolver@@@@QBA_NW4e_online_session_player_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::set(enum e_online_session_player_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_session_player_flags@@G$02Us_default_enum_string_resolver@@@@QAAXW4e_online_session_player_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_online_session_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NW4e_online_session_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_online_session_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QAAXW4e_online_session_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: void c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_online_managed_session_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@QBA_NW4e_online_managed_session_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::set(enum e_online_managed_session_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@QAAXW4e_online_managed_session_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::test(enum e_online_managed_session_operation_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_online_managed_session_operation_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set(enum e_online_managed_session_operation_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXW4e_online_managed_session_operation_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_managed_session_creation_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_managed_session_creation_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_online_session_player_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_session_player_flags@@G$02Us_default_enum_string_resolver@@@@SA_NW4e_online_session_player_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_session_player_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_session_player_flags@@G$02Us_default_enum_string_resolver@@@@CAGW4e_online_session_player_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_online_session_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@SA_NW4e_online_session_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_session_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@CAGW4e_online_session_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_online_managed_session_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@SA_NW4e_online_managed_session_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_online_managed_session_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_managed_session_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_managed_session_flags@@K$0BD@Us_default_enum_string_resolver@@@@CAKW4e_online_managed_session_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_online_managed_session_operation_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@SA_NW4e_online_managed_session_operation_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_managed_session_operation_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@CAGW4e_online_managed_session_operation_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_online_managed_session_operation_flags, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_managed_session_operation_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_online_managed_session_operation_flags@@G$0L@Us_default_enum_string_resolver@@@@CAGW4e_online_managed_session_operation_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_session_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@CAGW4e_online_session_flags@@@Z");
//};

//public: s_online_session_manager_globals::s_online_session_manager_globals(void)
//{
//    mangled_ppc("??0s_online_session_manager_globals@@QAA@XZ");
//};

//public: s_online_managed_session::s_online_managed_session(void)
//{
//    mangled_ppc("??0s_online_managed_session@@QAA@XZ");
//};

//public: c_managed_session_overlapped_task::c_managed_session_overlapped_task(void)
//{
//    mangled_ppc("??0c_managed_session_overlapped_task@@QAA@XZ");
//};

//public: s_online_session_manager_globals::~s_online_session_manager_globals(void)
//{
//    mangled_ppc("??1s_online_session_manager_globals@@QAA@XZ");
//};

//public: s_online_managed_session::~s_online_managed_session(void)
//{
//    mangled_ppc("??1s_online_managed_session@@QAA@XZ");
//};

//void online_session_manager_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fonline_session_manager_globals@@YAXXZ");
//};

