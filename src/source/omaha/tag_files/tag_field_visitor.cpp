/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_tag_field_visitor::c_tag_field_visitor(void);
// public: c_tag_field_location::c_tag_field_location(void);
// public: bool c_tag_field_visitor::visit_tag_struct(struct s_tag_struct_definition const *, class c_basic_buffer<void> &);
// public: bool c_tag_field_visitor::visit_tag_block(struct s_tag_block *);
// public: bool c_tag_field_visitor::visit_tag_array(struct s_tag_array_definition const *, class c_basic_buffer<void> &);
// public: bool c_tag_field_visitor::visit_tag_resource(struct s_tag_resource *);
// public: bool c_tag_field_visitor::visit_tag_interop(struct s_tag_interop *);
// private: bool c_tag_field_visitor::visit_tag_struct_recursive(struct s_tag_struct_definition const *, class c_basic_buffer<void> &);
// private: bool c_tag_field_visitor::visit_tag_block_recursive(struct s_tag_block *);
// protected: virtual bool c_tag_field_visitor::visit_tag_resource_recursive(struct s_tag_resource *);
// protected: virtual bool c_tag_field_visitor::visit_tag_interop_recursive(struct s_tag_interop *);
// private: bool c_tag_field_visitor::visit_tag_array_recursive(struct s_tag_array_definition const *, class c_basic_buffer<void> &);
// private: bool c_tag_field_visitor::visit_tag_struct_recursive_internal(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &);
// protected: char const * c_tag_field_visitor::get_scope_string(void);
// protected: __int64 c_tag_field_visitor::get_field_locator(void);
// protected: unsigned long c_tag_field_visitor::get_field_depth(void);
// protected: long c_tag_field_visitor::get_element_index(void);
// protected: virtual bool c_tag_field_visitor::visit_struct_head(struct s_tag_struct_definition const *, class c_basic_buffer<void> &);
// protected: virtual bool c_tag_field_visitor::visit_struct_tail(struct s_tag_struct_definition const *, class c_basic_buffer<void> &);
// protected: virtual bool c_tag_field_visitor::visit_block_element_head(struct s_tag_block const *, long);
// protected: virtual bool c_tag_field_visitor::visit_block_element_tail(struct s_tag_block const *, long);
// protected: virtual bool c_tag_field_visitor::visit_field(struct s_tag_field const *, class c_basic_buffer<void> &);
// protected: bool c_tag_field_visitor::visit_field_default(struct s_tag_field const *, class c_basic_buffer<void> &);
// private: void c_tag_field_location::compute_scope_string(class c_wrapped_array<char> *);
// public: void c_tag_field_location::push_scope_explicit(enum e_tag_field, char const *, void const *, unsigned long, __int64);
// public: void c_tag_field_location::push_scope(struct s_tag_field const *, unsigned long, __int64);
// public: void c_tag_field_location::pop_scope(void);
// public: void c_tag_field_location::set_element_index(long);
// public: long c_tag_field_location::get_element_index(void);
// public: void c_tag_field_location::clear_element_index(void);
// private: __int64 c_tag_field_location::get_field_base_locator(void) const;
// private: __int64 c_tag_field_location::get_element_base_locator(void) const;
// public: char const * c_tag_field_location::get_scope_string(void);
// public: __int64 c_tag_field_location::get_field_locator(void);
// public: unsigned long c_tag_field_location::get_field_depth(void);
// public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::top(void) const;
// public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::count(void) const;
// public: void c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::push_back(struct c_tag_field_location::s_tag_field_scope_definition const &);
// public: void c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::pop(void);
// public: struct c_tag_field_location::s_tag_field_scope_definition * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get(long);
// public: struct c_tag_field_location::s_tag_field_scope_definition * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get_top(void);
// public: struct c_tag_field_location::s_tag_field_scope_definition const * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get_top(void) const;
// public: c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>(void);
// public: char * s_static_array<char, 1024>::get_elements(void);
// public: static long s_static_array<char, 1024>::get_count(void);
// public: c_static_stack<struct c_tag_field_visitor::s_tag_field_scope_definition, 16>::c_static_stack<struct c_tag_field_visitor::s_tag_field_scope_definition, 16>(void);
// public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::valid(long) const;
// public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::empty(void) const;
// public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::push(void);
// public: struct c_tag_field_location::s_tag_field_scope_definition const * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get(long) const;
// public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::valid(void) const;
// public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::full(void) const;

//public: c_tag_field_visitor::c_tag_field_visitor(void)
//{
//    mangled_ppc("??0c_tag_field_visitor@@QAA@XZ");
//};

//public: c_tag_field_location::c_tag_field_location(void)
//{
//    mangled_ppc("??0c_tag_field_location@@QAA@XZ");
//};

//public: bool c_tag_field_visitor::visit_tag_struct(struct s_tag_struct_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_tag_struct@c_tag_field_visitor@@QAA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//public: bool c_tag_field_visitor::visit_tag_block(struct s_tag_block *)
//{
//    mangled_ppc("?visit_tag_block@c_tag_field_visitor@@QAA_NPAUs_tag_block@@@Z");
//};

//public: bool c_tag_field_visitor::visit_tag_array(struct s_tag_array_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_tag_array@c_tag_field_visitor@@QAA_NPBUs_tag_array_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//public: bool c_tag_field_visitor::visit_tag_resource(struct s_tag_resource *)
//{
//    mangled_ppc("?visit_tag_resource@c_tag_field_visitor@@QAA_NPAUs_tag_resource@@@Z");
//};

//public: bool c_tag_field_visitor::visit_tag_interop(struct s_tag_interop *)
//{
//    mangled_ppc("?visit_tag_interop@c_tag_field_visitor@@QAA_NPAUs_tag_interop@@@Z");
//};

//private: bool c_tag_field_visitor::visit_tag_struct_recursive(struct s_tag_struct_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_tag_struct_recursive@c_tag_field_visitor@@AAA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//private: bool c_tag_field_visitor::visit_tag_block_recursive(struct s_tag_block *)
//{
//    mangled_ppc("?visit_tag_block_recursive@c_tag_field_visitor@@AAA_NPAUs_tag_block@@@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_tag_resource_recursive(struct s_tag_resource *)
//{
//    mangled_ppc("?visit_tag_resource_recursive@c_tag_field_visitor@@MAA_NPAUs_tag_resource@@@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_tag_interop_recursive(struct s_tag_interop *)
//{
//    mangled_ppc("?visit_tag_interop_recursive@c_tag_field_visitor@@MAA_NPAUs_tag_interop@@@Z");
//};

//private: bool c_tag_field_visitor::visit_tag_array_recursive(struct s_tag_array_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_tag_array_recursive@c_tag_field_visitor@@AAA_NPBUs_tag_array_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//private: bool c_tag_field_visitor::visit_tag_struct_recursive_internal(struct s_tag_struct_definition const *, long, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_tag_struct_recursive_internal@c_tag_field_visitor@@AAA_NPBUs_tag_struct_definition@@JAAV?$c_basic_buffer@X@@@Z");
//};

//protected: char const * c_tag_field_visitor::get_scope_string(void)
//{
//    mangled_ppc("?get_scope_string@c_tag_field_visitor@@IAAPBDXZ");
//};

//protected: __int64 c_tag_field_visitor::get_field_locator(void)
//{
//    mangled_ppc("?get_field_locator@c_tag_field_visitor@@IAA_JXZ");
//};

//protected: unsigned long c_tag_field_visitor::get_field_depth(void)
//{
//    mangled_ppc("?get_field_depth@c_tag_field_visitor@@IAAKXZ");
//};

//protected: long c_tag_field_visitor::get_element_index(void)
//{
//    mangled_ppc("?get_element_index@c_tag_field_visitor@@IAAJXZ");
//};

//protected: virtual bool c_tag_field_visitor::visit_struct_head(struct s_tag_struct_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_struct_head@c_tag_field_visitor@@MAA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_struct_tail(struct s_tag_struct_definition const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_struct_tail@c_tag_field_visitor@@MAA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_block_element_head(struct s_tag_block const *, long)
//{
//    mangled_ppc("?visit_block_element_head@c_tag_field_visitor@@MAA_NPBUs_tag_block@@J@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_block_element_tail(struct s_tag_block const *, long)
//{
//    mangled_ppc("?visit_block_element_tail@c_tag_field_visitor@@MAA_NPBUs_tag_block@@J@Z");
//};

//protected: virtual bool c_tag_field_visitor::visit_field(struct s_tag_field const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_field@c_tag_field_visitor@@MAA_NPBUs_tag_field@@AAV?$c_basic_buffer@X@@@Z");
//};

//protected: bool c_tag_field_visitor::visit_field_default(struct s_tag_field const *, class c_basic_buffer<void> &)
//{
//    mangled_ppc("?visit_field_default@c_tag_field_visitor@@IAA_NPBUs_tag_field@@AAV?$c_basic_buffer@X@@@Z");
//};

//private: void c_tag_field_location::compute_scope_string(class c_wrapped_array<char> *)
//{
//    mangled_ppc("?compute_scope_string@c_tag_field_location@@AAAXPAV?$c_wrapped_array@D@@@Z");
//};

//public: void c_tag_field_location::push_scope_explicit(enum e_tag_field, char const *, void const *, unsigned long, __int64)
//{
//    mangled_ppc("?push_scope_explicit@c_tag_field_location@@QAAXW4e_tag_field@@PBDPBXK_J@Z");
//};

//public: void c_tag_field_location::push_scope(struct s_tag_field const *, unsigned long, __int64)
//{
//    mangled_ppc("?push_scope@c_tag_field_location@@QAAXPBUs_tag_field@@K_J@Z");
//};

//public: void c_tag_field_location::pop_scope(void)
//{
//    mangled_ppc("?pop_scope@c_tag_field_location@@QAAXXZ");
//};

//public: void c_tag_field_location::set_element_index(long)
//{
//    mangled_ppc("?set_element_index@c_tag_field_location@@QAAXJ@Z");
//};

//public: long c_tag_field_location::get_element_index(void)
//{
//    mangled_ppc("?get_element_index@c_tag_field_location@@QAAJXZ");
//};

//public: void c_tag_field_location::clear_element_index(void)
//{
//    mangled_ppc("?clear_element_index@c_tag_field_location@@QAAXXZ");
//};

//private: __int64 c_tag_field_location::get_field_base_locator(void) const
//{
//    mangled_ppc("?get_field_base_locator@c_tag_field_location@@ABA_JXZ");
//};

//private: __int64 c_tag_field_location::get_element_base_locator(void) const
//{
//    mangled_ppc("?get_element_base_locator@c_tag_field_location@@ABA_JXZ");
//};

//public: char const * c_tag_field_location::get_scope_string(void)
//{
//    mangled_ppc("?get_scope_string@c_tag_field_location@@QAAPBDXZ");
//};

//public: __int64 c_tag_field_location::get_field_locator(void)
//{
//    mangled_ppc("?get_field_locator@c_tag_field_location@@QAA_JXZ");
//};

//public: unsigned long c_tag_field_location::get_field_depth(void)
//{
//    mangled_ppc("?get_field_depth@c_tag_field_location@@QAAKXZ");
//};

//public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBAJXZ");
//};

//public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::push_back(struct c_tag_field_location::s_tag_field_scope_definition const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAAXABUs_tag_field_scope_definition@c_tag_field_location@@@Z");
//};

//public: void c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAAXXZ");
//};

//public: struct c_tag_field_location::s_tag_field_scope_definition * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAAPAUs_tag_field_scope_definition@c_tag_field_location@@J@Z");
//};

//public: struct c_tag_field_location::s_tag_field_scope_definition * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAAPAUs_tag_field_scope_definition@c_tag_field_location@@XZ");
//};

//public: struct c_tag_field_location::s_tag_field_scope_definition const * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get_top(void) const
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBAPBUs_tag_field_scope_definition@c_tag_field_location@@XZ");
//};

//public: c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAA@XZ");
//};

//public: char * s_static_array<char, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@D$0EAA@@@QAAPADXZ");
//};

//public: static long s_static_array<char, 1024>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@D$0EAA@@@SAJXZ");
//};

//public: c_static_stack<struct c_tag_field_visitor::s_tag_field_scope_definition, 16>::c_static_stack<struct c_tag_field_visitor::s_tag_field_scope_definition, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_visitor@@$0BA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QAAJXZ");
//};

//public: struct c_tag_field_location::s_tag_field_scope_definition const * c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBAPBUs_tag_field_scope_definition@c_tag_field_location@@J@Z");
//};

//public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_tag_field_location::s_tag_field_scope_definition, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_tag_field_scope_definition@c_tag_field_location@@$0BA@@@QBA_NXZ");
//};

