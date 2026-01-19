/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_struct_definition rumble_frequency_definition_struct; // "?rumble_frequency_definition_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition rumble_block; // "?rumble_block@@3Us_tag_block_definition@@A"
// struct s_tag_reference_definition global_rumble_reference; // "?global_rumble_reference@@3Us_tag_reference_definition@@A"
// struct s_tag_group rumble_group; // "?rumble_group@@3Us_tag_group@@A"
// bool g_rumble_enable_in_playback; // "?g_rumble_enable_in_playback@@3_NA"
// struct s_tag_group_legacy_vtable legacy_rumble_vtable; // "?legacy_rumble_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_rumble_stream_definition; // "?legacy_rumble_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_rumble_xsync_declaration; // "?legacy_rumble_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_rumble_globals_allocator::*)(void *)> g_rumble_globals_allocator; // "?g_rumble_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_rumble_vtable_shim; // "?legacy_rumble_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct rumble_global_data *rumble_globals; // "?rumble_globals@@3PAUrumble_global_data@@A"

// void __tls_set_g_rumble_globals_allocator(void *);
// void rumble_initialize(void);
// void rumble_dispose(void);
// void rumble_initialize_for_new_map(void);
// void rumble_dispose_from_old_map(void);
// void rumble_player_clear_scripted_effect(void);
// void rumble_player_set_scripted_values(float, float);
// void rumble_player_set_scripted_values_for_player(long, float, float);
// struct player_rumble_datum * rumble_get(enum e_output_user_index);
// void rumble_player_set_scripted_scale(float);
// void rumble_update(float);
// void rumble_player_impulse(enum e_output_user_index, long, float, struct s_area_control_datum const *);
// long rumble_find_available_impulse_index(enum e_output_user_index);
// void rumble_player_clear(enum e_output_user_index);
// void rumble_player_clear_all(void);
// void rumble_clear_all_now(void);
// void rumble_player_continuous(enum e_output_user_index, float, float);
// struct rumble_data rumble_calculate(struct player_rumble_datum const *);
// void rumble_handle_deleted_object(long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>(void);
// void g_rumble_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_rumble_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z");
//};

//void rumble_initialize(void)
//{
//    mangled_ppc("?rumble_initialize@@YAXXZ");
//};

//void rumble_dispose(void)
//{
//    mangled_ppc("?rumble_dispose@@YAXXZ");
//};

//void rumble_initialize_for_new_map(void)
//{
//    mangled_ppc("?rumble_initialize_for_new_map@@YAXXZ");
//};

//void rumble_dispose_from_old_map(void)
//{
//    mangled_ppc("?rumble_dispose_from_old_map@@YAXXZ");
//};

//void rumble_player_clear_scripted_effect(void)
//{
//    mangled_ppc("?rumble_player_clear_scripted_effect@@YAXXZ");
//};

//void rumble_player_set_scripted_values(float, float)
//{
//    mangled_ppc("?rumble_player_set_scripted_values@@YAXMM@Z");
//};

//void rumble_player_set_scripted_values_for_player(long, float, float)
//{
//    mangled_ppc("?rumble_player_set_scripted_values_for_player@@YAXJMM@Z");
//};

//struct player_rumble_datum * rumble_get(enum e_output_user_index)
//{
//    mangled_ppc("?rumble_get@@YAPAUplayer_rumble_datum@@W4e_output_user_index@@@Z");
//};

//void rumble_player_set_scripted_scale(float)
//{
//    mangled_ppc("?rumble_player_set_scripted_scale@@YAXM@Z");
//};

//void rumble_update(float)
//{
//    mangled_ppc("?rumble_update@@YAXM@Z");
//};

//void rumble_player_impulse(enum e_output_user_index, long, float, struct s_area_control_datum const *)
//{
//    mangled_ppc("?rumble_player_impulse@@YAXW4e_output_user_index@@JMPBUs_area_control_datum@@@Z");
//};

//long rumble_find_available_impulse_index(enum e_output_user_index)
//{
//    mangled_ppc("?rumble_find_available_impulse_index@@YAJW4e_output_user_index@@@Z");
//};

//void rumble_player_clear(enum e_output_user_index)
//{
//    mangled_ppc("?rumble_player_clear@@YAXW4e_output_user_index@@@Z");
//};

//void rumble_player_clear_all(void)
//{
//    mangled_ppc("?rumble_player_clear_all@@YAXXZ");
//};

//void rumble_clear_all_now(void)
//{
//    mangled_ppc("?rumble_clear_all_now@@YAXXZ");
//};

//void rumble_player_continuous(enum e_output_user_index, float, float)
//{
//    mangled_ppc("?rumble_player_continuous@@YAXW4e_output_user_index@@MM@Z");
//};

//struct rumble_data rumble_calculate(struct player_rumble_datum const *)
//{
//    mangled_ppc("?rumble_calculate@@YA?AUrumble_data@@PBUplayer_rumble_datum@@@Z");
//};

//void rumble_handle_deleted_object(long)
//{
//    mangled_ppc("?rumble_handle_deleted_object@@YAXJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_rumble_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_rumble_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_rumble_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_rumble_globals_allocator@@YAXXZ");
//};

