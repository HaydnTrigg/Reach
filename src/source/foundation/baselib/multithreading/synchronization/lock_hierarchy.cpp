/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_lock_node const *, 8>::k_element_count; // "?k_element_count@?$s_static_array@PBUs_lock_node@@$07@@2JB"

// public: void c_lock_hierarchy::initialize(class c_allocation_interface *);
// public: long c_lock_hierarchy::declare_object(unsigned long, char const *);
// public: void c_lock_hierarchy::declare_blocking_dependency(long, long);
// public: c_path_finder::c_path_finder(void);
// public: void c_lock_hierarchy::declare_optional_dependency(long, long);
// public: void c_lock_hierarchy::declare_reverse_dependency(long, long);
// public: void c_lock_hierarchy::finalize(void);
// public: void c_lock_hierarchy::dispose(void);
// public: enum e_lock_relationship c_lock_hierarchy::query_blocking_relationship(long, long, long, long *, unsigned long *, long *) const;
// public: bool c_lock_hierarchy::query_optional_dependency(long, long) const;
// public: bool c_lock_hierarchy::query_reverse_dependency(long, long) const;
// public: long c_lock_hierarchy::query_prerequisites(long, long, long *, unsigned long *) const;
// public: long c_lock_hierarchy::query_optional_acquisition(long, long, long const *, long, long *, unsigned long *) const;
// public: void c_lock_hierarchy::dump_as_text(class c_simple_file *) const;
// public: c_hierarchy_dumper::c_hierarchy_dumper(void);
// public: void c_lock_hierarchy::dump_as_graphviz(class c_simple_file *) const;
// public: struct s_lock_node * c_lock_hierarchy::node_get(long);
// public: struct s_lock_link * c_lock_hierarchy::link_get(long);
// public: struct s_lock_node const * c_lock_hierarchy::node_get_const(long) const;
// public: struct s_lock_link const * c_lock_hierarchy::link_get_const(long) const;
// public: struct s_data_array const * c_lock_hierarchy::node_array_get_const(void) const;
// private: void c_lock_hierarchy::validate(void) const;
// enum e_lock_link_type operator++(enum e_lock_link_type &, int);
// private: void c_lock_hierarchy::validate_prerequisite_chain(long) const;
// private: long c_lock_hierarchy::find_link(long, long, enum e_lock_link_type) const;
// private: long c_lock_hierarchy::find_or_add_link(long, long, enum e_lock_link_type);
// private: void c_lock_hierarchy::build_ancestors_and_descendants_beneath_node(long);
// private: void c_lock_hierarchy::add_reverse_dependency(long, long);
// private: void c_lock_hierarchy::add_ancestor_prerequisites(long, long, class c_static_stack<long, 128> *);
// private: void c_lock_hierarchy::add_prerequisite(long, long);
// private: void c_lock_hierarchy::add_prerequisite_dependencies(long);
// private: void c_lock_hierarchy::declare_prerequisite_dependency(long, long, long);
// public: void c_path_finder::reset(void);
// public: bool c_path_finder::visited_node(long) const;
// public: void c_path_finder::find_cycles(class c_lock_hierarchy const *, long);
// public: class s_static_bitarray<128> const * c_path_finder::find_children(class c_lock_hierarchy const *, long);
// public: bool c_path_finder::find_path(class c_lock_hierarchy const *, long, long, long, long *, long *);
// private: void c_path_finder::recurse(class c_lock_hierarchy const *, long, long, long, long *, long *);
// public: void c_hierarchy_dumper::dump(enum c_hierarchy_dumper::e_dump_type, class c_lock_hierarchy const *, class c_simple_file *);
// private: void c_hierarchy_dumper::recurse(enum c_hierarchy_dumper::e_dump_type, class c_lock_hierarchy const *, long, class c_simple_file *, long *, long *);
// public: long const * s_static_array<long, 8>::get_elements(void) const;
// public: static unsigned int s_static_array<long, 8>::get_element_size(void);
// public: unsigned long const * s_static_array<unsigned long, 8>::get_elements(void) const;
// public: static unsigned int s_static_array<unsigned long, 8>::get_element_size(void);
// public: bool c_static_stack<long, 128>::empty(void) const;
// public: long c_static_stack<long, 128>::top(void) const;
// public: long c_static_stack<long, 128>::count(void) const;
// public: void c_static_stack<long, 128>::clear(void);
// public: void c_static_stack<long, 128>::push_back(long const &);
// public: void c_static_stack<long, 128>::pop(void);
// public: long & c_static_stack<long, 128>::operator[](long);
// public: long & c_static_stack<long, 128>::get_element(long);
// public: long * c_static_stack<long, 128>::get_elements(void);
// public: c_static_stack<long, 128>::c_static_stack<long, 128>(void);
// public: void c_data_iterator<struct s_lock_node>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_lock_node>::next(void);
// public: struct s_lock_node * c_data_iterator<struct s_lock_node>::get_datum(void) const;
// public: long c_data_iterator<struct s_lock_node>::get_index(void) const;
// public: void c_data_iterator<struct s_lock_link>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_lock_link>::next(void);
// public: long c_data_iterator<struct s_lock_link>::get_absolute_index(void) const;
// public: void c_data_iterator_const<struct s_lock_node>::begin(struct s_data_array const *);
// public: bool c_data_iterator_const<struct s_lock_node>::next(void);
// public: struct s_lock_node const * c_data_iterator_const<struct s_lock_node>::get_datum(void) const;
// public: long c_data_iterator_const<struct s_lock_node>::get_index(void) const;
// public: long c_data_iterator_const<struct s_lock_node>::get_absolute_index(void) const;
// public: bool c_static_stack<long, 128>::valid(void) const;
// public: bool c_static_stack<long, 128>::valid(long) const;
// public: long c_static_stack<long, 128>::push(void);
// public: long * c_static_stack<long, 128>::get(long);
// public: bool c_static_stack<long, 128>::full(void) const;
// public: long const & s_static_array<long, 4>::operator[]<enum e_lock_link_type>(enum e_lock_link_type) const;
// public: long & s_static_array<long, 128>::operator[]<int>(int);
// public: struct s_lock_node const *& s_static_array<struct s_lock_node const *, 8>::operator[]<long>(long);
// public: long & s_static_array<long, 4>::operator[]<enum e_lock_link_type>(enum e_lock_link_type);
// public: bool const s_static_bitarray<128>::operator[]<long>(long) const;
// public: static bool s_static_array<long, 4>::valid<enum e_lock_link_type>(enum e_lock_link_type);
// public: static bool s_static_array<long, 128>::valid<int>(int);
// public: static bool s_static_array<struct s_lock_node const *, 8>::valid<long>(long);
// public: static bool s_static_bitarray<128>::valid<long>(long);

//public: void c_lock_hierarchy::initialize(class c_allocation_interface *)
//{
//    mangled_ppc("?initialize@c_lock_hierarchy@@QAAXPAVc_allocation_interface@@@Z");
//};

//public: long c_lock_hierarchy::declare_object(unsigned long, char const *)
//{
//    mangled_ppc("?declare_object@c_lock_hierarchy@@QAAJKPBD@Z");
//};

//public: void c_lock_hierarchy::declare_blocking_dependency(long, long)
//{
//    mangled_ppc("?declare_blocking_dependency@c_lock_hierarchy@@QAAXJJ@Z");
//};

//public: c_path_finder::c_path_finder(void)
//{
//    mangled_ppc("??0c_path_finder@@QAA@XZ");
//};

//public: void c_lock_hierarchy::declare_optional_dependency(long, long)
//{
//    mangled_ppc("?declare_optional_dependency@c_lock_hierarchy@@QAAXJJ@Z");
//};

//public: void c_lock_hierarchy::declare_reverse_dependency(long, long)
//{
//    mangled_ppc("?declare_reverse_dependency@c_lock_hierarchy@@QAAXJJ@Z");
//};

//public: void c_lock_hierarchy::finalize(void)
//{
//    mangled_ppc("?finalize@c_lock_hierarchy@@QAAXXZ");
//};

//public: void c_lock_hierarchy::dispose(void)
//{
//    mangled_ppc("?dispose@c_lock_hierarchy@@QAAXXZ");
//};

//public: enum e_lock_relationship c_lock_hierarchy::query_blocking_relationship(long, long, long, long *, unsigned long *, long *) const
//{
//    mangled_ppc("?query_blocking_relationship@c_lock_hierarchy@@QBA?AW4e_lock_relationship@@JJJPAJPAK0@Z");
//};

//public: bool c_lock_hierarchy::query_optional_dependency(long, long) const
//{
//    mangled_ppc("?query_optional_dependency@c_lock_hierarchy@@QBA_NJJ@Z");
//};

//public: bool c_lock_hierarchy::query_reverse_dependency(long, long) const
//{
//    mangled_ppc("?query_reverse_dependency@c_lock_hierarchy@@QBA_NJJ@Z");
//};

//public: long c_lock_hierarchy::query_prerequisites(long, long, long *, unsigned long *) const
//{
//    mangled_ppc("?query_prerequisites@c_lock_hierarchy@@QBAJJJPAJPAK@Z");
//};

//public: long c_lock_hierarchy::query_optional_acquisition(long, long, long const *, long, long *, unsigned long *) const
//{
//    mangled_ppc("?query_optional_acquisition@c_lock_hierarchy@@QBAJJJPBJJPAJPAK@Z");
//};

//public: void c_lock_hierarchy::dump_as_text(class c_simple_file *) const
//{
//    mangled_ppc("?dump_as_text@c_lock_hierarchy@@QBAXPAVc_simple_file@@@Z");
//};

//public: c_hierarchy_dumper::c_hierarchy_dumper(void)
//{
//    mangled_ppc("??0c_hierarchy_dumper@@QAA@XZ");
//};

//public: void c_lock_hierarchy::dump_as_graphviz(class c_simple_file *) const
//{
//    mangled_ppc("?dump_as_graphviz@c_lock_hierarchy@@QBAXPAVc_simple_file@@@Z");
//};

//public: struct s_lock_node * c_lock_hierarchy::node_get(long)
//{
//    mangled_ppc("?node_get@c_lock_hierarchy@@QAAPAUs_lock_node@@J@Z");
//};

//public: struct s_lock_link * c_lock_hierarchy::link_get(long)
//{
//    mangled_ppc("?link_get@c_lock_hierarchy@@QAAPAUs_lock_link@@J@Z");
//};

//public: struct s_lock_node const * c_lock_hierarchy::node_get_const(long) const
//{
//    mangled_ppc("?node_get_const@c_lock_hierarchy@@QBAPBUs_lock_node@@J@Z");
//};

//public: struct s_lock_link const * c_lock_hierarchy::link_get_const(long) const
//{
//    mangled_ppc("?link_get_const@c_lock_hierarchy@@QBAPBUs_lock_link@@J@Z");
//};

//public: struct s_data_array const * c_lock_hierarchy::node_array_get_const(void) const
//{
//    mangled_ppc("?node_array_get_const@c_lock_hierarchy@@QBAPBUs_data_array@@XZ");
//};

//private: void c_lock_hierarchy::validate(void) const
//{
//    mangled_ppc("?validate@c_lock_hierarchy@@ABAXXZ");
//};

//enum e_lock_link_type operator++(enum e_lock_link_type &, int)
//{
//    mangled_ppc("??E@YA?AW4e_lock_link_type@@AAW40@H@Z");
//};

//private: void c_lock_hierarchy::validate_prerequisite_chain(long) const
//{
//    mangled_ppc("?validate_prerequisite_chain@c_lock_hierarchy@@ABAXJ@Z");
//};

//private: long c_lock_hierarchy::find_link(long, long, enum e_lock_link_type) const
//{
//    mangled_ppc("?find_link@c_lock_hierarchy@@ABAJJJW4e_lock_link_type@@@Z");
//};

//private: long c_lock_hierarchy::find_or_add_link(long, long, enum e_lock_link_type)
//{
//    mangled_ppc("?find_or_add_link@c_lock_hierarchy@@AAAJJJW4e_lock_link_type@@@Z");
//};

//private: void c_lock_hierarchy::build_ancestors_and_descendants_beneath_node(long)
//{
//    mangled_ppc("?build_ancestors_and_descendants_beneath_node@c_lock_hierarchy@@AAAXJ@Z");
//};

//private: void c_lock_hierarchy::add_reverse_dependency(long, long)
//{
//    mangled_ppc("?add_reverse_dependency@c_lock_hierarchy@@AAAXJJ@Z");
//};

//private: void c_lock_hierarchy::add_ancestor_prerequisites(long, long, class c_static_stack<long, 128> *)
//{
//    mangled_ppc("?add_ancestor_prerequisites@c_lock_hierarchy@@AAAXJJPAV?$c_static_stack@J$0IA@@@@Z");
//};

//private: void c_lock_hierarchy::add_prerequisite(long, long)
//{
//    mangled_ppc("?add_prerequisite@c_lock_hierarchy@@AAAXJJ@Z");
//};

//private: void c_lock_hierarchy::add_prerequisite_dependencies(long)
//{
//    mangled_ppc("?add_prerequisite_dependencies@c_lock_hierarchy@@AAAXJ@Z");
//};

//private: void c_lock_hierarchy::declare_prerequisite_dependency(long, long, long)
//{
//    mangled_ppc("?declare_prerequisite_dependency@c_lock_hierarchy@@AAAXJJJ@Z");
//};

//public: void c_path_finder::reset(void)
//{
//    mangled_ppc("?reset@c_path_finder@@QAAXXZ");
//};

//public: bool c_path_finder::visited_node(long) const
//{
//    mangled_ppc("?visited_node@c_path_finder@@QBA_NJ@Z");
//};

//public: void c_path_finder::find_cycles(class c_lock_hierarchy const *, long)
//{
//    mangled_ppc("?find_cycles@c_path_finder@@QAAXPBVc_lock_hierarchy@@J@Z");
//};

//public: class s_static_bitarray<128> const * c_path_finder::find_children(class c_lock_hierarchy const *, long)
//{
//    mangled_ppc("?find_children@c_path_finder@@QAAPBV?$s_static_bitarray@$0IA@@@PBVc_lock_hierarchy@@J@Z");
//};

//public: bool c_path_finder::find_path(class c_lock_hierarchy const *, long, long, long, long *, long *)
//{
//    mangled_ppc("?find_path@c_path_finder@@QAA_NPBVc_lock_hierarchy@@JJJPAJ1@Z");
//};

//private: void c_path_finder::recurse(class c_lock_hierarchy const *, long, long, long, long *, long *)
//{
//    mangled_ppc("?recurse@c_path_finder@@AAAXPBVc_lock_hierarchy@@JJJPAJ1@Z");
//};

//public: void c_hierarchy_dumper::dump(enum c_hierarchy_dumper::e_dump_type, class c_lock_hierarchy const *, class c_simple_file *)
//{
//    mangled_ppc("?dump@c_hierarchy_dumper@@QAAXW4e_dump_type@1@PBVc_lock_hierarchy@@PAVc_simple_file@@@Z");
//};

//private: void c_hierarchy_dumper::recurse(enum c_hierarchy_dumper::e_dump_type, class c_lock_hierarchy const *, long, class c_simple_file *, long *, long *)
//{
//    mangled_ppc("?recurse@c_hierarchy_dumper@@AAAXW4e_dump_type@1@PBVc_lock_hierarchy@@JPAVc_simple_file@@PAJ3@Z");
//};

//public: long const * s_static_array<long, 8>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$07@@QBAPBJXZ");
//};

//public: static unsigned int s_static_array<long, 8>::get_element_size(void)
//{
//    mangled_ppc("?get_element_size@?$s_static_array@J$07@@SAIXZ");
//};

//public: unsigned long const * s_static_array<unsigned long, 8>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@K$07@@QBAPBKXZ");
//};

//public: static unsigned int s_static_array<unsigned long, 8>::get_element_size(void)
//{
//    mangled_ppc("?get_element_size@?$s_static_array@K$07@@SAIXZ");
//};

//public: bool c_static_stack<long, 128>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@J$0IA@@@QBA_NXZ");
//};

//public: long c_static_stack<long, 128>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@J$0IA@@@QBAJXZ");
//};

//public: long c_static_stack<long, 128>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$0IA@@@QBAJXZ");
//};

//public: void c_static_stack<long, 128>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@J$0IA@@@QAAXXZ");
//};

//public: void c_static_stack<long, 128>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$0IA@@@QAAXABJ@Z");
//};

//public: void c_static_stack<long, 128>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@J$0IA@@@QAAXXZ");
//};

//public: long & c_static_stack<long, 128>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@J$0IA@@@QAAAAJJ@Z");
//};

//public: long & c_static_stack<long, 128>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_stack@J$0IA@@@QAAAAJJ@Z");
//};

//public: long * c_static_stack<long, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@J$0IA@@@QAAPAJXZ");
//};

//public: c_static_stack<long, 128>::c_static_stack<long, 128>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$0IA@@@QAA@XZ");
//};

//public: void c_data_iterator<struct s_lock_node>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_lock_node@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_lock_node>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_lock_node@@@@QAA_NXZ");
//};

//public: struct s_lock_node * c_data_iterator<struct s_lock_node>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_lock_node@@@@QBAPAUs_lock_node@@XZ");
//};

//public: long c_data_iterator<struct s_lock_node>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_lock_node@@@@QBAJXZ");
//};

//public: void c_data_iterator<struct s_lock_link>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_lock_link@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_lock_link>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_lock_link@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_lock_link>::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@?$c_data_iterator@Us_lock_link@@@@QBAJXZ");
//};

//public: void c_data_iterator_const<struct s_lock_node>::begin(struct s_data_array const *)
//{
//    mangled_ppc("?begin@?$c_data_iterator_const@Us_lock_node@@@@QAAXPBUs_data_array@@@Z");
//};

//public: bool c_data_iterator_const<struct s_lock_node>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator_const@Us_lock_node@@@@QAA_NXZ");
//};

//public: struct s_lock_node const * c_data_iterator_const<struct s_lock_node>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator_const@Us_lock_node@@@@QBAPBUs_lock_node@@XZ");
//};

//public: long c_data_iterator_const<struct s_lock_node>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator_const@Us_lock_node@@@@QBAJXZ");
//};

//public: long c_data_iterator_const<struct s_lock_node>::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@?$c_data_iterator_const@Us_lock_node@@@@QBAJXZ");
//};

//public: bool c_static_stack<long, 128>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0IA@@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 128>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0IA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<long, 128>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$0IA@@@QAAJXZ");
//};

//public: long * c_static_stack<long, 128>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0IA@@@QAAPAJJ@Z");
//};

//public: bool c_static_stack<long, 128>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$0IA@@@QBA_NXZ");
//};

//public: long const & s_static_array<long, 4>::operator[]<enum e_lock_link_type>(enum e_lock_link_type) const
//{
//    mangled_ppc("??$?AW4e_lock_link_type@@@?$s_static_array@J$03@@QBAABJW4e_lock_link_type@@@Z");
//};

//public: long & s_static_array<long, 128>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@J$0IA@@@QAAAAJH@Z");
//};

//public: struct s_lock_node const *& s_static_array<struct s_lock_node const *, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBUs_lock_node@@$07@@QAAAAPBUs_lock_node@@J@Z");
//};

//public: long & s_static_array<long, 4>::operator[]<enum e_lock_link_type>(enum e_lock_link_type)
//{
//    mangled_ppc("??$?AW4e_lock_link_type@@@?$s_static_array@J$03@@QAAAAJW4e_lock_link_type@@@Z");
//};

//public: bool const s_static_bitarray<128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_bitarray@$0IA@@@QBA?B_NJ@Z");
//};

//public: static bool s_static_array<long, 4>::valid<enum e_lock_link_type>(enum e_lock_link_type)
//{
//    mangled_ppc("??$valid@W4e_lock_link_type@@@?$s_static_array@J$03@@SA_NW4e_lock_link_type@@@Z");
//};

//public: static bool s_static_array<long, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@J$0IA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_lock_node const *, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBUs_lock_node@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_bitarray<128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_bitarray@$0IA@@@SA_NJ@Z");
//};

