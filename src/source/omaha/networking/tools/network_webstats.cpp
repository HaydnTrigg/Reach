/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_datamine_filename; // "?k_datamine_filename@@3PBDB"
// long g_webstats_file_zip_writes_per_frame; // "?g_webstats_file_zip_writes_per_frame@@3JA"
// char const *const k_webstats_upload_url; // "?k_webstats_upload_url@@3PBDB"
// bool g_webstats_globals_initialized; // "?g_webstats_globals_initialized@@3_NA"
// struct s_webstats_globals g_webstats_globals; // "?g_webstats_globals@@3Us_webstats_globals@@A"

// void network_webstats_initialize(void);
// void network_webstats_dispose(void);
// void network_webstats_update(void);
// bool network_webstats_submit_buffer(enum e_online_lsp_service_type, void const *, long, char const *, long, void (*)(bool));
// enum e_webstats_submission_results network_webstats_submit_file(enum e_online_lsp_service_type, char const *, char const *, long, void (*)(bool));
// bool network_webstats_submit_buffer_allowed(void);
// bool network_webstats_submit_file_allowed(void);
// void network_webstats_disable(bool);
// void network_webstats_force_reset(void);
// void network_webstats_set_upstream_quota(long);
// bool update_lsp(void);
// bool is_upload_active(void);
// void do_uploading_work(void);
// void do_compressing_work(void);
// void compression_failed(void);
// void upload_success(void);
// void upload_failed(bool);
// void upload_complete(void);
// bool upload_step_is_taking_too_long(void);
// bool start_lsp_upload(void);
// bool network_webstats_submit_with_stack_compression_buffer(enum e_online_lsp_service_type, void const *, long, char const *, long, void (*)(bool));
// bool network_webstats_submit_buffer_internal(enum e_online_lsp_service_type, void const *, long, char const *, long, void *, long, void (*)(bool));
// public: c_network_webstats_allocator::c_network_webstats_allocator(void);
// public: c_havok_overflow_memory_borrower::c_havok_overflow_memory_borrower(void);
// public: c_network_webstats_allocator::~c_network_webstats_allocator(void);
// public: void * c_network_webstats_allocator::get_buffer(long *);
// private: void * c_network_webstats_allocator::allocate_havok(void);
// private: void c_network_webstats_allocator::free_havok(void);
// private: void * c_network_webstats_allocator::allocate_networking(void);
// private: void c_network_webstats_allocator::free_networking(void);
// void write_upload_to_disk(enum e_online_lsp_service_type, void const *, long);
// void network_webstats_test_submit(char const *);
// void network_webstats_test_submit(void);
// public: c_game_results::c_game_results(void);
// public: s_game_results::s_game_results(void);
// public: s_game_matchmaking_options::s_game_matchmaking_options(void);
// public: s_game_results_session::s_game_results_session(void);
// public: s_game_results_game_options::s_game_results_game_options(void);
// public: s_game_results_events::s_game_results_events(void);
// public: s_game_results_event::s_game_results_event(void);
// public: s_game_results_medal_event::s_game_results_medal_event(void);
// void network_webstats_test_submit_random_realistic(void);
// void network_webstats_log_uploads(bool);
// public: c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(void);
// public: c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_matchmaking_options_flags);
// public: s_webstats_globals::s_webstats_globals(void);

//void network_webstats_initialize(void)
//{
//    mangled_ppc("?network_webstats_initialize@@YAXXZ");
//};

//void network_webstats_dispose(void)
//{
//    mangled_ppc("?network_webstats_dispose@@YAXXZ");
//};

//void network_webstats_update(void)
//{
//    mangled_ppc("?network_webstats_update@@YAXXZ");
//};

//bool network_webstats_submit_buffer(enum e_online_lsp_service_type, void const *, long, char const *, long, void (*)(bool))
//{
//    mangled_ppc("?network_webstats_submit_buffer@@YA_NW4e_online_lsp_service_type@@PBXJPBDJP6AX_N@Z@Z");
//};

//enum e_webstats_submission_results network_webstats_submit_file(enum e_online_lsp_service_type, char const *, char const *, long, void (*)(bool))
//{
//    mangled_ppc("?network_webstats_submit_file@@YA?AW4e_webstats_submission_results@@W4e_online_lsp_service_type@@PBD1JP6AX_N@Z@Z");
//};

//bool network_webstats_submit_buffer_allowed(void)
//{
//    mangled_ppc("?network_webstats_submit_buffer_allowed@@YA_NXZ");
//};

//bool network_webstats_submit_file_allowed(void)
//{
//    mangled_ppc("?network_webstats_submit_file_allowed@@YA_NXZ");
//};

//void network_webstats_disable(bool)
//{
//    mangled_ppc("?network_webstats_disable@@YAX_N@Z");
//};

//void network_webstats_force_reset(void)
//{
//    mangled_ppc("?network_webstats_force_reset@@YAXXZ");
//};

//void network_webstats_set_upstream_quota(long)
//{
//    mangled_ppc("?network_webstats_set_upstream_quota@@YAXJ@Z");
//};

//bool update_lsp(void)
//{
//    mangled_ppc("?update_lsp@@YA_NXZ");
//};

//bool is_upload_active(void)
//{
//    mangled_ppc("?is_upload_active@@YA_NXZ");
//};

//void do_uploading_work(void)
//{
//    mangled_ppc("?do_uploading_work@@YAXXZ");
//};

//void do_compressing_work(void)
//{
//    mangled_ppc("?do_compressing_work@@YAXXZ");
//};

//void compression_failed(void)
//{
//    mangled_ppc("?compression_failed@@YAXXZ");
//};

//void upload_success(void)
//{
//    mangled_ppc("?upload_success@@YAXXZ");
//};

//void upload_failed(bool)
//{
//    mangled_ppc("?upload_failed@@YAX_N@Z");
//};

//void upload_complete(void)
//{
//    mangled_ppc("?upload_complete@@YAXXZ");
//};

//bool upload_step_is_taking_too_long(void)
//{
//    mangled_ppc("?upload_step_is_taking_too_long@@YA_NXZ");
//};

//bool start_lsp_upload(void)
//{
//    mangled_ppc("?start_lsp_upload@@YA_NXZ");
//};

//bool network_webstats_submit_with_stack_compression_buffer(enum e_online_lsp_service_type, void const *, long, char const *, long, void (*)(bool))
//{
//    mangled_ppc("?network_webstats_submit_with_stack_compression_buffer@@YA_NW4e_online_lsp_service_type@@PBXJPBDJP6AX_N@Z@Z");
//};

//bool network_webstats_submit_buffer_internal(enum e_online_lsp_service_type, void const *, long, char const *, long, void *, long, void (*)(bool))
//{
//    mangled_ppc("?network_webstats_submit_buffer_internal@@YA_NW4e_online_lsp_service_type@@PBXJPBDJPAXJP6AX_N@Z@Z");
//};

//public: c_network_webstats_allocator::c_network_webstats_allocator(void)
//{
//    mangled_ppc("??0c_network_webstats_allocator@@QAA@XZ");
//};

//public: c_havok_overflow_memory_borrower::c_havok_overflow_memory_borrower(void)
//{
//    mangled_ppc("??0c_havok_overflow_memory_borrower@@QAA@XZ");
//};

//public: c_network_webstats_allocator::~c_network_webstats_allocator(void)
//{
//    mangled_ppc("??1c_network_webstats_allocator@@QAA@XZ");
//};

//public: void * c_network_webstats_allocator::get_buffer(long *)
//{
//    mangled_ppc("?get_buffer@c_network_webstats_allocator@@QAAPAXPAJ@Z");
//};

//private: void * c_network_webstats_allocator::allocate_havok(void)
//{
//    mangled_ppc("?allocate_havok@c_network_webstats_allocator@@AAAPAXXZ");
//};

//private: void c_network_webstats_allocator::free_havok(void)
//{
//    mangled_ppc("?free_havok@c_network_webstats_allocator@@AAAXXZ");
//};

//private: void * c_network_webstats_allocator::allocate_networking(void)
//{
//    mangled_ppc("?allocate_networking@c_network_webstats_allocator@@AAAPAXXZ");
//};

//private: void c_network_webstats_allocator::free_networking(void)
//{
//    mangled_ppc("?free_networking@c_network_webstats_allocator@@AAAXXZ");
//};

//void write_upload_to_disk(enum e_online_lsp_service_type, void const *, long)
//{
//    mangled_ppc("?write_upload_to_disk@@YAXW4e_online_lsp_service_type@@PBXJ@Z");
//};

//void network_webstats_test_submit(char const *)
//{
//    mangled_ppc("?network_webstats_test_submit@@YAXPBD@Z");
//};

//void network_webstats_test_submit(void)
//{
//    mangled_ppc("?network_webstats_test_submit@@YAXXZ");
//};

//public: c_game_results::c_game_results(void)
//{
//    mangled_ppc("??0c_game_results@@QAA@XZ");
//};

//public: s_game_results::s_game_results(void)
//{
//    mangled_ppc("??0s_game_results@@QAA@XZ");
//};

//public: s_game_matchmaking_options::s_game_matchmaking_options(void)
//{
//    mangled_ppc("??0s_game_matchmaking_options@@QAA@XZ");
//};

//public: s_game_results_session::s_game_results_session(void)
//{
//    mangled_ppc("??0s_game_results_session@@QAA@XZ");
//};

//public: s_game_results_game_options::s_game_results_game_options(void)
//{
//    mangled_ppc("??0s_game_results_game_options@@QAA@XZ");
//};

//public: s_game_results_events::s_game_results_events(void)
//{
//    mangled_ppc("??0s_game_results_events@@QAA@XZ");
//};

//public: s_game_results_event::s_game_results_event(void)
//{
//    mangled_ppc("??0s_game_results_event@@QAA@XZ");
//};

//public: s_game_results_medal_event::s_game_results_medal_event(void)
//{
//    mangled_ppc("??0s_game_results_medal_event@@QAA@XZ");
//};

//void network_webstats_test_submit_random_realistic(void)
//{
//    mangled_ppc("?network_webstats_test_submit_random_realistic@@YAXXZ");
//};

//void network_webstats_log_uploads(bool)
//{
//    mangled_ppc("?network_webstats_log_uploads@@YAX_N@Z");
//};

//public: c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_event_type@@D$0A@$08Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_game_end_reason@@E$0A@$0P@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_matchmaking_options_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_game_matchmaking_options_flags@@@Z");
//};

//public: s_webstats_globals::s_webstats_globals(void)
//{
//    mangled_ppc("??0s_webstats_globals@@QAA@XZ");
//};

