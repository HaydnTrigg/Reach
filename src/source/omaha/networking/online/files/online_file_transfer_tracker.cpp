/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_online_controllers::c_online_controllers(void);
// public: bool c_online_controllers::xuid_signed_into_live(unsigned __int64) const;
// public: bool c_online_controllers::update(void);
// public: c_online_file_transfer_tracker::c_online_file_transfer_tracker(void);
// private: c_online_file_transfer_tracker::c_insert_transfer_async::c_insert_transfer_async(void);
// public: c_online_file_transfer_tracker::c_select_transfer_async::c_select_transfer_async(void);
// public: c_online_file_transfer_tracker::s_commit::s_commit(void);
// public: c_online_file_transfer_tracker::~c_online_file_transfer_tracker(void);
// public: bool c_async_task_base::is_busy(void) const;
// public: bool c_async_task_base::is_valid(void) const;
// public: void c_async_task_base::yield_until_done(void);
// public: c_async_task<enum e_async_pending_bool>::~c_async_task<enum e_async_pending_bool>(void);
// public: c_async_task_base::~c_async_task_base(void);
// public: bool c_async_task_base::is_complete(void) const;
// public: void c_online_file_transfer_tracker::stop(void);
// public: void c_online_file_transfer_tracker::update(void);
// public: void c_async_task_base::reset(void);
// public: long c_online_controllers::get_signed_into_live_count(void) const;
// public: enum c_online_file_transfer_tracker::c_insert_transfer_async::e_error c_online_file_transfer_tracker::c_insert_transfer_async::get_error(void) const;
// private: void c_online_file_transfer_tracker::c_insert_transfer_async::reset(void);
// private: void c_online_file_transfer_tracker::c_insert_transfer_async::switch_state(enum c_online_file_transfer_tracker::c_insert_transfer_async::e_state);
// public: void c_online_file_transfer_tracker::c_select_transfer_async::reset(void);
// private: void c_online_file_transfer_tracker::c_select_transfer_async::switch_state(enum c_online_file_transfer_tracker::c_select_transfer_async::e_state);
// private: bool c_online_file_transfer_tracker::enqueue_commit(enum c_online_file_transfer_tracker::s_commit::e_type, class c_online_file_transfer const &);
// public: c_online_file_transfer_tracker::s_commit::s_commit(enum c_online_file_transfer_tracker::s_commit::e_type, class c_online_file_transfer const &);
// public: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::operator()(class c_online_file_transfer const *);
// private: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::start(class c_online_file_transfer const *);
// public: bool c_online_file_transfer::is_owner_system(void) const;
// public: bool c_online_file_transfer::is_owner_user(void) const;
// private: void c_online_file_transfer_tracker::c_insert_transfer_async::next(class c_online_file_transfer const *);
// private: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::finish(class c_online_file_transfer const *);
// public: enum e_async_pending_bool c_online_file_transfer_tracker::c_select_transfer_async::operator()(class c_online_controllers const &, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates const &, class c_synchronized_int32*);
// private: void c_online_file_transfer_tracker::c_select_transfer_async::start(void);
// private: void c_online_file_transfer_tracker::c_select_transfer_async::next(class c_online_controllers const &, class c_online_file_transfer *, unsigned int *, long *);
// public: long c_online_file_transfer::get_priority(void) const;
// public: unsigned __int64 c_online_file_transfer::get_user_xuid(void) const;
// private: enum e_async_pending_bool c_online_file_transfer_tracker::c_select_transfer_async::finish(void);
// void online_file_transfer_tracker_initialize(void);
// void online_file_transfer_tracker_dispose(void);
// void online_file_transfer_tracker_update(void);
// void online_file_transfer_tracker_start(void);
// public: void c_online_file_transfer_tracker::start(void);
// void online_file_transfer_tracker_stop(void);
// class c_online_file_transfer_tracker * online_file_transfer_tracker_get(void);
// unsigned int online_file_transfer_tracker_get_token(void);
// public: unsigned int c_online_file_transfer_tracker::get_token(void) const;
// bool insert_transfer_record_file(class c_online_file_transfer const &);
// bool write_transfer_record_file(struct s_file_reference *, class c_online_file_transfer const &);
// bool update_transfer_record_file(class c_online_file_transfer const *);
// bool delete_transfer(class c_online_file_transfer const *);
// public: void c_online_file_transfer::set_status_failed(void);
// public: bool c_online_file_transfer::get_delete_upload_source_file(void) const;
// bool delete_file_and_remove_empty_directories(struct s_file_reference const &);
// bool delete_transfer_temp_file(class c_online_file_transfer const &);
// public: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::empty(void) const;
// public: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::full(void) const;
// public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::begin(void);
// public: struct c_online_file_transfer_tracker::s_commit & c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::front(void);
// public: c_async_task<enum e_async_pending_bool>::c_async_task<enum e_async_pending_bool>(void);
// public: c_async_task_base::c_async_task_base(void);
// public: enum e_async_pending_bool const & c_async_task<enum e_async_pending_bool>::get_result(void) const;
// public: class c_online_file_transfer_tracker * c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::construct(void);
// public: void c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::destruct(void);
// public: class c_online_file_transfer_tracker * c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::get(void);
// public: bool c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::alive(void) const;
// public: void * c_online_file_transfer_tracker::`scalar deleting destructor'(unsigned int);
// public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::data(void);
// public: unsigned int c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::size(void) const;
// public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_controller_index) const;
// public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_controller_index, bool);
// public: long c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::count_set(void) const;
// public: c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>(void);
// public: c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::~c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>(void);
// public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::push_back(struct c_online_file_transfer_tracker::s_commit const &);
// public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::erase(struct c_online_file_transfer_tracker::s_commit const *);
// public: class c_online_file_transfer_tracker * c_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::get(void);
// class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> async_function_make<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>(class c_online_file_transfer_tracker::c_insert_transfer_async *, class c_online_file_transfer *);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> async_function_make<bool, class c_online_file_transfer *, class c_online_file_transfer const *>(bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(class c_online_file_transfer_tracker::c_select_transfer_async *, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::get(unsigned int);
// private: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::position_valid(struct c_online_file_transfer_tracker::s_commit const *) const;
// public: s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>::s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>(class c_online_file_transfer_tracker::c_insert_transfer_async *);
// public: s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(class c_online_file_transfer_tracker::c_select_transfer_async *);
// public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::begin(void) const;
// public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::end(void) const;
// public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::data(void) const;
// public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_controller_index);
// private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_controller_index);
// public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::clear(void);
// private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::collapse(struct c_online_file_transfer_tracker::s_commit const *, struct c_online_file_transfer_tracker::s_commit const *);
// public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>(struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>::c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>(bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::end(void);
// private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::get_mutable_iterator(struct c_online_file_transfer_tracker::s_commit const *);
// private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::pop_back(void);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >::callback(void *);
// public: static enum e_async_completion s_async_result_traits<enum e_async_pending_bool>::get_completion(enum e_async_pending_bool);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: void c_async_task<enum e_async_pending_bool>::set_result(enum e_async_pending_bool const &);
// public: static enum e_async_completion s_async_result_traits<bool>::get_completion(bool const &);
// private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_index);
// public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: bool c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>::operator()(class c_online_file_transfer *);
// public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::operator()(class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*);
// public: c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>(void);
// public: c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::~c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>(void);
// void g_tracker::`dynamic atexit destructor'(void);

//public: c_online_controllers::c_online_controllers(void)
//{
//    mangled_ppc("??0c_online_controllers@@QAA@XZ");
//};

//public: bool c_online_controllers::xuid_signed_into_live(unsigned __int64) const
//{
//    mangled_ppc("?xuid_signed_into_live@c_online_controllers@@QBA_N_K@Z");
//};

//public: bool c_online_controllers::update(void)
//{
//    mangled_ppc("?update@c_online_controllers@@QAA_NXZ");
//};

//public: c_online_file_transfer_tracker::c_online_file_transfer_tracker(void)
//{
//    mangled_ppc("??0c_online_file_transfer_tracker@@QAA@XZ");
//};

//private: c_online_file_transfer_tracker::c_insert_transfer_async::c_insert_transfer_async(void)
//{
//    mangled_ppc("??0c_insert_transfer_async@c_online_file_transfer_tracker@@AAA@XZ");
//};

//public: c_online_file_transfer_tracker::c_select_transfer_async::c_select_transfer_async(void)
//{
//    mangled_ppc("??0c_select_transfer_async@c_online_file_transfer_tracker@@QAA@XZ");
//};

//public: c_online_file_transfer_tracker::s_commit::s_commit(void)
//{
//    mangled_ppc("??0s_commit@c_online_file_transfer_tracker@@QAA@XZ");
//};

//public: c_online_file_transfer_tracker::~c_online_file_transfer_tracker(void)
//{
//    mangled_ppc("??1c_online_file_transfer_tracker@@QAA@XZ");
//};

//public: bool c_async_task_base::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_async_task_base@@QBA_NXZ");
//};

//public: bool c_async_task_base::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_async_task_base@@QBA_NXZ");
//};

//public: void c_async_task_base::yield_until_done(void)
//{
//    mangled_ppc("?yield_until_done@c_async_task_base@@QAAXXZ");
//};

//public: c_async_task<enum e_async_pending_bool>::~c_async_task<enum e_async_pending_bool>(void)
//{
//    mangled_ppc("??1?$c_async_task@W4e_async_pending_bool@@@@QAA@XZ");
//};

//public: c_async_task_base::~c_async_task_base(void)
//{
//    mangled_ppc("??1c_async_task_base@@QAA@XZ");
//};

//public: bool c_async_task_base::is_complete(void) const
//{
//    mangled_ppc("?is_complete@c_async_task_base@@QBA_NXZ");
//};

//public: void c_online_file_transfer_tracker::stop(void)
//{
//    mangled_ppc("?stop@c_online_file_transfer_tracker@@QAAXXZ");
//};

//public: void c_online_file_transfer_tracker::update(void)
//{
//    mangled_ppc("?update@c_online_file_transfer_tracker@@QAAXXZ");
//};

//public: void c_async_task_base::reset(void)
//{
//    mangled_ppc("?reset@c_async_task_base@@QAAXXZ");
//};

//public: long c_online_controllers::get_signed_into_live_count(void) const
//{
//    mangled_ppc("?get_signed_into_live_count@c_online_controllers@@QBAJXZ");
//};

//public: enum c_online_file_transfer_tracker::c_insert_transfer_async::e_error c_online_file_transfer_tracker::c_insert_transfer_async::get_error(void) const
//{
//    mangled_ppc("?get_error@c_insert_transfer_async@c_online_file_transfer_tracker@@QBA?AW4e_error@12@XZ");
//};

//private: void c_online_file_transfer_tracker::c_insert_transfer_async::reset(void)
//{
//    mangled_ppc("?reset@c_insert_transfer_async@c_online_file_transfer_tracker@@AAAXXZ");
//};

//private: void c_online_file_transfer_tracker::c_insert_transfer_async::switch_state(enum c_online_file_transfer_tracker::c_insert_transfer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_insert_transfer_async@c_online_file_transfer_tracker@@AAAXW4e_state@12@@Z");
//};

//public: void c_online_file_transfer_tracker::c_select_transfer_async::reset(void)
//{
//    mangled_ppc("?reset@c_select_transfer_async@c_online_file_transfer_tracker@@QAAXXZ");
//};

//private: void c_online_file_transfer_tracker::c_select_transfer_async::switch_state(enum c_online_file_transfer_tracker::c_select_transfer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_select_transfer_async@c_online_file_transfer_tracker@@AAAXW4e_state@12@@Z");
//};

//private: bool c_online_file_transfer_tracker::enqueue_commit(enum c_online_file_transfer_tracker::s_commit::e_type, class c_online_file_transfer const &)
//{
//    mangled_ppc("?enqueue_commit@c_online_file_transfer_tracker@@AAA_NW4e_type@s_commit@1@ABVc_online_file_transfer@@@Z");
//};

//public: c_online_file_transfer_tracker::s_commit::s_commit(enum c_online_file_transfer_tracker::s_commit::e_type, class c_online_file_transfer const &)
//{
//    mangled_ppc("??0s_commit@c_online_file_transfer_tracker@@QAA@W4e_type@01@ABVc_online_file_transfer@@@Z");
//};

//public: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::operator()(class c_online_file_transfer const *)
//{
//    mangled_ppc("??Rc_insert_transfer_async@c_online_file_transfer_tracker@@QAA?AW4e_async_pending_bool@@PBVc_online_file_transfer@@@Z");
//};

//private: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::start(class c_online_file_transfer const *)
//{
//    mangled_ppc("?start@c_insert_transfer_async@c_online_file_transfer_tracker@@AAA?AW4e_async_pending_bool@@PBVc_online_file_transfer@@@Z");
//};

//public: bool c_online_file_transfer::is_owner_system(void) const
//{
//    mangled_ppc("?is_owner_system@c_online_file_transfer@@QBA_NXZ");
//};

//public: bool c_online_file_transfer::is_owner_user(void) const
//{
//    mangled_ppc("?is_owner_user@c_online_file_transfer@@QBA_NXZ");
//};

//private: void c_online_file_transfer_tracker::c_insert_transfer_async::next(class c_online_file_transfer const *)
//{
//    mangled_ppc("?next@c_insert_transfer_async@c_online_file_transfer_tracker@@AAAXPBVc_online_file_transfer@@@Z");
//};

//private: enum e_async_pending_bool c_online_file_transfer_tracker::c_insert_transfer_async::finish(class c_online_file_transfer const *)
//{
//    mangled_ppc("?finish@c_insert_transfer_async@c_online_file_transfer_tracker@@AAA?AW4e_async_pending_bool@@PBVc_online_file_transfer@@@Z");
//};

//public: enum e_async_pending_bool c_online_file_transfer_tracker::c_select_transfer_async::operator()(class c_online_controllers const &, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates const &, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_select_transfer_async@c_online_file_transfer_tracker@@QAA?AW4e_async_pending_bool@@ABVc_online_controllers@@PAVc_online_file_transfer@@ABUs_aggregates@01@PAVc_synchronized_int32@@@Z");
//};

//private: void c_online_file_transfer_tracker::c_select_transfer_async::start(void)
//{
//    mangled_ppc("?start@c_select_transfer_async@c_online_file_transfer_tracker@@AAAXXZ");
//};

//private: void c_online_file_transfer_tracker::c_select_transfer_async::next(class c_online_controllers const &, class c_online_file_transfer *, unsigned int *, long *)
//{
//    mangled_ppc("?next@c_select_transfer_async@c_online_file_transfer_tracker@@AAAXABVc_online_controllers@@PAVc_online_file_transfer@@PAIPAJ@Z");
//};

//public: long c_online_file_transfer::get_priority(void) const
//{
//    mangled_ppc("?get_priority@c_online_file_transfer@@QBAJXZ");
//};

//public: unsigned __int64 c_online_file_transfer::get_user_xuid(void) const
//{
//    mangled_ppc("?get_user_xuid@c_online_file_transfer@@QBA_KXZ");
//};

//private: enum e_async_pending_bool c_online_file_transfer_tracker::c_select_transfer_async::finish(void)
//{
//    mangled_ppc("?finish@c_select_transfer_async@c_online_file_transfer_tracker@@AAA?AW4e_async_pending_bool@@XZ");
//};

//void online_file_transfer_tracker_initialize(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_initialize@@YAXXZ");
//};

//void online_file_transfer_tracker_dispose(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_dispose@@YAXXZ");
//};

//void online_file_transfer_tracker_update(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_update@@YAXXZ");
//};

//void online_file_transfer_tracker_start(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_start@@YAXXZ");
//};

//public: void c_online_file_transfer_tracker::start(void)
//{
//    mangled_ppc("?start@c_online_file_transfer_tracker@@QAAXXZ");
//};

//void online_file_transfer_tracker_stop(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_stop@@YAXXZ");
//};

//class c_online_file_transfer_tracker * online_file_transfer_tracker_get(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_get@@YAPAVc_online_file_transfer_tracker@@XZ");
//};

//unsigned int online_file_transfer_tracker_get_token(void)
//{
//    mangled_ppc("?online_file_transfer_tracker_get_token@@YAIXZ");
//};

//public: unsigned int c_online_file_transfer_tracker::get_token(void) const
//{
//    mangled_ppc("?get_token@c_online_file_transfer_tracker@@QBAIXZ");
//};

//bool insert_transfer_record_file(class c_online_file_transfer const &)
//{
//    mangled_ppc("?insert_transfer_record_file@@YA_NABVc_online_file_transfer@@@Z");
//};

//bool write_transfer_record_file(struct s_file_reference *, class c_online_file_transfer const &)
//{
//    mangled_ppc("?write_transfer_record_file@@YA_NPAUs_file_reference@@ABVc_online_file_transfer@@@Z");
//};

//bool update_transfer_record_file(class c_online_file_transfer const *)
//{
//    mangled_ppc("?update_transfer_record_file@@YA_NPBVc_online_file_transfer@@@Z");
//};

//bool delete_transfer(class c_online_file_transfer const *)
//{
//    mangled_ppc("?delete_transfer@@YA_NPBVc_online_file_transfer@@@Z");
//};

//public: void c_online_file_transfer::set_status_failed(void)
//{
//    mangled_ppc("?set_status_failed@c_online_file_transfer@@QAAXXZ");
//};

//public: bool c_online_file_transfer::get_delete_upload_source_file(void) const
//{
//    mangled_ppc("?get_delete_upload_source_file@c_online_file_transfer@@QBA_NXZ");
//};

//bool delete_file_and_remove_empty_directories(struct s_file_reference const &)
//{
//    mangled_ppc("?delete_file_and_remove_empty_directories@@YA_NABUs_file_reference@@@Z");
//};

//bool delete_transfer_temp_file(class c_online_file_transfer const &)
//{
//    mangled_ppc("?delete_transfer_temp_file@@YA_NABVc_online_file_transfer@@@Z");
//};

//public: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBA_NXZ");
//};

//public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAPAUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: struct c_online_file_transfer_tracker::s_commit & c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::front(void)
//{
//    mangled_ppc("?front@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAAAUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: c_async_task<enum e_async_pending_bool>::c_async_task<enum e_async_pending_bool>(void)
//{
//    mangled_ppc("??0?$c_async_task@W4e_async_pending_bool@@@@QAA@XZ");
//};

//public: c_async_task_base::c_async_task_base(void)
//{
//    mangled_ppc("??0c_async_task_base@@QAA@XZ");
//};

//public: enum e_async_pending_bool const & c_async_task<enum e_async_pending_bool>::get_result(void) const
//{
//    mangled_ppc("?get_result@?$c_async_task@W4e_async_pending_bool@@@@QBAABW4e_async_pending_bool@@XZ");
//};

//public: class c_online_file_transfer_tracker * c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAAPAVc_online_file_transfer_tracker@@XZ");
//};

//public: void c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAAXXZ");
//};

//public: class c_online_file_transfer_tracker * c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAAPAVc_online_file_transfer_tracker@@XZ");
//};

//public: bool c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QBA_NXZ");
//};

//public: void * c_online_file_transfer_tracker::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_online_file_transfer_tracker@@QAAPAXI@Z");
//};

//public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAPAUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: unsigned int c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBAIXZ");
//};

//public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_controller_index) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_controller_index@@@Z");
//};

//public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_controller_index, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_controller_index@@_N@Z");
//};

//public: long c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::~c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAA@XZ");
//};

//public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::push_back(struct c_online_file_transfer_tracker::s_commit const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAXABUs_commit@c_online_file_transfer_tracker@@@Z");
//};

//public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::erase(struct c_online_file_transfer_tracker::s_commit const *)
//{
//    mangled_ppc("?erase@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAPAUs_commit@c_online_file_transfer_tracker@@PBU23@@Z");
//};

//public: class c_online_file_transfer_tracker * c_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAAPAVc_online_file_transfer_tracker@@XZ");
//};

//class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> async_function_make<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>(class c_online_file_transfer_tracker::c_insert_transfer_async *, class c_online_file_transfer *)
//{
//    mangled_ppc("??$async_function_make@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@YA?AV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@PAVc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@YA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> async_function_make<bool, class c_online_file_transfer *, class c_online_file_transfer const *>(bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *)
//{
//    mangled_ppc("??$async_function_make@_NPAVc_online_file_transfer@@PBV1@@@YA?AV?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@P6A_NPBVc_online_file_transfer@@@ZPAV1@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@YA_NABV?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(class c_online_file_transfer_tracker::c_select_transfer_async *, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@YA?AV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@PAVc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@AAAPAUs_commit@c_online_file_transfer_tracker@@I@Z");
//};

//private: bool c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::position_valid(struct c_online_file_transfer_tracker::s_commit const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@ABA_NPBUs_commit@c_online_file_transfer_tracker@@@Z");
//};

//public: s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>::s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>(class c_online_file_transfer_tracker::c_insert_transfer_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@QAA@PAVc_insert_transfer_async@c_online_file_transfer_tracker@@@Z");
//};

//public: s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(class c_online_file_transfer_tracker::c_select_transfer_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@QAA@PAVc_select_transfer_async@c_online_file_transfer_tracker@@@Z");
//};

//public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBAPBUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBAPBUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: struct c_online_file_transfer_tracker::s_commit const * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QBAPBUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//public: void c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_controller_index)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_controller_index@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_controller_index)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@CAEW4e_controller_index@@@Z");
//};

//public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAXXZ");
//};

//private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::collapse(struct c_online_file_transfer_tracker::s_commit const *, struct c_online_file_transfer_tracker::s_commit const *)
//{
//    mangled_ppc("?collapse@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@AAAPAUs_commit@c_online_file_transfer_tracker@@PBU23@0@Z");
//};

//public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>(struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *)
//{
//    mangled_ppc("??0?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@QAA@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@s_async_task_functions@@SA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>::c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>(bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *)
//{
//    mangled_ppc("??0?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@QAA@P6A_NPBVc_online_file_transfer@@@ZPAV1@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@s_async_task_functions@@SA_NABV?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAPAUs_commit@c_online_file_transfer_tracker@@XZ");
//};

//private: struct c_online_file_transfer_tracker::s_commit * c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::get_mutable_iterator(struct c_online_file_transfer_tracker::s_commit const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@AAAPAUs_commit@c_online_file_transfer_tracker@@PBU23@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_cui_static_vector<struct c_online_file_transfer_tracker::s_commit, 24>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_commit@c_online_file_transfer_tracker@@$0BI@@@QAAXXZ");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: static enum e_async_completion s_async_result_traits<enum e_async_pending_bool>::get_completion(enum e_async_pending_bool)
//{
//    mangled_ppc("?get_completion@?$s_async_result_traits@W4e_async_pending_bool@@@@SA?AW4e_async_completion@@W4e_async_pending_bool@@@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: void c_async_task<enum e_async_pending_bool>::set_result(enum e_async_pending_bool const &)
//{
//    mangled_ppc("?set_result@?$c_async_task@W4e_async_pending_bool@@@@QAAXABW4e_async_pending_bool@@@Z");
//};

//public: static enum e_async_completion s_async_result_traits<bool>::get_completion(bool const &)
//{
//    mangled_ppc("?get_completion@?$s_async_result_traits@_N@@SA?AW4e_async_completion@@AB_N@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_controller_index, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_index)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_controller_index@@E$03Us_default_enum_string_resolver@@@@CAEW4e_controller_index@@@Z");
//};

//public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>, class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@PAVc_online_file_transfer@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: bool c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@QAA_NXZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<bool, bool (*)(class c_online_file_transfer const *), class c_online_file_transfer *> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@_NP6A_NPBVc_online_file_transfer@@@ZPAV1@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function1<class c_online_file_transfer_tracker::c_insert_transfer_async, class c_online_file_transfer *>::operator()(class c_online_file_transfer *)
//{
//    mangled_ppc("??R?$s_async_indirect_function1@Vc_insert_transfer_async@c_online_file_transfer_tracker@@PAVc_online_file_transfer@@@@QAA?AW4e_async_pending_bool@@PAVc_online_file_transfer@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_tracker::c_select_transfer_async, class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*>::operator()(class c_online_controllers, class c_online_file_transfer *, struct c_online_file_transfer_tracker::c_select_transfer_async::s_aggregates, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function4@Vc_select_transfer_async@c_online_file_transfer_tracker@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@12@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@Vc_online_controllers@@PAVc_online_file_transfer@@Us_aggregates@c_select_transfer_async@c_online_file_transfer_tracker@@PAVc_synchronized_int32@@@Z");
//};

//public: c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>::~c_typed_opaque_data<class c_online_file_transfer_tracker, 29352, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_online_file_transfer_tracker@@$0HCKI@$07@@QAA@XZ");
//};

//void g_tracker::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_tracker@@YAXXZ");
//};

