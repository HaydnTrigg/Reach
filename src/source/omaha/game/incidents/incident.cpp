/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_network_queued_incident_flag const c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@2W4e_network_queued_incident_flag@@B"
// public: static long const s_static_array<struct s_network_queued_incident, 256>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_queued_incident@@$0BAA@@@2JB"
// public: static long const s_static_array<struct s_active_incident_definition_identifier, 700>::k_element_count; // "?k_element_count@?$s_static_array@Us_active_incident_definition_identifier@@$0CLM@@@2JB"
// public: static long const s_static_array<struct s_suppressed_incident, 10>::k_element_count; // "?k_element_count@?$s_static_array@Us_suppressed_incident@@$09@@2JB"
// public: static long const s_static_array<struct s_incident_with_metadata, 100>::k_element_count; // "?k_element_count@?$s_static_array@Us_incident_with_metadata@@$0GE@@@2JB"
// public: static long const s_static_array<struct s_incident_accumulator, 300>::k_element_count; // "?k_element_count@?$s_static_array@Us_incident_accumulator@@$0BCM@@@2JB"
// public: static long const s_static_array<struct s_incident_history_entry, 1000>::k_element_count; // "?k_element_count@?$s_static_array@Us_incident_history_entry@@$0DOI@@@2JB"
// char *g_bug_now_on_next_kill_text; // "?g_bug_now_on_next_kill_text@@3PADA"
// bool g_assert_on_weak_damage_owner_code; // "?g_assert_on_weak_damage_owner_code@@3_NA"
// bool g_guardian_kills_awarded_to_most_damage; // "?g_guardian_kills_awarded_to_most_damage@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_incident_globals_allocator::*)(void *)> g_incident_globals_allocator; // "?g_incident_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@A"
// struct s_incident_globals *incident_globals; // "?incident_globals@@3PAUs_incident_globals@@A"

// void __tls_set_g_incident_globals_allocator(void *);
// bool incident_definition_identifier_compare(void const *, void const *, void const *);
// void incident_initialize(void);
// void incident_dispose(void);
// void incident_initialize_for_new_map(void);
// public: long c_incident_iterator::get_incident_globals_index(void) const;
// public: long c_incident_iterator::get_incident_index(void) const;
// void incident_dispose_from_old_map(void);
// void incident_initialize_for_saved_game(long);
// void incident_event_with_information(enum e_event_level, char const *, long, struct s_incident_metadata const &);
// void incident_update(void);
// void incident_update_player(long);
// void incident_notify_player_deleted(long);
// void incident_notify_player_changed_indices(long, long);
// void incident_promote_to_authority(void);
// bool incident_get_paused(void);
// void incident_set_paused(bool);
// void incident_submit_from_network(struct s_incident_networked const *);
// void incident_handle_incident_internal(long, struct s_incident_metadata const &);
// void increment_incident_accumulators(long, long);
// void process_incidents(void);
// void dispatch_incident_begin(void);
// void dispatch_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &);
// void dispatch_incident_end(void);
// void display_incident_begin(void);
// void display_incident_client_responses(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &);
// void display_incident_end(void);
// long incident_accumulator_get(long, long);
// long incident_accumulator_get_or_create(long, long);
// void delete_incident_accumulator(long);
// void enqueue_incident(long, struct s_incident_metadata const &);
// void add_suppressed_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &);
// bool incident_test_object_properties(long, struct s_specialized_incident_object_properties_definition const *, bool);
// void enqueue_incident_if_specialized(struct s_incident_definition const *, long, struct s_incident_metadata const &);
// void enqueue_incident_if_accumulated(struct s_incident_definition const *, long, struct s_incident_metadata const &);
// void add_incident_to_queue(long, struct s_incident_metadata const &);
// void incident_metadata_initialize(struct s_incident_metadata *);
// bool game_team_from_object_and_player(long, long, class c_game_team const **);
// enum e_multiplayer_team multiplayer_team_from_object_and_player(long, long);
// void incident_metadata_set_data_from_object_and_player_internal(long, long, long *, long *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> *);
// void incident_metadata_set_cause_data_from_object_and_player(long, long, struct s_incident_metadata *);
// void incident_metadata_set_effect_data_from_object_and_player(long, long, struct s_incident_metadata *);
// void incident_metadata_set_cause_data_from_object(long, struct s_incident_metadata *);
// void incident_metadata_set_effect_data_from_object(long, struct s_incident_metadata *);
// void incident_metadata_set_cause_data_from_effect_data(struct s_incident_metadata *, struct s_incident_metadata const *);
// void incident_metadata_set_effect_data_from_cause_data(struct s_incident_metadata *, struct s_incident_metadata const *);
// void incident_metadata_set_cause_data_from_player(long, struct s_incident_metadata *);
// void incident_metadata_set_effect_data_from_player(long, struct s_incident_metadata *);
// void incident_metadata_set_cause_data_from_team(enum e_multiplayer_team, struct s_incident_metadata *);
// void incident_metadata_set_effect_data_from_team(enum e_multiplayer_team, struct s_incident_metadata *);
// void incident_metadata_set_damage_reporting_info(struct s_damage_reporting_info const &, struct s_incident_metadata *);
// void incident_metadata_set_special_kill_flags(class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> const &, struct s_incident_metadata *);
// void submit_incident_with_cause_player(long, long);
// void submit_incident_for_campaign_team(long, enum e_campaign_team);
// void submit_incident_with_cause_team(long, enum e_multiplayer_team);
// void submit_incident_with_cause_player_and_effect_player(long, long, long);
// void submit_incident_with_cause_player_and_effect_team(long, long, enum e_multiplayer_team);
// void submit_incident_with_cause_team_and_effect_player(long, enum e_multiplayer_team, long);
// void submit_incident_with_cause_team_and_effect_team(long, enum e_multiplayer_team, enum e_multiplayer_team);
// void submit_incident(long);
// void submit_incident(long, struct s_incident_metadata const &);
// void submit_incident_content_defined(long, struct s_incident_metadata const &);
// void submit_incident_local_only(long, struct s_incident_metadata const &);
// void incident_player_kill_add_built_in_specialized_incidents(long, long, long, class c_game_team const &, long, long, bool, struct s_incident_metadata const &, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> const &, enum e_damage_reporting_type, bool);
// void incident_player_kill(long, long, class c_game_team const &, long, struct s_damage_reporting_info const &, bool, bool, bool);
// void incident_process_kill(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &, float, bool);
// public: void s_incident_networked::encode(class c_bitstream *, bool) const;
// public: bool s_incident_networked::decode(class c_bitstream *, bool);
// void incident_identifier_encode(class c_bitstream *, long);
// bool incident_identifier_decode(class c_bitstream *, long *);
// void incident_handle_script_verification(void);
// long incident_get_player_kills_in_a_row(long);
// void bug_now_on_next_kill(char const *);
// public: c_incident_networking::c_incident_networking(void);
// public: s_static_array<struct s_network_queued_incident, 256>::s_static_array<struct s_network_queued_incident, 256>(void);
// public: s_network_queued_incident::s_network_queued_incident(void);
// public: void c_incident_networking::reset(void);
// public: void c_incident_networking::queue_and_network_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &, struct s_incident_definition const *);
// void send_incident_to_clients(struct s_incident_networked const *, bool);
// void incident_build_player_response_list(struct s_incident_networked const *, long *, long, long *);
// public: void c_incident_networking::handle_incident_from_network(struct s_incident_networked const *);
// public: void c_incident_networking::dispatch_queued_incidents(bool);
// public: void c_incident_networking::promote_to_authority(void);
// public: void c_incident_networking::notify_player_deleted(long);
// public: void c_incident_networking::notify_player_changed_indices(long, long);
// private: void c_incident_networking::postprocess_networked_incident_after_queue_insertion(struct s_network_queued_incident *);
// private: void c_incident_networking::close_window_as_far_as_possible(class c_sliding_window *);
// private: long c_incident_networking::minimally_offset_sequence_number_from_sequence_identifier(long) const;
// private: static long c_incident_networking::sequence_identifier_from_sequence_number(long);
// long player_rewards_get_cookie_total_for_game(enum e_controller_index);
// long compare_incident_identifier(void const *, void const *, void const *);
// struct s_incident_definition const * incident_globals_find_incident_by_name(long);
// bool player_holding_achievement_oddball(long);
// public: class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &);
// public: enum e_incident_special_kill_type c_enum_no_init<enum e_incident_special_kill_type, char, 0, 11, struct s_default_enum_string_resolver>::operator enum e_incident_special_kill_type(void) const;
// public: bool c_enum_no_init<enum e_incident_accumulator_aggregation_method, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_incident_accumulator_aggregation_method) const;
// public: enum e_incident_accumulator_reset c_enum_no_init<enum e_incident_accumulator_reset, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_incident_accumulator_reset(void) const;
// public: static long s_static_array<struct s_network_queued_incident, 256>::get_count(void);
// public: void s_static_array<struct s_network_queued_incident, 256>::set_memory(long);
// public: struct s_active_incident_definition_identifier * s_static_array<struct s_active_incident_definition_identifier, 700>::get_elements(void);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: long c_static_stack<long, 5>::count(void) const;
// public: long c_static_stack<long, 5>::push(void);
// public: long & c_static_stack<long, 5>::operator[](long);
// public: c_static_stack<long, 5>::c_static_stack<long, 5>(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::valid(void) const;
// public: bool c_static_stack<long, 5>::valid(long) const;
// public: bool c_static_stack<long, 5>::full(void) const;
// public: bool c_static_stack<long, 5>::valid(void) const;
// public: class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &);
// public: unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::test(enum e_specialized_incident_object_properties_flags) const;
// public: bool c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_incident_definition_flag) const;
// public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_incident_special_kill_type) const;
// public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::set(enum e_incident_special_kill_type, bool);
// public: bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_queued_incident_flag) const;
// public: void c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_queued_incident_flag, bool);
// public: c_flags<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// void zero_and_reconstruct<struct s_incident_globals>(struct s_incident_globals *);
// public: struct s_active_incident_definition_identifier & s_static_array<struct s_active_incident_definition_identifier, 700>::operator[]<long>(long);
// public: struct s_incident_accumulator & s_static_array<struct s_incident_accumulator, 300>::operator[]<long>(long);
// public: struct s_incident_with_metadata & s_static_array<struct s_incident_with_metadata, 100>::operator[]<long>(long);
// public: struct s_suppressed_incident & s_static_array<struct s_suppressed_incident, 10>::operator[]<long>(long);
// public: struct s_incident_history_entry & s_static_array<struct s_incident_history_entry, 1000>::operator[]<long>(long);
// public: void c_static_wchar_string<32>::set_char(char const *);
// public: bool c_static_wchar_string<32>::is_equal(wchar_t const *) const;
// public: void c_bitstream::write_flags<class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> *);
// public: struct s_network_queued_incident & s_static_array<struct s_network_queued_incident, 256>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_specialized_incident_object_properties_flags);
// private: static short c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_specialized_incident_object_properties_flags);
// public: static bool c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_incident_definition_flag);
// private: static unsigned char c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_incident_definition_flag);
// public: static bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_incident_special_kill_type);
// public: unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_incident_special_kill_type);
// public: void c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_queued_incident_flag);
// private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_queued_incident_flag);
// void reconstruct<struct s_incident_globals>(struct s_incident_globals *);
// public: static bool s_static_array<struct s_active_incident_definition_identifier, 700>::valid<long>(long);
// public: static bool s_static_array<struct s_incident_accumulator, 300>::valid<long>(long);
// public: static bool s_static_array<struct s_incident_with_metadata, 100>::valid<long>(long);
// public: static bool s_static_array<struct s_suppressed_incident, 10>::valid<long>(long);
// public: static bool s_static_array<struct s_incident_history_entry, 1000>::valid<long>(long);
// public: bool c_static_wchar_string<32>::is_equal(wchar_t const *, bool) const;
// public: static bool s_static_array<struct s_network_queued_incident, 256>::valid<long>(long);
// public: s_incident_globals::s_incident_globals(void);
// public: s_static_array<struct s_suppressed_incident, 10>::s_static_array<struct s_suppressed_incident, 10>(void);
// public: s_static_array<struct s_incident_with_metadata, 100>::s_static_array<struct s_incident_with_metadata, 100>(void);
// public: s_static_array<struct s_incident_history_entry, 1000>::s_static_array<struct s_incident_history_entry, 1000>(void);
// public: s_suppressed_incident::s_suppressed_incident(void);
// public: s_incident_with_metadata::s_incident_with_metadata(void);
// public: s_incident_history_entry::s_incident_history_entry(void);
// public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_queued_incident_flag);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>(void);
// void g_incident_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_incident_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_incident_globals_allocator@@YAXPAX@Z");
//};

//bool incident_definition_identifier_compare(void const *, void const *, void const *)
//{
//    mangled_ppc("?incident_definition_identifier_compare@@YA_NPBX00@Z");
//};

//void incident_initialize(void)
//{
//    mangled_ppc("?incident_initialize@@YAXXZ");
//};

//void incident_dispose(void)
//{
//    mangled_ppc("?incident_dispose@@YAXXZ");
//};

//void incident_initialize_for_new_map(void)
//{
//    mangled_ppc("?incident_initialize_for_new_map@@YAXXZ");
//};

//public: long c_incident_iterator::get_incident_globals_index(void) const
//{
//    mangled_ppc("?get_incident_globals_index@c_incident_iterator@@QBAJXZ");
//};

//public: long c_incident_iterator::get_incident_index(void) const
//{
//    mangled_ppc("?get_incident_index@c_incident_iterator@@QBAJXZ");
//};

//void incident_dispose_from_old_map(void)
//{
//    mangled_ppc("?incident_dispose_from_old_map@@YAXXZ");
//};

//void incident_initialize_for_saved_game(long)
//{
//    mangled_ppc("?incident_initialize_for_saved_game@@YAXJ@Z");
//};

//void incident_event_with_information(enum e_event_level, char const *, long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?incident_event_with_information@@YAXW4e_event_level@@PBDJABUs_incident_metadata@@@Z");
//};

//void incident_update(void)
//{
//    mangled_ppc("?incident_update@@YAXXZ");
//};

//void incident_update_player(long)
//{
//    mangled_ppc("?incident_update_player@@YAXJ@Z");
//};

//void incident_notify_player_deleted(long)
//{
//    mangled_ppc("?incident_notify_player_deleted@@YAXJ@Z");
//};

//void incident_notify_player_changed_indices(long, long)
//{
//    mangled_ppc("?incident_notify_player_changed_indices@@YAXJJ@Z");
//};

//void incident_promote_to_authority(void)
//{
//    mangled_ppc("?incident_promote_to_authority@@YAXXZ");
//};

//bool incident_get_paused(void)
//{
//    mangled_ppc("?incident_get_paused@@YA_NXZ");
//};

//void incident_set_paused(bool)
//{
//    mangled_ppc("?incident_set_paused@@YAX_N@Z");
//};

//void incident_submit_from_network(struct s_incident_networked const *)
//{
//    mangled_ppc("?incident_submit_from_network@@YAXPBUs_incident_networked@@@Z");
//};

//void incident_handle_incident_internal(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?incident_handle_incident_internal@@YAXJABUs_incident_metadata@@@Z");
//};

//void increment_incident_accumulators(long, long)
//{
//    mangled_ppc("?increment_incident_accumulators@@YAXJJ@Z");
//};

//void process_incidents(void)
//{
//    mangled_ppc("?process_incidents@@YAXXZ");
//};

//void dispatch_incident_begin(void)
//{
//    mangled_ppc("?dispatch_incident_begin@@YAXXZ");
//};

//void dispatch_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &)
//{
//    mangled_ppc("?dispatch_incident@@YAXJABV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@ABUs_incident_metadata@@@Z");
//};

//void dispatch_incident_end(void)
//{
//    mangled_ppc("?dispatch_incident_end@@YAXXZ");
//};

//void display_incident_begin(void)
//{
//    mangled_ppc("?display_incident_begin@@YAXXZ");
//};

//void display_incident_client_responses(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &)
//{
//    mangled_ppc("?display_incident_client_responses@@YAXJABV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@ABUs_incident_metadata@@@Z");
//};

//void display_incident_end(void)
//{
//    mangled_ppc("?display_incident_end@@YAXXZ");
//};

//long incident_accumulator_get(long, long)
//{
//    mangled_ppc("?incident_accumulator_get@@YAJJJ@Z");
//};

//long incident_accumulator_get_or_create(long, long)
//{
//    mangled_ppc("?incident_accumulator_get_or_create@@YAJJJ@Z");
//};

//void delete_incident_accumulator(long)
//{
//    mangled_ppc("?delete_incident_accumulator@@YAXJ@Z");
//};

//void enqueue_incident(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?enqueue_incident@@YAXJABUs_incident_metadata@@@Z");
//};

//void add_suppressed_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?add_suppressed_incident@@YAXJABV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//bool incident_test_object_properties(long, struct s_specialized_incident_object_properties_definition const *, bool)
//{
//    mangled_ppc("?incident_test_object_properties@@YA_NJPBUs_specialized_incident_object_properties_definition@@_N@Z");
//};

//void enqueue_incident_if_specialized(struct s_incident_definition const *, long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?enqueue_incident_if_specialized@@YAXPBUs_incident_definition@@JABUs_incident_metadata@@@Z");
//};

//void enqueue_incident_if_accumulated(struct s_incident_definition const *, long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?enqueue_incident_if_accumulated@@YAXPBUs_incident_definition@@JABUs_incident_metadata@@@Z");
//};

//void add_incident_to_queue(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?add_incident_to_queue@@YAXJABUs_incident_metadata@@@Z");
//};

//void incident_metadata_initialize(struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_initialize@@YAXPAUs_incident_metadata@@@Z");
//};

//bool game_team_from_object_and_player(long, long, class c_game_team const **)
//{
//    mangled_ppc("?game_team_from_object_and_player@@YA_NJJPAPBVc_game_team@@@Z");
//};

//enum e_multiplayer_team multiplayer_team_from_object_and_player(long, long)
//{
//    mangled_ppc("?multiplayer_team_from_object_and_player@@YA?AW4e_multiplayer_team@@JJ@Z");
//};

//void incident_metadata_set_data_from_object_and_player_internal(long, long, long *, long *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?incident_metadata_set_data_from_object_and_player_internal@@YAXJJPAJ0PAV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//void incident_metadata_set_cause_data_from_object_and_player(long, long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_cause_data_from_object_and_player@@YAXJJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_effect_data_from_object_and_player(long, long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_effect_data_from_object_and_player@@YAXJJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_cause_data_from_object(long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_cause_data_from_object@@YAXJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_effect_data_from_object(long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_effect_data_from_object@@YAXJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_cause_data_from_effect_data(struct s_incident_metadata *, struct s_incident_metadata const *)
//{
//    mangled_ppc("?incident_metadata_set_cause_data_from_effect_data@@YAXPAUs_incident_metadata@@PBU1@@Z");
//};

//void incident_metadata_set_effect_data_from_cause_data(struct s_incident_metadata *, struct s_incident_metadata const *)
//{
//    mangled_ppc("?incident_metadata_set_effect_data_from_cause_data@@YAXPAUs_incident_metadata@@PBU1@@Z");
//};

//void incident_metadata_set_cause_data_from_player(long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_cause_data_from_player@@YAXJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_effect_data_from_player(long, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_effect_data_from_player@@YAXJPAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_cause_data_from_team(enum e_multiplayer_team, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_cause_data_from_team@@YAXW4e_multiplayer_team@@PAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_effect_data_from_team(enum e_multiplayer_team, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_effect_data_from_team@@YAXW4e_multiplayer_team@@PAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_damage_reporting_info(struct s_damage_reporting_info const &, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_damage_reporting_info@@YAXABUs_damage_reporting_info@@PAUs_incident_metadata@@@Z");
//};

//void incident_metadata_set_special_kill_flags(class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> const &, struct s_incident_metadata *)
//{
//    mangled_ppc("?incident_metadata_set_special_kill_flags@@YAXABV?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@PAUs_incident_metadata@@@Z");
//};

//void submit_incident_with_cause_player(long, long)
//{
//    mangled_ppc("?submit_incident_with_cause_player@@YAXJJ@Z");
//};

//void submit_incident_for_campaign_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?submit_incident_for_campaign_team@@YAXJW4e_campaign_team@@@Z");
//};

//void submit_incident_with_cause_team(long, enum e_multiplayer_team)
//{
//    mangled_ppc("?submit_incident_with_cause_team@@YAXJW4e_multiplayer_team@@@Z");
//};

//void submit_incident_with_cause_player_and_effect_player(long, long, long)
//{
//    mangled_ppc("?submit_incident_with_cause_player_and_effect_player@@YAXJJJ@Z");
//};

//void submit_incident_with_cause_player_and_effect_team(long, long, enum e_multiplayer_team)
//{
//    mangled_ppc("?submit_incident_with_cause_player_and_effect_team@@YAXJJW4e_multiplayer_team@@@Z");
//};

//void submit_incident_with_cause_team_and_effect_player(long, enum e_multiplayer_team, long)
//{
//    mangled_ppc("?submit_incident_with_cause_team_and_effect_player@@YAXJW4e_multiplayer_team@@J@Z");
//};

//void submit_incident_with_cause_team_and_effect_team(long, enum e_multiplayer_team, enum e_multiplayer_team)
//{
//    mangled_ppc("?submit_incident_with_cause_team_and_effect_team@@YAXJW4e_multiplayer_team@@0@Z");
//};

//void submit_incident(long)
//{
//    mangled_ppc("?submit_incident@@YAXJ@Z");
//};

//void submit_incident(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?submit_incident@@YAXJABUs_incident_metadata@@@Z");
//};

//void submit_incident_content_defined(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?submit_incident_content_defined@@YAXJABUs_incident_metadata@@@Z");
//};

//void submit_incident_local_only(long, struct s_incident_metadata const &)
//{
//    mangled_ppc("?submit_incident_local_only@@YAXJABUs_incident_metadata@@@Z");
//};

//void incident_player_kill_add_built_in_specialized_incidents(long, long, long, class c_game_team const &, long, long, bool, struct s_incident_metadata const &, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> const &, enum e_damage_reporting_type, bool)
//{
//    mangled_ppc("?incident_player_kill_add_built_in_specialized_incidents@@YAXJJJABVc_game_team@@JJ_NABUs_incident_metadata@@ABV?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@W4e_damage_reporting_type@@1@Z");
//};

//void incident_player_kill(long, long, class c_game_team const &, long, struct s_damage_reporting_info const &, bool, bool, bool)
//{
//    mangled_ppc("?incident_player_kill@@YAXJJABVc_game_team@@JABUs_damage_reporting_info@@_N22@Z");
//};

//void incident_process_kill(long, long, long, class c_game_team const &, struct s_damage_reporting_info const &, float, bool)
//{
//    mangled_ppc("?incident_process_kill@@YAXJJJABVc_game_team@@ABUs_damage_reporting_info@@M_N@Z");
//};

//public: void s_incident_networked::encode(class c_bitstream *, bool) const
//{
//    mangled_ppc("?encode@s_incident_networked@@QBAXPAVc_bitstream@@_N@Z");
//};

//public: bool s_incident_networked::decode(class c_bitstream *, bool)
//{
//    mangled_ppc("?decode@s_incident_networked@@QAA_NPAVc_bitstream@@_N@Z");
//};

//void incident_identifier_encode(class c_bitstream *, long)
//{
//    mangled_ppc("?incident_identifier_encode@@YAXPAVc_bitstream@@J@Z");
//};

//bool incident_identifier_decode(class c_bitstream *, long *)
//{
//    mangled_ppc("?incident_identifier_decode@@YA_NPAVc_bitstream@@PAJ@Z");
//};

//void incident_handle_script_verification(void)
//{
//    mangled_ppc("?incident_handle_script_verification@@YAXXZ");
//};

//long incident_get_player_kills_in_a_row(long)
//{
//    mangled_ppc("?incident_get_player_kills_in_a_row@@YAJJ@Z");
//};

//void bug_now_on_next_kill(char const *)
//{
//    mangled_ppc("?bug_now_on_next_kill@@YAXPBD@Z");
//};

//public: c_incident_networking::c_incident_networking(void)
//{
//    mangled_ppc("??0c_incident_networking@@QAA@XZ");
//};

//public: s_static_array<struct s_network_queued_incident, 256>::s_static_array<struct s_network_queued_incident, 256>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_queued_incident@@$0BAA@@@QAA@XZ");
//};

//public: s_network_queued_incident::s_network_queued_incident(void)
//{
//    mangled_ppc("??0s_network_queued_incident@@QAA@XZ");
//};

//public: void c_incident_networking::reset(void)
//{
//    mangled_ppc("?reset@c_incident_networking@@QAAXXZ");
//};

//public: void c_incident_networking::queue_and_network_incident(long, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &, struct s_incident_metadata const &, struct s_incident_definition const *)
//{
//    mangled_ppc("?queue_and_network_incident@c_incident_networking@@QAAXJABV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@ABUs_incident_metadata@@PBUs_incident_definition@@@Z");
//};

//void send_incident_to_clients(struct s_incident_networked const *, bool)
//{
//    mangled_ppc("?send_incident_to_clients@@YAXPBUs_incident_networked@@_N@Z");
//};

//void incident_build_player_response_list(struct s_incident_networked const *, long *, long, long *)
//{
//    mangled_ppc("?incident_build_player_response_list@@YAXPBUs_incident_networked@@PAJJ1@Z");
//};

//public: void c_incident_networking::handle_incident_from_network(struct s_incident_networked const *)
//{
//    mangled_ppc("?handle_incident_from_network@c_incident_networking@@QAAXPBUs_incident_networked@@@Z");
//};

//public: void c_incident_networking::dispatch_queued_incidents(bool)
//{
//    mangled_ppc("?dispatch_queued_incidents@c_incident_networking@@QAAX_N@Z");
//};

//public: void c_incident_networking::promote_to_authority(void)
//{
//    mangled_ppc("?promote_to_authority@c_incident_networking@@QAAXXZ");
//};

//public: void c_incident_networking::notify_player_deleted(long)
//{
//    mangled_ppc("?notify_player_deleted@c_incident_networking@@QAAXJ@Z");
//};

//public: void c_incident_networking::notify_player_changed_indices(long, long)
//{
//    mangled_ppc("?notify_player_changed_indices@c_incident_networking@@QAAXJJ@Z");
//};

//private: void c_incident_networking::postprocess_networked_incident_after_queue_insertion(struct s_network_queued_incident *)
//{
//    mangled_ppc("?postprocess_networked_incident_after_queue_insertion@c_incident_networking@@AAAXPAUs_network_queued_incident@@@Z");
//};

//private: void c_incident_networking::close_window_as_far_as_possible(class c_sliding_window *)
//{
//    mangled_ppc("?close_window_as_far_as_possible@c_incident_networking@@AAAXPAVc_sliding_window@@@Z");
//};

//private: long c_incident_networking::minimally_offset_sequence_number_from_sequence_identifier(long) const
//{
//    mangled_ppc("?minimally_offset_sequence_number_from_sequence_identifier@c_incident_networking@@ABAJJ@Z");
//};

//private: static long c_incident_networking::sequence_identifier_from_sequence_number(long)
//{
//    mangled_ppc("?sequence_identifier_from_sequence_number@c_incident_networking@@CAJJ@Z");
//};

//long player_rewards_get_cookie_total_for_game(enum e_controller_index)
//{
//    mangled_ppc("?player_rewards_get_cookie_total_for_game@@YAJW4e_controller_index@@@Z");
//};

//long compare_incident_identifier(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_incident_identifier@@YAJPBX00@Z");
//};

//struct s_incident_definition const * incident_globals_find_incident_by_name(long)
//{
//    mangled_ppc("?incident_globals_find_incident_by_name@@YAPBUs_incident_definition@@J@Z");
//};

//bool player_holding_achievement_oddball(long)
//{
//    mangled_ppc("?player_holding_achievement_oddball@@YA_NJ@Z");
//};

//public: class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??4?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QAAAAV0@ABV?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_incident_special_kill_type c_enum_no_init<enum e_incident_special_kill_type, char, 0, 11, struct s_default_enum_string_resolver>::operator enum e_incident_special_kill_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_incident_special_kill_type@@D$0A@$0L@Us_default_enum_string_resolver@@@@QBA?AW4e_incident_special_kill_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_incident_accumulator_aggregation_method, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_incident_accumulator_aggregation_method) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_incident_accumulator_aggregation_method@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_incident_accumulator_aggregation_method@@@Z");
//};

//public: enum e_incident_accumulator_reset c_enum_no_init<enum e_incident_accumulator_reset, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_incident_accumulator_reset(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_incident_accumulator_reset@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_incident_accumulator_reset@@XZ");
//};

//public: static long s_static_array<struct s_network_queued_incident, 256>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_queued_incident@@$0BAA@@@SAJXZ");
//};

//public: void s_static_array<struct s_network_queued_incident, 256>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_network_queued_incident@@$0BAA@@@QAAXJ@Z");
//};

//public: struct s_active_incident_definition_identifier * s_static_array<struct s_active_incident_definition_identifier, 700>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_active_incident_definition_identifier@@$0CLM@@@QAAPAUs_active_incident_definition_identifier@@XZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: long c_static_stack<long, 5>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$04@@QBAJXZ");
//};

//public: long c_static_stack<long, 5>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$04@@QAAJXZ");
//};

//public: long & c_static_stack<long, 5>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@J$04@@QAAAAJJ@Z");
//};

//public: c_static_stack<long, 5>::c_static_stack<long, 5>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$04@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 5>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$04@@QBA_NJ@Z");
//};

//public: bool c_static_stack<long, 5>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$04@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 5>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$04@@QBA_NXZ");
//};

//public: class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??U?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::test(enum e_specialized_incident_object_properties_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_specialized_incident_object_properties_flags@@F$0N@Us_default_enum_string_resolver@@@@QBA_NW4e_specialized_incident_object_properties_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_incident_definition_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_incident_definition_flag@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_incident_definition_flag@@@Z");
//};

//public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_incident_special_kill_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_incident_special_kill_type@@@Z");
//};

//public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::set(enum e_incident_special_kill_type, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QAAXW4e_incident_special_kill_type@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_queued_incident_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_network_queued_incident_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_queued_incident_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_network_queued_incident_flag@@_N@Z");
//};

//public: c_flags<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void zero_and_reconstruct<struct s_incident_globals>(struct s_incident_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_incident_globals@@@@YAXPAUs_incident_globals@@@Z");
//};

//public: struct s_active_incident_definition_identifier & s_static_array<struct s_active_incident_definition_identifier, 700>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_active_incident_definition_identifier@@$0CLM@@@QAAAAUs_active_incident_definition_identifier@@J@Z");
//};

//public: struct s_incident_accumulator & s_static_array<struct s_incident_accumulator, 300>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_incident_accumulator@@$0BCM@@@QAAAAUs_incident_accumulator@@J@Z");
//};

//public: struct s_incident_with_metadata & s_static_array<struct s_incident_with_metadata, 100>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_incident_with_metadata@@$0GE@@@QAAAAUs_incident_with_metadata@@J@Z");
//};

//public: struct s_suppressed_incident & s_static_array<struct s_suppressed_incident, 10>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_suppressed_incident@@$09@@QAAAAUs_suppressed_incident@@J@Z");
//};

//public: struct s_incident_history_entry & s_static_array<struct s_incident_history_entry, 1000>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_incident_history_entry@@$0DOI@@@QAAAAUs_incident_history_entry@@J@Z");
//};

//public: void c_static_wchar_string<32>::set_char(char const *)
//{
//    mangled_ppc("?set_char@?$c_static_wchar_string@$0CA@@@QAAXPBD@Z");
//};

//public: bool c_static_wchar_string<32>::is_equal(wchar_t const *) const
//{
//    mangled_ppc("?is_equal@?$c_static_wchar_string@$0CA@@@QBA_NPB_W@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_network_queued_incident & s_static_array<struct s_network_queued_incident, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_queued_incident@@$0BAA@@@QAAAAUs_network_queued_incident@@J@Z");
//};

//public: bool c_flags_no_init<enum e_suppressed_incident_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_suppressed_incident_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::valid_bit(enum e_specialized_incident_object_properties_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_specialized_incident_object_properties_flags@@F$0N@Us_default_enum_string_resolver@@@@SA_NW4e_specialized_incident_object_properties_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_specialized_incident_object_properties_flags, short, 13, struct s_default_enum_string_resolver>::flag_size_type(enum e_specialized_incident_object_properties_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_specialized_incident_object_properties_flags@@F$0N@Us_default_enum_string_resolver@@@@CAFW4e_specialized_incident_object_properties_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_incident_definition_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_incident_definition_flag@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_incident_definition_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_incident_definition_flag, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_incident_definition_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_incident_definition_flag@@E$03Us_default_enum_string_resolver@@@@CAEW4e_incident_definition_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_incident_special_kill_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@SA_NW4e_incident_special_kill_type@@@Z");
//};

//public: unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_incident_special_kill_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_incident_special_kill_type@@@Z");
//};

//public: void c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_queued_incident_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_network_queued_incident_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_queued_incident_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_queued_incident_flag@@@Z");
//};

//void reconstruct<struct s_incident_globals>(struct s_incident_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_incident_globals@@@@YAXPAUs_incident_globals@@@Z");
//};

//public: static bool s_static_array<struct s_active_incident_definition_identifier, 700>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_active_incident_definition_identifier@@$0CLM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_incident_accumulator, 300>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_incident_accumulator@@$0BCM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_incident_with_metadata, 100>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_incident_with_metadata@@$0GE@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_suppressed_incident, 10>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_suppressed_incident@@$09@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_incident_history_entry, 1000>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_incident_history_entry@@$0DOI@@@SA_NJ@Z");
//};

//public: bool c_static_wchar_string<32>::is_equal(wchar_t const *, bool) const
//{
//    mangled_ppc("?is_equal@?$c_static_wchar_string@$0CA@@@QBA_NPB_W_N@Z");
//};

//public: static bool s_static_array<struct s_network_queued_incident, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_queued_incident@@$0BAA@@@SA_NJ@Z");
//};

//public: s_incident_globals::s_incident_globals(void)
//{
//    mangled_ppc("??0s_incident_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_suppressed_incident, 10>::s_static_array<struct s_suppressed_incident, 10>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_suppressed_incident@@$09@@QAA@XZ");
//};

//public: s_static_array<struct s_incident_with_metadata, 100>::s_static_array<struct s_incident_with_metadata, 100>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_incident_with_metadata@@$0GE@@@QAA@XZ");
//};

//public: s_static_array<struct s_incident_history_entry, 1000>::s_static_array<struct s_incident_history_entry, 1000>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_incident_history_entry@@$0DOI@@@QAA@XZ");
//};

//public: s_suppressed_incident::s_suppressed_incident(void)
//{
//    mangled_ppc("??0s_suppressed_incident@@QAA@XZ");
//};

//public: s_incident_with_metadata::s_incident_with_metadata(void)
//{
//    mangled_ppc("??0s_incident_with_metadata@@QAA@XZ");
//};

//public: s_incident_history_entry::s_incident_history_entry(void)
//{
//    mangled_ppc("??0s_incident_history_entry@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_incident_special_kill_type, unsigned long, 11, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_incident_special_kill_type@@K$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_queued_incident_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_queued_incident_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_queued_incident_flag@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_queued_incident_flag@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_incident_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_incident_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_incident_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_incident_globals_allocator@@YAXXZ");
//};

