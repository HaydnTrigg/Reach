/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_test_event, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_test_event@@$0CA@@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 32>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$0CA@@@2JB"

// void lockfree_event_queue_run_unit_test(void);
// public: t_event_queue<struct s_test_event, 32>::t_event_queue<struct s_test_event, 32>(void);
// public: t_event_queue<struct s_test_event, 32>::~t_event_queue<struct s_test_event, 32>(void);
// public: void t_event_queue<struct s_test_event, 32>::initialize(void);
// public: void t_event_queue<struct s_test_event, 32>::set_name(char const *);
// public: void t_event_queue<struct s_test_event, 32>::dispose(void);
// public: void t_event_queue<struct s_test_event, 32>::reset(void);
// public: long t_event_queue<struct s_test_event, 32>::peek_pending_count(void) const;
// public: struct s_test_event * t_event_queue<struct s_test_event, 32>::allocate_event(void);
// public: void t_event_queue<struct s_test_event, 32>::queue_event(struct s_test_event *);
// public: struct s_test_event * t_event_queue<struct s_test_event, 32>::acquire_top_event(void);
// public: struct s_test_event * t_event_queue<struct s_test_event, 32>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_test_event * t_event_queue<struct s_test_event, 32>::release_chain_top_event(struct s_test_event *);
// public: struct s_test_event * t_event_queue<struct s_test_event, 32>::requeue_chain_top_event(struct s_test_event *);
// public: void t_event_queue<struct s_test_event, 32>::initialize_limited(long);
// public: bool t_event_queue<struct s_test_event, 32>::valid_event(void const *) const;
// public: void t_event_queue<struct s_test_event, 32>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: static long s_static_array<struct s_test_event, 32>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 32>::get_elements(void);
// public: struct s_test_event & s_static_array<struct s_test_event, 32>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 32>::operator[]<long>(long);
// public: struct s_test_event const & s_static_array<struct s_test_event, 32>::operator[]<int>(int) const;
// public: struct s_test_event const & s_static_array<struct s_test_event, 32>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_test_event, 32>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 32>::valid<long>(long);
// public: static bool s_static_array<struct s_test_event, 32>::valid<int>(int);

//void lockfree_event_queue_run_unit_test(void)
//{
//    mangled_ppc("?lockfree_event_queue_run_unit_test@@YAXXZ");
//};

//public: t_event_queue<struct s_test_event, 32>::t_event_queue<struct s_test_event, 32>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_test_event@@$0CA@@@QAA@XZ");
//};

//public: t_event_queue<struct s_test_event, 32>::~t_event_queue<struct s_test_event, 32>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_test_event@@$0CA@@@QAA@XZ");
//};

//public: void t_event_queue<struct s_test_event, 32>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_test_event@@$0CA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_test_event, 32>::set_name(char const *)
//{
//    mangled_ppc("?set_name@?$t_event_queue@Us_test_event@@$0CA@@@QAAXPBD@Z");
//};

//public: void t_event_queue<struct s_test_event, 32>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_event_queue@Us_test_event@@$0CA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_test_event, 32>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_test_event@@$0CA@@@QAAXXZ");
//};

//public: long t_event_queue<struct s_test_event, 32>::peek_pending_count(void) const
//{
//    mangled_ppc("?peek_pending_count@?$t_event_queue@Us_test_event@@$0CA@@@QBAJXZ");
//};

//public: struct s_test_event * t_event_queue<struct s_test_event, 32>::allocate_event(void)
//{
//    mangled_ppc("?allocate_event@?$t_event_queue@Us_test_event@@$0CA@@@QAAPAUs_test_event@@XZ");
//};

//public: void t_event_queue<struct s_test_event, 32>::queue_event(struct s_test_event *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_test_event@@$0CA@@@QAAXPAUs_test_event@@@Z");
//};

//public: struct s_test_event * t_event_queue<struct s_test_event, 32>::acquire_top_event(void)
//{
//    mangled_ppc("?acquire_top_event@?$t_event_queue@Us_test_event@@$0CA@@@QAAPAUs_test_event@@XZ");
//};

//public: struct s_test_event * t_event_queue<struct s_test_event, 32>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_test_event@@$0CA@@@QAAPAUs_test_event@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_test_event * t_event_queue<struct s_test_event, 32>::release_chain_top_event(struct s_test_event *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_test_event@@$0CA@@@QAAPAUs_test_event@@PAU2@@Z");
//};

//public: struct s_test_event * t_event_queue<struct s_test_event, 32>::requeue_chain_top_event(struct s_test_event *)
//{
//    mangled_ppc("?requeue_chain_top_event@?$t_event_queue@Us_test_event@@$0CA@@@QAAPAUs_test_event@@PAU2@@Z");
//};

//public: void t_event_queue<struct s_test_event, 32>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_test_event@@$0CA@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_test_event, 32>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_test_event@@$0CA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_test_event, 32>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_test_event@@$0CA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: static long s_static_array<struct s_test_event, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_test_event@@$0CA@@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$0CA@@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: struct s_test_event & s_static_array<struct s_test_event, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_test_event@@$0CA@@@QAAAAUs_test_event@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$0CA@@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: struct s_test_event const & s_static_array<struct s_test_event, 32>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_test_event@@$0CA@@@QBAABUs_test_event@@H@Z");
//};

//public: struct s_test_event const & s_static_array<struct s_test_event, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_test_event@@$0CA@@@QBAABUs_test_event@@J@Z");
//};

//public: static bool s_static_array<struct s_test_event, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_test_event@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_test_event, 32>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_test_event@@$0CA@@@SA_NH@Z");
//};

