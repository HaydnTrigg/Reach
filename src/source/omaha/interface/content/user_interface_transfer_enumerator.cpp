/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_key::c_key(class c_online_file_transfer const *);
// public: c_key::c_key(char const *);
// public: c_key::c_key(struct s_content_item_platform_handle const *);
// public: c_key::c_key(struct s_online_file_metadata const *);
// public: long c_key::compare(class c_key const &) const;
// public: static bool c_ui_transfer_enumerator::c_enumerate_async::submit(class c_ui_transfer_enumerator::c_enumerate_async *, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*, class c_async_task<enum e_async_completion> *);
// public: void c_ui_transfer_enumerator::c_enumerate_async::reset(struct s_file_reference const *);
// public: enum e_async_completion c_ui_transfer_enumerator::c_enumerate_async::operator()(class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*);
// public: c_ui_transfer_enumerator::c_ui_transfer_enumerator(void);
// public: c_ui_transfer_enumerator::c_ui_transfer_enumerator(class c_ui_transfer_enumerator const &);
// public: c_ui_transfer_enumerator::~c_ui_transfer_enumerator(void);
// public: void c_ui_transfer_enumerator::set_controller_index(enum e_controller_index);
// public: bool c_ui_transfer_enumerator::update(void);
// public: void c_online_file_transfer::set_status_pending(void);
// public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_filename(char const *) const;
// public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_content_item_platform_handle(struct s_content_item_platform_handle const *) const;
// public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_online_file_metadata(struct s_online_file_metadata const *) const;
// void sort_transfers_by_importance(class c_online_file_transfer *, class c_online_file_transfer *);
// bool compare_transfers_sort_by_importance(void const *, void const *, void const *);
// void sort_transfer_ptrs_by_key(class c_online_file_transfer const **, class c_online_file_transfer const **);
// bool compare_transfer_ptrs_sort_by_key(void const *, void const *, void const *);
// class c_online_file_transfer const *const * find_transfer_ptr_by_content_item_platform_handle(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, struct s_content_item_platform_handle const *);
// long compare_transfer_ptr_search_by_content_item_platform_handle(void const *, void const *, void const *);
// class c_online_file_transfer const *const * find_transfer_ptr_by_online_file_metadata(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, struct s_online_file_metadata const *);
// long compare_transfer_ptr_search_by_online_file_metadata(void const *, void const *, void const *);
// class c_online_file_transfer const *const * find_transfer_ptr_by_filename(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, char const *);
// long compare_transfer_ptr_search_by_filename(void const *, void const *, void const *);
// public: bool c_cui_static_vector<class c_online_file_transfer, 16>::full(void) const;
// public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::begin(void);
// public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::end(void);
// public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::begin(void);
// public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::begin(void) const;
// public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::end(void);
// public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::end(void) const;
// public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::data(void);
// public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::data(void);
// public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::data(void) const;
// public: unsigned int c_cui_static_vector<class c_online_file_transfer const *, 16>::size(void) const;
// public: c_cui_static_vector<class c_online_file_transfer, 16>::c_cui_static_vector<class c_online_file_transfer, 16>(class c_cui_static_vector<class c_online_file_transfer, 16> const &);
// public: c_cui_static_vector<class c_online_file_transfer, 16>::c_cui_static_vector<class c_online_file_transfer, 16>(void);
// public: c_cui_static_vector<class c_online_file_transfer, 16>::~c_cui_static_vector<class c_online_file_transfer, 16>(void);
// public: class c_cui_static_vector<class c_online_file_transfer, 16> & c_cui_static_vector<class c_online_file_transfer, 16>::operator=(class c_cui_static_vector<class c_online_file_transfer, 16> const &);
// public: void c_cui_static_vector<class c_online_file_transfer, 16>::push_back(class c_online_file_transfer const &);
// public: void c_cui_static_vector<class c_online_file_transfer, 16>::clear(void);
// public: c_cui_static_vector<class c_online_file_transfer const *, 16>::c_cui_static_vector<class c_online_file_transfer const *, 16>(class c_cui_static_vector<class c_online_file_transfer const *, 16> const &);
// public: c_cui_static_vector<class c_online_file_transfer const *, 16>::c_cui_static_vector<class c_online_file_transfer const *, 16>(void);
// public: c_cui_static_vector<class c_online_file_transfer const *, 16>::~c_cui_static_vector<class c_online_file_transfer const *, 16>(void);
// public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::push_back(class c_online_file_transfer const *const &);
// public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::clear(void);
// class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> async_function_make<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(class c_ui_transfer_enumerator::c_enumerate_async *, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *);
// public: bool c_cui_static_vector<class c_online_file_transfer, 16>::empty(void) const;
// public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::begin(void) const;
// public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::end(void) const;
// public: class c_online_file_transfer & c_cui_static_vector<class c_online_file_transfer, 16>::at(unsigned int);
// private: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::get(unsigned int);
// public: bool c_cui_static_vector<class c_online_file_transfer const *, 16>::empty(void) const;
// public: bool c_cui_static_vector<class c_online_file_transfer const *, 16>::full(void) const;
// private: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::get(unsigned int);
// public: s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(class c_ui_transfer_enumerator::c_enumerate_async *);
// public: void c_cui_static_vector<class c_online_file_transfer, 16>::pop_back(void);
// public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::pop_back(void);
// public: c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_task<enum e_async_completion> *, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_completion c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_completion s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::operator()(class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*);

//public: c_key::c_key(class c_online_file_transfer const *)
//{
//    mangled_ppc("??0c_key@@QAA@PBVc_online_file_transfer@@@Z");
//};

//public: c_key::c_key(char const *)
//{
//    mangled_ppc("??0c_key@@QAA@PBD@Z");
//};

//public: c_key::c_key(struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("??0c_key@@QAA@PBUs_content_item_platform_handle@@@Z");
//};

//public: c_key::c_key(struct s_online_file_metadata const *)
//{
//    mangled_ppc("??0c_key@@QAA@PBUs_online_file_metadata@@@Z");
//};

//public: long c_key::compare(class c_key const &) const
//{
//    mangled_ppc("?compare@c_key@@QBAJABV1@@Z");
//};

//public: static bool c_ui_transfer_enumerator::c_enumerate_async::submit(class c_ui_transfer_enumerator::c_enumerate_async *, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("?submit@c_enumerate_async@c_ui_transfer_enumerator@@SA_NPAV12@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: void c_ui_transfer_enumerator::c_enumerate_async::reset(struct s_file_reference const *)
//{
//    mangled_ppc("?reset@c_enumerate_async@c_ui_transfer_enumerator@@QAAXPBUs_file_reference@@@Z");
//};

//public: enum e_async_completion c_ui_transfer_enumerator::c_enumerate_async::operator()(class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_enumerate_async@c_ui_transfer_enumerator@@QAA?AW4e_async_completion@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@Z");
//};

//public: c_ui_transfer_enumerator::c_ui_transfer_enumerator(void)
//{
//    mangled_ppc("??0c_ui_transfer_enumerator@@QAA@XZ");
//};

//public: c_ui_transfer_enumerator::c_ui_transfer_enumerator(class c_ui_transfer_enumerator const &)
//{
//    mangled_ppc("??0c_ui_transfer_enumerator@@QAA@ABV0@@Z");
//};

//public: c_ui_transfer_enumerator::~c_ui_transfer_enumerator(void)
//{
//    mangled_ppc("??1c_ui_transfer_enumerator@@QAA@XZ");
//};

//public: void c_ui_transfer_enumerator::set_controller_index(enum e_controller_index)
//{
//    mangled_ppc("?set_controller_index@c_ui_transfer_enumerator@@QAAXW4e_controller_index@@@Z");
//};

//public: bool c_ui_transfer_enumerator::update(void)
//{
//    mangled_ppc("?update@c_ui_transfer_enumerator@@QAA_NXZ");
//};

//public: void c_online_file_transfer::set_status_pending(void)
//{
//    mangled_ppc("?set_status_pending@c_online_file_transfer@@QAAXXZ");
//};

//public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_filename(char const *) const
//{
//    mangled_ppc("?get_by_filename@c_ui_transfer_enumerator@@QBAPBVc_online_file_transfer@@PBD@Z");
//};

//public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_content_item_platform_handle(struct s_content_item_platform_handle const *) const
//{
//    mangled_ppc("?get_by_content_item_platform_handle@c_ui_transfer_enumerator@@QBAPBVc_online_file_transfer@@PBUs_content_item_platform_handle@@@Z");
//};

//public: class c_online_file_transfer const * c_ui_transfer_enumerator::get_by_online_file_metadata(struct s_online_file_metadata const *) const
//{
//    mangled_ppc("?get_by_online_file_metadata@c_ui_transfer_enumerator@@QBAPBVc_online_file_transfer@@PBUs_online_file_metadata@@@Z");
//};

//void sort_transfers_by_importance(class c_online_file_transfer *, class c_online_file_transfer *)
//{
//    mangled_ppc("?sort_transfers_by_importance@@YAXPAVc_online_file_transfer@@0@Z");
//};

//bool compare_transfers_sort_by_importance(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_transfers_sort_by_importance@@YA_NPBX00@Z");
//};

//void sort_transfer_ptrs_by_key(class c_online_file_transfer const **, class c_online_file_transfer const **)
//{
//    mangled_ppc("?sort_transfer_ptrs_by_key@@YAXPAPBVc_online_file_transfer@@0@Z");
//};

//bool compare_transfer_ptrs_sort_by_key(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_transfer_ptrs_sort_by_key@@YA_NPBX00@Z");
//};

//class c_online_file_transfer const *const * find_transfer_ptr_by_content_item_platform_handle(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?find_transfer_ptr_by_content_item_platform_handle@@YAPBQBVc_online_file_transfer@@PBQBV1@0PBUs_content_item_platform_handle@@@Z");
//};

//long compare_transfer_ptr_search_by_content_item_platform_handle(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_transfer_ptr_search_by_content_item_platform_handle@@YAJPBX00@Z");
//};

//class c_online_file_transfer const *const * find_transfer_ptr_by_online_file_metadata(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, struct s_online_file_metadata const *)
//{
//    mangled_ppc("?find_transfer_ptr_by_online_file_metadata@@YAPBQBVc_online_file_transfer@@PBQBV1@0PBUs_online_file_metadata@@@Z");
//};

//long compare_transfer_ptr_search_by_online_file_metadata(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_transfer_ptr_search_by_online_file_metadata@@YAJPBX00@Z");
//};

//class c_online_file_transfer const *const * find_transfer_ptr_by_filename(class c_online_file_transfer const *const *, class c_online_file_transfer const *const *, char const *)
//{
//    mangled_ppc("?find_transfer_ptr_by_filename@@YAPBQBVc_online_file_transfer@@PBQBV1@0PBD@Z");
//};

//long compare_transfer_ptr_search_by_filename(void const *, void const *, void const *)
//{
//    mangled_ppc("?compare_transfer_ptr_search_by_filename@@YAJPBX00@Z");
//};

//public: bool c_cui_static_vector<class c_online_file_transfer, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBA_NXZ");
//};

//public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAPAVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAPAVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAPAPBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBAPBQBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAPAPBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBAPBQBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAPAVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAPAPBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const *const * c_cui_static_vector<class c_online_file_transfer const *, 16>::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBAPBQBVc_online_file_transfer@@XZ");
//};

//public: unsigned int c_cui_static_vector<class c_online_file_transfer const *, 16>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBAIXZ");
//};

//public: c_cui_static_vector<class c_online_file_transfer, 16>::c_cui_static_vector<class c_online_file_transfer, 16>(class c_cui_static_vector<class c_online_file_transfer, 16> const &)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAA@ABV0@@Z");
//};

//public: c_cui_static_vector<class c_online_file_transfer, 16>::c_cui_static_vector<class c_online_file_transfer, 16>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_online_file_transfer, 16>::~c_cui_static_vector<class c_online_file_transfer, 16>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAA@XZ");
//};

//public: class c_cui_static_vector<class c_online_file_transfer, 16> & c_cui_static_vector<class c_online_file_transfer, 16>::operator=(class c_cui_static_vector<class c_online_file_transfer, 16> const &)
//{
//    mangled_ppc("??4?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_cui_static_vector<class c_online_file_transfer, 16>::push_back(class c_online_file_transfer const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAXABVc_online_file_transfer@@@Z");
//};

//public: void c_cui_static_vector<class c_online_file_transfer, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAXXZ");
//};

//public: c_cui_static_vector<class c_online_file_transfer const *, 16>::c_cui_static_vector<class c_online_file_transfer const *, 16>(class c_cui_static_vector<class c_online_file_transfer const *, 16> const &)
//{
//    mangled_ppc("??0?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAA@ABV0@@Z");
//};

//public: c_cui_static_vector<class c_online_file_transfer const *, 16>::c_cui_static_vector<class c_online_file_transfer const *, 16>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_online_file_transfer const *, 16>::~c_cui_static_vector<class c_online_file_transfer const *, 16>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAA@XZ");
//};

//public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::push_back(class c_online_file_transfer const *const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAXABQBVc_online_file_transfer@@@Z");
//};

//public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAXXZ");
//};

//class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> async_function_make<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(class c_ui_transfer_enumerator::c_enumerate_async *, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAVc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: bool c_cui_static_vector<class c_online_file_transfer, 16>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBA_NXZ");
//};

//public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBAPBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer const * c_cui_static_vector<class c_online_file_transfer, 16>::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QBAPBVc_online_file_transfer@@XZ");
//};

//public: class c_online_file_transfer & c_cui_static_vector<class c_online_file_transfer, 16>::at(unsigned int)
//{
//    mangled_ppc("?at@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAAAVc_online_file_transfer@@I@Z");
//};

//private: class c_online_file_transfer * c_cui_static_vector<class c_online_file_transfer, 16>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@AAAPAVc_online_file_transfer@@I@Z");
//};

//public: bool c_cui_static_vector<class c_online_file_transfer const *, 16>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBA_NXZ");
//};

//public: bool c_cui_static_vector<class c_online_file_transfer const *, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QBA_NXZ");
//};

//private: class c_online_file_transfer const ** c_cui_static_vector<class c_online_file_transfer const *, 16>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@AAAPAPBVc_online_file_transfer@@I@Z");
//};

//public: s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(class c_ui_transfer_enumerator::c_enumerate_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@QAA@PAVc_enumerate_async@c_ui_transfer_enumerator@@@Z");
//};

//public: void c_cui_static_vector<class c_online_file_transfer, 16>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@QAAXXZ");
//};

//public: void c_cui_static_vector<class c_online_file_transfer const *, 16>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@PBVc_online_file_transfer@@$0BA@@@QAAXXZ");
//};

//public: c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_completion> *)
//{
//    mangled_ppc("??$submit@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_completion@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> >(class c_async_task<enum e_async_completion> *, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_completion@@@@ABV?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_completion c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_completion@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_completion, class c_async_function2<enum e_async_completion, struct s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_completion@@V?$c_async_function2@W4e_async_completion@@U?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_completion s_async_indirect_function2<class c_ui_transfer_enumerator::c_enumerate_async, class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*>::operator()(class c_cui_static_vector<class c_online_file_transfer, 16> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function2@Vc_enumerate_async@c_ui_transfer_enumerator@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_completion@@PAV?$c_cui_static_vector@Vc_online_file_transfer@@$0BA@@@PAVc_synchronized_int32@@@Z");
//};

