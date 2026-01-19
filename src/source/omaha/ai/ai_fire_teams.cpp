/* ---------- headers */

#include "omaha\ai\ai_fire_teams.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_ai_directive_data_allocator::*)(void *)> g_ai_directive_data_allocator; // "?g_ai_directive_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *ai_directive_data; // "?ai_directive_data@@3PAUs_data_array@@A"

// void __tls_set_g_ai_directive_data_allocator(void *);
// void ai_fire_teams_initialize(void);
// void ai_fire_teams_dispose(void);
// void ai_fire_teams_initialize_for_new_map(void);
// void ai_fire_teams_dispose_from_old_map(void);
// long ai_directive_new(void);
// void ai_directive_delete(long);
// void ai_directive_setup(long, long, enum e_directive_types, long);
// bool ai_directive_data_match(long, struct fire_team_directive_data const *);
// bool ai_directive_is_finished(long);
// void ai_directive_evaluate(long, struct fire_team_directive_data const *);
// void ai_directive_activate(long);
// void ai_directive_deactivate(long, long);
// void ai_directive_handle_deleted_actor(long, long);
// void ai_directive_handle_deleted_object(long, long);
// void ai_directive_clear(long);
// public: ai_directive_score::ai_directive_score(void);
// bool ai_directive_has_been_scored(long);
// void ai_directive_scoring_begin(long);
// void ai_directive_scoring_end(long);
// bool ai_directive_score_sort_callback(void const *, void const *, void const *);
// void ai_directive_score_actor(long, long, float);
// long ai_directive_get_next_scored_actor(long);
// void ai_fire_team_debug_render(long);
// void ai_directive_debug_render(long);
// bool ai_directive_datum_available_to_current_thread(void);
// public: c_enum<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_ai_directive_types);
// public: enum e_ai_directive_types c_enum_no_init<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_ai_directive_types(void) const;
// public: void s_static_array<struct ai_directive_score, 16>::set_all(struct ai_directive_score const &);
// ?sort@?$s_static_array@Uai_directive_score@@$0BA@@@QAAXQ6A_NPBX00@Z0@Z;
// public: struct ai_directive_score & s_static_array<struct ai_directive_score, 16>::operator[]<int>(int);
// struct ai_directive_vehicle * ai_directive_get_data<struct ai_directive_vehicle>(struct ai_directive_datum *);
// public: static bool s_static_array<struct ai_directive_score, 16>::valid<int>(int);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>(void);
// void g_ai_directive_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_ai_directive_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z");
//};

//void ai_fire_teams_initialize(void)
//{
//    mangled_ppc("?ai_fire_teams_initialize@@YAXXZ");
//};

//void ai_fire_teams_dispose(void)
//{
//    mangled_ppc("?ai_fire_teams_dispose@@YAXXZ");
//};

//void ai_fire_teams_initialize_for_new_map(void)
//{
//    mangled_ppc("?ai_fire_teams_initialize_for_new_map@@YAXXZ");
//};

//void ai_fire_teams_dispose_from_old_map(void)
//{
//    mangled_ppc("?ai_fire_teams_dispose_from_old_map@@YAXXZ");
//};

//long ai_directive_new(void)
//{
//    mangled_ppc("?ai_directive_new@@YAJXZ");
//};

//void ai_directive_delete(long)
//{
//    mangled_ppc("?ai_directive_delete@@YAXJ@Z");
//};

//void ai_directive_setup(long, long, enum e_directive_types, long)
//{
//    mangled_ppc("?ai_directive_setup@@YAXJJW4e_directive_types@@J@Z");
//};

//bool ai_directive_data_match(long, struct fire_team_directive_data const *)
//{
//    mangled_ppc("?ai_directive_data_match@@YA_NJPBUfire_team_directive_data@@@Z");
//};

//bool ai_directive_is_finished(long)
//{
//    mangled_ppc("?ai_directive_is_finished@@YA_NJ@Z");
//};

//void ai_directive_evaluate(long, struct fire_team_directive_data const *)
//{
//    mangled_ppc("?ai_directive_evaluate@@YAXJPBUfire_team_directive_data@@@Z");
//};

//void ai_directive_activate(long)
//{
//    mangled_ppc("?ai_directive_activate@@YAXJ@Z");
//};

//void ai_directive_deactivate(long, long)
//{
//    mangled_ppc("?ai_directive_deactivate@@YAXJJ@Z");
//};

//void ai_directive_handle_deleted_actor(long, long)
//{
//    mangled_ppc("?ai_directive_handle_deleted_actor@@YAXJJ@Z");
//};

//void ai_directive_handle_deleted_object(long, long)
//{
//    mangled_ppc("?ai_directive_handle_deleted_object@@YAXJJ@Z");
//};

//void ai_directive_clear(long)
//{
//    mangled_ppc("?ai_directive_clear@@YAXJ@Z");
//};

//public: ai_directive_score::ai_directive_score(void)
//{
//    mangled_ppc("??0ai_directive_score@@QAA@XZ");
//};

//bool ai_directive_has_been_scored(long)
//{
//    mangled_ppc("?ai_directive_has_been_scored@@YA_NJ@Z");
//};

//void ai_directive_scoring_begin(long)
//{
//    mangled_ppc("?ai_directive_scoring_begin@@YAXJ@Z");
//};

//void ai_directive_scoring_end(long)
//{
//    mangled_ppc("?ai_directive_scoring_end@@YAXJ@Z");
//};

//bool ai_directive_score_sort_callback(void const *, void const *, void const *)
//{
//    mangled_ppc("?ai_directive_score_sort_callback@@YA_NPBX00@Z");
//};

//void ai_directive_score_actor(long, long, float)
//{
//    mangled_ppc("?ai_directive_score_actor@@YAXJJM@Z");
//};

//long ai_directive_get_next_scored_actor(long)
//{
//    mangled_ppc("?ai_directive_get_next_scored_actor@@YAJJ@Z");
//};

//void ai_fire_team_debug_render(long)
//{
//    mangled_ppc("?ai_fire_team_debug_render@@YAXJ@Z");
//};

//void ai_directive_debug_render(long)
//{
//    mangled_ppc("?ai_directive_debug_render@@YAXJ@Z");
//};

//bool ai_directive_datum_available_to_current_thread(void)
//{
//    mangled_ppc("?ai_directive_datum_available_to_current_thread@@YA_NXZ");
//};

//public: c_enum<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_ai_directive_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_ai_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_ai_directive_types@@@Z");
//};

//public: enum e_ai_directive_types c_enum_no_init<enum e_ai_directive_types, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_ai_directive_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_ai_directive_types@@G$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_ai_directive_types@@XZ");
//};

//public: void s_static_array<struct ai_directive_score, 16>::set_all(struct ai_directive_score const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@Uai_directive_score@@$0BA@@@QAAXABUai_directive_score@@@Z");
//};

//?sort@?$s_static_array@Uai_directive_score@@$0BA@@@QAAXQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort@?$s_static_array@Uai_directive_score@@$0BA@@@QAAXQ6A_NPBX00@Z0@Z");
//};

//public: struct ai_directive_score & s_static_array<struct ai_directive_score, 16>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Uai_directive_score@@$0BA@@@QAAAAUai_directive_score@@H@Z");
//};

//struct ai_directive_vehicle * ai_directive_get_data<struct ai_directive_vehicle>(struct ai_directive_datum *)
//{
//    mangled_ppc("??$ai_directive_get_data@Uai_directive_vehicle@@@@YAPAUai_directive_vehicle@@PAUai_directive_datum@@@Z");
//};

//public: static bool s_static_array<struct ai_directive_score, 16>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Uai_directive_score@@$0BA@@@SA_NH@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_ai_directive_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_ai_directive_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_ai_directive_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ai_directive_data_allocator@@YAXXZ");
//};

