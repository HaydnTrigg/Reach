/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_network_debug_globals_basic_scoreboard_metrics_enabled; // "?g_network_debug_globals_basic_scoreboard_metrics_enabled@@3_NA"
// bool g_network_debug_globals_detailed_metrics_enabled; // "?g_network_debug_globals_detailed_metrics_enabled@@3_NA"
// bool g_network_interface_show_latency_and_framerate_metrics_on_chud; // "?g_network_interface_show_latency_and_framerate_metrics_on_chud@@3_NA"
// bool g_network_interface_fake_latency_and_framerate_metrics_on_chud; // "?g_network_interface_fake_latency_and_framerate_metrics_on_chud@@3_NA"
// bool g_network_debug_globals_latency_and_framerate_metrics_enabled; // "?g_network_debug_globals_latency_and_framerate_metrics_enabled@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_simulation_debug_globals_allocator::*)(void *)> g_simulation_debug_globals_allocator; // "?g_simulation_debug_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@A"
// struct s_simulation_debug_globals *g_simulation_debug_globals; // "?g_simulation_debug_globals@@3PAUs_simulation_debug_globals@@A"

// void __tls_set_g_simulation_debug_globals_allocator(void *);
// void simulation_debug_globals_get_game_network_quality(struct s_network_game_quality *);
// enum e_network_rough_quality get_local_framerate_quality(void);
// enum e_network_rough_quality get_local_latency_quality(long *);
// struct s_simulation_player_network_metrics const * simulation_debug_globals_get_player_network_metrics(long);
// struct s_simulation_player_basic_scoreboard_metrics const * simulation_debug_globals_get_player_basic_scoreboard_metrics(long);
// void simulation_debug_globals_set_host_framerate_quality(enum e_network_rough_quality);
// void simulation_debug_globals_set_player_network_metrics(long, struct s_simulation_player_network_metrics const *);
// void simulation_debug_globals_set_player_basic_scoreboard_metrics(long, struct s_simulation_player_basic_scoreboard_metrics const *);
// void simulation_debug_globals_initialize(void);
// void simulation_debug_globals_dispose(void);
// void simulation_debug_globals_initialize_for_new_map(void);
// void simulation_debug_globals_dispose_from_old_map(void);
// void simulation_debug_globals_update(void);
// void simulation_debug_globals_update_host_framerate_quality(void);
// void simulation_debug_globals_update_network_metrics(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// float simulation_rate_player_network_metrics(struct s_simulation_player_network_metrics const *);
// struct s_net_quality_visualization_mode_configuration const * get_quality_visualization_mode_configuration(void);
// void simulation_debug_globals_set_simulation_object_glue_index(long);
// long simulation_debug_globals_get_simulation_object_glue_index(void);
// void simulation_debug_globals_detach_from_simulation(void);
// void simulation_debug_globals_promote_to_simulation_authority(void);
// void simulation_debug_globals_create_simulation_entity(void);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::valid(void) const;
// public: static class c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::make_flag(long);
// public: float const & s_static_array<float, 16>::operator[]<long>(long) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>(void);
// void g_simulation_debug_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_simulation_debug_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z");
//};

//void simulation_debug_globals_get_game_network_quality(struct s_network_game_quality *)
//{
//    mangled_ppc("?simulation_debug_globals_get_game_network_quality@@YAXPAUs_network_game_quality@@@Z");
//};

//enum e_network_rough_quality get_local_framerate_quality(void)
//{
//    mangled_ppc("?get_local_framerate_quality@@YA?AW4e_network_rough_quality@@XZ");
//};

//enum e_network_rough_quality get_local_latency_quality(long *)
//{
//    mangled_ppc("?get_local_latency_quality@@YA?AW4e_network_rough_quality@@PAJ@Z");
//};

//struct s_simulation_player_network_metrics const * simulation_debug_globals_get_player_network_metrics(long)
//{
//    mangled_ppc("?simulation_debug_globals_get_player_network_metrics@@YAPBUs_simulation_player_network_metrics@@J@Z");
//};

//struct s_simulation_player_basic_scoreboard_metrics const * simulation_debug_globals_get_player_basic_scoreboard_metrics(long)
//{
//    mangled_ppc("?simulation_debug_globals_get_player_basic_scoreboard_metrics@@YAPBUs_simulation_player_basic_scoreboard_metrics@@J@Z");
//};

//void simulation_debug_globals_set_host_framerate_quality(enum e_network_rough_quality)
//{
//    mangled_ppc("?simulation_debug_globals_set_host_framerate_quality@@YAXW4e_network_rough_quality@@@Z");
//};

//void simulation_debug_globals_set_player_network_metrics(long, struct s_simulation_player_network_metrics const *)
//{
//    mangled_ppc("?simulation_debug_globals_set_player_network_metrics@@YAXJPBUs_simulation_player_network_metrics@@@Z");
//};

//void simulation_debug_globals_set_player_basic_scoreboard_metrics(long, struct s_simulation_player_basic_scoreboard_metrics const *)
//{
//    mangled_ppc("?simulation_debug_globals_set_player_basic_scoreboard_metrics@@YAXJPBUs_simulation_player_basic_scoreboard_metrics@@@Z");
//};

//void simulation_debug_globals_initialize(void)
//{
//    mangled_ppc("?simulation_debug_globals_initialize@@YAXXZ");
//};

//void simulation_debug_globals_dispose(void)
//{
//    mangled_ppc("?simulation_debug_globals_dispose@@YAXXZ");
//};

//void simulation_debug_globals_initialize_for_new_map(void)
//{
//    mangled_ppc("?simulation_debug_globals_initialize_for_new_map@@YAXXZ");
//};

//void simulation_debug_globals_dispose_from_old_map(void)
//{
//    mangled_ppc("?simulation_debug_globals_dispose_from_old_map@@YAXXZ");
//};

//void simulation_debug_globals_update(void)
//{
//    mangled_ppc("?simulation_debug_globals_update@@YAXXZ");
//};

//void simulation_debug_globals_update_host_framerate_quality(void)
//{
//    mangled_ppc("?simulation_debug_globals_update_host_framerate_quality@@YAXXZ");
//};

//void simulation_debug_globals_update_network_metrics(void)
//{
//    mangled_ppc("?simulation_debug_globals_update_network_metrics@@YAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//float simulation_rate_player_network_metrics(struct s_simulation_player_network_metrics const *)
//{
//    mangled_ppc("?simulation_rate_player_network_metrics@@YAMPBUs_simulation_player_network_metrics@@@Z");
//};

//struct s_net_quality_visualization_mode_configuration const * get_quality_visualization_mode_configuration(void)
//{
//    mangled_ppc("?get_quality_visualization_mode_configuration@@YAPBUs_net_quality_visualization_mode_configuration@@XZ");
//};

//void simulation_debug_globals_set_simulation_object_glue_index(long)
//{
//    mangled_ppc("?simulation_debug_globals_set_simulation_object_glue_index@@YAXJ@Z");
//};

//long simulation_debug_globals_get_simulation_object_glue_index(void)
//{
//    mangled_ppc("?simulation_debug_globals_get_simulation_object_glue_index@@YAJXZ");
//};

//void simulation_debug_globals_detach_from_simulation(void)
//{
//    mangled_ppc("?simulation_debug_globals_detach_from_simulation@@YAXXZ");
//};

//void simulation_debug_globals_promote_to_simulation_authority(void)
//{
//    mangled_ppc("?simulation_debug_globals_promote_to_simulation_authority@@YAXXZ");
//};

//void simulation_debug_globals_create_simulation_entity(void)
//{
//    mangled_ppc("?simulation_debug_globals_create_simulation_entity@@YAXXZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: static class c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 64, struct s_default_enum_string_resolver>::make_flag(long)
//{
//    mangled_ppc("?make_flag@?$c_flags_no_init@J_K$0EA@Us_default_enum_string_resolver@@@@SA?AV1@J@Z");
//};

//public: float const & s_static_array<float, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@M$0BA@@@QBAABMJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_simulation_debug_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_simulation_debug_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_simulation_debug_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_simulation_debug_globals_allocator@@YAXXZ");
//};

