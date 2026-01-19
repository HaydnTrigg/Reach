/* ---------- headers */

#include "omaha\tag_files\tag_resource_cache_predictor.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@2JB"
// public: static long const c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::k_hash_invalid; // "?k_hash_invalid@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@2JB"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::find_entry(class c_static_hash_table_data<long, 2560> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@SAJPBV?$c_static_hash_table_data@J$0KAA@@@JJJ@Z@4JC"
// long volatile `public: static long __cdecl c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<long, 8192> const *, long, long, long)'::`32'::x_event_category_index; // "?x_event_category_index@?CA@??find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@J$0CAAA@@@JJJ@Z@4JC"

// public: void c_tag_resource_cache_prediction_table::clear(void);
// public: bool c_tag_resource_cache_prediction_table::predict_from_molecule(long, class c_wrapped_flags, class c_wrapped_flags) const;
// public: void c_tag_resource_cache_prediction_table::predict_from_atom(long, class c_wrapped_flags) const;
// private: struct s_tag_resource_prediction_atom const * c_tag_resource_cache_prediction_table::get_prediction_atom(long) const;
// public: void c_tag_resource_cache_prediction_table::update_prediction_quanta(class c_wrapped_array<struct s_tag_resource_prediction_quantum const>);
// public: void c_tag_resource_cache_prediction_table::update_prediction_atoms(class c_wrapped_array<struct s_tag_resource_prediction_atom const>);
// public: void c_tag_resource_cache_prediction_table::update_prediction_molecules(class c_wrapped_array<long const>, class c_wrapped_array<struct s_tag_resource_prediction_molecule const>);
// public: void c_tag_resource_cache_dynamic_predictor::initialize(void);
// public: void c_tag_resource_cache_dynamic_predictor::initialize_for_tags(class c_tag_resource_prediction_atom_generator *);
// public: void c_tag_resource_cache_dynamic_predictor::reset(void);
// public: void c_tag_resource_cache_dynamic_predictor::dispose(void);
// public: void c_tag_resource_cache_dynamic_predictor::idle(void);
// public: bool c_tag_resource_cache_dynamic_predictor::ran_out_of_memory(void);
// public: long c_tag_resource_cache_dynamic_predictor::allocate_prediction_atom(void);
// public: void c_tag_resource_cache_dynamic_predictor::free_prediction_atom(long);
// public: long c_tag_resource_cache_dynamic_predictor::find_or_create_prediction_molecule(long, long, long);
// public: bool c_tag_resource_cache_dynamic_predictor::valid_prediction_molecule(long) const;
// public: bool c_tag_resource_cache_dynamic_predictor::begin_prediction_molecule(long);
// public: void c_tag_resource_cache_dynamic_predictor::end_prediction_molecule(long);
// private: void c_tag_resource_cache_dynamic_predictor::begin_atomic_prediction_group(long);
// private: void c_tag_resource_cache_dynamic_predictor::end_atomic_prediction_group(long);
// private: void c_tag_resource_cache_dynamic_predictor::try_to_add_atom_to_molecule(long, long);
// protected: void c_tag_resource_cache_precompiled_predictor::predict_atomic_prediction_group(long, class c_wrapped_flags);
// private: long c_tag_resource_cache_dynamic_predictor::find_identical_atomic_prediction_group(long);
// public: c_tag_resource_prediction_quantum_compare::c_tag_resource_prediction_quantum_compare(long);
// public: void c_tag_resource_cache_dynamic_predictor::add_resource(long, long, long, enum e_tag_resource_lod);
// public: void c_tag_index_hash_table::reset(void);
// public: bool c_tag_index_hash_table::find_tag_entry(long, long *);
// public: bool c_tag_index_hash_table::add_tag_entry(long, long);
// public: void c_tag_resource_cache_dynamic_predictor::predict_tag(long, long, class c_wrapped_flags);
// public: void c_tag_resource_cache_dynamic_predictor::add_tag(long, long);
// public: c_tag_resource_cache_dynamic_predictor_atom_collector::c_tag_resource_cache_dynamic_predictor_atom_collector(class c_tag_resource_cache_dynamic_predictor *, long);
// public: virtual bool c_tag_resource_cache_dynamic_predictor_atom_collector::add_resource(long, long);
// public: c_tag_resource_prediction_atom_collector::c_tag_resource_prediction_atom_collector(void);
// public: void c_tag_resource_cache_dynamic_predictor::verify(void);
// private: struct s_tag_resource_prediction_atom * c_tag_resource_cache_dynamic_predictor::get_prediction_atom(long);
// public: class c_wrapped_array<struct s_tag_resource_prediction_quantum const> c_tag_resource_cache_dynamic_predictor::get_prediction_quanta(void) const;
// public: class c_wrapped_array<struct s_tag_resource_prediction_atom const> c_tag_resource_cache_dynamic_predictor::get_prediction_atoms(void) const;
// public: class c_wrapped_array<long const> c_tag_resource_cache_dynamic_predictor::get_prediction_molecule_atoms(void) const;
// public: class c_wrapped_array<struct s_tag_resource_prediction_molecule const> c_tag_resource_cache_dynamic_predictor::get_prediction_molecules(void) const;
// private: void c_tag_resource_cache_dynamic_predictor::try_to_add_unique_prediction_quantum(long, unsigned short *, long, enum e_tag_resource_lod);
// private: bool c_tag_resource_cache_dynamic_predictor::try_to_add_unique_prediction_atom(long, unsigned short *, long);
// public: void c_tag_resource_cache_precompiled_predictor::setup(class c_wrapped_array<struct s_tag_resource_prediction_molecule_key const>, class c_wrapped_array<struct s_tag_resource_prediction_quantum const>, class c_wrapped_array<struct s_tag_resource_prediction_atom const>, class c_wrapped_array<long const>, class c_wrapped_array<struct s_tag_resource_prediction_molecule const>);
// public: void c_tag_resource_cache_precompiled_predictor::clear(void);
// public: long c_tag_resource_cache_precompiled_predictor::find_prediction_molecule(long, long, long) const;
// protected: long * c_tag_resource_cache_precompiled_predictor::add_prediction_molecule_reference(long, long, long);
// public: bool c_tag_resource_cache_precompiled_predictor::predict_from_molecule(long, class c_wrapped_flags, class c_wrapped_flags) const;
// protected: class c_tag_resource_cache_prediction_table * c_tag_resource_cache_precompiled_predictor::get_prediction_table(void);
// public: void c_simple_hash_table<long, 2560, 3307, 0, 0>::clear_all(void);
// public: long c_simple_hash_table<long, 2560, 3307, 0, 0>::add_entry(long, long, long);
// public: long * c_simple_hash_table<long, 2560, 3307, 0, 0>::get_element(long);
// public: long c_simple_hash_table<long, 2560, 3307, 0, 0>::find_entry(long, long, long) const;
// public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::c_wrapped_array<struct s_tag_resource_prediction_quantum const>(struct s_tag_resource_prediction_quantum const *, long);
// public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::c_wrapped_array<struct s_tag_resource_prediction_quantum const>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *);
// public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::clear(void);
// public: struct s_tag_resource_prediction_quantum const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::operator[](long) const;
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::get_element(long) const;
// public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::clear(void);
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::get_element(long) const;
// public: void c_wrapped_array_no_init<long const>::clear(void);
// public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::clear(void);
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::get_element(long) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::valid_index(long) const;
// public: void c_simple_hash_table<long, 8192, 3307, 3, 337>::clear_all(void);
// public: long c_simple_hash_table<long, 8192, 3307, 3, 337>::add_entry(long, long, long);
// public: long * c_simple_hash_table<long, 8192, 3307, 3, 337>::get_element(long);
// public: long const * c_simple_hash_table<long, 8192, 3307, 3, 337>::get_element(long) const;
// public: long c_simple_hash_table<long, 8192, 3307, 3, 337>::find_entry(long, long, long) const;
// public: struct s_tag_resource_prediction_quantum * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void);
// public: struct s_tag_resource_prediction_quantum * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::end(void);
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::get_maximum_count(void) const;
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::resize(long);
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::clear(void);
// public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::full(void) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::count(void) const;
// public: struct s_tag_resource_prediction_quantum & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::add_element(void);
// public: struct s_tag_resource_prediction_quantum & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::operator[](long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::valid_index(long) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::new_element_index(void);
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::get_maximum_count(void) const;
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::resize(long);
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::clear(void);
// public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::full(void) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::count(void) const;
// public: struct s_tag_resource_prediction_atom * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::get_element(long);
// public: long * c_static_sized_dynamic_array<long, 40960>::begin(void);
// public: long c_static_sized_dynamic_array<long, 40960>::get_maximum_count(void) const;
// public: void c_static_sized_dynamic_array<long, 40960>::resize(long);
// public: void c_static_sized_dynamic_array<long, 40960>::clear(void);
// public: bool c_static_sized_dynamic_array<long, 40960>::full(void) const;
// public: long c_static_sized_dynamic_array<long, 40960>::count(void) const;
// public: long & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::add_element(void);
// public: long & c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::operator[](long);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::valid_index(long) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::new_element_index(void);
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::get_maximum_count(void) const;
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::clear(void);
// public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::full(void) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::count(void) const;
// public: struct s_tag_resource_prediction_molecule * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_element(long);
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_element(long) const;
// public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>::count(void) const;
// public: struct s_tag_resource_prediction_molecule_key const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::get_element(long);
// public: long * c_static_hash_table_data<long, 2560>::get_element(long);
// public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::begin(void) const;
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::valid_index(long) const;
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::count(void) const;
// public: long * c_static_hash_table_data<long, 8192>::get_element(long);
// public: long const * c_static_hash_table_data<long, 8192>::get_element(long) const;
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::new_element_index(void);
// public: struct s_tag_resource_prediction_quantum * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_element(long);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> >::get_super_class(void);
// public: static long s_static_array<struct s_tag_resource_prediction_quantum, 20480>::get_count(void);
// public: struct s_tag_resource_prediction_quantum * s_static_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void);
// public: struct s_tag_resource_prediction_atom * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::begin(void);
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::valid_index(long) const;
// public: static long s_static_array<struct s_tag_resource_prediction_atom, 40960>::get_count(void);
// public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::new_element_index(void);
// public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_element(long);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::count(void) const;
// public: class c_static_sized_dynamic_array<long, 40960> * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 40960> >::get_super_class(void);
// public: static long s_static_array<long, 40960>::get_count(void);
// public: long * s_static_array<long, 40960>::begin(void);
// public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::resize(long);
// public: struct s_tag_resource_prediction_molecule * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::begin(void);
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::begin(void) const;
// public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::valid_index(long) const;
// public: static long s_static_array<struct s_tag_resource_prediction_molecule, 8192>::get_count(void);
// public: struct s_tag_resource_prediction_molecule_key const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::valid_index(long) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::count(void) const;
// public: struct s_tag_resource_prediction_atom const * c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::begin(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_molecule const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::begin(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> >::get_super_class(void) const;
// public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::new_element_index(void);
// private: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_super_class(void);
// public: struct s_tag_resource_prediction_quantum * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::begin(void);
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_atom * c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::begin(void);
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> >::get_super_class(void);
// public: long c_static_sized_dynamic_array<long, 40960>::new_element_index(void);
// private: class c_static_sized_dynamic_array<long, 40960> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_super_class(void);
// public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::begin(void);
// public: class c_static_sized_dynamic_array<long, 40960> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 40960> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_molecule * c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void);
// public: struct s_tag_resource_prediction_molecule const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void) const;
// public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> >::get_super_class(void);
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_molecule_key const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::count(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> >::get_super_class(void);
// public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::count(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::count(void) const;
// public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> >::get_super_class(void) const;
// public: struct s_tag_resource_prediction_atom * s_static_array<struct s_tag_resource_prediction_atom, 40960>::begin(void);
// public: struct s_tag_resource_prediction_molecule * s_static_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void);
// public: struct s_tag_resource_prediction_molecule const * s_static_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void) const;
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> >::get_super_class(void) const;
// public: void c_static_hash_table_data<long, 2560>::clear_all(void);
// public: void c_static_hash_table_data<long, 8192>::clear_all(void);
// bool find_container_value<class c_wrapped_array<long const>, long, long const *>(class c_wrapped_array<long const> const &, long const &, long const **);
// bool find_if_container_value<class c_wrapped_array<struct s_tag_resource_prediction_quantum const>, class c_tag_resource_prediction_quantum_compare, struct s_tag_resource_prediction_quantum const *>(class c_wrapped_array<struct s_tag_resource_prediction_quantum const> const &, class c_tag_resource_prediction_quantum_compare, struct s_tag_resource_prediction_quantum const **);
// public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum> const &);
// public: c_wrapped_array<struct s_tag_resource_prediction_atom const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom> const &);
// public: c_wrapped_array<long const>::ctor<class c_static_sized_dynamic_array<long, 40960>, long>(class c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long> const &);
// public: c_wrapped_array<struct s_tag_resource_prediction_molecule const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule> const &);
// public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::ctor<struct s_tag_resource_prediction_quantum const>(class c_wrapped_array<struct s_tag_resource_prediction_quantum const> &);
// public: c_wrapped_array<struct s_tag_resource_prediction_atom const>::ctor<struct s_tag_resource_prediction_atom const>(class c_wrapped_array<struct s_tag_resource_prediction_atom const> &);
// public: c_wrapped_array<struct s_tag_resource_prediction_molecule const>::ctor<struct s_tag_resource_prediction_molecule const>(class c_wrapped_array<struct s_tag_resource_prediction_molecule const> &);
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::add_entry(class c_static_hash_table_data<long, 2560> *, long, long, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::find_entry(class c_static_hash_table_data<long, 2560> const *, long, long, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<long, 8192> *, long, long, long);
// public: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<long, 8192> const *, long, long, long);
// public: static bool s_static_array<struct s_tag_resource_prediction_atom, 40960>::valid<long>(long);
// public: static bool s_static_array<struct s_tag_resource_prediction_molecule, 8192>::valid<long>(long);
// public: struct c_static_hash_table_data<long, 2560>::s_data & s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::operator[]<long>(long);
// public: struct c_static_hash_table_data<long, 8192>::s_data & s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::operator[]<long>(long);
// public: struct c_static_hash_table_data<long, 8192>::s_data const & s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_tag_resource_prediction_quantum, 20480>::valid<long>(long);
// public: static bool s_static_array<long, 40960>::valid<long>(long);
// public: struct c_static_hash_table_data<long, 2560>::s_data * c_static_hash_table_data<long, 2560>::get_data(long);
// public: struct c_static_hash_table_data<long, 2560>::s_data const * c_static_hash_table_data<long, 2560>::get_data(long) const;
// public: long c_static_hash_table_data<long, 2560>::get_total_count(void) const;
// public: long c_static_hash_table_data<long, 2560>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<long, 2560>::increment_total_count(void);
// public: short * c_static_hash_table_data<long, 2560>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<long, 2560>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<long, 2560>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<long, 2560>::get_original_hash_entry(void) const;
// public: void s_static_array<short, 2560>::set_memory(long);
// public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::end(void) const;
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::get_elements(void);
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::get_elements(void);
// public: long const * c_wrapped_array_no_init<long const>::end(void) const;
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::get_elements(void);
// public: struct c_static_hash_table_data<long, 8192>::s_data * c_static_hash_table_data<long, 8192>::get_data(long);
// public: struct c_static_hash_table_data<long, 8192>::s_data const * c_static_hash_table_data<long, 8192>::get_data(long) const;
// public: long c_static_hash_table_data<long, 8192>::get_total_count(void) const;
// public: long c_static_hash_table_data<long, 8192>::get_maximum_count(void) const;
// public: void c_static_hash_table_data<long, 8192>::increment_total_count(void);
// public: short * c_static_hash_table_data<long, 8192>::get_hash_entry_count(void);
// public: short const * c_static_hash_table_data<long, 8192>::get_hash_entry_count(void) const;
// public: short * c_static_hash_table_data<long, 8192>::get_original_hash_entry(void);
// public: short const * c_static_hash_table_data<long, 8192>::get_original_hash_entry(void) const;
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_elements(void) const;
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::get_elements(void) const;
// public: long const * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_elements(void) const;
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_elements(void) const;
// public: short const * s_static_array<short, 2560>::get_elements(void) const;
// public: short * s_static_array<short, 2560>::get_elements(void);
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::begin(void);
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::begin(void);
// public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::begin(void);
// public: short const * s_static_array<short, 8192>::get_elements(void) const;
// public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::begin(void) const;
// public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::begin(void) const;
// public: long const * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::begin(void) const;
// public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> >::get_super_class(void);
// public: struct s_tag_resource_prediction_atom const * c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> >::get_super_class(void);
// public: struct s_tag_resource_prediction_molecule const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::begin(void);
// public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> >::get_super_class(void);
// public: struct s_tag_resource_prediction_quantum const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void) const;
// public: struct s_tag_resource_prediction_atom const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::begin(void) const;
// public: long const * c_static_sized_dynamic_array<long, 40960>::begin(void) const;
// public: struct s_tag_resource_prediction_quantum const * s_static_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void) const;
// public: struct s_tag_resource_prediction_atom const * s_static_array<struct s_tag_resource_prediction_atom, 40960>::begin(void) const;
// public: long const * s_static_array<long, 40960>::begin(void) const;
// struct s_tag_resource_prediction_quantum const * std::find_if<struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::calculate_hash(class c_static_hash_table_data<long, 2560> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::find_new_hash_entry(class c_static_hash_table_data<long, 2560> *, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<long, 8192> const *, long, long, long);
// private: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<long, 8192> *, long);
// public: static bool s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::valid<long>(long);
// public: static bool s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::valid<long>(long);
// public: struct c_static_hash_table_data<long, 2560>::s_data const & s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::operator[]<long>(long) const;
// struct s_tag_resource_prediction_quantum const * std::_Checked_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&);
// struct s_tag_resource_prediction_quantum const * std::_Find_if<struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare);
// public: bool c_tag_resource_prediction_quantum_compare::operator()(struct s_tag_resource_prediction_quantum const &) const;
// void std::_Checked_assign_from_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&, struct s_tag_resource_prediction_quantum const *const &);
// struct s_tag_resource_prediction_quantum const * std::_Checked_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<class c_tag_resource_prediction_quantum_compare>(class c_tag_resource_prediction_quantum_compare &, wchar_t const *, unsigned int);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *const &);
// void std::_Debug_range2<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_tag_resource_prediction_quantum>(struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int);

//public: void c_tag_resource_cache_prediction_table::clear(void)
//{
//    mangled_ppc("?clear@c_tag_resource_cache_prediction_table@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_prediction_table::predict_from_molecule(long, class c_wrapped_flags, class c_wrapped_flags) const
//{
//    mangled_ppc("?predict_from_molecule@c_tag_resource_cache_prediction_table@@QBA_NJVc_wrapped_flags@@0@Z");
//};

//public: void c_tag_resource_cache_prediction_table::predict_from_atom(long, class c_wrapped_flags) const
//{
//    mangled_ppc("?predict_from_atom@c_tag_resource_cache_prediction_table@@QBAXJVc_wrapped_flags@@@Z");
//};

//private: struct s_tag_resource_prediction_atom const * c_tag_resource_cache_prediction_table::get_prediction_atom(long) const
//{
//    mangled_ppc("?get_prediction_atom@c_tag_resource_cache_prediction_table@@ABAPBUs_tag_resource_prediction_atom@@J@Z");
//};

//public: void c_tag_resource_cache_prediction_table::update_prediction_quanta(class c_wrapped_array<struct s_tag_resource_prediction_quantum const>)
//{
//    mangled_ppc("?update_prediction_quanta@c_tag_resource_cache_prediction_table@@QAAXV?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@@Z");
//};

//public: void c_tag_resource_cache_prediction_table::update_prediction_atoms(class c_wrapped_array<struct s_tag_resource_prediction_atom const>)
//{
//    mangled_ppc("?update_prediction_atoms@c_tag_resource_cache_prediction_table@@QAAXV?$c_wrapped_array@$$CBUs_tag_resource_prediction_atom@@@@@Z");
//};

//public: void c_tag_resource_cache_prediction_table::update_prediction_molecules(class c_wrapped_array<long const>, class c_wrapped_array<struct s_tag_resource_prediction_molecule const>)
//{
//    mangled_ppc("?update_prediction_molecules@c_tag_resource_cache_prediction_table@@QAAXV?$c_wrapped_array@$$CBJ@@V?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule@@@@@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::initialize(void)
//{
//    mangled_ppc("?initialize@c_tag_resource_cache_dynamic_predictor@@QAAXXZ");
//};

//public: void c_tag_resource_cache_dynamic_predictor::initialize_for_tags(class c_tag_resource_prediction_atom_generator *)
//{
//    mangled_ppc("?initialize_for_tags@c_tag_resource_cache_dynamic_predictor@@QAAXPAVc_tag_resource_prediction_atom_generator@@@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::reset(void)
//{
//    mangled_ppc("?reset@c_tag_resource_cache_dynamic_predictor@@QAAXXZ");
//};

//public: void c_tag_resource_cache_dynamic_predictor::dispose(void)
//{
//    mangled_ppc("?dispose@c_tag_resource_cache_dynamic_predictor@@QAAXXZ");
//};

//public: void c_tag_resource_cache_dynamic_predictor::idle(void)
//{
//    mangled_ppc("?idle@c_tag_resource_cache_dynamic_predictor@@QAAXXZ");
//};

//public: bool c_tag_resource_cache_dynamic_predictor::ran_out_of_memory(void)
//{
//    mangled_ppc("?ran_out_of_memory@c_tag_resource_cache_dynamic_predictor@@QAA_NXZ");
//};

//public: long c_tag_resource_cache_dynamic_predictor::allocate_prediction_atom(void)
//{
//    mangled_ppc("?allocate_prediction_atom@c_tag_resource_cache_dynamic_predictor@@QAAJXZ");
//};

//public: void c_tag_resource_cache_dynamic_predictor::free_prediction_atom(long)
//{
//    mangled_ppc("?free_prediction_atom@c_tag_resource_cache_dynamic_predictor@@QAAXJ@Z");
//};

//public: long c_tag_resource_cache_dynamic_predictor::find_or_create_prediction_molecule(long, long, long)
//{
//    mangled_ppc("?find_or_create_prediction_molecule@c_tag_resource_cache_dynamic_predictor@@QAAJJJJ@Z");
//};

//public: bool c_tag_resource_cache_dynamic_predictor::valid_prediction_molecule(long) const
//{
//    mangled_ppc("?valid_prediction_molecule@c_tag_resource_cache_dynamic_predictor@@QBA_NJ@Z");
//};

//public: bool c_tag_resource_cache_dynamic_predictor::begin_prediction_molecule(long)
//{
//    mangled_ppc("?begin_prediction_molecule@c_tag_resource_cache_dynamic_predictor@@QAA_NJ@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::end_prediction_molecule(long)
//{
//    mangled_ppc("?end_prediction_molecule@c_tag_resource_cache_dynamic_predictor@@QAAXJ@Z");
//};

//private: void c_tag_resource_cache_dynamic_predictor::begin_atomic_prediction_group(long)
//{
//    mangled_ppc("?begin_atomic_prediction_group@c_tag_resource_cache_dynamic_predictor@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_dynamic_predictor::end_atomic_prediction_group(long)
//{
//    mangled_ppc("?end_atomic_prediction_group@c_tag_resource_cache_dynamic_predictor@@AAAXJ@Z");
//};

//private: void c_tag_resource_cache_dynamic_predictor::try_to_add_atom_to_molecule(long, long)
//{
//    mangled_ppc("?try_to_add_atom_to_molecule@c_tag_resource_cache_dynamic_predictor@@AAAXJJ@Z");
//};

//protected: void c_tag_resource_cache_precompiled_predictor::predict_atomic_prediction_group(long, class c_wrapped_flags)
//{
//    mangled_ppc("?predict_atomic_prediction_group@c_tag_resource_cache_precompiled_predictor@@IAAXJVc_wrapped_flags@@@Z");
//};

//private: long c_tag_resource_cache_dynamic_predictor::find_identical_atomic_prediction_group(long)
//{
//    mangled_ppc("?find_identical_atomic_prediction_group@c_tag_resource_cache_dynamic_predictor@@AAAJJ@Z");
//};

//public: c_tag_resource_prediction_quantum_compare::c_tag_resource_prediction_quantum_compare(long)
//{
//    mangled_ppc("??0c_tag_resource_prediction_quantum_compare@@QAA@J@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::add_resource(long, long, long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?add_resource@c_tag_resource_cache_dynamic_predictor@@QAAXJJJW4e_tag_resource_lod@@@Z");
//};

//public: void c_tag_index_hash_table::reset(void)
//{
//    mangled_ppc("?reset@c_tag_index_hash_table@@QAAXXZ");
//};

//public: bool c_tag_index_hash_table::find_tag_entry(long, long *)
//{
//    mangled_ppc("?find_tag_entry@c_tag_index_hash_table@@QAA_NJPAJ@Z");
//};

//public: bool c_tag_index_hash_table::add_tag_entry(long, long)
//{
//    mangled_ppc("?add_tag_entry@c_tag_index_hash_table@@QAA_NJJ@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::predict_tag(long, long, class c_wrapped_flags)
//{
//    mangled_ppc("?predict_tag@c_tag_resource_cache_dynamic_predictor@@QAAXJJVc_wrapped_flags@@@Z");
//};

//public: void c_tag_resource_cache_dynamic_predictor::add_tag(long, long)
//{
//    mangled_ppc("?add_tag@c_tag_resource_cache_dynamic_predictor@@QAAXJJ@Z");
//};

//public: c_tag_resource_cache_dynamic_predictor_atom_collector::c_tag_resource_cache_dynamic_predictor_atom_collector(class c_tag_resource_cache_dynamic_predictor *, long)
//{
//    mangled_ppc("??0c_tag_resource_cache_dynamic_predictor_atom_collector@@QAA@PAVc_tag_resource_cache_dynamic_predictor@@J@Z");
//};

//public: virtual bool c_tag_resource_cache_dynamic_predictor_atom_collector::add_resource(long, long)
//{
//    mangled_ppc("?add_resource@c_tag_resource_cache_dynamic_predictor_atom_collector@@UAA_NJJ@Z");
//};

//public: c_tag_resource_prediction_atom_collector::c_tag_resource_prediction_atom_collector(void)
//{
//    mangled_ppc("??0c_tag_resource_prediction_atom_collector@@QAA@XZ");
//};

//public: void c_tag_resource_cache_dynamic_predictor::verify(void)
//{
//    mangled_ppc("?verify@c_tag_resource_cache_dynamic_predictor@@QAAXXZ");
//};

//private: struct s_tag_resource_prediction_atom * c_tag_resource_cache_dynamic_predictor::get_prediction_atom(long)
//{
//    mangled_ppc("?get_prediction_atom@c_tag_resource_cache_dynamic_predictor@@AAAPAUs_tag_resource_prediction_atom@@J@Z");
//};

//public: class c_wrapped_array<struct s_tag_resource_prediction_quantum const> c_tag_resource_cache_dynamic_predictor::get_prediction_quanta(void) const
//{
//    mangled_ppc("?get_prediction_quanta@c_tag_resource_cache_dynamic_predictor@@QBA?AV?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@XZ");
//};

//public: class c_wrapped_array<struct s_tag_resource_prediction_atom const> c_tag_resource_cache_dynamic_predictor::get_prediction_atoms(void) const
//{
//    mangled_ppc("?get_prediction_atoms@c_tag_resource_cache_dynamic_predictor@@QBA?AV?$c_wrapped_array@$$CBUs_tag_resource_prediction_atom@@@@XZ");
//};

//public: class c_wrapped_array<long const> c_tag_resource_cache_dynamic_predictor::get_prediction_molecule_atoms(void) const
//{
//    mangled_ppc("?get_prediction_molecule_atoms@c_tag_resource_cache_dynamic_predictor@@QBA?AV?$c_wrapped_array@$$CBJ@@XZ");
//};

//public: class c_wrapped_array<struct s_tag_resource_prediction_molecule const> c_tag_resource_cache_dynamic_predictor::get_prediction_molecules(void) const
//{
//    mangled_ppc("?get_prediction_molecules@c_tag_resource_cache_dynamic_predictor@@QBA?AV?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule@@@@XZ");
//};

//private: void c_tag_resource_cache_dynamic_predictor::try_to_add_unique_prediction_quantum(long, unsigned short *, long, enum e_tag_resource_lod)
//{
//    mangled_ppc("?try_to_add_unique_prediction_quantum@c_tag_resource_cache_dynamic_predictor@@AAAXJPAGJW4e_tag_resource_lod@@@Z");
//};

//private: bool c_tag_resource_cache_dynamic_predictor::try_to_add_unique_prediction_atom(long, unsigned short *, long)
//{
//    mangled_ppc("?try_to_add_unique_prediction_atom@c_tag_resource_cache_dynamic_predictor@@AAA_NJPAGJ@Z");
//};

//public: void c_tag_resource_cache_precompiled_predictor::setup(class c_wrapped_array<struct s_tag_resource_prediction_molecule_key const>, class c_wrapped_array<struct s_tag_resource_prediction_quantum const>, class c_wrapped_array<struct s_tag_resource_prediction_atom const>, class c_wrapped_array<long const>, class c_wrapped_array<struct s_tag_resource_prediction_molecule const>)
//{
//    mangled_ppc("?setup@c_tag_resource_cache_precompiled_predictor@@QAAXV?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule_key@@@@V?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@V?$c_wrapped_array@$$CBUs_tag_resource_prediction_atom@@@@V?$c_wrapped_array@$$CBJ@@V?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule@@@@@Z");
//};

//public: void c_tag_resource_cache_precompiled_predictor::clear(void)
//{
//    mangled_ppc("?clear@c_tag_resource_cache_precompiled_predictor@@QAAXXZ");
//};

//public: long c_tag_resource_cache_precompiled_predictor::find_prediction_molecule(long, long, long) const
//{
//    mangled_ppc("?find_prediction_molecule@c_tag_resource_cache_precompiled_predictor@@QBAJJJJ@Z");
//};

//protected: long * c_tag_resource_cache_precompiled_predictor::add_prediction_molecule_reference(long, long, long)
//{
//    mangled_ppc("?add_prediction_molecule_reference@c_tag_resource_cache_precompiled_predictor@@IAAPAJJJJ@Z");
//};

//public: bool c_tag_resource_cache_precompiled_predictor::predict_from_molecule(long, class c_wrapped_flags, class c_wrapped_flags) const
//{
//    mangled_ppc("?predict_from_molecule@c_tag_resource_cache_precompiled_predictor@@QBA_NJVc_wrapped_flags@@0@Z");
//};

//protected: class c_tag_resource_cache_prediction_table * c_tag_resource_cache_precompiled_predictor::get_prediction_table(void)
//{
//    mangled_ppc("?get_prediction_table@c_tag_resource_cache_precompiled_predictor@@IAAPAVc_tag_resource_cache_prediction_table@@XZ");
//};

//public: void c_simple_hash_table<long, 2560, 3307, 0, 0>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_simple_hash_table@J$0KAA@$0MOL@$0A@$0A@@@QAAXXZ");
//};

//public: long c_simple_hash_table<long, 2560, 3307, 0, 0>::add_entry(long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_simple_hash_table@J$0KAA@$0MOL@$0A@$0A@@@QAAJJJJ@Z");
//};

//public: long * c_simple_hash_table<long, 2560, 3307, 0, 0>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_simple_hash_table@J$0KAA@$0MOL@$0A@$0A@@@QAAPAJJ@Z");
//};

//public: long c_simple_hash_table<long, 2560, 3307, 0, 0>::find_entry(long, long, long) const
//{
//    mangled_ppc("?find_entry@?$c_simple_hash_table@J$0KAA@$0MOL@$0A@$0A@@@QBAJJJJ@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::c_wrapped_array<struct s_tag_resource_prediction_quantum const>(struct s_tag_resource_prediction_quantum const *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@QAA@PBUs_tag_resource_prediction_quantum@@J@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::c_wrapped_array<struct s_tag_resource_prediction_quantum const>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *)
//{
//    mangled_ppc("??0?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@QAA@PBUs_tag_resource_prediction_quantum@@0@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@QAAXXZ");
//};

//public: struct s_tag_resource_prediction_quantum const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QBAABUs_tag_resource_prediction_quantum@@J@Z");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@J@Z");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@QAAXXZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QBAPBUs_tag_resource_prediction_atom@@J@Z");
//};

//public: void c_wrapped_array_no_init<long const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBJ@@QAAXXZ");
//};

//public: void c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::clear(void)
//{
//    mangled_ppc("?clear@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@QAAXXZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@J@Z");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QBA_NJ@Z");
//};

//public: void c_simple_hash_table<long, 8192, 3307, 3, 337>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_simple_hash_table@J$0CAAA@$0MOL@$02$0BFB@@@QAAXXZ");
//};

//public: long c_simple_hash_table<long, 8192, 3307, 3, 337>::add_entry(long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_simple_hash_table@J$0CAAA@$0MOL@$02$0BFB@@@QAAJJJJ@Z");
//};

//public: long * c_simple_hash_table<long, 8192, 3307, 3, 337>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_simple_hash_table@J$0CAAA@$0MOL@$02$0BFB@@@QAAPAJJ@Z");
//};

//public: long const * c_simple_hash_table<long, 8192, 3307, 3, 337>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_simple_hash_table@J$0CAAA@$0MOL@$02$0BFB@@@QBAPBJJ@Z");
//};

//public: long c_simple_hash_table<long, 8192, 3307, 3, 337>::find_entry(long, long, long) const
//{
//    mangled_ppc("?find_entry@?$c_simple_hash_table@J$0CAAA@$0MOL@$02$0BFB@@@QBAJJJJ@Z");
//};

//public: struct s_tag_resource_prediction_quantum * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAPAUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::end(void)
//{
//    mangled_ppc("?end@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAPAUs_tag_resource_prediction_quantum@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QBAJXZ");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAXJ@Z");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAXXZ");
//};

//public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QBAJXZ");
//};

//public: struct s_tag_resource_prediction_quantum & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QAAAAUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QAAAAUs_tag_resource_prediction_quantum@@J@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QBA_NJ@Z");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QAAJXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QBAJXZ");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QAAXJ@Z");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QAAXXZ");
//};

//public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QBAJXZ");
//};

//public: struct s_tag_resource_prediction_atom * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QAAPAUs_tag_resource_prediction_atom@@J@Z");
//};

//public: long * c_static_sized_dynamic_array<long, 40960>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@J$0KAAA@@@QAAPAJXZ");
//};

//public: long c_static_sized_dynamic_array<long, 40960>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_sized_dynamic_array@J$0KAAA@@@QBAJXZ");
//};

//public: void c_static_sized_dynamic_array<long, 40960>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@J$0KAAA@@@QAAXJ@Z");
//};

//public: void c_static_sized_dynamic_array<long, 40960>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@J$0KAAA@@@QAAXXZ");
//};

//public: bool c_static_sized_dynamic_array<long, 40960>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_sized_dynamic_array@J$0KAAA@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<long, 40960>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@J$0KAAA@@@QBAJXZ");
//};

//public: long & c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::add_element(void)
//{
//    mangled_ppc("?add_element@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QAAAAJXZ");
//};

//public: long & c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QAAAAJJ@Z");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QBA_NJ@Z");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QAAJXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QBAJXZ");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QAAXXZ");
//};

//public: bool c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QBA_NXZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QBAJXZ");
//};

//public: struct s_tag_resource_prediction_molecule * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QAAPAUs_tag_resource_prediction_molecule@@J@Z");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@J@Z");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@QBAJXZ");
//};

//public: struct s_tag_resource_prediction_molecule_key const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@$$CBUs_tag_resource_prediction_molecule_key@@@@QAAPBUs_tag_resource_prediction_molecule_key@@J@Z");
//};

//public: long * c_static_hash_table_data<long, 2560>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@J$0KAA@@@QAAPAJJ@Z");
//};

//public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QBA_NJ@Z");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QBAJXZ");
//};

//public: long * c_static_hash_table_data<long, 8192>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@J$0CAAA@@@QAAPAJJ@Z");
//};

//public: long const * c_static_hash_table_data<long, 8192>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$c_static_hash_table_data@J$0CAAA@@@QBAPBJJ@Z");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QAAJXZ");
//};

//public: struct s_tag_resource_prediction_quantum * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QAAPAUs_tag_resource_prediction_quantum@@J@Z");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@XZ");
//};

//public: static long s_static_array<struct s_tag_resource_prediction_quantum, 20480>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@SAJXZ");
//};

//public: struct s_tag_resource_prediction_quantum * s_static_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAPAUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QAAPAUs_tag_resource_prediction_atom@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QBA_NJ@Z");
//};

//public: static long s_static_array<struct s_tag_resource_prediction_atom, 40960>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_tag_resource_prediction_atom@@$0KAAA@@@SAJXZ");
//};

//public: long c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QAAJXZ");
//};

//public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_element(long)
//{
//    mangled_ppc("?get_element@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QAAPAJJ@Z");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<long, 40960> * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 40960> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@J$0KAAA@@@@@QAAPAV?$c_static_sized_dynamic_array@J$0KAAA@@@XZ");
//};

//public: static long s_static_array<long, 40960>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0KAAA@@@SAJXZ");
//};

//public: long * s_static_array<long, 40960>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@J$0KAAA@@@QAAPAJXZ");
//};

//public: void c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QAAXJ@Z");
//};

//public: struct s_tag_resource_prediction_molecule * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QAAPAUs_tag_resource_prediction_molecule@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: bool c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QBA_NJ@Z");
//};

//public: static long s_static_array<struct s_tag_resource_prediction_molecule, 8192>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@SAJXZ");
//};

//public: struct s_tag_resource_prediction_molecule_key const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@$$CBUs_tag_resource_prediction_molecule_key@@@@QAAPBUs_tag_resource_prediction_molecule_key@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@$$CBUs_tag_resource_prediction_molecule_key@@@@QBA_NJ@Z");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QBAJXZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@XZ");
//};

//public: long c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@AAAPAV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QAAPAUs_tag_resource_prediction_quantum@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@XZ");
//};

//public: struct s_tag_resource_prediction_atom * c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QAAPAUs_tag_resource_prediction_atom@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@XZ");
//};

//public: long c_static_sized_dynamic_array<long, 40960>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$c_static_sized_dynamic_array@J$0KAAA@@@QAAJXZ");
//};

//private: class c_static_sized_dynamic_array<long, 40960> * c_resizeable_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_resizeable_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@AAAPAV?$c_static_sized_dynamic_array@J$0KAAA@@@XZ");
//};

//public: long * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QAAPAJXZ");
//};

//public: class c_static_sized_dynamic_array<long, 40960> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<long, 40960> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@J$0KAAA@@@@@QBAPBV?$c_static_sized_dynamic_array@J$0KAAA@@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule * c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QAAPAUs_tag_resource_prediction_molecule@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: long c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@@@QAAPAV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@XZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule_key const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@QAAPBUs_tag_resource_prediction_molecule_key@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const>, struct s_tag_resource_prediction_molecule_key const>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@$$CBUs_tag_resource_prediction_molecule_key@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@XZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@QBAJXZ");
//};

//public: class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> const * c_recursive_template_pattern<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@@@QBAPBV?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@XZ");
//};

//public: struct s_tag_resource_prediction_atom * s_static_array<struct s_tag_resource_prediction_atom, 40960>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QAAPAUs_tag_resource_prediction_atom@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule * s_static_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QAAPAUs_tag_resource_prediction_molecule@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * s_static_array<struct s_tag_resource_prediction_molecule, 8192>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule_key const> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@@@QBAPBV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule_key@@@@XZ");
//};

//public: void c_static_hash_table_data<long, 2560>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@J$0KAA@@@QAAXXZ");
//};

//public: void c_static_hash_table_data<long, 8192>::clear_all(void)
//{
//    mangled_ppc("?clear_all@?$c_static_hash_table_data@J$0CAAA@@@QAAXXZ");
//};

//bool find_container_value<class c_wrapped_array<long const>, long, long const *>(class c_wrapped_array<long const> const &, long const &, long const **)
//{
//    mangled_ppc("??$find_container_value@V?$c_wrapped_array@$$CBJ@@JPBJ@@YA_NABV?$c_wrapped_array@$$CBJ@@ABJPAPBJ@Z");
//};

//bool find_if_container_value<class c_wrapped_array<struct s_tag_resource_prediction_quantum const>, class c_tag_resource_prediction_quantum_compare, struct s_tag_resource_prediction_quantum const *>(class c_wrapped_array<struct s_tag_resource_prediction_quantum const> const &, class c_tag_resource_prediction_quantum_compare, struct s_tag_resource_prediction_quantum const **)
//{
//    mangled_ppc("??$find_if_container_value@V?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@Vc_tag_resource_prediction_quantum_compare@@PBUs_tag_resource_prediction_quantum@@@@YA_NABV?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@Vc_tag_resource_prediction_quantum_compare@@PAPBUs_tag_resource_prediction_quantum@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum> const &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@QAA@ABV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_atom const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom> const &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_atom@@@@QAA@ABV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@@Z");
//};

//public: c_wrapped_array<long const>::ctor<class c_static_sized_dynamic_array<long, 40960>, long>(class c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long> const &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@J$0KAAA@@@J@?$c_wrapped_array@$$CBJ@@QAA@ABV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_molecule const>::ctor<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>(class c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule> const &)
//{
//    mangled_ppc("??$?0V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule@@@@QAA@ABV?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_quantum const>::ctor<struct s_tag_resource_prediction_quantum const>(class c_wrapped_array<struct s_tag_resource_prediction_quantum const> &)
//{
//    mangled_ppc("??$?0$$CBUs_tag_resource_prediction_quantum@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_quantum@@@@QAA@AAV0@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_atom const>::ctor<struct s_tag_resource_prediction_atom const>(class c_wrapped_array<struct s_tag_resource_prediction_atom const> &)
//{
//    mangled_ppc("??$?0$$CBUs_tag_resource_prediction_atom@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_atom@@@@QAA@AAV0@@Z");
//};

//public: c_wrapped_array<struct s_tag_resource_prediction_molecule const>::ctor<struct s_tag_resource_prediction_molecule const>(class c_wrapped_array<struct s_tag_resource_prediction_molecule const> &)
//{
//    mangled_ppc("??$?0$$CBUs_tag_resource_prediction_molecule@@@?$c_wrapped_array@$$CBUs_tag_resource_prediction_molecule@@@@QAA@AAV0@@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::add_entry(class c_static_hash_table_data<long, 2560> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@SAJPAV?$c_static_hash_table_data@J$0KAA@@@JJJ@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::find_entry(class c_static_hash_table_data<long, 2560> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@SAJPBV?$c_static_hash_table_data@J$0KAA@@@JJJ@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::add_entry(class c_static_hash_table_data<long, 8192> *, long, long, long)
//{
//    mangled_ppc("?add_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@SAJPAV?$c_static_hash_table_data@J$0CAAA@@@JJJ@Z");
//};

//public: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::find_entry(class c_static_hash_table_data<long, 8192> const *, long, long, long)
//{
//    mangled_ppc("?find_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@SAJPBV?$c_static_hash_table_data@J$0CAAA@@@JJJ@Z");
//};

//public: static bool s_static_array<struct s_tag_resource_prediction_atom, 40960>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_tag_resource_prediction_atom@@$0KAAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_tag_resource_prediction_molecule, 8192>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<long, 2560>::s_data & s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0KAA@@@$0KAA@@@QAAAAUs_data@?$c_static_hash_table_data@J$0KAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<long, 8192>::s_data & s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0CAAA@@@$0CAAA@@@QAAAAUs_data@?$c_static_hash_table_data@J$0CAAA@@@J@Z");
//};

//public: struct c_static_hash_table_data<long, 8192>::s_data const & s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0CAAA@@@$0CAAA@@@QBAABUs_data@?$c_static_hash_table_data@J$0CAAA@@@J@Z");
//};

//public: static bool s_static_array<struct s_tag_resource_prediction_quantum, 20480>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 40960>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0KAAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<long, 2560>::s_data * c_static_hash_table_data<long, 2560>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0KAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct c_static_hash_table_data<long, 2560>::s_data const * c_static_hash_table_data<long, 2560>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0KAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<long, 2560>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@J$0KAA@@@QBAJXZ");
//};

//public: long c_static_hash_table_data<long, 2560>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@J$0KAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<long, 2560>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@J$0KAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<long, 2560>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0KAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 2560>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0KAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<long, 2560>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0KAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 2560>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0KAA@@@QBAPBFXZ");
//};

//public: void s_static_array<short, 2560>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@F$0KAA@@@QAAXJ@Z");
//};

//public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QAAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QAAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long const * c_wrapped_array_no_init<long const>::end(void) const
//{
//    mangled_ppc("?end@?$c_wrapped_array_no_init@$$CBJ@@QBAPBJXZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QAAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: struct c_static_hash_table_data<long, 8192>::s_data * c_static_hash_table_data<long, 8192>::get_data(long)
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0CAAA@@@QAAPAUs_data@1@J@Z");
//};

//public: struct c_static_hash_table_data<long, 8192>::s_data const * c_static_hash_table_data<long, 8192>::get_data(long) const
//{
//    mangled_ppc("?get_data@?$c_static_hash_table_data@J$0CAAA@@@QBAPBUs_data@1@J@Z");
//};

//public: long c_static_hash_table_data<long, 8192>::get_total_count(void) const
//{
//    mangled_ppc("?get_total_count@?$c_static_hash_table_data@J$0CAAA@@@QBAJXZ");
//};

//public: long c_static_hash_table_data<long, 8192>::get_maximum_count(void) const
//{
//    mangled_ppc("?get_maximum_count@?$c_static_hash_table_data@J$0CAAA@@@QBAJXZ");
//};

//public: void c_static_hash_table_data<long, 8192>::increment_total_count(void)
//{
//    mangled_ppc("?increment_total_count@?$c_static_hash_table_data@J$0CAAA@@@QAAXXZ");
//};

//public: short * c_static_hash_table_data<long, 8192>::get_hash_entry_count(void)
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0CAAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 8192>::get_hash_entry_count(void) const
//{
//    mangled_ppc("?get_hash_entry_count@?$c_static_hash_table_data@J$0CAAA@@@QBAPBFXZ");
//};

//public: short * c_static_hash_table_data<long, 8192>::get_original_hash_entry(void)
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0CAAA@@@QAAPAFXZ");
//};

//public: short const * c_static_hash_table_data<long, 8192>::get_original_hash_entry(void) const
//{
//    mangled_ppc("?get_original_hash_entry@?$c_static_hash_table_data@J$0CAAA@@@QBAPBFXZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long const * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QBAPBJXZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_molecule, 8192>, struct s_tag_resource_prediction_molecule>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_molecule@@$0CAAA@@@Us_tag_resource_prediction_molecule@@@@QBAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: short const * s_static_array<short, 2560>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0KAA@@@QBAPBFXZ");
//};

//public: short * s_static_array<short, 2560>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0KAA@@@QAAPAFXZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>, struct s_tag_resource_prediction_quantum const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@$$CBUs_tag_resource_prediction_quantum@@@@QAAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>, struct s_tag_resource_prediction_atom const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@$$CBUs_tag_resource_prediction_atom@@@@QAAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>, struct s_tag_resource_prediction_molecule const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@$$CBUs_tag_resource_prediction_molecule@@@@QAAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: short const * s_static_array<short, 8192>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@F$0CAAA@@@QBAPBFXZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>, struct s_tag_resource_prediction_quantum>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@Us_tag_resource_prediction_quantum@@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_array_operator_interface<class c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>, struct s_tag_resource_prediction_atom>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@Us_tag_resource_prediction_atom@@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long const * c_array_operator_interface<class c_static_sized_dynamic_array<long, 40960>, long>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_static_sized_dynamic_array@J$0KAAA@@@J@@QBAPBJXZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@QAAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_quantum const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_quantum@@@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@QAAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_atom const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_atom@@@@XZ");
//};

//public: struct s_tag_resource_prediction_molecule const * c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@QAAPBUs_tag_resource_prediction_molecule@@XZ");
//};

//public: class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_resource_prediction_molecule const> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@@@QAAPAV?$c_wrapped_array_no_init@$$CBUs_tag_resource_prediction_molecule@@@@XZ");
//};

//public: struct s_tag_resource_prediction_quantum const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * c_static_sized_dynamic_array<struct s_tag_resource_prediction_atom, 40960>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long const * c_static_sized_dynamic_array<long, 40960>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@J$0KAAA@@@QBAPBJXZ");
//};

//public: struct s_tag_resource_prediction_quantum const * s_static_array<struct s_tag_resource_prediction_quantum, 20480>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_quantum@@$0FAAA@@@QBAPBUs_tag_resource_prediction_quantum@@XZ");
//};

//public: struct s_tag_resource_prediction_atom const * s_static_array<struct s_tag_resource_prediction_atom, 40960>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_tag_resource_prediction_atom@@$0KAAA@@@QBAPBUs_tag_resource_prediction_atom@@XZ");
//};

//public: long const * s_static_array<long, 40960>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@J$0KAAA@@@QBAPBJXZ");
//};

//struct s_tag_resource_prediction_quantum const * std::find_if<struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare)
//{
//    mangled_ppc("??$find_if@PBUs_tag_resource_prediction_quantum@@Vc_tag_resource_prediction_quantum_compare@@@std@@YAPBUs_tag_resource_prediction_quantum@@PBU1@0Vc_tag_resource_prediction_quantum_compare@@@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::calculate_hash(class c_static_hash_table_data<long, 2560> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@CAJPBV?$c_static_hash_table_data@J$0KAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 2560>, 3307, 0, 0>::find_new_hash_entry(class c_static_hash_table_data<long, 2560> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0KAA@@@$0MOL@$0A@$0A@@@CAJPAV?$c_static_hash_table_data@J$0KAA@@@J@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::calculate_hash(class c_static_hash_table_data<long, 8192> const *, long, long, long)
//{
//    mangled_ppc("?calculate_hash@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@CAJPBV?$c_static_hash_table_data@J$0CAAA@@@JJJ@Z");
//};

//private: static long c_static_hash_table<class c_static_hash_table_data<long, 8192>, 3307, 3, 337>::find_new_hash_entry(class c_static_hash_table_data<long, 8192> *, long)
//{
//    mangled_ppc("?find_new_hash_entry@?$c_static_hash_table@V?$c_static_hash_table_data@J$0CAAA@@@$0MOL@$02$0BFB@@@CAJPAV?$c_static_hash_table_data@J$0CAAA@@@J@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0KAA@@@$0KAA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_static_hash_table_data<long, 8192>::s_data, 8192>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0CAAA@@@$0CAAA@@@SA_NJ@Z");
//};

//public: struct c_static_hash_table_data<long, 2560>::s_data const & s_static_array<struct c_static_hash_table_data<long, 2560>::s_data, 2560>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_data@?$c_static_hash_table_data@J$0KAA@@@$0KAA@@@QBAABUs_data@?$c_static_hash_table_data@J$0KAA@@@J@Z");
//};

//struct s_tag_resource_prediction_quantum const * std::_Checked_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_resource_prediction_quantum@@@std@@YAPBUs_tag_resource_prediction_quantum@@AAPBU1@@Z");
//};

//struct s_tag_resource_prediction_quantum const * std::_Find_if<struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, class c_tag_resource_prediction_quantum_compare)
//{
//    mangled_ppc("??$_Find_if@PBUs_tag_resource_prediction_quantum@@Vc_tag_resource_prediction_quantum_compare@@@std@@YAPBUs_tag_resource_prediction_quantum@@PBU1@0Vc_tag_resource_prediction_quantum_compare@@@Z");
//};

//public: bool c_tag_resource_prediction_quantum_compare::operator()(struct s_tag_resource_prediction_quantum const &) const
//{
//    mangled_ppc("??Rc_tag_resource_prediction_quantum_compare@@QBA_NABUs_tag_resource_prediction_quantum@@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&, struct s_tag_resource_prediction_quantum const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_resource_prediction_quantum@@@std@@YAXAAPBUs_tag_resource_prediction_quantum@@ABQBU1@@Z");
//};

//struct s_tag_resource_prediction_quantum const * std::_Checked_base<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_resource_prediction_quantum@@@std@@YAPBUs_tag_resource_prediction_quantum@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_resource_prediction_quantum@@@std@@YAXPBUs_tag_resource_prediction_quantum@@0PB_WI@Z");
//};

//void std::_Debug_pointer<class c_tag_resource_prediction_quantum_compare>(class c_tag_resource_prediction_quantum_compare &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Vc_tag_resource_prediction_quantum_compare@@@std@@YAXAAVc_tag_resource_prediction_quantum_compare@@PB_WI@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_resource_prediction_quantum@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_resource_prediction_quantum@@@Z");
//};

//void std::_Debug_range2<struct s_tag_resource_prediction_quantum const *>(struct s_tag_resource_prediction_quantum const *, struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_resource_prediction_quantum@@@std@@YAXPBUs_tag_resource_prediction_quantum@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_tag_resource_prediction_quantum>(struct s_tag_resource_prediction_quantum const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_resource_prediction_quantum@@@std@@YAXPBUs_tag_resource_prediction_quantum@@PB_WI@Z");
//};

