/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_reward_lsp_sync_stage@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_reward_lsp_sync_stage const c_enum_no_init<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_reward_lsp_sync_stage@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_reward_lsp_sync_stage@@B"
// private: static float const c_controller_retry_state::k_lsp_failure_retry_seconds_min; // "?k_lsp_failure_retry_seconds_min@c_controller_retry_state@@0MB"
// private: static float const c_controller_retry_state::k_lsp_failure_retry_seconds_max; // "?k_lsp_failure_retry_seconds_max@c_controller_retry_state@@0MB"
// private: static float const c_controller_retry_state::k_lsp_failure_retry_seconds_growth_multiplier_on_failure; // "?k_lsp_failure_retry_seconds_growth_multiplier_on_failure@c_controller_retry_state@@0MB"
// public: static long const s_static_array<struct s_reward_lsp_sync_state, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_reward_lsp_sync_state@@$03@@2JB"
// public: static long const s_static_array<class c_controller_retry_state, 4>::k_element_count; // "?k_element_count@?$s_static_array@Vc_controller_retry_state@@$03@@2JB"
// bool g_player_reward_persistence_dump_lsp_upload_blf; // "?g_player_reward_persistence_dump_lsp_upload_blf@@3_NA"
// long g_player_reward_persistence_lsp_sync_minimum_duration_seconds; // "?g_player_reward_persistence_lsp_sync_minimum_duration_seconds@@3JA"
// struct s_reward_persistence_lsp_globals g_reward_persistence_lsp_globals; // "?g_reward_persistence_lsp_globals@@3Us_reward_persistence_lsp_globals@@A"

// void reward_persistence_lsp_initialize(void);
// public: void c_controller_retry_state::reset(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void reward_persistence_lsp_dispose(void);
// void reward_persistence_lsp_update(void);
// void reward_persistence_lsp_start_sync(enum e_controller_index, struct s_lsp_upload_reward_state const *);
// public: s_blf_chunk_local_address::s_blf_chunk_local_address(void);
// void reward_persistence_lsp_set_callbacks(void (*)(class c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>, enum e_controller_index, struct s_lsp_upload_reward_state const *, struct s_lsp_download_reward_state const *), void (*)(enum e_controller_index, long));
// void reward_persistence_lsp_reset_controller_state_for_sign_in_change(enum e_controller_index);
// void reward_persistence_lsp_update_syncing_controller(enum e_controller_index);
// public: void c_controller_retry_state::notify_start_attempt(void);
// public: void c_controller_retry_state::notify_success(void);
// public: void c_controller_retry_state::notify_failure(void);
// public: float c_controller_retry_state::get_current_timeout_seconds(void) const;
// public: float c_controller_retry_state::get_retry_wait_duration_seconds(void) const;
// public: long c_controller_retry_state::get_failure_duration_milliseconds(void) const;
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void write_buffer_to_file(char const *, void const *, long);
// public: c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>(enum e_reward_lsp_sync_stage);
// public: enum e_reward_lsp_sync_stage c_enum_no_init<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_reward_lsp_sync_stage(void) const;
// public: c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_lsp_download_completed_result);
// void zero_and_reconstruct<struct s_reward_persistence_lsp_globals>(struct s_reward_persistence_lsp_globals *);
// public: struct s_reward_lsp_sync_state & s_static_array<struct s_reward_lsp_sync_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_controller_retry_state & s_static_array<class c_controller_retry_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// void zero_and_reconstruct<struct s_reward_lsp_sync_state>(struct s_reward_lsp_sync_state *);
// public: struct s_reward_persistence_upload_to_lsp_blf_chunk * c_network_blf_writer::add_chunk<struct s_reward_persistence_upload_to_lsp_blf_chunk>(void);
// void zero_and_reconstruct<struct s_challenge_progress_chunk>(struct s_challenge_progress_chunk *);
// public: struct s_challenge_progress_chunk * c_network_blf_writer::add_chunk<struct s_challenge_progress_chunk>(void);
// void zero_and_reconstruct<struct s_blf_chunk_local_address>(struct s_blf_chunk_local_address *);
// public: struct s_blf_chunk_local_address * c_network_blf_writer::add_chunk<struct s_blf_chunk_local_address>(void);
// void zero_and_reconstruct<class c_controller_retry_state>(class c_controller_retry_state *);
// void reconstruct<struct s_reward_persistence_lsp_globals>(struct s_reward_persistence_lsp_globals *);
// public: s_reward_persistence_lsp_globals::s_reward_persistence_lsp_globals(void);
// public: s_static_array<struct s_reward_lsp_sync_state, 4>::s_static_array<struct s_reward_lsp_sync_state, 4>(void);
// public: s_reward_lsp_sync_state::s_reward_lsp_sync_state(void);
// public: c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_http_stored_buffer_downloader<2137>::c_http_stored_buffer_downloader<2137>(void);
// merged_83656AC0;
// public: virtual c_http_stored_buffer_downloader<2137>::~c_http_stored_buffer_downloader<2137>(void);
// public: static bool s_static_array<struct s_reward_lsp_sync_state, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_controller_retry_state, 4>::valid<enum e_controller_index>(enum e_controller_index);
// void reconstruct<struct s_reward_lsp_sync_state>(struct s_reward_lsp_sync_state *);
// private: struct s_reward_persistence_upload_to_lsp_blf_chunk * c_network_blf_writer::add_chunk_internal<struct s_reward_persistence_upload_to_lsp_blf_chunk>(void);
// public: s_reward_persistence_upload_to_lsp_blf_chunk::s_reward_persistence_upload_to_lsp_blf_chunk(void);
// void reconstruct<struct s_challenge_progress_chunk>(struct s_challenge_progress_chunk *);
// private: struct s_challenge_progress_chunk * c_network_blf_writer::add_chunk_internal<struct s_challenge_progress_chunk>(void);
// void reconstruct<struct s_blf_chunk_local_address>(struct s_blf_chunk_local_address *);
// private: struct s_blf_chunk_local_address * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_local_address>(void);
// void reconstruct<class c_controller_retry_state>(class c_controller_retry_state *);
// time;
// public: s_reward_persistence_lsp_globals::~s_reward_persistence_lsp_globals(void);
// public: s_static_array<struct s_reward_lsp_sync_state, 4>::~s_static_array<struct s_reward_lsp_sync_state, 4>(void);
// public: s_reward_lsp_sync_state::~s_reward_lsp_sync_state(void);
// void g_reward_persistence_lsp_globals::`dynamic atexit destructor'(void);

//void reward_persistence_lsp_initialize(void)
//{
//    mangled_ppc("?reward_persistence_lsp_initialize@@YAXXZ");
//};

//public: void c_controller_retry_state::reset(void)
//{
//    mangled_ppc("?reset@c_controller_retry_state@@QAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void reward_persistence_lsp_dispose(void)
//{
//    mangled_ppc("?reward_persistence_lsp_dispose@@YAXXZ");
//};

//void reward_persistence_lsp_update(void)
//{
//    mangled_ppc("?reward_persistence_lsp_update@@YAXXZ");
//};

//void reward_persistence_lsp_start_sync(enum e_controller_index, struct s_lsp_upload_reward_state const *)
//{
//    mangled_ppc("?reward_persistence_lsp_start_sync@@YAXW4e_controller_index@@PBUs_lsp_upload_reward_state@@@Z");
//};

//public: s_blf_chunk_local_address::s_blf_chunk_local_address(void)
//{
//    mangled_ppc("??0s_blf_chunk_local_address@@QAA@XZ");
//};

//void reward_persistence_lsp_set_callbacks(void (*)(class c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>, enum e_controller_index, struct s_lsp_upload_reward_state const *, struct s_lsp_download_reward_state const *), void (*)(enum e_controller_index, long))
//{
//    mangled_ppc("?reward_persistence_lsp_set_callbacks@@YAXP6AXV?$c_enum@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@W4e_controller_index@@PBUs_lsp_upload_reward_state@@PBUs_lsp_download_reward_state@@@ZP6AX1J@Z@Z");
//};

//void reward_persistence_lsp_reset_controller_state_for_sign_in_change(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_lsp_reset_controller_state_for_sign_in_change@@YAXW4e_controller_index@@@Z");
//};

//void reward_persistence_lsp_update_syncing_controller(enum e_controller_index)
//{
//    mangled_ppc("?reward_persistence_lsp_update_syncing_controller@@YAXW4e_controller_index@@@Z");
//};

//public: void c_controller_retry_state::notify_start_attempt(void)
//{
//    mangled_ppc("?notify_start_attempt@c_controller_retry_state@@QAAXXZ");
//};

//public: void c_controller_retry_state::notify_success(void)
//{
//    mangled_ppc("?notify_success@c_controller_retry_state@@QAAXXZ");
//};

//public: void c_controller_retry_state::notify_failure(void)
//{
//    mangled_ppc("?notify_failure@c_controller_retry_state@@QAAXXZ");
//};

//public: float c_controller_retry_state::get_current_timeout_seconds(void) const
//{
//    mangled_ppc("?get_current_timeout_seconds@c_controller_retry_state@@QBAMXZ");
//};

//public: float c_controller_retry_state::get_retry_wait_duration_seconds(void) const
//{
//    mangled_ppc("?get_retry_wait_duration_seconds@c_controller_retry_state@@QBAMXZ");
//};

//public: long c_controller_retry_state::get_failure_duration_milliseconds(void) const
//{
//    mangled_ppc("?get_failure_duration_milliseconds@c_controller_retry_state@@QBAJXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void write_buffer_to_file(char const *, void const *, long)
//{
//    mangled_ppc("?write_buffer_to_file@@YAXPBDPBXJ@Z");
//};

//public: c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>(enum e_reward_lsp_sync_stage)
//{
//    mangled_ppc("??0?$c_enum@W4e_reward_lsp_sync_stage@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_reward_lsp_sync_stage@@@Z");
//};

//public: enum e_reward_lsp_sync_stage c_enum_no_init<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_reward_lsp_sync_stage(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_reward_lsp_sync_stage@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_reward_lsp_sync_stage@@XZ");
//};

//public: c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_lsp_download_completed_result, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_lsp_download_completed_result)
//{
//    mangled_ppc("??0?$c_enum@W4e_lsp_download_completed_result@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_lsp_download_completed_result@@@Z");
//};

//void zero_and_reconstruct<struct s_reward_persistence_lsp_globals>(struct s_reward_persistence_lsp_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_reward_persistence_lsp_globals@@@@YAXPAUs_reward_persistence_lsp_globals@@@Z");
//};

//public: struct s_reward_lsp_sync_state & s_static_array<struct s_reward_lsp_sync_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_reward_lsp_sync_state@@$03@@QAAAAUs_reward_lsp_sync_state@@W4e_controller_index@@@Z");
//};

//public: class c_controller_retry_state & s_static_array<class c_controller_retry_state, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Vc_controller_retry_state@@$03@@QAAAAVc_controller_retry_state@@W4e_controller_index@@@Z");
//};

//void zero_and_reconstruct<struct s_reward_lsp_sync_state>(struct s_reward_lsp_sync_state *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_reward_lsp_sync_state@@@@YAXPAUs_reward_lsp_sync_state@@@Z");
//};

//public: struct s_reward_persistence_upload_to_lsp_blf_chunk * c_network_blf_writer::add_chunk<struct s_reward_persistence_upload_to_lsp_blf_chunk>(void)
//{
//    mangled_ppc("??$add_chunk@Us_reward_persistence_upload_to_lsp_blf_chunk@@@c_network_blf_writer@@QAAPAUs_reward_persistence_upload_to_lsp_blf_chunk@@XZ");
//};

//void zero_and_reconstruct<struct s_challenge_progress_chunk>(struct s_challenge_progress_chunk *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_challenge_progress_chunk@@@@YAXPAUs_challenge_progress_chunk@@@Z");
//};

//public: struct s_challenge_progress_chunk * c_network_blf_writer::add_chunk<struct s_challenge_progress_chunk>(void)
//{
//    mangled_ppc("??$add_chunk@Us_challenge_progress_chunk@@@c_network_blf_writer@@QAAPAUs_challenge_progress_chunk@@XZ");
//};

//void zero_and_reconstruct<struct s_blf_chunk_local_address>(struct s_blf_chunk_local_address *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_blf_chunk_local_address@@@@YAXPAUs_blf_chunk_local_address@@@Z");
//};

//public: struct s_blf_chunk_local_address * c_network_blf_writer::add_chunk<struct s_blf_chunk_local_address>(void)
//{
//    mangled_ppc("??$add_chunk@Us_blf_chunk_local_address@@@c_network_blf_writer@@QAAPAUs_blf_chunk_local_address@@XZ");
//};

//void zero_and_reconstruct<class c_controller_retry_state>(class c_controller_retry_state *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Vc_controller_retry_state@@@@YAXPAVc_controller_retry_state@@@Z");
//};

//void reconstruct<struct s_reward_persistence_lsp_globals>(struct s_reward_persistence_lsp_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_reward_persistence_lsp_globals@@@@YAXPAUs_reward_persistence_lsp_globals@@@Z");
//};

//public: s_reward_persistence_lsp_globals::s_reward_persistence_lsp_globals(void)
//{
//    mangled_ppc("??0s_reward_persistence_lsp_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_reward_lsp_sync_state, 4>::s_static_array<struct s_reward_lsp_sync_state, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_reward_lsp_sync_state@@$03@@QAA@XZ");
//};

//public: s_reward_lsp_sync_state::s_reward_lsp_sync_state(void)
//{
//    mangled_ppc("??0s_reward_lsp_sync_state@@QAA@XZ");
//};

//public: c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_reward_lsp_sync_stage, char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_reward_lsp_sync_stage@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<2137>::c_http_stored_buffer_downloader<2137>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0IFJ@@@QAA@XZ");
//};

//merged_83656AC0
//{
//    mangled_ppc("merged_83656AC0");
//};

//public: virtual c_http_stored_buffer_downloader<2137>::~c_http_stored_buffer_downloader<2137>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0IFJ@@@UAA@XZ");
//};

//public: static bool s_static_array<struct s_reward_lsp_sync_state, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_reward_lsp_sync_state@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_controller_retry_state, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Vc_controller_retry_state@@$03@@SA_NW4e_controller_index@@@Z");
//};

//void reconstruct<struct s_reward_lsp_sync_state>(struct s_reward_lsp_sync_state *)
//{
//    mangled_ppc("??$reconstruct@Us_reward_lsp_sync_state@@@@YAXPAUs_reward_lsp_sync_state@@@Z");
//};

//private: struct s_reward_persistence_upload_to_lsp_blf_chunk * c_network_blf_writer::add_chunk_internal<struct s_reward_persistence_upload_to_lsp_blf_chunk>(void)
//{
//    mangled_ppc("??$add_chunk_internal@Us_reward_persistence_upload_to_lsp_blf_chunk@@@c_network_blf_writer@@AAAPAUs_reward_persistence_upload_to_lsp_blf_chunk@@XZ");
//};

//public: s_reward_persistence_upload_to_lsp_blf_chunk::s_reward_persistence_upload_to_lsp_blf_chunk(void)
//{
//    mangled_ppc("??0s_reward_persistence_upload_to_lsp_blf_chunk@@QAA@XZ");
//};

//void reconstruct<struct s_challenge_progress_chunk>(struct s_challenge_progress_chunk *)
//{
//    mangled_ppc("??$reconstruct@Us_challenge_progress_chunk@@@@YAXPAUs_challenge_progress_chunk@@@Z");
//};

//private: struct s_challenge_progress_chunk * c_network_blf_writer::add_chunk_internal<struct s_challenge_progress_chunk>(void)
//{
//    mangled_ppc("??$add_chunk_internal@Us_challenge_progress_chunk@@@c_network_blf_writer@@AAAPAUs_challenge_progress_chunk@@XZ");
//};

//void reconstruct<struct s_blf_chunk_local_address>(struct s_blf_chunk_local_address *)
//{
//    mangled_ppc("??$reconstruct@Us_blf_chunk_local_address@@@@YAXPAUs_blf_chunk_local_address@@@Z");
//};

//private: struct s_blf_chunk_local_address * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_local_address>(void)
//{
//    mangled_ppc("??$add_chunk_internal@Us_blf_chunk_local_address@@@c_network_blf_writer@@AAAPAUs_blf_chunk_local_address@@XZ");
//};

//void reconstruct<class c_controller_retry_state>(class c_controller_retry_state *)
//{
//    mangled_ppc("??$reconstruct@Vc_controller_retry_state@@@@YAXPAVc_controller_retry_state@@@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: s_reward_persistence_lsp_globals::~s_reward_persistence_lsp_globals(void)
//{
//    mangled_ppc("??1s_reward_persistence_lsp_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_reward_lsp_sync_state, 4>::~s_static_array<struct s_reward_lsp_sync_state, 4>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_reward_lsp_sync_state@@$03@@QAA@XZ");
//};

//public: s_reward_lsp_sync_state::~s_reward_lsp_sync_state(void)
//{
//    mangled_ppc("??1s_reward_lsp_sync_state@@QAA@XZ");
//};

//void g_reward_persistence_lsp_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_reward_persistence_lsp_globals@@YAXXZ");
//};

