/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_basic_buffer<void>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_basic_buffer@X@@$01@@2JB"

// void tag_struct_initialize(class c_basic_buffer<void> &, struct s_tag_struct_definition const *);
// void tag_struct_dispose(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *);
// bool tag_struct_fixup_manually(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: c_tag_struct_fixup_iterator::c_tag_struct_fixup_iterator(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *);
// public: c_tag_struct_fixup_iterator::~c_tag_struct_fixup_iterator(void);
// public: bool c_tag_struct_fixup_iterator::next(void);
// public: struct s_tag_struct_definition const * c_tag_struct_fixup_iterator::get_dest_struct_definition(void) const;
// public: struct s_tag_struct_definition const * c_tag_struct_fixup_iterator::get_source_struct_definition(void) const;
// public: class c_basic_buffer<void> & c_tag_struct_fixup_iterator::get_source_struct(void);
// public: class c_basic_buffer<void> & c_tag_struct_fixup_iterator::get_dest_struct(void);
// public: bool c_tag_struct_fixup_iterator::can_dispose_source_struct(void) const;
// public: s_static_array<class c_basic_buffer<void>, 2>::s_static_array<class c_basic_buffer<void>, 2>(void);
// public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<bool>(bool);
// public: static long s_static_array<class c_basic_buffer<void>, 2>::get_count(void);
// public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<int>(int);
// public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<long>(long);
// public: static bool s_static_array<class c_basic_buffer<void>, 2>::valid<long>(long);
// public: static bool s_static_array<class c_basic_buffer<void>, 2>::valid<int>(int);

//void tag_struct_initialize(class c_basic_buffer<void> &, struct s_tag_struct_definition const *)
//{
//    mangled_ppc("?tag_struct_initialize@@YAXAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@@Z");
//};

//void tag_struct_dispose(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *)
//{
//    mangled_ppc("?tag_struct_dispose@@YAXAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@PAVc_tag_allocator@@@Z");
//};

//bool tag_struct_fixup_manually(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?tag_struct_fixup_manually@@YA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: c_tag_struct_fixup_iterator::c_tag_struct_fixup_iterator(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *)
//{
//    mangled_ppc("??0c_tag_struct_fixup_iterator@@QAA@AAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@@Z");
//};

//public: c_tag_struct_fixup_iterator::~c_tag_struct_fixup_iterator(void)
//{
//    mangled_ppc("??1c_tag_struct_fixup_iterator@@QAA@XZ");
//};

//public: bool c_tag_struct_fixup_iterator::next(void)
//{
//    mangled_ppc("?next@c_tag_struct_fixup_iterator@@QAA_NXZ");
//};

//public: struct s_tag_struct_definition const * c_tag_struct_fixup_iterator::get_dest_struct_definition(void) const
//{
//    mangled_ppc("?get_dest_struct_definition@c_tag_struct_fixup_iterator@@QBAPBUs_tag_struct_definition@@XZ");
//};

//public: struct s_tag_struct_definition const * c_tag_struct_fixup_iterator::get_source_struct_definition(void) const
//{
//    mangled_ppc("?get_source_struct_definition@c_tag_struct_fixup_iterator@@QBAPBUs_tag_struct_definition@@XZ");
//};

//public: class c_basic_buffer<void> & c_tag_struct_fixup_iterator::get_source_struct(void)
//{
//    mangled_ppc("?get_source_struct@c_tag_struct_fixup_iterator@@QAAAAV?$c_basic_buffer@X@@XZ");
//};

//public: class c_basic_buffer<void> & c_tag_struct_fixup_iterator::get_dest_struct(void)
//{
//    mangled_ppc("?get_dest_struct@c_tag_struct_fixup_iterator@@QAAAAV?$c_basic_buffer@X@@XZ");
//};

//public: bool c_tag_struct_fixup_iterator::can_dispose_source_struct(void) const
//{
//    mangled_ppc("?can_dispose_source_struct@c_tag_struct_fixup_iterator@@QBA_NXZ");
//};

//public: s_static_array<class c_basic_buffer<void>, 2>::s_static_array<class c_basic_buffer<void>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_basic_buffer@X@@$01@@QAA@XZ");
//};

//public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<bool>(bool)
//{
//    mangled_ppc("??$?A_N@?$s_static_array@V?$c_basic_buffer@X@@$01@@QAAAAV?$c_basic_buffer@X@@_N@Z");
//};

//public: static long s_static_array<class c_basic_buffer<void>, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_basic_buffer@X@@$01@@SAJXZ");
//};

//public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@V?$c_basic_buffer@X@@$01@@QAAAAV?$c_basic_buffer@X@@H@Z");
//};

//public: class c_basic_buffer<void> & s_static_array<class c_basic_buffer<void>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_basic_buffer@X@@$01@@QAAAAV?$c_basic_buffer@X@@J@Z");
//};

//public: static bool s_static_array<class c_basic_buffer<void>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_basic_buffer@X@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_basic_buffer<void>, 2>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@V?$c_basic_buffer@X@@$01@@SA_NH@Z");
//};

