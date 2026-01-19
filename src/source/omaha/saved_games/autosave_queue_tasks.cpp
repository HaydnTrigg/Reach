/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void autosave_queue_sort_items_by_file_modification_date(struct s_autosave_queue_item *, struct s_autosave_queue_item *);
// void autosave_queue_sort_items_by_metadata_display_name(struct s_autosave_queue_item *, struct s_autosave_queue_item *);
// public: static bool c_autosave_queue_enumerate_async::submit(class c_autosave_queue_enumerate_async *, class c_synchronized_int32*, class c_async_task<enum e_async_completion> *);
// public: c_autosave_queue_enumerate_async::c_autosave_queue_enumerate_async(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int, unsigned int *);
// public: enum e_async_completion c_autosave_queue_enumerate_async::operator()(class c_synchronized_int32*);
// private: enum e_async_completion c_autosave_queue_enumerate_async::start_finding_files(class c_synchronized_int32*);
// private: void c_autosave_queue_enumerate_async::switch_state(enum c_autosave_queue_enumerate_async::e_state);
// private: enum e_async_completion c_autosave_queue_enumerate_async::find_next_file(class c_synchronized_int32*);
// public: void c_saved_game_file_load_metadata_async::reset(void);
// private: enum e_async_completion c_autosave_queue_enumerate_async::read_metadata(class c_synchronized_int32*);
// private: enum e_async_completion c_autosave_queue_enumerate_async::finish_finding_files(class c_synchronized_int32*);
// bool item_compare_sort_by_file_modification_date(void const *, void const *, void const *);
// bool item_compare_sort_by_metadata_display_name(void const *, void const *, void const *);
// class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>(class c_autosave_queue_enumerate_async *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *);
// public: s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>(class c_autosave_queue_enumerate_async *);
// public: c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_completion> *, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_completion c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_completion s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*);

//void autosave_queue_sort_items_by_file_modification_date(struct s_autosave_queue_item *, struct s_autosave_queue_item *)
//{
//    mangled_ppc("?autosave_queue_sort_items_by_file_modification_date@@YAXPAUs_autosave_queue_item@@0@Z");
//};

//void autosave_queue_sort_items_by_metadata_display_name(struct s_autosave_queue_item *, struct s_autosave_queue_item *)
//{
//    mangled_ppc("?autosave_queue_sort_items_by_metadata_display_name@@YAXPAUs_autosave_queue_item@@0@Z");
//};

//public: static bool c_autosave_queue_enumerate_async::submit(class c_autosave_queue_enumerate_async *, class c_synchronized_int32*, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("?submit@c_autosave_queue_enumerate_async@@SA_NPAV1@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: c_autosave_queue_enumerate_async::c_autosave_queue_enumerate_async(enum e_content_item_type, struct s_autosave_queue_item *, unsigned int, unsigned int *)
//{
//    mangled_ppc("??0c_autosave_queue_enumerate_async@@QAA@W4e_content_item_type@@PAUs_autosave_queue_item@@IPAI@Z");
//};

//public: enum e_async_completion c_autosave_queue_enumerate_async::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_autosave_queue_enumerate_async@@QAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_completion c_autosave_queue_enumerate_async::start_finding_files(class c_synchronized_int32*)
//{
//    mangled_ppc("?start_finding_files@c_autosave_queue_enumerate_async@@AAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_autosave_queue_enumerate_async::switch_state(enum c_autosave_queue_enumerate_async::e_state)
//{
//    mangled_ppc("?switch_state@c_autosave_queue_enumerate_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_completion c_autosave_queue_enumerate_async::find_next_file(class c_synchronized_int32*)
//{
//    mangled_ppc("?find_next_file@c_autosave_queue_enumerate_async@@AAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

//public: void c_saved_game_file_load_metadata_async::reset(void)
//{
//    mangled_ppc("?reset@c_saved_game_file_load_metadata_async@@QAAXXZ");
//};

//private: enum e_async_completion c_autosave_queue_enumerate_async::read_metadata(class c_synchronized_int32*)
//{
//    mangled_ppc("?read_metadata@c_autosave_queue_enumerate_async@@AAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_completion c_autosave_queue_enumerate_async::finish_finding_files(class c_synchronized_int32*)
//{
//    mangled_ppc("?finish_finding_files@c_autosave_queue_enumerate_async@@AAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

//bool item_compare_sort_by_file_modification_date(void const *, void const *, void const *)
//{
//    mangled_ppc("?item_compare_sort_by_file_modification_date@@YA_NPBX00@Z");
//};

//bool item_compare_sort_by_metadata_display_name(void const *, void const *, void const *)
//{
//    mangled_ppc("?item_compare_sort_by_metadata_display_name@@YA_NPBX00@Z");
//};

//class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>(class c_autosave_queue_enumerate_async *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@PAVc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>(class c_autosave_queue_enumerate_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@QAA@PAVc_autosave_queue_enumerate_async@@@Z");
//};

//public: c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$submit@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_completion> *, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_completion@@@@ABV?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_completion c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_completion@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function1<enum e_async_completion, struct s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function1@W4e_async_completion@@U?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_completion s_async_indirect_function1<class c_autosave_queue_enumerate_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function1@Vc_autosave_queue_enumerate_async@@PAVc_synchronized_int32@@@@QAA?AW4e_async_completion@@PAVc_synchronized_int32@@@Z");
//};

