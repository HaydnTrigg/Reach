/* ---------- headers */

#include "omaha\main\levels_dlc.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_levels_dlc_examine_content_item_async::k_async_priority; // "?k_async_priority@c_levels_dlc_examine_content_item_async@@2JB"
// public: static long const c_levels_dlc_examine_content_item_async::k_async_category; // "?k_async_category@c_levels_dlc_examine_content_item_async@@2JB"
// private: static long const c_controller_dlc::k_maximum_non_fatal_gather_retries; // "?k_maximum_non_fatal_gather_retries@c_controller_dlc@@0JB"
// public: static enum e_levels_dlc_flags const c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_levels_dlc_flags@@B"
// public: static long const s_static_array<struct c_controller_dlc, 4>::k_element_count; // "?k_element_count@?$s_static_array@Uc_controller_dlc@@$03@@2JB"
// public: static long const s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_tracker@Us_available_dlc_file@@$0BC@@@$03@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 18>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0BC@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 18>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0BC@@@2JB"
// public: static long const s_static_array<struct s_available_dlc_file, 18>::k_element_count; // "?k_element_count@?$s_static_array@Us_available_dlc_file@@$0BC@@@2JB"
// public: static long const s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_tracker@Us_opened_content_item@@$02@@$03@@2JB"
// public: static long const s_static_array<struct s_opened_content_item, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_opened_content_item@@$02@@2JB"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 18>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0BC@@@QAAXXZ@4JC"
// struct s_levels_dlc_globals g_levels_dlc_globals; // "?g_levels_dlc_globals@@3Us_levels_dlc_globals@@A"
// class c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82> g_levels_dlc_threadsafe_globals; // "?g_levels_dlc_threadsafe_globals@@3V?$c_locked_data_container@Us_levels_dlc_threadsafe_globals@@$0FC@@@A"

// void levels_dlc_initialize(void);
// void levels_dlc_dispose(void);
// void levels_dlc_update(void);
// bool levels_dlc_is_ready(void);
// bool levels_dlc_open(char const *, bool);
// void levels_dlc_close_all(bool);
// unsigned long levels_dlc_get_controller_unlock_flags(enum e_controller_index);
// public: unsigned long c_controller_dlc::get_unlock_flags(void) const;
// bool levels_dlc_get_content_item_for_scenario_path(char const *, enum e_controller_index *, struct s_content_item_platform_handle *);
// public: c_levels_dlc_examine_content_item_async::c_levels_dlc_examine_content_item_async(void);
// public: class c_levels_dlc_examine_content_item_async * c_levels_dlc_examine_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// private: enum e_async_pending_bool c_levels_dlc_examine_content_item_async::update(class c_synchronized_int32*);
// public: s_available_dlc_file::s_available_dlc_file(void);
// public: virtual bool c_levels_dlc_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_levels_dlc_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_levels_dlc_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// public: void c_controller_dlc::initialize(enum e_controller_index);
// public: void c_controller_dlc::dispose(void);
// public: void c_controller_dlc::update(void);
// public: bool c_controller_dlc::needs_gather(void) const;
// public: void c_controller_dlc::start_gather(void);
// public: bool c_controller_dlc::update_gather(struct s_dlc_gather_task_data *);
// public: unsigned long c_levels_dlc_examine_content_item_async::get_unlock_flags(void) const;
// public: void c_controller_dlc::notify_sign_in(void);
// public: void c_controller_dlc::notify_sign_out(void);
// private: bool c_controller_dlc::start_enumeration(struct s_dlc_gather_task_data *);
// private: bool c_controller_dlc::may_have_dlc(void) const;
// private: bool c_controller_dlc::in_stable_state(void);
// private: void c_controller_dlc::set_state(enum e_controller_dlc_state);
// private: char const * c_controller_dlc::get_state_string(enum e_controller_dlc_state);
// public: void c_controller_dlc::clean_up_levels(void);
// public: void s_levels_dlc_threadsafe_globals::notify_open_content_item(enum e_controller_index, struct s_opened_content_item const *);
// public: void s_levels_dlc_threadsafe_globals::close_open_content_items(enum e_controller_index, enum e_campaign_id const *, enum e_map_id const *, long);
// void cache_files_revoke_directory(char const *);
// struct s_levels_dlc_globals * levels_dlc_globals_get(void);
// void levels_dlc_clean_all(void);
// bool levels_dlc_is_already_open(enum e_controller_index, struct s_content_item_platform_handle const *);
// struct s_available_dlc_file const * find_available_file(class c_tracker<struct s_available_dlc_file, 18> const *, class c_static_string<256> const *);
// public: c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>(unsigned char);
// public: c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>(unsigned short);
// public: class c_levels_dlc_examine_content_item_async const & c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::get_inner_function(void) const;
// public: void c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::destruct(void);
// public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get(void);
// public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> const * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get_const(void) const;
// public: void * c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::`scalar deleting destructor'(unsigned int);
// public: c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::~c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>(void);
// public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: void c_flags_no_init<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_content_open_close_async_configuration_flag, bool);
// public: static bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::submit(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::switch_state(enum c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::e_state);
// public: bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_levels_dlc_flags) const;
// public: void c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_levels_dlc_flags, bool);
// public: long c_tracker<struct s_available_dlc_file, 18>::add(struct s_available_dlc_file const *);
// public: void c_tracker<struct s_available_dlc_file, 18>::reset(void);
// public: long c_tracker<struct s_available_dlc_file, 18>::get_first(void) const;
// public: long c_tracker<struct s_available_dlc_file, 18>::get_next(long) const;
// public: struct s_available_dlc_file const * c_tracker<struct s_available_dlc_file, 18>::get(long) const;
// public: struct s_available_dlc_file * c_tracker<struct s_available_dlc_file, 18>::get(long);
// public: long c_tracker<struct s_opened_content_item, 3>::add(struct s_opened_content_item const *);
// public: void c_tracker<struct s_opened_content_item, 3>::remove(long);
// public: void c_tracker<struct s_opened_content_item, 3>::reset(void);
// public: long c_tracker<struct s_opened_content_item, 3>::get_first(void) const;
// public: long c_tracker<struct s_opened_content_item, 3>::get_next(long) const;
// public: struct s_opened_content_item * c_tracker<struct s_opened_content_item, 3>::get(long);
// void zero_and_reconstruct<struct s_levels_dlc_globals>(struct s_levels_dlc_globals *);
// public: struct c_controller_dlc & s_static_array<struct c_controller_dlc, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>(class c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82> *);
// public: c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::~c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>(void);
// public: struct s_levels_dlc_threadsafe_globals * c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::operator->(void);
// public: class c_tracker<struct s_available_dlc_file, 18> & s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::construct<enum e_controller_index, struct s_content_item_platform_handle *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async>(enum e_controller_index, struct s_content_item_platform_handle *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async);
// public: class c_tracker<struct s_opened_content_item, 3> & s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: static long s_static_array<struct s_available_dlc_file, 18>::get_count(void);
// public: static long s_static_array<struct s_opened_content_item, 3>::get_count(void);
// public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::valid(void) const;
// public: c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>(enum e_controller_index, struct s_content_item_platform_handle const *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async const &);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_opening(void);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_inner(void);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_closing(void);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_opening(void);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_inner(void);
// private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_closing(void);
// class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_levels_dlc_flags);
// private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_levels_dlc_flags);
// public: void c_big_flags_typed_no_init<long, 18>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 18>::is_clear(void) const;
// public: bool c_big_flags_typed_no_init<long, 18>::test(long) const;
// public: void c_big_flags_typed_no_init<long, 18>::set(long, bool);
// public: struct s_available_dlc_file & s_static_array<struct s_available_dlc_file, 18>::operator[]<long>(long);
// public: struct s_available_dlc_file const & s_static_array<struct s_available_dlc_file, 18>::operator[]<long>(long) const;
// public: struct s_opened_content_item & s_static_array<struct s_opened_content_item, 3>::operator[]<long>(long);
// void reconstruct<struct s_levels_dlc_globals>(struct s_levels_dlc_globals *);
// public: s_levels_dlc_globals::s_levels_dlc_globals(void);
// public: s_dlc_gather_task_data::s_dlc_gather_task_data(void);
// public: c_levels_dlc_controller_monitor::c_levels_dlc_controller_monitor(void);
// public: c_levels_dlc_enumerate_items_task::c_levels_dlc_enumerate_items_task(void);
// merged_8359F000;
// public: virtual c_levels_dlc_enumerate_items_task::~c_levels_dlc_enumerate_items_task(void);
// public: c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>(void);
// public: c_flags<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool s_static_array<struct c_controller_dlc, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get(void);
// public: static bool s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>::s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *);
// public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_big_flags_typed_no_init<long, 18>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 18>::valid(void) const;
// public: static bool s_static_array<struct s_available_dlc_file, 18>::valid<long>(long);
// public: static bool s_static_array<struct s_opened_content_item, 3>::valid<long>(long);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_levels_dlc_flags);
// protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_mask_of_second_slice_of_chunk_inclusive(long);
// public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// protected: static long c_big_flags_typed_no_init<long, 18>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 18>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_valid_mask_of_last_chunk(void);
// public: enum e_async_pending_bool s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>::operator()(class c_synchronized_int32*);
// protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_mask_of_first_slice_of_chunk_exclusive(long);
// public: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::operator()(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_opening(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_inner(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_closing(void);
// class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>(class c_levels_dlc_examine_content_item_async *, class c_synchronized_int32*);
// bool async_function_submit<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *);
// public: s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>(class c_levels_dlc_examine_content_item_async *);
// public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *);
// public: static enum e_async_completion s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*);
// public: enum e_async_pending_bool c_levels_dlc_examine_content_item_async::operator()(class c_synchronized_int32*);
// public: c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82>::c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82>(void);
// public: s_levels_dlc_threadsafe_globals::s_levels_dlc_threadsafe_globals(void);
// public: s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>(void);
// public: s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>(void);
// public: c_tracker<struct s_available_dlc_file, 18>::c_tracker<struct s_available_dlc_file, 18>(void);
// public: c_tracker<struct s_opened_content_item, 3>::c_tracker<struct s_opened_content_item, 3>(void);
// public: s_static_array<struct s_available_dlc_file, 18>::s_static_array<struct s_available_dlc_file, 18>(void);
// public: s_static_array<struct s_opened_content_item, 3>::s_static_array<struct s_opened_content_item, 3>(void);
// public: c_big_flags<18>::c_big_flags<18>(void);
// public: c_big_flags<3>::c_big_flags<3>(void);
// public: c_big_flags_typed<long, 18>::c_big_flags_typed<long, 18>(void);
// public: c_big_flags_typed<long, 3>::c_big_flags_typed<long, 3>(void);
// public: s_levels_dlc_globals::~s_levels_dlc_globals(void);
// public: s_dlc_gather_task_data::~s_dlc_gather_task_data(void);
// public: c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::~c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>(void);
// void g_levels_dlc_globals::`dynamic atexit destructor'(void);

//void levels_dlc_initialize(void)
//{
//    mangled_ppc("?levels_dlc_initialize@@YAXXZ");
//};

//void levels_dlc_dispose(void)
//{
//    mangled_ppc("?levels_dlc_dispose@@YAXXZ");
//};

//void levels_dlc_update(void)
//{
//    mangled_ppc("?levels_dlc_update@@YAXXZ");
//};

//bool levels_dlc_is_ready(void)
//{
//    mangled_ppc("?levels_dlc_is_ready@@YA_NXZ");
//};

//bool levels_dlc_open(char const *, bool)
//{
//    mangled_ppc("?levels_dlc_open@@YA_NPBD_N@Z");
//};

//void levels_dlc_close_all(bool)
//{
//    mangled_ppc("?levels_dlc_close_all@@YAX_N@Z");
//};

//unsigned long levels_dlc_get_controller_unlock_flags(enum e_controller_index)
//{
//    mangled_ppc("?levels_dlc_get_controller_unlock_flags@@YAKW4e_controller_index@@@Z");
//};

//public: unsigned long c_controller_dlc::get_unlock_flags(void) const
//{
//    mangled_ppc("?get_unlock_flags@c_controller_dlc@@QBAKXZ");
//};

//bool levels_dlc_get_content_item_for_scenario_path(char const *, enum e_controller_index *, struct s_content_item_platform_handle *)
//{
//    mangled_ppc("?levels_dlc_get_content_item_for_scenario_path@@YA_NPBDPAW4e_controller_index@@PAUs_content_item_platform_handle@@@Z");
//};

//public: c_levels_dlc_examine_content_item_async::c_levels_dlc_examine_content_item_async(void)
//{
//    mangled_ppc("??0c_levels_dlc_examine_content_item_async@@QAA@XZ");
//};

//public: class c_levels_dlc_examine_content_item_async * c_levels_dlc_examine_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_levels_dlc_examine_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//private: enum e_async_pending_bool c_levels_dlc_examine_content_item_async::update(class c_synchronized_int32*)
//{
//    mangled_ppc("?update@c_levels_dlc_examine_content_item_async@@AAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//public: s_available_dlc_file::s_available_dlc_file(void)
//{
//    mangled_ppc("??0s_available_dlc_file@@QAA@XZ");
//};

//public: virtual bool c_levels_dlc_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_levels_dlc_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_levels_dlc_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_levels_dlc_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_levels_dlc_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_levels_dlc_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: void c_controller_dlc::initialize(enum e_controller_index)
//{
//    mangled_ppc("?initialize@c_controller_dlc@@QAAXW4e_controller_index@@@Z");
//};

//public: void c_controller_dlc::dispose(void)
//{
//    mangled_ppc("?dispose@c_controller_dlc@@QAAXXZ");
//};

//public: void c_controller_dlc::update(void)
//{
//    mangled_ppc("?update@c_controller_dlc@@QAAXXZ");
//};

//public: bool c_controller_dlc::needs_gather(void) const
//{
//    mangled_ppc("?needs_gather@c_controller_dlc@@QBA_NXZ");
//};

//public: void c_controller_dlc::start_gather(void)
//{
//    mangled_ppc("?start_gather@c_controller_dlc@@QAAXXZ");
//};

//public: bool c_controller_dlc::update_gather(struct s_dlc_gather_task_data *)
//{
//    mangled_ppc("?update_gather@c_controller_dlc@@QAA_NPAUs_dlc_gather_task_data@@@Z");
//};

//public: unsigned long c_levels_dlc_examine_content_item_async::get_unlock_flags(void) const
//{
//    mangled_ppc("?get_unlock_flags@c_levels_dlc_examine_content_item_async@@QBAKXZ");
//};

//public: void c_controller_dlc::notify_sign_in(void)
//{
//    mangled_ppc("?notify_sign_in@c_controller_dlc@@QAAXXZ");
//};

//public: void c_controller_dlc::notify_sign_out(void)
//{
//    mangled_ppc("?notify_sign_out@c_controller_dlc@@QAAXXZ");
//};

//private: bool c_controller_dlc::start_enumeration(struct s_dlc_gather_task_data *)
//{
//    mangled_ppc("?start_enumeration@c_controller_dlc@@AAA_NPAUs_dlc_gather_task_data@@@Z");
//};

//private: bool c_controller_dlc::may_have_dlc(void) const
//{
//    mangled_ppc("?may_have_dlc@c_controller_dlc@@ABA_NXZ");
//};

//private: bool c_controller_dlc::in_stable_state(void)
//{
//    mangled_ppc("?in_stable_state@c_controller_dlc@@AAA_NXZ");
//};

//private: void c_controller_dlc::set_state(enum e_controller_dlc_state)
//{
//    mangled_ppc("?set_state@c_controller_dlc@@AAAXW4e_controller_dlc_state@@@Z");
//};

//private: char const * c_controller_dlc::get_state_string(enum e_controller_dlc_state)
//{
//    mangled_ppc("?get_state_string@c_controller_dlc@@AAAPBDW4e_controller_dlc_state@@@Z");
//};

//public: void c_controller_dlc::clean_up_levels(void)
//{
//    mangled_ppc("?clean_up_levels@c_controller_dlc@@QAAXXZ");
//};

//public: void s_levels_dlc_threadsafe_globals::notify_open_content_item(enum e_controller_index, struct s_opened_content_item const *)
//{
//    mangled_ppc("?notify_open_content_item@s_levels_dlc_threadsafe_globals@@QAAXW4e_controller_index@@PBUs_opened_content_item@@@Z");
//};

//public: void s_levels_dlc_threadsafe_globals::close_open_content_items(enum e_controller_index, enum e_campaign_id const *, enum e_map_id const *, long)
//{
//    mangled_ppc("?close_open_content_items@s_levels_dlc_threadsafe_globals@@QAAXW4e_controller_index@@PBW4e_campaign_id@@PBW4e_map_id@@J@Z");
//};

//void cache_files_revoke_directory(char const *)
//{
//    mangled_ppc("?cache_files_revoke_directory@@YAXPBD@Z");
//};

//struct s_levels_dlc_globals * levels_dlc_globals_get(void)
//{
//    mangled_ppc("?levels_dlc_globals_get@@YAPAUs_levels_dlc_globals@@XZ");
//};

//void levels_dlc_clean_all(void)
//{
//    mangled_ppc("?levels_dlc_clean_all@@YAXXZ");
//};

//bool levels_dlc_is_already_open(enum e_controller_index, struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?levels_dlc_is_already_open@@YA_NW4e_controller_index@@PBUs_content_item_platform_handle@@@Z");
//};

//struct s_available_dlc_file const * find_available_file(class c_tracker<struct s_available_dlc_file, 18> const *, class c_static_string<256> const *)
//{
//    mangled_ppc("?find_available_file@@YAPBUs_available_dlc_file@@PBV?$c_tracker@Us_available_dlc_file@@$0BC@@@PBV?$c_static_string@$0BAA@@@@Z");
//};

//public: c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>(unsigned char)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAA@E@Z");
//};

//public: c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>(unsigned short)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAA@G@Z");
//};

//public: class c_levels_dlc_examine_content_item_async const & c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::get_inner_function(void) const
//{
//    mangled_ppc("?get_inner_function@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@QBAABVc_levels_dlc_examine_content_item_async@@XZ");
//};

//public: void c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAAXXZ");
//};

//public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAAPAV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@XZ");
//};

//public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> const * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QBAPBV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@XZ");
//};

//public: void * c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@QAAPAXI@Z");
//};

//public: c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::~c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>(void)
//{
//    mangled_ppc("??1?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: void c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: void c_flags_no_init<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_content_open_close_async_configuration_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_content_open_close_async_configuration_flag@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_content_open_close_async_configuration_flag@@_N@Z");
//};

//public: static bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::submit(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@SA_NPAV1@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::switch_state(enum c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::e_state)
//{
//    mangled_ppc("?switch_state@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXW4e_state@1@@Z");
//};

//public: bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_levels_dlc_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_levels_dlc_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_levels_dlc_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_levels_dlc_flags@@_N@Z");
//};

//public: long c_tracker<struct s_available_dlc_file, 18>::add(struct s_available_dlc_file const *)
//{
//    mangled_ppc("?add@?$c_tracker@Us_available_dlc_file@@$0BC@@@QAAJPBUs_available_dlc_file@@@Z");
//};

//public: void c_tracker<struct s_available_dlc_file, 18>::reset(void)
//{
//    mangled_ppc("?reset@?$c_tracker@Us_available_dlc_file@@$0BC@@@QAAXXZ");
//};

//public: long c_tracker<struct s_available_dlc_file, 18>::get_first(void) const
//{
//    mangled_ppc("?get_first@?$c_tracker@Us_available_dlc_file@@$0BC@@@QBAJXZ");
//};

//public: long c_tracker<struct s_available_dlc_file, 18>::get_next(long) const
//{
//    mangled_ppc("?get_next@?$c_tracker@Us_available_dlc_file@@$0BC@@@QBAJJ@Z");
//};

//public: struct s_available_dlc_file const * c_tracker<struct s_available_dlc_file, 18>::get(long) const
//{
//    mangled_ppc("?get@?$c_tracker@Us_available_dlc_file@@$0BC@@@QBAPBUs_available_dlc_file@@J@Z");
//};

//public: struct s_available_dlc_file * c_tracker<struct s_available_dlc_file, 18>::get(long)
//{
//    mangled_ppc("?get@?$c_tracker@Us_available_dlc_file@@$0BC@@@QAAPAUs_available_dlc_file@@J@Z");
//};

//public: long c_tracker<struct s_opened_content_item, 3>::add(struct s_opened_content_item const *)
//{
//    mangled_ppc("?add@?$c_tracker@Us_opened_content_item@@$02@@QAAJPBUs_opened_content_item@@@Z");
//};

//public: void c_tracker<struct s_opened_content_item, 3>::remove(long)
//{
//    mangled_ppc("?remove@?$c_tracker@Us_opened_content_item@@$02@@QAAXJ@Z");
//};

//public: void c_tracker<struct s_opened_content_item, 3>::reset(void)
//{
//    mangled_ppc("?reset@?$c_tracker@Us_opened_content_item@@$02@@QAAXXZ");
//};

//public: long c_tracker<struct s_opened_content_item, 3>::get_first(void) const
//{
//    mangled_ppc("?get_first@?$c_tracker@Us_opened_content_item@@$02@@QBAJXZ");
//};

//public: long c_tracker<struct s_opened_content_item, 3>::get_next(long) const
//{
//    mangled_ppc("?get_next@?$c_tracker@Us_opened_content_item@@$02@@QBAJJ@Z");
//};

//public: struct s_opened_content_item * c_tracker<struct s_opened_content_item, 3>::get(long)
//{
//    mangled_ppc("?get@?$c_tracker@Us_opened_content_item@@$02@@QAAPAUs_opened_content_item@@J@Z");
//};

//void zero_and_reconstruct<struct s_levels_dlc_globals>(struct s_levels_dlc_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_levels_dlc_globals@@@@YAXPAUs_levels_dlc_globals@@@Z");
//};

//public: struct c_controller_dlc & s_static_array<struct c_controller_dlc, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Uc_controller_dlc@@$03@@QAAAAUc_controller_dlc@@W4e_controller_index@@@Z");
//};

//public: c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>(class c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82> *)
//{
//    mangled_ppc("??0?$c_locked_data_accessor@Us_levels_dlc_threadsafe_globals@@$0FC@@@QAA@PAV?$c_locked_data_container@Us_levels_dlc_threadsafe_globals@@$0FC@@@@Z");
//};

//public: c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::~c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>(void)
//{
//    mangled_ppc("??1?$c_locked_data_accessor@Us_levels_dlc_threadsafe_globals@@$0FC@@@QAA@XZ");
//};

//public: struct s_levels_dlc_threadsafe_globals * c_locked_data_accessor<struct s_levels_dlc_threadsafe_globals, 82>::operator->(void)
//{
//    mangled_ppc("??C?$c_locked_data_accessor@Us_levels_dlc_threadsafe_globals@@$0FC@@@QAAPAUs_levels_dlc_threadsafe_globals@@XZ");
//};

//public: class c_tracker<struct s_available_dlc_file, 18> & s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@V?$c_tracker@Us_available_dlc_file@@$0BC@@@$03@@QAAAAV?$c_tracker@Us_available_dlc_file@@$0BC@@@W4e_controller_index@@@Z");
//};

//public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::construct<enum e_controller_index, struct s_content_item_platform_handle *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async>(enum e_controller_index, struct s_content_item_platform_handle *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async)
//{
//    mangled_ppc("??$construct@W4e_controller_index@@PAUs_content_item_platform_handle@@V?$c_flags@W4e_content_open_close_async_configuration_flag@@E$00Us_default_enum_string_resolver@@@@Vc_levels_dlc_examine_content_item_async@@@?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAAPAV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@W4e_controller_index@@PAUs_content_item_platform_handle@@V?$c_flags@W4e_content_open_close_async_configuration_flag@@E$00Us_default_enum_string_resolver@@@@Vc_levels_dlc_examine_content_item_async@@@Z");
//};

//public: class c_tracker<struct s_opened_content_item, 3> & s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@V?$c_tracker@Us_opened_content_item@@$02@@$03@@QAAAAV?$c_tracker@Us_opened_content_item@@$02@@W4e_controller_index@@@Z");
//};

//public: static long s_static_array<struct s_available_dlc_file, 18>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_available_dlc_file@@$0BC@@@SAJXZ");
//};

//public: static long s_static_array<struct s_opened_content_item, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_opened_content_item@@$02@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>(enum e_controller_index, struct s_content_item_platform_handle const *, class c_flags<enum e_content_open_close_async_configuration_flag, unsigned char, 1, struct s_default_enum_string_resolver>, class c_levels_dlc_examine_content_item_async const &)
//{
//    mangled_ppc("??0?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@QAA@W4e_controller_index@@PBUs_content_item_platform_handle@@V?$c_flags@W4e_content_open_close_async_configuration_flag@@E$00Us_default_enum_string_resolver@@@@ABVc_levels_dlc_examine_content_item_async@@@Z");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_opening(void)
//{
//    mangled_ppc("?exit_opening@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_inner(void)
//{
//    mangled_ppc("?exit_inner@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::exit_closing(void)
//{
//    mangled_ppc("?exit_closing@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_opening(void)
//{
//    mangled_ppc("?enter_opening@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_inner(void)
//{
//    mangled_ppc("?enter_inner@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//private: void c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::enter_closing(void)
//{
//    mangled_ppc("?enter_closing@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAAXXZ");
//};

//class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@PAV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_levels_dlc_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_levels_dlc_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_levels_dlc_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_levels_dlc_flags@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 18>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0BC@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 18>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0BC@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 18>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0BC@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 18>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BC@@@QAAXJ_N@Z");
//};

//public: struct s_available_dlc_file & s_static_array<struct s_available_dlc_file, 18>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_available_dlc_file@@$0BC@@@QAAAAUs_available_dlc_file@@J@Z");
//};

//public: struct s_available_dlc_file const & s_static_array<struct s_available_dlc_file, 18>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_available_dlc_file@@$0BC@@@QBAABUs_available_dlc_file@@J@Z");
//};

//public: struct s_opened_content_item & s_static_array<struct s_opened_content_item, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_opened_content_item@@$02@@QAAAAUs_opened_content_item@@J@Z");
//};

//void reconstruct<struct s_levels_dlc_globals>(struct s_levels_dlc_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_levels_dlc_globals@@@@YAXPAUs_levels_dlc_globals@@@Z");
//};

//public: s_levels_dlc_globals::s_levels_dlc_globals(void)
//{
//    mangled_ppc("??0s_levels_dlc_globals@@QAA@XZ");
//};

//public: s_dlc_gather_task_data::s_dlc_gather_task_data(void)
//{
//    mangled_ppc("??0s_dlc_gather_task_data@@QAA@XZ");
//};

//public: c_levels_dlc_controller_monitor::c_levels_dlc_controller_monitor(void)
//{
//    mangled_ppc("??0c_levels_dlc_controller_monitor@@QAA@XZ");
//};

//public: c_levels_dlc_enumerate_items_task::c_levels_dlc_enumerate_items_task(void)
//{
//    mangled_ppc("??0c_levels_dlc_enumerate_items_task@@QAA@XZ");
//};

//merged_8359F000
//{
//    mangled_ppc("merged_8359F000");
//};

//public: virtual c_levels_dlc_enumerate_items_task::~c_levels_dlc_enumerate_items_task(void)
//{
//    mangled_ppc("??1c_levels_dlc_enumerate_items_task@@UAA@XZ");
//};

//public: c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAA@XZ");
//};

//public: c_flags<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<struct c_controller_dlc, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Uc_controller_dlc@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@V?$c_tracker@Us_available_dlc_file@@$0BC@@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> * c_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAAPAV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@XZ");
//};

//public: static bool s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@V?$c_tracker@Us_opened_content_item@@$02@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>::s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>(class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async> *)
//{
//    mangled_ppc("??0?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@QAA@PAV?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@@Z");
//};

//public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 18>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0BC@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 18>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0BC@@@QBA_NXZ");
//};

//public: static bool s_static_array<struct s_available_dlc_file, 18>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_available_dlc_file@@$0BC@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_opened_content_item, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_opened_content_item@@$02@@SA_NJ@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_levels_dlc_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_levels_dlc_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_levels_dlc_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_levels_dlc_flags@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0BC@@@KAKJ@Z");
//};

//public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 18>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0BC@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 18>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0BC@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0BC@@@KAKXZ");
//};

//public: enum e_async_pending_bool s_async_indirect_function1<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, class c_synchronized_int32*>::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function1@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 18>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0BC@@@KAKJ@Z");
//};

//public: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_opening(class c_synchronized_int32*)
//{
//    mangled_ppc("?update_opening@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_inner(class c_synchronized_int32*)
//{
//    mangled_ppc("?update_inner@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>::update_closing(void)
//{
//    mangled_ppc("?update_closing@?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@AAA?AW4e_async_pending_bool@@XZ");
//};

//class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>(class c_levels_dlc_examine_content_item_async *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@PAVc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *)
//{
//    mangled_ppc("??$async_function_submit@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@_N@@@Z");
//};

//public: s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>(class c_levels_dlc_examine_content_item_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@QAA@PAVc_levels_dlc_examine_content_item_async@@@Z");
//};

//public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<bool> *)
//{
//    mangled_ppc("??$submit@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@_N@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@_N@@ABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@_NV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function1<class c_levels_dlc_examine_content_item_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function1@Vc_levels_dlc_examine_content_item_async@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//public: enum e_async_pending_bool c_levels_dlc_examine_content_item_async::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_levels_dlc_examine_content_item_async@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//public: c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82>::c_locked_data_container<struct s_levels_dlc_threadsafe_globals, 82>(void)
//{
//    mangled_ppc("??0?$c_locked_data_container@Us_levels_dlc_threadsafe_globals@@$0FC@@@QAA@XZ");
//};

//public: s_levels_dlc_threadsafe_globals::s_levels_dlc_threadsafe_globals(void)
//{
//    mangled_ppc("??0s_levels_dlc_threadsafe_globals@@QAA@XZ");
//};

//public: s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>::s_static_array<class c_tracker<struct s_available_dlc_file, 18>, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_tracker@Us_available_dlc_file@@$0BC@@@$03@@QAA@XZ");
//};

//public: s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>::s_static_array<class c_tracker<struct s_opened_content_item, 3>, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_tracker@Us_opened_content_item@@$02@@$03@@QAA@XZ");
//};

//public: c_tracker<struct s_available_dlc_file, 18>::c_tracker<struct s_available_dlc_file, 18>(void)
//{
//    mangled_ppc("??0?$c_tracker@Us_available_dlc_file@@$0BC@@@QAA@XZ");
//};

//public: c_tracker<struct s_opened_content_item, 3>::c_tracker<struct s_opened_content_item, 3>(void)
//{
//    mangled_ppc("??0?$c_tracker@Us_opened_content_item@@$02@@QAA@XZ");
//};

//public: s_static_array<struct s_available_dlc_file, 18>::s_static_array<struct s_available_dlc_file, 18>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_available_dlc_file@@$0BC@@@QAA@XZ");
//};

//public: s_static_array<struct s_opened_content_item, 3>::s_static_array<struct s_opened_content_item, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_opened_content_item@@$02@@QAA@XZ");
//};

//public: c_big_flags<18>::c_big_flags<18>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0BC@@@QAA@XZ");
//};

//public: c_big_flags<3>::c_big_flags<3>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$02@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 18>::c_big_flags_typed<long, 18>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0BC@@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 3>::c_big_flags_typed<long, 3>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$02@@QAA@XZ");
//};

//public: s_levels_dlc_globals::~s_levels_dlc_globals(void)
//{
//    mangled_ppc("??1s_levels_dlc_globals@@QAA@XZ");
//};

//public: s_dlc_gather_task_data::~s_dlc_gather_task_data(void)
//{
//    mangled_ppc("??1s_dlc_gather_task_data@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>::~c_typed_opaque_data<class c_content_open_close_item_async<class c_levels_dlc_examine_content_item_async>, 4508, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@V?$c_content_open_close_item_async@Vc_levels_dlc_examine_content_item_async@@@@$0BBJM@$03@@QAA@XZ");
//};

//void g_levels_dlc_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_levels_dlc_globals@@YAXXZ");
//};

