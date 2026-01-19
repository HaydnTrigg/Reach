/* ---------- headers */

#include "omaha\interface\cui\cui_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_cui_component::c_cui_component(struct s_cui_component_description const *);
// protected: c_cui_component::c_cui_component(class c_cui_component const &);
// public: bool c_cui_component::initialize_mode(enum e_cui_component_mode);
// public: class c_cui_component * c_cui_component::get_first_child_of_type(long) const;
// public: class c_cui_component * c_cui_component::get_last_child_of_type(long) const;
// public: class c_cui_component * c_cui_component::get_prev_child_of_type(class c_cui_component const *, long) const;
// public: class c_cui_component * c_cui_component::get_next_child_of_type(class c_cui_component const *, long) const;
// public: bool c_cui_component::replicates_descendant(class c_cui_component const *) const;
// protected: virtual bool c_cui_component::do_initialize_mode(enum e_cui_component_mode);
// protected: virtual bool c_cui_component::do_add_child(class c_cui_component *);
// protected: virtual bool c_cui_component::do_insert_child(long, class c_cui_component *);
// protected: virtual bool c_cui_component::do_remove_child(class c_cui_component *);
// protected: virtual long c_cui_component::do_get_child_count(void) const;
// protected: virtual class c_cui_component * c_cui_component::do_get_first_child(void) const;
// protected: virtual class c_cui_component * c_cui_component::do_get_last_child(void) const;
// protected: virtual bool c_cui_component::do_replicates_descendant(class c_cui_component const *) const;
// private: virtual class c_cui_component * c_cui_component::do_replicate(void) const;
// private: void c_cui_component::initialize_children(class c_cui_update_context *);
// private: void c_cui_component::pre_update_children(class c_cui_update_context *);
// protected: virtual void c_cui_component::do_initialize(class c_cui_update_context *);
// protected: virtual void c_cui_component::do_pre_update(class c_cui_update_context *);
// public: void c_cui_component::update(class c_cui_update_context *);
// protected: virtual void c_cui_component::do_update(class c_cui_update_context *);
// class c_cui_component * cui_component_get_root(class c_cui_component const *);
// class c_cui_component * cui_component_get_ancestor_of_type(class c_cui_component const *, long);
// bool cui_component_is_descendant(class c_cui_component const *, class c_cui_component const *);
// class c_cui_component * cui_component_get_first_descendant_of_type(class c_cui_component *, long);
// class c_cui_component * cui_component_get_first_filtered_descendant_of_type(class c_cui_component *, long, bool (*)(class c_cui_component const *));
// class c_cui_component * cui_component_get_first_descendant(class c_cui_component const *, long);
// class c_cui_component * cui_component_replicate(class c_cui_component const *);
// class c_cui_component * replicate_component(class c_cui_component const *, class c_cui_component *, class c_cui_component *, class c_cui_binding_context *);
// public: void c_cui_binding_context::set_parent(class c_cui_binding_context *);
// public: unsigned int c_cui_binding_context::get_component_capacity(void) const;
// public: class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > const * c_cui_binding_context::get_components(void) const;
// public: class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > * c_cui_binding_context::get_components(void);
// public: unsigned int c_cui_binding_context::get_sequence_capacity(void) const;
// public: class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > const * c_cui_binding_context::get_sequence(void) const;
// public: class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > * c_cui_binding_context::get_sequence(void);
// public: c_enum<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>(enum e_cui_component_mode);
// public: unsigned int c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::capacity(void) const;
// public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::begin(void);
// public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::begin(void) const;
// public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::end(void);
// public: unsigned int c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::size(void) const;
// public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::end(void) const;
// public: unsigned int c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::capacity(void) const;
// public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::begin(void) const;
// public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::end(void) const;
// public: unsigned int c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::size(void) const;
// public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::data(void);
// public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::data(void) const;
// public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::data(void) const;
// public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::erase(class c_cui_component *const *);
// bool cui_vector_push_back<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > &, class c_cui_component *const &);
// bool cui_vector_push_back<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > &, struct s_cui_property_binding const &);
// void ui_track_delete<class c_cui_binding_context>(class c_cui_binding_context *);
// public: void * c_cui_binding_context::`scalar deleting destructor'(unsigned int);
// public: c_cui_binding_context::~c_cui_binding_context(void);
// public: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::full(void) const;
// private: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::position_valid(class c_cui_component *const *) const;
// public: bool c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::full(void) const;
// public: c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::~c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(void);
// public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::push_back(class c_cui_component *const &);
// private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::collapse(class c_cui_component *const *, class c_cui_component *const *);
// public: c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::~c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(void);
// public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::push_back(struct s_cui_property_binding const &);
// private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::get(unsigned int);
// private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::get_mutable_iterator(class c_cui_component *const *);
// public: void c_cui_placement_allocator<class c_cui_component *>::deallocate(class c_cui_component **, unsigned int);
// private: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::get(unsigned int);
// public: void c_cui_placement_allocator<struct s_cui_property_binding>::deallocate(struct s_cui_property_binding *, unsigned int);
// public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::data(void);
// public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::pop_back(void);
// public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::clear(void);
// public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::clear(void);
// public: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::empty(void) const;
// public: bool c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::empty(void) const;
// public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::pop_back(void);
// public: class c_cui_component * c_cui_binding_scope::get_replicator(void) const;
// public: void c_cui_binding_scope::set_replicator(class c_cui_component *);
// public: void c_cui_binding_scope::set_root(class c_cui_component *);
// public: void c_cui_binding_scope::set_binding_context(class c_cui_binding_context *);
// merged_849B38B8;
// public: virtual c_cui_component::~c_cui_component(void);
// public: bool c_cui_component::add_child(class c_cui_component *);
// public: class c_cui_component * c_cui_component::get_last_child(void) const;
// public: class c_cui_component * c_cui_component::get_prev_child(class c_cui_component const *) const;

//public: c_cui_component::c_cui_component(struct s_cui_component_description const *)
//{
//    mangled_ppc("??0c_cui_component@@QAA@PBUs_cui_component_description@@@Z");
//};

//protected: c_cui_component::c_cui_component(class c_cui_component const &)
//{
//    mangled_ppc("??0c_cui_component@@IAA@ABV0@@Z");
//};

//public: bool c_cui_component::initialize_mode(enum e_cui_component_mode)
//{
//    mangled_ppc("?initialize_mode@c_cui_component@@QAA_NW4e_cui_component_mode@@@Z");
//};

//public: class c_cui_component * c_cui_component::get_first_child_of_type(long) const
//{
//    mangled_ppc("?get_first_child_of_type@c_cui_component@@QBAPAV1@J@Z");
//};

//public: class c_cui_component * c_cui_component::get_last_child_of_type(long) const
//{
//    mangled_ppc("?get_last_child_of_type@c_cui_component@@QBAPAV1@J@Z");
//};

//public: class c_cui_component * c_cui_component::get_prev_child_of_type(class c_cui_component const *, long) const
//{
//    mangled_ppc("?get_prev_child_of_type@c_cui_component@@QBAPAV1@PBV1@J@Z");
//};

//public: class c_cui_component * c_cui_component::get_next_child_of_type(class c_cui_component const *, long) const
//{
//    mangled_ppc("?get_next_child_of_type@c_cui_component@@QBAPAV1@PBV1@J@Z");
//};

//public: bool c_cui_component::replicates_descendant(class c_cui_component const *) const
//{
//    mangled_ppc("?replicates_descendant@c_cui_component@@QBA_NPBV1@@Z");
//};

//protected: virtual bool c_cui_component::do_initialize_mode(enum e_cui_component_mode)
//{
//    mangled_ppc("?do_initialize_mode@c_cui_component@@MAA_NW4e_cui_component_mode@@@Z");
//};

//protected: virtual bool c_cui_component::do_add_child(class c_cui_component *)
//{
//    mangled_ppc("?do_add_child@c_cui_component@@MAA_NPAV1@@Z");
//};

//protected: virtual bool c_cui_component::do_insert_child(long, class c_cui_component *)
//{
//    mangled_ppc("?do_insert_child@c_cui_component@@MAA_NJPAV1@@Z");
//};

//protected: virtual bool c_cui_component::do_remove_child(class c_cui_component *)
//{
//    mangled_ppc("?do_remove_child@c_cui_component@@MAA_NPAV1@@Z");
//};

//protected: virtual long c_cui_component::do_get_child_count(void) const
//{
//    mangled_ppc("?do_get_child_count@c_cui_component@@MBAJXZ");
//};

//protected: virtual class c_cui_component * c_cui_component::do_get_first_child(void) const
//{
//    mangled_ppc("?do_get_first_child@c_cui_component@@MBAPAV1@XZ");
//};

//protected: virtual class c_cui_component * c_cui_component::do_get_last_child(void) const
//{
//    mangled_ppc("?do_get_last_child@c_cui_component@@MBAPAV1@XZ");
//};

//protected: virtual bool c_cui_component::do_replicates_descendant(class c_cui_component const *) const
//{
//    mangled_ppc("?do_replicates_descendant@c_cui_component@@MBA_NPBV1@@Z");
//};

//private: virtual class c_cui_component * c_cui_component::do_replicate(void) const
//{
//    mangled_ppc("?do_replicate@c_cui_component@@EBAPAV1@XZ");
//};

//private: void c_cui_component::initialize_children(class c_cui_update_context *)
//{
//    mangled_ppc("?initialize_children@c_cui_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_cui_component::pre_update_children(class c_cui_update_context *)
//{
//    mangled_ppc("?pre_update_children@c_cui_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_cui_component::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_cui_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_cui_component::do_pre_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_pre_update@c_cui_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_cui_component::update(class c_cui_update_context *)
//{
//    mangled_ppc("?update@c_cui_component@@QAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_cui_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_cui_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//class c_cui_component * cui_component_get_root(class c_cui_component const *)
//{
//    mangled_ppc("?cui_component_get_root@@YAPAVc_cui_component@@PBV1@@Z");
//};

//class c_cui_component * cui_component_get_ancestor_of_type(class c_cui_component const *, long)
//{
//    mangled_ppc("?cui_component_get_ancestor_of_type@@YAPAVc_cui_component@@PBV1@J@Z");
//};

//bool cui_component_is_descendant(class c_cui_component const *, class c_cui_component const *)
//{
//    mangled_ppc("?cui_component_is_descendant@@YA_NPBVc_cui_component@@0@Z");
//};

//class c_cui_component * cui_component_get_first_descendant_of_type(class c_cui_component *, long)
//{
//    mangled_ppc("?cui_component_get_first_descendant_of_type@@YAPAVc_cui_component@@PAV1@J@Z");
//};

//class c_cui_component * cui_component_get_first_filtered_descendant_of_type(class c_cui_component *, long, bool (*)(class c_cui_component const *))
//{
//    mangled_ppc("?cui_component_get_first_filtered_descendant_of_type@@YAPAVc_cui_component@@PAV1@JP6A_NPBV1@@Z@Z");
//};

//class c_cui_component * cui_component_get_first_descendant(class c_cui_component const *, long)
//{
//    mangled_ppc("?cui_component_get_first_descendant@@YAPAVc_cui_component@@PBV1@J@Z");
//};

//class c_cui_component * cui_component_replicate(class c_cui_component const *)
//{
//    mangled_ppc("?cui_component_replicate@@YAPAVc_cui_component@@PBV1@@Z");
//};

//class c_cui_component * replicate_component(class c_cui_component const *, class c_cui_component *, class c_cui_component *, class c_cui_binding_context *)
//{
//    mangled_ppc("?replicate_component@@YAPAVc_cui_component@@PBV1@PAV1@1PAVc_cui_binding_context@@@Z");
//};

//public: void c_cui_binding_context::set_parent(class c_cui_binding_context *)
//{
//    mangled_ppc("?set_parent@c_cui_binding_context@@QAAXPAV1@@Z");
//};

//public: unsigned int c_cui_binding_context::get_component_capacity(void) const
//{
//    mangled_ppc("?get_component_capacity@c_cui_binding_context@@QBAIXZ");
//};

//public: class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > const * c_cui_binding_context::get_components(void) const
//{
//    mangled_ppc("?get_components@c_cui_binding_context@@QBAPBV?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@XZ");
//};

//public: class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > * c_cui_binding_context::get_components(void)
//{
//    mangled_ppc("?get_components@c_cui_binding_context@@QAAPAV?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@XZ");
//};

//public: unsigned int c_cui_binding_context::get_sequence_capacity(void) const
//{
//    mangled_ppc("?get_sequence_capacity@c_cui_binding_context@@QBAIXZ");
//};

//public: class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > const * c_cui_binding_context::get_sequence(void) const
//{
//    mangled_ppc("?get_sequence@c_cui_binding_context@@QBAPBV?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@XZ");
//};

//public: class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > * c_cui_binding_context::get_sequence(void)
//{
//    mangled_ppc("?get_sequence@c_cui_binding_context@@QAAPAV?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@XZ");
//};

//public: c_enum<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>::c_enum<enum e_cui_component_mode, char, -1, 3, struct s_default_enum_string_resolver>(enum e_cui_component_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_cui_component_mode@@D$0?0$02Us_default_enum_string_resolver@@@@QAA@W4e_cui_component_mode@@@Z");
//};

//public: unsigned int c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::capacity(void) const
//{
//    mangled_ppc("?capacity@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBAIXZ");
//};

//public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBAPBQAVc_cui_component@@XZ");
//};

//public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::end(void)
//{
//    mangled_ppc("?end@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: unsigned int c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBAIXZ");
//};

//public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBAPBQAVc_cui_component@@XZ");
//};

//public: unsigned int c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::capacity(void) const
//{
//    mangled_ppc("?capacity@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBAIXZ");
//};

//public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::begin(void) const
//{
//    mangled_ppc("?begin@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBAPBUs_cui_property_binding@@XZ");
//};

//public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::end(void) const
//{
//    mangled_ppc("?end@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBAPBUs_cui_property_binding@@XZ");
//};

//public: unsigned int c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBAIXZ");
//};

//public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::data(void)
//{
//    mangled_ppc("?data@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: class c_cui_component *const * c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBAPBQAVc_cui_component@@XZ");
//};

//public: struct s_cui_property_binding const * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::data(void) const
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBAPBUs_cui_property_binding@@XZ");
//};

//public: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::erase(class c_cui_component *const *)
//{
//    mangled_ppc("?erase@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAPAPAVc_cui_component@@PBQAV2@@Z");
//};

//bool cui_vector_push_back<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(class c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> > &, class c_cui_component *const &)
//{
//    mangled_ppc("??$cui_vector_push_back@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@YA_NAAV?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@ABQAVc_cui_component@@@Z");
//};

//bool cui_vector_push_back<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(class c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> > &, struct s_cui_property_binding const &)
//{
//    mangled_ppc("??$cui_vector_push_back@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@YA_NAAV?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@ABUs_cui_property_binding@@@Z");
//};

//void ui_track_delete<class c_cui_binding_context>(class c_cui_binding_context *)
//{
//    mangled_ppc("??$ui_track_delete@Vc_cui_binding_context@@@@YAXPAVc_cui_binding_context@@@Z");
//};

//public: void * c_cui_binding_context::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_binding_context@@QAAPAXI@Z");
//};

//public: c_cui_binding_context::~c_cui_binding_context(void)
//{
//    mangled_ppc("??1c_cui_binding_context@@QAA@XZ");
//};

//public: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBA_NXZ");
//};

//private: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::position_valid(class c_cui_component *const *) const
//{
//    mangled_ppc("?position_valid@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@ABA_NPBQAVc_cui_component@@@Z");
//};

//public: bool c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBA_NXZ");
//};

//public: c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::~c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >(void)
//{
//    mangled_ppc("??1?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAA@XZ");
//};

//public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::push_back(class c_cui_component *const &)
//{
//    mangled_ppc("?push_back@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAXABQAVc_cui_component@@@Z");
//};

//private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::collapse(class c_cui_component *const *, class c_cui_component *const *)
//{
//    mangled_ppc("?collapse@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@AAAPAPAVc_cui_component@@PBQAV2@0@Z");
//};

//public: c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::~c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >(void)
//{
//    mangled_ppc("??1?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAA@XZ");
//};

//public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::push_back(struct s_cui_property_binding const &)
//{
//    mangled_ppc("?push_back@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAXABUs_cui_property_binding@@@Z");
//};

//private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@AAAPAPAVc_cui_component@@I@Z");
//};

//private: class c_cui_component ** c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::get_mutable_iterator(class c_cui_component *const *)
//{
//    mangled_ppc("?get_mutable_iterator@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@AAAPAPAVc_cui_component@@PBQAV2@@Z");
//};

//public: void c_cui_placement_allocator<class c_cui_component *>::deallocate(class c_cui_component **, unsigned int)
//{
//    mangled_ppc("?deallocate@?$c_cui_placement_allocator@PAVc_cui_component@@@@QAAXPAPAVc_cui_component@@I@Z");
//};

//private: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@AAAPAUs_cui_property_binding@@I@Z");
//};

//public: void c_cui_placement_allocator<struct s_cui_property_binding>::deallocate(struct s_cui_property_binding *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$c_cui_placement_allocator@Us_cui_property_binding@@@@QAAXPAUs_cui_property_binding@@I@Z");
//};

//public: struct s_cui_property_binding * c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::data(void)
//{
//    mangled_ppc("?data@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAXXZ");
//};

//public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAXXZ");
//};

//public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAXXZ");
//};

//public: bool c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QBA_NXZ");
//};

//public: bool c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QBA_NXZ");
//};

//public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAXXZ");
//};

//public: class c_cui_component * c_cui_binding_scope::get_replicator(void) const
//{
//    mangled_ppc("?get_replicator@c_cui_binding_scope@@QBAPAVc_cui_component@@XZ");
//};

//public: void c_cui_binding_scope::set_replicator(class c_cui_component *)
//{
//    mangled_ppc("?set_replicator@c_cui_binding_scope@@QAAXPAVc_cui_component@@@Z");
//};

//public: void c_cui_binding_scope::set_root(class c_cui_component *)
//{
//    mangled_ppc("?set_root@c_cui_binding_scope@@QAAXPAVc_cui_component@@@Z");
//};

//public: void c_cui_binding_scope::set_binding_context(class c_cui_binding_context *)
//{
//    mangled_ppc("?set_binding_context@c_cui_binding_scope@@QAAXPAVc_cui_binding_context@@@Z");
//};

//merged_849B38B8
//{
//    mangled_ppc("merged_849B38B8");
//};

//public: virtual c_cui_component::~c_cui_component(void)
//{
//    mangled_ppc("??1c_cui_component@@UAA@XZ");
//};

//public: bool c_cui_component::add_child(class c_cui_component *)
//{
//    mangled_ppc("?add_child@c_cui_component@@QAA_NPAV1@@Z");
//};

//public: class c_cui_component * c_cui_component::get_last_child(void) const
//{
//    mangled_ppc("?get_last_child@c_cui_component@@QBAPAV1@XZ");
//};

//public: class c_cui_component * c_cui_component::get_prev_child(class c_cui_component const *) const
//{
//    mangled_ppc("?get_prev_child@c_cui_component@@QBAPAV1@PBV1@@Z");
//};

