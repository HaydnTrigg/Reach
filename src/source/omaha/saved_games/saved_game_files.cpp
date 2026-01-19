/* ---------- headers */

#include "omaha\saved_games\saved_game_files.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_enumerate_campaign_save_task::k_results_buffer_size; // "?k_results_buffer_size@c_enumerate_campaign_save_task@@0IB"
// long g_campaign_save_tracker_test_content_item_exists; // "?g_campaign_save_tracker_test_content_item_exists@@3JA"

// public: c_enumerate_campaign_save_task::c_enumerate_campaign_save_task(void);
// merged_830881C0;
// public: virtual c_enumerate_campaign_save_task::~c_enumerate_campaign_save_task(void);
// public: c_campaign_save_tracker::c_campaign_save_tracker(void);
// public: bool c_campaign_save_tracker::get_content_item_exists(void) const;
// public: void c_campaign_save_tracker::set_controller_index(enum e_controller_index);
// public: bool c_campaign_save_tracker::get_content_item_platform_handle(struct s_content_item_platform_handle *) const;
// public: bool c_campaign_save_tracker::delete_content_item(void);
// public: void c_campaign_save_tracker::update(void);
// private: void c_campaign_save_tracker::enter_deletion(void);
// private: void c_campaign_save_tracker::exit_enumeration(void);
// private: void c_campaign_save_tracker::exit_deletion(void);
// private: void c_campaign_save_tracker::update_start(void);
// private: void c_campaign_save_tracker::update_enumeration(void);
// private: void c_campaign_save_tracker::update_deletion(void);
// private: void c_campaign_save_tracker::update_finish(void);
// private: void c_campaign_save_tracker::switch_state(enum c_campaign_save_tracker::e_state);
// private: void c_campaign_save_tracker::enter_enumeration(void);
// public: c_saved_game_files_globals::c_saved_game_files_globals(void);
// void set_saved_game_file_text_parser_input(struct s_saved_game_file_text_parser_input *, enum e_controller_index, wchar_t const *, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level);
// public: void c_saved_game_files_globals::register_text_parsers(struct s_saved_game_file_text_parser_input const *);
// public: void c_saved_game_files_globals::unregister_text_parsers(void);
// public: void c_saved_game_files_globals::update(void);
// public: enum e_controller_index c_campaign_save_tracker::get_controller_index(void) const;
// void saved_game_files_initialize(void);
// void saved_film_manager_initialize(void);
// void saved_game_files_initialize_for_new_map(void);
// void saved_film_manager_initialize_for_new_map(void);
// void saved_game_files_dispose_from_old_map(void);
// void saved_film_manager_dispose_from_old_map(void);
// void saved_game_files_dispose(void);
// void saved_film_manager_dispose(void);
// void saved_game_files_update(void);
// bool saved_game_files_open_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *, class s_static_string<256> const *, struct s_opened_content_item *);
// bool saved_game_files_close_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *);
// bool saved_game_files_controller_campaign_save_enumeration_in_progress(enum e_controller_index);
// public: bool c_campaign_save_tracker::is_busy(void) const;
// public: class c_campaign_save_tracker * c_saved_game_files_globals::get_campaign_save_tracker(void);
// bool saved_game_files_controller_campaign_save_exists(enum e_controller_index);
// void saved_game_files_delete_campaign_save(enum e_controller_index);
// bool saved_game_files_get_tracked_campaign_save_owner(enum e_controller_index *, struct s_player_identifier *);
// public: struct s_player_identifier const * c_campaign_save_tracker::get_player_identifier(void) const;
// bool saved_game_files_read_saved_game_state_header_blocking(enum e_controller_index, void *, unsigned int);
// bool saved_game_files_read_saved_game_state_blocking(enum e_controller_index, void *, long);
// void saved_game_files_write_saved_game_state_blocking(struct s_game_state_header const *, long, void const *, long);
// public: void c_campaign_save_tracker::reset(void);
// struct s_content_item_metadata const * saved_game_files_find_metadata_in_buffer(struct s_blffile_saved_game_file const *, unsigned int);
// bool saved_game_files_read_metadata_from_buffer(struct s_blffile_saved_game_file const *, unsigned int, struct s_content_item_metadata *);
// void * saved_game_files_copy_buffer_alloc(unsigned int *);
// void saved_game_files_copy_buffer_free(void *);
// char const * saved_game_files_get_extension_for_type(enum e_content_item_type, bool);
// bool saved_game_read_metadata_from_file_blocking(struct s_file_reference *, struct s_content_item_metadata *);
// bool saved_game_write_metadata_to_file_blocking(struct s_file_reference *, struct s_content_item_metadata const *, bool);
// void hs_saved_game_files_delete_saved_game_state_test(enum e_controller_index);
// struct s_async_task_id saved_game_files_save_last_film_to_debugging_hard_drive(enum e_controller_index, void *, unsigned long, class c_synchronized_int32*, class c_async_completion_flag *);
// bool saved_film_manager_get_last_recorded_film(char *, long, struct s_content_item_metadata *);
// void saved_game_files_delete_last_film(void);
// bool saved_game_files_enumeration_in_progress(void);
// bool saved_game_files_get_default_map_variant_save_name(enum e_controller_index, wchar_t const *, wchar_t *, long);
// public: c_saved_game_files_scoped_text_parsers::c_saved_game_files_scoped_text_parsers(struct s_saved_game_file_text_parser_input const *);
// public: c_saved_game_files_scoped_text_parsers::~c_saved_game_files_scoped_text_parsers(void);
// bool saved_game_files_get_default_map_variant_save_description(enum e_controller_index, wchar_t const *, wchar_t *, long);
// bool saved_game_files_get_default_game_variant_save_name(enum e_controller_index, enum e_game_engine_type, wchar_t const *, wchar_t *, long);
// bool saved_game_files_get_default_game_variant_save_description(enum e_controller_index, enum e_game_engine_type, wchar_t const *, wchar_t *, long);
// bool saved_game_files_get_default_screenshot_save_name(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long);
// bool saved_game_files_get_default_screenshot_save_description(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long);
// bool saved_game_files_get_default_film_save_name(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, wchar_t *, long);
// bool saved_game_files_get_default_film_save_description(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long);
// char const * saved_game_files_get_filename_for_type(enum e_content_item_type);
// bool open_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *, class s_static_string<256> const *, struct s_opened_content_item *);
// public: void c_ui_content_open_item_task::get_opened_item(struct s_opened_content_item *) const;
// bool close_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *);
// bool create_content_item_blocking(enum e_controller_index, struct s_content_item_mini_metadata const *, wchar_t const *, unsigned int, struct s_opened_content_item *);
// public: void c_ui_content_create_item_task::get_opened_item(struct s_opened_content_item *) const;
// bool flush_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *);
// bool saved_game_read_metadata_from_open_file_internal(struct s_file_reference *, struct s_content_item_metadata *);
// bool saved_game_write_metadata_to_open_file_internal(struct s_file_reference *, struct s_content_item_metadata const *, bool);
// bool saved_game_synchronize_contents_from_metadata(struct s_file_reference *, struct s_content_item_metadata const *, enum e_content_item_type);
// bool saved_game_files_parse_map_variant_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long);
// bool saved_game_files_parse_game_variant_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long);
// bool saved_game_files_parse_campaign_map_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long);
// bool saved_game_files_parse_campaign_difficulty(struct s_saved_game_file_text_parser_input const *, wchar_t *, long);
// bool read_campaign_save_file_blocking(enum e_controller_index, char const *, unsigned int, void *, unsigned int);
// public: class c_saved_game_files_globals * c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::construct(void);
// public: void c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::destruct(void);
// public: class c_saved_game_files_globals * c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::get(void);
// public: void * c_saved_game_files_globals::`scalar deleting destructor'(unsigned int);
// public: c_saved_game_files_globals::~c_saved_game_files_globals(void);
// public: c_campaign_save_tracker::~c_campaign_save_tracker(void);
// public: virtual c_magic_string_game_tag_parser::~c_magic_string_game_tag_parser(void);
// public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_content_origin, bool);
// public: c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_content_item_type, bool);
// public: c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>(void);
// public: class c_enumerate_campaign_save_task * c_opaque_data<class c_enumerate_campaign_save_task, 9168, 4>::get(void);
// public: class c_saved_game_files_globals * c_opaque_data<class c_saved_game_files_globals, 9604, 4>::get(void);
// public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_content_origin);
// private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_origin);
// public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_content_item_type);
// private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_item_type);
// private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_origin);
// private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_item_type);
// time;
// public: c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>(void);
// public: c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::~c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>(void);
// void g_saved_game_files_globals::`dynamic atexit destructor'(void);

//public: c_enumerate_campaign_save_task::c_enumerate_campaign_save_task(void)
//{
//    mangled_ppc("??0c_enumerate_campaign_save_task@@QAA@XZ");
//};

//merged_830881C0
//{
//    mangled_ppc("merged_830881C0");
//};

//public: virtual c_enumerate_campaign_save_task::~c_enumerate_campaign_save_task(void)
//{
//    mangled_ppc("??1c_enumerate_campaign_save_task@@UAA@XZ");
//};

//public: c_campaign_save_tracker::c_campaign_save_tracker(void)
//{
//    mangled_ppc("??0c_campaign_save_tracker@@QAA@XZ");
//};

//public: bool c_campaign_save_tracker::get_content_item_exists(void) const
//{
//    mangled_ppc("?get_content_item_exists@c_campaign_save_tracker@@QBA_NXZ");
//};

//public: void c_campaign_save_tracker::set_controller_index(enum e_controller_index)
//{
//    mangled_ppc("?set_controller_index@c_campaign_save_tracker@@QAAXW4e_controller_index@@@Z");
//};

//public: bool c_campaign_save_tracker::get_content_item_platform_handle(struct s_content_item_platform_handle *) const
//{
//    mangled_ppc("?get_content_item_platform_handle@c_campaign_save_tracker@@QBA_NPAUs_content_item_platform_handle@@@Z");
//};

//public: bool c_campaign_save_tracker::delete_content_item(void)
//{
//    mangled_ppc("?delete_content_item@c_campaign_save_tracker@@QAA_NXZ");
//};

//public: void c_campaign_save_tracker::update(void)
//{
//    mangled_ppc("?update@c_campaign_save_tracker@@QAAXXZ");
//};

//private: void c_campaign_save_tracker::enter_deletion(void)
//{
//    mangled_ppc("?enter_deletion@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::exit_enumeration(void)
//{
//    mangled_ppc("?exit_enumeration@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::exit_deletion(void)
//{
//    mangled_ppc("?exit_deletion@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::update_start(void)
//{
//    mangled_ppc("?update_start@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::update_enumeration(void)
//{
//    mangled_ppc("?update_enumeration@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::update_deletion(void)
//{
//    mangled_ppc("?update_deletion@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::update_finish(void)
//{
//    mangled_ppc("?update_finish@c_campaign_save_tracker@@AAAXXZ");
//};

//private: void c_campaign_save_tracker::switch_state(enum c_campaign_save_tracker::e_state)
//{
//    mangled_ppc("?switch_state@c_campaign_save_tracker@@AAAXW4e_state@1@@Z");
//};

//private: void c_campaign_save_tracker::enter_enumeration(void)
//{
//    mangled_ppc("?enter_enumeration@c_campaign_save_tracker@@AAAXXZ");
//};

//public: c_saved_game_files_globals::c_saved_game_files_globals(void)
//{
//    mangled_ppc("??0c_saved_game_files_globals@@QAA@XZ");
//};

//void set_saved_game_file_text_parser_input(struct s_saved_game_file_text_parser_input *, enum e_controller_index, wchar_t const *, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?set_saved_game_file_text_parser_input@@YAXPAUs_saved_game_file_text_parser_input@@W4e_controller_index@@PB_W22W4e_campaign_difficulty_level@@@Z");
//};

//public: void c_saved_game_files_globals::register_text_parsers(struct s_saved_game_file_text_parser_input const *)
//{
//    mangled_ppc("?register_text_parsers@c_saved_game_files_globals@@QAAXPBUs_saved_game_file_text_parser_input@@@Z");
//};

//public: void c_saved_game_files_globals::unregister_text_parsers(void)
//{
//    mangled_ppc("?unregister_text_parsers@c_saved_game_files_globals@@QAAXXZ");
//};

//public: void c_saved_game_files_globals::update(void)
//{
//    mangled_ppc("?update@c_saved_game_files_globals@@QAAXXZ");
//};

//public: enum e_controller_index c_campaign_save_tracker::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_campaign_save_tracker@@QBA?AW4e_controller_index@@XZ");
//};

//void saved_game_files_initialize(void)
//{
//    mangled_ppc("?saved_game_files_initialize@@YAXXZ");
//};

//void saved_film_manager_initialize(void)
//{
//    mangled_ppc("?saved_film_manager_initialize@@YAXXZ");
//};

//void saved_game_files_initialize_for_new_map(void)
//{
//    mangled_ppc("?saved_game_files_initialize_for_new_map@@YAXXZ");
//};

//void saved_film_manager_initialize_for_new_map(void)
//{
//    mangled_ppc("?saved_film_manager_initialize_for_new_map@@YAXXZ");
//};

//void saved_game_files_dispose_from_old_map(void)
//{
//    mangled_ppc("?saved_game_files_dispose_from_old_map@@YAXXZ");
//};

//void saved_film_manager_dispose_from_old_map(void)
//{
//    mangled_ppc("?saved_film_manager_dispose_from_old_map@@YAXXZ");
//};

//void saved_game_files_dispose(void)
//{
//    mangled_ppc("?saved_game_files_dispose@@YAXXZ");
//};

//void saved_film_manager_dispose(void)
//{
//    mangled_ppc("?saved_film_manager_dispose@@YAXXZ");
//};

//void saved_game_files_update(void)
//{
//    mangled_ppc("?saved_game_files_update@@YAXXZ");
//};

//bool saved_game_files_open_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *, class s_static_string<256> const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?saved_game_files_open_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@PBV?$s_static_string@$0BAA@@@PAUs_opened_content_item@@@Z");
//};

//bool saved_game_files_close_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?saved_game_files_close_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@@Z");
//};

//bool saved_game_files_controller_campaign_save_enumeration_in_progress(enum e_controller_index)
//{
//    mangled_ppc("?saved_game_files_controller_campaign_save_enumeration_in_progress@@YA_NW4e_controller_index@@@Z");
//};

//public: bool c_campaign_save_tracker::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_campaign_save_tracker@@QBA_NXZ");
//};

//public: class c_campaign_save_tracker * c_saved_game_files_globals::get_campaign_save_tracker(void)
//{
//    mangled_ppc("?get_campaign_save_tracker@c_saved_game_files_globals@@QAAPAVc_campaign_save_tracker@@XZ");
//};

//bool saved_game_files_controller_campaign_save_exists(enum e_controller_index)
//{
//    mangled_ppc("?saved_game_files_controller_campaign_save_exists@@YA_NW4e_controller_index@@@Z");
//};

//void saved_game_files_delete_campaign_save(enum e_controller_index)
//{
//    mangled_ppc("?saved_game_files_delete_campaign_save@@YAXW4e_controller_index@@@Z");
//};

//bool saved_game_files_get_tracked_campaign_save_owner(enum e_controller_index *, struct s_player_identifier *)
//{
//    mangled_ppc("?saved_game_files_get_tracked_campaign_save_owner@@YA_NPAW4e_controller_index@@PAUs_player_identifier@@@Z");
//};

//public: struct s_player_identifier const * c_campaign_save_tracker::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_campaign_save_tracker@@QBAPBUs_player_identifier@@XZ");
//};

//bool saved_game_files_read_saved_game_state_header_blocking(enum e_controller_index, void *, unsigned int)
//{
//    mangled_ppc("?saved_game_files_read_saved_game_state_header_blocking@@YA_NW4e_controller_index@@PAXI@Z");
//};

//bool saved_game_files_read_saved_game_state_blocking(enum e_controller_index, void *, long)
//{
//    mangled_ppc("?saved_game_files_read_saved_game_state_blocking@@YA_NW4e_controller_index@@PAXJ@Z");
//};

//void saved_game_files_write_saved_game_state_blocking(struct s_game_state_header const *, long, void const *, long)
//{
//    mangled_ppc("?saved_game_files_write_saved_game_state_blocking@@YAXPBUs_game_state_header@@JPBXJ@Z");
//};

//public: void c_campaign_save_tracker::reset(void)
//{
//    mangled_ppc("?reset@c_campaign_save_tracker@@QAAXXZ");
//};

//struct s_content_item_metadata const * saved_game_files_find_metadata_in_buffer(struct s_blffile_saved_game_file const *, unsigned int)
//{
//    mangled_ppc("?saved_game_files_find_metadata_in_buffer@@YAPBUs_content_item_metadata@@PBUs_blffile_saved_game_file@@I@Z");
//};

//bool saved_game_files_read_metadata_from_buffer(struct s_blffile_saved_game_file const *, unsigned int, struct s_content_item_metadata *)
//{
//    mangled_ppc("?saved_game_files_read_metadata_from_buffer@@YA_NPBUs_blffile_saved_game_file@@IPAUs_content_item_metadata@@@Z");
//};

//void * saved_game_files_copy_buffer_alloc(unsigned int *)
//{
//    mangled_ppc("?saved_game_files_copy_buffer_alloc@@YAPAXPAI@Z");
//};

//void saved_game_files_copy_buffer_free(void *)
//{
//    mangled_ppc("?saved_game_files_copy_buffer_free@@YAXPAX@Z");
//};

//char const * saved_game_files_get_extension_for_type(enum e_content_item_type, bool)
//{
//    mangled_ppc("?saved_game_files_get_extension_for_type@@YAPBDW4e_content_item_type@@_N@Z");
//};

//bool saved_game_read_metadata_from_file_blocking(struct s_file_reference *, struct s_content_item_metadata *)
//{
//    mangled_ppc("?saved_game_read_metadata_from_file_blocking@@YA_NPAUs_file_reference@@PAUs_content_item_metadata@@@Z");
//};

//bool saved_game_write_metadata_to_file_blocking(struct s_file_reference *, struct s_content_item_metadata const *, bool)
//{
//    mangled_ppc("?saved_game_write_metadata_to_file_blocking@@YA_NPAUs_file_reference@@PBUs_content_item_metadata@@_N@Z");
//};

//void hs_saved_game_files_delete_saved_game_state_test(enum e_controller_index)
//{
//    mangled_ppc("?hs_saved_game_files_delete_saved_game_state_test@@YAXW4e_controller_index@@@Z");
//};

//struct s_async_task_id saved_game_files_save_last_film_to_debugging_hard_drive(enum e_controller_index, void *, unsigned long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?saved_game_files_save_last_film_to_debugging_hard_drive@@YA?AUs_async_task_id@@W4e_controller_index@@PAXKPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//bool saved_film_manager_get_last_recorded_film(char *, long, struct s_content_item_metadata *)
//{
//    mangled_ppc("?saved_film_manager_get_last_recorded_film@@YA_NPADJPAUs_content_item_metadata@@@Z");
//};

//void saved_game_files_delete_last_film(void)
//{
//    mangled_ppc("?saved_game_files_delete_last_film@@YAXXZ");
//};

//bool saved_game_files_enumeration_in_progress(void)
//{
//    mangled_ppc("?saved_game_files_enumeration_in_progress@@YA_NXZ");
//};

//bool saved_game_files_get_default_map_variant_save_name(enum e_controller_index, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_map_variant_save_name@@YA_NW4e_controller_index@@PB_WPA_WJ@Z");
//};

//public: c_saved_game_files_scoped_text_parsers::c_saved_game_files_scoped_text_parsers(struct s_saved_game_file_text_parser_input const *)
//{
//    mangled_ppc("??0c_saved_game_files_scoped_text_parsers@@QAA@PBUs_saved_game_file_text_parser_input@@@Z");
//};

//public: c_saved_game_files_scoped_text_parsers::~c_saved_game_files_scoped_text_parsers(void)
//{
//    mangled_ppc("??1c_saved_game_files_scoped_text_parsers@@QAA@XZ");
//};

//bool saved_game_files_get_default_map_variant_save_description(enum e_controller_index, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_map_variant_save_description@@YA_NW4e_controller_index@@PB_WPA_WJ@Z");
//};

//bool saved_game_files_get_default_game_variant_save_name(enum e_controller_index, enum e_game_engine_type, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_game_variant_save_name@@YA_NW4e_controller_index@@W4e_game_engine_type@@PB_WPA_WJ@Z");
//};

//bool saved_game_files_get_default_game_variant_save_description(enum e_controller_index, enum e_game_engine_type, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_game_variant_save_description@@YA_NW4e_controller_index@@W4e_game_engine_type@@PB_WPA_WJ@Z");
//};

//bool saved_game_files_get_default_screenshot_save_name(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_screenshot_save_name@@YA_NW4e_controller_index@@W4e_game_mode@@W4e_gui_game_mode@@PB_W3W4e_campaign_difficulty_level@@PA_WJ@Z");
//};

//bool saved_game_files_get_default_screenshot_save_description(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_screenshot_save_description@@YA_NW4e_controller_index@@W4e_game_mode@@W4e_gui_game_mode@@PB_W3W4e_campaign_difficulty_level@@PA_WJ@Z");
//};

//bool saved_game_files_get_default_film_save_name(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_film_save_name@@YA_NW4e_controller_index@@W4e_game_mode@@W4e_gui_game_mode@@PB_W3PA_WJ@Z");
//};

//bool saved_game_files_get_default_film_save_description(enum e_controller_index, enum e_game_mode, enum e_gui_game_mode, wchar_t const *, wchar_t const *, enum e_campaign_difficulty_level, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_get_default_film_save_description@@YA_NW4e_controller_index@@W4e_game_mode@@W4e_gui_game_mode@@PB_W3W4e_campaign_difficulty_level@@PA_WJ@Z");
//};

//char const * saved_game_files_get_filename_for_type(enum e_content_item_type)
//{
//    mangled_ppc("?saved_game_files_get_filename_for_type@@YAPBDW4e_content_item_type@@@Z");
//};

//bool open_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *, class s_static_string<256> const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?open_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@PBV?$s_static_string@$0BAA@@@PAUs_opened_content_item@@@Z");
//};

//public: void c_ui_content_open_item_task::get_opened_item(struct s_opened_content_item *) const
//{
//    mangled_ppc("?get_opened_item@c_ui_content_open_item_task@@QBAXPAUs_opened_content_item@@@Z");
//};

//bool close_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?close_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@@Z");
//};

//bool create_content_item_blocking(enum e_controller_index, struct s_content_item_mini_metadata const *, wchar_t const *, unsigned int, struct s_opened_content_item *)
//{
//    mangled_ppc("?create_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_mini_metadata@@PB_WIPAUs_opened_content_item@@@Z");
//};

//public: void c_ui_content_create_item_task::get_opened_item(struct s_opened_content_item *) const
//{
//    mangled_ppc("?get_opened_item@c_ui_content_create_item_task@@QBAXPAUs_opened_content_item@@@Z");
//};

//bool flush_content_item_blocking(enum e_controller_index, struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?flush_content_item_blocking@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@@Z");
//};

//bool saved_game_read_metadata_from_open_file_internal(struct s_file_reference *, struct s_content_item_metadata *)
//{
//    mangled_ppc("?saved_game_read_metadata_from_open_file_internal@@YA_NPAUs_file_reference@@PAUs_content_item_metadata@@@Z");
//};

//bool saved_game_write_metadata_to_open_file_internal(struct s_file_reference *, struct s_content_item_metadata const *, bool)
//{
//    mangled_ppc("?saved_game_write_metadata_to_open_file_internal@@YA_NPAUs_file_reference@@PBUs_content_item_metadata@@_N@Z");
//};

//bool saved_game_synchronize_contents_from_metadata(struct s_file_reference *, struct s_content_item_metadata const *, enum e_content_item_type)
//{
//    mangled_ppc("?saved_game_synchronize_contents_from_metadata@@YA_NPAUs_file_reference@@PBUs_content_item_metadata@@W4e_content_item_type@@@Z");
//};

//bool saved_game_files_parse_map_variant_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_parse_map_variant_name@@YA_NPBUs_saved_game_file_text_parser_input@@PA_WJ@Z");
//};

//bool saved_game_files_parse_game_variant_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_parse_game_variant_name@@YA_NPBUs_saved_game_file_text_parser_input@@PA_WJ@Z");
//};

//bool saved_game_files_parse_campaign_map_name(struct s_saved_game_file_text_parser_input const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_parse_campaign_map_name@@YA_NPBUs_saved_game_file_text_parser_input@@PA_WJ@Z");
//};

//bool saved_game_files_parse_campaign_difficulty(struct s_saved_game_file_text_parser_input const *, wchar_t *, long)
//{
//    mangled_ppc("?saved_game_files_parse_campaign_difficulty@@YA_NPBUs_saved_game_file_text_parser_input@@PA_WJ@Z");
//};

//bool read_campaign_save_file_blocking(enum e_controller_index, char const *, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("?read_campaign_save_file_blocking@@YA_NW4e_controller_index@@PBDIPAXI@Z");
//};

//public: class c_saved_game_files_globals * c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAAPAVc_saved_game_files_globals@@XZ");
//};

//public: void c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAAXXZ");
//};

//public: class c_saved_game_files_globals * c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAAPAVc_saved_game_files_globals@@XZ");
//};

//public: void * c_saved_game_files_globals::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_saved_game_files_globals@@QAAPAXI@Z");
//};

//public: c_saved_game_files_globals::~c_saved_game_files_globals(void)
//{
//    mangled_ppc("??1c_saved_game_files_globals@@QAA@XZ");
//};

//public: c_campaign_save_tracker::~c_campaign_save_tracker(void)
//{
//    mangled_ppc("??1c_campaign_save_tracker@@QAA@XZ");
//};

//public: virtual c_magic_string_game_tag_parser::~c_magic_string_game_tag_parser(void)
//{
//    mangled_ppc("??1c_magic_string_game_tag_parser@@UAA@XZ");
//};

//public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_content_origin, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_content_origin@@_N@Z");
//};

//public: c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_content_item_type, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAAXW4e_content_item_type@@_N@Z");
//};

//public: c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class c_enumerate_campaign_save_task * c_opaque_data<class c_enumerate_campaign_save_task, 9168, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_enumerate_campaign_save_task@@$0CDNA@$03@@QAAPAVc_enumerate_campaign_save_task@@XZ");
//};

//public: class c_saved_game_files_globals * c_opaque_data<class c_saved_game_files_globals, 9604, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAAPAVc_saved_game_files_globals@@XZ");
//};

//public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_content_origin)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_content_origin@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_origin)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@CAEW4e_content_origin@@@Z");
//};

//public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_content_item_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@SA_NW4e_content_item_type@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_item_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@CAGW4e_content_item_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_origin)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@CAEW4e_content_origin@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_item_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@CAGW4e_content_item_type@@@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>::~c_typed_opaque_data<class c_saved_game_files_globals, 9604, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_saved_game_files_globals@@$0CFIE@$03@@QAA@XZ");
//};

//void g_saved_game_files_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_saved_game_files_globals@@YAXXZ");
//};

