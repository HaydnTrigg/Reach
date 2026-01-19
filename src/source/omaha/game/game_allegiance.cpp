/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **global_campaign_team_names; // "?global_campaign_team_names@@3PAPBDA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_game_allegiance_globals_allocator::*)(void *)> g_game_allegiance_globals_allocator; // "?g_game_allegiance_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@A"
// struct s_game_allegiance_globals *game_allegiance_globals; // "?game_allegiance_globals@@3PAUs_game_allegiance_globals@@A"

// void __tls_set_g_game_allegiance_globals_allocator(void *);
// void game_allegiance_initialize(void);
// void game_allegiance_dispose(void);
// void game_allegiance_initialize_for_new_map(void);
// void game_allegiance_dispose_from_old_map(void);
// void game_allegiance_update(void);
// void game_allegiance_handle_deleted_object(long);
// void game_allegiance_globals_update(struct s_game_allegiance_globals const *);
// struct s_game_allegiance_globals const * game_allegiance_globals_get(void);
// class c_game_team game_get_object_team(long);
// class c_game_team game_get_player_team(long);
// class c_game_team game_get_unit_team(long);
// bool game_team_is_not_enemy(class c_game_team const &, class c_game_team const &);
// bool game_team_is_enemy(class c_game_team const &, class c_game_team const &);
// bool game_team_is_ally(class c_game_team const &, class c_game_team const &);
// bool game_team_is_friendly(class c_game_team const &, class c_game_team const &);
// bool game_team_is_traitor(class c_game_team const &, class c_game_team const &);
// void game_allegiance_set_object_team(long, enum e_campaign_team);
// bool game_team_ally_status_changed(class c_game_team const &, class c_game_team const &);
// bool game_campaign_team_is_enemy(enum e_campaign_team, enum e_campaign_team);
// bool game_campaign_team_is_ally(enum e_campaign_team, enum e_campaign_team);
// bool game_campaign_team_is_traitor(enum e_campaign_team, enum e_campaign_team);
// bool game_campaign_team_is_friendly(enum e_campaign_team, enum e_campaign_team);
// bool game_campaign_team_ally_status_changed(enum e_campaign_team, enum e_campaign_team);
// bool game_player_is_enemy(long, long);
// short game_allegiance_get_incidents(class c_game_team, class c_game_team, short *);
// void game_allegiance_create(enum e_campaign_team, bool, enum e_campaign_team, bool, short, short);
// bool game_allegiance_remove(enum e_campaign_team, enum e_campaign_team);
// bool game_allegiance_incident(enum e_campaign_team, enum e_campaign_team, enum e_allegiance_incident);
// void game_allegiance_propogate_broken(enum e_campaign_team, enum e_campaign_team, bool, bool);
// void game_allegiance_provoke(enum e_campaign_team, enum e_campaign_team);
// void game_allegiance_notify_change(enum e_campaign_team, enum e_campaign_team);
// bool game_allegiance_betrayal_exists(void);
// void game_allegiance_broken(struct game_allegiance *, bool, bool, bool);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::test(enum e_campaign_team) const;
// public: void c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::set(enum e_campaign_team, bool);
// public: struct s_game_allegiance_tracked_object_allegiance & s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::operator[]<short>(short);
// public: struct game_allegiance & s_static_array<struct game_allegiance, 16>::operator[]<int>(int);
// public: struct game_allegiance & s_static_array<struct game_allegiance, 16>::operator[]<short>(short);
// public: struct s_game_allegiance_tracked_object_allegiance & s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_campaign_team);
// private: static long c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_campaign_team);
// public: static bool s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::valid<short>(short);
// public: static bool s_static_array<struct game_allegiance, 16>::valid<int>(int);
// public: static bool s_static_array<struct game_allegiance, 16>::valid<short>(short);
// public: static bool s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::valid<long>(long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>(void);
// void g_game_allegiance_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_game_allegiance_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z");
//};

//void game_allegiance_initialize(void)
//{
//    mangled_ppc("?game_allegiance_initialize@@YAXXZ");
//};

//void game_allegiance_dispose(void)
//{
//    mangled_ppc("?game_allegiance_dispose@@YAXXZ");
//};

//void game_allegiance_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_allegiance_initialize_for_new_map@@YAXXZ");
//};

//void game_allegiance_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_allegiance_dispose_from_old_map@@YAXXZ");
//};

//void game_allegiance_update(void)
//{
//    mangled_ppc("?game_allegiance_update@@YAXXZ");
//};

//void game_allegiance_handle_deleted_object(long)
//{
//    mangled_ppc("?game_allegiance_handle_deleted_object@@YAXJ@Z");
//};

//void game_allegiance_globals_update(struct s_game_allegiance_globals const *)
//{
//    mangled_ppc("?game_allegiance_globals_update@@YAXPBUs_game_allegiance_globals@@@Z");
//};

//struct s_game_allegiance_globals const * game_allegiance_globals_get(void)
//{
//    mangled_ppc("?game_allegiance_globals_get@@YAPBUs_game_allegiance_globals@@XZ");
//};

//class c_game_team game_get_object_team(long)
//{
//    mangled_ppc("?game_get_object_team@@YA?AVc_game_team@@J@Z");
//};

//class c_game_team game_get_player_team(long)
//{
//    mangled_ppc("?game_get_player_team@@YA?AVc_game_team@@J@Z");
//};

//class c_game_team game_get_unit_team(long)
//{
//    mangled_ppc("?game_get_unit_team@@YA?AVc_game_team@@J@Z");
//};

//bool game_team_is_not_enemy(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_is_not_enemy@@YA_NABVc_game_team@@0@Z");
//};

//bool game_team_is_enemy(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_is_enemy@@YA_NABVc_game_team@@0@Z");
//};

//bool game_team_is_ally(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_is_ally@@YA_NABVc_game_team@@0@Z");
//};

//bool game_team_is_friendly(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_is_friendly@@YA_NABVc_game_team@@0@Z");
//};

//bool game_team_is_traitor(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_is_traitor@@YA_NABVc_game_team@@0@Z");
//};

//void game_allegiance_set_object_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?game_allegiance_set_object_team@@YAXJW4e_campaign_team@@@Z");
//};

//bool game_team_ally_status_changed(class c_game_team const &, class c_game_team const &)
//{
//    mangled_ppc("?game_team_ally_status_changed@@YA_NABVc_game_team@@0@Z");
//};

//bool game_campaign_team_is_enemy(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_campaign_team_is_enemy@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_campaign_team_is_ally(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_campaign_team_is_ally@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_campaign_team_is_traitor(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_campaign_team_is_traitor@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_campaign_team_is_friendly(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_campaign_team_is_friendly@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_campaign_team_ally_status_changed(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_campaign_team_ally_status_changed@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_player_is_enemy(long, long)
//{
//    mangled_ppc("?game_player_is_enemy@@YA_NJJ@Z");
//};

//short game_allegiance_get_incidents(class c_game_team, class c_game_team, short *)
//{
//    mangled_ppc("?game_allegiance_get_incidents@@YAFVc_game_team@@0PAF@Z");
//};

//void game_allegiance_create(enum e_campaign_team, bool, enum e_campaign_team, bool, short, short)
//{
//    mangled_ppc("?game_allegiance_create@@YAXW4e_campaign_team@@_N01FF@Z");
//};

//bool game_allegiance_remove(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_allegiance_remove@@YA_NW4e_campaign_team@@0@Z");
//};

//bool game_allegiance_incident(enum e_campaign_team, enum e_campaign_team, enum e_allegiance_incident)
//{
//    mangled_ppc("?game_allegiance_incident@@YA_NW4e_campaign_team@@0W4e_allegiance_incident@@@Z");
//};

//void game_allegiance_propogate_broken(enum e_campaign_team, enum e_campaign_team, bool, bool)
//{
//    mangled_ppc("?game_allegiance_propogate_broken@@YAXW4e_campaign_team@@0_N1@Z");
//};

//void game_allegiance_provoke(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_allegiance_provoke@@YAXW4e_campaign_team@@0@Z");
//};

//void game_allegiance_notify_change(enum e_campaign_team, enum e_campaign_team)
//{
//    mangled_ppc("?game_allegiance_notify_change@@YAXW4e_campaign_team@@0@Z");
//};

//bool game_allegiance_betrayal_exists(void)
//{
//    mangled_ppc("?game_allegiance_betrayal_exists@@YA_NXZ");
//};

//void game_allegiance_broken(struct game_allegiance *, bool, bool, bool)
//{
//    mangled_ppc("?game_allegiance_broken@@YAXPAUgame_allegiance@@_N11@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::test(enum e_campaign_team) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_campaign_team@@J$07Us_default_enum_string_resolver@@@@QBA_NW4e_campaign_team@@@Z");
//};

//public: void c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::set(enum e_campaign_team, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_campaign_team@@J$07Us_default_enum_string_resolver@@@@QAAXW4e_campaign_team@@_N@Z");
//};

//public: struct s_game_allegiance_tracked_object_allegiance & s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_game_allegiance_tracked_object_allegiance@@$0BA@@@QAAAAUs_game_allegiance_tracked_object_allegiance@@F@Z");
//};

//public: struct game_allegiance & s_static_array<struct game_allegiance, 16>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Ugame_allegiance@@$0BA@@@QAAAAUgame_allegiance@@H@Z");
//};

//public: struct game_allegiance & s_static_array<struct game_allegiance, 16>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Ugame_allegiance@@$0BA@@@QAAAAUgame_allegiance@@F@Z");
//};

//public: struct s_game_allegiance_tracked_object_allegiance & s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_game_allegiance_tracked_object_allegiance@@$0BA@@@QAAAAUs_game_allegiance_tracked_object_allegiance@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_campaign_team)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_campaign_team@@J$07Us_default_enum_string_resolver@@@@SA_NW4e_campaign_team@@@Z");
//};

//private: static long c_flags_no_init<enum e_campaign_team, long, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_campaign_team)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_campaign_team@@J$07Us_default_enum_string_resolver@@@@CAJW4e_campaign_team@@@Z");
//};

//public: static bool s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_game_allegiance_tracked_object_allegiance@@$0BA@@@SA_NF@Z");
//};

//public: static bool s_static_array<struct game_allegiance, 16>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Ugame_allegiance@@$0BA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct game_allegiance, 16>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Ugame_allegiance@@$0BA@@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_game_allegiance_tracked_object_allegiance, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_game_allegiance_tracked_object_allegiance@@$0BA@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_game_allegiance_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_game_allegiance_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_game_allegiance_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_game_allegiance_globals_allocator@@YAXXZ");
//};

