/* ---------- headers */

#include "omaha\saved_games\game_state_xenon.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_game_state_storage_file_flags const c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_game_state_storage_file_flags@@B"
// public: static long const c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@2JB"
// public: static long const s_static_array<struct s_game_state_storage_file, 24>::k_element_count; // "?k_element_count@?$s_static_array@Us_game_state_storage_file@@$0BI@@@2JB"
// class c_game_state_xenon_optional_cache_saving_callback g_game_state_xenon_optional_cache_saving_callback; // "?g_game_state_xenon_optional_cache_saving_callback@@3Vc_game_state_xenon_optional_cache_saving_callback@@A"
// class c_game_state_xenon_optional_cache_loading_callback g_game_state_xenon_optional_cache_loading_callback; // "?g_game_state_xenon_optional_cache_loading_callback@@3Vc_game_state_xenon_optional_cache_loading_callback@@A"

// void * game_state_allocate_buffer(long, long, long *);
// void game_state_set_buffer_protection(void *, long, long);
// void game_state_free_buffer(void);
// void * game_state_allocate_temporary_buffer(long);
// void game_state_free_temporary_buffer(void *, long);
// void game_state_initialize_storage(void);
// void game_state_dispose_storage(void);
// void game_state_allocate_guard_page(void *, long, long, long *);
// long game_state_get_file_references(long, struct s_file_reference *);
// void game_state_storage_initialize_for_new_map(void);
// public: void s_game_state_file_storage_manfiest::initialize(void);
// long game_state_get_storage_count(void);
// void game_state_write_to_storage(long);
// bool game_state_storage_is_valid(long);
// bool game_state_read_from_storage(long, long);
// bool game_state_read_header_from_storage(long, struct s_game_state_header *);
// bool game_state_persistent_storage_exists(enum e_controller_index);
// void game_state_file_storage_get_state_for_film_clip(struct s_game_state_file_storage_manfiest *);
// void game_state_file_storage_set_state_for_film_clip(struct s_game_state_file_storage_manfiest const *);
// void game_state_file_storage_notify_film_checkpoint_allocated(long, struct s_game_state_file_storage_manfiest *);
// void game_state_file_storage_notify_film_checkpoint_released(long, struct s_game_state_file_storage_manfiest const *);
// void game_state_file_storage_notify_film_checkpoint_reverted(long, struct s_game_state_file_storage_manfiest const *);
// bool game_state_file_storage_get_file_handle(long, struct s_file_handle *);
// public: virtual char const * c_game_state_xenon_optional_cache_saving_callback::get_name(void);
// public: virtual void c_game_state_xenon_optional_cache_saving_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *);
// public: virtual void c_game_state_xenon_optional_cache_saving_callback::idle(void const *);
// public: virtual void c_game_state_xenon_optional_cache_saving_callback::terminate(void const *);
// public: virtual char const * c_game_state_xenon_optional_cache_loading_callback::get_name(void);
// public: virtual void c_game_state_xenon_optional_cache_loading_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *);
// public: virtual void c_game_state_xenon_optional_cache_loading_callback::idle(void const *);
// public: virtual void c_game_state_xenon_optional_cache_loading_callback::terminate(void const *);
// void game_state_yield_until_done(void);
// void game_state_idle_save_game_block(void const *);
// enum e_async_completion game_state_write_signature_callback(void *);
// void game_state_terminate_save_game_block(void const *);
// void game_state_initialize_file_storage(void);
// void game_state_initialize_memory_storage(void);
// void game_state_dispose_file_storage(void);
// void game_state_dispose_memory_storage(void);
// void game_state_write_to_file_storage(long);
// void game_state_write_to_memory_storage(long);
// bool game_state_file_storage_is_valid(long);
// bool game_state_memory_storage_is_valid(long);
// bool game_state_read_from_file_storage(long, long);
// bool game_state_read_header_from_file_storage(long, struct s_game_state_header *);
// void game_state_dereference_and_initialize_runtime_manifest(void);
// bool game_state_read_from_memory_storage(long, long);
// bool game_state_read_header_from_memory_storage(long, struct s_game_state_header *);
// public: void c_game_state_xenon_storage_file_manager::initialize(void);
// public: void c_game_state_xenon_storage_file_manager::dispose(void);
// public: void c_game_state_xenon_storage_file_manager::clear(void);
// public: long c_game_state_xenon_storage_file_manager::allocate_file_storage(long);
// public: void c_game_state_xenon_storage_file_manager::increment_refrence(enum c_game_state_xenon_storage_file_manager::e_reference_type, long, long);
// public: void c_game_state_xenon_storage_file_manager::decrement_refrence(enum c_game_state_xenon_storage_file_manager::e_reference_type, long, long);
// public: void c_game_state_xenon_storage_file_manager::set_valid_for_read(long, bool);
// public: bool c_game_state_xenon_storage_file_manager::initialized(void) const;
// public: bool c_game_state_xenon_storage_file_manager::get_referenced(long) const;
// public: bool c_game_state_xenon_storage_file_manager::get_referenced_by_type(enum c_game_state_xenon_storage_file_manager::e_reference_type, long) const;
// public: bool c_game_state_xenon_storage_file_manager::get_valid_for_read(long) const;
// public: struct s_file_handle c_game_state_xenon_storage_file_manager::get_file_handle(long) const;
// public: struct s_file_handle c_game_state_xenon_storage_file_manager::get_file_handle_allow_unreferenced(long) const;
// public: long c_game_state_xenon_storage_file_manager::get_referenced_count(void) const;
// public: long c_game_state_xenon_storage_file_manager::get_referenced_count_by_type(enum c_game_state_xenon_storage_file_manager::e_reference_type) const;
// public: void c_game_state_xenon_storage_file_manager::verify_identifier(long) const;
// public: void c_game_state_xenon_storage_file_manager::validate(void) const;
// private: bool c_game_state_xenon_storage_file_manager::initialize_storage_directory(void);
// private: bool c_game_state_xenon_storage_file_manager::initialize_storage_file(long);
// private: void c_game_state_xenon_storage_file_manager::dispose_storage_file(long);
// private: struct s_game_state_storage_file * c_game_state_xenon_storage_file_manager::get_storage_file_writable(long);
// private: struct s_game_state_storage_file const * c_game_state_xenon_storage_file_manager::get_storage_file(long) const;
// private: long c_game_state_xenon_storage_file_manager::get_file_index_from_identifier(long) const;
// private: long c_game_state_xenon_storage_file_manager::get_identifier_from_file_index(long) const;
// public: static long s_static_array<struct s_game_state_storage_file, 24>::get_count(void);
// public: void c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_game_state_storage_file_flags) const;
// public: void c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_game_state_storage_file_flags, bool);
// public: void c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::set(long, bool);
// public: long c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::count_set(void) const;
// public: void c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: long c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::count_set(void) const;
// struct s_async_task_id async_task_add<struct s_game_state_signature_task>(long, struct s_game_state_signature_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: struct s_game_state_storage_file & s_static_array<struct s_game_state_storage_file, 24>::operator[]<long>(long);
// public: struct s_game_state_storage_file const & s_static_array<struct s_game_state_storage_file, 24>::operator[]<long>(long) const;
// public: static bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_game_state_storage_file_flags);
// private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_state_storage_file_flags);
// public: static bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// struct s_async_task_id async_task_add_ex<struct s_game_state_signature_task>(long, struct s_game_state_signature_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: static bool s_static_array<struct s_game_state_storage_file, 24>::valid<long>(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// private: static unsigned short c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// public: s_xenon_game_state_globals::s_xenon_game_state_globals(void);
// public: c_game_state_xenon_storage_file_manager::c_game_state_xenon_storage_file_manager(void);
// public: s_static_array<struct s_game_state_storage_file, 24>::s_static_array<struct s_game_state_storage_file, 24>(void);
// public: s_game_state_storage_file::s_game_state_storage_file(void);
// public: c_flags<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: c_flags<long, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<long, unsigned short, 11, struct s_default_enum_string_resolver>::c_flags<long, unsigned short, 11, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_state_storage_file_flags);
// public: c_game_state_xenon_optional_cache_saving_callback::c_game_state_xenon_optional_cache_saving_callback(void);
// public: c_game_state_xenon_optional_cache_loading_callback::c_game_state_xenon_optional_cache_loading_callback(void);
// public: s_xenon_game_state_globals::~s_xenon_game_state_globals(void);
// void xenon_game_state_globals::`dynamic atexit destructor'(void);

//void * game_state_allocate_buffer(long, long, long *)
//{
//    mangled_ppc("?game_state_allocate_buffer@@YAPAXJJPAJ@Z");
//};

//void game_state_set_buffer_protection(void *, long, long)
//{
//    mangled_ppc("?game_state_set_buffer_protection@@YAXPAXJJ@Z");
//};

//void game_state_free_buffer(void)
//{
//    mangled_ppc("?game_state_free_buffer@@YAXXZ");
//};

//void * game_state_allocate_temporary_buffer(long)
//{
//    mangled_ppc("?game_state_allocate_temporary_buffer@@YAPAXJ@Z");
//};

//void game_state_free_temporary_buffer(void *, long)
//{
//    mangled_ppc("?game_state_free_temporary_buffer@@YAXPAXJ@Z");
//};

//void game_state_initialize_storage(void)
//{
//    mangled_ppc("?game_state_initialize_storage@@YAXXZ");
//};

//void game_state_dispose_storage(void)
//{
//    mangled_ppc("?game_state_dispose_storage@@YAXXZ");
//};

//void game_state_allocate_guard_page(void *, long, long, long *)
//{
//    mangled_ppc("?game_state_allocate_guard_page@@YAXPAXJJPAJ@Z");
//};

//long game_state_get_file_references(long, struct s_file_reference *)
//{
//    mangled_ppc("?game_state_get_file_references@@YAJJPAUs_file_reference@@@Z");
//};

//void game_state_storage_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_state_storage_initialize_for_new_map@@YAXXZ");
//};

//public: void s_game_state_file_storage_manfiest::initialize(void)
//{
//    mangled_ppc("?initialize@s_game_state_file_storage_manfiest@@QAAXXZ");
//};

//long game_state_get_storage_count(void)
//{
//    mangled_ppc("?game_state_get_storage_count@@YAJXZ");
//};

//void game_state_write_to_storage(long)
//{
//    mangled_ppc("?game_state_write_to_storage@@YAXJ@Z");
//};

//bool game_state_storage_is_valid(long)
//{
//    mangled_ppc("?game_state_storage_is_valid@@YA_NJ@Z");
//};

//bool game_state_read_from_storage(long, long)
//{
//    mangled_ppc("?game_state_read_from_storage@@YA_NJJ@Z");
//};

//bool game_state_read_header_from_storage(long, struct s_game_state_header *)
//{
//    mangled_ppc("?game_state_read_header_from_storage@@YA_NJPAUs_game_state_header@@@Z");
//};

//bool game_state_persistent_storage_exists(enum e_controller_index)
//{
//    mangled_ppc("?game_state_persistent_storage_exists@@YA_NW4e_controller_index@@@Z");
//};

//void game_state_file_storage_get_state_for_film_clip(struct s_game_state_file_storage_manfiest *)
//{
//    mangled_ppc("?game_state_file_storage_get_state_for_film_clip@@YAXPAUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_file_storage_set_state_for_film_clip(struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_file_storage_set_state_for_film_clip@@YAXPBUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_file_storage_notify_film_checkpoint_allocated(long, struct s_game_state_file_storage_manfiest *)
//{
//    mangled_ppc("?game_state_file_storage_notify_film_checkpoint_allocated@@YAXJPAUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_file_storage_notify_film_checkpoint_released(long, struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_file_storage_notify_film_checkpoint_released@@YAXJPBUs_game_state_file_storage_manfiest@@@Z");
//};

//void game_state_file_storage_notify_film_checkpoint_reverted(long, struct s_game_state_file_storage_manfiest const *)
//{
//    mangled_ppc("?game_state_file_storage_notify_film_checkpoint_reverted@@YAXJPBUs_game_state_file_storage_manfiest@@@Z");
//};

//bool game_state_file_storage_get_file_handle(long, struct s_file_handle *)
//{
//    mangled_ppc("?game_state_file_storage_get_file_handle@@YA_NJPAUs_file_handle@@@Z");
//};

//public: virtual char const * c_game_state_xenon_optional_cache_saving_callback::get_name(void)
//{
//    mangled_ppc("?get_name@c_game_state_xenon_optional_cache_saving_callback@@UAAPBDXZ");
//};

//public: virtual void c_game_state_xenon_optional_cache_saving_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *)
//{
//    mangled_ppc("?get_memory_configuration@c_game_state_xenon_optional_cache_saving_callback@@UAAXW4e_map_memory_configuration@@PAUs_optional_cache_user_memory_configuration@@@Z");
//};

//public: virtual void c_game_state_xenon_optional_cache_saving_callback::idle(void const *)
//{
//    mangled_ppc("?idle@c_game_state_xenon_optional_cache_saving_callback@@UAAXPBX@Z");
//};

//public: virtual void c_game_state_xenon_optional_cache_saving_callback::terminate(void const *)
//{
//    mangled_ppc("?terminate@c_game_state_xenon_optional_cache_saving_callback@@UAAXPBX@Z");
//};

//public: virtual char const * c_game_state_xenon_optional_cache_loading_callback::get_name(void)
//{
//    mangled_ppc("?get_name@c_game_state_xenon_optional_cache_loading_callback@@UAAPBDXZ");
//};

//public: virtual void c_game_state_xenon_optional_cache_loading_callback::get_memory_configuration(enum e_map_memory_configuration, struct s_optional_cache_user_memory_configuration *)
//{
//    mangled_ppc("?get_memory_configuration@c_game_state_xenon_optional_cache_loading_callback@@UAAXW4e_map_memory_configuration@@PAUs_optional_cache_user_memory_configuration@@@Z");
//};

//public: virtual void c_game_state_xenon_optional_cache_loading_callback::idle(void const *)
//{
//    mangled_ppc("?idle@c_game_state_xenon_optional_cache_loading_callback@@UAAXPBX@Z");
//};

//public: virtual void c_game_state_xenon_optional_cache_loading_callback::terminate(void const *)
//{
//    mangled_ppc("?terminate@c_game_state_xenon_optional_cache_loading_callback@@UAAXPBX@Z");
//};

//void game_state_yield_until_done(void)
//{
//    mangled_ppc("?game_state_yield_until_done@@YAXXZ");
//};

//void game_state_idle_save_game_block(void const *)
//{
//    mangled_ppc("?game_state_idle_save_game_block@@YAXPBX@Z");
//};

//enum e_async_completion game_state_write_signature_callback(void *)
//{
//    mangled_ppc("?game_state_write_signature_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//void game_state_terminate_save_game_block(void const *)
//{
//    mangled_ppc("?game_state_terminate_save_game_block@@YAXPBX@Z");
//};

//void game_state_initialize_file_storage(void)
//{
//    mangled_ppc("?game_state_initialize_file_storage@@YAXXZ");
//};

//void game_state_initialize_memory_storage(void)
//{
//    mangled_ppc("?game_state_initialize_memory_storage@@YAXXZ");
//};

//void game_state_dispose_file_storage(void)
//{
//    mangled_ppc("?game_state_dispose_file_storage@@YAXXZ");
//};

//void game_state_dispose_memory_storage(void)
//{
//    mangled_ppc("?game_state_dispose_memory_storage@@YAXXZ");
//};

//void game_state_write_to_file_storage(long)
//{
//    mangled_ppc("?game_state_write_to_file_storage@@YAXJ@Z");
//};

//void game_state_write_to_memory_storage(long)
//{
//    mangled_ppc("?game_state_write_to_memory_storage@@YAXJ@Z");
//};

//bool game_state_file_storage_is_valid(long)
//{
//    mangled_ppc("?game_state_file_storage_is_valid@@YA_NJ@Z");
//};

//bool game_state_memory_storage_is_valid(long)
//{
//    mangled_ppc("?game_state_memory_storage_is_valid@@YA_NJ@Z");
//};

//bool game_state_read_from_file_storage(long, long)
//{
//    mangled_ppc("?game_state_read_from_file_storage@@YA_NJJ@Z");
//};

//bool game_state_read_header_from_file_storage(long, struct s_game_state_header *)
//{
//    mangled_ppc("?game_state_read_header_from_file_storage@@YA_NJPAUs_game_state_header@@@Z");
//};

//void game_state_dereference_and_initialize_runtime_manifest(void)
//{
//    mangled_ppc("?game_state_dereference_and_initialize_runtime_manifest@@YAXXZ");
//};

//bool game_state_read_from_memory_storage(long, long)
//{
//    mangled_ppc("?game_state_read_from_memory_storage@@YA_NJJ@Z");
//};

//bool game_state_read_header_from_memory_storage(long, struct s_game_state_header *)
//{
//    mangled_ppc("?game_state_read_header_from_memory_storage@@YA_NJPAUs_game_state_header@@@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_game_state_xenon_storage_file_manager@@QAAXXZ");
//};

//public: void c_game_state_xenon_storage_file_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_game_state_xenon_storage_file_manager@@QAAXXZ");
//};

//public: void c_game_state_xenon_storage_file_manager::clear(void)
//{
//    mangled_ppc("?clear@c_game_state_xenon_storage_file_manager@@QAAXXZ");
//};

//public: long c_game_state_xenon_storage_file_manager::allocate_file_storage(long)
//{
//    mangled_ppc("?allocate_file_storage@c_game_state_xenon_storage_file_manager@@QAAJJ@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::increment_refrence(enum c_game_state_xenon_storage_file_manager::e_reference_type, long, long)
//{
//    mangled_ppc("?increment_refrence@c_game_state_xenon_storage_file_manager@@QAAXW4e_reference_type@1@JJ@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::decrement_refrence(enum c_game_state_xenon_storage_file_manager::e_reference_type, long, long)
//{
//    mangled_ppc("?decrement_refrence@c_game_state_xenon_storage_file_manager@@QAAXW4e_reference_type@1@JJ@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::set_valid_for_read(long, bool)
//{
//    mangled_ppc("?set_valid_for_read@c_game_state_xenon_storage_file_manager@@QAAXJ_N@Z");
//};

//public: bool c_game_state_xenon_storage_file_manager::initialized(void) const
//{
//    mangled_ppc("?initialized@c_game_state_xenon_storage_file_manager@@QBA_NXZ");
//};

//public: bool c_game_state_xenon_storage_file_manager::get_referenced(long) const
//{
//    mangled_ppc("?get_referenced@c_game_state_xenon_storage_file_manager@@QBA_NJ@Z");
//};

//public: bool c_game_state_xenon_storage_file_manager::get_referenced_by_type(enum c_game_state_xenon_storage_file_manager::e_reference_type, long) const
//{
//    mangled_ppc("?get_referenced_by_type@c_game_state_xenon_storage_file_manager@@QBA_NW4e_reference_type@1@J@Z");
//};

//public: bool c_game_state_xenon_storage_file_manager::get_valid_for_read(long) const
//{
//    mangled_ppc("?get_valid_for_read@c_game_state_xenon_storage_file_manager@@QBA_NJ@Z");
//};

//public: struct s_file_handle c_game_state_xenon_storage_file_manager::get_file_handle(long) const
//{
//    mangled_ppc("?get_file_handle@c_game_state_xenon_storage_file_manager@@QBA?AUs_file_handle@@J@Z");
//};

//public: struct s_file_handle c_game_state_xenon_storage_file_manager::get_file_handle_allow_unreferenced(long) const
//{
//    mangled_ppc("?get_file_handle_allow_unreferenced@c_game_state_xenon_storage_file_manager@@QBA?AUs_file_handle@@J@Z");
//};

//public: long c_game_state_xenon_storage_file_manager::get_referenced_count(void) const
//{
//    mangled_ppc("?get_referenced_count@c_game_state_xenon_storage_file_manager@@QBAJXZ");
//};

//public: long c_game_state_xenon_storage_file_manager::get_referenced_count_by_type(enum c_game_state_xenon_storage_file_manager::e_reference_type) const
//{
//    mangled_ppc("?get_referenced_count_by_type@c_game_state_xenon_storage_file_manager@@QBAJW4e_reference_type@1@@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::verify_identifier(long) const
//{
//    mangled_ppc("?verify_identifier@c_game_state_xenon_storage_file_manager@@QBAXJ@Z");
//};

//public: void c_game_state_xenon_storage_file_manager::validate(void) const
//{
//    mangled_ppc("?validate@c_game_state_xenon_storage_file_manager@@QBAXXZ");
//};

//private: bool c_game_state_xenon_storage_file_manager::initialize_storage_directory(void)
//{
//    mangled_ppc("?initialize_storage_directory@c_game_state_xenon_storage_file_manager@@AAA_NXZ");
//};

//private: bool c_game_state_xenon_storage_file_manager::initialize_storage_file(long)
//{
//    mangled_ppc("?initialize_storage_file@c_game_state_xenon_storage_file_manager@@AAA_NJ@Z");
//};

//private: void c_game_state_xenon_storage_file_manager::dispose_storage_file(long)
//{
//    mangled_ppc("?dispose_storage_file@c_game_state_xenon_storage_file_manager@@AAAXJ@Z");
//};

//private: struct s_game_state_storage_file * c_game_state_xenon_storage_file_manager::get_storage_file_writable(long)
//{
//    mangled_ppc("?get_storage_file_writable@c_game_state_xenon_storage_file_manager@@AAAPAUs_game_state_storage_file@@J@Z");
//};

//private: struct s_game_state_storage_file const * c_game_state_xenon_storage_file_manager::get_storage_file(long) const
//{
//    mangled_ppc("?get_storage_file@c_game_state_xenon_storage_file_manager@@ABAPBUs_game_state_storage_file@@J@Z");
//};

//private: long c_game_state_xenon_storage_file_manager::get_file_index_from_identifier(long) const
//{
//    mangled_ppc("?get_file_index_from_identifier@c_game_state_xenon_storage_file_manager@@ABAJJ@Z");
//};

//private: long c_game_state_xenon_storage_file_manager::get_identifier_from_file_index(long) const
//{
//    mangled_ppc("?get_identifier_from_file_index@c_game_state_xenon_storage_file_manager@@ABAJJ@Z");
//};

//public: static long s_static_array<struct s_game_state_storage_file, 24>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_game_state_storage_file@@$0BI@@@SAJXZ");
//};

//public: void c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_game_state_storage_file_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_game_state_storage_file_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_game_state_storage_file_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_game_state_storage_file_flags@@_N@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: long c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: void c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JG$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JG$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: long c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JG$0L@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//struct s_async_task_id async_task_add<struct s_game_state_signature_task>(long, struct s_game_state_signature_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_game_state_signature_task@@@@YA?AUs_async_task_id@@JPBUs_game_state_signature_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: struct s_game_state_storage_file & s_static_array<struct s_game_state_storage_file, 24>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_state_storage_file@@$0BI@@@QAAAAUs_game_state_storage_file@@J@Z");
//};

//public: struct s_game_state_storage_file const & s_static_array<struct s_game_state_storage_file, 24>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_state_storage_file@@$0BI@@@QBAABUs_game_state_storage_file@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_game_state_storage_file_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_game_state_storage_file_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_state_storage_file_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_game_state_storage_file_flags@@@Z");
//};

//public: static bool c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JG$0L@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_game_state_signature_task>(long, struct s_game_state_signature_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_game_state_signature_task@@@@YA?AUs_async_task_id@@JPBUs_game_state_signature_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: static bool s_static_array<struct s_game_state_storage_file, 24>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_game_state_storage_file@@$0BI@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JE$01Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//private: static unsigned short c_flags_no_init<long, unsigned short, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JG$0L@Us_default_enum_string_resolver@@@@CAGJ@Z");
//};

//public: s_xenon_game_state_globals::s_xenon_game_state_globals(void)
//{
//    mangled_ppc("??0s_xenon_game_state_globals@@QAA@XZ");
//};

//public: c_game_state_xenon_storage_file_manager::c_game_state_xenon_storage_file_manager(void)
//{
//    mangled_ppc("??0c_game_state_xenon_storage_file_manager@@QAA@XZ");
//};

//public: s_static_array<struct s_game_state_storage_file, 24>::s_static_array<struct s_game_state_storage_file, 24>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_game_state_storage_file@@$0BI@@@QAA@XZ");
//};

//public: s_game_state_storage_file::s_game_state_storage_file(void)
//{
//    mangled_ppc("??0s_game_state_storage_file@@QAA@XZ");
//};

//public: c_flags<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<long, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JE$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<long, unsigned short, 11, struct s_default_enum_string_resolver>::c_flags<long, unsigned short, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JG$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_storage_file_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_state_storage_file_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_state_storage_file_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_game_state_storage_file_flags@@@Z");
//};

//public: c_game_state_xenon_optional_cache_saving_callback::c_game_state_xenon_optional_cache_saving_callback(void)
//{
//    mangled_ppc("??0c_game_state_xenon_optional_cache_saving_callback@@QAA@XZ");
//};

//public: c_game_state_xenon_optional_cache_loading_callback::c_game_state_xenon_optional_cache_loading_callback(void)
//{
//    mangled_ppc("??0c_game_state_xenon_optional_cache_loading_callback@@QAA@XZ");
//};

//public: s_xenon_game_state_globals::~s_xenon_game_state_globals(void)
//{
//    mangled_ppc("??1s_xenon_game_state_globals@@QAA@XZ");
//};

//void xenon_game_state_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fxenon_game_state_globals@@YAXXZ");
//};

