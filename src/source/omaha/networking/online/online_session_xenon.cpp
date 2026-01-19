/* ---------- headers */

#include "omaha\networking\online\online_session_xenon.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void calculate_slot_counts_for_session(struct s_online_session const *, long, long, long *, long *);
// unsigned long calculate_slot_counts(struct s_online_session const *, struct s_online_session *, long *, long *);
// public: virtual unsigned long c_managed_session_overlapped_task::start(void *);
// public: void c_managed_session_overlapped_task::process_create(long, void (*)(long, bool, unsigned long), struct s_online_session *, class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>);
// public: void c_managed_session_overlapped_task::process_delete(long, void (*)(long, bool, unsigned long), struct s_online_session *);
// public: void c_managed_session_overlapped_task::process_session_host_migrate(long, void (*)(long, bool, unsigned long), struct s_online_session *, bool, struct s_transport_session_description *);
// public: void c_managed_session_overlapped_task::process_modify(long, void (*)(long, bool, unsigned long), struct s_online_session *, struct s_online_session *, struct s_online_session *);
// public: void c_managed_session_overlapped_task::process_add_players(long, void (*)(long, bool, unsigned long), struct s_online_session *, unsigned __int64const *, bool const *, bool const *, long);
// public: void c_managed_session_overlapped_task::process_remove_players(long, void (*)(long, bool, unsigned long), struct s_online_session *, unsigned __int64const *, bool const *, long);
// public: static bool c_managed_session_overlapped_task::process_modify_immediately(struct s_online_session *, struct s_online_session *);
// public: bool c_managed_session_overlapped_task::process_add_players_immediately(struct s_online_session *, unsigned __int64const *, bool const *, bool const *, long);
// public: bool c_managed_session_overlapped_task::process_remove_players_immediately(struct s_online_session *, unsigned __int64const *, bool const *, long);
// public: void c_managed_session_overlapped_task::process_game_start(long, void (*)(long, bool, unsigned long), struct s_online_session *);
// public: void c_managed_session_overlapped_task::process_game_end(long, void (*)(long, bool, unsigned long), struct s_online_session *);
// unsigned long build_xsession_flags_from_online_session_flags(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>);
// protected: void c_managed_session_overlapped_task::filter_local_users(long, unsigned __int64const *, bool const *, bool const *);
// public: class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const;

//void calculate_slot_counts_for_session(struct s_online_session const *, long, long, long *, long *)
//{
//    mangled_ppc("?calculate_slot_counts_for_session@@YAXPBUs_online_session@@JJPAJ1@Z");
//};

//unsigned long calculate_slot_counts(struct s_online_session const *, struct s_online_session *, long *, long *)
//{
//    mangled_ppc("?calculate_slot_counts@@YAKPBUs_online_session@@PAU1@PAJ2@Z");
//};

//public: virtual unsigned long c_managed_session_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_managed_session_overlapped_task@@UAAKPAX@Z");
//};

//public: void c_managed_session_overlapped_task::process_create(long, void (*)(long, bool, unsigned long), struct s_online_session *, class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?process_create@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@V?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_managed_session_overlapped_task::process_delete(long, void (*)(long, bool, unsigned long), struct s_online_session *)
//{
//    mangled_ppc("?process_delete@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@@Z");
//};

//public: void c_managed_session_overlapped_task::process_session_host_migrate(long, void (*)(long, bool, unsigned long), struct s_online_session *, bool, struct s_transport_session_description *)
//{
//    mangled_ppc("?process_session_host_migrate@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@0PAUs_transport_session_description@@@Z");
//};

//public: void c_managed_session_overlapped_task::process_modify(long, void (*)(long, bool, unsigned long), struct s_online_session *, struct s_online_session *, struct s_online_session *)
//{
//    mangled_ppc("?process_modify@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@22@Z");
//};

//public: void c_managed_session_overlapped_task::process_add_players(long, void (*)(long, bool, unsigned long), struct s_online_session *, unsigned __int64const *, bool const *, bool const *, long)
//{
//    mangled_ppc("?process_add_players@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@PB_KPB_N4J@Z");
//};

//public: void c_managed_session_overlapped_task::process_remove_players(long, void (*)(long, bool, unsigned long), struct s_online_session *, unsigned __int64const *, bool const *, long)
//{
//    mangled_ppc("?process_remove_players@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@PB_KPB_NJ@Z");
//};

//public: static bool c_managed_session_overlapped_task::process_modify_immediately(struct s_online_session *, struct s_online_session *)
//{
//    mangled_ppc("?process_modify_immediately@c_managed_session_overlapped_task@@SA_NPAUs_online_session@@0@Z");
//};

//public: bool c_managed_session_overlapped_task::process_add_players_immediately(struct s_online_session *, unsigned __int64const *, bool const *, bool const *, long)
//{
//    mangled_ppc("?process_add_players_immediately@c_managed_session_overlapped_task@@QAA_NPAUs_online_session@@PB_KPB_N2J@Z");
//};

//public: bool c_managed_session_overlapped_task::process_remove_players_immediately(struct s_online_session *, unsigned __int64const *, bool const *, long)
//{
//    mangled_ppc("?process_remove_players_immediately@c_managed_session_overlapped_task@@QAA_NPAUs_online_session@@PB_KPB_NJ@Z");
//};

//public: void c_managed_session_overlapped_task::process_game_start(long, void (*)(long, bool, unsigned long), struct s_online_session *)
//{
//    mangled_ppc("?process_game_start@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@@Z");
//};

//public: void c_managed_session_overlapped_task::process_game_end(long, void (*)(long, bool, unsigned long), struct s_online_session *)
//{
//    mangled_ppc("?process_game_end@c_managed_session_overlapped_task@@QAAXJP6AXJ_NK@ZPAUs_online_session@@@Z");
//};

//unsigned long build_xsession_flags_from_online_session_flags(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?build_xsession_flags_from_online_session_flags@@YAKV?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@@Z");
//};

//protected: void c_managed_session_overlapped_task::filter_local_users(long, unsigned __int64const *, bool const *, bool const *)
//{
//    mangled_ppc("?filter_local_users@c_managed_session_overlapped_task@@IAAXJPB_KPB_N1@Z");
//};

//public: class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

