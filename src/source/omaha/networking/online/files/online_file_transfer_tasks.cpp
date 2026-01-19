/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<17>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0BB@@@2JB"
// public: static long const s_static_string<17>::k_element_count; // "?k_element_count@?$s_static_string@$0BB@@@2JB"

// public: static char const * c_online_file_transfer_async_base::get_error_string(enum c_online_file_transfer_async_base::e_error);
// public: static bool c_online_file_transfer_download_with_client_async::submit(class c_online_file_transfer_download_with_client_async *, struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: static char const * c_online_file_transfer_download_with_client_async::get_state_string(enum c_online_file_transfer_download_with_client_async::e_state);
// public: c_online_file_transfer_download_with_client_async::c_online_file_transfer_download_with_client_async(void *, unsigned int, class c_http_client *);
// protected: c_online_file_transfer_async_base::c_online_file_transfer_async_base(void);
// public: c_online_file_transfer_download_with_client_async::c_online_file_transfer_download_with_client_async(class c_online_file_transfer_download_with_client_async const &);
// public: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::operator()(struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// private: void c_online_file_transfer_download_with_client_async::switch_state(enum c_online_file_transfer_download_with_client_async::e_state);
// bool is_paused(class c_synchronized_int32*);
// private: void c_online_file_transfer_download_with_client_async::exit_state(enum c_online_file_transfer_download_with_client_async::e_state);
// public: void * c_online_file_transfer_download_with_client_async::s_stage_state::`scalar deleting destructor'(unsigned int);
// public: void * c_online_file_transfer_download_with_client_async::s_transfer_state::`scalar deleting destructor'(unsigned int);
// public: c_online_file_transfer_download_with_client_async::s_transfer_state::~s_transfer_state(void);
// public: c_online_lsp_connection_handle::~c_online_lsp_connection_handle(void);
// public: bool c_online_lsp_connection_handle::is_valid(void) const;
// public: void c_online_lsp_connection_handle::disconnect(bool);
// public: c_online_file_transfer_download_with_client_async::s_stage_state::~s_stage_state(void);
// public: c_online_files_transient_request::~c_online_files_transient_request(void);
// private: void c_online_file_transfer_download_with_client_async::enter_state(enum c_online_file_transfer_download_with_client_async::e_state);
// public: c_online_file_transfer_download_with_client_async::s_stage_state::s_stage_state(unsigned char *, unsigned int);
// public: c_online_files_transient_request::c_online_files_transient_request(void *, long);
// public: c_online_file_transfer_download_with_client_async::s_transfer_state::s_transfer_state(class c_http_client *);
// public: c_online_lsp_connection_handle::c_online_lsp_connection_handle(void);
// private: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::open_file(struct s_file_reference *);
// private: void c_online_file_transfer_download_with_client_async::set_error(enum c_online_file_transfer_async_base::e_error);
// protected: void c_online_file_transfer_async_base::set_error(enum c_online_file_transfer_async_base::e_error);
// private: void c_online_file_transfer_download_with_client_async::stage(struct s_online_file_transfer_download_parameters const &);
// public: char const * c_online_files_transient_request::get_response_buffer(void) const;
// public: long c_online_files_transient_request::get_response_buffer_size(void) const;
// public: bool c_online_files_transient_request::is_busy(void) const;
// private: void c_online_file_transfer_download_with_client_async::transfer(struct s_online_file_transfer_download_parameters const &);
// ??Bc_online_lsp_connection_handle@@QBAPQ0@JXZ;
// public: enum e_online_lsp_server_acquire_result c_online_lsp_connection_handle::acquire(enum e_online_lsp_service_type, long *, unsigned short *, char const *);
// public: void c_online_lsp_connection_handle::connected(void);
// private: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::close_file(struct s_file_reference *);
// private: void c_online_file_transfer_download_with_client_async::flush_utility_drive(bool);
// public: static bool c_online_file_transfer_download_with_queue_async::submit(class c_online_file_transfer_download_with_queue_async *, struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: static char const * c_online_file_transfer_download_with_queue_async::get_state_string(enum c_online_file_transfer_download_with_queue_async::e_state);
// public: c_online_file_transfer_download_with_queue_async::c_online_file_transfer_download_with_queue_async(void *, unsigned int);
// public: c_online_file_transfer_download_with_queue_async::c_online_file_transfer_download_with_queue_async(class c_online_file_transfer_download_with_queue_async const &);
// public: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::operator()(struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// private: void c_online_file_transfer_download_with_queue_async::switch_state(enum c_online_file_transfer_download_with_queue_async::e_state);
// private: void c_online_file_transfer_download_with_queue_async::exit_state(enum c_online_file_transfer_download_with_queue_async::e_state);
// public: void * c_online_file_transfer_download_with_queue_async::s_stage_state::`scalar deleting destructor'(unsigned int);
// public: void * c_online_file_transfer_download_with_queue_async::s_transfer_state::`scalar deleting destructor'(unsigned int);
// public: c_online_file_transfer_download_with_queue_async::s_stage_state::~s_stage_state(void);
// public: c_online_file_transfer_download_with_queue_async::s_transfer_state::~s_transfer_state(void);
// private: void c_online_file_transfer_download_with_queue_async::enter_state(enum c_online_file_transfer_download_with_queue_async::e_state);
// public: c_online_file_transfer_download_with_queue_async::s_stage_state::s_stage_state(unsigned char *, unsigned int);
// public: c_online_file_transfer_download_with_queue_async::s_transfer_state::s_transfer_state(void);
// private: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::open_file(struct s_file_reference *);
// private: void c_online_file_transfer_download_with_queue_async::set_error(enum c_online_file_transfer_async_base::e_error);
// private: void c_online_file_transfer_download_with_queue_async::stage(struct s_online_file_transfer_download_parameters const &);
// private: void c_online_file_transfer_download_with_queue_async::transfer(struct s_online_file_transfer_download_parameters const &);
// private: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::close_file(struct s_file_reference *);
// private: void c_online_file_transfer_download_with_queue_async::flush_utility_drive(bool);
// public: static bool c_online_file_transfer_upload_async::submit(class c_online_file_transfer_upload_async *, struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: static char const * c_online_file_transfer_upload_async::get_state_string(enum c_online_file_transfer_upload_async::e_state);
// public: c_online_file_transfer_upload_async::c_online_file_transfer_upload_async(void *, unsigned int, class c_http_client *);
// public: c_online_file_transfer_upload_async::c_online_file_transfer_upload_async(class c_online_file_transfer_upload_async const &);
// public: enum e_async_pending_bool c_online_file_transfer_upload_async::operator()(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// private: void c_online_file_transfer_upload_async::switch_state(enum c_online_file_transfer_upload_async::e_state);
// private: void c_online_file_transfer_upload_async::exit_state(enum c_online_file_transfer_upload_async::e_state);
// public: void * c_online_file_transfer_upload_async::s_start_state::`scalar deleting destructor'(unsigned int);
// public: void * c_online_file_transfer_upload_async::s_resume_state::`scalar deleting destructor'(unsigned int);
// public: void * c_online_file_transfer_upload_async::s_transfer_state::`scalar deleting destructor'(unsigned int);
// public: c_online_file_transfer_upload_async::s_transfer_state::~s_transfer_state(void);
// public: c_online_file_transfer_upload_async::s_start_state::~s_start_state(void);
// public: c_online_file_transfer_upload_async::s_resume_state::~s_resume_state(void);
// private: void c_online_file_transfer_upload_async::enter_state(enum c_online_file_transfer_upload_async::e_state);
// public: c_online_file_transfer_upload_async::s_start_state::s_start_state(unsigned char *, unsigned int);
// public: c_online_file_transfer_upload_async::s_resume_state::s_resume_state(unsigned char *, unsigned int);
// public: c_online_file_transfer_upload_async::s_transfer_state::s_transfer_state(class c_http_client *);
// private: enum e_async_pending_bool c_online_file_transfer_upload_async::open_file(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *);
// private: void c_online_file_transfer_upload_async::set_error(enum c_online_file_transfer_async_base::e_error);
// private: void c_online_file_transfer_upload_async::start(struct s_online_file_transfer_upload_parameters const &);
// private: void c_online_file_transfer_upload_async::resume(struct s_online_file_transfer_upload_parameters const &);
// private: void c_online_file_transfer_upload_async::transfer(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *);
// private: enum e_async_pending_bool c_online_file_transfer_upload_async::close_file(struct s_file_reference *);
// public: static class c_network_http_request_queue * c_network_http_request_handle<2>::get_queue(void);
// public: c_network_http_request_handle<2>::c_network_http_request_handle<2>(void);
// public: class c_network_http_request_handle<2> & c_network_http_request_handle<2>::operator=(long);
// ??B?$c_network_http_request_handle@$01@@QBAPQ0@JXZ;
// public: bool c_network_http_request_handle<2>::is_busy(void) const;
// public: c_network_http_request_handle<2>::c_network_http_request_handle<2>(long);
// public: char const * s_static_string<48>::print(char const *, ...);
// public: char const * s_static_string<48>::get_string(void) const;
// public: c_network_http_request_handle<2>::~c_network_http_request_handle<2>(void);
// public: void c_network_http_request_handle<2>::swap(class c_network_http_request_handle<2> &);
// public: enum e_network_http_request_result c_network_http_request_handle<2>::read_bytes(void *, long, long *, enum e_network_http_request_queue_failure_reason *, long *);
// public: struct c_online_file_transfer_download_with_client_async::s_stage_state * c_opaque_data<struct c_online_file_transfer_download_with_client_async::s_stage_state, 16, 4>::get(void);
// public: struct c_online_file_transfer_download_with_client_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_download_with_client_async::s_transfer_state, 2836, 8>::get(void);
// public: struct c_online_file_transfer_download_with_queue_async::s_stage_state * c_opaque_data<struct c_online_file_transfer_download_with_queue_async::s_stage_state, 16, 4>::get(void);
// public: struct c_online_file_transfer_download_with_queue_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_download_with_queue_async::s_transfer_state, 4, 4>::get(void);
// public: struct c_online_file_transfer_upload_async::s_start_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_start_state, 16, 4>::get(void);
// public: struct c_online_file_transfer_upload_async::s_resume_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_resume_state, 16, 4>::get(void);
// public: struct c_online_file_transfer_upload_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_transfer_state, 3544, 8>::get(void);
// class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_client_async *, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: char (& s_static_string<33>::get_buffer(void))[33];
// public: char const * s_static_string<17>::print(char const *, ...);
// public: char const * s_static_string<17>::get_string(void) const;
// public: c_static_string<17>::c_static_string<17>(void);
// float int_pin<float, float, float>(float const &, float const &, float const &);
// class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_queue_async *, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_upload_async *, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_client_async *);
// public: s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_queue_async *);
// public: s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_upload_async *);
// public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: void s_static_string<17>::clear(void);
// float int_floor<float, float>(float const &, float const &);
// float int_ceiling<float, float>(float const &, float const &);
// public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// float int_max<float>(float const &, float const &);
// float int_min<float>(float const &, float const &);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*);

//public: static char const * c_online_file_transfer_async_base::get_error_string(enum c_online_file_transfer_async_base::e_error)
//{
//    mangled_ppc("?get_error_string@c_online_file_transfer_async_base@@SAPBDW4e_error@1@@Z");
//};

//public: static bool c_online_file_transfer_download_with_client_async::submit(class c_online_file_transfer_download_with_client_async *, struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_online_file_transfer_download_with_client_async@@SA_NPAV1@ABUs_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static char const * c_online_file_transfer_download_with_client_async::get_state_string(enum c_online_file_transfer_download_with_client_async::e_state)
//{
//    mangled_ppc("?get_state_string@c_online_file_transfer_download_with_client_async@@SAPBDW4e_state@1@@Z");
//};

//public: c_online_file_transfer_download_with_client_async::c_online_file_transfer_download_with_client_async(void *, unsigned int, class c_http_client *)
//{
//    mangled_ppc("??0c_online_file_transfer_download_with_client_async@@QAA@PAXIPAVc_http_client@@@Z");
//};

//protected: c_online_file_transfer_async_base::c_online_file_transfer_async_base(void)
//{
//    mangled_ppc("??0c_online_file_transfer_async_base@@IAA@XZ");
//};

//public: c_online_file_transfer_download_with_client_async::c_online_file_transfer_download_with_client_async(class c_online_file_transfer_download_with_client_async const &)
//{
//    mangled_ppc("??0c_online_file_transfer_download_with_client_async@@QAA@ABV0@@Z");
//};

//public: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::operator()(struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_online_file_transfer_download_with_client_async@@QAA?AW4e_async_pending_bool@@ABUs_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

//private: void c_online_file_transfer_download_with_client_async::switch_state(enum c_online_file_transfer_download_with_client_async::e_state)
//{
//    mangled_ppc("?switch_state@c_online_file_transfer_download_with_client_async@@AAAXW4e_state@1@@Z");
//};

//bool is_paused(class c_synchronized_int32*)
//{
//    mangled_ppc("?is_paused@@YA_NPAVc_synchronized_int32@@@Z");
//};

//private: void c_online_file_transfer_download_with_client_async::exit_state(enum c_online_file_transfer_download_with_client_async::e_state)
//{
//    mangled_ppc("?exit_state@c_online_file_transfer_download_with_client_async@@AAAXW4e_state@1@@Z");
//};

//public: void * c_online_file_transfer_download_with_client_async::s_stage_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_stage_state@c_online_file_transfer_download_with_client_async@@QAAPAXI@Z");
//};

//public: void * c_online_file_transfer_download_with_client_async::s_transfer_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_transfer_state@c_online_file_transfer_download_with_client_async@@QAAPAXI@Z");
//};

//public: c_online_file_transfer_download_with_client_async::s_transfer_state::~s_transfer_state(void)
//{
//    mangled_ppc("??1s_transfer_state@c_online_file_transfer_download_with_client_async@@QAA@XZ");
//};

//public: c_online_lsp_connection_handle::~c_online_lsp_connection_handle(void)
//{
//    mangled_ppc("??1c_online_lsp_connection_handle@@QAA@XZ");
//};

//public: bool c_online_lsp_connection_handle::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_online_lsp_connection_handle@@QBA_NXZ");
//};

//public: void c_online_lsp_connection_handle::disconnect(bool)
//{
//    mangled_ppc("?disconnect@c_online_lsp_connection_handle@@QAAX_N@Z");
//};

//public: c_online_file_transfer_download_with_client_async::s_stage_state::~s_stage_state(void)
//{
//    mangled_ppc("??1s_stage_state@c_online_file_transfer_download_with_client_async@@QAA@XZ");
//};

//public: c_online_files_transient_request::~c_online_files_transient_request(void)
//{
//    mangled_ppc("??1c_online_files_transient_request@@QAA@XZ");
//};

//private: void c_online_file_transfer_download_with_client_async::enter_state(enum c_online_file_transfer_download_with_client_async::e_state)
//{
//    mangled_ppc("?enter_state@c_online_file_transfer_download_with_client_async@@AAAXW4e_state@1@@Z");
//};

//public: c_online_file_transfer_download_with_client_async::s_stage_state::s_stage_state(unsigned char *, unsigned int)
//{
//    mangled_ppc("??0s_stage_state@c_online_file_transfer_download_with_client_async@@QAA@PAEI@Z");
//};

//public: c_online_files_transient_request::c_online_files_transient_request(void *, long)
//{
//    mangled_ppc("??0c_online_files_transient_request@@QAA@PAXJ@Z");
//};

//public: c_online_file_transfer_download_with_client_async::s_transfer_state::s_transfer_state(class c_http_client *)
//{
//    mangled_ppc("??0s_transfer_state@c_online_file_transfer_download_with_client_async@@QAA@PAVc_http_client@@@Z");
//};

//public: c_online_lsp_connection_handle::c_online_lsp_connection_handle(void)
//{
//    mangled_ppc("??0c_online_lsp_connection_handle@@QAA@XZ");
//};

//private: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::open_file(struct s_file_reference *)
//{
//    mangled_ppc("?open_file@c_online_file_transfer_download_with_client_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer_download_with_client_async::set_error(enum c_online_file_transfer_async_base::e_error)
//{
//    mangled_ppc("?set_error@c_online_file_transfer_download_with_client_async@@AAAXW4e_error@c_online_file_transfer_async_base@@@Z");
//};

//protected: void c_online_file_transfer_async_base::set_error(enum c_online_file_transfer_async_base::e_error)
//{
//    mangled_ppc("?set_error@c_online_file_transfer_async_base@@IAAXW4e_error@1@@Z");
//};

//private: void c_online_file_transfer_download_with_client_async::stage(struct s_online_file_transfer_download_parameters const &)
//{
//    mangled_ppc("?stage@c_online_file_transfer_download_with_client_async@@AAAXABUs_online_file_transfer_download_parameters@@@Z");
//};

//public: char const * c_online_files_transient_request::get_response_buffer(void) const
//{
//    mangled_ppc("?get_response_buffer@c_online_files_transient_request@@QBAPBDXZ");
//};

//public: long c_online_files_transient_request::get_response_buffer_size(void) const
//{
//    mangled_ppc("?get_response_buffer_size@c_online_files_transient_request@@QBAJXZ");
//};

//public: bool c_online_files_transient_request::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_online_files_transient_request@@QBA_NXZ");
//};

//private: void c_online_file_transfer_download_with_client_async::transfer(struct s_online_file_transfer_download_parameters const &)
//{
//    mangled_ppc("?transfer@c_online_file_transfer_download_with_client_async@@AAAXABUs_online_file_transfer_download_parameters@@@Z");
//};

//??Bc_online_lsp_connection_handle@@QBAPQ0@JXZ
//{
//    mangled_ppc("??Bc_online_lsp_connection_handle@@QBAPQ0@JXZ");
//};

//public: enum e_online_lsp_server_acquire_result c_online_lsp_connection_handle::acquire(enum e_online_lsp_service_type, long *, unsigned short *, char const *)
//{
//    mangled_ppc("?acquire@c_online_lsp_connection_handle@@QAA?AW4e_online_lsp_server_acquire_result@@W4e_online_lsp_service_type@@PAJPAGPBD@Z");
//};

//public: void c_online_lsp_connection_handle::connected(void)
//{
//    mangled_ppc("?connected@c_online_lsp_connection_handle@@QAAXXZ");
//};

//private: enum e_async_pending_bool c_online_file_transfer_download_with_client_async::close_file(struct s_file_reference *)
//{
//    mangled_ppc("?close_file@c_online_file_transfer_download_with_client_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer_download_with_client_async::flush_utility_drive(bool)
//{
//    mangled_ppc("?flush_utility_drive@c_online_file_transfer_download_with_client_async@@AAAX_N@Z");
//};

//public: static bool c_online_file_transfer_download_with_queue_async::submit(class c_online_file_transfer_download_with_queue_async *, struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_online_file_transfer_download_with_queue_async@@SA_NPAV1@ABUs_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static char const * c_online_file_transfer_download_with_queue_async::get_state_string(enum c_online_file_transfer_download_with_queue_async::e_state)
//{
//    mangled_ppc("?get_state_string@c_online_file_transfer_download_with_queue_async@@SAPBDW4e_state@1@@Z");
//};

//public: c_online_file_transfer_download_with_queue_async::c_online_file_transfer_download_with_queue_async(void *, unsigned int)
//{
//    mangled_ppc("??0c_online_file_transfer_download_with_queue_async@@QAA@PAXI@Z");
//};

//public: c_online_file_transfer_download_with_queue_async::c_online_file_transfer_download_with_queue_async(class c_online_file_transfer_download_with_queue_async const &)
//{
//    mangled_ppc("??0c_online_file_transfer_download_with_queue_async@@QAA@ABV0@@Z");
//};

//public: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::operator()(struct s_online_file_transfer_download_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_online_file_transfer_download_with_queue_async@@QAA?AW4e_async_pending_bool@@ABUs_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::switch_state(enum c_online_file_transfer_download_with_queue_async::e_state)
//{
//    mangled_ppc("?switch_state@c_online_file_transfer_download_with_queue_async@@AAAXW4e_state@1@@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::exit_state(enum c_online_file_transfer_download_with_queue_async::e_state)
//{
//    mangled_ppc("?exit_state@c_online_file_transfer_download_with_queue_async@@AAAXW4e_state@1@@Z");
//};

//public: void * c_online_file_transfer_download_with_queue_async::s_stage_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_stage_state@c_online_file_transfer_download_with_queue_async@@QAAPAXI@Z");
//};

//public: void * c_online_file_transfer_download_with_queue_async::s_transfer_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_transfer_state@c_online_file_transfer_download_with_queue_async@@QAAPAXI@Z");
//};

//public: c_online_file_transfer_download_with_queue_async::s_stage_state::~s_stage_state(void)
//{
//    mangled_ppc("??1s_stage_state@c_online_file_transfer_download_with_queue_async@@QAA@XZ");
//};

//public: c_online_file_transfer_download_with_queue_async::s_transfer_state::~s_transfer_state(void)
//{
//    mangled_ppc("??1s_transfer_state@c_online_file_transfer_download_with_queue_async@@QAA@XZ");
//};

//private: void c_online_file_transfer_download_with_queue_async::enter_state(enum c_online_file_transfer_download_with_queue_async::e_state)
//{
//    mangled_ppc("?enter_state@c_online_file_transfer_download_with_queue_async@@AAAXW4e_state@1@@Z");
//};

//public: c_online_file_transfer_download_with_queue_async::s_stage_state::s_stage_state(unsigned char *, unsigned int)
//{
//    mangled_ppc("??0s_stage_state@c_online_file_transfer_download_with_queue_async@@QAA@PAEI@Z");
//};

//public: c_online_file_transfer_download_with_queue_async::s_transfer_state::s_transfer_state(void)
//{
//    mangled_ppc("??0s_transfer_state@c_online_file_transfer_download_with_queue_async@@QAA@XZ");
//};

//private: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::open_file(struct s_file_reference *)
//{
//    mangled_ppc("?open_file@c_online_file_transfer_download_with_queue_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::set_error(enum c_online_file_transfer_async_base::e_error)
//{
//    mangled_ppc("?set_error@c_online_file_transfer_download_with_queue_async@@AAAXW4e_error@c_online_file_transfer_async_base@@@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::stage(struct s_online_file_transfer_download_parameters const &)
//{
//    mangled_ppc("?stage@c_online_file_transfer_download_with_queue_async@@AAAXABUs_online_file_transfer_download_parameters@@@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::transfer(struct s_online_file_transfer_download_parameters const &)
//{
//    mangled_ppc("?transfer@c_online_file_transfer_download_with_queue_async@@AAAXABUs_online_file_transfer_download_parameters@@@Z");
//};

//private: enum e_async_pending_bool c_online_file_transfer_download_with_queue_async::close_file(struct s_file_reference *)
//{
//    mangled_ppc("?close_file@c_online_file_transfer_download_with_queue_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer_download_with_queue_async::flush_utility_drive(bool)
//{
//    mangled_ppc("?flush_utility_drive@c_online_file_transfer_download_with_queue_async@@AAAX_N@Z");
//};

//public: static bool c_online_file_transfer_upload_async::submit(class c_online_file_transfer_upload_async *, struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_online_file_transfer_upload_async@@SA_NPAV1@ABUs_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static char const * c_online_file_transfer_upload_async::get_state_string(enum c_online_file_transfer_upload_async::e_state)
//{
//    mangled_ppc("?get_state_string@c_online_file_transfer_upload_async@@SAPBDW4e_state@1@@Z");
//};

//public: c_online_file_transfer_upload_async::c_online_file_transfer_upload_async(void *, unsigned int, class c_http_client *)
//{
//    mangled_ppc("??0c_online_file_transfer_upload_async@@QAA@PAXIPAVc_http_client@@@Z");
//};

//public: c_online_file_transfer_upload_async::c_online_file_transfer_upload_async(class c_online_file_transfer_upload_async const &)
//{
//    mangled_ppc("??0c_online_file_transfer_upload_async@@QAA@ABV0@@Z");
//};

//public: enum e_async_pending_bool c_online_file_transfer_upload_async::operator()(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_online_file_transfer_upload_async@@QAA?AW4e_async_pending_bool@@ABUs_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

//private: void c_online_file_transfer_upload_async::switch_state(enum c_online_file_transfer_upload_async::e_state)
//{
//    mangled_ppc("?switch_state@c_online_file_transfer_upload_async@@AAAXW4e_state@1@@Z");
//};

//private: void c_online_file_transfer_upload_async::exit_state(enum c_online_file_transfer_upload_async::e_state)
//{
//    mangled_ppc("?exit_state@c_online_file_transfer_upload_async@@AAAXW4e_state@1@@Z");
//};

//public: void * c_online_file_transfer_upload_async::s_start_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_start_state@c_online_file_transfer_upload_async@@QAAPAXI@Z");
//};

//public: void * c_online_file_transfer_upload_async::s_resume_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_resume_state@c_online_file_transfer_upload_async@@QAAPAXI@Z");
//};

//public: void * c_online_file_transfer_upload_async::s_transfer_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_transfer_state@c_online_file_transfer_upload_async@@QAAPAXI@Z");
//};

//public: c_online_file_transfer_upload_async::s_transfer_state::~s_transfer_state(void)
//{
//    mangled_ppc("??1s_transfer_state@c_online_file_transfer_upload_async@@QAA@XZ");
//};

//public: c_online_file_transfer_upload_async::s_start_state::~s_start_state(void)
//{
//    mangled_ppc("??1s_start_state@c_online_file_transfer_upload_async@@QAA@XZ");
//};

//public: c_online_file_transfer_upload_async::s_resume_state::~s_resume_state(void)
//{
//    mangled_ppc("??1s_resume_state@c_online_file_transfer_upload_async@@QAA@XZ");
//};

//private: void c_online_file_transfer_upload_async::enter_state(enum c_online_file_transfer_upload_async::e_state)
//{
//    mangled_ppc("?enter_state@c_online_file_transfer_upload_async@@AAAXW4e_state@1@@Z");
//};

//public: c_online_file_transfer_upload_async::s_start_state::s_start_state(unsigned char *, unsigned int)
//{
//    mangled_ppc("??0s_start_state@c_online_file_transfer_upload_async@@QAA@PAEI@Z");
//};

//public: c_online_file_transfer_upload_async::s_resume_state::s_resume_state(unsigned char *, unsigned int)
//{
//    mangled_ppc("??0s_resume_state@c_online_file_transfer_upload_async@@QAA@PAEI@Z");
//};

//public: c_online_file_transfer_upload_async::s_transfer_state::s_transfer_state(class c_http_client *)
//{
//    mangled_ppc("??0s_transfer_state@c_online_file_transfer_upload_async@@QAA@PAVc_http_client@@@Z");
//};

//private: enum e_async_pending_bool c_online_file_transfer_upload_async::open_file(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *)
//{
//    mangled_ppc("?open_file@c_online_file_transfer_upload_async@@AAA?AW4e_async_pending_bool@@ABUs_online_file_transfer_upload_parameters@@PAUs_file_reference@@@Z");
//};

//private: void c_online_file_transfer_upload_async::set_error(enum c_online_file_transfer_async_base::e_error)
//{
//    mangled_ppc("?set_error@c_online_file_transfer_upload_async@@AAAXW4e_error@c_online_file_transfer_async_base@@@Z");
//};

//private: void c_online_file_transfer_upload_async::start(struct s_online_file_transfer_upload_parameters const &)
//{
//    mangled_ppc("?start@c_online_file_transfer_upload_async@@AAAXABUs_online_file_transfer_upload_parameters@@@Z");
//};

//private: void c_online_file_transfer_upload_async::resume(struct s_online_file_transfer_upload_parameters const &)
//{
//    mangled_ppc("?resume@c_online_file_transfer_upload_async@@AAAXABUs_online_file_transfer_upload_parameters@@@Z");
//};

//private: void c_online_file_transfer_upload_async::transfer(struct s_online_file_transfer_upload_parameters const &, struct s_file_reference *)
//{
//    mangled_ppc("?transfer@c_online_file_transfer_upload_async@@AAAXABUs_online_file_transfer_upload_parameters@@PAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_online_file_transfer_upload_async::close_file(struct s_file_reference *)
//{
//    mangled_ppc("?close_file@c_online_file_transfer_upload_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: static class c_network_http_request_queue * c_network_http_request_handle<2>::get_queue(void)
//{
//    mangled_ppc("?get_queue@?$c_network_http_request_handle@$01@@SAPAVc_network_http_request_queue@@XZ");
//};

//public: c_network_http_request_handle<2>::c_network_http_request_handle<2>(void)
//{
//    mangled_ppc("??0?$c_network_http_request_handle@$01@@QAA@XZ");
//};

//public: class c_network_http_request_handle<2> & c_network_http_request_handle<2>::operator=(long)
//{
//    mangled_ppc("??4?$c_network_http_request_handle@$01@@QAAAAV0@J@Z");
//};

//??B?$c_network_http_request_handle@$01@@QBAPQ0@JXZ
//{
//    mangled_ppc("??B?$c_network_http_request_handle@$01@@QBAPQ0@JXZ");
//};

//public: bool c_network_http_request_handle<2>::is_busy(void) const
//{
//    mangled_ppc("?is_busy@?$c_network_http_request_handle@$01@@QBA_NXZ");
//};

//public: c_network_http_request_handle<2>::c_network_http_request_handle<2>(long)
//{
//    mangled_ppc("??0?$c_network_http_request_handle@$01@@QAA@J@Z");
//};

//public: char const * s_static_string<48>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0DA@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<48>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0DA@@@QBAPBDXZ");
//};

//public: c_network_http_request_handle<2>::~c_network_http_request_handle<2>(void)
//{
//    mangled_ppc("??1?$c_network_http_request_handle@$01@@QAA@XZ");
//};

//public: void c_network_http_request_handle<2>::swap(class c_network_http_request_handle<2> &)
//{
//    mangled_ppc("?swap@?$c_network_http_request_handle@$01@@QAAXAAV1@@Z");
//};

//public: enum e_network_http_request_result c_network_http_request_handle<2>::read_bytes(void *, long, long *, enum e_network_http_request_queue_failure_reason *, long *)
//{
//    mangled_ppc("?read_bytes@?$c_network_http_request_handle@$01@@QAA?AW4e_network_http_request_result@@PAXJPAJPAW4e_network_http_request_queue_failure_reason@@1@Z");
//};

//public: struct c_online_file_transfer_download_with_client_async::s_stage_state * c_opaque_data<struct c_online_file_transfer_download_with_client_async::s_stage_state, 16, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_stage_state@c_online_file_transfer_download_with_client_async@@$0BA@$03@@QAAPAUs_stage_state@c_online_file_transfer_download_with_client_async@@XZ");
//};

//public: struct c_online_file_transfer_download_with_client_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_download_with_client_async::s_transfer_state, 2836, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_transfer_state@c_online_file_transfer_download_with_client_async@@$0LBE@$07@@QAAPAUs_transfer_state@c_online_file_transfer_download_with_client_async@@XZ");
//};

//public: struct c_online_file_transfer_download_with_queue_async::s_stage_state * c_opaque_data<struct c_online_file_transfer_download_with_queue_async::s_stage_state, 16, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_stage_state@c_online_file_transfer_download_with_queue_async@@$0BA@$03@@QAAPAUs_stage_state@c_online_file_transfer_download_with_queue_async@@XZ");
//};

//public: struct c_online_file_transfer_download_with_queue_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_download_with_queue_async::s_transfer_state, 4, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_transfer_state@c_online_file_transfer_download_with_queue_async@@$03$03@@QAAPAUs_transfer_state@c_online_file_transfer_download_with_queue_async@@XZ");
//};

//public: struct c_online_file_transfer_upload_async::s_start_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_start_state, 16, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_start_state@c_online_file_transfer_upload_async@@$0BA@$03@@QAAPAUs_start_state@c_online_file_transfer_upload_async@@XZ");
//};

//public: struct c_online_file_transfer_upload_async::s_resume_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_resume_state, 16, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_resume_state@c_online_file_transfer_upload_async@@$0BA@$03@@QAAPAUs_resume_state@c_online_file_transfer_upload_async@@XZ");
//};

//public: struct c_online_file_transfer_upload_async::s_transfer_state * c_opaque_data<struct c_online_file_transfer_upload_async::s_transfer_state, 3544, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_transfer_state@c_online_file_transfer_upload_async@@$0NNI@$07@@QAAPAUs_transfer_state@c_online_file_transfer_upload_async@@XZ");
//};

//class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_client_async *, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@YA?AV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@PAVc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@YA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: char (& s_static_string<33>::get_buffer(void))[33]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0CB@@@QAAAAY0CB@DXZ");
//};

//public: char const * s_static_string<17>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0BB@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<17>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0BB@@@QBAPBDXZ");
//};

//public: c_static_string<17>::c_static_string<17>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0BB@@@QAA@XZ");
//};

//float int_pin<float, float, float>(float const &, float const &, float const &)
//{
//    mangled_ppc("??$int_pin@MMM@@YAMABM00@Z");
//};

//class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_queue_async *, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@YA?AV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@PAVc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@YA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> async_function_make<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_upload_async *, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@YA?AV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@PAVc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@YA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_client_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA@PAVc_online_file_transfer_download_with_client_async@@@Z");
//};

//public: s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_download_with_queue_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA@PAVc_online_file_transfer_download_with_queue_async@@@Z");
//};

//public: s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(class c_online_file_transfer_upload_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA@PAVc_online_file_transfer_upload_async@@@Z");
//};

//public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@s_async_task_functions@@SA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: void s_static_string<17>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0BB@@@QAAXXZ");
//};

//float int_floor<float, float>(float const &, float const &)
//{
//    mangled_ppc("??$int_floor@MM@@YAMABM0@Z");
//};

//float int_ceiling<float, float>(float const &, float const &)
//{
//    mangled_ppc("??$int_ceiling@MM@@YAMABM0@Z");
//};

//public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@s_async_task_functions@@SA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>(struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@3@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@s_async_task_functions@@SA_NABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//float int_max<float>(float const &, float const &)
//{
//    mangled_ppc("??$int_max@M@@YAMABM0@Z");
//};

//float int_min<float>(float const &, float const &)
//{
//    mangled_ppc("??$int_min@M@@YAMABM0@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function4<enum e_async_pending_bool, struct s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function4@W4e_async_pending_bool@@U?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV5@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_download_with_client_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function4@Vc_online_file_transfer_download_with_client_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA?AW4e_async_pending_bool@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_download_with_queue_async, struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_download_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function4@Vc_online_file_transfer_download_with_queue_async@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA?AW4e_async_pending_bool@@Us_online_file_transfer_download_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function4<class c_online_file_transfer_upload_async, struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*>::operator()(struct s_online_file_transfer_upload_parameters, struct s_file_reference *, class c_synchronized_int32*, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function4@Vc_online_file_transfer_upload_async@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@PAV4@@@QAA?AW4e_async_pending_bool@@Us_online_file_transfer_upload_parameters@@PAUs_file_reference@@PAVc_synchronized_int32@@2@Z");
//};

