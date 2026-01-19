/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const c_autosave_queue_enumerate_async::k_max_item_count; // "?k_max_item_count@c_autosave_queue_enumerate_async@@2IB"
// unsigned long *g_max_queue_sizes; // "?g_max_queue_sizes@@3PAKA"

// public: static bool c_recycle_async::submit(class c_recycle_async *, class c_async_task<enum e_async_completion> *);
// public: c_recycle_async::c_recycle_async(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int);
// public: enum e_async_completion c_recycle_async::operator()(void);
// void autosave_queue_initialize(void);
// void autosave_queue_dispose(void);
// void autosave_queue_initialize_for_new_map(void);
// bool saved_film_manager_snippets_available(void);
// void autosave_queue_dispose_from_old_map(void);
// void autosave_queue_free_up_space(void);
// char const * autosave_queue_get_directory_path(void);
// char const * autosave_queue_get_filename_prefix(void);
// void save_current_map_variant(void);
// public: s_blffile_map_variant::s_blffile_map_variant(void);
// public: s_blffile_saved_game_file::s_blffile_saved_game_file(void);
// void autosave_queue_generate_new_filename(enum e_content_item_type, class c_static_string<256> *);
// void save_current_game_variant(void);
// public: s_blffile_game_variant::s_blffile_game_variant(void);
// public: s_blf_chunk_game_variant::s_blf_chunk_game_variant(void);
// unsigned long get_max_file_size(enum e_content_item_type);
// unsigned long get_max_queue_size(enum e_content_item_type);
// enum e_autosave_queue_type get_queue_type(enum e_content_item_type);
// void delete_temp_files_async_blocking(void);
// public: c_async_task<void>::c_async_task<void>(void);
// void delete_temp_files(void);
// public: c_async_task<void>::~c_async_task<void>(void);
// void enumerate_async_blocking(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int, unsigned int *);
// public: c_async_task<enum e_async_completion>::~c_async_task<enum e_async_completion>(void);
// void make_free_space(enum e_content_item_type);
// void recycle_async_blocking(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int);
// public: c_async_task<enum e_async_completion>::c_async_task<enum e_async_completion>(void);
// class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > async_function_make<class c_recycle_async>(class c_recycle_async *);
// bool async_function_submit<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &, long, long, class c_async_task<enum e_async_completion> *);
// class c_async_function0<void, void (*)(void)> async_function_make<void>(void (*)(void));
// bool async_function_submit<void, class c_async_function0<void, void (*)(void)> >(class c_async_function0<void, void (*)(void)> const &, long, long, class c_async_task<void> *);
// public: s_async_indirect_function0<class c_recycle_async>::s_async_indirect_function0<class c_recycle_async>(class c_recycle_async *);
// public: c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >::c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >(struct s_async_indirect_function0<class c_recycle_async>);
// public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &, long, long, class c_async_task<enum e_async_completion> *);
// public: c_async_function0<void, void (*)(void)>::c_async_function0<void, void (*)(void)>(void (*)(void));
// public: static bool s_async_task_functions::submit<void, class c_async_function0<void, void (*)(void)> >(class c_async_function0<void, void (*)(void)> const &, long, long, class c_async_task<void> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >::callback(void *);
// public: static enum e_async_completion s_async_result_traits<enum e_async_completion>::get_completion(enum e_async_completion);
// public: s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >::s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_task<enum e_async_completion> *, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >::callback(void *);
// public: s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >::s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >(class c_async_task<void> *, class c_async_function0<void, void (*)(void)> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > >(long, struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: void c_async_task<enum e_async_completion>::set_result(enum e_async_completion const &);
// public: enum e_async_completion c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: void c_async_function0<void, void (*)(void)>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > >(long, struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_completion s_async_indirect_function0<class c_recycle_async>::operator()(void);
// time;

//public: static bool c_recycle_async::submit(class c_recycle_async *, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("?submit@c_recycle_async@@SA_NPAV1@PAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: c_recycle_async::c_recycle_async(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int)
//{
//    mangled_ppc("??0c_recycle_async@@QAA@W4e_content_item_type@@PAUs_autosave_queue_item@@I@Z");
//};

//public: enum e_async_completion c_recycle_async::operator()(void)
//{
//    mangled_ppc("??Rc_recycle_async@@QAA?AW4e_async_completion@@XZ");
//};

//void autosave_queue_initialize(void)
//{
//    mangled_ppc("?autosave_queue_initialize@@YAXXZ");
//};

//void autosave_queue_dispose(void)
//{
//    mangled_ppc("?autosave_queue_dispose@@YAXXZ");
//};

//void autosave_queue_initialize_for_new_map(void)
//{
//    mangled_ppc("?autosave_queue_initialize_for_new_map@@YAXXZ");
//};

//bool saved_film_manager_snippets_available(void)
//{
//    mangled_ppc("?saved_film_manager_snippets_available@@YA_NXZ");
//};

//void autosave_queue_dispose_from_old_map(void)
//{
//    mangled_ppc("?autosave_queue_dispose_from_old_map@@YAXXZ");
//};

//void autosave_queue_free_up_space(void)
//{
//    mangled_ppc("?autosave_queue_free_up_space@@YAXXZ");
//};

//char const * autosave_queue_get_directory_path(void)
//{
//    mangled_ppc("?autosave_queue_get_directory_path@@YAPBDXZ");
//};

//char const * autosave_queue_get_filename_prefix(void)
//{
//    mangled_ppc("?autosave_queue_get_filename_prefix@@YAPBDXZ");
//};

//void save_current_map_variant(void)
//{
//    mangled_ppc("?save_current_map_variant@@YAXXZ");
//};

//public: s_blffile_map_variant::s_blffile_map_variant(void)
//{
//    mangled_ppc("??0s_blffile_map_variant@@QAA@XZ");
//};

//public: s_blffile_saved_game_file::s_blffile_saved_game_file(void)
//{
//    mangled_ppc("??0s_blffile_saved_game_file@@QAA@XZ");
//};

//void autosave_queue_generate_new_filename(enum e_content_item_type, class c_static_string<256> *)
//{
//    mangled_ppc("?autosave_queue_generate_new_filename@@YAXW4e_content_item_type@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//void save_current_game_variant(void)
//{
//    mangled_ppc("?save_current_game_variant@@YAXXZ");
//};

//public: s_blffile_game_variant::s_blffile_game_variant(void)
//{
//    mangled_ppc("??0s_blffile_game_variant@@QAA@XZ");
//};

//public: s_blf_chunk_game_variant::s_blf_chunk_game_variant(void)
//{
//    mangled_ppc("??0s_blf_chunk_game_variant@@QAA@XZ");
//};

//unsigned long get_max_file_size(enum e_content_item_type)
//{
//    mangled_ppc("?get_max_file_size@@YAKW4e_content_item_type@@@Z");
//};

//unsigned long get_max_queue_size(enum e_content_item_type)
//{
//    mangled_ppc("?get_max_queue_size@@YAKW4e_content_item_type@@@Z");
//};

//enum e_autosave_queue_type get_queue_type(enum e_content_item_type)
//{
//    mangled_ppc("?get_queue_type@@YA?AW4e_autosave_queue_type@@W4e_content_item_type@@@Z");
//};

//void delete_temp_files_async_blocking(void)
//{
//    mangled_ppc("?delete_temp_files_async_blocking@@YAXXZ");
//};

//public: c_async_task<void>::c_async_task<void>(void)
//{
//    mangled_ppc("??0?$c_async_task@X@@QAA@XZ");
//};

//void delete_temp_files(void)
//{
//    mangled_ppc("?delete_temp_files@@YAXXZ");
//};

//public: c_async_task<void>::~c_async_task<void>(void)
//{
//    mangled_ppc("??1?$c_async_task@X@@QAA@XZ");
//};

//void enumerate_async_blocking(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int, unsigned int *)
//{
//    mangled_ppc("?enumerate_async_blocking@@YAXW4e_content_item_type@@PAUs_autosave_queue_item@@IPAI@Z");
//};

//public: c_async_task<enum e_async_completion>::~c_async_task<enum e_async_completion>(void)
//{
//    mangled_ppc("??1?$c_async_task@W4e_async_completion@@@@QAA@XZ");
//};

//void make_free_space(enum e_content_item_type)
//{
//    mangled_ppc("?make_free_space@@YAXW4e_content_item_type@@@Z");
//};

//void recycle_async_blocking(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int)
//{
//    mangled_ppc("?recycle_async_blocking@@YAXW4e_content_item_type@@PAUs_autosave_queue_item@@I@Z");
//};

//public: c_async_task<enum e_async_completion>::c_async_task<enum e_async_completion>(void)
//{
//    mangled_ppc("??0?$c_async_task@W4e_async_completion@@@@QAA@XZ");
//};

//class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > async_function_make<class c_recycle_async>(class c_recycle_async *)
//{
//    mangled_ppc("??$async_function_make@Vc_recycle_async@@@@YA?AV?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@PAVc_recycle_async@@@Z");
//};

//bool async_function_submit<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@YA_NABV?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//class c_async_function0<void, void (*)(void)> async_function_make<void>(void (*)(void))
//{
//    mangled_ppc("??$async_function_make@X@@YA?AV?$c_async_function0@XP6AXXZ@@P6AXXZ@Z");
//};

//bool async_function_submit<void, class c_async_function0<void, void (*)(void)> >(class c_async_function0<void, void (*)(void)> const &, long, long, class c_async_task<void> *)
//{
//    mangled_ppc("??$async_function_submit@XV?$c_async_function0@XP6AXXZ@@@@YA_NABV?$c_async_function0@XP6AXXZ@@JJPAV?$c_async_task@X@@@Z");
//};

//public: s_async_indirect_function0<class c_recycle_async>::s_async_indirect_function0<class c_recycle_async>(class c_recycle_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function0@Vc_recycle_async@@@@QAA@PAVc_recycle_async@@@Z");
//};

//public: c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >::c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >(struct s_async_indirect_function0<class c_recycle_async>)
//{
//    mangled_ppc("??0?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@QAA@U?$s_async_indirect_function0@Vc_recycle_async@@@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$submit@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@s_async_task_functions@@SA_NABV?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: c_async_function0<void, void (*)(void)>::c_async_function0<void, void (*)(void)>(void (*)(void))
//{
//    mangled_ppc("??0?$c_async_function0@XP6AXXZ@@QAA@P6AXXZ@Z");
//};

//public: static bool s_async_task_functions::submit<void, class c_async_function0<void, void (*)(void)> >(class c_async_function0<void, void (*)(void)> const &, long, long, class c_async_task<void> *)
//{
//    mangled_ppc("??$submit@XV?$c_async_function0@XP6AXXZ@@@s_async_task_functions@@SA_NABV?$c_async_function0@XP6AXXZ@@JJPAV?$c_async_task@X@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: static enum e_async_completion s_async_result_traits<enum e_async_completion>::get_completion(enum e_async_completion)
//{
//    mangled_ppc("?get_completion@?$s_async_result_traits@W4e_async_completion@@@@SA?AW4e_async_completion@@W42@@Z");
//};

//public: s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >::s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > >(class c_async_task<enum e_async_completion> *, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@QAA@PAV?$c_async_task@W4e_async_completion@@@@ABV?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >::s_async_callback_context<void, class c_async_function0<void, void (*)(void)> >(class c_async_task<void> *, class c_async_function0<void, void (*)(void)> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@QAA@PAV?$c_async_task@X@@ABV?$c_async_function0@XP6AXXZ@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > >(long, struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: void c_async_task<enum e_async_completion>::set_result(enum e_async_completion const &)
//{
//    mangled_ppc("?set_result@?$c_async_task@W4e_async_completion@@@@QAAXABW4e_async_completion@@@Z");
//};

//public: enum e_async_completion c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> >::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@QAA?AW4e_async_completion@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function0<enum e_async_completion, struct s_async_indirect_function0<class c_recycle_async> > > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function0@W4e_async_completion@@U?$s_async_indirect_function0@Vc_recycle_async@@@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: void c_async_function0<void, void (*)(void)>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function0@XP6AXXZ@@QAAXXZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > >(long, struct s_async_callback_context<void, class c_async_function0<void, void (*)(void)> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@XV?$c_async_function0@XP6AXXZ@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_completion s_async_indirect_function0<class c_recycle_async>::operator()(void)
//{
//    mangled_ppc("??R?$s_async_indirect_function0@Vc_recycle_async@@@@QAA?AW4e_async_completion@@XZ");
//};

//time
//{
//    mangled_ppc("time");
//};

