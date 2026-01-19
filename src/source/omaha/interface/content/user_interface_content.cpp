/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static void c_ui_content_task_detail::release(class c_ui_content_task_detail *);
// public: bool c_ui_content_task_detail::in_progress(void) const;
// public: bool c_ui_content_task_detail::is_complete(void) const;
// public: c_ui_content_globals::~c_ui_content_globals(void);
// public: void c_ui_content_task_detail::block_until_complete(void) const;
// public: c_ui_content_cache::~c_ui_content_cache(void);
// public: void c_ui_content_globals::adopt_task(class c_ui_content_task_detail *);
// private: void c_ui_content_globals::update_orphan_tasks(void);
// public: class c_ui_content_task_detail * c_ui_content_task_detail::get_next(void) const;
// public: void c_ui_content_globals::update(void);
// public: void c_ui_content_globals::add_change_listener(class c_ui_content_change_listener *);
// public: void c_ui_content_globals::remove_change_listener(class c_ui_content_change_listener *);
// public: void c_ui_content_globals::broadcast_addition_change(enum e_controller_index, struct s_content_enumeration_result const &);
// public: bool c_ui_content_cache::is_busy(void) const;
// public: bool c_ui_content_cache::is_ready(void) const;
// public: class c_ui_content_change_listener * c_ui_content_change_listener::get_next(void) const;
// public: void c_ui_content_globals::broadcast_deletion_change(enum e_controller_index, struct s_content_enumeration_result const &);
// public: void c_ui_content_globals::broadcast_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &);
// void user_interface_content_initialize(void);
// void user_interface_content_dispose(void);
// void user_interface_content_initialize_for_new_map(void);
// void user_interface_content_dispose_from_old_map(void);
// void user_interface_content_update(void);
// public: c_ui_content_cache::c_ui_content_cache(void);
// public: void c_ui_content_cache::set_controller_index(enum e_controller_index);
// public: bool c_ui_content_cache::is_owner_valid(void) const;
// public: bool c_ui_content_cache::is_owner(enum e_controller_index) const;
// public: void c_ui_content_cache::resize(unsigned int);
// public: void c_ui_content_cache::invalidate(void);
// public: bool c_ui_content_cache::add(struct s_content_enumeration_result const &);
// public: void c_ui_content_cache::remove(struct s_content_enumeration_result const &);
// public: void c_ui_content_cache::set_busy(void);
// public: void c_ui_content_cache::set_ready(void);
// public: c_ui_content_change_listener::c_ui_content_change_listener(void);
// merged_84987198;
// public: c_ui_content_change_listener::c_ui_content_change_listener(class c_ui_content_change_listener const &);
// public: virtual c_ui_content_change_listener::~c_ui_content_change_listener(void);
// public: virtual void c_ui_content_change_listener::handle_addition(enum e_controller_index, struct s_content_enumeration_result const &);
// public: virtual void c_ui_content_change_listener::handle_deletion(enum e_controller_index, struct s_content_enumeration_result const &);
// public: virtual void c_ui_content_change_listener::handle_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &);
// class c_ui_content_cache * user_interface_content_acquire_cache(void);
// public: long c_ui_content_cache::get_reference_count(void) const;
// public: class c_ui_content_cache & c_ui_content_globals::get_cache(void);
// void user_interface_content_invalidate_cache(enum e_controller_index);
// public: enum e_controller_index c_ui_content_cache::get_controller_index(void) const;
// void user_interface_content_broadcast_addition_change(enum e_controller_index, struct s_content_enumeration_result const &);
// void user_interface_content_broadcast_deletion_change(enum e_controller_index, struct s_content_enumeration_result const &);
// void user_interface_content_broadcast_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &);
// void test_user_interface_content_resize_cache(long);
// void add_change_listener(class c_ui_content_change_listener *);
// void remove_change_listener(class c_ui_content_change_listener *);
// public: unsigned int c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::capacity(void) const;
// public: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::empty(void) const;
// public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::begin(void);
// public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::end(void);
// public: class c_ui_content_task_detail * c_cui_list<class c_ui_content_task_detail>::get_head(void) const;
// public: class c_ui_content_change_listener * c_cui_list<class c_ui_content_change_listener>::get_head(void) const;
// public: long c_cui_list<class c_ui_content_change_listener>::get_size(void) const;
// public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::construct(void);
// public: c_ui_content_globals::c_ui_content_globals(void);
// public: c_cui_list<class c_ui_content_task_detail>::c_cui_list<class c_ui_content_task_detail>(void);
// public: c_cui_list<class c_ui_content_change_listener>::c_cui_list<class c_ui_content_change_listener>(void);
// public: void c_typed_opaque_data<class c_ui_content_globals, 60, 4>::destruct(void);
// public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::get(void);
// public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::try_and_get(void);
// public: void * c_ui_content_globals::`scalar deleting destructor'(unsigned int);
// public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::data(void);
// public: unsigned int c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::size(void) const;
// public: bool c_typed_opaque_data<class c_ui_content_globals, 60, 4>::alive(void) const;
// public: c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(unsigned int, class c_cui_dynamic_allocator<struct s_content_enumeration_result> const &);
// public: c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::~c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(void);
// public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::erase(struct s_content_enumeration_result const *);
// public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::swap(class c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> > &);
// public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::clear(void);
// public: void c_cui_list<class c_ui_content_task_detail>::append(class c_ui_content_task_detail *);
// public: void c_cui_list<class c_ui_content_task_detail>::remove(class c_ui_content_task_detail *);
// public: void c_cui_list<class c_ui_content_change_listener>::append(class c_ui_content_change_listener *);
// public: void c_cui_list<class c_ui_content_change_listener>::remove(class c_ui_content_change_listener *);
// public: class c_ui_content_globals * c_opaque_data<class c_ui_content_globals, 60, 4>::get(void);
// void ui_track_delete<class c_ui_content_task_detail>(class c_ui_content_task_detail *);
// bool cui_vector_push_back<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(class c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> > &, struct s_content_enumeration_result const &);
// public: void * c_ui_content_task_detail::`scalar deleting destructor'(unsigned int);
// public: c_ui_content_task_detail::~c_ui_content_task_detail(void);
// public: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::full(void) const;
// private: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::position_valid(struct s_content_enumeration_result const *) const;
// public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::begin(void) const;
// public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::end(void) const;
// public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::data(void) const;
// public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::reserve(unsigned int);
// public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::push_back(struct s_content_enumeration_result const &);
// public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::pop_back(void);
// private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::collapse(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *);
// public: void c_cui_dynamic_allocator<struct s_content_enumeration_result>::deallocate(struct s_content_enumeration_result *, unsigned int);
// void cui_swap<class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(class c_cui_dynamic_allocator<struct s_content_enumeration_result> &, class c_cui_dynamic_allocator<struct s_content_enumeration_result> &);
// void cui_swap<struct s_content_enumeration_result *>(struct s_content_enumeration_result *&, struct s_content_enumeration_result *&);
// void cui_swap<unsigned int>(unsigned int &, unsigned int &);
// public: bool c_cui_list<class c_ui_content_task_detail>::contains(class c_ui_content_task_detail const *) const;
// public: bool c_cui_list<class c_ui_content_change_listener>::contains(class c_ui_content_change_listener const *) const;
// private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::get(unsigned int);
// private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::get_mutable_iterator(struct s_content_enumeration_result const *);
// public: struct s_content_enumeration_result * c_cui_dynamic_allocator<struct s_content_enumeration_result>::allocate(unsigned int);
// public: c_typed_opaque_data<class c_ui_content_globals, 60, 4>::c_typed_opaque_data<class c_ui_content_globals, 60, 4>(void);
// public: c_typed_opaque_data<class c_ui_content_globals, 60, 4>::~c_typed_opaque_data<class c_ui_content_globals, 60, 4>(void);
// void g_ui_content_globals::`dynamic atexit destructor'(void);

//private: static void c_ui_content_task_detail::release(class c_ui_content_task_detail *)
//{
//    mangled_ppc("?release@c_ui_content_task_detail@@CAXPAV1@@Z");
//};

//public: bool c_ui_content_task_detail::in_progress(void) const
//{
//    mangled_ppc("?in_progress@c_ui_content_task_detail@@QBA_NXZ");
//};

//public: bool c_ui_content_task_detail::is_complete(void) const
//{
//    mangled_ppc("?is_complete@c_ui_content_task_detail@@QBA_NXZ");
//};

//public: c_ui_content_globals::~c_ui_content_globals(void)
//{
//    mangled_ppc("??1c_ui_content_globals@@QAA@XZ");
//};

//public: void c_ui_content_task_detail::block_until_complete(void) const
//{
//    mangled_ppc("?block_until_complete@c_ui_content_task_detail@@QBAXXZ");
//};

//public: c_ui_content_cache::~c_ui_content_cache(void)
//{
//    mangled_ppc("??1c_ui_content_cache@@QAA@XZ");
//};

//public: void c_ui_content_globals::adopt_task(class c_ui_content_task_detail *)
//{
//    mangled_ppc("?adopt_task@c_ui_content_globals@@QAAXPAVc_ui_content_task_detail@@@Z");
//};

//private: void c_ui_content_globals::update_orphan_tasks(void)
//{
//    mangled_ppc("?update_orphan_tasks@c_ui_content_globals@@AAAXXZ");
//};

//public: class c_ui_content_task_detail * c_ui_content_task_detail::get_next(void) const
//{
//    mangled_ppc("?get_next@c_ui_content_task_detail@@QBAPAV1@XZ");
//};

//public: void c_ui_content_globals::update(void)
//{
//    mangled_ppc("?update@c_ui_content_globals@@QAAXXZ");
//};

//public: void c_ui_content_globals::add_change_listener(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?add_change_listener@c_ui_content_globals@@QAAXPAVc_ui_content_change_listener@@@Z");
//};

//public: void c_ui_content_globals::remove_change_listener(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?remove_change_listener@c_ui_content_globals@@QAAXPAVc_ui_content_change_listener@@@Z");
//};

//public: void c_ui_content_globals::broadcast_addition_change(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?broadcast_addition_change@c_ui_content_globals@@QAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: bool c_ui_content_cache::is_busy(void) const
//{
//    mangled_ppc("?is_busy@c_ui_content_cache@@QBA_NXZ");
//};

//public: bool c_ui_content_cache::is_ready(void) const
//{
//    mangled_ppc("?is_ready@c_ui_content_cache@@QBA_NXZ");
//};

//public: class c_ui_content_change_listener * c_ui_content_change_listener::get_next(void) const
//{
//    mangled_ppc("?get_next@c_ui_content_change_listener@@QBAPAV1@XZ");
//};

//public: void c_ui_content_globals::broadcast_deletion_change(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?broadcast_deletion_change@c_ui_content_globals@@QAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: void c_ui_content_globals::broadcast_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &)
//{
//    mangled_ppc("?broadcast_metadata_change@c_ui_content_globals@@QAAXW4e_controller_index@@ABUs_content_item_platform_handle@@ABUs_content_item_metadata@@@Z");
//};

//void user_interface_content_initialize(void)
//{
//    mangled_ppc("?user_interface_content_initialize@@YAXXZ");
//};

//void user_interface_content_dispose(void)
//{
//    mangled_ppc("?user_interface_content_dispose@@YAXXZ");
//};

//void user_interface_content_initialize_for_new_map(void)
//{
//    mangled_ppc("?user_interface_content_initialize_for_new_map@@YAXXZ");
//};

//void user_interface_content_dispose_from_old_map(void)
//{
//    mangled_ppc("?user_interface_content_dispose_from_old_map@@YAXXZ");
//};

//void user_interface_content_update(void)
//{
//    mangled_ppc("?user_interface_content_update@@YAXXZ");
//};

//public: c_ui_content_cache::c_ui_content_cache(void)
//{
//    mangled_ppc("??0c_ui_content_cache@@QAA@XZ");
//};

//public: void c_ui_content_cache::set_controller_index(enum e_controller_index)
//{
//    mangled_ppc("?set_controller_index@c_ui_content_cache@@QAAXW4e_controller_index@@@Z");
//};

//public: bool c_ui_content_cache::is_owner_valid(void) const
//{
//    mangled_ppc("?is_owner_valid@c_ui_content_cache@@QBA_NXZ");
//};

//public: bool c_ui_content_cache::is_owner(enum e_controller_index) const
//{
//    mangled_ppc("?is_owner@c_ui_content_cache@@QBA_NW4e_controller_index@@@Z");
//};

//public: void c_ui_content_cache::resize(unsigned int)
//{
//    mangled_ppc("?resize@c_ui_content_cache@@QAAXI@Z");
//};

//public: void c_ui_content_cache::invalidate(void)
//{
//    mangled_ppc("?invalidate@c_ui_content_cache@@QAAXXZ");
//};

//public: bool c_ui_content_cache::add(struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?add@c_ui_content_cache@@QAA_NABUs_content_enumeration_result@@@Z");
//};

//public: void c_ui_content_cache::remove(struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?remove@c_ui_content_cache@@QAAXABUs_content_enumeration_result@@@Z");
//};

//public: void c_ui_content_cache::set_busy(void)
//{
//    mangled_ppc("?set_busy@c_ui_content_cache@@QAAXXZ");
//};

//public: void c_ui_content_cache::set_ready(void)
//{
//    mangled_ppc("?set_ready@c_ui_content_cache@@QAAXXZ");
//};

//public: c_ui_content_change_listener::c_ui_content_change_listener(void)
//{
//    mangled_ppc("??0c_ui_content_change_listener@@QAA@XZ");
//};

//merged_84987198
//{
//    mangled_ppc("merged_84987198");
//};

//public: c_ui_content_change_listener::c_ui_content_change_listener(class c_ui_content_change_listener const &)
//{
//    mangled_ppc("??0c_ui_content_change_listener@@QAA@ABV0@@Z");
//};

//public: virtual c_ui_content_change_listener::~c_ui_content_change_listener(void)
//{
//    mangled_ppc("??1c_ui_content_change_listener@@UAA@XZ");
//};

//public: virtual void c_ui_content_change_listener::handle_addition(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_addition@c_ui_content_change_listener@@UAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: virtual void c_ui_content_change_listener::handle_deletion(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?handle_deletion@c_ui_content_change_listener@@UAAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//public: virtual void c_ui_content_change_listener::handle_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &)
//{
//    mangled_ppc("?handle_metadata_change@c_ui_content_change_listener@@UAAXW4e_controller_index@@ABUs_content_item_platform_handle@@ABUs_content_item_metadata@@@Z");
//};

//class c_ui_content_cache * user_interface_content_acquire_cache(void)
//{
//    mangled_ppc("?user_interface_content_acquire_cache@@YAPAVc_ui_content_cache@@XZ");
//};

//public: long c_ui_content_cache::get_reference_count(void) const
//{
//    mangled_ppc("?get_reference_count@c_ui_content_cache@@QBAJXZ");
//};

//public: class c_ui_content_cache & c_ui_content_globals::get_cache(void)
//{
//    mangled_ppc("?get_cache@c_ui_content_globals@@QAAAAVc_ui_content_cache@@XZ");
//};

//void user_interface_content_invalidate_cache(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_content_invalidate_cache@@YAXW4e_controller_index@@@Z");
//};

//public: enum e_controller_index c_ui_content_cache::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_ui_content_cache@@QBA?AW4e_controller_index@@XZ");
//};

//void user_interface_content_broadcast_addition_change(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?user_interface_content_broadcast_addition_change@@YAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//void user_interface_content_broadcast_deletion_change(enum e_controller_index, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?user_interface_content_broadcast_deletion_change@@YAXW4e_controller_index@@ABUs_content_enumeration_result@@@Z");
//};

//void user_interface_content_broadcast_metadata_change(enum e_controller_index, struct s_content_item_platform_handle const &, struct s_content_item_metadata const &)
//{
//    mangled_ppc("?user_interface_content_broadcast_metadata_change@@YAXW4e_controller_index@@ABUs_content_item_platform_handle@@ABUs_content_item_metadata@@@Z");
//};

//void test_user_interface_content_resize_cache(long)
//{
//    mangled_ppc("?test_user_interface_content_resize_cache@@YAXJ@Z");
//};

//void add_change_listener(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?add_change_listener@@YAXPAVc_ui_content_change_listener@@@Z");
//};

//void remove_change_listener(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?remove_change_listener@@YAXPAVc_ui_content_change_listener@@@Z");
//};

//public: unsigned int c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::capacity(void) const
//{
//    mangled_ppc("?capacity@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBAIXZ");
//};

//public: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBA_NXZ");
//};

//public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::end(void)
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: class c_ui_content_task_detail * c_cui_list<class c_ui_content_task_detail>::get_head(void) const
//{
//    mangled_ppc("?get_head@?$c_cui_list@Vc_ui_content_task_detail@@@@QBAPAVc_ui_content_task_detail@@XZ");
//};

//public: class c_ui_content_change_listener * c_cui_list<class c_ui_content_change_listener>::get_head(void) const
//{
//    mangled_ppc("?get_head@?$c_cui_list@Vc_ui_content_change_listener@@@@QBAPAVc_ui_content_change_listener@@XZ");
//};

//public: long c_cui_list<class c_ui_content_change_listener>::get_size(void) const
//{
//    mangled_ppc("?get_size@?$c_cui_list@Vc_ui_content_change_listener@@@@QBAJXZ");
//};

//public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAAPAVc_ui_content_globals@@XZ");
//};

//public: c_ui_content_globals::c_ui_content_globals(void)
//{
//    mangled_ppc("??0c_ui_content_globals@@QAA@XZ");
//};

//public: c_cui_list<class c_ui_content_task_detail>::c_cui_list<class c_ui_content_task_detail>(void)
//{
//    mangled_ppc("??0?$c_cui_list@Vc_ui_content_task_detail@@@@QAA@XZ");
//};

//public: c_cui_list<class c_ui_content_change_listener>::c_cui_list<class c_ui_content_change_listener>(void)
//{
//    mangled_ppc("??0?$c_cui_list@Vc_ui_content_change_listener@@@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_ui_content_globals, 60, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAAXXZ");
//};

//public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAAPAVc_ui_content_globals@@XZ");
//};

//public: class c_ui_content_globals * c_typed_opaque_data<class c_ui_content_globals, 60, 4>::try_and_get(void)
//{
//    mangled_ppc("?try_and_get@?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAAPAVc_ui_content_globals@@XZ");
//};

//public: void * c_ui_content_globals::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_ui_content_globals@@QAAPAXI@Z");
//};

//public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::data(void)
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAPAUs_content_enumeration_result@@XZ");
//};

//public: unsigned int c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBAIXZ");
//};

//public: bool c_typed_opaque_data<class c_ui_content_globals, 60, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QBA_NXZ");
//};

//public: c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(unsigned int, class c_cui_dynamic_allocator<struct s_content_enumeration_result> const &)
//{
//    mangled_ppc("??0?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAA@IABV?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@Z");
//};

//public: c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::~c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(void)
//{
//    mangled_ppc("??1?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAA@XZ");
//};

//public: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::erase(struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?erase@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAPAUs_content_enumeration_result@@PBU2@@Z");
//};

//public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::swap(class c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> > &)
//{
//    mangled_ppc("?swap@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAXAAV1@@Z");
//};

//public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAXXZ");
//};

//public: void c_cui_list<class c_ui_content_task_detail>::append(class c_ui_content_task_detail *)
//{
//    mangled_ppc("?append@?$c_cui_list@Vc_ui_content_task_detail@@@@QAAXPAVc_ui_content_task_detail@@@Z");
//};

//public: void c_cui_list<class c_ui_content_task_detail>::remove(class c_ui_content_task_detail *)
//{
//    mangled_ppc("?remove@?$c_cui_list@Vc_ui_content_task_detail@@@@QAAXPAVc_ui_content_task_detail@@@Z");
//};

//public: void c_cui_list<class c_ui_content_change_listener>::append(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?append@?$c_cui_list@Vc_ui_content_change_listener@@@@QAAXPAVc_ui_content_change_listener@@@Z");
//};

//public: void c_cui_list<class c_ui_content_change_listener>::remove(class c_ui_content_change_listener *)
//{
//    mangled_ppc("?remove@?$c_cui_list@Vc_ui_content_change_listener@@@@QAAXPAVc_ui_content_change_listener@@@Z");
//};

//public: class c_ui_content_globals * c_opaque_data<class c_ui_content_globals, 60, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAAPAVc_ui_content_globals@@XZ");
//};

//void ui_track_delete<class c_ui_content_task_detail>(class c_ui_content_task_detail *)
//{
//    mangled_ppc("??$ui_track_delete@Vc_ui_content_task_detail@@@@YAXPAVc_ui_content_task_detail@@@Z");
//};

//bool cui_vector_push_back<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(class c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> > &, struct s_content_enumeration_result const &)
//{
//    mangled_ppc("??$cui_vector_push_back@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@YA_NAAV?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@ABUs_content_enumeration_result@@@Z");
//};

//public: void * c_ui_content_task_detail::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_ui_content_task_detail@@QAAPAXI@Z");
//};

//public: c_ui_content_task_detail::~c_ui_content_task_detail(void)
//{
//    mangled_ppc("??1c_ui_content_task_detail@@QAA@XZ");
//};

//public: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBA_NXZ");
//};

//private: bool c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::position_valid(struct s_content_enumeration_result const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@ABA_NPBUs_content_enumeration_result@@@Z");
//};

//public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: struct s_content_enumeration_result const * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QBAPBUs_content_enumeration_result@@XZ");
//};

//public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::reserve(unsigned int)
//{
//    mangled_ppc("?reserve@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAXI@Z");
//};

//public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::push_back(struct s_content_enumeration_result const &)
//{
//    mangled_ppc("?push_back@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAXABUs_content_enumeration_result@@@Z");
//};

//public: void c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@QAAXXZ");
//};

//private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::collapse(struct s_content_enumeration_result const *, struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?collapse@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@AAAPAUs_content_enumeration_result@@PBU2@0@Z");
//};

//public: void c_cui_dynamic_allocator<struct s_content_enumeration_result>::deallocate(struct s_content_enumeration_result *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@QAAXPAUs_content_enumeration_result@@I@Z");
//};

//void cui_swap<class c_cui_dynamic_allocator<struct s_content_enumeration_result> >(class c_cui_dynamic_allocator<struct s_content_enumeration_result> &, class c_cui_dynamic_allocator<struct s_content_enumeration_result> &)
//{
//    mangled_ppc("??$cui_swap@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@YAXAAV?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@0@Z");
//};

//void cui_swap<struct s_content_enumeration_result *>(struct s_content_enumeration_result *&, struct s_content_enumeration_result *&)
//{
//    mangled_ppc("??$cui_swap@PAUs_content_enumeration_result@@@@YAXAAPAUs_content_enumeration_result@@0@Z");
//};

//void cui_swap<unsigned int>(unsigned int &, unsigned int &)
//{
//    mangled_ppc("??$cui_swap@I@@YAXAAI0@Z");
//};

//public: bool c_cui_list<class c_ui_content_task_detail>::contains(class c_ui_content_task_detail const *) const
//{
//    mangled_ppc("?contains@?$c_cui_list@Vc_ui_content_task_detail@@@@QBA_NPBVc_ui_content_task_detail@@@Z");
//};

//public: bool c_cui_list<class c_ui_content_change_listener>::contains(class c_ui_content_change_listener const *) const
//{
//    mangled_ppc("?contains@?$c_cui_list@Vc_ui_content_change_listener@@@@QBA_NPBVc_ui_content_change_listener@@@Z");
//};

//private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@AAAPAUs_content_enumeration_result@@I@Z");
//};

//private: struct s_content_enumeration_result * c_cui_vector<struct s_content_enumeration_result, class c_cui_dynamic_allocator<struct s_content_enumeration_result> >::get_mutable_iterator(struct s_content_enumeration_result const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_vector@Us_content_enumeration_result@@V?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@@@AAAPAUs_content_enumeration_result@@PBU2@@Z");
//};

//public: struct s_content_enumeration_result * c_cui_dynamic_allocator<struct s_content_enumeration_result>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$c_cui_dynamic_allocator@Us_content_enumeration_result@@@@QAAPAUs_content_enumeration_result@@I@Z");
//};

//public: c_typed_opaque_data<class c_ui_content_globals, 60, 4>::c_typed_opaque_data<class c_ui_content_globals, 60, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_ui_content_globals, 60, 4>::~c_typed_opaque_data<class c_ui_content_globals, 60, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_ui_content_globals@@$0DM@$03@@QAA@XZ");
//};

//void g_ui_content_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ui_content_globals@@YAXXZ");
//};

