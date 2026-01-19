/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_determinism_log_results_file_path; // "?k_determinism_log_results_file_path@@3PBDB"
// char const *const k_determinism_log_status_level_error_string; // "?k_determinism_log_status_level_error_string@@3PBDB"
// struct s_determinism_debug_log_async_globals determinism_debug_log_async_globals; // "?determinism_debug_log_async_globals@@3Us_determinism_debug_log_async_globals@@A"
// struct s_determinism_debug_log_globals determinism_debug_log_globals; // "?determinism_debug_log_globals@@3Us_determinism_debug_log_globals@@A"

// void determinism_log_status(enum e_determinism_log_status_level, char const *, ...);
// void determinism_log_compare_log_files(char const *, char const *);
// void determinism_log_compare_log_files_with_result(char const *, char const *, char const *);
// bool determinism_log_open_results_file_for_writing(char const *);
// void determinism_log_close_results_file(void);
// void determinism_log_compare_log_files_internal(char const *, char const *);
// bool determinism_log_open_dump_file_for_reading(enum e_determinism_debug_log, char const *);
// long determinism_log_get_position(enum e_determinism_debug_log);
// bool determinism_log_read_dump_file_data(enum e_determinism_debug_log, long, void *);
// void determinism_log_close_dump_file(enum e_determinism_debug_log);
// bool determinism_log_verify_file_headers(char const *, char const *);
// bool determinism_log_compare_sample_headers(struct s_determinism_log_sample_header const *, struct s_determinism_log_sample_header const *);
// struct s_determinism_log_sample_header const * determinism_log_fast_forward_to_game_time(enum e_determinism_debug_log, struct s_determinism_log_sample_header const *, struct s_determinism_log_sample_header const *);
// bool determinism_log_read_checkpoint(char const *, char const *, struct s_determinism_log_sample_header const *);
// void determinism_log_find_mismatched_item_and_display_instructions(char const *, char const *, struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *);
// void determinism_log_dump_random_use_cache(void);
// void determinism_log_display_random_usage(struct s_random_seed_use const *, long);
// bool determinism_log_read_random_usage(char const *, char const *, struct s_determinism_log_sample_header const *);
// void determinism_log_cache_random_usage(struct s_random_seed_use const *, long);
// bool determinism_log_read_trace(char const *, char const *, struct s_determinism_log_sample_header const *);
// bool determinism_log_read_zone_state(char const *, char const *, struct s_determinism_log_sample_header const *);
// bool determinism_log_read_havok_memory(char const *, char const *, struct s_determinism_log_sample_header const *);
// bool determinism_log_read_cheats(char const *, char const *, struct s_determinism_log_sample_header const *);
// bool determinism_log_compare_zone_state(struct s_scenario_zone_state *, struct s_scenario_zone_state *);
// bool determinism_log_compare_havok_memory(struct s_determinism_havok_memory_sample *, struct s_determinism_havok_memory_sample *);
// bool determinism_log_read_checkpoint_consumer_item(char const *, enum e_determinism_debug_log, struct s_determinism_consumer_header const *, struct s_consumer_item *);
// bool determinism_log_compare_checkpoint_consumer_items(struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *, struct s_consumer_item const *, struct s_consumer_item const *);
// enum e_consumer_header_comparison_result determinism_log_compare_consumer_headers(struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *);
// void determinism_log_write_comparison_file(char const *, enum e_determinism_debug_log, long);
// public: struct s_random_seed_use_cache_element & t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::get_element(long);
// public: long s_static_string<260>::index_of(char const *) const;
// public: long s_static_string<260>::next_index_of(char const *, long) const;
// public: s_determinism_debug_log_async_globals::s_determinism_debug_log_async_globals(void);
// public: t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>(void);
// public: s_determinism_debug_log_async_globals::~s_determinism_debug_log_async_globals(void);
// public: s_determinism_debug_log_globals::~s_determinism_debug_log_globals(void);
// public: t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::~t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>(void);
// void determinism_debug_log_async_globals::`dynamic atexit destructor'(void);
// void determinism_debug_log_globals::`dynamic atexit destructor'(void);

//void determinism_log_status(enum e_determinism_log_status_level, char const *, ...)
//{
//    mangled_ppc("?determinism_log_status@@YAXW4e_determinism_log_status_level@@PBDZZ");
//};

//void determinism_log_compare_log_files(char const *, char const *)
//{
//    mangled_ppc("?determinism_log_compare_log_files@@YAXPBD0@Z");
//};

//void determinism_log_compare_log_files_with_result(char const *, char const *, char const *)
//{
//    mangled_ppc("?determinism_log_compare_log_files_with_result@@YAXPBD00@Z");
//};

//bool determinism_log_open_results_file_for_writing(char const *)
//{
//    mangled_ppc("?determinism_log_open_results_file_for_writing@@YA_NPBD@Z");
//};

//void determinism_log_close_results_file(void)
//{
//    mangled_ppc("?determinism_log_close_results_file@@YAXXZ");
//};

//void determinism_log_compare_log_files_internal(char const *, char const *)
//{
//    mangled_ppc("?determinism_log_compare_log_files_internal@@YAXPBD0@Z");
//};

//bool determinism_log_open_dump_file_for_reading(enum e_determinism_debug_log, char const *)
//{
//    mangled_ppc("?determinism_log_open_dump_file_for_reading@@YA_NW4e_determinism_debug_log@@PBD@Z");
//};

//long determinism_log_get_position(enum e_determinism_debug_log)
//{
//    mangled_ppc("?determinism_log_get_position@@YAJW4e_determinism_debug_log@@@Z");
//};

//bool determinism_log_read_dump_file_data(enum e_determinism_debug_log, long, void *)
//{
//    mangled_ppc("?determinism_log_read_dump_file_data@@YA_NW4e_determinism_debug_log@@JPAX@Z");
//};

//void determinism_log_close_dump_file(enum e_determinism_debug_log)
//{
//    mangled_ppc("?determinism_log_close_dump_file@@YAXW4e_determinism_debug_log@@@Z");
//};

//bool determinism_log_verify_file_headers(char const *, char const *)
//{
//    mangled_ppc("?determinism_log_verify_file_headers@@YA_NPBD0@Z");
//};

//bool determinism_log_compare_sample_headers(struct s_determinism_log_sample_header const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_compare_sample_headers@@YA_NPBUs_determinism_log_sample_header@@0@Z");
//};

//struct s_determinism_log_sample_header const * determinism_log_fast_forward_to_game_time(enum e_determinism_debug_log, struct s_determinism_log_sample_header const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_fast_forward_to_game_time@@YAPBUs_determinism_log_sample_header@@W4e_determinism_debug_log@@PBU1@1@Z");
//};

//bool determinism_log_read_checkpoint(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_checkpoint@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//void determinism_log_find_mismatched_item_and_display_instructions(char const *, char const *, struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *)
//{
//    mangled_ppc("?determinism_log_find_mismatched_item_and_display_instructions@@YAXPBD0PBUs_determinism_consumer_header@@1@Z");
//};

//void determinism_log_dump_random_use_cache(void)
//{
//    mangled_ppc("?determinism_log_dump_random_use_cache@@YAXXZ");
//};

//void determinism_log_display_random_usage(struct s_random_seed_use const *, long)
//{
//    mangled_ppc("?determinism_log_display_random_usage@@YAXPBUs_random_seed_use@@J@Z");
//};

//bool determinism_log_read_random_usage(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_random_usage@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//void determinism_log_cache_random_usage(struct s_random_seed_use const *, long)
//{
//    mangled_ppc("?determinism_log_cache_random_usage@@YAXPBUs_random_seed_use@@J@Z");
//};

//bool determinism_log_read_trace(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_trace@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//bool determinism_log_read_zone_state(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_zone_state@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//bool determinism_log_read_havok_memory(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_havok_memory@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//bool determinism_log_read_cheats(char const *, char const *, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("?determinism_log_read_cheats@@YA_NPBD0PBUs_determinism_log_sample_header@@@Z");
//};

//bool determinism_log_compare_zone_state(struct s_scenario_zone_state *, struct s_scenario_zone_state *)
//{
//    mangled_ppc("?determinism_log_compare_zone_state@@YA_NPAUs_scenario_zone_state@@0@Z");
//};

//bool determinism_log_compare_havok_memory(struct s_determinism_havok_memory_sample *, struct s_determinism_havok_memory_sample *)
//{
//    mangled_ppc("?determinism_log_compare_havok_memory@@YA_NPAUs_determinism_havok_memory_sample@@0@Z");
//};

//bool determinism_log_read_checkpoint_consumer_item(char const *, enum e_determinism_debug_log, struct s_determinism_consumer_header const *, struct s_consumer_item *)
//{
//    mangled_ppc("?determinism_log_read_checkpoint_consumer_item@@YA_NPBDW4e_determinism_debug_log@@PBUs_determinism_consumer_header@@PAUs_consumer_item@@@Z");
//};

//bool determinism_log_compare_checkpoint_consumer_items(struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *, struct s_consumer_item const *, struct s_consumer_item const *)
//{
//    mangled_ppc("?determinism_log_compare_checkpoint_consumer_items@@YA_NPBUs_determinism_consumer_header@@0PBUs_consumer_item@@1@Z");
//};

//enum e_consumer_header_comparison_result determinism_log_compare_consumer_headers(struct s_determinism_consumer_header const *, struct s_determinism_consumer_header const *)
//{
//    mangled_ppc("?determinism_log_compare_consumer_headers@@YA?AW4e_consumer_header_comparison_result@@PBUs_determinism_consumer_header@@0@Z");
//};

//void determinism_log_write_comparison_file(char const *, enum e_determinism_debug_log, long)
//{
//    mangled_ppc("?determinism_log_write_comparison_file@@YAXPBDW4e_determinism_debug_log@@J@Z");
//};

//public: struct s_random_seed_use_cache_element & t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_random_seed_use_cache_element@@$0CA@@@QAAAAUs_random_seed_use_cache_element@@J@Z");
//};

//public: long s_static_string<260>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0BAE@@@QBAJPBD@Z");
//};

//public: long s_static_string<260>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0BAE@@@QBAJPBDJ@Z");
//};

//public: s_determinism_debug_log_async_globals::s_determinism_debug_log_async_globals(void)
//{
//    mangled_ppc("??0s_determinism_debug_log_async_globals@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_random_seed_use_cache_element@@$0CA@@@QAA@XZ");
//};

//public: s_determinism_debug_log_async_globals::~s_determinism_debug_log_async_globals(void)
//{
//    mangled_ppc("??1s_determinism_debug_log_async_globals@@QAA@XZ");
//};

//public: s_determinism_debug_log_globals::~s_determinism_debug_log_globals(void)
//{
//    mangled_ppc("??1s_determinism_debug_log_globals@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>::~t_static_ring_buffer<struct s_random_seed_use_cache_element, 32>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@Us_random_seed_use_cache_element@@$0CA@@@QAA@XZ");
//};

//void determinism_debug_log_async_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fdeterminism_debug_log_async_globals@@YAXXZ");
//};

//void determinism_debug_log_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fdeterminism_debug_log_globals@@YAXXZ");
//};

