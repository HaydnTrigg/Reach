/* ---------- headers */

#include "omaha\tag_files\tag_group_layout_writer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_tag_persist_index<3>, 62>::k_element_count; // "?k_element_count@?$s_static_array@U?$s_tag_persist_index@$02@@$0DO@@@2JB"
// class c_tag_layout_builder::`RTTI Type Descriptor'; // "??_R0?AVc_tag_layout_builder@@@8"

// public: c_tag_layout_builder::c_tag_layout_builder(enum e_tag_persist_layout_version);
// public: struct s_tag_persist_index<0> c_tag_layout_builder::add_string(char const *);
// public: struct s_tag_persist_index<4> c_tag_layout_builder::add_string_list(char const *const, char const *const *, long);
// public: struct s_tag_persist_index<6> c_tag_layout_builder::add_custom_search_definition(struct s_block_index_custom_search_definition const *);
// public: struct s_tag_persist_index<7> c_tag_layout_builder::add_data_definition(struct s_tag_data_definition const *);
// public: struct s_tag_persist_index<3> c_tag_layout_builder::add_field_type(struct s_tag_persist_field_type const &);
// public: struct s_tag_persist_index<5> c_tag_layout_builder::add_field_list(struct s_tag_persist_field const *, long);
// public: struct s_tag_persist_index<9> c_tag_layout_builder::reserve_struct_definition(void);
// public: void c_tag_layout_builder::add_struct_definition(struct s_tag_persist_index<9>, struct s_tag_persist_struct_definition const &);
// public: struct s_tag_persist_index<8> c_tag_layout_builder::add_array_definition(struct s_tag_persist_array_definition const &);
// public: struct s_tag_persist_index<10> c_tag_layout_builder::add_block_definition(struct s_tag_persist_block_definition const &);
// public: struct s_tag_persist_index<11> c_tag_layout_builder::add_resource_definition(struct s_tag_persist_resource_definition const &);
// public: struct s_tag_persist_index<12> c_tag_layout_builder::add_interop_definition(struct s_tag_persist_interop_definition const &);
// public: void c_tag_layout_builder::set_root_block_definition_index(struct s_tag_persist_index<10>);
// public: bool c_tag_layout_builder::write(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_string_characters(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_string_offsets(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_string_lists(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_custom_search_names(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_data_definition_names(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_array_definitions(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_field_types(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_fields(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_struct_definitions(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_block_definitions(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_resource_definitions(class c_persist_stream *);
// public: bool c_tag_layout_builder::save_interop_definitions(class c_persist_stream *);
// bool store_tag_block_persist_layout(struct s_tag_block_definition const *, class c_persist_stream *);
// public: c_tag_layout_builder_context::c_tag_layout_builder_context(class c_tag_layout_builder *);
// public: void c_tag_layout_builder_context::build_from_root_block_definition(struct s_tag_block_definition const *);
// private: void c_tag_layout_builder_context::add_root_block_definition(struct s_tag_block_definition const *);
// private: void c_tag_layout_builder_context::add_all_field_types(void);
// private: struct s_tag_persist_index<10> c_tag_layout_builder_context::add_block_definition_recursive(struct s_tag_block_definition const *);
// public: c_tag_layout_builder_context::c_add_aggregate_args::c_add_aggregate_args(struct s_tag_struct_definition const *);
// private: struct s_tag_persist_index<9> c_tag_layout_builder_context::add_aggregate_recursive(class c_tag_layout_builder_context::c_add_aggregate_args);
// private: struct s_tag_persist_index<3> c_tag_layout_builder_context::get_persist_field_type(enum e_tag_field);
// private: struct s_tag_persist_index<4> c_tag_layout_builder_context::add_string_list(struct s_string_list_definition const *);
// private: struct s_tag_persist_index<8> c_tag_layout_builder_context::add_array_definition_recursive(struct s_tag_array_definition const *);
// private: struct s_tag_persist_index<12> c_tag_layout_builder_context::add_interop_definition_recursive(struct s_tag_interop_definition const *);
// private: struct s_tag_persist_index<9> c_tag_layout_builder_context::add_struct_definition_recursive(struct s_tag_struct_definition const *);
// private: struct s_tag_persist_index<11> c_tag_layout_builder_context::add_resource_definition_recursive(struct s_tag_resource_definition const *);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>(void);
// public: std::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::~set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::~_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(void);
// public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::~_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(void);
// public: c_tag_layout_builder::~c_tag_layout_builder(void);
// public: c_tag_layout_builder_context::~c_tag_layout_builder_context(void);
// public: std::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::~map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void);
// public: std::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::~map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void);
// public: long s_tag_persist_index<3>::get_raw_index(void) const;
// public: long s_tag_persist_index<9>::get_raw_index(void) const;
// public: long s_tag_persist_index<10>::get_raw_index(void) const;
// public: void s_tag_persist_index<10>::clear(void);
// public: array_template<char>::array_template<char>(void);
// public: array_template<char>::~array_template<char>(void);
// public: char * array_template<char>::get_elements(void);
// public: unsigned int array_template<char>::size(void) const;
// public: array_template<struct s_tag_persist_index<0> >::array_template<struct s_tag_persist_index<0> >(void);
// public: array_template<struct s_tag_persist_index<0> >::~array_template<struct s_tag_persist_index<0> >(void);
// public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::get_elements(void);
// public: void array_template<struct s_tag_persist_index<0> >::resize(long);
// public: struct s_tag_persist_index<0> & array_template<struct s_tag_persist_index<0> >::operator[](long);
// public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::begin(void);
// public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::end(void);
// public: unsigned int array_template<struct s_tag_persist_index<0> >::size(void) const;
// public: array_template<struct s_tag_persist_string_list>::array_template<struct s_tag_persist_string_list>(void);
// public: array_template<struct s_tag_persist_string_list>::~array_template<struct s_tag_persist_string_list>(void);
// public: struct s_tag_persist_string_list * array_template<struct s_tag_persist_string_list>::get_elements(void);
// public: long array_template<struct s_tag_persist_string_list>::append(struct s_tag_persist_string_list const &);
// public: unsigned int array_template<struct s_tag_persist_string_list>::size(void) const;
// public: array_template<struct s_tag_persist_array_definition>::array_template<struct s_tag_persist_array_definition>(void);
// public: array_template<struct s_tag_persist_array_definition>::~array_template<struct s_tag_persist_array_definition>(void);
// public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::get_elements(void);
// public: unsigned int array_template<struct s_tag_persist_array_definition>::size(void) const;
// public: array_template<struct s_tag_persist_field_type>::array_template<struct s_tag_persist_field_type>(void);
// public: array_template<struct s_tag_persist_field_type>::~array_template<struct s_tag_persist_field_type>(void);
// public: struct s_tag_persist_field_type * array_template<struct s_tag_persist_field_type>::get_elements(void);
// public: long array_template<struct s_tag_persist_field_type>::append(struct s_tag_persist_field_type const &);
// public: unsigned int array_template<struct s_tag_persist_field_type>::size(void) const;
// public: array_template<struct s_tag_persist_field>::array_template<struct s_tag_persist_field>(void);
// public: array_template<struct s_tag_persist_field>::~array_template<struct s_tag_persist_field>(void);
// public: struct s_tag_persist_field * array_template<struct s_tag_persist_field>::get_elements(void);
// public: struct s_tag_persist_field * array_template<struct s_tag_persist_field>::get_element(long);
// public: void array_template<struct s_tag_persist_field>::resize(long);
// public: void array_template<struct s_tag_persist_field>::append(struct s_tag_persist_field const *, long);
// public: unsigned int array_template<struct s_tag_persist_field>::size(void) const;
// public: array_template<struct s_tag_persist_struct_definition>::array_template<struct s_tag_persist_struct_definition>(void);
// public: array_template<struct s_tag_persist_struct_definition>::~array_template<struct s_tag_persist_struct_definition>(void);
// public: struct s_tag_persist_struct_definition * array_template<struct s_tag_persist_struct_definition>::get_elements(void);
// public: struct s_tag_persist_struct_definition & array_template<struct s_tag_persist_struct_definition>::element(long);
// public: long array_template<struct s_tag_persist_struct_definition>::new_element_index(void);
// public: unsigned int array_template<struct s_tag_persist_struct_definition>::size(void) const;
// public: array_template<struct s_tag_persist_block_definition>::array_template<struct s_tag_persist_block_definition>(void);
// public: array_template<struct s_tag_persist_block_definition>::~array_template<struct s_tag_persist_block_definition>(void);
// public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::get_elements(void);
// public: unsigned int array_template<struct s_tag_persist_block_definition>::size(void) const;
// public: array_template<struct s_tag_persist_resource_definition>::array_template<struct s_tag_persist_resource_definition>(void);
// public: array_template<struct s_tag_persist_resource_definition>::~array_template<struct s_tag_persist_resource_definition>(void);
// public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::get_elements(void);
// public: unsigned int array_template<struct s_tag_persist_resource_definition>::size(void) const;
// public: array_template<struct s_tag_persist_interop_definition>::array_template<struct s_tag_persist_interop_definition>(void);
// public: array_template<struct s_tag_persist_interop_definition>::~array_template<struct s_tag_persist_interop_definition>(void);
// public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::get_elements(void);
// public: unsigned int array_template<struct s_tag_persist_interop_definition>::size(void) const;
// public: std::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void);
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::insert(struct std::pair<void const *const, struct s_tag_persist_index<9> > const &);
// public: void s_static_array<struct s_tag_persist_index<3>, 62>::set_all(struct s_tag_persist_index<3> const &);
// public: std::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void);
// public: struct std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::insert(struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &);
// public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator->(void) const;
// public: struct std::pair<void const *const, struct s_tag_persist_index<9> > * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator->(void) const;
// public: std::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void);
// public: std::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void);
// public: std::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void);
// public: std::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void);
// public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void);
// public: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void);
// public: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void);
// public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void);
// public: std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::~_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>(void);
// public: std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::~_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>(void);
// public: std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>::~_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>(void);
// public: void array_template<char>::resize(long);
// public: struct s_tag_persist_index<0> & array_template<struct s_tag_persist_index<0> >::element(long);
// public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::get_element(long);
// public: void array_template<struct s_tag_persist_index<0> >::resize_fill(long, long);
// public: long array_template<struct s_tag_persist_string_list>::new_element_index(void);
// public: void array_template<struct s_tag_persist_string_list>::resize(long);
// public: void array_template<struct s_tag_persist_array_definition>::resize(long);
// public: long array_template<struct s_tag_persist_field_type>::new_element_index(void);
// public: void array_template<struct s_tag_persist_field_type>::resize(long);
// public: void array_template<struct s_tag_persist_field>::resize_fill(long, long);
// public: long array_template<struct s_tag_persist_field>::grow(long);
// protected: void array_template<struct s_tag_persist_struct_definition>::signal_out_of_memory(void) const;
// public: void array_template<struct s_tag_persist_struct_definition>::resize(long);
// public: void array_template<struct s_tag_persist_block_definition>::resize(long);
// public: void array_template<struct s_tag_persist_resource_definition>::resize(long);
// public: void array_template<struct s_tag_persist_interop_definition>::resize(long);
// protected: static char & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static void const *const & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &);
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::begin(void);
// protected: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tidy(void);
// public: static void const *const & std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::_Kfn(struct std::pair<void const *const, struct s_tag_persist_index<9> > const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void);
// public: std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(void);
// protected: static char & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct s_string_list_definition const *const & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &);
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::begin(void);
// protected: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Root(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tidy(void);
// public: static struct s_string_list_definition const *const & std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::_Kfn(struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void);
// public: std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(void);
// public: std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > const *);
// public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator--(void);
// public: bool std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Mynode(void) const;
// public: std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator const &, bool const &);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > const *);
// public: struct std::pair<void const *const, struct s_tag_persist_index<9> > & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator--(void);
// public: bool std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Mynode(void) const;
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tidy(void);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void);
// public: std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(void);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator const &);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::~iterator(void);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::~const_iterator(void);
// public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(struct std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &> const &);
// public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(struct std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &> const &);
// public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(struct std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &> const &);
// public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::~_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base> const &);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(void);
// public: void array_template<char>::resize_fill(long, long);
// protected: void array_template<struct s_tag_persist_index<0> >::signal_out_of_memory(void) const;
// protected: void array_template<struct s_tag_persist_string_list>::signal_out_of_memory(void) const;
// public: void array_template<struct s_tag_persist_string_list>::resize_fill(long, long);
// public: void array_template<struct s_tag_persist_array_definition>::resize_fill(long, long);
// protected: void array_template<struct s_tag_persist_field_type>::signal_out_of_memory(void) const;
// public: void array_template<struct s_tag_persist_field_type>::resize_fill(long, long);
// protected: void array_template<struct s_tag_persist_field>::signal_out_of_memory(void) const;
// public: long array_template<struct s_tag_persist_field>::grow_fill(long, long);
// public: void array_template<struct s_tag_persist_struct_definition>::resize_fill(long, long);
// public: void array_template<struct s_tag_persist_block_definition>::resize_fill(long, long);
// public: void array_template<struct s_tag_persist_resource_definition>::resize_fill(long, long);
// public: void array_template<struct s_tag_persist_interop_definition>::resize_fill(long, long);
// protected: static char & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::pair<void const *const, struct s_tag_persist_index<9> > & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Init(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Rmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, char);
// protected: std::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >);
// public: std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **);
// protected: static char & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::end(void);
// public: unsigned int std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::max_size(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Init(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Lmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Rmost(void) const;
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, char);
// protected: std::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >);
// public: std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **);
// public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > const *);
// public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator--(void);
// public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > const *);
// public: struct std::pair<void const *const, struct s_tag_persist_index<9> > const & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator*(void) const;
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator--(void);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::begin(void);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::end(void);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Init(void);
// protected: std::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >);
// public: std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **);
// public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(void);
// public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(void);
// protected: void array_template<char>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_tag_persist_array_definition>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_tag_persist_block_definition>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_tag_persist_resource_definition>::signal_out_of_memory(void) const;
// protected: void array_template<struct s_tag_persist_interop_definition>::signal_out_of_memory(void) const;
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >);
// public: unsigned int std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::allocate(unsigned int);
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >);
// public: unsigned int std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::max_size(void) const;
// public: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::allocate(unsigned int);
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &) const;
// public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Dec(void);
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &) const;
// public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Dec(void);
// protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator) const;
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator);
// public: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::clear(void);
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Lmost(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Rmost(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Root(void) const;
// protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Buynode(void);
// public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >);
// public: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, char);
// public: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, char);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > const *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator++(int);
// public: bool std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &) const;
// public: bool std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &) const;
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator const &);
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *const &);
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *const &);
// public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator++(void);
// public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator++(void);
// protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *) const;
// protected: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >);
// public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::allocate(unsigned int);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *const &);
// public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > const *);
// public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator++(void);
// public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::_Mynode(void) const;
// public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(void);
// public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(void);
// public: std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>(struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >);
// public: std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>(struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >);
// public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Inc(void);
// public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Inc(void);
// public: std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >);
// public: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::_Inc(void);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >);
// long find_or_add_explicit_list<char>(char const *, char const *, struct array_template<char> &);
// long add_explicit_list<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct array_template<struct s_tag_persist_index<0> > &);
// long find_or_add_explicit_list<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct array_template<struct s_tag_persist_index<0> > &);
// long find_or_add_explicit_list<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct array_template<struct s_tag_persist_array_definition> &);
// long find_or_add_explicit_list<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct array_template<struct s_tag_persist_block_definition> &);
// long find_or_add_explicit_list<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct array_template<struct s_tag_persist_resource_definition> &);
// long find_or_add_explicit_list<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct array_template<struct s_tag_persist_interop_definition> &);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_layout_header_preinterop>(struct s_tag_persist_layout_header_preinterop *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_layout_header_v3>(struct s_tag_persist_layout_header_v3*, long);
// public: c_simple_persist_archiver_visitor::ctor<class c_tag_layout_builder>(class c_tag_layout_builder *, class c_persist_stream *);
// public: virtual bool c_simple_persist_archiver_visitor::traverse_leaf(class c_persist_archiver const *);
// public: virtual bool c_simple_persist_archiver_visitor::traverse_node(class c_persist_archiver const *);
// public: virtual bool c_simple_persist_archiver_visitor::traverse(class c_persist_archiver const *);
// private: bool c_simple_persist_archiver_visitor::visit(class c_persist_archiver const *);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_string_list>(struct s_tag_persist_string_list *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_field_type>(struct s_tag_persist_field_type *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_field>(struct s_tag_persist_field *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_struct_definition>(struct s_tag_persist_struct_definition *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition *, long);
// public: bool c_persist_stream::write_typed<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition *, long);
// public: struct s_tag_persist_index<3> & s_static_array<struct s_tag_persist_index<3>, 62>::operator[]<enum e_tag_field>(enum e_tag_field);
// struct std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> > std::make_pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct s_string_list_definition const *, struct s_tag_persist_index<4>);
// public: std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >::ctor<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> > const &);
// struct std::pair<void const *, struct s_tag_persist_index<9> > std::make_pair<void const *, struct s_tag_persist_index<9> >(void const *, struct s_tag_persist_index<9>);
// public: std::pair<void const *const, struct s_tag_persist_index<9> >::ctor<void const *, struct s_tag_persist_index<9> >(struct std::pair<void const *, struct s_tag_persist_index<9> > const &);
// struct s_tag_block_definition const * void_cast<struct s_tag_block_definition const *>(void const *);
// struct s_string_list_definition const * void_cast<struct s_string_list_definition const *>(void const *);
// bool std::_Debug_lt_pred<struct std::less<void const *>, void const *, void const *>(struct std::less<void const *>, void const *const &, void const *const &, wchar_t const *, unsigned int);
// bool std::_Debug_lt_pred<struct std::less<struct s_string_list_definition const *>, struct s_string_list_definition const *, struct s_string_list_definition const *>(struct std::less<struct s_string_list_definition const *>, struct s_string_list_definition const *const &, struct s_string_list_definition const *const &, wchar_t const *, unsigned int);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::ctor<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &);
// struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::ctor<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &);
// struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::ctor<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::ctor<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::ctor<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *const &);
// public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::ctor<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &);
// struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *);
// void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *const &);
// public: void * std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node::`scalar deleting destructor'(unsigned int);
// public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node::~_Node(void);
// public: std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>::~pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>(void);
// public: char * array_template<char>::begin(void);
// public: char * array_template<char>::end(void);
// public: void array_template<struct s_tag_persist_index<0> >::append(struct s_tag_persist_index<0> const *, long);
// public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::begin(void);
// public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::end(void);
// public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::begin(void);
// public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::end(void);
// public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::begin(void);
// public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::end(void);
// public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::begin(void);
// public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::end(void);
// public: bool std::less<void const *>::operator()(void const *const &, void const *const &) const;
// public: bool std::less<struct s_string_list_definition const *>::operator()(struct s_string_list_definition const *const &, struct s_string_list_definition const *const &) const;
// public: std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct s_string_list_definition const *const &, struct s_tag_persist_index<4> const &);
// public: std::pair<void const *, struct s_tag_persist_index<9> >::pair<void const *, struct s_tag_persist_index<9> >(void const *const &, struct s_tag_persist_index<9> const &);
// public: static struct s_tag_block_definition const * s_void_cast_check<struct s_tag_block_definition const *>::convert(void const *);
// public: static struct s_string_list_definition const * s_void_cast_check<struct s_string_list_definition const *>::convert(void const *);
// public: char * array_template<char>::get_element(long);
// public: long array_template<struct s_tag_persist_index<0> >::grow(long);
// public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::get_element(long);
// public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::get_element(long);
// public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::get_element(long);
// public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::get_element(long);
// public: long array_template<struct s_tag_persist_index<0> >::grow_fill(long, long);
// char const * std::search<char const *, char const *>(char const *, char const *, char const *, char const *);
// long add_explicit_list<char>(char const *, char const *, struct array_template<char> &);
// struct s_tag_persist_index<0> const * std::search<struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *);
// struct s_tag_persist_array_definition const * std::search<struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *);
// long add_explicit_list<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct array_template<struct s_tag_persist_array_definition> &);
// struct s_tag_persist_block_definition const * std::search<struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *);
// long add_explicit_list<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct array_template<struct s_tag_persist_block_definition> &);
// struct s_tag_persist_resource_definition const * std::search<struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *);
// long add_explicit_list<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct array_template<struct s_tag_persist_resource_definition> &);
// struct s_tag_persist_interop_definition const * std::search<struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *);
// long add_explicit_list<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct array_template<struct s_tag_persist_interop_definition> &);
// public: c_typed_pointer_holder::ctor<class c_tag_layout_builder>(class c_tag_layout_builder *);
// public: static bool s_static_array<struct s_tag_persist_index<3>, 62>::valid<enum e_tag_field>(enum e_tag_field);
// public: void array_template<char>::append(char const *, long);
// public: void array_template<struct s_tag_persist_array_definition>::append(struct s_tag_persist_array_definition const *, long);
// public: void array_template<struct s_tag_persist_block_definition>::append(struct s_tag_persist_block_definition const *, long);
// public: void array_template<struct s_tag_persist_resource_definition>::append(struct s_tag_persist_resource_definition const *, long);
// public: void array_template<struct s_tag_persist_interop_definition>::append(struct s_tag_persist_interop_definition const *, long);
// public: long array_template<char>::grow(long);
// public: long array_template<struct s_tag_persist_array_definition>::grow(long);
// public: long array_template<struct s_tag_persist_block_definition>::grow(long);
// public: long array_template<struct s_tag_persist_resource_definition>::grow(long);
// public: long array_template<struct s_tag_persist_interop_definition>::grow(long);
// public: long array_template<char>::grow_fill(long, long);
// public: long array_template<struct s_tag_persist_array_definition>::grow_fill(long, long);
// public: long array_template<struct s_tag_persist_block_definition>::grow_fill(long, long);
// public: long array_template<struct s_tag_persist_resource_definition>::grow_fill(long, long);
// public: long array_template<struct s_tag_persist_interop_definition>::grow_fill(long, long);
// int * std::_Dist_type<char const *>(char const *);
// char const * std::_Search<char const *, char const *, int, int>(char const *, char const *, char const *, char const *, int *, int *);
// void std::_Checked_assign_from_base<char const *>(char const *&, char const *const &);
// struct s_tag_persist_index<0> const * std::_Checked_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&);
// int * std::_Dist_type<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *);
// struct s_tag_persist_index<0> const * std::_Search<struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int *, int *);
// public: bool s_tag_persist_index<0>::operator==(struct s_tag_persist_index<0> const &) const;
// void std::_Checked_assign_from_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&, struct s_tag_persist_index<0> const *const &);
// struct s_tag_persist_array_definition const * std::_Checked_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&);
// int * std::_Dist_type<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *);
// struct s_tag_persist_array_definition const * std::_Search<struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int *, int *);
// public: bool s_tag_persist_array_definition::operator==(struct s_tag_persist_array_definition const &) const;
// public: bool s_tag_persist_index<9>::operator==(struct s_tag_persist_index<9> const &) const;
// void std::_Checked_assign_from_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&, struct s_tag_persist_array_definition const *const &);
// struct s_tag_persist_block_definition const * std::_Checked_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&);
// int * std::_Dist_type<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *);
// struct s_tag_persist_block_definition const * std::_Search<struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int *, int *);
// public: bool s_tag_persist_block_definition::operator==(struct s_tag_persist_block_definition const &) const;
// void std::_Checked_assign_from_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&, struct s_tag_persist_block_definition const *const &);
// struct s_tag_persist_resource_definition const * std::_Checked_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&);
// int * std::_Dist_type<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *);
// struct s_tag_persist_resource_definition const * std::_Search<struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int *, int *);
// public: bool s_tag_persist_resource_definition::operator==(struct s_tag_persist_resource_definition const &) const;
// void std::_Checked_assign_from_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&, struct s_tag_persist_resource_definition const *const &);
// struct s_tag_persist_interop_definition const * std::_Checked_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&);
// int * std::_Dist_type<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *);
// struct s_tag_persist_interop_definition const * std::_Search<struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int *, int *);
// public: bool s_tag_persist_interop_definition::operator==(struct s_tag_persist_interop_definition const &) const;
// void std::_Checked_assign_from_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&, struct s_tag_persist_interop_definition const *const &);
// void std::_Distance<char const *, int>(char const *, char const *, int &);
// struct s_tag_persist_index<0> const * std::_Checked_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_persist_index<0> const *, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int &);
// struct s_tag_persist_array_definition const * std::_Checked_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_persist_array_definition const *, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int &);
// struct s_tag_persist_block_definition const * std::_Checked_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_persist_block_definition const *, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int &);
// struct s_tag_persist_resource_definition const * std::_Checked_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_persist_resource_definition const *, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int &);
// struct s_tag_persist_interop_definition const * std::_Checked_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag);
// void std::_Debug_range<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int);
// void std::_Distance<struct s_tag_persist_interop_definition const *, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int &);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *const &);
// void std::_Debug_range2<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_tag_persist_index<0> const *, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int &, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *const &);
// void std::_Debug_range2<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_tag_persist_array_definition const *, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int &, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *const &);
// void std::_Debug_range2<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_tag_persist_block_definition const *, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int &, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *const &);
// void std::_Debug_range2<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_tag_persist_resource_definition const *, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int &, struct std::random_access_iterator_tag);
// struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *const &);
// void std::_Debug_range2<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag);
// void std::_Distance2<struct s_tag_persist_interop_definition const *, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int &, struct std::random_access_iterator_tag);
// void std::_Debug_pointer<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int);
// void std::_Debug_pointer<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int);

//public: c_tag_layout_builder::c_tag_layout_builder(enum e_tag_persist_layout_version)
//{
//    mangled_ppc("??0c_tag_layout_builder@@QAA@W4e_tag_persist_layout_version@@@Z");
//};

//public: struct s_tag_persist_index<0> c_tag_layout_builder::add_string(char const *)
//{
//    mangled_ppc("?add_string@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$0A@@@PBD@Z");
//};

//public: struct s_tag_persist_index<4> c_tag_layout_builder::add_string_list(char const *const, char const *const *, long)
//{
//    mangled_ppc("?add_string_list@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$03@@QBDPBQBDJ@Z");
//};

//public: struct s_tag_persist_index<6> c_tag_layout_builder::add_custom_search_definition(struct s_block_index_custom_search_definition const *)
//{
//    mangled_ppc("?add_custom_search_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$05@@PBUs_block_index_custom_search_definition@@@Z");
//};

//public: struct s_tag_persist_index<7> c_tag_layout_builder::add_data_definition(struct s_tag_data_definition const *)
//{
//    mangled_ppc("?add_data_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$06@@PBUs_tag_data_definition@@@Z");
//};

//public: struct s_tag_persist_index<3> c_tag_layout_builder::add_field_type(struct s_tag_persist_field_type const &)
//{
//    mangled_ppc("?add_field_type@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$02@@ABUs_tag_persist_field_type@@@Z");
//};

//public: struct s_tag_persist_index<5> c_tag_layout_builder::add_field_list(struct s_tag_persist_field const *, long)
//{
//    mangled_ppc("?add_field_list@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$04@@PBUs_tag_persist_field@@J@Z");
//};

//public: struct s_tag_persist_index<9> c_tag_layout_builder::reserve_struct_definition(void)
//{
//    mangled_ppc("?reserve_struct_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$08@@XZ");
//};

//public: void c_tag_layout_builder::add_struct_definition(struct s_tag_persist_index<9>, struct s_tag_persist_struct_definition const &)
//{
//    mangled_ppc("?add_struct_definition@c_tag_layout_builder@@QAAXU?$s_tag_persist_index@$08@@ABUs_tag_persist_struct_definition@@@Z");
//};

//public: struct s_tag_persist_index<8> c_tag_layout_builder::add_array_definition(struct s_tag_persist_array_definition const &)
//{
//    mangled_ppc("?add_array_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$07@@ABUs_tag_persist_array_definition@@@Z");
//};

//public: struct s_tag_persist_index<10> c_tag_layout_builder::add_block_definition(struct s_tag_persist_block_definition const &)
//{
//    mangled_ppc("?add_block_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$09@@ABUs_tag_persist_block_definition@@@Z");
//};

//public: struct s_tag_persist_index<11> c_tag_layout_builder::add_resource_definition(struct s_tag_persist_resource_definition const &)
//{
//    mangled_ppc("?add_resource_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$0L@@@ABUs_tag_persist_resource_definition@@@Z");
//};

//public: struct s_tag_persist_index<12> c_tag_layout_builder::add_interop_definition(struct s_tag_persist_interop_definition const &)
//{
//    mangled_ppc("?add_interop_definition@c_tag_layout_builder@@QAA?AU?$s_tag_persist_index@$0M@@@ABUs_tag_persist_interop_definition@@@Z");
//};

//public: void c_tag_layout_builder::set_root_block_definition_index(struct s_tag_persist_index<10>)
//{
//    mangled_ppc("?set_root_block_definition_index@c_tag_layout_builder@@QAAXU?$s_tag_persist_index@$09@@@Z");
//};

//public: bool c_tag_layout_builder::write(class c_persist_stream *)
//{
//    mangled_ppc("?write@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_string_characters(class c_persist_stream *)
//{
//    mangled_ppc("?save_string_characters@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_string_offsets(class c_persist_stream *)
//{
//    mangled_ppc("?save_string_offsets@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_string_lists(class c_persist_stream *)
//{
//    mangled_ppc("?save_string_lists@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_custom_search_names(class c_persist_stream *)
//{
//    mangled_ppc("?save_custom_search_names@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_data_definition_names(class c_persist_stream *)
//{
//    mangled_ppc("?save_data_definition_names@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_array_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?save_array_definitions@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_field_types(class c_persist_stream *)
//{
//    mangled_ppc("?save_field_types@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_fields(class c_persist_stream *)
//{
//    mangled_ppc("?save_fields@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_struct_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?save_struct_definitions@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_block_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?save_block_definitions@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_resource_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?save_resource_definitions@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_layout_builder::save_interop_definitions(class c_persist_stream *)
//{
//    mangled_ppc("?save_interop_definitions@c_tag_layout_builder@@QAA_NPAVc_persist_stream@@@Z");
//};

//bool store_tag_block_persist_layout(struct s_tag_block_definition const *, class c_persist_stream *)
//{
//    mangled_ppc("?store_tag_block_persist_layout@@YA_NPBUs_tag_block_definition@@PAVc_persist_stream@@@Z");
//};

//public: c_tag_layout_builder_context::c_tag_layout_builder_context(class c_tag_layout_builder *)
//{
//    mangled_ppc("??0c_tag_layout_builder_context@@QAA@PAVc_tag_layout_builder@@@Z");
//};

//public: void c_tag_layout_builder_context::build_from_root_block_definition(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?build_from_root_block_definition@c_tag_layout_builder_context@@QAAXPBUs_tag_block_definition@@@Z");
//};

//private: void c_tag_layout_builder_context::add_root_block_definition(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?add_root_block_definition@c_tag_layout_builder_context@@AAAXPBUs_tag_block_definition@@@Z");
//};

//private: void c_tag_layout_builder_context::add_all_field_types(void)
//{
//    mangled_ppc("?add_all_field_types@c_tag_layout_builder_context@@AAAXXZ");
//};

//private: struct s_tag_persist_index<10> c_tag_layout_builder_context::add_block_definition_recursive(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?add_block_definition_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$09@@PBUs_tag_block_definition@@@Z");
//};

//public: c_tag_layout_builder_context::c_add_aggregate_args::c_add_aggregate_args(struct s_tag_struct_definition const *)
//{
//    mangled_ppc("??0c_add_aggregate_args@c_tag_layout_builder_context@@QAA@PBUs_tag_struct_definition@@@Z");
//};

//private: struct s_tag_persist_index<9> c_tag_layout_builder_context::add_aggregate_recursive(class c_tag_layout_builder_context::c_add_aggregate_args)
//{
//    mangled_ppc("?add_aggregate_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$08@@Vc_add_aggregate_args@1@@Z");
//};

//private: struct s_tag_persist_index<3> c_tag_layout_builder_context::get_persist_field_type(enum e_tag_field)
//{
//    mangled_ppc("?get_persist_field_type@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$02@@W4e_tag_field@@@Z");
//};

//private: struct s_tag_persist_index<4> c_tag_layout_builder_context::add_string_list(struct s_string_list_definition const *)
//{
//    mangled_ppc("?add_string_list@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$03@@PBUs_string_list_definition@@@Z");
//};

//private: struct s_tag_persist_index<8> c_tag_layout_builder_context::add_array_definition_recursive(struct s_tag_array_definition const *)
//{
//    mangled_ppc("?add_array_definition_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$07@@PBUs_tag_array_definition@@@Z");
//};

//private: struct s_tag_persist_index<12> c_tag_layout_builder_context::add_interop_definition_recursive(struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?add_interop_definition_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$0M@@@PBUs_tag_interop_definition@@@Z");
//};

//private: struct s_tag_persist_index<9> c_tag_layout_builder_context::add_struct_definition_recursive(struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?add_struct_definition_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$08@@PBUs_tag_struct_definition@@@Z");
//};

//private: struct s_tag_persist_index<11> c_tag_layout_builder_context::add_resource_definition_recursive(struct s_tag_resource_definition const *)
//{
//    mangled_ppc("?add_resource_definition_recursive@c_tag_layout_builder_context@@AAA?AU?$s_tag_persist_index@$0L@@@PBUs_tag_resource_definition@@@Z");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>::~pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>(void)
//{
//    mangled_ppc("??1?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@_N@std@@QAA@XZ");
//};

//public: std::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::~set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void)
//{
//    mangled_ppc("??1?$set@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::~_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::~_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBXU?$s_tag_persist_index@$08@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: c_tag_layout_builder::~c_tag_layout_builder(void)
//{
//    mangled_ppc("??1c_tag_layout_builder@@QAA@XZ");
//};

//public: c_tag_layout_builder_context::~c_tag_layout_builder_context(void)
//{
//    mangled_ppc("??1c_tag_layout_builder_context@@QAA@XZ");
//};

//public: std::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::~map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void)
//{
//    mangled_ppc("??1?$map@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@@std@@QAA@XZ");
//};

//public: std::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::~map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void)
//{
//    mangled_ppc("??1?$map@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@@std@@QAA@XZ");
//};

//public: long s_tag_persist_index<3>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$02@@QBAJXZ");
//};

//public: long s_tag_persist_index<9>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$08@@QBAJXZ");
//};

//public: long s_tag_persist_index<10>::get_raw_index(void) const
//{
//    mangled_ppc("?get_raw_index@?$s_tag_persist_index@$09@@QBAJXZ");
//};

//public: void s_tag_persist_index<10>::clear(void)
//{
//    mangled_ppc("?clear@?$s_tag_persist_index@$09@@QAAXXZ");
//};

//public: array_template<char>::array_template<char>(void)
//{
//    mangled_ppc("??0?$array_template@D@@QAA@XZ");
//};

//public: array_template<char>::~array_template<char>(void)
//{
//    mangled_ppc("??1?$array_template@D@@QAA@XZ");
//};

//public: char * array_template<char>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@D@@QAAPADXZ");
//};

//public: unsigned int array_template<char>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@D@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_index<0> >::array_template<struct s_tag_persist_index<0> >(void)
//{
//    mangled_ppc("??0?$array_template@U?$s_tag_persist_index@$0A@@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_index<0> >::~array_template<struct s_tag_persist_index<0> >(void)
//{
//    mangled_ppc("??1?$array_template@U?$s_tag_persist_index@$0A@@@@@QAA@XZ");
//};

//public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: void array_template<struct s_tag_persist_index<0> >::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAXJ@Z");
//};

//public: struct s_tag_persist_index<0> & array_template<struct s_tag_persist_index<0> >::operator[](long)
//{
//    mangled_ppc("??A?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAAAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::end(void)
//{
//    mangled_ppc("?end@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@XZ");
//};

//public: unsigned int array_template<struct s_tag_persist_index<0> >::size(void) const
//{
//    mangled_ppc("?size@?$array_template@U?$s_tag_persist_index@$0A@@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_string_list>::array_template<struct s_tag_persist_string_list>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_string_list@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_string_list>::~array_template<struct s_tag_persist_string_list>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_string_list@@@@QAA@XZ");
//};

//public: struct s_tag_persist_string_list * array_template<struct s_tag_persist_string_list>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_string_list@@@@QAAPAUs_tag_persist_string_list@@XZ");
//};

//public: long array_template<struct s_tag_persist_string_list>::append(struct s_tag_persist_string_list const &)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_string_list@@@@QAAJABUs_tag_persist_string_list@@@Z");
//};

//public: unsigned int array_template<struct s_tag_persist_string_list>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_string_list@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_array_definition>::array_template<struct s_tag_persist_array_definition>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_array_definition@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_array_definition>::~array_template<struct s_tag_persist_array_definition>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_array_definition@@@@QAA@XZ");
//};

//public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: unsigned int array_template<struct s_tag_persist_array_definition>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_array_definition@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_field_type>::array_template<struct s_tag_persist_field_type>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_field_type@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_field_type>::~array_template<struct s_tag_persist_field_type>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_field_type@@@@QAA@XZ");
//};

//public: struct s_tag_persist_field_type * array_template<struct s_tag_persist_field_type>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_field_type@@@@QAAPAUs_tag_persist_field_type@@XZ");
//};

//public: long array_template<struct s_tag_persist_field_type>::append(struct s_tag_persist_field_type const &)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_field_type@@@@QAAJABUs_tag_persist_field_type@@@Z");
//};

//public: unsigned int array_template<struct s_tag_persist_field_type>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_field_type@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_field>::array_template<struct s_tag_persist_field>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_field@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_field>::~array_template<struct s_tag_persist_field>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_field@@@@QAA@XZ");
//};

//public: struct s_tag_persist_field * array_template<struct s_tag_persist_field>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_field@@@@QAAPAUs_tag_persist_field@@XZ");
//};

//public: struct s_tag_persist_field * array_template<struct s_tag_persist_field>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_persist_field@@@@QAAPAUs_tag_persist_field@@J@Z");
//};

//public: void array_template<struct s_tag_persist_field>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_field@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_field>::append(struct s_tag_persist_field const *, long)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_field@@@@QAAXPBUs_tag_persist_field@@J@Z");
//};

//public: unsigned int array_template<struct s_tag_persist_field>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_field@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_struct_definition>::array_template<struct s_tag_persist_struct_definition>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_struct_definition@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_struct_definition>::~array_template<struct s_tag_persist_struct_definition>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_struct_definition@@@@QAA@XZ");
//};

//public: struct s_tag_persist_struct_definition * array_template<struct s_tag_persist_struct_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_struct_definition@@@@QAAPAUs_tag_persist_struct_definition@@XZ");
//};

//public: struct s_tag_persist_struct_definition & array_template<struct s_tag_persist_struct_definition>::element(long)
//{
//    mangled_ppc("?element@?$array_template@Us_tag_persist_struct_definition@@@@QAAAAUs_tag_persist_struct_definition@@J@Z");
//};

//public: long array_template<struct s_tag_persist_struct_definition>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_tag_persist_struct_definition@@@@QAAJXZ");
//};

//public: unsigned int array_template<struct s_tag_persist_struct_definition>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_struct_definition@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_block_definition>::array_template<struct s_tag_persist_block_definition>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_block_definition@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_block_definition>::~array_template<struct s_tag_persist_block_definition>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_block_definition@@@@QAA@XZ");
//};

//public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: unsigned int array_template<struct s_tag_persist_block_definition>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_block_definition@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_resource_definition>::array_template<struct s_tag_persist_resource_definition>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_resource_definition@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_resource_definition>::~array_template<struct s_tag_persist_resource_definition>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_resource_definition@@@@QAA@XZ");
//};

//public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: unsigned int array_template<struct s_tag_persist_resource_definition>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_resource_definition@@@@QBAIXZ");
//};

//public: array_template<struct s_tag_persist_interop_definition>::array_template<struct s_tag_persist_interop_definition>(void)
//{
//    mangled_ppc("??0?$array_template@Us_tag_persist_interop_definition@@@@QAA@XZ");
//};

//public: array_template<struct s_tag_persist_interop_definition>::~array_template<struct s_tag_persist_interop_definition>(void)
//{
//    mangled_ppc("??1?$array_template@Us_tag_persist_interop_definition@@@@QAA@XZ");
//};

//public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$array_template@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: unsigned int array_template<struct s_tag_persist_interop_definition>::size(void) const
//{
//    mangled_ppc("?size@?$array_template@Us_tag_persist_interop_definition@@@@QBAIXZ");
//};

//public: std::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::map<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void)
//{
//    mangled_ppc("??0?$map@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::insert(struct std::pair<void const *const, struct s_tag_persist_index<9> > const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@_N@2@ABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@@Z");
//};

//public: void s_static_array<struct s_tag_persist_index<3>, 62>::set_all(struct s_tag_persist_index<3> const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@U?$s_tag_persist_index@$02@@$0DO@@@QAAXABU?$s_tag_persist_index@$02@@@Z");
//};

//public: std::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::map<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void)
//{
//    mangled_ppc("??0?$map@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: struct std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool> std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::insert(struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &)
//{
//    mangled_ppc("?insert@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@@Z");
//};

//public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBAPAU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@XZ");
//};

//public: struct std::pair<void const *const, struct s_tag_persist_index<9> > * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator->(void) const
//{
//    mangled_ppc("??Citerator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBAPAU?$pair@QBXU?$s_tag_persist_index@$08@@@2@XZ");
//};

//public: std::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::set<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void)
//{
//    mangled_ppc("??0?$set@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_val@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_ptr@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::~_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::~_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(void)
//{
//    mangled_ppc("??1?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::~_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>(void)
//{
//    mangled_ppc("??1?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@QAA@XZ");
//};

//public: std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::~_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>(void)
//{
//    mangled_ppc("??1?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@QAA@XZ");
//};

//public: std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>::~_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>(void)
//{
//    mangled_ppc("??1?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@QAA@XZ");
//};

//public: void array_template<char>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@D@@QAAXJ@Z");
//};

//public: struct s_tag_persist_index<0> & array_template<struct s_tag_persist_index<0> >::element(long)
//{
//    mangled_ppc("?element@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAAAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_tag_persist_index<0> * array_template<struct s_tag_persist_index<0> >::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAPAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: void array_template<struct s_tag_persist_index<0> >::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAXJJ@Z");
//};

//public: long array_template<struct s_tag_persist_string_list>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_tag_persist_string_list@@@@QAAJXZ");
//};

//public: void array_template<struct s_tag_persist_string_list>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_string_list@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_array_definition>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_array_definition@@@@QAAXJ@Z");
//};

//public: long array_template<struct s_tag_persist_field_type>::new_element_index(void)
//{
//    mangled_ppc("?new_element_index@?$array_template@Us_tag_persist_field_type@@@@QAAJXZ");
//};

//public: void array_template<struct s_tag_persist_field_type>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_field_type@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_field>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_field@@@@QAAXJJ@Z");
//};

//public: long array_template<struct s_tag_persist_field>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@Us_tag_persist_field@@@@QAAJJ@Z");
//};

//protected: void array_template<struct s_tag_persist_struct_definition>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_struct_definition@@@@IBAXXZ");
//};

//public: void array_template<struct s_tag_persist_struct_definition>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_struct_definition@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_block_definition>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_block_definition@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_resource_definition>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_resource_definition@@@@QAAXJ@Z");
//};

//public: void array_template<struct s_tag_persist_interop_definition>::resize(long)
//{
//    mangled_ppc("?resize@?$array_template@Us_tag_persist_interop_definition@@@@QAAXJ@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static void const *const & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAABQBXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@ABU?$less@PBX@1@ABV?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//protected: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@ABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAXXZ");
//};

//public: static void const *const & std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::_Kfn(struct std::pair<void const *const, struct s_tag_persist_index<9> > const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@SAABQBXABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@std@@QAA@XZ");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: static struct s_string_list_definition const *const & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Key(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Key@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAABQBUs_string_list_definition@@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Left(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Right(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@ABU?$less@PBUs_string_list_definition@@@1@ABV?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//protected: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Insert(bool, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &)
//{
//    mangled_ppc("?_Insert@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAA?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@ABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAXXZ");
//};

//public: static struct s_string_list_definition const *const & std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::_Kfn(struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &)
//{
//    mangled_ppc("?_Kfn@?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@SAABQBUs_string_list_definition@@ABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@std@@QAA@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBAAAU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@3@XZ");
//};

//public: std::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>::pair<class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator, bool>(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator const &, bool const &)
//{
//    mangled_ppc("??0?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@_N@std@@QAA@ABViterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@1@AB_N@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<void const *const, struct s_tag_persist_index<9> > & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator*(void) const
//{
//    mangled_ppc("??Diterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBAAAU?$pair@QBXU?$s_tag_persist_index@$08@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: bool std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@3@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &)
//{
//    mangled_ppc("??0?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@ABV?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::~_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(void)
//{
//    mangled_ppc("??0?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator::iterator(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::~iterator(void)
//{
//    mangled_ppc("??1iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::const_iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::~const_iterator(void)
//{
//    mangled_ppc("??1const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(struct std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(struct std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(struct std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &> const &)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@HPBU12@ABU12@@std@@QAA@ABU01@@Z");
//};

//public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::~_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(void)
//{
//    mangled_ppc("??1?$_Bidit@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBXU?$s_tag_persist_index@$08@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(struct std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base> const &)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@ABU01@@Z");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::~_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??1?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: void array_template<char>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@D@@QAAXJJ@Z");
//};

//protected: void array_template<struct s_tag_persist_index<0> >::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@U?$s_tag_persist_index@$0A@@@@@IBAXXZ");
//};

//protected: void array_template<struct s_tag_persist_string_list>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_string_list@@@@IBAXXZ");
//};

//public: void array_template<struct s_tag_persist_string_list>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_string_list@@@@QAAXJJ@Z");
//};

//public: void array_template<struct s_tag_persist_array_definition>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_array_definition@@@@QAAXJJ@Z");
//};

//protected: void array_template<struct s_tag_persist_field_type>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_field_type@@@@IBAXXZ");
//};

//public: void array_template<struct s_tag_persist_field_type>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_field_type@@@@QAAXJJ@Z");
//};

//protected: void array_template<struct s_tag_persist_field>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_field@@@@IBAXXZ");
//};

//public: long array_template<struct s_tag_persist_field>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@Us_tag_persist_field@@@@QAAJJJ@Z");
//};

//public: void array_template<struct s_tag_persist_struct_definition>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_struct_definition@@@@QAAXJJ@Z");
//};

//public: void array_template<struct s_tag_persist_block_definition>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_block_definition@@@@QAAXJJ@Z");
//};

//public: void array_template<struct s_tag_persist_resource_definition>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_resource_definition@@@@QAAXJJ@Z");
//};

//public: void array_template<struct s_tag_persist_interop_definition>::resize_fill(long, long)
//{
//    mangled_ppc("?resize_fill@?$array_template@Us_tag_persist_interop_definition@@@@QAAXJJ@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<void const *const, struct s_tag_persist_index<9> > & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAAAU?$pair@QBXU?$s_tag_persist_index@$08@@@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@00ABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@D@Z");
//};

//protected: std::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_val<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAA@ABU?$less@PBX@1@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//public: std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static char & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Color(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Myval(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Myval@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAAAU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: unsigned int std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBAIXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *& std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@XZ");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Buynode(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, char)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@00ABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@D@Z");
//};

//protected: std::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_val<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAA@ABU?$less@PBUs_string_list_definition@@@1@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//public: std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//public: std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBAABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PBV12@@Z");
//};

//public: struct std::pair<void const *const, struct s_tag_persist_index<9> > const & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBAABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator--(void)
//{
//    mangled_ppc("??Fconst_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Left(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Left@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Parent(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Parent@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Right(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Right@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::begin(void)
//{
//    mangled_ppc("?begin@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::end(void)
//{
//    mangled_ppc("?end@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@XZ");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@0@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Init(void)
//{
//    mangled_ppc("?_Init@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAXXZ");
//};

//protected: std::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_val<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >)
//{
//    mangled_ppc("??0?$_Tree_val@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//public: std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &)
//{
//    mangled_ppc("??0?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::deallocate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **)
//{
//    mangled_ppc("?destroy@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//public: std::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>::_Bidit<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>::_Bidit<struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >, int, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<void const *const, struct s_tag_persist_index<9> >, int, struct std::pair<void const *const, struct s_tag_persist_index<9> > const *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@QBXU?$s_tag_persist_index@$08@@@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//protected: void array_template<char>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@D@@IBAXXZ");
//};

//protected: void array_template<struct s_tag_persist_array_definition>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_array_definition@@@@IBAXXZ");
//};

//protected: void array_template<struct s_tag_persist_block_definition>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_block_definition@@@@IBAXXZ");
//};

//protected: void array_template<struct s_tag_persist_resource_definition>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_resource_definition@@@@IBAXXZ");
//};

//protected: void array_template<struct s_tag_persist_interop_definition>::signal_out_of_memory(void) const
//{
//    mangled_ppc("?signal_out_of_memory@?$array_template@Us_tag_persist_interop_definition@@@@IBAXXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@ABU?$less@PBX@1@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@I@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Make_iter(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::erase(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_ptr<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@ABU?$less@PBUs_string_list_definition@@@1@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//public: unsigned int std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@std@@QBAIXZ");
//};

//public: struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@I@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAXXZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Dec(void)
//{
//    mangled_ppc("?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAXXZ");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Isnil(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Isnil@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Make_iter(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator) const
//{
//    mangled_ppc("?_Make_iter@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QBA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::erase(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator)
//{
//    mangled_ppc("?erase@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA?AViterator@12@Vconst_iterator@12@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::clear(void)
//{
//    mangled_ppc("?clear@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Lmost(void) const
//{
//    mangled_ppc("?_Lmost@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Rmost(void) const
//{
//    mangled_ppc("?_Rmost@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *& std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Root(void) const
//{
//    mangled_ppc("?_Root@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IBAAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@XZ");
//};

//protected: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Buynode(void)
//{
//    mangled_ppc("?_Buynode@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@XZ");
//};

//public: std::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_ptr<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >)
//{
//    mangled_ppc("??0?$_Tree_ptr@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@ABU?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::pair<void const *const, struct s_tag_persist_index<9> > const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@QBXU?$s_tag_persist_index@$08@@@2@D@Z");
//};

//public: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node::_Node(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > const &, char)
//{
//    mangled_ppc("??0_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAA@PAU012@00ABU?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@2@D@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > const *)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator++(int)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA?AV012@H@Z");
//};

//public: bool std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator==(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??8const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: bool std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator!=(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator const &) const
//{
//    mangled_ppc("??9const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QBA_NABV012@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator::iterator(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::iterator const &)
//{
//    mangled_ppc("??0iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@ABV012@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >(struct std::less<void const *> const &, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@IAA@ABU?$less@PBX@1@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@2@ABQAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Max(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Min(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> > &, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >(struct std::less<struct s_string_list_definition const *> const &, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@IAA@ABU?$less@PBUs_string_list_definition@@@1@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@2@ABQAU342@@Z");
//};

//public: class std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: class std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator & std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//protected: static char & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Color(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Color@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAAADPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Erase(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Erase@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Lrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Lrotate@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Max(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Max@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: static struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Min(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Min@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PAU342@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Rrotate(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?_Rrotate@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Orphan_ptr(class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > &, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *) const
//{
//    mangled_ppc("?_Orphan_ptr@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IBAXAAV12@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//protected: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >)
//{
//    mangled_ppc("??0?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@IAA@ABU?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@I@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::destroy(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("?destroy@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@@Z");
//};

//public: void std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::construct(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("?construct@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@ABQAU342@@Z");
//};

//public: std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::const_iterator(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> > const *)
//{
//    mangled_ppc("??0const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@2@PBV12@@Z");
//};

//public: class std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator & std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::operator++(void)
//{
//    mangled_ppc("??Econst_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAAAAV012@XZ");
//};

//public: struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::_Mynode(void) const
//{
//    mangled_ppc("?_Mynode@const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QBAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@3@XZ");
//};

//public: std::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>::_Bidit<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &>(void)
//{
//    mangled_ppc("??0?$_Bidit@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@HPBU12@ABU12@@std@@QAA@XZ");
//};

//public: std::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>::_Iterator_with_base<struct std::bidirectional_iterator_tag, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, int, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const *, struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> const &, class std::_Iterator_base>(void)
//{
//    mangled_ppc("??0?$_Iterator_with_base@Ubidirectional_iterator_tag@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@2@HPBU32@ABU32@V_Iterator_base@2@@std@@QAA@XZ");
//};

//public: std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0>(struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >)
//{
//    mangled_ppc("??0?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@QAA@U?$less@PBX@1@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//public: std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0>(struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >)
//{
//    mangled_ppc("??0?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@QAA@U?$less@PBUs_string_list_definition@@@1@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//public: void std::_Tree<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@QAAXXZ");
//};

//public: void std::_Tree<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@QAAXXZ");
//};

//public: std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0>(struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >)
//{
//    mangled_ppc("??0?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@QAA@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//public: void std::_Tree<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::const_iterator::_Inc(void)
//{
//    mangled_ppc("?_Inc@const_iterator@?$_Tree@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAAXXZ");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@std@@@std@@IAA@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@std@@@std@@IAA@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >::_Container_base_aux_alloc_empty<class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@std@@@std@@IAA@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//long find_or_add_explicit_list<char>(char const *, char const *, struct array_template<char> &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@D@@YAJPBD0AAU?$array_template@D@@@Z");
//};

//long add_explicit_list<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct array_template<struct s_tag_persist_index<0> > &)
//{
//    mangled_ppc("??$add_explicit_list@U?$s_tag_persist_index@$0A@@@@@YAJPBU?$s_tag_persist_index@$0A@@@0AAU?$array_template@U?$s_tag_persist_index@$0A@@@@@@Z");
//};

//long find_or_add_explicit_list<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct array_template<struct s_tag_persist_index<0> > &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@U?$s_tag_persist_index@$0A@@@@@YAJPBU?$s_tag_persist_index@$0A@@@0AAU?$array_template@U?$s_tag_persist_index@$0A@@@@@@Z");
//};

//long find_or_add_explicit_list<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct array_template<struct s_tag_persist_array_definition> &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@Us_tag_persist_array_definition@@@@YAJPBUs_tag_persist_array_definition@@0AAU?$array_template@Us_tag_persist_array_definition@@@@@Z");
//};

//long find_or_add_explicit_list<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct array_template<struct s_tag_persist_block_definition> &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@Us_tag_persist_block_definition@@@@YAJPBUs_tag_persist_block_definition@@0AAU?$array_template@Us_tag_persist_block_definition@@@@@Z");
//};

//long find_or_add_explicit_list<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct array_template<struct s_tag_persist_resource_definition> &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@Us_tag_persist_resource_definition@@@@YAJPBUs_tag_persist_resource_definition@@0AAU?$array_template@Us_tag_persist_resource_definition@@@@@Z");
//};

//long find_or_add_explicit_list<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct array_template<struct s_tag_persist_interop_definition> &)
//{
//    mangled_ppc("??$find_or_add_explicit_list@Us_tag_persist_interop_definition@@@@YAJPBUs_tag_persist_interop_definition@@0AAU?$array_template@Us_tag_persist_interop_definition@@@@@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_layout_header_preinterop>(struct s_tag_persist_layout_header_preinterop *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_layout_header_preinterop@@@c_persist_stream@@QAA_NPAUs_tag_persist_layout_header_preinterop@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_layout_header_v3>(struct s_tag_persist_layout_header_v3*, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_layout_header_v3@@@c_persist_stream@@QAA_NPAUs_tag_persist_layout_header_v3@@J@Z");
//};

//public: c_simple_persist_archiver_visitor::ctor<class c_tag_layout_builder>(class c_tag_layout_builder *, class c_persist_stream *)
//{
//    mangled_ppc("??$?0Vc_tag_layout_builder@@@c_simple_persist_archiver_visitor@@QAA@PAVc_tag_layout_builder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_simple_persist_archiver_visitor::traverse_leaf(class c_persist_archiver const *)
//{
//    mangled_ppc("?traverse_leaf@c_simple_persist_archiver_visitor@@UAA_NPBVc_persist_archiver@@@Z");
//};

//public: virtual bool c_simple_persist_archiver_visitor::traverse_node(class c_persist_archiver const *)
//{
//    mangled_ppc("?traverse_node@c_simple_persist_archiver_visitor@@UAA_NPBVc_persist_archiver@@@Z");
//};

//public: virtual bool c_simple_persist_archiver_visitor::traverse(class c_persist_archiver const *)
//{
//    mangled_ppc("?traverse@c_simple_persist_archiver_visitor@@UAA_NPBVc_persist_archiver@@@Z");
//};

//private: bool c_simple_persist_archiver_visitor::visit(class c_persist_archiver const *)
//{
//    mangled_ppc("?visit@c_simple_persist_archiver_visitor@@AAA_NPBVc_persist_archiver@@@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> *, long)
//{
//    mangled_ppc("??$write_typed@U?$s_tag_persist_index@$0A@@@@c_persist_stream@@QAA_NPAU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_string_list>(struct s_tag_persist_string_list *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_string_list@@@c_persist_stream@@QAA_NPAUs_tag_persist_string_list@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_array_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_array_definition@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_field_type>(struct s_tag_persist_field_type *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_field_type@@@c_persist_stream@@QAA_NPAUs_tag_persist_field_type@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_field>(struct s_tag_persist_field *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_field@@@c_persist_stream@@QAA_NPAUs_tag_persist_field@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_struct_definition>(struct s_tag_persist_struct_definition *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_struct_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_struct_definition@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_block_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_block_definition@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_resource_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_resource_definition@@J@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition *, long)
//{
//    mangled_ppc("??$write_typed@Us_tag_persist_interop_definition@@@c_persist_stream@@QAA_NPAUs_tag_persist_interop_definition@@J@Z");
//};

//public: struct s_tag_persist_index<3> & s_static_array<struct s_tag_persist_index<3>, 62>::operator[]<enum e_tag_field>(enum e_tag_field)
//{
//    mangled_ppc("??$?AW4e_tag_field@@@?$s_static_array@U?$s_tag_persist_index@$02@@$0DO@@@QAAAAU?$s_tag_persist_index@$02@@W4e_tag_field@@@Z");
//};

//struct std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> > std::make_pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct s_string_list_definition const *, struct s_tag_persist_index<4>)
//{
//    mangled_ppc("??$make_pair@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@YA?AU?$pair@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@0@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@Z");
//};

//public: std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> >::ctor<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> > const &)
//{
//    mangled_ppc("??$?0PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@QAA@ABU?$pair@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@1@@Z");
//};

//struct std::pair<void const *, struct s_tag_persist_index<9> > std::make_pair<void const *, struct s_tag_persist_index<9> >(void const *, struct s_tag_persist_index<9>)
//{
//    mangled_ppc("??$make_pair@PBXU?$s_tag_persist_index@$08@@@std@@YA?AU?$pair@PBXU?$s_tag_persist_index@$08@@@0@PBXU?$s_tag_persist_index@$08@@@Z");
//};

//public: std::pair<void const *const, struct s_tag_persist_index<9> >::ctor<void const *, struct s_tag_persist_index<9> >(struct std::pair<void const *, struct s_tag_persist_index<9> > const &)
//{
//    mangled_ppc("??$?0PBXU?$s_tag_persist_index@$08@@@?$pair@QBXU?$s_tag_persist_index@$08@@@std@@QAA@ABU?$pair@PBXU?$s_tag_persist_index@$08@@@1@@Z");
//};

//struct s_tag_block_definition const * void_cast<struct s_tag_block_definition const *>(void const *)
//{
//    mangled_ppc("??$void_cast@PBUs_tag_block_definition@@@@YAPBUs_tag_block_definition@@PBX@Z");
//};

//struct s_string_list_definition const * void_cast<struct s_string_list_definition const *>(void const *)
//{
//    mangled_ppc("??$void_cast@PBUs_string_list_definition@@@@YAPBUs_string_list_definition@@PBX@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<void const *>, void const *, void const *>(struct std::less<void const *>, void const *const &, void const *const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@PBX@std@@PBXPBX@std@@YA_NU?$less@PBX@0@ABQBX1PB_WI@Z");
//};

//bool std::_Debug_lt_pred<struct std::less<struct s_string_list_definition const *>, struct s_string_list_definition const *, struct s_string_list_definition const *>(struct std::less<struct s_string_list_definition const *>, struct s_string_list_definition const *const &, struct s_string_list_definition const *const &, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_lt_pred@U?$less@PBUs_string_list_definition@@@std@@PBUs_string_list_definition@@PBU3@@std@@YA_NU?$less@PBUs_string_list_definition@@@0@ABQBUs_string_list_definition@@1PB_WI@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@0@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@0@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **)
//{
//    mangled_ppc("??$_Destroy@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@0@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>::ctor<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@0@IPAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>::ctor<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@0@IPAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>::ctor<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@?$allocator@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>::ctor<struct std::pair<void const *const, struct s_tag_persist_index<9> > >(class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@1@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<void const *, struct s_tag_persist_index<9>, struct std::less<void const *>, class std::allocator<struct std::pair<void const *const, struct s_tag_persist_index<9> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBXU?$s_tag_persist_index@$08@@U?$less@PBX@std@@V?$allocator@U?$pair@QBXU?$s_tag_persist_index@$08@@@std@@@3@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>::ctor<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >(class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > > const &)
//{
//    mangled_ppc("??$?0U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@1@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tmap_traits<struct s_string_list_definition const *, struct s_tag_persist_index<4>, struct std::less<struct s_string_list_definition const *>, class std::allocator<struct std::pair<struct s_string_list_definition const *const, struct s_tag_persist_index<4> > >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@U?$less@PBUs_string_list_definition@@@std@@V?$allocator@U?$pair@QBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@@4@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: std::allocator<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>::ctor<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >(class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> > const &)
//{
//    mangled_ppc("??$?0U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@?$allocator@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@QAA@ABV?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@1@@Z");
//};

//struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node * std::_Allocate<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>(unsigned int, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@0@IPAU120@@Z");
//};

//void std::_Destroy<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *)
//{
//    mangled_ppc("??$_Destroy@U_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@@std@@YAXPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@0@@Z");
//};

//void std::_Construct<struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *>(struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node **, struct std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node *const &)
//{
//    mangled_ppc("??$_Construct@PAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@PAU123@@std@@YAXPAPAU_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@0@ABQAU120@@Z");
//};

//public: void * std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAAPAXI@Z");
//};

//public: std::_Tree_nod<class std::_Tset_traits<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>, struct std::less<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long> >, 0> >::_Node::~_Node(void)
//{
//    mangled_ppc("??1_Node@?$_Tree_nod@V?$_Tset_traits@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@U?$less@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@@2@$0A@@std@@@std@@QAA@XZ");
//};

//public: std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>::~pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, long>(void)
//{
//    mangled_ppc("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@std@@QAA@XZ");
//};

//public: char * array_template<char>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@D@@QAAPADXZ");
//};

//public: char * array_template<char>::end(void)
//{
//    mangled_ppc("?end@?$array_template@D@@QAAPADXZ");
//};

//public: void array_template<struct s_tag_persist_index<0> >::append(struct s_tag_persist_index<0> const *, long)
//{
//    mangled_ppc("?append@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAXPBU?$s_tag_persist_index@$0A@@@J@Z");
//};

//public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::end(void)
//{
//    mangled_ppc("?end@?$array_template@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@XZ");
//};

//public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::end(void)
//{
//    mangled_ppc("?end@?$array_template@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@XZ");
//};

//public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::end(void)
//{
//    mangled_ppc("?end@?$array_template@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@XZ");
//};

//public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::begin(void)
//{
//    mangled_ppc("?begin@?$array_template@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::end(void)
//{
//    mangled_ppc("?end@?$array_template@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@XZ");
//};

//public: bool std::less<void const *>::operator()(void const *const &, void const *const &) const
//{
//    mangled_ppc("??R?$less@PBX@std@@QBA_NABQBX0@Z");
//};

//public: bool std::less<struct s_string_list_definition const *>::operator()(struct s_string_list_definition const *const &, struct s_string_list_definition const *const &) const
//{
//    mangled_ppc("??R?$less@PBUs_string_list_definition@@@std@@QBA_NABQBUs_string_list_definition@@0@Z");
//};

//public: std::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >::pair<struct s_string_list_definition const *, struct s_tag_persist_index<4> >(struct s_string_list_definition const *const &, struct s_tag_persist_index<4> const &)
//{
//    mangled_ppc("??0?$pair@PBUs_string_list_definition@@U?$s_tag_persist_index@$03@@@std@@QAA@ABQBUs_string_list_definition@@ABU?$s_tag_persist_index@$03@@@Z");
//};

//public: std::pair<void const *, struct s_tag_persist_index<9> >::pair<void const *, struct s_tag_persist_index<9> >(void const *const &, struct s_tag_persist_index<9> const &)
//{
//    mangled_ppc("??0?$pair@PBXU?$s_tag_persist_index@$08@@@std@@QAA@ABQBXABU?$s_tag_persist_index@$08@@@Z");
//};

//public: static struct s_tag_block_definition const * s_void_cast_check<struct s_tag_block_definition const *>::convert(void const *)
//{
//    mangled_ppc("?convert@?$s_void_cast_check@PBUs_tag_block_definition@@@@SAPBUs_tag_block_definition@@PBX@Z");
//};

//public: static struct s_string_list_definition const * s_void_cast_check<struct s_string_list_definition const *>::convert(void const *)
//{
//    mangled_ppc("?convert@?$s_void_cast_check@PBUs_string_list_definition@@@@SAPBUs_string_list_definition@@PBX@Z");
//};

//public: char * array_template<char>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@D@@QAAPADJ@Z");
//};

//public: long array_template<struct s_tag_persist_index<0> >::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAJJ@Z");
//};

//public: struct s_tag_persist_array_definition * array_template<struct s_tag_persist_array_definition>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_persist_array_definition@@@@QAAPAUs_tag_persist_array_definition@@J@Z");
//};

//public: struct s_tag_persist_block_definition * array_template<struct s_tag_persist_block_definition>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_persist_block_definition@@@@QAAPAUs_tag_persist_block_definition@@J@Z");
//};

//public: struct s_tag_persist_resource_definition * array_template<struct s_tag_persist_resource_definition>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_persist_resource_definition@@@@QAAPAUs_tag_persist_resource_definition@@J@Z");
//};

//public: struct s_tag_persist_interop_definition * array_template<struct s_tag_persist_interop_definition>::get_element(long)
//{
//    mangled_ppc("?get_element@?$array_template@Us_tag_persist_interop_definition@@@@QAAPAUs_tag_persist_interop_definition@@J@Z");
//};

//public: long array_template<struct s_tag_persist_index<0> >::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@U?$s_tag_persist_index@$0A@@@@@QAAJJJ@Z");
//};

//char const * std::search<char const *, char const *>(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("??$search@PBDPBD@std@@YAPBDPBD000@Z");
//};

//long add_explicit_list<char>(char const *, char const *, struct array_template<char> &)
//{
//    mangled_ppc("??$add_explicit_list@D@@YAJPBD0AAU?$array_template@D@@@Z");
//};

//struct s_tag_persist_index<0> const * std::search<struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *)
//{
//    mangled_ppc("??$search@PBU?$s_tag_persist_index@$0A@@@PBU1@@std@@YAPBU?$s_tag_persist_index@$0A@@@PBU1@000@Z");
//};

//struct s_tag_persist_array_definition const * std::search<struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *)
//{
//    mangled_ppc("??$search@PBUs_tag_persist_array_definition@@PBU1@@std@@YAPBUs_tag_persist_array_definition@@PBU1@000@Z");
//};

//long add_explicit_list<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct array_template<struct s_tag_persist_array_definition> &)
//{
//    mangled_ppc("??$add_explicit_list@Us_tag_persist_array_definition@@@@YAJPBUs_tag_persist_array_definition@@0AAU?$array_template@Us_tag_persist_array_definition@@@@@Z");
//};

//struct s_tag_persist_block_definition const * std::search<struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *)
//{
//    mangled_ppc("??$search@PBUs_tag_persist_block_definition@@PBU1@@std@@YAPBUs_tag_persist_block_definition@@PBU1@000@Z");
//};

//long add_explicit_list<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct array_template<struct s_tag_persist_block_definition> &)
//{
//    mangled_ppc("??$add_explicit_list@Us_tag_persist_block_definition@@@@YAJPBUs_tag_persist_block_definition@@0AAU?$array_template@Us_tag_persist_block_definition@@@@@Z");
//};

//struct s_tag_persist_resource_definition const * std::search<struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *)
//{
//    mangled_ppc("??$search@PBUs_tag_persist_resource_definition@@PBU1@@std@@YAPBUs_tag_persist_resource_definition@@PBU1@000@Z");
//};

//long add_explicit_list<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct array_template<struct s_tag_persist_resource_definition> &)
//{
//    mangled_ppc("??$add_explicit_list@Us_tag_persist_resource_definition@@@@YAJPBUs_tag_persist_resource_definition@@0AAU?$array_template@Us_tag_persist_resource_definition@@@@@Z");
//};

//struct s_tag_persist_interop_definition const * std::search<struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *)
//{
//    mangled_ppc("??$search@PBUs_tag_persist_interop_definition@@PBU1@@std@@YAPBUs_tag_persist_interop_definition@@PBU1@000@Z");
//};

//long add_explicit_list<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct array_template<struct s_tag_persist_interop_definition> &)
//{
//    mangled_ppc("??$add_explicit_list@Us_tag_persist_interop_definition@@@@YAJPBUs_tag_persist_interop_definition@@0AAU?$array_template@Us_tag_persist_interop_definition@@@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_tag_layout_builder>(class c_tag_layout_builder *)
//{
//    mangled_ppc("??$?0Vc_tag_layout_builder@@@c_typed_pointer_holder@@QAA@PAVc_tag_layout_builder@@@Z");
//};

//public: static bool s_static_array<struct s_tag_persist_index<3>, 62>::valid<enum e_tag_field>(enum e_tag_field)
//{
//    mangled_ppc("??$valid@W4e_tag_field@@@?$s_static_array@U?$s_tag_persist_index@$02@@$0DO@@@SA_NW4e_tag_field@@@Z");
//};

//public: void array_template<char>::append(char const *, long)
//{
//    mangled_ppc("?append@?$array_template@D@@QAAXPBDJ@Z");
//};

//public: void array_template<struct s_tag_persist_array_definition>::append(struct s_tag_persist_array_definition const *, long)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_array_definition@@@@QAAXPBUs_tag_persist_array_definition@@J@Z");
//};

//public: void array_template<struct s_tag_persist_block_definition>::append(struct s_tag_persist_block_definition const *, long)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_block_definition@@@@QAAXPBUs_tag_persist_block_definition@@J@Z");
//};

//public: void array_template<struct s_tag_persist_resource_definition>::append(struct s_tag_persist_resource_definition const *, long)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_resource_definition@@@@QAAXPBUs_tag_persist_resource_definition@@J@Z");
//};

//public: void array_template<struct s_tag_persist_interop_definition>::append(struct s_tag_persist_interop_definition const *, long)
//{
//    mangled_ppc("?append@?$array_template@Us_tag_persist_interop_definition@@@@QAAXPBUs_tag_persist_interop_definition@@J@Z");
//};

//public: long array_template<char>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@D@@QAAJJ@Z");
//};

//public: long array_template<struct s_tag_persist_array_definition>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@Us_tag_persist_array_definition@@@@QAAJJ@Z");
//};

//public: long array_template<struct s_tag_persist_block_definition>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@Us_tag_persist_block_definition@@@@QAAJJ@Z");
//};

//public: long array_template<struct s_tag_persist_resource_definition>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@Us_tag_persist_resource_definition@@@@QAAJJ@Z");
//};

//public: long array_template<struct s_tag_persist_interop_definition>::grow(long)
//{
//    mangled_ppc("?grow@?$array_template@Us_tag_persist_interop_definition@@@@QAAJJ@Z");
//};

//public: long array_template<char>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@D@@QAAJJJ@Z");
//};

//public: long array_template<struct s_tag_persist_array_definition>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@Us_tag_persist_array_definition@@@@QAAJJJ@Z");
//};

//public: long array_template<struct s_tag_persist_block_definition>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@Us_tag_persist_block_definition@@@@QAAJJJ@Z");
//};

//public: long array_template<struct s_tag_persist_resource_definition>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@Us_tag_persist_resource_definition@@@@QAAJJJ@Z");
//};

//public: long array_template<struct s_tag_persist_interop_definition>::grow_fill(long, long)
//{
//    mangled_ppc("?grow_fill@?$array_template@Us_tag_persist_interop_definition@@@@QAAJJJ@Z");
//};

//int * std::_Dist_type<char const *>(char const *)
//{
//    mangled_ppc("??$_Dist_type@PBD@std@@YAPAHPBD@Z");
//};

//char const * std::_Search<char const *, char const *, int, int>(char const *, char const *, char const *, char const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBDPBDHH@std@@YAPBDPBD000PAH1@Z");
//};

//void std::_Checked_assign_from_base<char const *>(char const *&, char const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBD@std@@YAXAAPBDABQBD@Z");
//};

//struct s_tag_persist_index<0> const * std::_Checked_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&)
//{
//    mangled_ppc("??$_Checked_base@PBU?$s_tag_persist_index@$0A@@@@std@@YAPBU?$s_tag_persist_index@$0A@@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *)
//{
//    mangled_ppc("??$_Dist_type@PBU?$s_tag_persist_index@$0A@@@@std@@YAPAHPBU?$s_tag_persist_index@$0A@@@@Z");
//};

//struct s_tag_persist_index<0> const * std::_Search<struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBU?$s_tag_persist_index@$0A@@@PBU1@HH@std@@YAPBU?$s_tag_persist_index@$0A@@@PBU1@000PAH1@Z");
//};

//public: bool s_tag_persist_index<0>::operator==(struct s_tag_persist_index<0> const &) const
//{
//    mangled_ppc("??8?$s_tag_persist_index@$0A@@@QBA_NABU0@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&, struct s_tag_persist_index<0> const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBU?$s_tag_persist_index@$0A@@@@std@@YAXAAPBU?$s_tag_persist_index@$0A@@@ABQBU1@@Z");
//};

//struct s_tag_persist_array_definition const * std::_Checked_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_array_definition@@@std@@YAPBUs_tag_persist_array_definition@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_tag_persist_array_definition@@@std@@YAPAHPBUs_tag_persist_array_definition@@@Z");
//};

//struct s_tag_persist_array_definition const * std::_Search<struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBUs_tag_persist_array_definition@@PBU1@HH@std@@YAPBUs_tag_persist_array_definition@@PBU1@000PAH1@Z");
//};

//public: bool s_tag_persist_array_definition::operator==(struct s_tag_persist_array_definition const &) const
//{
//    mangled_ppc("??8s_tag_persist_array_definition@@QBA_NABU0@@Z");
//};

//public: bool s_tag_persist_index<9>::operator==(struct s_tag_persist_index<9> const &) const
//{
//    mangled_ppc("??8?$s_tag_persist_index@$08@@QBA_NABU0@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&, struct s_tag_persist_array_definition const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_persist_array_definition@@@std@@YAXAAPBUs_tag_persist_array_definition@@ABQBU1@@Z");
//};

//struct s_tag_persist_block_definition const * std::_Checked_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_block_definition@@@std@@YAPBUs_tag_persist_block_definition@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_tag_persist_block_definition@@@std@@YAPAHPBUs_tag_persist_block_definition@@@Z");
//};

//struct s_tag_persist_block_definition const * std::_Search<struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBUs_tag_persist_block_definition@@PBU1@HH@std@@YAPBUs_tag_persist_block_definition@@PBU1@000PAH1@Z");
//};

//public: bool s_tag_persist_block_definition::operator==(struct s_tag_persist_block_definition const &) const
//{
//    mangled_ppc("??8s_tag_persist_block_definition@@QBA_NABU0@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&, struct s_tag_persist_block_definition const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_persist_block_definition@@@std@@YAXAAPBUs_tag_persist_block_definition@@ABQBU1@@Z");
//};

//struct s_tag_persist_resource_definition const * std::_Checked_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_resource_definition@@@std@@YAPBUs_tag_persist_resource_definition@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_tag_persist_resource_definition@@@std@@YAPAHPBUs_tag_persist_resource_definition@@@Z");
//};

//struct s_tag_persist_resource_definition const * std::_Search<struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBUs_tag_persist_resource_definition@@PBU1@HH@std@@YAPBUs_tag_persist_resource_definition@@PBU1@000PAH1@Z");
//};

//public: bool s_tag_persist_resource_definition::operator==(struct s_tag_persist_resource_definition const &) const
//{
//    mangled_ppc("??8s_tag_persist_resource_definition@@QBA_NABU0@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&, struct s_tag_persist_resource_definition const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_persist_resource_definition@@@std@@YAXAAPBUs_tag_persist_resource_definition@@ABQBU1@@Z");
//};

//struct s_tag_persist_interop_definition const * std::_Checked_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_interop_definition@@@std@@YAPBUs_tag_persist_interop_definition@@AAPBU1@@Z");
//};

//int * std::_Dist_type<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *)
//{
//    mangled_ppc("??$_Dist_type@PBUs_tag_persist_interop_definition@@@std@@YAPAHPBUs_tag_persist_interop_definition@@@Z");
//};

//struct s_tag_persist_interop_definition const * std::_Search<struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int *, int *)
//{
//    mangled_ppc("??$_Search@PBUs_tag_persist_interop_definition@@PBU1@HH@std@@YAPBUs_tag_persist_interop_definition@@PBU1@000PAH1@Z");
//};

//public: bool s_tag_persist_interop_definition::operator==(struct s_tag_persist_interop_definition const &) const
//{
//    mangled_ppc("??8s_tag_persist_interop_definition@@QBA_NABU0@@Z");
//};

//void std::_Checked_assign_from_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&, struct s_tag_persist_interop_definition const *const &)
//{
//    mangled_ppc("??$_Checked_assign_from_base@PBUs_tag_persist_interop_definition@@@std@@YAXAAPBUs_tag_persist_interop_definition@@ABQBU1@@Z");
//};

//void std::_Distance<char const *, int>(char const *, char const *, int &)
//{
//    mangled_ppc("??$_Distance@PBDH@std@@YAXPBD0AAH@Z");
//};

//struct s_tag_persist_index<0> const * std::_Checked_base<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBU?$s_tag_persist_index@$0A@@@@std@@YAPBU?$s_tag_persist_index@$0A@@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBU?$s_tag_persist_index@$0A@@@@std@@YAXPBU?$s_tag_persist_index@$0A@@@0PB_WI@Z");
//};

//void std::_Distance<struct s_tag_persist_index<0> const *, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int &)
//{
//    mangled_ppc("??$_Distance@PBU?$s_tag_persist_index@$0A@@@H@std@@YAXPBU?$s_tag_persist_index@$0A@@@0AAH@Z");
//};

//struct s_tag_persist_array_definition const * std::_Checked_base<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_array_definition@@@std@@YAPBUs_tag_persist_array_definition@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_persist_array_definition@@@std@@YAXPBUs_tag_persist_array_definition@@0PB_WI@Z");
//};

//void std::_Distance<struct s_tag_persist_array_definition const *, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_tag_persist_array_definition@@H@std@@YAXPBUs_tag_persist_array_definition@@0AAH@Z");
//};

//struct s_tag_persist_block_definition const * std::_Checked_base<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_block_definition@@@std@@YAPBUs_tag_persist_block_definition@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_persist_block_definition@@@std@@YAXPBUs_tag_persist_block_definition@@0PB_WI@Z");
//};

//void std::_Distance<struct s_tag_persist_block_definition const *, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_tag_persist_block_definition@@H@std@@YAXPBUs_tag_persist_block_definition@@0AAH@Z");
//};

//struct s_tag_persist_resource_definition const * std::_Checked_base<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_resource_definition@@@std@@YAPBUs_tag_persist_resource_definition@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_persist_resource_definition@@@std@@YAXPBUs_tag_persist_resource_definition@@0PB_WI@Z");
//};

//void std::_Distance<struct s_tag_persist_resource_definition const *, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_tag_persist_resource_definition@@H@std@@YAXPBUs_tag_persist_resource_definition@@0AAH@Z");
//};

//struct s_tag_persist_interop_definition const * std::_Checked_base<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *&, struct std::_Unchanged_checked_iterator_base_type_tag)
//{
//    mangled_ppc("??$_Checked_base@PBUs_tag_persist_interop_definition@@@std@@YAPBUs_tag_persist_interop_definition@@AAPBU1@U_Unchanged_checked_iterator_base_type_tag@0@@Z");
//};

//void std::_Debug_range<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_range@PBUs_tag_persist_interop_definition@@@std@@YAXPBUs_tag_persist_interop_definition@@0PB_WI@Z");
//};

//void std::_Distance<struct s_tag_persist_interop_definition const *, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int &)
//{
//    mangled_ppc("??$_Distance@PBUs_tag_persist_interop_definition@@H@std@@YAXPBUs_tag_persist_interop_definition@@0AAH@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBU?$s_tag_persist_index@$0A@@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBU?$s_tag_persist_index@$0A@@@@Z");
//};

//void std::_Debug_range2<struct s_tag_persist_index<0> const *>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBU?$s_tag_persist_index@$0A@@@@std@@YAXPBU?$s_tag_persist_index@$0A@@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_persist_index<0> const *, int>(struct s_tag_persist_index<0> const *, struct s_tag_persist_index<0> const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBU?$s_tag_persist_index@$0A@@@H@std@@YAXPBU?$s_tag_persist_index@$0A@@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_persist_array_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_persist_array_definition@@@Z");
//};

//void std::_Debug_range2<struct s_tag_persist_array_definition const *>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_persist_array_definition@@@std@@YAXPBUs_tag_persist_array_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_persist_array_definition const *, int>(struct s_tag_persist_array_definition const *, struct s_tag_persist_array_definition const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_tag_persist_array_definition@@H@std@@YAXPBUs_tag_persist_array_definition@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_persist_block_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_persist_block_definition@@@Z");
//};

//void std::_Debug_range2<struct s_tag_persist_block_definition const *>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_persist_block_definition@@@std@@YAXPBUs_tag_persist_block_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_persist_block_definition const *, int>(struct s_tag_persist_block_definition const *, struct s_tag_persist_block_definition const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_tag_persist_block_definition@@H@std@@YAXPBUs_tag_persist_block_definition@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_persist_resource_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_persist_resource_definition@@@Z");
//};

//void std::_Debug_range2<struct s_tag_persist_resource_definition const *>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_persist_resource_definition@@@std@@YAXPBUs_tag_persist_resource_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_persist_resource_definition const *, int>(struct s_tag_persist_resource_definition const *, struct s_tag_persist_resource_definition const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_tag_persist_resource_definition@@H@std@@YAXPBUs_tag_persist_resource_definition@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//struct std::random_access_iterator_tag std::_Iter_cat<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *const &)
//{
//    mangled_ppc("??$_Iter_cat@PBUs_tag_persist_interop_definition@@@std@@YA?AUrandom_access_iterator_tag@0@ABQBUs_tag_persist_interop_definition@@@Z");
//};

//void std::_Debug_range2<struct s_tag_persist_interop_definition const *>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Debug_range2@PBUs_tag_persist_interop_definition@@@std@@YAXPBUs_tag_persist_interop_definition@@0PB_WIUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Distance2<struct s_tag_persist_interop_definition const *, int>(struct s_tag_persist_interop_definition const *, struct s_tag_persist_interop_definition const *, int &, struct std::random_access_iterator_tag)
//{
//    mangled_ppc("??$_Distance2@PBUs_tag_persist_interop_definition@@H@std@@YAXPBUs_tag_persist_interop_definition@@0AAHUrandom_access_iterator_tag@0@@Z");
//};

//void std::_Debug_pointer<struct s_tag_persist_index<0> >(struct s_tag_persist_index<0> const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@U?$s_tag_persist_index@$0A@@@@std@@YAXPBU?$s_tag_persist_index@$0A@@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_tag_persist_array_definition>(struct s_tag_persist_array_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_persist_array_definition@@@std@@YAXPBUs_tag_persist_array_definition@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_tag_persist_block_definition>(struct s_tag_persist_block_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_persist_block_definition@@@std@@YAXPBUs_tag_persist_block_definition@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_tag_persist_resource_definition>(struct s_tag_persist_resource_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_persist_resource_definition@@@std@@YAXPBUs_tag_persist_resource_definition@@PB_WI@Z");
//};

//void std::_Debug_pointer<struct s_tag_persist_interop_definition>(struct s_tag_persist_interop_definition const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@Us_tag_persist_interop_definition@@@std@@YAXPBUs_tag_persist_interop_definition@@PB_WI@Z");
//};

