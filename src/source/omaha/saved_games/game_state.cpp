/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_big_flags_typed_no_init<long, 320>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0BEA@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 320>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0BEA@@@2JB"
// public: static long const s_static_array<struct s_cache_file_local_resource_location, 1200>::k_element_count; // "?k_element_count@?$s_static_array@Us_cache_file_local_resource_location@@$0ELA@@@2JB"
// public: static long const s_static_array<struct s_cache_file_insertion_point_resource_usage, 12>::k_element_count; // "?k_element_count@?$s_static_array@Us_cache_file_insertion_point_resource_usage@@$0M@@@2JB"
// public: static enum e_cache_file_header_bit const c_flags_no_init<enum e_cache_file_header_bit, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_cache_file_header_bit@@E$01Us_default_enum_string_resolver@@@@2W4e_cache_file_header_bit@@B"
// public: static enum e_cache_file_shared_file_type const c_flags_no_init<enum e_cache_file_shared_file_type, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_cache_file_shared_file_type@@E$02Us_default_enum_string_resolver@@@@2W4e_cache_file_shared_file_type@@B"
// public: static long const s_static_array<struct s_cache_file_section_file_bounds, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_cache_file_section_file_bounds@@$03@@2JB"
// char const *const k_signature_debug_write_filename; // "?k_signature_debug_write_filename@@3PBDB"
// char const *const k_signature_debug_read_filename; // "?k_signature_debug_read_filename@@3PBDB"
// bool game_state_verify_on_read; // "?game_state_verify_on_read@@3_NA"
// bool game_state_allow_insecure; // "?game_state_allow_insecure@@3_NA"
// bool recover_saved_games_hack; // "?recover_saved_games_hack@@3_NA"
// bool game_state_verify_on_write; // "?game_state_verify_on_write@@3_NA"
// class c_restricted_section *g_restricted_section; // "?g_restricted_section@@3PAVc_restricted_section@@A"
// class c_game_state_compressor_callback g_game_state_compressor_optional_cache_callback; // "?g_game_state_compressor_optional_cache_callback@@3Vc_game_state_compressor_callback@@A"
// class c_interlocked_int32g_game_state_locked; // "?g_game_state_locked@@3Vc_interlocked_int32@@A"
// class c_gamestate_deterministic_allocation_callbacks g_gamestate_deterministic_allocation_callbacks; // "?g_gamestate_deterministic_allocation_callbacks@@3Vc_gamestate_deterministic_allocation_callbacks@@A"
// class c_gamestate_nondeterministic_allocation_callbacks g_gamestate_nondeterministic_allocation_callbacks; // "?g_gamestate_nondeterministic_allocation_callbacks@@3Vc_gamestate_nondeterministic_allocation_callbacks@@A"

// void game_state_reset_mapping(long);
// void game_state_shell_gobble_first_physical_allocation(void);
// void game_state_shell_initialize(void);
// void game_state_set_header_address(void *);
// void initialize_game_state_section(long, unsigned int, unsigned char **, unsigned long *, enum e_critical_sections, enum e_synchronization_semaphore);
// void game_state_shell_dispose(void);
// void game_state_initialize(void);
// void game_state_dispose(void);
// void game_state_initialize_for_new_map(void);
// public: void s_game_state_runtime_state::initialize(void);
// void game_state_dispose_from_old_map(void);
// void game_state_initialize_for_new_structure_bsp(unsigned long);
// void game_state_dispose_from_old_structure_bsp(unsigned long);
// void game_state_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void game_state_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void game_state_handle_saved_game(long);
// void game_state_save(void);
// void game_state_prepare_for_revert(void);
// void game_state_revert(unsigned long);
// public: s_game_state_header::s_game_state_header(void);
// void game_state_try_and_load_from_persistent_storage(enum e_controller_index);
// void saved_film_manager_notify_gamestate_load(enum e_saved_film_game_state_load_source);
// bool game_state_can_save_to_persistent_storage(void);
// void game_state_save_to_persistent_storage_blocking(void);
// void game_state_save_core(char const *);
// void game_state_load_core(char const *);
// public: static void c_hue_saturation_control::copy_from_gamestate(void);
// bool game_state_reverted(void);
// void game_state_lock(bool);
// bool game_state_is_locked(void);
// bool game_state_get_game_options_from_core(char const *, struct s_game_options *);
// bool game_state_get_scenario_path_from_core(char const *, char *, long);
// void const * game_state_get_buffer_address(long *);
// void const * game_state_with_mirrors_get_buffer_address(long *);
// void game_state_buffer_handle_read(void);
// void game_state_preserve(void);
// void game_state_toggle_periodic_uploading_to_debug_server(bool);
// char const * game_state_get_test_option_string(void);
// void game_state_set_test_options(char const *);
// void game_state_force_immediate_save_on_core_load(bool);
// void game_state_upload_core_name(char const *);
// void game_state_upload_core(void);
// bool game_state_debug_server_file_uploading_enabled(class c_static_string<256> *);
// long game_state_upload_debug_init(long, struct s_file_reference *);
// void game_state_get_core_file_reference(char const *, struct s_file_reference *);
// class c_game_state_compressor * game_state_get_compressor(void);
// bool game_state_compressor_lock_pending(void);
// void game_state_compressor_lock_update(void);
// bool game_state_header_valid_for_saving(struct s_game_state_header const *);
// bool game_state_validate_and_prepare_to_load_header(struct s_game_state_header *);
// bool create_file_from_buffer(char const *, char const *);
// struct s_network_http_request_hash const * game_state_security_get_signature(void *);
// void game_state_get_base_address_and_header(void *, struct s_game_state_header **, void **);
// void game_state_security_write_signature(bool, void *);
// void game_state_security_invalidate_signature(void);
// bool game_state_security_verify_signature_secure(void *);
// bool game_state_security_verify_signature_insecure(void *);
// bool player_identifier_exists_in_game_header(struct s_player_identifier const *, struct s_game_state_header const *);
// unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier);
// bool game_state_header_valid(struct s_game_state_header const *);
// bool game_state_header_prepare_to_load(struct s_game_state_header *, bool, bool, bool *);
// void game_state_verify(void);
// bool game_state_header_matches(struct s_game_state_header const *, struct s_game_state_header const *);
// bool game_state_security_verify_signature_internal(void *, bool);
// void game_state_security_generate_debug_state(void const *, long, unsigned char const *, long, struct s_network_http_request_hash const *, char const *, struct s_signature_debug_state *);
// void game_state_security_compare_debug_states(struct s_signature_debug_state const *, struct s_signature_debug_state const *);
// long upload_gamestate_allocation_file_start(long, struct s_file_reference *);
// void game_state_set_revert_time(long);
// bool game_state_write_core(char const *, void const *, unsigned long);
// bool game_state_read_core(char const *, void *, unsigned long);
// void game_state_restore_internal(long);
// void game_state_get_state_for_film_clip(struct s_game_state_runtime_state *, struct s_game_state_file_storage_manfiest *);
// void game_state_set_state_for_film_clip(struct s_game_state_runtime_state const *, struct s_game_state_file_storage_manfiest const *);
// void game_state_notify_film_checkpoint_allocated(long, struct s_game_state_runtime_state *, struct s_game_state_file_storage_manfiest *);
// void game_state_notify_film_checkpoint_released(long, struct s_game_state_file_storage_manfiest const *);
// void game_state_notify_film_checkpoint_reverted(long, struct s_game_state_runtime_state const *, struct s_game_state_file_storage_manfiest const *);
// bool game_state_header_matches_current_network_session_settings(struct s_game_state_header const *);
// bool game_state_read_header_from_persistent_storage_blocking(enum e_controller_index, struct s_game_state_header *);
// bool game_state_read_from_persistent_storage_blocking(enum e_controller_index, void *, unsigned long);
// void game_state_write_to_persistent_storage_blocking(struct s_game_state_header const *, long, void const *, long);
// public: c_game_state_compressor::c_game_state_compressor(void);
// public: void c_game_state_compressor::initialize(void);
// public: void c_game_state_compressor::dispose(void);
// public: bool c_game_state_compressor::lock(void);
// public: void c_game_state_compressor::set_lock_pending(bool);
// public: void c_game_state_compressor::unlock(void);
// public: bool c_game_state_compressor::is_locked(void) const;
// public: bool c_game_state_compressor::is_lock_pending(void) const;
// public: bool c_game_state_compressor::game_state_get_compressed(bool, enum e_game_state_compression_level, unsigned char **, long *);
// public: bool c_game_state_compressor::game_state_get_compressed_from_buffer(enum e_game_state_compression_level, void const *, long, unsigned char **, long *);
// private: bool c_game_state_compressor::compress_internal(enum e_game_state_compression_level, void const *, long);
// public: void c_game_state_compressor::game_state_get_storage(unsigned char **, long *, unsigned char **, long *);
// public: long c_game_state_compressor::game_state_get_compressed_size(void) const;
// public: void c_game_state_compressor::game_state_set_compressed_size(long);
// public: unsigned long c_game_state_compressor::game_state_get_compressed_checksum(void) const;
// public: bool c_game_state_compressor::game_state_decompress_buffer(bool, bool, long);
// void saved_film_manager_notify_gamestate_decompression_before_load_procs(void);
// void saved_film_manager_notify_gamestate_decompression_after_load_procs(void);
// public: long c_game_state_compressor::locked_get_compressed_chunk(long, unsigned char const **, long);
// public: void c_game_state_compressor::locked_write_compressed_chunk(long, unsigned char const *, long);
// private: bool c_game_state_compressor::allocate_buffer(void);
// private: void c_game_state_compressor::deallocate_buffer(void);
// public: virtual char const * c_game_state_compressor_callback::get_name(void);
// public: virtual void c_game_state_compressor_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *);
// public: virtual void c_game_state_compressor_callback::idle(void const *);
// public: virtual void c_game_state_compressor_callback::terminate(void const *);
// void game_state_store_tag_file_checksum(long);
// public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const;
// public: struct game_player_options const & s_static_array<struct game_player_options, 16>::operator[]<long>(long) const;
// public: static bool s_static_array<struct game_player_options, 16>::valid<long>(long);
// public: c_game_state_compressor_callback::c_game_state_compressor_callback(void);
// public: c_optional_cache_user_callback::c_optional_cache_user_callback(void);
// public: virtual void c_optional_cache_user_callback::idle(void const *);
// public: s_game_state_globals::s_game_state_globals(void);
// public: c_gamestate_deterministic_allocation_callbacks::c_gamestate_deterministic_allocation_callbacks(void);
// public: virtual long c_restricted_memory_callbacks::filter_base_offset(long);
// public: virtual unsigned int c_gamestate_deterministic_allocation_callbacks::filter_size_request(unsigned int);
// public: virtual long c_gamestate_deterministic_allocation_callbacks::filter_base_offset(long, long);
// public: virtual void c_gamestate_deterministic_allocation_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int);
// public: long c_restricted_memory::get_region_index(void) const;
// public: virtual void c_gamestate_deterministic_allocation_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int);
// public: c_restricted_memory_callbacks::c_restricted_memory_callbacks(void);
// public: virtual unsigned int c_restricted_memory_callbacks::filter_size_request(unsigned int);
// public: virtual void c_restricted_memory_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int);
// public: virtual void c_restricted_memory_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int);
// void game_state_allocation_record(long, char const *, char const *, long, bool);
// public: c_gamestate_nondeterministic_allocation_callbacks::c_gamestate_nondeterministic_allocation_callbacks(void);
// public: virtual unsigned int c_gamestate_nondeterministic_allocation_callbacks::filter_size_request(unsigned int);
// public: virtual long c_gamestate_nondeterministic_allocation_callbacks::filter_base_offset(long);
// public: virtual void c_gamestate_nondeterministic_allocation_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int);
// public: virtual void c_gamestate_nondeterministic_allocation_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int);
// void g_restricted_section::`dynamic atexit destructor'(void);
// void g_game_state_locked::`dynamic atexit destructor'(void);

//void game_state_reset_mapping(long)
//{
//    mangled_ppc("?game_state_reset_mapping@@YAXJ@Z");
//};

//void game_state_shell_gobble_first_physical_allocation(void)
//{
//    mangled_ppc("?game_state_shell_gobble_first_physical_allocation@@YAXXZ");
//};

//void game_state_shell_initialize(void)
//{
//    mangled_ppc("?game_state_shell_initialize@@YAXXZ");
//};

//void game_state_set_header_address(void *)
//{
//    mangled_ppc("?game_state_set_header_address@@YAXPAX@Z");
//};

//void initialize_game_state_section(long, unsigned int, unsigned char **, unsigned long *, enum e_critical_sections, enum e_synchronization_semaphore)
//{
//    mangled_ppc("?initialize_game_state_section@@YAXJIPAPAEPAKW4e_critical_sections@@W4e_synchronization_semaphore@@@Z");
//};

//void game_state_shell_dispose(void)
//{
//    mangled_ppc("?game_state_shell_dispose@@YAXXZ");
//};

//void game_state_initialize(void)
//{
//    mangled_ppc("?game_state_initialize@@YAXXZ");
//};

//void game_state_dispose(void)
//{
//    mangled_ppc("?game_state_dispose@@YAXXZ");
//};

//void game_state_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_state_initialize_for_new_map@@YAXXZ");
//};

//public: void s_game_state_runtime_state::initialize(void)
//{
//    mangled_ppc("?initialize@s_game_state_runtime_state@@QAAXXZ");
//};

//void game_state_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_state_dispose_from_old_map@@YAXXZ");
//};

//void game_state_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?game_state_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void game_state_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?game_state_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void game_state_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?game_state_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void game_state_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?game_state_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void game_state_handle_saved_game(long)
//{
//    mangled_ppc("?game_state_handle_saved_game@@YAXJ@Z");
//};

//void game_state_save(void)
//{
//    mangled_ppc("?game_state_save@@YAXXZ");
//};

//void game_state_prepare_for_revert(void)
//{
//    mangled_ppc("?game_state_prepare_for_revert@@YAXXZ");
//};

//void game_state_revert(unsigned long)
//{
//    mangled_ppc("?game_state_revert@@YAXK@Z");
//};

//public: s_game_state_header::s_game_state_header(void)
//{
//    mangled_ppc("??0s_game_state_header@@QAA@XZ");
//};

//void game_state_try_and_load_from_persistent_storage(enum e_controller_index)
//{
//    mangled_ppc("?game_state_try_and_load_from_persistent_storage@@YAXW4e_controller_index@@@Z");
//};

//void saved_film_manager_notify_gamestate_load(enum e_saved_film_game_state_load_source)
//{
//    mangled_ppc("?saved_film_manager_notify_gamestate_load@@YAXW4e_saved_film_game_state_load_source@@@Z");
//};

//bool game_state_can_save_to_persistent_storage(void)
//{
//    mangled_ppc("?game_state_can_save_to_persistent_storage@@YA_NXZ");
//};

//void game_state_save_to_persistent_storage_blocking(void)
//{
//    mangled_ppc("?game_state_save_to_persistent_storage_blocking@@YAXXZ");
//};

//void game_state_save_core(char const *)
//{
//    mangled_ppc("?game_state_save_core@@YAXPBD@Z");
//};

//void game_state_load_core(char const *)
//{
//    mangled_ppc("?game_state_load_core@@YAXPBD@Z");
//};

//public: static void c_hue_saturation_control::copy_from_gamestate(void)
//{
//    mangled_ppc("?copy_from_gamestate@c_hue_saturation_control@@SAXXZ");
//};

//bool game_state_reverted(void)
//{
//    mangled_ppc("?game_state_reverted@@YA_NXZ");
//};

//void game_state_lock(bool)
//{
//    mangled_ppc("?game_state_lock@@YAX_N@Z");
//};

//bool game_state_is_locked(void)
//{
//    mangled_ppc("?game_state_is_locked@@YA_NXZ");
//};

//bool game_state_get_game_options_from_core(char const *, struct s_game_options *)
//{
//    mangled_ppc("?game_state_get_game_options_from_core@@YA_NPBDPAUs_game_options@@@Z");
//};

//bool game_state_get_scenario_path_from_core(char const *, char *, long)
//{
//    mangled_ppc("?game_state_get_scenario_path_from_core@@YA_NPBDPADJ@Z");
//};

//void const * game_state_get_buffer_address(long *)
//{
//    mangled_ppc("?game_state_get_buffer_address@@YAPBXPAJ@Z");
//};

//void const * game_state_with_mirrors_get_buffer_address(long *)
//{
//    mangled_ppc("?game_state_with_mirrors_get_buffer_address@@YAPBXPAJ@Z");
//};

//void game_state_buffer_handle_read(void)
//{
//    mangled_ppc("?game_state_buffer_handle_read@@YAXXZ");
//};

//void game_state_preserve(void)
//{
//    mangled_ppc("?game_state_preserve@@YAXXZ");
//};

//void game_state_toggle_periodic_uploading_to_debug_server(bool)
//{
//    mangled_ppc("?game_state_toggle_periodic_uploading_to_debug_server@@YAX_N@Z");
//};

//char const * game_state_get_test_option_string(void)
//{
//    mangled_ppc("?game_state_get_test_option_string@@YAPBDXZ");
//};

//void game_state_set_test_options(char const *)
//{
//    mangled_ppc("?game_state_set_test_options@@YAXPBD@Z");
//};

//void game_state_force_immediate_save_on_core_load(bool)
//{
//    mangled_ppc("?game_state_force_immediate_save_on_core_load@@YAX_N@Z");
//};

//void game_state_upload_core_name(char const *)
//{
//    mangled_ppc("?game_state_upload_core_name@@YAXPBD@Z");
//};

//void game_state_upload_core(void)
//{
//    mangled_ppc("?game_state_upload_core@@YAXXZ");
//};

//bool game_state_debug_server_file_uploading_enabled(class c_static_string<256> *)
//{
//    mangled_ppc("?game_state_debug_server_file_uploading_enabled@@YA_NPAV?$c_static_string@$0BAA@@@@Z");
//};

//long game_state_upload_debug_init(long, struct s_file_reference *)
//{
//    mangled_ppc("?game_state_upload_debug_init@@YAJJPAUs_file_reference@@@Z");
//};

//void game_state_get_core_file_reference(char const *, struct s_file_reference *)
//{
//    mangled_ppc("?game_state_get_core_file_reference@@YAXPBDPAUs_file_reference@@@Z");
//};

//class c_game_state_compressor * game_state_get_compressor(void)
//{
//    mangled_ppc("?game_state_get_compressor@@YAPAVc_game_state_compressor@@XZ");
//};

//bool game_state_compressor_lock_pending(void)
//{
//    mangled_ppc("?game_state_compressor_lock_pending@@YA_NXZ");
//};

//void game_state_compressor_lock_update(void)
//{
//    mangled_ppc("?game_state_compressor_lock_update@@YAXXZ");
//};

//bool game_state_header_valid_for_saving(struct s_game_state_header const *)
//{
//    mangled_ppc("?game_state_header_valid_for_saving@@YA_NPBUs_game_state_header@@@Z");
//};

//bool game_state_validate_and_prepare_to_load_header(struct s_game_state_header *)
//{
//    mangled_ppc("?game_state_validate_and_prepare_to_load_header@@YA_NPAUs_game_state_header@@@Z");
//};

//bool create_file_from_buffer(char const *, char const *)
//{
//    mangled_ppc("?create_file_from_buffer@@YA_NPBD0@Z");
//};

//struct s_network_http_request_hash const * game_state_security_get_signature(void *)
//{
//    mangled_ppc("?game_state_security_get_signature@@YAPBUs_network_http_request_hash@@PAX@Z");
//};

//void game_state_get_base_address_and_header(void *, struct s_game_state_header **, void **)
//{
//    mangled_ppc("?game_state_get_base_address_and_header@@YAXPAXPAPAUs_game_state_header@@PAPAX@Z");
//};

//void game_state_security_write_signature(bool, void *)
//{
//    mangled_ppc("?game_state_security_write_signature@@YAX_NPAX@Z");
//};

//void game_state_security_invalidate_signature(void)
//{
//    mangled_ppc("?game_state_security_invalidate_signature@@YAXXZ");
//};

//bool game_state_security_verify_signature_secure(void *)
//{
//    mangled_ppc("?game_state_security_verify_signature_secure@@YA_NPAX@Z");
//};

//bool game_state_security_verify_signature_insecure(void *)
//{
//    mangled_ppc("?game_state_security_verify_signature_insecure@@YA_NPAX@Z");
//};

//bool player_identifier_exists_in_game_header(struct s_player_identifier const *, struct s_game_state_header const *)
//{
//    mangled_ppc("?player_identifier_exists_in_game_header@@YA_NPBUs_player_identifier@@PBUs_game_state_header@@@Z");
//};

//unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier)
//{
//    mangled_ppc("?player_identifier_extract_actual_player_identifier@@YA_KUs_player_identifier@@@Z");
//};

//bool game_state_header_valid(struct s_game_state_header const *)
//{
//    mangled_ppc("?game_state_header_valid@@YA_NPBUs_game_state_header@@@Z");
//};

//bool game_state_header_prepare_to_load(struct s_game_state_header *, bool, bool, bool *)
//{
//    mangled_ppc("?game_state_header_prepare_to_load@@YA_NPAUs_game_state_header@@_N1PA_N@Z");
//};

//void game_state_verify(void)
//{
//    mangled_ppc("?game_state_verify@@YAXXZ");
//};

//bool game_state_header_matches(struct s_game_state_header const *, struct s_game_state_header const *)
//{
//    mangled_ppc("?game_state_header_matches@@YA_NPBUs_game_state_header@@0@Z");
//};

//bool game_state_security_verify_signature_internal(void *, bool)
//{
//    mangled_ppc("?game_state_security_verify_signature_internal@@YA_NPAX_N@Z");
//};

//void game_state_security_generate_debug_state(void const *, long, unsigned char const *, long, struct s_network_http_request_hash const *, char const *, struct s_signature_debug_state *)
//{
//    mangled_ppc("?game_state_security_generate_debug_state@@YAXPBXJPBEJPBUs_network_http_request_hash@@PBDPAUs_signature_debug_state@@@Z");
//};

//void game_state_security_compare_debug_states(struct s_signature_debug_state const *, struct s_signature_debug_state const *)
//{
//    mangled_ppc("?game_state_security_compare_debug_states@@YAXPBUs_signature_debug_state@@0@Z");
//};

//long upload_gamestate_allocation_file_start(long, struct s_file_reference *)
//{
//    mangled_ppc("?upload_gamestate_allocation_file_start@@YAJJPAUs_file_reference@@@Z");
//};

//void game_state_set_revert_time(long)
//{
//    mangled_ppc("?game_state_set_revert_time@@YAXJ@Z");
//};

//bool game_state_write_core(char const *, void const *, unsigned long)
//{
//    mangled_ppc("?game_state_write_core@@YA_NPBDPBXK@Z");
//};

//bool game_state_read_core(char const *, void *, unsigned long)
//{
//    mangled_ppc("?game_state_read_core@@YA_NPBDPAXK@Z");
//};

//void game_state_restore_internal(long)
//{
//    mangled_ppc("?game_state_restore_internal@@YAXJ@Z");
//};

//void game_state_get_state_for_film_clip(struct s_game_state_runtime_state *, struct s_game_state_file_storage_manfiest *)
//{
//    mangled_ppc("?game_state_get_state_for_film_clip@@YAXPAUs_game_state_runtime_state@@PAUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_set_state_for_film_clip(struct s_game_state_runtime_state const *, struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_set_state_for_film_clip@@YAXPBUs_game_state_runtime_state@@PBUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_notify_film_checkpoint_allocated(long, struct s_game_state_runtime_state *, struct s_game_state_file_storage_manfiest *)
//{
//    mangled_ppc("?game_state_notify_film_checkpoint_allocated@@YAXJPAUs_game_state_runtime_state@@PAUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_notify_film_checkpoint_released(long, struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_notify_film_checkpoint_released@@YAXJPBUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_notify_film_checkpoint_reverted(long, struct s_game_state_runtime_state const *, struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_notify_film_checkpoint_reverted@@YAXJPBUs_game_state_runtime_state@@PBUs_game_state_file_storage_manfiest@@@Z");
//};

//bool game_state_header_matches_current_network_session_settings(struct s_game_state_header const *)
//{
//    mangled_ppc("?game_state_header_matches_current_network_session_settings@@YA_NPBUs_game_state_header@@@Z");
//};

//bool game_state_read_header_from_persistent_storage_blocking(enum e_controller_index, struct s_game_state_header *)
//{
//    mangled_ppc("?game_state_read_header_from_persistent_storage_blocking@@YA_NW4e_controller_index@@PAUs_game_state_header@@@Z");
//};

//bool game_state_read_from_persistent_storage_blocking(enum e_controller_index, void *, unsigned long)
//{
//    mangled_ppc("?game_state_read_from_persistent_storage_blocking@@YA_NW4e_controller_index@@PAXK@Z");
//};

//void game_state_write_to_persistent_storage_blocking(struct s_game_state_header const *, long, void const *, long)
//{
//    mangled_ppc("?game_state_write_to_persistent_storage_blocking@@YAXPBUs_game_state_header@@JPBXJ@Z");
//};

//public: c_game_state_compressor::c_game_state_compressor(void)
//{
//    mangled_ppc("??0c_game_state_compressor@@QAA@XZ");
//};

//public: void c_game_state_compressor::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_state_compressor@@QAAXXZ");
//};

//public: void c_game_state_compressor::dispose(void)
//{
//    mangled_ppc("?dispose@c_game_state_compressor@@QAAXXZ");
//};

//public: bool c_game_state_compressor::lock(void)
//{
//    mangled_ppc("?lock@c_game_state_compressor@@QAA_NXZ");
//};

//public: void c_game_state_compressor::set_lock_pending(bool)
//{
//    mangled_ppc("?set_lock_pending@c_game_state_compressor@@QAAX_N@Z");
//};

//public: void c_game_state_compressor::unlock(void)
//{
//    mangled_ppc("?unlock@c_game_state_compressor@@QAAXXZ");
//};

//public: bool c_game_state_compressor::is_locked(void) const
//{
//    mangled_ppc("?is_locked@c_game_state_compressor@@QBA_NXZ");
//};

//public: bool c_game_state_compressor::is_lock_pending(void) const
//{
//    mangled_ppc("?is_lock_pending@c_game_state_compressor@@QBA_NXZ");
//};

//public: bool c_game_state_compressor::game_state_get_compressed(bool, enum e_game_state_compression_level, unsigned char **, long *)
//{
//    mangled_ppc("?game_state_get_compressed@c_game_state_compressor@@QAA_N_NW4e_game_state_compression_level@@PAPAEPAJ@Z");
//};

//public: bool c_game_state_compressor::game_state_get_compressed_from_buffer(enum e_game_state_compression_level, void const *, long, unsigned char **, long *)
//{
//    mangled_ppc("?game_state_get_compressed_from_buffer@c_game_state_compressor@@QAA_NW4e_game_state_compression_level@@PBXJPAPAEPAJ@Z");
//};

//private: bool c_game_state_compressor::compress_internal(enum e_game_state_compression_level, void const *, long)
//{
//    mangled_ppc("?compress_internal@c_game_state_compressor@@AAA_NW4e_game_state_compression_level@@PBXJ@Z");
//};

//public: void c_game_state_compressor::game_state_get_storage(unsigned char **, long *, unsigned char **, long *)
//{
//    mangled_ppc("?game_state_get_storage@c_game_state_compressor@@QAAXPAPAEPAJ01@Z");
//};

//public: long c_game_state_compressor::game_state_get_compressed_size(void) const
//{
//    mangled_ppc("?game_state_get_compressed_size@c_game_state_compressor@@QBAJXZ");
//};

//public: void c_game_state_compressor::game_state_set_compressed_size(long)
//{
//    mangled_ppc("?game_state_set_compressed_size@c_game_state_compressor@@QAAXJ@Z");
//};

//public: unsigned long c_game_state_compressor::game_state_get_compressed_checksum(void) const
//{
//    mangled_ppc("?game_state_get_compressed_checksum@c_game_state_compressor@@QBAKXZ");
//};

//public: bool c_game_state_compressor::game_state_decompress_buffer(bool, bool, long)
//{
//    mangled_ppc("?game_state_decompress_buffer@c_game_state_compressor@@QAA_N_N0J@Z");
//};

//void saved_film_manager_notify_gamestate_decompression_before_load_procs(void)
//{
//    mangled_ppc("?saved_film_manager_notify_gamestate_decompression_before_load_procs@@YAXXZ");
//};

//void saved_film_manager_notify_gamestate_decompression_after_load_procs(void)
//{
//    mangled_ppc("?saved_film_manager_notify_gamestate_decompression_after_load_procs@@YAXXZ");
//};

//public: long c_game_state_compressor::locked_get_compressed_chunk(long, unsigned char const **, long)
//{
//    mangled_ppc("?locked_get_compressed_chunk@c_game_state_compressor@@QAAJJPAPBEJ@Z");
//};

//public: void c_game_state_compressor::locked_write_compressed_chunk(long, unsigned char const *, long)
//{
//    mangled_ppc("?locked_write_compressed_chunk@c_game_state_compressor@@QAAXJPBEJ@Z");
//};

//private: bool c_game_state_compressor::allocate_buffer(void)
//{
//    mangled_ppc("?allocate_buffer@c_game_state_compressor@@AAA_NXZ");
//};

//private: void c_game_state_compressor::deallocate_buffer(void)
//{
//    mangled_ppc("?deallocate_buffer@c_game_state_compressor@@AAAXXZ");
//};

//public: virtual char const * c_game_state_compressor_callback::get_name(void)
//{
//    mangled_ppc("?get_name@c_game_state_compressor_callback@@UAAPBDXZ");
//};

//public: virtual void c_game_state_compressor_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *)
//{
//    mangled_ppc("?get_memory_configuration@c_game_state_compressor_callback@@UAAXW4e_map_memory_configuration@@PAUs_optional_cache_user_memory_configuration@@@Z");
//};

//public: virtual void c_game_state_compressor_callback::idle(void const *)
//{
//    mangled_ppc("?idle@c_game_state_compressor_callback@@UAAXPBX@Z");
//};

//public: virtual void c_game_state_compressor_callback::terminate(void const *)
//{
//    mangled_ppc("?terminate@c_game_state_compressor_callback@@UAAXPBX@Z");
//};

//void game_state_store_tag_file_checksum(long)
//{
//    mangled_ppc("?game_state_store_tag_file_checksum@@YAXJ@Z");
//};

//public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: struct game_player_options const & s_static_array<struct game_player_options, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Ugame_player_options@@$0BA@@@QBAABUgame_player_options@@J@Z");
//};

//public: static bool s_static_array<struct game_player_options, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Ugame_player_options@@$0BA@@@SA_NJ@Z");
//};

//public: c_game_state_compressor_callback::c_game_state_compressor_callback(void)
//{
//    mangled_ppc("??0c_game_state_compressor_callback@@QAA@XZ");
//};

//public: c_optional_cache_user_callback::c_optional_cache_user_callback(void)
//{
//    mangled_ppc("??0c_optional_cache_user_callback@@QAA@XZ");
//};

//public: virtual void c_optional_cache_user_callback::idle(void const *)
//{
//    mangled_ppc("?idle@c_optional_cache_user_callback@@UAAXPBX@Z");
//};

//public: s_game_state_globals::s_game_state_globals(void)
//{
//    mangled_ppc("??0s_game_state_globals@@QAA@XZ");
//};

//public: c_gamestate_deterministic_allocation_callbacks::c_gamestate_deterministic_allocation_callbacks(void)
//{
//    mangled_ppc("??0c_gamestate_deterministic_allocation_callbacks@@QAA@XZ");
//};

//public: virtual long c_restricted_memory_callbacks::filter_base_offset(long)
//{
//    mangled_ppc("?filter_base_offset@c_restricted_memory_callbacks@@UAAJJ@Z");
//};

//public: virtual unsigned int c_gamestate_deterministic_allocation_callbacks::filter_size_request(unsigned int)
//{
//    mangled_ppc("?filter_size_request@c_gamestate_deterministic_allocation_callbacks@@UAAII@Z");
//};

//public: virtual long c_gamestate_deterministic_allocation_callbacks::filter_base_offset(long, long)
//{
//    mangled_ppc("?filter_base_offset@c_gamestate_deterministic_allocation_callbacks@@UAAJJJ@Z");
//};

//public: virtual void c_gamestate_deterministic_allocation_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_allocation@c_gamestate_deterministic_allocation_callbacks@@UAAXPBVc_restricted_memory@@PBD1JPAXI@Z");
//};

//public: long c_restricted_memory::get_region_index(void) const
//{
//    mangled_ppc("?get_region_index@c_restricted_memory@@QBAJXZ");
//};

//public: virtual void c_gamestate_deterministic_allocation_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_release@c_gamestate_deterministic_allocation_callbacks@@UAAXPBVc_restricted_memory@@JPAXI@Z");
//};

//public: c_restricted_memory_callbacks::c_restricted_memory_callbacks(void)
//{
//    mangled_ppc("??0c_restricted_memory_callbacks@@QAA@XZ");
//};

//public: virtual unsigned int c_restricted_memory_callbacks::filter_size_request(unsigned int)
//{
//    mangled_ppc("?filter_size_request@c_restricted_memory_callbacks@@UAAII@Z");
//};

//public: virtual void c_restricted_memory_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_allocation@c_restricted_memory_callbacks@@UAAXPBVc_restricted_memory@@PBD1JPAXI@Z");
//};

//public: virtual void c_restricted_memory_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_release@c_restricted_memory_callbacks@@UAAXPBVc_restricted_memory@@JPAXI@Z");
//};

//void game_state_allocation_record(long, char const *, char const *, long, bool)
//{
//    mangled_ppc("?game_state_allocation_record@@YAXJPBD0J_N@Z");
//};

//public: c_gamestate_nondeterministic_allocation_callbacks::c_gamestate_nondeterministic_allocation_callbacks(void)
//{
//    mangled_ppc("??0c_gamestate_nondeterministic_allocation_callbacks@@QAA@XZ");
//};

//public: virtual unsigned int c_gamestate_nondeterministic_allocation_callbacks::filter_size_request(unsigned int)
//{
//    mangled_ppc("?filter_size_request@c_gamestate_nondeterministic_allocation_callbacks@@UAAII@Z");
//};

//public: virtual long c_gamestate_nondeterministic_allocation_callbacks::filter_base_offset(long)
//{
//    mangled_ppc("?filter_base_offset@c_gamestate_nondeterministic_allocation_callbacks@@UAAJJ@Z");
//};

//public: virtual void c_gamestate_nondeterministic_allocation_callbacks::handle_allocation(class c_restricted_memory const *, char const *, char const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_allocation@c_gamestate_nondeterministic_allocation_callbacks@@UAAXPBVc_restricted_memory@@PBD1JPAXI@Z");
//};

//public: virtual void c_gamestate_nondeterministic_allocation_callbacks::handle_release(class c_restricted_memory const *, long, void *, unsigned int)
//{
//    mangled_ppc("?handle_release@c_gamestate_nondeterministic_allocation_callbacks@@UAAXPBVc_restricted_memory@@JPAXI@Z");
//};

//void g_restricted_section::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_restricted_section@@YAXXZ");
//};

//void g_game_state_locked::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_state_locked@@YAXXZ");
//};

