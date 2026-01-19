/* ---------- headers */

#include "omaha\game\challenges\challenges.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<bool, 4>::k_element_count; // "?k_element_count@?$s_static_array@_N$03@@2JB"
// public: static long const s_static_array<struct s_active_challenge_set, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_active_challenge_set@@$01@@2JB"
// public: static long const s_static_array<struct s_challenge_progress_chunk, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_challenge_progress_chunk@@$03@@2JB"
// char const **k_failure_reason_strings; // "?k_failure_reason_strings@@3PAPBDA"

// public: c_active_challenge_set_iterator::c_active_challenge_set_iterator(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>);
// public: bool c_active_challenge_set_iterator::next(void);
// public: bool c_active_challenge_set_iterator::get(struct s_active_challenge *) const;
// public: c_active_challenge_iterator::c_active_challenge_iterator(void);
// public: bool c_active_challenge_iterator::next(void);
// public: bool c_active_challenge_iterator::get(struct s_active_challenge *) const;
// public: enum e_challenge_set c_active_challenge_iterator::get_challenge_set(void) const;
// void challenges_initialize(void);
// void challenges_update(void);
// void challenges_dispose(void);
// void challenges_initialize_for_new_map(void);
// void challenges_dispose_from_old_map(void);
// void challenges_notify_user_file_received(enum e_controller_index);
// bool challenge_progress(enum e_controller_index, long);
// bool challenge_can_be_progressed_this_game(enum e_controller_index, long);
// bool challenge_can_be_progressed_now(enum e_controller_index, long);
// long challenge_get_current_progress(enum e_controller_index, long);
// long challenge_get_required_progress(long);
// bool challenge_is_complete(enum e_controller_index, long);
// bool controller_has_valid_challenge_state(enum e_controller_index);
// void challenge_handle_progress_flag(enum e_controller_index, enum e_challenge_progress_flag);
// void challenge_handle_progress_flag_warn_on_failure(enum e_controller_index, enum e_challenge_progress_flag);
// void challenges_notify_game_completed(void);
// __int64 challenge_get_next_delivery_time(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>);
// bool challenges_are_current(void);
// void challenge_get_player_state(enum e_controller_index, struct s_player_challenge_state *);
// public: s_active_challenge::s_active_challenge(void);
// void challenge_player_state_encode(class c_bitstream *, struct s_player_challenge_state const *);
// void challenge_player_state_decode(class c_bitstream *, struct s_player_challenge_state *);
// void challenges_inject_challenge_state(enum e_controller_index, struct s_challenge_state_chunk const *);
// enum e_challenge_set operator++(enum e_challenge_set &, int);
// public: c_active_challenge::c_active_challenge(void);
// public: s_challenge_definition::s_challenge_definition(void);
// public: s_game_mode_flags::s_game_mode_flags(void);
// void challenges_inject_controller_progress(enum e_controller_index, struct s_challenge_progress_chunk const *);
// bool challenges_get_controller_progress_chunk(enum e_controller_index, struct s_challenge_progress_chunk *);
// long challenges_get_set_id(enum e_challenge_set);
// bool challenges_would_like_any_new_challenges(void);
// public: c_active_challenge_iterator_internal::c_active_challenge_iterator_internal(void);
// public: class c_active_challenge * c_active_challenge_iterator_internal::get_active_challenge(void) const;
// public: bool c_active_challenge_iterator_internal::next_active_challenge_by_name(long);
// public: struct s_challenge_definition const * c_active_challenge::get_challenge_definition(void) const;
// public: void c_active_challenge::set_challenge_state_definition(struct s_challenge_state_definition const *);
// public: struct s_challenge_category_definition const * c_active_challenge::try_and_get_challenge_category_definition(void) const;
// public: bool c_active_challenge::can_be_progressed_this_game(enum e_controller_index, enum e_progression_failure_reason *) const;
// public: bool c_active_challenge::can_be_progressed_now(enum e_controller_index, enum e_progression_failure_reason *) const;
// public: bool c_active_challenge::is_complete(enum e_controller_index) const;
// public: long c_active_challenge::get_current_progress(enum e_controller_index) const;
// public: void c_active_challenge::handle_completion(enum e_controller_index) const;
// public: class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> c_active_challenge_iterator_internal::get_challenge_set(void) const;
// public: long c_active_challenge::get_lsp_challenge_progress(enum e_controller_index) const;
// public: void c_active_challenge::initialize_for_new_map(void);
// private: void c_active_challenge::refresh_challenge_definition(void);
// public: c_challenge_controller_monitor::c_challenge_controller_monitor(void);
// public: virtual bool c_challenge_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_challenge_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_challenge_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// public: bool c_challenge_controller_monitor::is_signed_in(enum e_controller_index);
// struct s_challenge_globals * challenge_globals_get(void);
// bool challenge_test_required_game_type(struct s_challenge_definition const *);
// bool challenge_test_required_level(struct s_challenge_definition const *);
// bool challenge_test_required_skulls(struct s_challenge_definition const *);
// bool challenge_test_required_minimum_score(struct s_challenge_definition const *, enum e_controller_index);
// bool challenge_test_required_minimum_score_possible(struct s_challenge_definition const *, enum e_controller_index);
// bool challenge_test_required_maximum_player_deaths(struct s_challenge_definition const *, enum e_controller_index);
// bool challenge_test_required_maximum_level_seconds(struct s_challenge_definition const *, enum e_controller_index);
// bool challenge_test_minimum_sets_completed(struct s_challenge_definition const *);
// void challenges_update_disqualification(void);
// void challenges_reset_disqualification(void);
// bool challenges_would_like_new_challenges(enum e_challenge_set);
// void challenge_clear_controller_state(enum e_controller_index);
// bool challenge_controller_signed_in(enum e_controller_index);
// void challenges_inject_controller_progress_internal(enum e_controller_index, struct s_challenge_progress_chunk const *);
// class c_active_challenge * find_first_active_challenge(long);
// void challenge_handle_progress_flag_internal(enum e_controller_index, enum e_challenge_progress_flag, bool);
// bool challenge_progress_with_warn_option(enum e_controller_index, long, bool);
// bool challenge_progress_internal(enum e_controller_index, long, bool, bool);
// char const * get_failure_reason_string(enum e_progression_failure_reason);
// void challenges_enable_lsp_synchronization_hs(bool);
// void challenges_clear_hs(void);
// void challenges_activate_challenge_hs(long, long, long);
// void challenges_list_active_challenges_for_controller_hs(enum e_controller_index);
// void challenge_advance_for_controller_hs(enum e_controller_index, long, bool);
// void challenge_complete_for_controller_hs(enum e_controller_index, long, bool);
// void challenge_advance_for_controller_by_indices_hs(enum e_controller_index, long, long, bool);
// void challenge_complete_for_controller_by_indices_hs(enum e_controller_index, long, long, bool);
// public: c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>(enum e_challenge_set);
// public: enum e_challenge_set c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_challenge_set(void) const;
// public: bool c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_challenge_set) const;
// public: class c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator++(int);
// public: struct s_challenge_state_definition const * s_static_array<struct s_challenge_state_definition, 10>::get_elements(void) const;
// public: struct s_challenge_progress const * s_static_array<struct s_challenge_progress, 10>::get_elements(void) const;
// public: bool c_static_stack<class c_active_challenge, 10>::full(void) const;
// public: long c_static_stack<class c_active_challenge, 10>::count(void) const;
// public: void c_static_stack<class c_active_challenge, 10>::clear(void);
// public: void c_static_stack<class c_active_challenge, 10>::push_back(class c_active_challenge const &);
// public: class c_active_challenge const & c_static_stack<class c_active_challenge, 10>::operator[](long) const;
// public: class c_active_challenge & c_static_stack<class c_active_challenge, 10>::operator[](long);
// public: class c_active_challenge const * c_static_stack<class c_active_challenge, 10>::get(long) const;
// public: class c_active_challenge * c_static_stack<class c_active_challenge, 10>::get(long);
// public: void s_static_array<bool, 4>::set_all(bool const &);
// public: bool c_static_stack<class c_active_challenge, 10>::valid(void) const;
// public: bool c_static_stack<class c_active_challenge, 10>::valid(long) const;
// public: long c_static_stack<class c_active_challenge, 10>::push(void);
// public: c_flags<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_challenge_definition_flag) const;
// public: c_flags<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_challenge_progress_flag) const;
// public: c_flags<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set_all(void);
// public: class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_player_challenge_state_flags) const;
// public: void c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_player_challenge_state_flags, bool);
// public: struct s_active_challenge_set & s_static_array<struct s_active_challenge_set, 2>::operator[]<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>);
// public: struct s_active_challenge_set const & s_static_array<struct s_active_challenge_set, 2>::operator[]<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>) const;
// void zero_and_reconstruct<struct s_challenge_globals>(struct s_challenge_globals *);
// public: struct s_challenge_progress_chunk & s_static_array<struct s_challenge_progress_chunk, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: void c_bitstream::write_flags<class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: struct s_active_challenge_set & s_static_array<struct s_active_challenge_set, 2>::operator[]<enum e_challenge_set>(enum e_challenge_set);
// public: struct s_challenge_progress & s_static_array<struct s_challenge_progress, 10>::operator[]<long>(long);
// public: bool & s_static_array<bool, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: void c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// private: static unsigned char c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_challenge_definition_flag);
// private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_challenge_definition_flag);
// public: void c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_challenge_progress_flag);
// private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_challenge_progress_flag);
// public: static class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_game_skulls, enum e_game_skulls);
// public: static bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_player_challenge_state_flags);
// public: unsigned char c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_challenge_state_flags);
// public: static bool s_static_array<struct s_active_challenge_set, 2>::valid<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>);
// void reconstruct<struct s_challenge_globals>(struct s_challenge_globals *);
// public: s_challenge_globals::s_challenge_globals(void);
// public: s_static_array<struct s_active_challenge_set, 2>::s_static_array<struct s_active_challenge_set, 2>(void);
// public: s_static_array<struct s_challenge_progress_chunk, 4>::s_static_array<struct s_challenge_progress_chunk, 4>(void);
// public: s_challenge_progress_chunk::s_challenge_progress_chunk(void);
// public: s_active_challenge_set::s_active_challenge_set(void);
// public: c_static_stack<class c_active_challenge, 10>::c_static_stack<class c_active_challenge, 10>(void);
// public: static bool s_static_array<struct s_challenge_progress_chunk, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<struct s_active_challenge_set, 2>::valid<enum e_challenge_set>(enum e_challenge_set);
// public: static bool s_static_array<struct s_challenge_progress, 10>::valid<long>(long);
// public: static bool s_static_array<bool, 4>::valid<enum e_controller_index>(enum e_controller_index);
// private: static unsigned char c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_campaign_difficulty_level);
// private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_type);
// private: static unsigned char c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_activity_type);
// private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_challenge_definition_flag);
// private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_challenge_progress_flag);

//public: c_active_challenge_set_iterator::c_active_challenge_set_iterator(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0c_active_challenge_set_iterator@@QAA@V?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_active_challenge_set_iterator::next(void)
//{
//    mangled_ppc("?next@c_active_challenge_set_iterator@@QAA_NXZ");
//};

//public: bool c_active_challenge_set_iterator::get(struct s_active_challenge *) const
//{
//    mangled_ppc("?get@c_active_challenge_set_iterator@@QBA_NPAUs_active_challenge@@@Z");
//};

//public: c_active_challenge_iterator::c_active_challenge_iterator(void)
//{
//    mangled_ppc("??0c_active_challenge_iterator@@QAA@XZ");
//};

//public: bool c_active_challenge_iterator::next(void)
//{
//    mangled_ppc("?next@c_active_challenge_iterator@@QAA_NXZ");
//};

//public: bool c_active_challenge_iterator::get(struct s_active_challenge *) const
//{
//    mangled_ppc("?get@c_active_challenge_iterator@@QBA_NPAUs_active_challenge@@@Z");
//};

//public: enum e_challenge_set c_active_challenge_iterator::get_challenge_set(void) const
//{
//    mangled_ppc("?get_challenge_set@c_active_challenge_iterator@@QBA?AW4e_challenge_set@@XZ");
//};

//void challenges_initialize(void)
//{
//    mangled_ppc("?challenges_initialize@@YAXXZ");
//};

//void challenges_update(void)
//{
//    mangled_ppc("?challenges_update@@YAXXZ");
//};

//void challenges_dispose(void)
//{
//    mangled_ppc("?challenges_dispose@@YAXXZ");
//};

//void challenges_initialize_for_new_map(void)
//{
//    mangled_ppc("?challenges_initialize_for_new_map@@YAXXZ");
//};

//void challenges_dispose_from_old_map(void)
//{
//    mangled_ppc("?challenges_dispose_from_old_map@@YAXXZ");
//};

//void challenges_notify_user_file_received(enum e_controller_index)
//{
//    mangled_ppc("?challenges_notify_user_file_received@@YAXW4e_controller_index@@@Z");
//};

//bool challenge_progress(enum e_controller_index, long)
//{
//    mangled_ppc("?challenge_progress@@YA_NW4e_controller_index@@J@Z");
//};

//bool challenge_can_be_progressed_this_game(enum e_controller_index, long)
//{
//    mangled_ppc("?challenge_can_be_progressed_this_game@@YA_NW4e_controller_index@@J@Z");
//};

//bool challenge_can_be_progressed_now(enum e_controller_index, long)
//{
//    mangled_ppc("?challenge_can_be_progressed_now@@YA_NW4e_controller_index@@J@Z");
//};

//long challenge_get_current_progress(enum e_controller_index, long)
//{
//    mangled_ppc("?challenge_get_current_progress@@YAJW4e_controller_index@@J@Z");
//};

//long challenge_get_required_progress(long)
//{
//    mangled_ppc("?challenge_get_required_progress@@YAJJ@Z");
//};

//bool challenge_is_complete(enum e_controller_index, long)
//{
//    mangled_ppc("?challenge_is_complete@@YA_NW4e_controller_index@@J@Z");
//};

//bool controller_has_valid_challenge_state(enum e_controller_index)
//{
//    mangled_ppc("?controller_has_valid_challenge_state@@YA_NW4e_controller_index@@@Z");
//};

//void challenge_handle_progress_flag(enum e_controller_index, enum e_challenge_progress_flag)
//{
//    mangled_ppc("?challenge_handle_progress_flag@@YAXW4e_controller_index@@W4e_challenge_progress_flag@@@Z");
//};

//void challenge_handle_progress_flag_warn_on_failure(enum e_controller_index, enum e_challenge_progress_flag)
//{
//    mangled_ppc("?challenge_handle_progress_flag_warn_on_failure@@YAXW4e_controller_index@@W4e_challenge_progress_flag@@@Z");
//};

//void challenges_notify_game_completed(void)
//{
//    mangled_ppc("?challenges_notify_game_completed@@YAXXZ");
//};

//__int64 challenge_get_next_delivery_time(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?challenge_get_next_delivery_time@@YA_JV?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool challenges_are_current(void)
//{
//    mangled_ppc("?challenges_are_current@@YA_NXZ");
//};

//void challenge_get_player_state(enum e_controller_index, struct s_player_challenge_state *)
//{
//    mangled_ppc("?challenge_get_player_state@@YAXW4e_controller_index@@PAUs_player_challenge_state@@@Z");
//};

//public: s_active_challenge::s_active_challenge(void)
//{
//    mangled_ppc("??0s_active_challenge@@QAA@XZ");
//};

//void challenge_player_state_encode(class c_bitstream *, struct s_player_challenge_state const *)
//{
//    mangled_ppc("?challenge_player_state_encode@@YAXPAVc_bitstream@@PBUs_player_challenge_state@@@Z");
//};

//void challenge_player_state_decode(class c_bitstream *, struct s_player_challenge_state *)
//{
//    mangled_ppc("?challenge_player_state_decode@@YAXPAVc_bitstream@@PAUs_player_challenge_state@@@Z");
//};

//void challenges_inject_challenge_state(enum e_controller_index, struct s_challenge_state_chunk const *)
//{
//    mangled_ppc("?challenges_inject_challenge_state@@YAXW4e_controller_index@@PBUs_challenge_state_chunk@@@Z");
//};

//enum e_challenge_set operator++(enum e_challenge_set &, int)
//{
//    mangled_ppc("??E@YA?AW4e_challenge_set@@AAW40@H@Z");
//};

//public: c_active_challenge::c_active_challenge(void)
//{
//    mangled_ppc("??0c_active_challenge@@QAA@XZ");
//};

//public: s_challenge_definition::s_challenge_definition(void)
//{
//    mangled_ppc("??0s_challenge_definition@@QAA@XZ");
//};

//public: s_game_mode_flags::s_game_mode_flags(void)
//{
//    mangled_ppc("??0s_game_mode_flags@@QAA@XZ");
//};

//void challenges_inject_controller_progress(enum e_controller_index, struct s_challenge_progress_chunk const *)
//{
//    mangled_ppc("?challenges_inject_controller_progress@@YAXW4e_controller_index@@PBUs_challenge_progress_chunk@@@Z");
//};

//bool challenges_get_controller_progress_chunk(enum e_controller_index, struct s_challenge_progress_chunk *)
//{
//    mangled_ppc("?challenges_get_controller_progress_chunk@@YA_NW4e_controller_index@@PAUs_challenge_progress_chunk@@@Z");
//};

//long challenges_get_set_id(enum e_challenge_set)
//{
//    mangled_ppc("?challenges_get_set_id@@YAJW4e_challenge_set@@@Z");
//};

//bool challenges_would_like_any_new_challenges(void)
//{
//    mangled_ppc("?challenges_would_like_any_new_challenges@@YA_NXZ");
//};

//public: c_active_challenge_iterator_internal::c_active_challenge_iterator_internal(void)
//{
//    mangled_ppc("??0c_active_challenge_iterator_internal@@QAA@XZ");
//};

//public: class c_active_challenge * c_active_challenge_iterator_internal::get_active_challenge(void) const
//{
//    mangled_ppc("?get_active_challenge@c_active_challenge_iterator_internal@@QBAPAVc_active_challenge@@XZ");
//};

//public: bool c_active_challenge_iterator_internal::next_active_challenge_by_name(long)
//{
//    mangled_ppc("?next_active_challenge_by_name@c_active_challenge_iterator_internal@@QAA_NJ@Z");
//};

//public: struct s_challenge_definition const * c_active_challenge::get_challenge_definition(void) const
//{
//    mangled_ppc("?get_challenge_definition@c_active_challenge@@QBAPBUs_challenge_definition@@XZ");
//};

//public: void c_active_challenge::set_challenge_state_definition(struct s_challenge_state_definition const *)
//{
//    mangled_ppc("?set_challenge_state_definition@c_active_challenge@@QAAXPBUs_challenge_state_definition@@@Z");
//};

//public: struct s_challenge_category_definition const * c_active_challenge::try_and_get_challenge_category_definition(void) const
//{
//    mangled_ppc("?try_and_get_challenge_category_definition@c_active_challenge@@QBAPBUs_challenge_category_definition@@XZ");
//};

//public: bool c_active_challenge::can_be_progressed_this_game(enum e_controller_index, enum e_progression_failure_reason *) const
//{
//    mangled_ppc("?can_be_progressed_this_game@c_active_challenge@@QBA_NW4e_controller_index@@PAW4e_progression_failure_reason@@@Z");
//};

//public: bool c_active_challenge::can_be_progressed_now(enum e_controller_index, enum e_progression_failure_reason *) const
//{
//    mangled_ppc("?can_be_progressed_now@c_active_challenge@@QBA_NW4e_controller_index@@PAW4e_progression_failure_reason@@@Z");
//};

//public: bool c_active_challenge::is_complete(enum e_controller_index) const
//{
//    mangled_ppc("?is_complete@c_active_challenge@@QBA_NW4e_controller_index@@@Z");
//};

//public: long c_active_challenge::get_current_progress(enum e_controller_index) const
//{
//    mangled_ppc("?get_current_progress@c_active_challenge@@QBAJW4e_controller_index@@@Z");
//};

//public: void c_active_challenge::handle_completion(enum e_controller_index) const
//{
//    mangled_ppc("?handle_completion@c_active_challenge@@QBAXW4e_controller_index@@@Z");
//};

//public: class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> c_active_challenge_iterator_internal::get_challenge_set(void) const
//{
//    mangled_ppc("?get_challenge_set@c_active_challenge_iterator_internal@@QBA?AV?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@XZ");
//};

//public: long c_active_challenge::get_lsp_challenge_progress(enum e_controller_index) const
//{
//    mangled_ppc("?get_lsp_challenge_progress@c_active_challenge@@QBAJW4e_controller_index@@@Z");
//};

//public: void c_active_challenge::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_active_challenge@@QAAXXZ");
//};

//private: void c_active_challenge::refresh_challenge_definition(void)
//{
//    mangled_ppc("?refresh_challenge_definition@c_active_challenge@@AAAXXZ");
//};

//public: c_challenge_controller_monitor::c_challenge_controller_monitor(void)
//{
//    mangled_ppc("??0c_challenge_controller_monitor@@QAA@XZ");
//};

//public: virtual bool c_challenge_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_challenge_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_challenge_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_challenge_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_challenge_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_challenge_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: bool c_challenge_controller_monitor::is_signed_in(enum e_controller_index)
//{
//    mangled_ppc("?is_signed_in@c_challenge_controller_monitor@@QAA_NW4e_controller_index@@@Z");
//};

//struct s_challenge_globals * challenge_globals_get(void)
//{
//    mangled_ppc("?challenge_globals_get@@YAPAUs_challenge_globals@@XZ");
//};

//bool challenge_test_required_game_type(struct s_challenge_definition const *)
//{
//    mangled_ppc("?challenge_test_required_game_type@@YA_NPBUs_challenge_definition@@@Z");
//};

//bool challenge_test_required_level(struct s_challenge_definition const *)
//{
//    mangled_ppc("?challenge_test_required_level@@YA_NPBUs_challenge_definition@@@Z");
//};

//bool challenge_test_required_skulls(struct s_challenge_definition const *)
//{
//    mangled_ppc("?challenge_test_required_skulls@@YA_NPBUs_challenge_definition@@@Z");
//};

//bool challenge_test_required_minimum_score(struct s_challenge_definition const *, enum e_controller_index)
//{
//    mangled_ppc("?challenge_test_required_minimum_score@@YA_NPBUs_challenge_definition@@W4e_controller_index@@@Z");
//};

//bool challenge_test_required_minimum_score_possible(struct s_challenge_definition const *, enum e_controller_index)
//{
//    mangled_ppc("?challenge_test_required_minimum_score_possible@@YA_NPBUs_challenge_definition@@W4e_controller_index@@@Z");
//};

//bool challenge_test_required_maximum_player_deaths(struct s_challenge_definition const *, enum e_controller_index)
//{
//    mangled_ppc("?challenge_test_required_maximum_player_deaths@@YA_NPBUs_challenge_definition@@W4e_controller_index@@@Z");
//};

//bool challenge_test_required_maximum_level_seconds(struct s_challenge_definition const *, enum e_controller_index)
//{
//    mangled_ppc("?challenge_test_required_maximum_level_seconds@@YA_NPBUs_challenge_definition@@W4e_controller_index@@@Z");
//};

//bool challenge_test_minimum_sets_completed(struct s_challenge_definition const *)
//{
//    mangled_ppc("?challenge_test_minimum_sets_completed@@YA_NPBUs_challenge_definition@@@Z");
//};

//void challenges_update_disqualification(void)
//{
//    mangled_ppc("?challenges_update_disqualification@@YAXXZ");
//};

//void challenges_reset_disqualification(void)
//{
//    mangled_ppc("?challenges_reset_disqualification@@YAXXZ");
//};

//bool challenges_would_like_new_challenges(enum e_challenge_set)
//{
//    mangled_ppc("?challenges_would_like_new_challenges@@YA_NW4e_challenge_set@@@Z");
//};

//void challenge_clear_controller_state(enum e_controller_index)
//{
//    mangled_ppc("?challenge_clear_controller_state@@YAXW4e_controller_index@@@Z");
//};

//bool challenge_controller_signed_in(enum e_controller_index)
//{
//    mangled_ppc("?challenge_controller_signed_in@@YA_NW4e_controller_index@@@Z");
//};

//void challenges_inject_controller_progress_internal(enum e_controller_index, struct s_challenge_progress_chunk const *)
//{
//    mangled_ppc("?challenges_inject_controller_progress_internal@@YAXW4e_controller_index@@PBUs_challenge_progress_chunk@@@Z");
//};

//class c_active_challenge * find_first_active_challenge(long)
//{
//    mangled_ppc("?find_first_active_challenge@@YAPAVc_active_challenge@@J@Z");
//};

//void challenge_handle_progress_flag_internal(enum e_controller_index, enum e_challenge_progress_flag, bool)
//{
//    mangled_ppc("?challenge_handle_progress_flag_internal@@YAXW4e_controller_index@@W4e_challenge_progress_flag@@_N@Z");
//};

//bool challenge_progress_with_warn_option(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?challenge_progress_with_warn_option@@YA_NW4e_controller_index@@J_N@Z");
//};

//bool challenge_progress_internal(enum e_controller_index, long, bool, bool)
//{
//    mangled_ppc("?challenge_progress_internal@@YA_NW4e_controller_index@@J_N1@Z");
//};

//char const * get_failure_reason_string(enum e_progression_failure_reason)
//{
//    mangled_ppc("?get_failure_reason_string@@YAPBDW4e_progression_failure_reason@@@Z");
//};

//void challenges_enable_lsp_synchronization_hs(bool)
//{
//    mangled_ppc("?challenges_enable_lsp_synchronization_hs@@YAX_N@Z");
//};

//void challenges_clear_hs(void)
//{
//    mangled_ppc("?challenges_clear_hs@@YAXXZ");
//};

//void challenges_activate_challenge_hs(long, long, long)
//{
//    mangled_ppc("?challenges_activate_challenge_hs@@YAXJJJ@Z");
//};

//void challenges_list_active_challenges_for_controller_hs(enum e_controller_index)
//{
//    mangled_ppc("?challenges_list_active_challenges_for_controller_hs@@YAXW4e_controller_index@@@Z");
//};

//void challenge_advance_for_controller_hs(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?challenge_advance_for_controller_hs@@YAXW4e_controller_index@@J_N@Z");
//};

//void challenge_complete_for_controller_hs(enum e_controller_index, long, bool)
//{
//    mangled_ppc("?challenge_complete_for_controller_hs@@YAXW4e_controller_index@@J_N@Z");
//};

//void challenge_advance_for_controller_by_indices_hs(enum e_controller_index, long, long, bool)
//{
//    mangled_ppc("?challenge_advance_for_controller_by_indices_hs@@YAXW4e_controller_index@@JJ_N@Z");
//};

//void challenge_complete_for_controller_by_indices_hs(enum e_controller_index, long, long, bool)
//{
//    mangled_ppc("?challenge_complete_for_controller_by_indices_hs@@YAXW4e_controller_index@@JJ_N@Z");
//};

//public: c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>(enum e_challenge_set)
//{
//    mangled_ppc("??0?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_challenge_set@@@Z");
//};

//public: enum e_challenge_set c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_challenge_set(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_challenge_set@@XZ");
//};

//public: bool c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_challenge_set) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_challenge_set@@@Z");
//};

//public: class c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> c_enum_no_init<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>::operator++(int)
//{
//    mangled_ppc("??E?$c_enum_no_init@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@QAA?AV0@H@Z");
//};

//public: struct s_challenge_state_definition const * s_static_array<struct s_challenge_state_definition, 10>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_challenge_state_definition@@$09@@QBAPBUs_challenge_state_definition@@XZ");
//};

//public: struct s_challenge_progress const * s_static_array<struct s_challenge_progress, 10>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_challenge_progress@@$09@@QBAPBUs_challenge_progress@@XZ");
//};

//public: bool c_static_stack<class c_active_challenge, 10>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Vc_active_challenge@@$09@@QBA_NXZ");
//};

//public: long c_static_stack<class c_active_challenge, 10>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Vc_active_challenge@@$09@@QBAJXZ");
//};

//public: void c_static_stack<class c_active_challenge, 10>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Vc_active_challenge@@$09@@QAAXXZ");
//};

//public: void c_static_stack<class c_active_challenge, 10>::push_back(class c_active_challenge const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Vc_active_challenge@@$09@@QAAXABVc_active_challenge@@@Z");
//};

//public: class c_active_challenge const & c_static_stack<class c_active_challenge, 10>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Vc_active_challenge@@$09@@QBAABVc_active_challenge@@J@Z");
//};

//public: class c_active_challenge & c_static_stack<class c_active_challenge, 10>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Vc_active_challenge@@$09@@QAAAAVc_active_challenge@@J@Z");
//};

//public: class c_active_challenge const * c_static_stack<class c_active_challenge, 10>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Vc_active_challenge@@$09@@QBAPBVc_active_challenge@@J@Z");
//};

//public: class c_active_challenge * c_static_stack<class c_active_challenge, 10>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Vc_active_challenge@@$09@@QAAPAVc_active_challenge@@J@Z");
//};

//public: void s_static_array<bool, 4>::set_all(bool const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@_N$03@@QAAXAB_N@Z");
//};

//public: bool c_static_stack<class c_active_challenge, 10>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_active_challenge@@$09@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_active_challenge, 10>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Vc_active_challenge@@$09@@QBA_NJ@Z");
//};

//public: long c_static_stack<class c_active_challenge, 10>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Vc_active_challenge@@$09@@QAAJXZ");
//};

//public: c_flags<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_type@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_activity_type@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_challenge_definition_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_challenge_definition_flag@@@Z");
//};

//public: c_flags<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_challenge_progress_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_challenge_progress_flag@@@Z");
//};

//public: c_flags<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_player_challenge_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_player_challenge_state_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_player_challenge_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_player_challenge_state_flags@@_N@Z");
//};

//public: struct s_active_challenge_set & s_static_array<struct s_active_challenge_set, 2>::operator[]<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@?$s_static_array@Us_active_challenge_set@@$01@@QAAAAUs_active_challenge_set@@V?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_active_challenge_set const & s_static_array<struct s_active_challenge_set, 2>::operator[]<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@?$s_static_array@Us_active_challenge_set@@$01@@QBAABUs_active_challenge_set@@V?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//void zero_and_reconstruct<struct s_challenge_globals>(struct s_challenge_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_challenge_globals@@@@YAXPAUs_challenge_globals@@@Z");
//};

//public: struct s_challenge_progress_chunk & s_static_array<struct s_challenge_progress_chunk, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_challenge_progress_chunk@@$03@@QAAAAUs_challenge_progress_chunk@@W4e_controller_index@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_active_challenge_set & s_static_array<struct s_active_challenge_set, 2>::operator[]<enum e_challenge_set>(enum e_challenge_set)
//{
//    mangled_ppc("??$?AW4e_challenge_set@@@?$s_static_array@Us_active_challenge_set@@$01@@QAAAAUs_active_challenge_set@@W4e_challenge_set@@@Z");
//};

//public: struct s_challenge_progress & s_static_array<struct s_challenge_progress, 10>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_challenge_progress@@$09@@QAAAAUs_challenge_progress@@J@Z");
//};

//public: bool & s_static_array<bool, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@_N$03@@QAAAA_NW4e_controller_index@@@Z");
//};

//public: void c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_type@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_type@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_activity_type@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_activity_type@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_challenge_definition_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_challenge_definition_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_challenge_definition_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_challenge_definition_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_challenge_progress_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@SA_NW4e_challenge_progress_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_challenge_progress_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_challenge_progress_flag@@@Z");
//};

//public: static class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_game_skulls, enum e_game_skulls)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@SA?AV1@W4e_game_skulls@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_player_challenge_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_player_challenge_state_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_challenge_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_player_challenge_state_flags@@@Z");
//};

//public: static bool s_static_array<struct s_active_challenge_set, 2>::valid<class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_challenge_set, char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@?$s_static_array@Us_active_challenge_set@@$01@@SA_NV?$c_enum@W4e_challenge_set@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//void reconstruct<struct s_challenge_globals>(struct s_challenge_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_challenge_globals@@@@YAXPAUs_challenge_globals@@@Z");
//};

//public: s_challenge_globals::s_challenge_globals(void)
//{
//    mangled_ppc("??0s_challenge_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_active_challenge_set, 2>::s_static_array<struct s_active_challenge_set, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_active_challenge_set@@$01@@QAA@XZ");
//};

//public: s_static_array<struct s_challenge_progress_chunk, 4>::s_static_array<struct s_challenge_progress_chunk, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_challenge_progress_chunk@@$03@@QAA@XZ");
//};

//public: s_challenge_progress_chunk::s_challenge_progress_chunk(void)
//{
//    mangled_ppc("??0s_challenge_progress_chunk@@QAA@XZ");
//};

//public: s_active_challenge_set::s_active_challenge_set(void)
//{
//    mangled_ppc("??0s_active_challenge_set@@QAA@XZ");
//};

//public: c_static_stack<class c_active_challenge, 10>::c_static_stack<class c_active_challenge, 10>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Vc_active_challenge@@$09@@QAA@XZ");
//};

//public: static bool s_static_array<struct s_challenge_progress_chunk, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_challenge_progress_chunk@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<struct s_active_challenge_set, 2>::valid<enum e_challenge_set>(enum e_challenge_set)
//{
//    mangled_ppc("??$valid@W4e_challenge_set@@@?$s_static_array@Us_active_challenge_set@@$01@@SA_NW4e_challenge_set@@@Z");
//};

//public: static bool s_static_array<struct s_challenge_progress, 10>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_challenge_progress@@$09@@SA_NJ@Z");
//};

//public: static bool s_static_array<bool, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@_N$03@@SA_NW4e_controller_index@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_type@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_activity_type@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_campaign_difficulty_level, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_campaign_difficulty_level@@E$03Us_default_enum_string_resolver@@@@CAEW4e_campaign_difficulty_level@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//public: bool c_flags_no_init<enum e_player_challenge_state_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_challenge_state_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_game_type, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_type@@E$02Us_default_enum_string_resolver@@@@CAEW4e_game_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_activity_type, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_activity_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_activity_type@@E$01Us_default_enum_string_resolver@@@@CAEW4e_game_activity_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_challenge_definition_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_challenge_definition_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_challenge_definition_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_challenge_definition_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_challenge_progress_flag, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_challenge_progress_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_challenge_progress_flag@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_challenge_progress_flag@@@Z");
//};

