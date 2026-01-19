/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_persisted_tag_link>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_persisted_tag_link@@@@2QBJB"
// public: static long const s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::k_element_count; // "?k_element_count@?$s_static_array@PBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@$0EOCA@@@2JB"
// public: static long const s_static_array<long, 20000>::k_element_count; // "?k_element_count@?$s_static_array@J$0EOCA@@@2JB"
// bool g_enable_tag_dependency_tracking; // "?g_enable_tag_dependency_tracking@@3_NA"
// long g_tracked_tag_index; // "?g_tracked_tag_index@@3JA"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_persisted_tag_link>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_persisted_tag_link@@@@2Ubyte_swap_definition@@A"
// bool debug_tag_dependencies; // "?debug_tag_dependencies@@3_NA"
// bool g_suppress_tag_get_before_reload_check; // "?g_suppress_tag_get_before_reload_check@@3_NA"
// unsigned int g_dependency_memory_size; // "?g_dependency_memory_size@@3IA"
// class c_tracked_allocator<struct std::pair<long, long> > g_link_allocator; // "?g_link_allocator@@3V?$c_tracked_allocator@U?$pair@JJ@std@@@@A"
// class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > g_tag_child_to_parent_link_set; // "?g_tag_child_to_parent_link_set@@3V?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@A"
// class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > g_tag_parent_to_child_link_set; // "?g_tag_parent_to_child_link_set@@3V?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_persisted_tag_link>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_persisted_tag_link@@@@2PAUbyte_swap_definition@@A"

// void tag_group_dependencies_initialize(void);
// void tag_group_dependencies_dispose(void);
// void tag_group_dependencies_reset(void);
// void tag_group_dependencies_enable(bool);
// long tag_group_dependencies_get_tracked_tag_index(void);
// void tag_group_dependencies_set_tracked_tag_index(long);
// void tag_group_dependencies_register_dependency(long, long);
// void tag_group_dependencies_register_tag_get(long);
// void register_tag_dependency_internal(long, long);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::~_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(void);
// void tag_group_dependencies_register_tag_unload(long);
// void unregister_tag_dependency_internal(long, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &);
// public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(struct std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base> const &);
// void tag_group_dependencies_mark_tag_for_reload(long, class c_tag_marker *);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>(void);
// void tag_group_dependencies_reload_changed_tags(enum e_tag_reload_stage);
// void tag_group_dependencies_simulate_reload(class c_formatted_output *, class c_tag_marker const *);
// void tag_group_dependencies_add_recursive(long, class c_tag_runtime_dependency_graph *, class c_tag_marker *);
// long tag_group_dependencies_reload_single_tag(long);
// void tag_group_dependencies_dump(class c_formatted_output *);
// void tag_group_dependencies_dump_in_dependency_order(class c_formatted_output *);
// bool tag_group_dependencies_save(class c_persist_stream *);
// bool tag_group_dependencies_restore(class c_persist_stream *);
// struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> get_tag_dependency_range(long, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *);
// bool should_track_tag_dependencies(void);
// public: c_tag_runtime_dependency_graph::c_tag_runtime_dependency_graph(void);
// public: void c_tag_runtime_dependency_graph::mark_tag(long);
// public: void c_tag_runtime_dependency_graph::insert_link(long, long);
// private: void c_tag_runtime_dependency_graph::calculate_tag_depths(void);
// public: void c_tag_runtime_dependency_graph::reload_tags(void);
// private: struct c_tag_runtime_dependency_graph::s_tag_dependency_link * c_tag_runtime_dependency_graph::allocate_link(void);
// private: long c_tag_runtime_dependency_graph::calculate_tag_depth_recursive(long);
// private: void c_tag_runtime_dependency_graph::reload_tags_recursive(long);
// public: void c_tag_runtime_dependency_graph::dump_reload_order(class c_formatted_output *);
// private: void c_tag_runtime_dependency_graph::dump_reload_order_recursive(long, class c_formatted_output *, class c_tag_marker *);
// public: c_tag_dependency_suppressor::c_tag_dependency_suppressor(void);
// public: c_tag_dependency_suppressor::~c_tag_dependency_suppressor(void);
// public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link const ** s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::get_elements(void);
// public: unsigned int s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::get_total_element_size(void) const;
// public: long c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::push(void);
// public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link * c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::get(long);
// public: c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>(void);
// public: long * s_static_array<long, 20000>::get_elements(void);
// public: unsigned int s_static_array<long, 20000>::get_total_element_size(void) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::begin(void);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::size(void) const;
// public: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::insert(struct std::pair<long, long> const &);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator);
// public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(struct std::pair<long, long> const &);
// public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::clear(void);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::find(struct std::pair<long, long> const &);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::lower_bound(struct std::pair<long, long> const &);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::upper_bound(struct std::pair<long, long> const &);
// public: struct std::pair<long, long> * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator->(void) const;
// public: struct std::pair<long, long> const * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator->(void) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator++(void);
// public: bool std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &) const;
// public: bool std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &) const;
// public: long c_static_stack<long, 20000>::count(void) const;
// public: long c_static_stack<long, 20000>::push(void);
// public: long * c_static_stack<long, 20000>::get(long);
// public: c_static_stack<long, 20000>::c_static_stack<long, 20000>(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &);
// public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::valid(long) const;
// public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::full(void) const;
// protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::pair<long, long> const & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator);
// public: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::equal_range(struct std::pair<long, long> const &);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &);
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lbound(struct std::pair<long, long> const &) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lmost(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Rmost(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Root(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Ubound(struct std::pair<long, long> const &) const;
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *) const;
// public: static struct std::pair<long, long> const & std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::_Kfn(struct std::pair<long, long> const &);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > const *);
// public: struct std::pair<long, long> & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator--(void);
// public: struct std::pair<long, long> const & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator++(int);
// public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Inc(void);
// public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Mynode(void) const;
// public: bool c_static_stack<long, 20000>::valid(long) const;
// public: bool c_static_stack<long, 20000>::full(void) const;
// public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::valid(void) const;
// protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::pair<long, long> & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::max_size(void) const;
// protected: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Eqrange(struct std::pair<long, long> const &);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &, char);
// public: void c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > const *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator--(void);
// public: bool c_static_stack<long, 20000>::valid(void) const;
// public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(void);
// public: unsigned int std::allocator<struct std::pair<long, long> >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::allocate(unsigned int);
// public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Dec(void);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &);
// public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &, char);
// struct std::pair<long, long> std::make_pair<long, long>(long, long);
// public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>::ctor<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> const &);
// public: bool c_persist_stream::write_typed<struct s_persisted_tag_link>(struct s_persisted_tag_link *, long);
// public: bool c_persist_stream::read_typed<struct s_persisted_tag_link>(struct s_persisted_tag_link *, long);
// struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::make_pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator);
// public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *& s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::operator[]<long>(long);
// public: long & s_static_array<long, 20000>::operator[]<long>(long);
// bool std::_Debug_lt_pred<struct std::less<struct std::pair<long, long> >, struct std::pair<long, long>, struct std::pair<long, long> >(struct std::less<struct std::pair<long, long> >, struct std::pair<long, long> const &, struct std::pair<long, long> const &, wchar_t const *, unsigned int);
// void std::_Distance<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *);
// public: bool std::less<struct std::pair<long, long> >::operator()(struct std::pair<long, long> const &, struct std::pair<long, long> const &) const;
// public: std::pair<long, long>::pair<long, long>(long const &, long const &);
// public: static bool s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::valid<long>(long);
// public: static bool s_static_array<long, 20000>::valid<long>(long);
// struct std::bidirectional_iterator_tag std::_Iter_cat<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &);
// void std::_Distance2<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int &, struct std::bidirectional_iterator_tag);
// bool std::operator<<long, long>(struct std::pair<long, long> const &, struct std::pair<long, long> const &);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator++(void);
// public: c_tracked_allocator<struct std::pair<long, long> >::c_tracked_allocator<struct std::pair<long, long> >(unsigned int *);
// public: std::allocator<struct std::pair<long, long> >::allocator<struct std::pair<long, long> >(void);
// public: std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> > const &);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> > const &);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Init(void);
// protected: std::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >);
// public: c_tracked_allocator<struct std::pair<long, long> >::c_tracked_allocator<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &);
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Buynode(void);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **);
// public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >);
// protected: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *const &);
// public: std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>(struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >);
// protected: std::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >(class c_tracked_allocator<struct std::pair<long, long> >);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **);
// public: c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::ctor<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &);
// public: c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::ctor<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &);
// void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>(void);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_persisted_tag_link>::get_bs_definition(void);
// public: std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >::~set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void);
// public: std::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void);
// public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void);
// public: std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::~_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>(void);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tidy(void);
// protected: std::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >::~_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >(void);
// void g_tag_child_to_parent_link_set::`dynamic atexit destructor'(void);
// void g_tag_parent_to_child_link_set::`dynamic atexit destructor'(void);

//void tag_group_dependencies_initialize(void)
//{
//    mangled_ppc("?tag_group_dependencies_initialize@@YAXXZ");
//};

//void tag_group_dependencies_dispose(void)
//{
//    mangled_ppc("?tag_group_dependencies_dispose@@YAXXZ");
//};

//void tag_group_dependencies_reset(void)
//{
//    mangled_ppc("?tag_group_dependencies_reset@@YAXXZ");
//};

//void tag_group_dependencies_enable(bool)
//{
//    mangled_ppc("?tag_group_dependencies_enable@@YAX_N@Z");
//};

//long tag_group_dependencies_get_tracked_tag_index(void)
//{
//    mangled_ppc("?tag_group_dependencies_get_tracked_tag_index@@YAJXZ");
//};

//void tag_group_dependencies_set_tracked_tag_index(long)
//{
//    mangled_ppc("?tag_group_dependencies_set_tracked_tag_index@@YAXJ@Z");
//};

//void tag_group_dependencies_register_dependency(long, long)
//{
//    mangled_ppc("?tag_group_dependencies_register_dependency@@YAXJJ@Z");
//};

//void tag_group_dependencies_register_tag_get(long)
//{
//    mangled_ppc("?tag_group_dependencies_register_tag_get@@YAXJ@Z");
//};

//void register_tag_dependency_internal(long, long)
//{
//    mangled_ppc("?register_tag_dependency_internal@@YAXJJ@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::~_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@JJ@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@JJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//void tag_group_dependencies_register_tag_unload(long)
//{
//    mangled_ppc("?tag_group_dependencies_register_tag_unload@@YAXJ@Z");
//};

//void unregister_tag_dependency_internal(long, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *)
//{
//    mangled_ppc("?unregister_tag_dependency_internal@@YAXJPAV?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@0@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(struct std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@JJ@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@JJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//void tag_group_dependencies_mark_tag_for_reload(long, class c_tag_marker *)
//{
//    mangled_ppc("?tag_group_dependencies_mark_tag_for_reload@@YAXJPAVc_tag_marker@@@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>::~pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>(void)
//{
//    mangled_ppc("??1?$pair@Vconst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@QAA@XZ");
//};

//void tag_group_dependencies_reload_changed_tags(enum e_tag_reload_stage)
//{
//    mangled_ppc("?tag_group_dependencies_reload_changed_tags@@YAXW4e_tag_reload_stage@@@Z");
//};

//void tag_group_dependencies_simulate_reload(class c_formatted_output *, class c_tag_marker const *)
//{
//    mangled_ppc("?tag_group_dependencies_simulate_reload@@YAXPAVc_formatted_output@@PBVc_tag_marker@@@Z");
//};

//void tag_group_dependencies_add_recursive(long, class c_tag_runtime_dependency_graph *, class c_tag_marker *)
//{
//    mangled_ppc("?tag_group_dependencies_add_recursive@@YAXJPAVc_tag_runtime_dependency_graph@@PAVc_tag_marker@@@Z");
//};

//long tag_group_dependencies_reload_single_tag(long)
//{
//    mangled_ppc("?tag_group_dependencies_reload_single_tag@@YAJJ@Z");
//};

//void tag_group_dependencies_dump(class c_formatted_output *)
//{
//    mangled_ppc("?tag_group_dependencies_dump@@YAXPAVc_formatted_output@@@Z");
//};

//void tag_group_dependencies_dump_in_dependency_order(class c_formatted_output *)
//{
//    mangled_ppc("?tag_group_dependencies_dump_in_dependency_order@@YAXPAVc_formatted_output@@@Z");
//};

//bool tag_group_dependencies_save(class c_persist_stream *)
//{
//    mangled_ppc("?tag_group_dependencies_save@@YA_NPAVc_persist_stream@@@Z");
//};

//bool tag_group_dependencies_restore(class c_persist_stream *)
//{
//    mangled_ppc("?tag_group_dependencies_restore@@YA_NPAVc_persist_stream@@@Z");
//};

//struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> get_tag_dependency_range(long, class std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > > *)
//{
//    mangled_ppc("?get_tag_dependency_range@@YA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@JPAV?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@2@@Z");
//};

//bool should_track_tag_dependencies(void)
//{
//    mangled_ppc("?should_track_tag_dependencies@@YA_NXZ");
//};

//public: c_tag_runtime_dependency_graph::c_tag_runtime_dependency_graph(void)
//{
//    mangled_ppc("??0c_tag_runtime_dependency_graph@@QAA@XZ");
//};

//public: void c_tag_runtime_dependency_graph::mark_tag(long)
//{
//    mangled_ppc("?mark_tag@c_tag_runtime_dependency_graph@@QAAXJ@Z");
//};

//public: void c_tag_runtime_dependency_graph::insert_link(long, long)
//{
//    mangled_ppc("?insert_link@c_tag_runtime_dependency_graph@@QAAXJJ@Z");
//};

//private: void c_tag_runtime_dependency_graph::calculate_tag_depths(void)
//{
//    mangled_ppc("?calculate_tag_depths@c_tag_runtime_dependency_graph@@AAAXXZ");
//};

//public: void c_tag_runtime_dependency_graph::reload_tags(void)
//{
//    mangled_ppc("?reload_tags@c_tag_runtime_dependency_graph@@QAAXXZ");
//};

//private: struct c_tag_runtime_dependency_graph::s_tag_dependency_link * c_tag_runtime_dependency_graph::allocate_link(void)
//{
//    mangled_ppc("?allocate_link@c_tag_runtime_dependency_graph@@AAAPAUs_tag_dependency_link@1@XZ");
//};

//private: long c_tag_runtime_dependency_graph::calculate_tag_depth_recursive(long)
//{
//    mangled_ppc("?calculate_tag_depth_recursive@c_tag_runtime_dependency_graph@@AAAJJ@Z");
//};

//private: void c_tag_runtime_dependency_graph::reload_tags_recursive(long)
//{
//    mangled_ppc("?reload_tags_recursive@c_tag_runtime_dependency_graph@@AAAXJ@Z");
//};

//public: void c_tag_runtime_dependency_graph::dump_reload_order(class c_formatted_output *)
//{
//    mangled_ppc("?dump_reload_order@c_tag_runtime_dependency_graph@@QAAXPAVc_formatted_output@@@Z");
//};

//private: void c_tag_runtime_dependency_graph::dump_reload_order_recursive(long, class c_formatted_output *, class c_tag_marker *)
//{
//    mangled_ppc("?dump_reload_order_recursive@c_tag_runtime_dependency_graph@@AAAXJPAVc_formatted_output@@PAVc_tag_marker@@@Z");
//};

//public: c_tag_dependency_suppressor::c_tag_dependency_suppressor(void)
//{
//    mangled_ppc("??0c_tag_dependency_suppressor@@QAA@XZ");
//};

//public: c_tag_dependency_suppressor::~c_tag_dependency_suppressor(void)
//{
//    mangled_ppc("??1c_tag_dependency_suppressor@@QAA@XZ");
//};

//public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link const ** s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@$0EOCA@@@QAAPAPBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@XZ");
//};

//public: unsigned int s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@PBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@$0EOCA@@@QBAIXZ");
//};

//public: long c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QAAJXZ");
//};

//public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link * c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QAAPAUs_tag_dependency_link@c_tag_runtime_dependency_graph@@J@Z");
//};

//public: c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QAA@XZ");
//};

//public: long * s_static_array<long, 20000>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$0EOCA@@@QAAPAJXZ");
//};

//public: unsigned int s_static_array<long, 20000>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@J$0EOCA@@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::size(void) const
//{
//    mangled_ppc("?size@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAIXZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::insert(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@_N@2@ABU?$pair@JJ@2@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAIABU?$pair@JJ@2@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAXXZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::find(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?find@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@ABU?$pair@JJ@2@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::lower_bound(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?lower_bound@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@ABU?$pair@JJ@2@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::upper_bound(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?upper_bound@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@ABU?$pair@JJ@2@@Z");
//};

//public: struct std::pair<long, long> * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAPAU?$pair@JJ@2@XZ");
//};

//public: struct std::pair<long, long> const * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator->(void) const
//{
//    mangled_ppc("??Cconst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAPBU?$pair@JJ@2@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: bool std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: long c_static_stack<long, 20000>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$0EOCA@@@QBAJXZ");
//};

//public: long c_static_stack<long, 20000>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$0EOCA@@@QAAJXZ");
//};

//public: long * c_static_stack<long, 20000>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0EOCA@@@QAAPAJJ@Z");
//};

//public: c_static_stack<long, 20000>::c_static_stack<long, 20000>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$0EOCA@@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QBA_NXZ");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: static struct std::pair<long, long> const & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Key(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAABU?$pair@JJ@2@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::equal_range(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?equal_range@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@2@ABU?$pair@JJ@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@ABU?$pair@JJ@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lbound(struct std::pair<long, long> const &) const
//{
//    mangled_ppc("?_Lbound@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@ABU?$pair@JJ@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Ubound(struct std::pair<long, long> const &) const
//{
//    mangled_ppc("?_Ubound@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@ABU?$pair@JJ@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//public: static struct std::pair<long, long> const & std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::_Kfn(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?_Kfn@?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@SAABU?$pair@JJ@2@ABU32@@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, bool>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<long, long> & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAAAU?$pair@JJ@2@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: struct std::pair<long, long> const & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAABU?$pair@JJ@2@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAXXZ");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@3@XZ");
//};

//public: bool c_static_stack<long, 20000>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0EOCA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<long, 20000>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$0EOCA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_tag_runtime_dependency_graph::s_tag_dependency_link, 60000>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_tag_dependency_link@c_tag_runtime_dependency_graph@@$0OKGA@@@QBA_NXZ");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<long, long> & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAAAU?$pair@JJ@2@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//public: unsigned int std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QBAIXZ");
//};

//protected: struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Eqrange(struct std::pair<long, long> const &)
//{
//    mangled_ppc("?_Eqrange@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@2@ABU?$pair@JJ@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PAU342@00ABU?$pair@JJ@2@D@Z");
//};

//public: void c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$c_tracked_allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@PBV12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool c_static_stack<long, 20000>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0EOCA@@@QBA_NXZ");
//};

//public: std::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>::_Bidit<struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@JJ@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<long, long>, int, struct std::pair<long, long> const *, struct std::pair<long, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@JJ@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: unsigned int std::allocator<struct std::pair<long, long> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@JJ@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$c_tracked_allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@@QAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@I@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAXXZ");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@QAA@ABViterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@1@0@Z");
//};

//public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::pair<long, long> const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@JJ@2@D@Z");
//};

//struct std::pair<long, long> std::make_pair<long, long>(long, long)
//{
//    mangled_ppc("??$make_pair@JJ@std@@YA?AU?$pair@JJ@0@JJ@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::const_iterator>::ctor<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> const &)
//{
//    mangled_ppc("??$?0Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V012@@?$pair@Vconst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@QAA@ABU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@1@@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_persisted_tag_link>(struct s_persisted_tag_link *, long)
//{
//    mangled_ppc("??$write_typed@Us_persisted_tag_link@@@c_persist_stream@@QAA_NPAUs_persisted_tag_link@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_persisted_tag_link>(struct s_persisted_tag_link *, long)
//{
//    mangled_ppc("??$read_typed@Us_persisted_tag_link@@@c_persist_stream@@QAA_NPAUs_persisted_tag_link@@J@Z");
//};

//struct std::pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator> std::make_pair<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator)
//{
//    mangled_ppc("??$make_pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@std@@YA?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@V123@@0@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@0@Z");
//};

//public: struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *& s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@$0EOCA@@@QAAAAPBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@J@Z");
//};

//public: long & s_static_array<long, 20000>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0EOCA@@@QAAAAJJ@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<struct std::pair<long, long> >, struct std::pair<long, long>, struct std::pair<long, long> >(struct std::less<struct std::pair<long, long> >, struct std::pair<long, long> const &, struct std::pair<long, long> const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@U?$pair@JJ@std@@@std@@U?$pair@JJ@2@U32@@std@@YA_NU?$less@U?$pair@JJ@std@@@0@ABU?$pair@JJ@0@1PB_WI@Z");
//};

//void std::_Distance<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int &)
//{
//    mangled_ppc("??$_Distance@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@0AAI@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@@Z");
//};

//public: bool std::less<struct std::pair<long, long> >::operator()(struct std::pair<long, long> const &, struct std::pair<long, long> const &) const
//{
//    mangled_ppc("??R?$less@U?$pair@JJ@std@@@std@@QBA_NABU?$pair@JJ@1@0@Z");
//};

//public: std::pair<long, long>::pair<long, long>(long const &, long const &)
//{
//    mangled_ppc("??0?$pair@JJ@std@@QAA@ABJ0@Z");
//};

//public: static bool s_static_array<struct c_tag_runtime_dependency_graph::s_tag_dependency_link const *, 20000>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBUs_tag_dependency_link@c_tag_runtime_dependency_graph@@$0EOCA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 20000>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0EOCA@@@SA_NJ@Z");
//};

//struct std::bidirectional_iterator_tag std::_Iter_cat<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??$_Iter_cat@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@YA?AUbidirectional_iterator_tag@0@ABViterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@@Z");
//};

//void std::_Distance2<class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int>(class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator, unsigned int &, struct std::bidirectional_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z");
//};

//bool std::operator<<long, long>(struct std::pair<long, long> const &, struct std::pair<long, long> const &)
//{
//    mangled_ppc("??$?MJJ@std@@YA_NABU?$pair@JJ@0@0@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator & std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::iterator::operator++(void)
//{
//    mangled_ppc("??Eiterator@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: c_tracked_allocator<struct std::pair<long, long> >::c_tracked_allocator<struct std::pair<long, long> >(unsigned int *)
//{
//    mangled_ppc("??0?$c_tracked_allocator@U?$pair@JJ@std@@@@QAA@PAI@Z");
//};

//public: std::allocator<struct std::pair<long, long> >::allocator<struct std::pair<long, long> >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@JJ@std@@@std@@QAA@XZ");
//};

//public: std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> > const &)
//{
//    mangled_ppc("??0?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@QAA@ABU?$less@U?$pair@JJ@std@@@1@ABV?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@JJ@std@@@1@ABV?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAXXZ");
//};

//protected: std::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@JJ@std@@@1@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//public: c_tracked_allocator<struct std::pair<long, long> >::c_tracked_allocator<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &)
//{
//    mangled_ppc("??0?$c_tracked_allocator@U?$pair@JJ@std@@@@QAA@ABV0@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@XZ");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@@Z");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@JJ@std@@@1@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//protected: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(struct std::less<struct std::pair<long, long> > const &, class c_tracked_allocator<struct std::pair<long, long> >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@JJ@std@@@1@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@2@ABQAU342@@Z");
//};

//public: std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>(struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >)
//{
//    mangled_ppc("??0?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@QAA@U?$less@U?$pair@JJ@std@@@1@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >(class c_tracked_allocator<struct std::pair<long, long> >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@IAA@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@@Z");
//};

//public: c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::ctor<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@JJ@std@@@?$c_tracked_allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@@QAA@ABV?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//public: c_tracked_allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::ctor<struct std::pair<long, long> >(class c_tracked_allocator<struct std::pair<long, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@JJ@std@@@?$c_tracked_allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@@QAA@ABV?$c_tracked_allocator@U?$pair@JJ@std@@@@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node>(void)
//{
//    mangled_ppc("??0?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@QAA@XZ");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Node *>(void)
//{
//    mangled_ppc("??0?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@@std@@QAA@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_persisted_tag_link>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_persisted_tag_link@@@@SAPAUbyte_swap_definition@@XZ");
//};

//public: std::set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >::~set<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> > >(void)
//{
//    mangled_ppc("??1?$set@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_val<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_ptr<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::~_Tree_nod<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>::~_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0>(void)
//{
//    mangled_ppc("??1?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@QAA@XZ");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<long, long>, struct std::less<struct std::pair<long, long> >, class c_tracked_allocator<struct std::pair<long, long> >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tset_traits@U?$pair@JJ@std@@U?$less@U?$pair@JJ@std@@@2@V?$c_tracked_allocator@U?$pair@JJ@std@@@@$0A@@std@@@std@@IAAXXZ");
//};

//protected: std::_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >::~_Container_base_aux_alloc_empty<class c_tracked_allocator<struct std::pair<long, long> > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$c_tracked_allocator@U?$pair@JJ@std@@@@@std@@IAA@XZ");
//};

//void g_tag_child_to_parent_link_set::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_tag_child_to_parent_link_set@@YAXXZ");
//};

//void g_tag_parent_to_child_link_set::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_tag_parent_to_child_link_set@@YAXXZ");
//};

