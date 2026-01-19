/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_statistics_query_overlapped_task *, 4>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_statistics_query_overlapped_task@@$03@@2JB"
// public: static long const s_static_array<class c_statistics_write_overlapped_task *, 16>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_statistics_write_overlapped_task@@$0BA@@@2JB"
// long volatile `public: virtual unsigned long __cdecl c_statistics_write_overlapped_task::start(void *)'::`29'::x_event_category_index; // "?x_event_category_index@?BN@??start@c_statistics_write_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_statistics_write_overlapped_task::start(void *)'::`18'::x_event_category_index; // "?x_event_category_index@?BC@??start@c_statistics_write_overlapped_task@@UAAKPAX@Z@4JC"
// long volatile `public: virtual unsigned long __cdecl c_statistics_write_overlapped_task::start(void *)'::`8'::x_event_category_index; // "?x_event_category_index@?7??start@c_statistics_write_overlapped_task@@UAAKPAX@Z@4JC"
// struct s_online_statistics_globals g_online_statistics_globals; // "?g_online_statistics_globals@@3Us_online_statistics_globals@@A"

// void online_statistics_initialize(void);
// public: c_statistics_query_overlapped_task::c_statistics_query_overlapped_task(char const *, long);
// public: virtual char const * c_statistics_query_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_statistics_query_overlapped_task::start(void *);
// merged_82AB6358;
// public: virtual c_statistics_query_overlapped_task::~c_statistics_query_overlapped_task(void);
// public: c_statistics_write_overlapped_task::c_statistics_write_overlapped_task(char const *, long);
// public: virtual char const * c_statistics_write_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_statistics_write_overlapped_task::start(void *);
// merged_82AB6720;
// public: virtual c_statistics_write_overlapped_task::~c_statistics_write_overlapped_task(void);
// void online_statistics_dispose(void);
// bool online_stats_query_initiate(enum e_controller_index, long, unsigned __int64const *, long, struct s_online_stat_query const *);
// public: void c_statistics_query_overlapped_task::initialize(long, unsigned __int64const *, long, struct _XUSER_STATS_SPEC const *);
// enum e_online_stats_query_status online_stats_query_get_status(enum e_controller_index);
// bool online_stats_query_get_results(enum e_controller_index, struct s_online_stat_query_result *);
// bool online_global_stats_write_initiate(void *, long, struct s_online_stat_write const *);
// public: void c_statistics_write_overlapped_task::initialize(void *, unsigned __int64, long, struct s_internal_leaderboard_write const *);
// enum e_online_stats_write_status online_global_stats_write_get_status(void);
// bool online_stats_write_initiate(long, void *, unsigned __int64, long, struct s_online_stat_write const *);
// enum e_online_stats_write_status online_stats_write_get_status(long);
// void online_user_reset_stats_synchronous(enum e_online_leaderboard_id, long);
// void online_reset_stats_synchronous(enum e_online_leaderboard_id);
// public: class c_statistics_query_overlapped_task *& s_static_array<class c_statistics_query_overlapped_task *, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_statistics_write_overlapped_task *& s_static_array<class c_statistics_write_overlapped_task *, 16>::operator[]<long>(long);
// void overlapped_track_delete<class c_statistics_write_overlapped_task>(class c_statistics_write_overlapped_task *);
// void overlapped_track_delete<class c_statistics_query_overlapped_task>(class c_statistics_query_overlapped_task *);
// public: static bool s_static_array<class c_statistics_query_overlapped_task *, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_statistics_write_overlapped_task *, 16>::valid<long>(long);

//void online_statistics_initialize(void)
//{
//    mangled_ppc("?online_statistics_initialize@@YAXXZ");
//};

//public: c_statistics_query_overlapped_task::c_statistics_query_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_statistics_query_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_statistics_query_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_statistics_query_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_statistics_query_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_statistics_query_overlapped_task@@UAAKPAX@Z");
//};

//merged_82AB6358
//{
//    mangled_ppc("merged_82AB6358");
//};

//public: virtual c_statistics_query_overlapped_task::~c_statistics_query_overlapped_task(void)
//{
//    mangled_ppc("??1c_statistics_query_overlapped_task@@UAA@XZ");
//};

//public: c_statistics_write_overlapped_task::c_statistics_write_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_statistics_write_overlapped_task@@QAA@PBDJ@Z");
//};

//public: virtual char const * c_statistics_write_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_statistics_write_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_statistics_write_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_statistics_write_overlapped_task@@UAAKPAX@Z");
//};

//merged_82AB6720
//{
//    mangled_ppc("merged_82AB6720");
//};

//public: virtual c_statistics_write_overlapped_task::~c_statistics_write_overlapped_task(void)
//{
//    mangled_ppc("??1c_statistics_write_overlapped_task@@UAA@XZ");
//};

//void online_statistics_dispose(void)
//{
//    mangled_ppc("?online_statistics_dispose@@YAXXZ");
//};

//bool online_stats_query_initiate(enum e_controller_index, long, unsigned __int64const *, long, struct s_online_stat_query const *)
//{
//    mangled_ppc("?online_stats_query_initiate@@YA_NW4e_controller_index@@JPB_KJPBUs_online_stat_query@@@Z");
//};

//public: void c_statistics_query_overlapped_task::initialize(long, unsigned __int64const *, long, struct _XUSER_STATS_SPEC const *)
//{
//    mangled_ppc("?initialize@c_statistics_query_overlapped_task@@QAAXJPB_KJPBU_XUSER_STATS_SPEC@@@Z");
//};

//enum e_online_stats_query_status online_stats_query_get_status(enum e_controller_index)
//{
//    mangled_ppc("?online_stats_query_get_status@@YA?AW4e_online_stats_query_status@@W4e_controller_index@@@Z");
//};

//bool online_stats_query_get_results(enum e_controller_index, struct s_online_stat_query_result *)
//{
//    mangled_ppc("?online_stats_query_get_results@@YA_NW4e_controller_index@@PAUs_online_stat_query_result@@@Z");
//};

//bool online_global_stats_write_initiate(void *, long, struct s_online_stat_write const *)
//{
//    mangled_ppc("?online_global_stats_write_initiate@@YA_NPAXJPBUs_online_stat_write@@@Z");
//};

//public: void c_statistics_write_overlapped_task::initialize(void *, unsigned __int64, long, struct s_internal_leaderboard_write const *)
//{
//    mangled_ppc("?initialize@c_statistics_write_overlapped_task@@QAAXPAX_KJPBUs_internal_leaderboard_write@@@Z");
//};

//enum e_online_stats_write_status online_global_stats_write_get_status(void)
//{
//    mangled_ppc("?online_global_stats_write_get_status@@YA?AW4e_online_stats_write_status@@XZ");
//};

//bool online_stats_write_initiate(long, void *, unsigned __int64, long, struct s_online_stat_write const *)
//{
//    mangled_ppc("?online_stats_write_initiate@@YA_NJPAX_KJPBUs_online_stat_write@@@Z");
//};

//enum e_online_stats_write_status online_stats_write_get_status(long)
//{
//    mangled_ppc("?online_stats_write_get_status@@YA?AW4e_online_stats_write_status@@J@Z");
//};

//void online_user_reset_stats_synchronous(enum e_online_leaderboard_id, long)
//{
//    mangled_ppc("?online_user_reset_stats_synchronous@@YAXW4e_online_leaderboard_id@@J@Z");
//};

//void online_reset_stats_synchronous(enum e_online_leaderboard_id)
//{
//    mangled_ppc("?online_reset_stats_synchronous@@YAXW4e_online_leaderboard_id@@@Z");
//};

//public: class c_statistics_query_overlapped_task *& s_static_array<class c_statistics_query_overlapped_task *, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@PAVc_statistics_query_overlapped_task@@$03@@QAAAAPAVc_statistics_query_overlapped_task@@W4e_controller_index@@@Z");
//};

//public: class c_statistics_write_overlapped_task *& s_static_array<class c_statistics_write_overlapped_task *, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_statistics_write_overlapped_task@@$0BA@@@QAAAAPAVc_statistics_write_overlapped_task@@J@Z");
//};

//void overlapped_track_delete<class c_statistics_write_overlapped_task>(class c_statistics_write_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_statistics_write_overlapped_task@@@@YAXPAVc_statistics_write_overlapped_task@@@Z");
//};

//void overlapped_track_delete<class c_statistics_query_overlapped_task>(class c_statistics_query_overlapped_task *)
//{
//    mangled_ppc("??$overlapped_track_delete@Vc_statistics_query_overlapped_task@@@@YAXPAVc_statistics_query_overlapped_task@@@Z");
//};

//public: static bool s_static_array<class c_statistics_query_overlapped_task *, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@PAVc_statistics_query_overlapped_task@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_statistics_write_overlapped_task *, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_statistics_write_overlapped_task@@$0BA@@@SA_NJ@Z");
//};

