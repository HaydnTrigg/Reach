/* ---------- headers */

#include "omaha\interface\cui\cui_load.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type);
// public: void c_cui_load_error::set_type(enum c_cui_load_error::e_type);
// public: void c_cui_load_error::set_screen_definition(struct s_cui_component_screen_definition const *);
// public: void c_cui_load_error::set_component_definition(struct s_cui_component_definition const *);
// public: void c_cui_load_error::set_overlay_definition(struct s_cui_overlay_definition const *);
// public: void c_cui_load_error::set_property_definition(struct s_cui_property_definition const *);
// public: void c_cui_load_error::set_property_binding_definition(struct s_cui_property_binding_definition const *);
// public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type, struct s_cui_component_definition const *);
// public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type, struct s_cui_property_binding_definition const *);
// public: c_cui_load_error_screen_scope::c_cui_load_error_screen_scope(class c_cui_load_error_collection *, long, struct s_cui_component_screen_definition const *);
// public: c_cui_load_error_scope::c_cui_load_error_scope(class c_cui_load_error_collection *);
// public: unsigned int c_cui_load_error_collection::get_count(void) const;
// public: c_cui_load_error_screen_scope::~c_cui_load_error_screen_scope(void);
// public: long c_cui_load_error::get_screen_tag_index(void) const;
// public: struct s_cui_component_screen_definition const * c_cui_load_error::get_screen_definition(void) const;
// public: void c_cui_load_error::set_screen_tag_index(long);
// public: class c_cui_load_error * c_cui_load_error_collection::get(unsigned int);
// public: c_cui_load_error_component_scope::c_cui_load_error_component_scope(class c_cui_load_error_collection *, struct s_cui_component_definition const *);
// public: c_cui_load_error_component_scope::~c_cui_load_error_component_scope(void);
// public: struct s_cui_component_definition const * c_cui_load_error::get_component_definition(void) const;
// public: c_cui_load_error_overlay_scope::c_cui_load_error_overlay_scope(class c_cui_load_error_collection *, struct s_cui_overlay_definition const *);
// public: c_cui_load_error_overlay_scope::~c_cui_load_error_overlay_scope(void);
// public: struct s_cui_overlay_definition const * c_cui_load_error::get_overlay_definition(void) const;
// public: c_cui_load_error_property_scope::c_cui_load_error_property_scope(class c_cui_load_error_collection *, struct s_cui_property_definition const *);
// public: c_cui_load_error_property_scope::~c_cui_load_error_property_scope(void);
// public: struct s_cui_property_definition const * c_cui_load_error::get_property_definition(void) const;
// void cui_load_set_screen_name_override_prefix(char const *);
// void cui_load_emit_error_events(class c_cui_load_error_collection *);
// public: enum c_cui_load_error::e_type c_cui_load_error::get_type(void) const;
// void cui_load_set_static_data_local_table(struct s_cui_component_screen_definition const *, class c_cui_component *);
// void cui_load_set_static_data_reference_table(class c_cui_component *);
// void cui_load_set_expression_definition(struct s_cui_component_screen_definition const *, class c_cui_component *);
// void cui_load_update_static_data_local_table(struct s_cui_component_screen_definition const *, class c_cui_component *);
// public: struct s_cui_static_data const * c_static_data_base_component::get_static_data_table(void) const;
// void cui_load_update_static_data_reference_table(class c_cui_component *);
// void cui_load_update_expression_definition(struct s_cui_component_screen_definition const *, class c_cui_component *);
// public: struct s_cui_expression_definition const * c_expression_component::get_expression_definition(void) const;
// struct s_cui_component_screen_definition const * cui_load_find_screen_definition(struct s_tag_block const *, long, long *);
// class c_cui_screen_widget * cui_load_screen_by_name(long, long, long);
// public: c_cui_load_error::c_cui_load_error(void);
// public: c_cui_load_error_collection::c_cui_load_error_collection(class c_cui_load_error *, unsigned int);
// class c_cui_screen_widget * cui_load_screen_by_name(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode);
// public: void c_cui_screen_widget::set_screen_name(long);
// class c_cui_screen_widget * cui_load_screen_by_tag_index(long, long, long);
// class c_cui_screen_widget * cui_load_screen_by_tag_index(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode);
// public: c_cui_screen_loader::c_cui_screen_loader(class c_cui_load_error_collection *, long, long);
// public: class c_cui_screen_widget * c_cui_screen_loader::load(long);
// private: void c_cui_screen_loader::load_templates(struct s_cui_component_screen_definition const *);
// private: void c_cui_screen_loader::create_components(struct s_cui_component_screen_definition const *);
// private: void c_cui_screen_loader::parent_components(struct s_cui_component_screen_definition const *, class c_cui_component **);
// private: void c_cui_screen_loader::load_component_long_and_bool_properties(struct s_tag_block const *, class c_cui_component *, long, long);
// private: void c_cui_screen_loader::load_component_real_properties(struct s_tag_block const *, class c_cui_component *, long, long);
// private: void c_cui_screen_loader::load_component_string_id_and_component_ptr_properties(struct s_cui_component_screen_definition const *, struct s_tag_block const *, class c_cui_component *, class c_cui_component **, long, long);
// private: void c_cui_screen_loader::load_component_tag_reference_properties(struct s_tag_block const *, class c_cui_component *, long, long);
// private: void c_cui_screen_loader::load_component_argb_color_properties(struct s_tag_block const *, class c_cui_component *, long, long);
// private: void c_cui_screen_loader::load_component_overlay_properties(struct s_cui_component_screen_definition const *, struct s_cui_properties_definition const *, class c_cui_component *, class c_cui_component **);
// private: void c_cui_screen_loader::load_component_overlay_properties(struct s_cui_component_screen_definition const *, long, long, long, class c_cui_component *, class c_cui_component **);
// private: void c_cui_screen_loader::load_component_properties(struct s_cui_component_screen_definition const *, long, class c_cui_component *, class c_cui_component **);
// private: void c_cui_screen_loader::build_bindings(struct s_cui_component_screen_definition const *, class c_cui_component **, struct s_cui_property_binding *);
// private: void c_cui_screen_loader::build_binding_scopes(class c_cui_component *, class c_cui_component *, class c_cui_component *);
// private: void c_cui_screen_loader::build_binding_scope_contexts(void);
// private: void c_cui_screen_loader::initialize_binding_scope_contexts(class c_cui_component *, class c_cui_binding_context *);
// private: void c_cui_screen_loader::load(long, struct s_cui_component_screen_definition const *);
// long get_screen_name_override(long);
// void get_load_error_details_string(class c_cui_load_error *, class c_static_string<256> *);
// public: struct s_cui_property_binding_definition const * c_cui_load_error::get_property_binding_definition(void) const;
// void set_static_data_local_table(struct s_cui_component_screen_definition const *, class c_static_data_local_component *);
// public: class c_cui_string_id c_static_data_base_component::get_static_data_table_name(void) const;
// void set_static_data_reference_table(class c_static_data_reference_component *);
// public: struct s_tag_reference const * c_static_data_reference_component::get_static_data_reference(void) const;
// void set_expression_definition(struct s_cui_component_screen_definition const *, class c_expression_component *);
// public: void c_expression_component::set_expression_definition(struct s_cui_expression_definition const *);
// public: class c_cui_string_id c_expression_component::get_expression_name(void) const;
// class c_cui_screen_widget * load_screen(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode);
// public: c_cui_screen_loader::~c_cui_screen_loader(void);
// public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::begin(void);
// public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::end(void);
// public: bool c_cui_static_vector<class c_cui_component *, 8192>::full(void) const;
// public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::begin(void);
// public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::end(void);
// public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::data(void);
// public: unsigned int c_cui_static_vector<struct s_cui_property_binding, 8192>::size(void) const;
// public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::data(void);
// public: unsigned int c_cui_static_vector<class c_cui_component *, 8192>::size(void) const;
// public: void c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void);
// public: c_cui_static_vector<struct s_cui_property_binding, 8192>::c_cui_static_vector<struct s_cui_property_binding, 8192>(void);
// public: c_cui_static_vector<struct s_cui_property_binding, 8192>::~c_cui_static_vector<struct s_cui_property_binding, 8192>(void);
// public: c_cui_static_vector<class c_cui_component *, 8192>::c_cui_static_vector<class c_cui_component *, 8192>(void);
// public: c_cui_static_vector<class c_cui_component *, 8192>::~c_cui_static_vector<class c_cui_component *, 8192>(void);
// public: void c_cui_static_vector<class c_cui_component *, 8192>::push_back(class c_cui_component *const &);
// class c_static_data_local_component * cui_dynamic_cast<class c_static_data_local_component *>(class c_cui_component *);
// class c_static_data_reference_component * cui_dynamic_cast<class c_static_data_reference_component *>(class c_cui_component *);
// class c_expression_component * cui_dynamic_cast<class c_expression_component *>(class c_cui_component *);
// public: bool c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_cui_property_binding_definition_flags) const;
// bool cui_static_vector_push_back<struct s_cui_property_binding, 8192>(class c_cui_static_vector<struct s_cui_property_binding, 8192> &, struct s_cui_property_binding const &);
// public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::assign<class c_cui_component **>(class c_cui_component **, class c_cui_component **);
// public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::assign<struct s_cui_property_binding *>(struct s_cui_property_binding *, struct s_cui_property_binding *);
// public: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::full(void) const;
// private: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::get(unsigned int);
// public: class c_cui_component *& c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::at(unsigned int);
// public: struct s_cui_property_binding & c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::at(unsigned int);
// public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::push_back(struct s_cui_property_binding const &);
// public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::clear(void);
// public: void c_cui_static_vector<class c_cui_component *, 8192>::clear(void);
// public: static class c_static_data_local_component * s_cui_dynamic_cast<class c_static_data_local_component *>::cast(class c_cui_component *);
// public: static class c_static_data_reference_component * s_cui_dynamic_cast<class c_static_data_reference_component *>::cast(class c_cui_component *);
// public: static class c_expression_component * s_cui_dynamic_cast<class c_expression_component *>::cast(class c_cui_component *);
// public: static bool c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_property_binding_definition_flags);
// private: static unsigned short c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_property_binding_definition_flags);
// public: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::empty(void) const;
// private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::get(unsigned int);
// public: bool c_cui_static_vector<class c_cui_component *, 8192>::empty(void) const;
// public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::pop_back(void);
// public: void c_cui_static_vector<class c_cui_component *, 8192>::pop_back(void);
// public: void c_cui_component::set_screen_definition(struct s_cui_component_screen_definition const *);
// public: bool c_cui_component::remove_child(class c_cui_component *);
// public: bool c_cui_component::set_property(long, struct s_cui_property_value const *);
// void cui_property_value_set_bool(struct s_cui_property_value *, bool);
// void cui_property_value_set_long(struct s_cui_property_value *, long);
// void cui_property_value_set_real(struct s_cui_property_value *, float);
// void cui_property_value_set_tag_reference(struct s_cui_property_value *, struct s_tag_reference const *);
// void cui_property_value_set_string_id(struct s_cui_property_value *, long);
// void cui_property_value_set_argb_color(struct s_cui_property_value *, union argb_color const *);

//public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type)
//{
//    mangled_ppc("?add@c_cui_load_error_collection@@QAA_NW4e_type@c_cui_load_error@@@Z");
//};

//public: void c_cui_load_error::set_type(enum c_cui_load_error::e_type)
//{
//    mangled_ppc("?set_type@c_cui_load_error@@QAAXW4e_type@1@@Z");
//};

//public: void c_cui_load_error::set_screen_definition(struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("?set_screen_definition@c_cui_load_error@@QAAXPBUs_cui_component_screen_definition@@@Z");
//};

//public: void c_cui_load_error::set_component_definition(struct s_cui_component_definition const *)
//{
//    mangled_ppc("?set_component_definition@c_cui_load_error@@QAAXPBUs_cui_component_definition@@@Z");
//};

//public: void c_cui_load_error::set_overlay_definition(struct s_cui_overlay_definition const *)
//{
//    mangled_ppc("?set_overlay_definition@c_cui_load_error@@QAAXPBUs_cui_overlay_definition@@@Z");
//};

//public: void c_cui_load_error::set_property_definition(struct s_cui_property_definition const *)
//{
//    mangled_ppc("?set_property_definition@c_cui_load_error@@QAAXPBUs_cui_property_definition@@@Z");
//};

//public: void c_cui_load_error::set_property_binding_definition(struct s_cui_property_binding_definition const *)
//{
//    mangled_ppc("?set_property_binding_definition@c_cui_load_error@@QAAXPBUs_cui_property_binding_definition@@@Z");
//};

//public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type, struct s_cui_component_definition const *)
//{
//    mangled_ppc("?add@c_cui_load_error_collection@@QAA_NW4e_type@c_cui_load_error@@PBUs_cui_component_definition@@@Z");
//};

//public: bool c_cui_load_error_collection::add(enum c_cui_load_error::e_type, struct s_cui_property_binding_definition const *)
//{
//    mangled_ppc("?add@c_cui_load_error_collection@@QAA_NW4e_type@c_cui_load_error@@PBUs_cui_property_binding_definition@@@Z");
//};

//public: c_cui_load_error_screen_scope::c_cui_load_error_screen_scope(class c_cui_load_error_collection *, long, struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("??0c_cui_load_error_screen_scope@@QAA@PAVc_cui_load_error_collection@@JPBUs_cui_component_screen_definition@@@Z");
//};

//public: c_cui_load_error_scope::c_cui_load_error_scope(class c_cui_load_error_collection *)
//{
//    mangled_ppc("??0c_cui_load_error_scope@@QAA@PAVc_cui_load_error_collection@@@Z");
//};

//public: unsigned int c_cui_load_error_collection::get_count(void) const
//{
//    mangled_ppc("?get_count@c_cui_load_error_collection@@QBAIXZ");
//};

//public: c_cui_load_error_screen_scope::~c_cui_load_error_screen_scope(void)
//{
//    mangled_ppc("??1c_cui_load_error_screen_scope@@QAA@XZ");
//};

//public: long c_cui_load_error::get_screen_tag_index(void) const
//{
//    mangled_ppc("?get_screen_tag_index@c_cui_load_error@@QBAJXZ");
//};

//public: struct s_cui_component_screen_definition const * c_cui_load_error::get_screen_definition(void) const
//{
//    mangled_ppc("?get_screen_definition@c_cui_load_error@@QBAPBUs_cui_component_screen_definition@@XZ");
//};

//public: void c_cui_load_error::set_screen_tag_index(long)
//{
//    mangled_ppc("?set_screen_tag_index@c_cui_load_error@@QAAXJ@Z");
//};

//public: class c_cui_load_error * c_cui_load_error_collection::get(unsigned int)
//{
//    mangled_ppc("?get@c_cui_load_error_collection@@QAAPAVc_cui_load_error@@I@Z");
//};

//public: c_cui_load_error_component_scope::c_cui_load_error_component_scope(class c_cui_load_error_collection *, struct s_cui_component_definition const *)
//{
//    mangled_ppc("??0c_cui_load_error_component_scope@@QAA@PAVc_cui_load_error_collection@@PBUs_cui_component_definition@@@Z");
//};

//public: c_cui_load_error_component_scope::~c_cui_load_error_component_scope(void)
//{
//    mangled_ppc("??1c_cui_load_error_component_scope@@QAA@XZ");
//};

//public: struct s_cui_component_definition const * c_cui_load_error::get_component_definition(void) const
//{
//    mangled_ppc("?get_component_definition@c_cui_load_error@@QBAPBUs_cui_component_definition@@XZ");
//};

//public: c_cui_load_error_overlay_scope::c_cui_load_error_overlay_scope(class c_cui_load_error_collection *, struct s_cui_overlay_definition const *)
//{
//    mangled_ppc("??0c_cui_load_error_overlay_scope@@QAA@PAVc_cui_load_error_collection@@PBUs_cui_overlay_definition@@@Z");
//};

//public: c_cui_load_error_overlay_scope::~c_cui_load_error_overlay_scope(void)
//{
//    mangled_ppc("??1c_cui_load_error_overlay_scope@@QAA@XZ");
//};

//public: struct s_cui_overlay_definition const * c_cui_load_error::get_overlay_definition(void) const
//{
//    mangled_ppc("?get_overlay_definition@c_cui_load_error@@QBAPBUs_cui_overlay_definition@@XZ");
//};

//public: c_cui_load_error_property_scope::c_cui_load_error_property_scope(class c_cui_load_error_collection *, struct s_cui_property_definition const *)
//{
//    mangled_ppc("??0c_cui_load_error_property_scope@@QAA@PAVc_cui_load_error_collection@@PBUs_cui_property_definition@@@Z");
//};

//public: c_cui_load_error_property_scope::~c_cui_load_error_property_scope(void)
//{
//    mangled_ppc("??1c_cui_load_error_property_scope@@QAA@XZ");
//};

//public: struct s_cui_property_definition const * c_cui_load_error::get_property_definition(void) const
//{
//    mangled_ppc("?get_property_definition@c_cui_load_error@@QBAPBUs_cui_property_definition@@XZ");
//};

//void cui_load_set_screen_name_override_prefix(char const *)
//{
//    mangled_ppc("?cui_load_set_screen_name_override_prefix@@YAXPBD@Z");
//};

//void cui_load_emit_error_events(class c_cui_load_error_collection *)
//{
//    mangled_ppc("?cui_load_emit_error_events@@YAXPAVc_cui_load_error_collection@@@Z");
//};

//public: enum c_cui_load_error::e_type c_cui_load_error::get_type(void) const
//{
//    mangled_ppc("?get_type@c_cui_load_error@@QBA?AW4e_type@1@XZ");
//};

//void cui_load_set_static_data_local_table(struct s_cui_component_screen_definition const *, class c_cui_component *)
//{
//    mangled_ppc("?cui_load_set_static_data_local_table@@YAXPBUs_cui_component_screen_definition@@PAVc_cui_component@@@Z");
//};

//void cui_load_set_static_data_reference_table(class c_cui_component *)
//{
//    mangled_ppc("?cui_load_set_static_data_reference_table@@YAXPAVc_cui_component@@@Z");
//};

//void cui_load_set_expression_definition(struct s_cui_component_screen_definition const *, class c_cui_component *)
//{
//    mangled_ppc("?cui_load_set_expression_definition@@YAXPBUs_cui_component_screen_definition@@PAVc_cui_component@@@Z");
//};

//void cui_load_update_static_data_local_table(struct s_cui_component_screen_definition const *, class c_cui_component *)
//{
//    mangled_ppc("?cui_load_update_static_data_local_table@@YAXPBUs_cui_component_screen_definition@@PAVc_cui_component@@@Z");
//};

//public: struct s_cui_static_data const * c_static_data_base_component::get_static_data_table(void) const
//{
//    mangled_ppc("?get_static_data_table@c_static_data_base_component@@QBAPBUs_cui_static_data@@XZ");
//};

//void cui_load_update_static_data_reference_table(class c_cui_component *)
//{
//    mangled_ppc("?cui_load_update_static_data_reference_table@@YAXPAVc_cui_component@@@Z");
//};

//void cui_load_update_expression_definition(struct s_cui_component_screen_definition const *, class c_cui_component *)
//{
//    mangled_ppc("?cui_load_update_expression_definition@@YAXPBUs_cui_component_screen_definition@@PAVc_cui_component@@@Z");
//};

//public: struct s_cui_expression_definition const * c_expression_component::get_expression_definition(void) const
//{
//    mangled_ppc("?get_expression_definition@c_expression_component@@QBAPBUs_cui_expression_definition@@XZ");
//};

//struct s_cui_component_screen_definition const * cui_load_find_screen_definition(struct s_tag_block const *, long, long *)
//{
//    mangled_ppc("?cui_load_find_screen_definition@@YAPBUs_cui_component_screen_definition@@PBUs_tag_block@@JPAJ@Z");
//};

//class c_cui_screen_widget * cui_load_screen_by_name(long, long, long)
//{
//    mangled_ppc("?cui_load_screen_by_name@@YAPAVc_cui_screen_widget@@JJJ@Z");
//};

//public: c_cui_load_error::c_cui_load_error(void)
//{
//    mangled_ppc("??0c_cui_load_error@@QAA@XZ");
//};

//public: c_cui_load_error_collection::c_cui_load_error_collection(class c_cui_load_error *, unsigned int)
//{
//    mangled_ppc("??0c_cui_load_error_collection@@QAA@PAVc_cui_load_error@@I@Z");
//};

//class c_cui_screen_widget * cui_load_screen_by_name(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode)
//{
//    mangled_ppc("?cui_load_screen_by_name@@YAPAVc_cui_screen_widget@@JJJPAVc_cui_load_error_collection@@W4e_cui_component_mode@@@Z");
//};

//public: void c_cui_screen_widget::set_screen_name(long)
//{
//    mangled_ppc("?set_screen_name@c_cui_screen_widget@@QAAXJ@Z");
//};

//class c_cui_screen_widget * cui_load_screen_by_tag_index(long, long, long)
//{
//    mangled_ppc("?cui_load_screen_by_tag_index@@YAPAVc_cui_screen_widget@@JJJ@Z");
//};

//class c_cui_screen_widget * cui_load_screen_by_tag_index(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode)
//{
//    mangled_ppc("?cui_load_screen_by_tag_index@@YAPAVc_cui_screen_widget@@JJJPAVc_cui_load_error_collection@@W4e_cui_component_mode@@@Z");
//};

//public: c_cui_screen_loader::c_cui_screen_loader(class c_cui_load_error_collection *, long, long)
//{
//    mangled_ppc("??0c_cui_screen_loader@@QAA@PAVc_cui_load_error_collection@@JJ@Z");
//};

//public: class c_cui_screen_widget * c_cui_screen_loader::load(long)
//{
//    mangled_ppc("?load@c_cui_screen_loader@@QAAPAVc_cui_screen_widget@@J@Z");
//};

//private: void c_cui_screen_loader::load_templates(struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("?load_templates@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@@Z");
//};

//private: void c_cui_screen_loader::create_components(struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("?create_components@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@@Z");
//};

//private: void c_cui_screen_loader::parent_components(struct s_cui_component_screen_definition const *, class c_cui_component **)
//{
//    mangled_ppc("?parent_components@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@PAPAVc_cui_component@@@Z");
//};

//private: void c_cui_screen_loader::load_component_long_and_bool_properties(struct s_tag_block const *, class c_cui_component *, long, long)
//{
//    mangled_ppc("?load_component_long_and_bool_properties@c_cui_screen_loader@@AAAXPBUs_tag_block@@PAVc_cui_component@@JJ@Z");
//};

//private: void c_cui_screen_loader::load_component_real_properties(struct s_tag_block const *, class c_cui_component *, long, long)
//{
//    mangled_ppc("?load_component_real_properties@c_cui_screen_loader@@AAAXPBUs_tag_block@@PAVc_cui_component@@JJ@Z");
//};

//private: void c_cui_screen_loader::load_component_string_id_and_component_ptr_properties(struct s_cui_component_screen_definition const *, struct s_tag_block const *, class c_cui_component *, class c_cui_component **, long, long)
//{
//    mangled_ppc("?load_component_string_id_and_component_ptr_properties@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@PBUs_tag_block@@PAVc_cui_component@@PAPAV4@JJ@Z");
//};

//private: void c_cui_screen_loader::load_component_tag_reference_properties(struct s_tag_block const *, class c_cui_component *, long, long)
//{
//    mangled_ppc("?load_component_tag_reference_properties@c_cui_screen_loader@@AAAXPBUs_tag_block@@PAVc_cui_component@@JJ@Z");
//};

//private: void c_cui_screen_loader::load_component_argb_color_properties(struct s_tag_block const *, class c_cui_component *, long, long)
//{
//    mangled_ppc("?load_component_argb_color_properties@c_cui_screen_loader@@AAAXPBUs_tag_block@@PAVc_cui_component@@JJ@Z");
//};

//private: void c_cui_screen_loader::load_component_overlay_properties(struct s_cui_component_screen_definition const *, struct s_cui_properties_definition const *, class c_cui_component *, class c_cui_component **)
//{
//    mangled_ppc("?load_component_overlay_properties@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@PBUs_cui_properties_definition@@PAVc_cui_component@@PAPAV4@@Z");
//};

//private: void c_cui_screen_loader::load_component_overlay_properties(struct s_cui_component_screen_definition const *, long, long, long, class c_cui_component *, class c_cui_component **)
//{
//    mangled_ppc("?load_component_overlay_properties@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@JJJPAVc_cui_component@@PAPAV3@@Z");
//};

//private: void c_cui_screen_loader::load_component_properties(struct s_cui_component_screen_definition const *, long, class c_cui_component *, class c_cui_component **)
//{
//    mangled_ppc("?load_component_properties@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@JPAVc_cui_component@@PAPAV3@@Z");
//};

//private: void c_cui_screen_loader::build_bindings(struct s_cui_component_screen_definition const *, class c_cui_component **, struct s_cui_property_binding *)
//{
//    mangled_ppc("?build_bindings@c_cui_screen_loader@@AAAXPBUs_cui_component_screen_definition@@PAPAVc_cui_component@@PAUs_cui_property_binding@@@Z");
//};

//private: void c_cui_screen_loader::build_binding_scopes(class c_cui_component *, class c_cui_component *, class c_cui_component *)
//{
//    mangled_ppc("?build_binding_scopes@c_cui_screen_loader@@AAAXPAVc_cui_component@@00@Z");
//};

//private: void c_cui_screen_loader::build_binding_scope_contexts(void)
//{
//    mangled_ppc("?build_binding_scope_contexts@c_cui_screen_loader@@AAAXXZ");
//};

//private: void c_cui_screen_loader::initialize_binding_scope_contexts(class c_cui_component *, class c_cui_binding_context *)
//{
//    mangled_ppc("?initialize_binding_scope_contexts@c_cui_screen_loader@@AAAXPAVc_cui_component@@PAVc_cui_binding_context@@@Z");
//};

//private: void c_cui_screen_loader::load(long, struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("?load@c_cui_screen_loader@@AAAXJPBUs_cui_component_screen_definition@@@Z");
//};

//long get_screen_name_override(long)
//{
//    mangled_ppc("?get_screen_name_override@@YAJJ@Z");
//};

//void get_load_error_details_string(class c_cui_load_error *, class c_static_string<256> *)
//{
//    mangled_ppc("?get_load_error_details_string@@YAXPAVc_cui_load_error@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//public: struct s_cui_property_binding_definition const * c_cui_load_error::get_property_binding_definition(void) const
//{
//    mangled_ppc("?get_property_binding_definition@c_cui_load_error@@QBAPBUs_cui_property_binding_definition@@XZ");
//};

//void set_static_data_local_table(struct s_cui_component_screen_definition const *, class c_static_data_local_component *)
//{
//    mangled_ppc("?set_static_data_local_table@@YAXPBUs_cui_component_screen_definition@@PAVc_static_data_local_component@@@Z");
//};

//public: class c_cui_string_id c_static_data_base_component::get_static_data_table_name(void) const
//{
//    mangled_ppc("?get_static_data_table_name@c_static_data_base_component@@QBA?AVc_cui_string_id@@XZ");
//};

//void set_static_data_reference_table(class c_static_data_reference_component *)
//{
//    mangled_ppc("?set_static_data_reference_table@@YAXPAVc_static_data_reference_component@@@Z");
//};

//public: struct s_tag_reference const * c_static_data_reference_component::get_static_data_reference(void) const
//{
//    mangled_ppc("?get_static_data_reference@c_static_data_reference_component@@QBAPBUs_tag_reference@@XZ");
//};

//void set_expression_definition(struct s_cui_component_screen_definition const *, class c_expression_component *)
//{
//    mangled_ppc("?set_expression_definition@@YAXPBUs_cui_component_screen_definition@@PAVc_expression_component@@@Z");
//};

//public: void c_expression_component::set_expression_definition(struct s_cui_expression_definition const *)
//{
//    mangled_ppc("?set_expression_definition@c_expression_component@@QAAXPBUs_cui_expression_definition@@@Z");
//};

//public: class c_cui_string_id c_expression_component::get_expression_name(void) const
//{
//    mangled_ppc("?get_expression_name@c_expression_component@@QBA?AVc_cui_string_id@@XZ");
//};

//class c_cui_screen_widget * load_screen(long, long, long, class c_cui_load_error_collection *, enum e_cui_component_mode)
//{
//    mangled_ppc("?load_screen@@YAPAVc_cui_screen_widget@@JJJPAVc_cui_load_error_collection@@W4e_cui_component_mode@@@Z");
//};

//public: c_cui_screen_loader::~c_cui_screen_loader(void)
//{
//    mangled_ppc("??1c_cui_screen_loader@@QAA@XZ");
//};

//public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: bool c_cui_static_vector<class c_cui_component *, 8192>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QBA_NXZ");
//};

//public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::begin(void)
//{
//    mangled_ppc("?begin@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::end(void)
//{
//    mangled_ppc("?end@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAPAUs_cui_property_binding@@XZ");
//};

//public: unsigned int c_cui_static_vector<struct s_cui_property_binding, 8192>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBAIXZ");
//};

//public: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::data(void)
//{
//    mangled_ppc("?data@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAPAPAVc_cui_component@@XZ");
//};

//public: unsigned int c_cui_static_vector<class c_cui_component *, 8192>::size(void) const
//{
//    mangled_ppc("?size@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QBAIXZ");
//};

//public: void c_flags_no_init<enum e_cui_property_binding_flags, unsigned short, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_cui_property_binding_flags@@G$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: c_cui_static_vector<struct s_cui_property_binding, 8192>::c_cui_static_vector<struct s_cui_property_binding, 8192>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAA@XZ");
//};

//public: c_cui_static_vector<struct s_cui_property_binding, 8192>::~c_cui_static_vector<struct s_cui_property_binding, 8192>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_cui_component *, 8192>::c_cui_static_vector<class c_cui_component *, 8192>(void)
//{
//    mangled_ppc("??0?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAA@XZ");
//};

//public: c_cui_static_vector<class c_cui_component *, 8192>::~c_cui_static_vector<class c_cui_component *, 8192>(void)
//{
//    mangled_ppc("??1?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAA@XZ");
//};

//public: void c_cui_static_vector<class c_cui_component *, 8192>::push_back(class c_cui_component *const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAXABQAVc_cui_component@@@Z");
//};

//class c_static_data_local_component * cui_dynamic_cast<class c_static_data_local_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_static_data_local_component@@@@YAPAVc_static_data_local_component@@PAVc_cui_component@@@Z");
//};

//class c_static_data_reference_component * cui_dynamic_cast<class c_static_data_reference_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_static_data_reference_component@@@@YAPAVc_static_data_reference_component@@PAVc_cui_component@@@Z");
//};

//class c_expression_component * cui_dynamic_cast<class c_expression_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_expression_component@@@@YAPAVc_expression_component@@PAVc_cui_component@@@Z");
//};

//public: bool c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_cui_property_binding_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cui_property_binding_definition_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_cui_property_binding_definition_flags@@@Z");
//};

//bool cui_static_vector_push_back<struct s_cui_property_binding, 8192>(class c_cui_static_vector<struct s_cui_property_binding, 8192> &, struct s_cui_property_binding const &)
//{
//    mangled_ppc("??$cui_static_vector_push_back@Us_cui_property_binding@@$0CAAA@@@YA_NAAV?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@ABUs_cui_property_binding@@@Z");
//};

//public: void c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::assign<class c_cui_component **>(class c_cui_component **, class c_cui_component **)
//{
//    mangled_ppc("??$assign@PAPAVc_cui_component@@@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAXPAPAVc_cui_component@@0@Z");
//};

//public: void c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::assign<struct s_cui_property_binding *>(struct s_cui_property_binding *, struct s_cui_property_binding *)
//{
//    mangled_ppc("??$assign@PAUs_cui_property_binding@@@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAXPAUs_cui_property_binding@@0@Z");
//};

//public: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::full(void) const
//{
//    mangled_ppc("?full@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBA_NXZ");
//};

//private: class c_cui_component ** c_cui_static_vector<class c_cui_component *, 8192>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@AAAPAPAVc_cui_component@@I@Z");
//};

//public: class c_cui_component *& c_cui_vector<class c_cui_component *, class c_cui_placement_allocator<class c_cui_component *> >::at(unsigned int)
//{
//    mangled_ppc("?at@?$c_cui_vector@PAVc_cui_component@@V?$c_cui_placement_allocator@PAVc_cui_component@@@@@@QAAAAPAVc_cui_component@@I@Z");
//};

//public: struct s_cui_property_binding & c_cui_vector<struct s_cui_property_binding, class c_cui_placement_allocator<struct s_cui_property_binding> >::at(unsigned int)
//{
//    mangled_ppc("?at@?$c_cui_vector@Us_cui_property_binding@@V?$c_cui_placement_allocator@Us_cui_property_binding@@@@@@QAAAAUs_cui_property_binding@@I@Z");
//};

//public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::push_back(struct s_cui_property_binding const &)
//{
//    mangled_ppc("?push_back@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAXABUs_cui_property_binding@@@Z");
//};

//public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAXXZ");
//};

//public: void c_cui_static_vector<class c_cui_component *, 8192>::clear(void)
//{
//    mangled_ppc("?clear@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAXXZ");
//};

//public: static class c_static_data_local_component * s_cui_dynamic_cast<class c_static_data_local_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_static_data_local_component@@@@SAPAVc_static_data_local_component@@PAVc_cui_component@@@Z");
//};

//public: static class c_static_data_reference_component * s_cui_dynamic_cast<class c_static_data_reference_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_static_data_reference_component@@@@SAPAVc_static_data_reference_component@@PAVc_cui_component@@@Z");
//};

//public: static class c_expression_component * s_cui_dynamic_cast<class c_expression_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_expression_component@@@@SAPAVc_expression_component@@PAVc_cui_component@@@Z");
//};

//public: static bool c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_cui_property_binding_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cui_property_binding_definition_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_cui_property_binding_definition_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_cui_property_binding_definition_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_cui_property_binding_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cui_property_binding_definition_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_cui_property_binding_definition_flags@@@Z");
//};

//public: bool c_cui_static_vector<struct s_cui_property_binding, 8192>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QBA_NXZ");
//};

//private: struct s_cui_property_binding * c_cui_static_vector<struct s_cui_property_binding, 8192>::get(unsigned int)
//{
//    mangled_ppc("?get@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@AAAPAUs_cui_property_binding@@I@Z");
//};

//public: bool c_cui_static_vector<class c_cui_component *, 8192>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QBA_NXZ");
//};

//public: void c_cui_static_vector<struct s_cui_property_binding, 8192>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@Us_cui_property_binding@@$0CAAA@@@QAAXXZ");
//};

//public: void c_cui_static_vector<class c_cui_component *, 8192>::pop_back(void)
//{
//    mangled_ppc("?pop_back@?$c_cui_static_vector@PAVc_cui_component@@$0CAAA@@@QAAXXZ");
//};

//public: void c_cui_component::set_screen_definition(struct s_cui_component_screen_definition const *)
//{
//    mangled_ppc("?set_screen_definition@c_cui_component@@QAAXPBUs_cui_component_screen_definition@@@Z");
//};

//public: bool c_cui_component::remove_child(class c_cui_component *)
//{
//    mangled_ppc("?remove_child@c_cui_component@@QAA_NPAV1@@Z");
//};

//public: bool c_cui_component::set_property(long, struct s_cui_property_value const *)
//{
//    mangled_ppc("?set_property@c_cui_component@@QAA_NJPBUs_cui_property_value@@@Z");
//};

//void cui_property_value_set_bool(struct s_cui_property_value *, bool)
//{
//    mangled_ppc("?cui_property_value_set_bool@@YAXPAUs_cui_property_value@@_N@Z");
//};

//void cui_property_value_set_long(struct s_cui_property_value *, long)
//{
//    mangled_ppc("?cui_property_value_set_long@@YAXPAUs_cui_property_value@@J@Z");
//};

//void cui_property_value_set_real(struct s_cui_property_value *, float)
//{
//    mangled_ppc("?cui_property_value_set_real@@YAXPAUs_cui_property_value@@M@Z");
//};

//void cui_property_value_set_tag_reference(struct s_cui_property_value *, struct s_tag_reference const *)
//{
//    mangled_ppc("?cui_property_value_set_tag_reference@@YAXPAUs_cui_property_value@@PBUs_tag_reference@@@Z");
//};

//void cui_property_value_set_string_id(struct s_cui_property_value *, long)
//{
//    mangled_ppc("?cui_property_value_set_string_id@@YAXPAUs_cui_property_value@@J@Z");
//};

//void cui_property_value_set_argb_color(struct s_cui_property_value *, union argb_color const *)
//{
//    mangled_ppc("?cui_property_value_set_argb_color@@YAXPAUs_cui_property_value@@PBTargb_color@@@Z");
//};

