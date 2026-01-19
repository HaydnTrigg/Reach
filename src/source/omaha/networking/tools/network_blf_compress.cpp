/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool c_network_blf_compress_to_utility_drive_async::submit(class c_network_blf_compress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_network_blf_compress_to_utility_drive_async::c_network_blf_compress_to_utility_drive_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int);
// public: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// private: void c_network_blf_compress_to_utility_drive_async::switch_state(enum c_network_blf_compress_to_utility_drive_async::e_state);
// bool is_canceled(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::open_source(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::open_target(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::read_chunk_header(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::start_copy_chunk(void);
// private: void c_network_blf_compress_to_utility_drive_async::copy_chunk(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::start_compress_chunk(void);
// private: void c_network_blf_compress_to_utility_drive_async::compress_chunk(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::finish_compress_chunk(void);
// private: void c_network_blf_compress_to_utility_drive_async::write_end_of_file_chunk(void);
// private: void c_network_blf_compress_to_utility_drive_async::close_target(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::delete_target(struct s_file_reference *);
// private: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::close_source(struct s_file_reference *);
// private: void c_network_blf_compress_to_utility_drive_async::update_progress(void);
// public: static bool c_network_blf_decompress_to_utility_drive_async::submit(class c_network_blf_decompress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_network_blf_decompress_to_utility_drive_async::c_network_blf_decompress_to_utility_drive_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int);
// public: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// private: void c_network_blf_decompress_to_utility_drive_async::switch_state(enum c_network_blf_decompress_to_utility_drive_async::e_state);
// private: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::open_source(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::open_target(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::read_chunk_header(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::start_copy_chunk(void);
// private: void c_network_blf_decompress_to_utility_drive_async::copy_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::start_decompress_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::decompress_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::write_end_of_file_chunk(void);
// private: void c_network_blf_decompress_to_utility_drive_async::close_target(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::delete_target(struct s_file_reference *);
// private: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::close_source(struct s_file_reference *);
// private: void c_network_blf_decompress_to_utility_drive_async::update_progress(void);
// public: static bool c_network_blf_decompress_async::submit(class c_network_blf_decompress_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_network_blf_decompress_async::c_network_blf_decompress_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int);
// public: c_network_blf_decompress_async::c_network_blf_decompress_async(class c_network_blf_decompress_async const &);
// public: enum e_async_pending_bool c_network_blf_decompress_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// private: void c_network_blf_decompress_async::switch_state(enum c_network_blf_decompress_async::e_state);
// private: enum e_async_pending_bool c_network_blf_decompress_async::open_source(struct s_file_reference *);
// private: void c_network_blf_decompress_async::open_target(struct s_file_reference *);
// private: void c_network_blf_decompress_async::read_chunk_header(struct s_file_reference *, struct s_file_reference *);
// private: void c_network_blf_decompress_async::start_copy_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_async::copy_chunk(struct s_file_reference *, struct s_file_reference *);
// private: void c_network_blf_decompress_async::start_decompress_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_async::decompress_chunk(struct s_file_reference *, struct s_file_reference *);
// private: void c_network_blf_decompress_async::write_end_of_file_chunk(struct s_file_reference *);
// private: void c_network_blf_decompress_async::close_target(struct s_file_reference *);
// private: void c_network_blf_decompress_async::delete_target(struct s_file_reference *);
// private: enum e_async_pending_bool c_network_blf_decompress_async::close_source(struct s_file_reference *);
// private: void c_network_blf_decompress_async::update_progress(void);
// bool network_blf_compress_to_utility_drive(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *);
// bool network_blf_decompress_to_utility_drive(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *);
// bool network_blf_decompress(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *);
// bool `anonymous namespace'::should_compress_chunk(struct s_blf_header const *);
// bool `anonymous namespace'::start_compression_stream(struct s_network_blf_zlib_parameters *, struct s_network_blf_zlib_state *);
// bool `anonymous namespace'::write_compression_stream(struct s_network_blf_zlib_state *, void *, long, long *, void *, long, long *, bool, bool *);
// void `anonymous namespace'::finish_compression_stream(struct s_network_blf_zlib_state *);
// bool `anonymous namespace'::start_decompression_stream(struct s_network_blf_zlib_parameters *, struct s_network_blf_zlib_state *);
// bool `anonymous namespace'::write_decompression_stream(struct s_network_blf_zlib_state *, void *, long, long *, void *, long, long *, bool, bool *);
// void `anonymous namespace'::finish_decompression_stream(struct s_network_blf_zlib_state *);
// bool `anonymous namespace'::copy_chunk(struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *);
// bool `anonymous namespace'::compress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *);
// bool `anonymous namespace'::decompress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *);
// bool `anonymous namespace'::write_end_of_file_chunk(class c_aligned_stored_buffered_file_writer<4096> *);
// bool `anonymous namespace'::copy_chunk(struct s_blf_header const *, struct s_file_reference *, struct s_file_reference *);
// bool `anonymous namespace'::decompress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, struct s_file_reference *);
// bool `anonymous namespace'::write_end_of_file_chunk(struct s_file_reference *);
// public: bool c_aligned_stored_buffered_file_writer<4096>::set_position(unsigned long);
// class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_compress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_compress_to_utility_drive_async *);
// public: s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_to_utility_drive_async *);
// public: s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_async *);
// public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);

//public: static bool c_network_blf_compress_to_utility_drive_async::submit(class c_network_blf_compress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_network_blf_compress_to_utility_drive_async@@SA_NPAV1@PAUs_file_reference@@1PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_network_blf_compress_to_utility_drive_async::c_network_blf_compress_to_utility_drive_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("??0c_network_blf_compress_to_utility_drive_async@@QAA@PAUs_network_blf_zlib_parameters@@PAXI1I@Z");
//};

//public: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_network_blf_compress_to_utility_drive_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::switch_state(enum c_network_blf_compress_to_utility_drive_async::e_state)
//{
//    mangled_ppc("?switch_state@c_network_blf_compress_to_utility_drive_async@@AAAXW4e_state@1@@Z");
//};

//bool is_canceled(class c_synchronized_int32*)
//{
//    mangled_ppc("?is_canceled@@YA_NPAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::open_source(struct s_file_reference *)
//{
//    mangled_ppc("?open_source@c_network_blf_compress_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::open_target(struct s_file_reference *)
//{
//    mangled_ppc("?open_target@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::read_chunk_header(struct s_file_reference *)
//{
//    mangled_ppc("?read_chunk_header@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::start_copy_chunk(void)
//{
//    mangled_ppc("?start_copy_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_compress_to_utility_drive_async::copy_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?copy_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::start_compress_chunk(void)
//{
//    mangled_ppc("?start_compress_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_compress_to_utility_drive_async::compress_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?compress_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::finish_compress_chunk(void)
//{
//    mangled_ppc("?finish_compress_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_compress_to_utility_drive_async::write_end_of_file_chunk(void)
//{
//    mangled_ppc("?write_end_of_file_chunk@c_network_blf_compress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_compress_to_utility_drive_async::close_target(struct s_file_reference *)
//{
//    mangled_ppc("?close_target@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::delete_target(struct s_file_reference *)
//{
//    mangled_ppc("?delete_target@c_network_blf_compress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_compress_to_utility_drive_async::close_source(struct s_file_reference *)
//{
//    mangled_ppc("?close_source@c_network_blf_compress_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_compress_to_utility_drive_async::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_network_blf_compress_to_utility_drive_async@@AAAXXZ");
//};

//public: static bool c_network_blf_decompress_to_utility_drive_async::submit(class c_network_blf_decompress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_network_blf_decompress_to_utility_drive_async@@SA_NPAV1@PAUs_file_reference@@1PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_network_blf_decompress_to_utility_drive_async::c_network_blf_decompress_to_utility_drive_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("??0c_network_blf_decompress_to_utility_drive_async@@QAA@PAUs_network_blf_zlib_parameters@@PAXI1I@Z");
//};

//public: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_network_blf_decompress_to_utility_drive_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::switch_state(enum c_network_blf_decompress_to_utility_drive_async::e_state)
//{
//    mangled_ppc("?switch_state@c_network_blf_decompress_to_utility_drive_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::open_source(struct s_file_reference *)
//{
//    mangled_ppc("?open_source@c_network_blf_decompress_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::open_target(struct s_file_reference *)
//{
//    mangled_ppc("?open_target@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::read_chunk_header(struct s_file_reference *)
//{
//    mangled_ppc("?read_chunk_header@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::start_copy_chunk(void)
//{
//    mangled_ppc("?start_copy_chunk@c_network_blf_decompress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::copy_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?copy_chunk@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::start_decompress_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?start_decompress_chunk@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::decompress_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?decompress_chunk@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::write_end_of_file_chunk(void)
//{
//    mangled_ppc("?write_end_of_file_chunk@c_network_blf_decompress_to_utility_drive_async@@AAAXXZ");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::close_target(struct s_file_reference *)
//{
//    mangled_ppc("?close_target@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::delete_target(struct s_file_reference *)
//{
//    mangled_ppc("?delete_target@c_network_blf_decompress_to_utility_drive_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_decompress_to_utility_drive_async::close_source(struct s_file_reference *)
//{
//    mangled_ppc("?close_source@c_network_blf_decompress_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_to_utility_drive_async::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_network_blf_decompress_to_utility_drive_async@@AAAXXZ");
//};

//public: static bool c_network_blf_decompress_async::submit(class c_network_blf_decompress_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_network_blf_decompress_async@@SA_NPAV1@PAUs_file_reference@@1PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_network_blf_decompress_async::c_network_blf_decompress_async(struct s_network_blf_zlib_parameters *, void *, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("??0c_network_blf_decompress_async@@QAA@PAUs_network_blf_zlib_parameters@@PAXI1I@Z");
//};

//public: c_network_blf_decompress_async::c_network_blf_decompress_async(class c_network_blf_decompress_async const &)
//{
//    mangled_ppc("??0c_network_blf_decompress_async@@QAA@ABV0@@Z");
//};

//public: enum e_async_pending_bool c_network_blf_decompress_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_network_blf_decompress_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//private: void c_network_blf_decompress_async::switch_state(enum c_network_blf_decompress_async::e_state)
//{
//    mangled_ppc("?switch_state@c_network_blf_decompress_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_decompress_async::open_source(struct s_file_reference *)
//{
//    mangled_ppc("?open_source@c_network_blf_decompress_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::open_target(struct s_file_reference *)
//{
//    mangled_ppc("?open_target@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::read_chunk_header(struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?read_chunk_header@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@0@Z");
//};

//private: void c_network_blf_decompress_async::start_copy_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?start_copy_chunk@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::copy_chunk(struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?copy_chunk@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@0@Z");
//};

//private: void c_network_blf_decompress_async::start_decompress_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?start_decompress_chunk@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::decompress_chunk(struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?decompress_chunk@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@0@Z");
//};

//private: void c_network_blf_decompress_async::write_end_of_file_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?write_end_of_file_chunk@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::close_target(struct s_file_reference *)
//{
//    mangled_ppc("?close_target@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::delete_target(struct s_file_reference *)
//{
//    mangled_ppc("?delete_target@c_network_blf_decompress_async@@AAAXPAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_network_blf_decompress_async::close_source(struct s_file_reference *)
//{
//    mangled_ppc("?close_source@c_network_blf_decompress_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_network_blf_decompress_async::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_network_blf_decompress_async@@AAAXXZ");
//};

//bool network_blf_compress_to_utility_drive(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?network_blf_compress_to_utility_drive@@YA_NPAUs_network_blf_zlib_parameters@@PAUs_file_reference@@1@Z");
//};

//bool network_blf_decompress_to_utility_drive(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?network_blf_decompress_to_utility_drive@@YA_NPAUs_network_blf_zlib_parameters@@PAUs_file_reference@@1@Z");
//};

//bool network_blf_decompress(struct s_network_blf_zlib_parameters *, struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?network_blf_decompress@@YA_NPAUs_network_blf_zlib_parameters@@PAUs_file_reference@@1@Z");
//};

//bool `anonymous namespace'::should_compress_chunk(struct s_blf_header const *)
//{
//    mangled_ppc("?should_compress_chunk@?A0x2ae97b09@@YA_NPBUs_blf_header@@@Z");
//};

//bool `anonymous namespace'::start_compression_stream(struct s_network_blf_zlib_parameters *, struct s_network_blf_zlib_state *)
//{
//    mangled_ppc("?start_compression_stream@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_parameters@@PAUs_network_blf_zlib_state@@@Z");
//};

//bool `anonymous namespace'::write_compression_stream(struct s_network_blf_zlib_state *, void *, long, long *, void *, long, long *, bool, bool *)
//{
//    mangled_ppc("?write_compression_stream@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_state@@PAXJPAJ1J2_NPA_N@Z");
//};

//void `anonymous namespace'::finish_compression_stream(struct s_network_blf_zlib_state *)
//{
//    mangled_ppc("?finish_compression_stream@?A0x2ae97b09@@YAXPAUs_network_blf_zlib_state@@@Z");
//};

//bool `anonymous namespace'::start_decompression_stream(struct s_network_blf_zlib_parameters *, struct s_network_blf_zlib_state *)
//{
//    mangled_ppc("?start_decompression_stream@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_parameters@@PAUs_network_blf_zlib_state@@@Z");
//};

//bool `anonymous namespace'::write_decompression_stream(struct s_network_blf_zlib_state *, void *, long, long *, void *, long, long *, bool, bool *)
//{
//    mangled_ppc("?write_decompression_stream@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_state@@PAXJPAJ1J2_NPA_N@Z");
//};

//void `anonymous namespace'::finish_decompression_stream(struct s_network_blf_zlib_state *)
//{
//    mangled_ppc("?finish_decompression_stream@?A0x2ae97b09@@YAXPAUs_network_blf_zlib_state@@@Z");
//};

//bool `anonymous namespace'::copy_chunk(struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *)
//{
//    mangled_ppc("?copy_chunk@?A0x2ae97b09@@YA_NPBUs_blf_header@@PAUs_file_reference@@PAV?$c_aligned_stored_buffered_file_writer@$0BAAA@@@@Z");
//};

//bool `anonymous namespace'::compress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *)
//{
//    mangled_ppc("?compress_chunk@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_parameters@@PBUs_blf_header@@PAUs_file_reference@@PAV?$c_aligned_stored_buffered_file_writer@$0BAAA@@@@Z");
//};

//bool `anonymous namespace'::decompress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, class c_aligned_stored_buffered_file_writer<4096> *)
//{
//    mangled_ppc("?decompress_chunk@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_parameters@@PBUs_blf_header@@PAUs_file_reference@@PAV?$c_aligned_stored_buffered_file_writer@$0BAAA@@@@Z");
//};

//bool `anonymous namespace'::write_end_of_file_chunk(class c_aligned_stored_buffered_file_writer<4096> *)
//{
//    mangled_ppc("?write_end_of_file_chunk@?A0x2ae97b09@@YA_NPAV?$c_aligned_stored_buffered_file_writer@$0BAAA@@@@Z");
//};

//bool `anonymous namespace'::copy_chunk(struct s_blf_header const *, struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?copy_chunk@?A0x2ae97b09@@YA_NPBUs_blf_header@@PAUs_file_reference@@1@Z");
//};

//bool `anonymous namespace'::decompress_chunk(struct s_network_blf_zlib_parameters *, struct s_blf_header const *, struct s_file_reference *, struct s_file_reference *)
//{
//    mangled_ppc("?decompress_chunk@?A0x2ae97b09@@YA_NPAUs_network_blf_zlib_parameters@@PBUs_blf_header@@PAUs_file_reference@@2@Z");
//};

//bool `anonymous namespace'::write_end_of_file_chunk(struct s_file_reference *)
//{
//    mangled_ppc("?write_end_of_file_chunk@?A0x2ae97b09@@YA_NPAUs_file_reference@@@Z");
//};

//public: bool c_aligned_stored_buffered_file_writer<4096>::set_position(unsigned long)
//{
//    mangled_ppc("?set_position@?$c_aligned_stored_buffered_file_writer@$0BAAA@@@QAA_NK@Z");
//};

//class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_compress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@YA?AV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@PAVc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_to_utility_drive_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@YA?AV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@PAVc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_async *, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@YA?AV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@PAVc_network_blf_decompress_async@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_compress_to_utility_drive_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA@PAVc_network_blf_compress_to_utility_drive_async@@@Z");
//};

//public: s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_to_utility_drive_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA@PAVc_network_blf_decompress_to_utility_drive_async@@@Z");
//};

//public: s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(class c_network_blf_decompress_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA@PAVc_network_blf_decompress_async@@@Z");
//};

//public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@1PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function3<enum e_async_pending_bool, struct s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function3@W4e_async_pending_bool@@U?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAU3@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_compress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function3@Vc_network_blf_compress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_decompress_to_utility_drive_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function3@Vc_network_blf_decompress_to_utility_drive_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function3<class c_network_blf_decompress_async, struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function3@Vc_network_blf_decompress_async@@PAUs_file_reference@@PAU2@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

