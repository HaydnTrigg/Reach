/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::initialize(class c_life_cycle_state_manager *);
// public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::dispose(void);
// public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_progress(struct s_life_cycle_matchmaking_progress *);
// public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_search_party_properties(struct s_matchmaking_search_party_properties *);
// public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_gather_party_properties(struct s_matchmaking_gather_party_properties *);
// public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::is_gathering(void) const;
// public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update(void);
// public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_for_state_transition(long);
// public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::enter(class c_life_cycle_state_handler *, long, void *);
// public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::exit(class c_life_cycle_state_handler *);
// public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::handle_missing_required_session_parameter(enum e_life_cycle_session_type);
// private: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::continue_updating_posse(void);
// private: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::continue_updating_group(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_group(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_posse(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_role(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_progress(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_gathering(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_searching(void);
// private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_leaving(void);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_find_and_assemble_match::build_gather_start_flags(void);

//public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::initialize(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QAAXPAVc_life_cycle_state_manager@@@Z");
//};

//public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QAAXXZ");
//};

//public: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_progress(struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_progress@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QAAXPAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_search_party_properties(struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?get_search_party_properties@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QAA_NPAUs_matchmaking_search_party_properties@@@Z");
//};

//public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::get_gather_party_properties(struct s_matchmaking_gather_party_properties *)
//{
//    mangled_ppc("?get_gather_party_properties@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QAA_NPAUs_matchmaking_gather_party_properties@@@Z");
//};

//public: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::is_gathering(void) const
//{
//    mangled_ppc("?is_gathering@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@QBA_NXZ");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@UAAXXZ");
//};

//public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_for_state_transition(long)
//{
//    mangled_ppc("?update_for_state_transition@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@UAA?AW4e_life_cycle_state_transition_type@@J@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::enter(class c_life_cycle_state_handler *, long, void *)
//{
//    mangled_ppc("?enter@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@UAAXPAVc_life_cycle_state_handler@@JPAX@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::exit(class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?exit@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@UAAXPAVc_life_cycle_state_handler@@@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::handle_missing_required_session_parameter(enum e_life_cycle_session_type)
//{
//    mangled_ppc("?handle_missing_required_session_parameter@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@UAAXW4e_life_cycle_session_type@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::continue_updating_posse(void)
//{
//    mangled_ppc("?continue_updating_posse@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAA_NXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_find_and_assemble_match::continue_updating_group(void)
//{
//    mangled_ppc("?continue_updating_group@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAA_NXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_group(void)
//{
//    mangled_ppc("?update_group@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_posse(void)
//{
//    mangled_ppc("?update_posse@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_role(void)
//{
//    mangled_ppc("?update_role@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_gathering(void)
//{
//    mangled_ppc("?update_gathering@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_searching(void)
//{
//    mangled_ppc("?update_searching@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_find_and_assemble_match::update_leaving(void)
//{
//    mangled_ppc("?update_leaving@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_find_and_assemble_match::build_gather_start_flags(void)
//{
//    mangled_ppc("?build_gather_start_flags@c_life_cycle_state_handler_matchmaking_find_and_assemble_match@@AAA?AV?$c_flags@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@XZ");
//};

