/* ---------- headers */

#include "omaha\saved_games\determinism_debug\determinism_debug_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const k_determinism_debug_log_extension; // "?k_determinism_debug_log_extension@@3PBDB"
// char const *const k_determinism_debug_log_section_extension; // "?k_determinism_debug_log_section_extension@@3PBDB"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 7168>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0BMAA@@@QAAXXZ@4JC"
// class c_determinism_debug_manager_debug_update_client determinism_debug_manager_debug_update_client_instance; // "?determinism_debug_manager_debug_update_client_instance@@3Vc_determinism_debug_manager_debug_update_client@@A"

// void determinism_debug_manager_initialize(void);
// void determinism_debug_manager_dispose(void);
// void determinism_debug_manager_initialize_for_new_map(void);
// void determinism_debug_manager_dispose_from_old_map(void);
// void determinism_debug_manager_update_for_game_state_sample(void);
// struct s_determinism_debug_manager * get_determinism_debug_manager(void);
// void determinism_debug_manager_register_game_state_allocation(char const *, void const *, long);
// void determinism_debug_manager_generate_game_state_checksum(struct s_determinism_verification *);
// bool determinism_debug_manager_compare_game_state_checksum(struct s_determinism_verification const *, struct s_determinism_verification const *);
// bool determinism_debug_manager_compare_helper(unsigned long, long, unsigned long, long, long);
// bool determinism_debug_manager_compare_game_state_checksum_with_checksum_from_update(struct s_determinism_verification const *);
// void determinism_debug_manager_log_random_use(unsigned long const *, char const *, char const *, char const *, unsigned long);
// bool determinism_debug_manager_trace_enabled(void);
// void determinism_debug_manager_trace(long, void const *, long, char const *, ...);
// bool determinism_debug_manager_consumer_index_valid(long);
// class c_game_state_consumer_interface * determinism_debug_manager_get_consumer_interface(long);
// char const * determinism_debug_manager_consumer_get_name(long);
// void determinism_debug_manager_enable_logging(bool);
// void determinism_debug_manager_set_trace_flags(long);
// void determinism_debug_manager_enable_game_state_checksum(bool);
// void determinism_debug_manager_enable_trace(bool);
// void determinism_debug_manager_set_consumer_sample_level(char const *, long);
// void determinism_debug_manager_notify_out_of_sync(void);
// void determinism_debug_manager_upload_for_remote_out_of_sync(void);
// void determinism_debug_manager_notify_client_out_of_sync(long);
// void determinism_debug_manager_enable_log_file_comparision_on_oos(bool);
// void determinism_debug_manager_get_file_position(long *, long *);
// void determinism_debug_manager_set_file_position(long, long);
// void * determinism_debug_manager_get_scratch_space(void);
// long determinism_debug_manager_get_scratch_space_size(void);
// void determinism_debug_manager_reset_for_core_load(void);
// void determinism_debug_manager_game_start(void);
// void determinism_debug_manager_game_end(void);
// void determinism_debug_manager_initialize_for_saved_game(long);
// void determinism_debug_manager_force_full_update(void);
// void determinism_debug_manager_update_base(void);
// void determinism_debug_manager_update_global_zone_state_for_gamestate_checksum(void);
// void determinism_debug_manager_update_havok_memory_for_gamestate_checksum(void);
// void determinism_debug_manager_update_cheats_for_gamestate_checksum(void);
// void initialize_consumer_item_change_data(struct s_game_state_memory_consumer *);
// unsigned long generate_consumer_item_checksum(unsigned long, struct s_game_state_memory_consumer const *, long);
// void determinism_debug_manager_update_consumer_item_changes(void);
// void determinism_manager_build_oos_file_name(class c_static_string<260> *, char const *);
// void determinism_debug_manager_build_log_file_name(class c_static_string<260> *, char const *, char const *, long);
// void determinism_debug_manager_open_log_file_for_writing(long, bool);
// void determinism_debug_manager_close_log_file(void);
// void determinism_debug_manager_write_checkpoint_to_log_file(void);
// void determinism_debug_manager_write_to_log_file(long, void const *);
// unsigned long determinism_debug_manager_get_random_seed(void);
// class c_simulation_debug_update_client_interface * determinism_debug_manager_get_debug_update_client(void);
// public: virtual void c_determinism_debug_manager_debug_update_client::generate_blob_for_update(unsigned char **, long *, bool);
// public: virtual void c_determinism_debug_manager_debug_update_client::process_blob_from_update(unsigned char const *, long);
// public: virtual void c_determinism_debug_manager_debug_update_client::encode_blob_into_bitstream(class c_bitstream *, unsigned char const *, long);
// public: virtual bool c_determinism_debug_manager_debug_update_client::decode_blob_from_bitstream(class c_bitstream *, unsigned char **, long *);
// public: virtual void c_determinism_debug_manager_debug_update_client::free_blob(unsigned char *);
// public: virtual void c_determinism_debug_manager_debug_update_client::handle_time_discontinuity(void);
// public: virtual void c_determinism_debug_manager_debug_update_client::initialize_for_new_map(void);
// void determinism_debug_manager_encode_game_state_checksum(class c_bitstream *, struct s_determinism_verification const *);
// bool determinism_debug_manager_decode_game_state_checksum(class c_bitstream *, struct s_determinism_verification *);
// public: void s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::set_all(struct s_game_state_memory_consumer_item_change_data const &);
// public: struct s_game_state_memory_consumer * s_static_array<struct s_game_state_memory_consumer, 38>::get_elements(void);
// public: static long s_static_array<struct s_game_state_memory_consumer, 38>::get_count(void);
// public: unsigned int s_static_array<struct s_game_state_memory_consumer, 38>::get_total_element_size(void) const;
// public: bool c_big_flags_typed_no_init<long, 40>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 40>::set(long, bool);
// public: unsigned long const * c_big_flags_typed_no_init<long, 40>::get_bits_direct(void) const;
// public: unsigned long * c_big_flags_typed_no_init<long, 40>::get_writeable_bits_direct(void);
// public: void c_big_flags_typed_no_init<long, 7168>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 7168>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 7168>::set(long, bool);
// public: char (& s_static_string<260>::get_buffer(void))[260];
// public: struct s_game_state_memory_consumer & s_static_array<struct s_game_state_memory_consumer, 38>::operator[]<long>(long);
// unsigned long fast_checksum<unsigned long>(unsigned long, unsigned long const *);
// unsigned long fast_checksum<struct s_random_seed_use>(unsigned long, struct s_random_seed_use const *);
// unsigned long fast_checksum<struct s_determinism_log_sample_header>(unsigned long, struct s_determinism_log_sample_header const *);
// unsigned long fast_checksum<struct s_scenario_zone_state>(unsigned long, struct s_scenario_zone_state const *);
// unsigned long fast_checksum<struct s_determinism_havok_memory_sample>(unsigned long, struct s_determinism_havok_memory_sample const *);
// unsigned long fast_checksum<struct cheat_globals>(unsigned long, struct cheat_globals const *);
// unsigned long fast_checksum<struct s_determinism_cheats_sample>(unsigned long, struct s_determinism_cheats_sample const *);
// public: struct s_game_state_memory_consumer_item_change_data & s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::operator[]<long>(long);
// public: static bool c_big_flags_typed_no_init<long, 40>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 40>::valid(void) const;
// public: bool c_big_flags_typed_no_init<long, 7168>::is_clear(void) const;
// public: static bool c_big_flags_typed_no_init<long, 7168>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 7168>::valid(void) const;
// public: static bool s_static_array<struct s_game_state_memory_consumer, 38>::valid<long>(long);
// void prefetch<unsigned long>(unsigned long const *);
// void prefetch<struct s_random_seed_use>(struct s_random_seed_use const *);
// void prefetch<struct s_determinism_log_sample_header>(struct s_determinism_log_sample_header const *);
// void prefetch<struct s_scenario_zone_state>(struct s_scenario_zone_state const *);
// void prefetch<struct s_determinism_havok_memory_sample>(struct s_determinism_havok_memory_sample const *);
// void prefetch<struct cheat_globals>(struct cheat_globals const *);
// void prefetch<struct s_determinism_cheats_sample>(struct s_determinism_cheats_sample const *);
// public: static bool s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::valid<long>(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 40>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 40>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_valid_mask_of_last_chunk(void);
// protected: static long c_big_flags_typed_no_init<long, 7168>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 7168>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_mask_of_first_slice_of_chunk_exclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: s_determinism_debug_manager::s_determinism_debug_manager(void);
// public: s_determinism_debug_manager_state::s_determinism_debug_manager_state(void);
// public: s_static_array<struct s_game_state_memory_consumer, 38>::s_static_array<struct s_game_state_memory_consumer, 38>(void);
// public: s_game_state_memory_consumer::s_game_state_memory_consumer(void);
// public: c_determinism_debug_manager_debug_update_client::c_determinism_debug_manager_debug_update_client(void);
// public: s_determinism_debug_manager::~s_determinism_debug_manager(void);
// void determinism_debug_manager_globals::`dynamic atexit destructor'(void);

//void determinism_debug_manager_initialize(void)
//{
//    mangled_ppc("?determinism_debug_manager_initialize@@YAXXZ");
//};

//void determinism_debug_manager_dispose(void)
//{
//    mangled_ppc("?determinism_debug_manager_dispose@@YAXXZ");
//};

//void determinism_debug_manager_initialize_for_new_map(void)
//{
//    mangled_ppc("?determinism_debug_manager_initialize_for_new_map@@YAXXZ");
//};

//void determinism_debug_manager_dispose_from_old_map(void)
//{
//    mangled_ppc("?determinism_debug_manager_dispose_from_old_map@@YAXXZ");
//};

//void determinism_debug_manager_update_for_game_state_sample(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_for_game_state_sample@@YAXXZ");
//};

//struct s_determinism_debug_manager * get_determinism_debug_manager(void)
//{
//    mangled_ppc("?get_determinism_debug_manager@@YAPAUs_determinism_debug_manager@@XZ");
//};

//void determinism_debug_manager_register_game_state_allocation(char const *, void const *, long)
//{
//    mangled_ppc("?determinism_debug_manager_register_game_state_allocation@@YAXPBDPBXJ@Z");
//};

//void determinism_debug_manager_generate_game_state_checksum(struct s_determinism_verification *)
//{
//    mangled_ppc("?determinism_debug_manager_generate_game_state_checksum@@YAXPAUs_determinism_verification@@@Z");
//};

//bool determinism_debug_manager_compare_game_state_checksum(struct s_determinism_verification const *, struct s_determinism_verification const *)
//{
//    mangled_ppc("?determinism_debug_manager_compare_game_state_checksum@@YA_NPBUs_determinism_verification@@0@Z");
//};

//bool determinism_debug_manager_compare_helper(unsigned long, long, unsigned long, long, long)
//{
//    mangled_ppc("?determinism_debug_manager_compare_helper@@YA_NKJKJJ@Z");
//};

//bool determinism_debug_manager_compare_game_state_checksum_with_checksum_from_update(struct s_determinism_verification const *)
//{
//    mangled_ppc("?determinism_debug_manager_compare_game_state_checksum_with_checksum_from_update@@YA_NPBUs_determinism_verification@@@Z");
//};

//void determinism_debug_manager_log_random_use(unsigned long const *, char const *, char const *, char const *, unsigned long)
//{
//    mangled_ppc("?determinism_debug_manager_log_random_use@@YAXPBKPBD11K@Z");
//};

//bool determinism_debug_manager_trace_enabled(void)
//{
//    mangled_ppc("?determinism_debug_manager_trace_enabled@@YA_NXZ");
//};

//void determinism_debug_manager_trace(long, void const *, long, char const *, ...)
//{
//    mangled_ppc("?determinism_debug_manager_trace@@YAXJPBXJPBDZZ");
//};

//bool determinism_debug_manager_consumer_index_valid(long)
//{
//    mangled_ppc("?determinism_debug_manager_consumer_index_valid@@YA_NJ@Z");
//};

//class c_game_state_consumer_interface * determinism_debug_manager_get_consumer_interface(long)
//{
//    mangled_ppc("?determinism_debug_manager_get_consumer_interface@@YAPAVc_game_state_consumer_interface@@J@Z");
//};

//char const * determinism_debug_manager_consumer_get_name(long)
//{
//    mangled_ppc("?determinism_debug_manager_consumer_get_name@@YAPBDJ@Z");
//};

//void determinism_debug_manager_enable_logging(bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_logging@@YAX_N@Z");
//};

//void determinism_debug_manager_set_trace_flags(long)
//{
//    mangled_ppc("?determinism_debug_manager_set_trace_flags@@YAXJ@Z");
//};

//void determinism_debug_manager_enable_game_state_checksum(bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_game_state_checksum@@YAX_N@Z");
//};

//void determinism_debug_manager_enable_trace(bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_trace@@YAX_N@Z");
//};

//void determinism_debug_manager_set_consumer_sample_level(char const *, long)
//{
//    mangled_ppc("?determinism_debug_manager_set_consumer_sample_level@@YAXPBDJ@Z");
//};

//void determinism_debug_manager_notify_out_of_sync(void)
//{
//    mangled_ppc("?determinism_debug_manager_notify_out_of_sync@@YAXXZ");
//};

//void determinism_debug_manager_upload_for_remote_out_of_sync(void)
//{
//    mangled_ppc("?determinism_debug_manager_upload_for_remote_out_of_sync@@YAXXZ");
//};

//void determinism_debug_manager_notify_client_out_of_sync(long)
//{
//    mangled_ppc("?determinism_debug_manager_notify_client_out_of_sync@@YAXJ@Z");
//};

//void determinism_debug_manager_enable_log_file_comparision_on_oos(bool)
//{
//    mangled_ppc("?determinism_debug_manager_enable_log_file_comparision_on_oos@@YAX_N@Z");
//};

//void determinism_debug_manager_get_file_position(long *, long *)
//{
//    mangled_ppc("?determinism_debug_manager_get_file_position@@YAXPAJ0@Z");
//};

//void determinism_debug_manager_set_file_position(long, long)
//{
//    mangled_ppc("?determinism_debug_manager_set_file_position@@YAXJJ@Z");
//};

//void * determinism_debug_manager_get_scratch_space(void)
//{
//    mangled_ppc("?determinism_debug_manager_get_scratch_space@@YAPAXXZ");
//};

//long determinism_debug_manager_get_scratch_space_size(void)
//{
//    mangled_ppc("?determinism_debug_manager_get_scratch_space_size@@YAJXZ");
//};

//void determinism_debug_manager_reset_for_core_load(void)
//{
//    mangled_ppc("?determinism_debug_manager_reset_for_core_load@@YAXXZ");
//};

//void determinism_debug_manager_game_start(void)
//{
//    mangled_ppc("?determinism_debug_manager_game_start@@YAXXZ");
//};

//void determinism_debug_manager_game_end(void)
//{
//    mangled_ppc("?determinism_debug_manager_game_end@@YAXXZ");
//};

//void determinism_debug_manager_initialize_for_saved_game(long)
//{
//    mangled_ppc("?determinism_debug_manager_initialize_for_saved_game@@YAXJ@Z");
//};

//void determinism_debug_manager_force_full_update(void)
//{
//    mangled_ppc("?determinism_debug_manager_force_full_update@@YAXXZ");
//};

//void determinism_debug_manager_update_base(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_base@@YAXXZ");
//};

//void determinism_debug_manager_update_global_zone_state_for_gamestate_checksum(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_global_zone_state_for_gamestate_checksum@@YAXXZ");
//};

//void determinism_debug_manager_update_havok_memory_for_gamestate_checksum(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_havok_memory_for_gamestate_checksum@@YAXXZ");
//};

//void determinism_debug_manager_update_cheats_for_gamestate_checksum(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_cheats_for_gamestate_checksum@@YAXXZ");
//};

//void initialize_consumer_item_change_data(struct s_game_state_memory_consumer *)
//{
//    mangled_ppc("?initialize_consumer_item_change_data@@YAXPAUs_game_state_memory_consumer@@@Z");
//};

//unsigned long generate_consumer_item_checksum(unsigned long, struct s_game_state_memory_consumer const *, long)
//{
//    mangled_ppc("?generate_consumer_item_checksum@@YAKKPBUs_game_state_memory_consumer@@J@Z");
//};

//void determinism_debug_manager_update_consumer_item_changes(void)
//{
//    mangled_ppc("?determinism_debug_manager_update_consumer_item_changes@@YAXXZ");
//};

//void determinism_manager_build_oos_file_name(class c_static_string<260> *, char const *)
//{
//    mangled_ppc("?determinism_manager_build_oos_file_name@@YAXPAV?$c_static_string@$0BAE@@@PBD@Z");
//};

//void determinism_debug_manager_build_log_file_name(class c_static_string<260> *, char const *, char const *, long)
//{
//    mangled_ppc("?determinism_debug_manager_build_log_file_name@@YAXPAV?$c_static_string@$0BAE@@@PBD1J@Z");
//};

//void determinism_debug_manager_open_log_file_for_writing(long, bool)
//{
//    mangled_ppc("?determinism_debug_manager_open_log_file_for_writing@@YAXJ_N@Z");
//};

//void determinism_debug_manager_close_log_file(void)
//{
//    mangled_ppc("?determinism_debug_manager_close_log_file@@YAXXZ");
//};

//void determinism_debug_manager_write_checkpoint_to_log_file(void)
//{
//    mangled_ppc("?determinism_debug_manager_write_checkpoint_to_log_file@@YAXXZ");
//};

//void determinism_debug_manager_write_to_log_file(long, void const *)
//{
//    mangled_ppc("?determinism_debug_manager_write_to_log_file@@YAXJPBX@Z");
//};

//unsigned long determinism_debug_manager_get_random_seed(void)
//{
//    mangled_ppc("?determinism_debug_manager_get_random_seed@@YAKXZ");
//};

//class c_simulation_debug_update_client_interface * determinism_debug_manager_get_debug_update_client(void)
//{
//    mangled_ppc("?determinism_debug_manager_get_debug_update_client@@YAPAVc_simulation_debug_update_client_interface@@XZ");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::generate_blob_for_update(unsigned char **, long *, bool)
//{
//    mangled_ppc("?generate_blob_for_update@c_determinism_debug_manager_debug_update_client@@UAAXPAPAEPAJ_N@Z");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::process_blob_from_update(unsigned char const *, long)
//{
//    mangled_ppc("?process_blob_from_update@c_determinism_debug_manager_debug_update_client@@UAAXPBEJ@Z");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::encode_blob_into_bitstream(class c_bitstream *, unsigned char const *, long)
//{
//    mangled_ppc("?encode_blob_into_bitstream@c_determinism_debug_manager_debug_update_client@@UAAXPAVc_bitstream@@PBEJ@Z");
//};

//public: virtual bool c_determinism_debug_manager_debug_update_client::decode_blob_from_bitstream(class c_bitstream *, unsigned char **, long *)
//{
//    mangled_ppc("?decode_blob_from_bitstream@c_determinism_debug_manager_debug_update_client@@UAA_NPAVc_bitstream@@PAPAEPAJ@Z");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::free_blob(unsigned char *)
//{
//    mangled_ppc("?free_blob@c_determinism_debug_manager_debug_update_client@@UAAXPAE@Z");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::handle_time_discontinuity(void)
//{
//    mangled_ppc("?handle_time_discontinuity@c_determinism_debug_manager_debug_update_client@@UAAXXZ");
//};

//public: virtual void c_determinism_debug_manager_debug_update_client::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_determinism_debug_manager_debug_update_client@@UAAXXZ");
//};

//void determinism_debug_manager_encode_game_state_checksum(class c_bitstream *, struct s_determinism_verification const *)
//{
//    mangled_ppc("?determinism_debug_manager_encode_game_state_checksum@@YAXPAVc_bitstream@@PBUs_determinism_verification@@@Z");
//};

//bool determinism_debug_manager_decode_game_state_checksum(class c_bitstream *, struct s_determinism_verification *)
//{
//    mangled_ppc("?determinism_debug_manager_decode_game_state_checksum@@YA_NPAVc_bitstream@@PAUs_determinism_verification@@@Z");
//};

//public: void s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::set_all(struct s_game_state_memory_consumer_item_change_data const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Us_game_state_memory_consumer_item_change_data@@$0BMAA@@@QAAXABUs_game_state_memory_consumer_item_change_data@@@Z");
//};

//public: struct s_game_state_memory_consumer * s_static_array<struct s_game_state_memory_consumer, 38>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@QAAPAUs_game_state_memory_consumer@@XZ");
//};

//public: static long s_static_array<struct s_game_state_memory_consumer, 38>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@SAJXZ");
//};

//public: unsigned int s_static_array<struct s_game_state_memory_consumer, 38>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@QBAIXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 40>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0CI@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 40>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0CI@@@QAAXJ_N@Z");
//};

//public: unsigned long const * c_big_flags_typed_no_init<long, 40>::get_bits_direct(void) const
//{
//    mangled_ppc("?get_bits_direct@?$c_big_flags_typed_no_init@J$0CI@@@QBAPBKXZ");
//};

//public: unsigned long * c_big_flags_typed_no_init<long, 40>::get_writeable_bits_direct(void)
//{
//    mangled_ppc("?get_writeable_bits_direct@?$c_big_flags_typed_no_init@J$0CI@@@QAAPAKXZ");
//};

//public: void c_big_flags_typed_no_init<long, 7168>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0BMAA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 7168>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0BMAA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 7168>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BMAA@@@QAAXJ_N@Z");
//};

//public: char (& s_static_string<260>::get_buffer(void))[260]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0BAE@@@QAAAAY0BAE@DXZ");
//};

//public: struct s_game_state_memory_consumer & s_static_array<struct s_game_state_memory_consumer, 38>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@QAAAAUs_game_state_memory_consumer@@J@Z");
//};

//unsigned long fast_checksum<unsigned long>(unsigned long, unsigned long const *)
//{
//    mangled_ppc("??$fast_checksum@K@@YAKKPBK@Z");
//};

//unsigned long fast_checksum<struct s_random_seed_use>(unsigned long, struct s_random_seed_use const *)
//{
//    mangled_ppc("??$fast_checksum@Us_random_seed_use@@@@YAKKPBUs_random_seed_use@@@Z");
//};

//unsigned long fast_checksum<struct s_determinism_log_sample_header>(unsigned long, struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("??$fast_checksum@Us_determinism_log_sample_header@@@@YAKKPBUs_determinism_log_sample_header@@@Z");
//};

//unsigned long fast_checksum<struct s_scenario_zone_state>(unsigned long, struct s_scenario_zone_state const *)
//{
//    mangled_ppc("??$fast_checksum@Us_scenario_zone_state@@@@YAKKPBUs_scenario_zone_state@@@Z");
//};

//unsigned long fast_checksum<struct s_determinism_havok_memory_sample>(unsigned long, struct s_determinism_havok_memory_sample const *)
//{
//    mangled_ppc("??$fast_checksum@Us_determinism_havok_memory_sample@@@@YAKKPBUs_determinism_havok_memory_sample@@@Z");
//};

//unsigned long fast_checksum<struct cheat_globals>(unsigned long, struct cheat_globals const *)
//{
//    mangled_ppc("??$fast_checksum@Ucheat_globals@@@@YAKKPBUcheat_globals@@@Z");
//};

//unsigned long fast_checksum<struct s_determinism_cheats_sample>(unsigned long, struct s_determinism_cheats_sample const *)
//{
//    mangled_ppc("??$fast_checksum@Us_determinism_cheats_sample@@@@YAKKPBUs_determinism_cheats_sample@@@Z");
//};

//public: struct s_game_state_memory_consumer_item_change_data & s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_state_memory_consumer_item_change_data@@$0BMAA@@@QAAAAUs_game_state_memory_consumer_item_change_data@@J@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 40>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0CI@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 40>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0CI@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 7168>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0BMAA@@@QBA_NXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 7168>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0BMAA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 7168>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0BMAA@@@QBA_NXZ");
//};

//public: static bool s_static_array<struct s_game_state_memory_consumer, 38>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@SA_NJ@Z");
//};

//void prefetch<unsigned long>(unsigned long const *)
//{
//    mangled_ppc("??$prefetch@K@@YAXPBK@Z");
//};

//void prefetch<struct s_random_seed_use>(struct s_random_seed_use const *)
//{
//    mangled_ppc("??$prefetch@Us_random_seed_use@@@@YAXPBUs_random_seed_use@@@Z");
//};

//void prefetch<struct s_determinism_log_sample_header>(struct s_determinism_log_sample_header const *)
//{
//    mangled_ppc("??$prefetch@Us_determinism_log_sample_header@@@@YAXPBUs_determinism_log_sample_header@@@Z");
//};

//void prefetch<struct s_scenario_zone_state>(struct s_scenario_zone_state const *)
//{
//    mangled_ppc("??$prefetch@Us_scenario_zone_state@@@@YAXPBUs_scenario_zone_state@@@Z");
//};

//void prefetch<struct s_determinism_havok_memory_sample>(struct s_determinism_havok_memory_sample const *)
//{
//    mangled_ppc("??$prefetch@Us_determinism_havok_memory_sample@@@@YAXPBUs_determinism_havok_memory_sample@@@Z");
//};

//void prefetch<struct cheat_globals>(struct cheat_globals const *)
//{
//    mangled_ppc("??$prefetch@Ucheat_globals@@@@YAXPBUcheat_globals@@@Z");
//};

//void prefetch<struct s_determinism_cheats_sample>(struct s_determinism_cheats_sample const *)
//{
//    mangled_ppc("??$prefetch@Us_determinism_cheats_sample@@@@YAXPBUs_determinism_cheats_sample@@@Z");
//};

//public: static bool s_static_array<struct s_game_state_memory_consumer_item_change_data, 7168>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_game_state_memory_consumer_item_change_data@@$0BMAA@@@SA_NJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0CI@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0BMAA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 40>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0CI@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 40>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0CI@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0CI@@@KAKXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 7168>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0BMAA@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 7168>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0BMAA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0BMAA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 40>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0CI@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 7168>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0BMAA@@@KAKJ@Z");
//};

//public: s_determinism_debug_manager::s_determinism_debug_manager(void)
//{
//    mangled_ppc("??0s_determinism_debug_manager@@QAA@XZ");
//};

//public: s_determinism_debug_manager_state::s_determinism_debug_manager_state(void)
//{
//    mangled_ppc("??0s_determinism_debug_manager_state@@QAA@XZ");
//};

//public: s_static_array<struct s_game_state_memory_consumer, 38>::s_static_array<struct s_game_state_memory_consumer, 38>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_game_state_memory_consumer@@$0CG@@@QAA@XZ");
//};

//public: s_game_state_memory_consumer::s_game_state_memory_consumer(void)
//{
//    mangled_ppc("??0s_game_state_memory_consumer@@QAA@XZ");
//};

//public: c_determinism_debug_manager_debug_update_client::c_determinism_debug_manager_debug_update_client(void)
//{
//    mangled_ppc("??0c_determinism_debug_manager_debug_update_client@@QAA@XZ");
//};

//public: s_determinism_debug_manager::~s_determinism_debug_manager(void)
//{
//    mangled_ppc("??1s_determinism_debug_manager@@QAA@XZ");
//};

//void determinism_debug_manager_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fdeterminism_debug_manager_globals@@YAXXZ");
//};

