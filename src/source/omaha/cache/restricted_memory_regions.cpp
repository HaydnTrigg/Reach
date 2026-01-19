/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **g_restricted_region_names; // "?g_restricted_region_names@@3PAPBDA"
// class c_restricted_memory *g_restricted_regions; // "?g_restricted_regions@@3PAVc_restricted_memory@@A"
// bool *g_restricted_alias; // "?g_restricted_alias@@3PA_NA"
// void **g_restricted_address; // "?g_restricted_address@@3PAPAXA"

// char const * restricted_region_get_name(long);
// void restricted_memory_set_base_address(long, void *);
// void * restricted_memory_get_address(long, unsigned long);
// bool restricted_region_valid(long);
// public: bool c_restricted_memory::initialized(void) const;
// bool restricted_region_locked_for_current_thread(long);
// bool restricted_region_primary_locked_for_current_thread(long);
// bool restricted_region_mirror_locked_for_current_thread(long);
// bool restricted_region_aliased_for_current_thread(long);
// void restricted_region_create(long, class c_restricted_section *, enum e_critical_sections, class c_restricted_memory_callbacks *);
// void restricted_region_add_mirror(long, class c_restricted_section *);
// void restricted_region_destroy(long);
// unsigned int restricted_region_get_total_size(long);
// unsigned int restricted_region_get_sector_size(long);
// long restricted_region_get_mirror_count(long);
// bool restricted_region_publish_to_mirror(long);
// bool restricted_region_publish_to_mirror_blocking(long);
// void restricted_region_reset_mirrors(long);
// long restricted_region_add_member(long, char const *, char const *, unsigned int, long, void (*)(void *), void (*)(void *), void (*)(void *));
// void restricted_region_free_member(long, long);
// unsigned long restricted_region_get_member_offset(long, long);
// void * restricted_region_get_member_address(long, long);
// void restricted_region_clear_membership(long);
// void restricted_region_lock_primary(long);
// bool restricted_region_try_and_lock_primary(long);
// void restricted_region_lock_primary_read_only(long);
// bool restricted_region_try_and_lock_primary_read_only(long);
// void restricted_region_unlock_primary_read_only(long);
// bool restricted_region_lock_mirror(long);
// bool restricted_region_try_and_lock_mirror(long);
// void restricted_region_unlock_primary(long);
// void restricted_region_allow_mirror_aliasing(long);
// void restricted_region_block_mirror_aliasing(long);
// void restricted_region_unlock_mirror(long);
// bool restricted_region_lock_mirror_read_only(long);
// bool restricted_region_try_and_lock_mirror_read_only(long);
// void restricted_region_unlock_mirror_read_only(long);
// void restricted_region_handle_gamestate_load(long);
// bool restricted_region_validate_address(long, void const *);
// long restricted_region_find_address(void const *);
// void restricted_region_handle_crash_of_current_thread(void);
// bool restricted_region_wait_for_available_mirror(long, unsigned long);
// bool restricted_region_wait_for_new_write_mirror(long, unsigned long);
// void restricted_region_begin_primary_aliasing(long);
// void restricted_region_begin_aliasing_unprotected(long);
// void restricted_region_end_primary_aliasing(long);
// void restricted_region_add_primary_alias(long);
// void restricted_region_remove_primary_alias(long);
// void restricted_region_begin_mirror_aliasing(long);
// void restricted_region_begin_mirror_aliasing_unprotected(long);
// void restricted_region_end_mirror_aliasing(long);
// void restricted_region_add_mirror_alias(long);
// void restricted_region_remove_mirror_alias(long);
// void g_restricted_regions::`dynamic atexit destructor'(void);

//char const * restricted_region_get_name(long)
//{
//    mangled_ppc("?restricted_region_get_name@@YAPBDJ@Z");
//};

//void restricted_memory_set_base_address(long, void *)
//{
//    mangled_ppc("?restricted_memory_set_base_address@@YAXJPAX@Z");
//};

//void * restricted_memory_get_address(long, unsigned long)
//{
//    mangled_ppc("?restricted_memory_get_address@@YAPAXJK@Z");
//};

//bool restricted_region_valid(long)
//{
//    mangled_ppc("?restricted_region_valid@@YA_NJ@Z");
//};

//public: bool c_restricted_memory::initialized(void) const
//{
//    mangled_ppc("?initialized@c_restricted_memory@@QBA_NXZ");
//};

//bool restricted_region_locked_for_current_thread(long)
//{
//    mangled_ppc("?restricted_region_locked_for_current_thread@@YA_NJ@Z");
//};

//bool restricted_region_primary_locked_for_current_thread(long)
//{
//    mangled_ppc("?restricted_region_primary_locked_for_current_thread@@YA_NJ@Z");
//};

//bool restricted_region_mirror_locked_for_current_thread(long)
//{
//    mangled_ppc("?restricted_region_mirror_locked_for_current_thread@@YA_NJ@Z");
//};

//bool restricted_region_aliased_for_current_thread(long)
//{
//    mangled_ppc("?restricted_region_aliased_for_current_thread@@YA_NJ@Z");
//};

//void restricted_region_create(long, class c_restricted_section *, enum e_critical_sections, class c_restricted_memory_callbacks *)
//{
//    mangled_ppc("?restricted_region_create@@YAXJPAVc_restricted_section@@W4e_critical_sections@@PAVc_restricted_memory_callbacks@@@Z");
//};

//void restricted_region_add_mirror(long, class c_restricted_section *)
//{
//    mangled_ppc("?restricted_region_add_mirror@@YAXJPAVc_restricted_section@@@Z");
//};

//void restricted_region_destroy(long)
//{
//    mangled_ppc("?restricted_region_destroy@@YAXJ@Z");
//};

//unsigned int restricted_region_get_total_size(long)
//{
//    mangled_ppc("?restricted_region_get_total_size@@YAIJ@Z");
//};

//unsigned int restricted_region_get_sector_size(long)
//{
//    mangled_ppc("?restricted_region_get_sector_size@@YAIJ@Z");
//};

//long restricted_region_get_mirror_count(long)
//{
//    mangled_ppc("?restricted_region_get_mirror_count@@YAJJ@Z");
//};

//bool restricted_region_publish_to_mirror(long)
//{
//    mangled_ppc("?restricted_region_publish_to_mirror@@YA_NJ@Z");
//};

//bool restricted_region_publish_to_mirror_blocking(long)
//{
//    mangled_ppc("?restricted_region_publish_to_mirror_blocking@@YA_NJ@Z");
//};

//void restricted_region_reset_mirrors(long)
//{
//    mangled_ppc("?restricted_region_reset_mirrors@@YAXJ@Z");
//};

//long restricted_region_add_member(long, char const *, char const *, unsigned int, long, void (*)(void *), void (*)(void *), void (*)(void *))
//{
//    mangled_ppc("?restricted_region_add_member@@YAJJPBD0IJP6AXPAX@Z22@Z");
//};

//void restricted_region_free_member(long, long)
//{
//    mangled_ppc("?restricted_region_free_member@@YAXJJ@Z");
//};

//unsigned long restricted_region_get_member_offset(long, long)
//{
//    mangled_ppc("?restricted_region_get_member_offset@@YAKJJ@Z");
//};

//void * restricted_region_get_member_address(long, long)
//{
//    mangled_ppc("?restricted_region_get_member_address@@YAPAXJJ@Z");
//};

//void restricted_region_clear_membership(long)
//{
//    mangled_ppc("?restricted_region_clear_membership@@YAXJ@Z");
//};

//void restricted_region_lock_primary(long)
//{
//    mangled_ppc("?restricted_region_lock_primary@@YAXJ@Z");
//};

//bool restricted_region_try_and_lock_primary(long)
//{
//    mangled_ppc("?restricted_region_try_and_lock_primary@@YA_NJ@Z");
//};

//void restricted_region_lock_primary_read_only(long)
//{
//    mangled_ppc("?restricted_region_lock_primary_read_only@@YAXJ@Z");
//};

//bool restricted_region_try_and_lock_primary_read_only(long)
//{
//    mangled_ppc("?restricted_region_try_and_lock_primary_read_only@@YA_NJ@Z");
//};

//void restricted_region_unlock_primary_read_only(long)
//{
//    mangled_ppc("?restricted_region_unlock_primary_read_only@@YAXJ@Z");
//};

//bool restricted_region_lock_mirror(long)
//{
//    mangled_ppc("?restricted_region_lock_mirror@@YA_NJ@Z");
//};

//bool restricted_region_try_and_lock_mirror(long)
//{
//    mangled_ppc("?restricted_region_try_and_lock_mirror@@YA_NJ@Z");
//};

//void restricted_region_unlock_primary(long)
//{
//    mangled_ppc("?restricted_region_unlock_primary@@YAXJ@Z");
//};

//void restricted_region_allow_mirror_aliasing(long)
//{
//    mangled_ppc("?restricted_region_allow_mirror_aliasing@@YAXJ@Z");
//};

//void restricted_region_block_mirror_aliasing(long)
//{
//    mangled_ppc("?restricted_region_block_mirror_aliasing@@YAXJ@Z");
//};

//void restricted_region_unlock_mirror(long)
//{
//    mangled_ppc("?restricted_region_unlock_mirror@@YAXJ@Z");
//};

//bool restricted_region_lock_mirror_read_only(long)
//{
//    mangled_ppc("?restricted_region_lock_mirror_read_only@@YA_NJ@Z");
//};

//bool restricted_region_try_and_lock_mirror_read_only(long)
//{
//    mangled_ppc("?restricted_region_try_and_lock_mirror_read_only@@YA_NJ@Z");
//};

//void restricted_region_unlock_mirror_read_only(long)
//{
//    mangled_ppc("?restricted_region_unlock_mirror_read_only@@YAXJ@Z");
//};

//void restricted_region_handle_gamestate_load(long)
//{
//    mangled_ppc("?restricted_region_handle_gamestate_load@@YAXJ@Z");
//};

//bool restricted_region_validate_address(long, void const *)
//{
//    mangled_ppc("?restricted_region_validate_address@@YA_NJPBX@Z");
//};

//long restricted_region_find_address(void const *)
//{
//    mangled_ppc("?restricted_region_find_address@@YAJPBX@Z");
//};

//void restricted_region_handle_crash_of_current_thread(void)
//{
//    mangled_ppc("?restricted_region_handle_crash_of_current_thread@@YAXXZ");
//};

//bool restricted_region_wait_for_available_mirror(long, unsigned long)
//{
//    mangled_ppc("?restricted_region_wait_for_available_mirror@@YA_NJK@Z");
//};

//bool restricted_region_wait_for_new_write_mirror(long, unsigned long)
//{
//    mangled_ppc("?restricted_region_wait_for_new_write_mirror@@YA_NJK@Z");
//};

//void restricted_region_begin_primary_aliasing(long)
//{
//    mangled_ppc("?restricted_region_begin_primary_aliasing@@YAXJ@Z");
//};

//void restricted_region_begin_aliasing_unprotected(long)
//{
//    mangled_ppc("?restricted_region_begin_aliasing_unprotected@@YAXJ@Z");
//};

//void restricted_region_end_primary_aliasing(long)
//{
//    mangled_ppc("?restricted_region_end_primary_aliasing@@YAXJ@Z");
//};

//void restricted_region_add_primary_alias(long)
//{
//    mangled_ppc("?restricted_region_add_primary_alias@@YAXJ@Z");
//};

//void restricted_region_remove_primary_alias(long)
//{
//    mangled_ppc("?restricted_region_remove_primary_alias@@YAXJ@Z");
//};

//void restricted_region_begin_mirror_aliasing(long)
//{
//    mangled_ppc("?restricted_region_begin_mirror_aliasing@@YAXJ@Z");
//};

//void restricted_region_begin_mirror_aliasing_unprotected(long)
//{
//    mangled_ppc("?restricted_region_begin_mirror_aliasing_unprotected@@YAXJ@Z");
//};

//void restricted_region_end_mirror_aliasing(long)
//{
//    mangled_ppc("?restricted_region_end_mirror_aliasing@@YAXJ@Z");
//};

//void restricted_region_add_mirror_alias(long)
//{
//    mangled_ppc("?restricted_region_add_mirror_alias@@YAXJ@Z");
//};

//void restricted_region_remove_mirror_alias(long)
//{
//    mangled_ppc("?restricted_region_remove_mirror_alias@@YAXJ@Z");
//};

//void g_restricted_regions::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_restricted_regions@@YAXXZ");
//};

