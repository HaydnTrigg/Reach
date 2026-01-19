/* ---------- headers */

#include "omaha\shader_compiler\shader_compiler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static unsigned int const std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::npos; // "?npos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2IB"
// private: static bool c_shader_compilation_interface::m_relative_path; // "?m_relative_path@c_shader_compilation_interface@@0_NA"
// public: static long s_shader_compile_filter::target_platform; // "?target_platform@s_shader_compile_filter@@2JA"
// public: static long s_shader_compile_filter::shader_pipeline; // "?shader_pipeline@s_shader_compile_filter@@2JA"
// private: static char *c_shader_compilation_interface::m_updb_path; // "?m_updb_path@c_shader_compilation_interface@@0PADA"
// public: static struct s_shader_compile_filter_category_option *s_shader_compile_filter::filtered_category_options; // "?filtered_category_options@s_shader_compile_filter@@2PAUs_shader_compile_filter_category_option@@A"
// public: static char (*s_shader_compile_filter::filtered_shader_types)[512]; // "?filtered_shader_types@s_shader_compile_filter@@2PAY0CAA@DA"
// private: static unsigned char *c_shader_compilation_interface::m_macro_scratch_buffer; // "?m_macro_scratch_buffer@c_shader_compilation_interface@@0PAEA"
// private: static unsigned char *c_shader_compilation_interface::m_scratch_buffer; // "?m_scratch_buffer@c_shader_compilation_interface@@0PAEA"
// private: static float c_shader_compilation_interface::m_pc_compilation_time; // "?m_pc_compilation_time@c_shader_compilation_interface@@0MA"
// private: static float c_shader_compilation_interface::m_xenon_compilation_time; // "?m_xenon_compilation_time@c_shader_compilation_interface@@0MA"
// private: static long c_shader_compilation_interface::m_max_ps_gprs; // "?m_max_ps_gprs@c_shader_compilation_interface@@0JA"
// private: static long c_shader_compilation_interface::m_max_vs_gprs; // "?m_max_vs_gprs@c_shader_compilation_interface@@0JA"
// public: static long s_shader_compile_filter::filtered_shader_type_count; // "?filtered_shader_type_count@s_shader_compile_filter@@2JA"
// public: static long s_shader_compile_filter::filtered_category_option_count; // "?filtered_category_option_count@s_shader_compile_filter@@2JA"

// public: static long c_shader_compilation_interface::vertex_type_from_name(char const *);
// public: static long c_shader_compilation_interface::entry_point_from_name(char const *);
// public: static char const * c_shader_compilation_interface::vertex_entry_point_name_from_index(long);
// public: static char const * c_shader_compilation_interface::pixel_entry_point_name_from_index(long);
// public: static void c_shader_compilation_interface::set_updb_path(char const *);
// private: static void c_shader_compilation_interface::output_fxc_compile_line(char const *, void const *, char const *, bool, struct xenon_d3d::s_shader_compile_params_ex const *);
// public: static bool c_shader_compilation_interface::compile_shader(enum e_target_platform, bool, bool, bool, bool, bool, char const *, char const *, long, long, long, void *, long, struct ID3DXBuffer **, struct ID3DXBuffer **, unsigned long *, bool, bool);
// public: static void * c_shader_compilation_interface::get_scratch_buffer(void);
// public: c_dx9_cached_d3dx_include::c_dx9_cached_d3dx_include(void);
// public: c_dx9_cached_d3dx_include::~c_dx9_cached_d3dx_include(void);
// public: c_tag_d3dx_include::c_tag_d3dx_include(void);
// public: ID3DXInclude::ID3DXInclude(void);
// public: static bool c_shader_compilation_interface::set_compiled_vertex_shader(struct ID3DXBuffer *, struct ID3DXBuffer *, long, long, long, class c_rasterizer_vertex_shader *, unsigned long);
// public: static bool c_shader_compilation_interface::set_compiled_pixel_shader(struct ID3DXBuffer *, struct ID3DXBuffer *, long, long, class c_rasterizer_pixel_shader *, unsigned long, bool);
// public: static void s_shader_compile_filter::print_filter_info(void);
// public: static long s_shader_compile_filter::get_target_platform(void);
// public: static long s_shader_compile_filter::get_shader_pipeline(void);
// public: static bool s_shader_compile_filter::check_shader_type(char const *);
// public: static bool s_shader_compile_filter::check_shader_category_options(long, short const *);
// void shader_compile_target_platform(char const *);
// void shader_compile_shader_pipeline(char const *);
// void shader_compile_filter_shader_type(char const *);
// void shader_compile_filter_category_option(char const *, char const *);
// public: std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >(void);
// public: std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::~vector<struct include_file_entry, class std::allocator<struct include_file_entry> >(void);
// public: std::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >::~_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >(void);
// protected: bool std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Buy(unsigned int);
// protected: void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Tidy(void);
// protected: std::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >(class std::allocator<struct include_file_entry>);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >::~_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >(void);
// public: std::allocator<struct include_file_entry>::allocator<struct include_file_entry>(void);
// public: unsigned int std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::max_size(void) const;
// protected: void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Destroy(struct include_file_entry *, struct include_file_entry *);
// protected: static void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Xlen(void);
// public: std::length_error::length_error(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);
// public: std::logic_error::logic_error(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);
// public: virtual char const * std::logic_error::what(void) const;
// protected: virtual void std::logic_error::_Doraise(void) const;
// merged_82760998;
// public: virtual std::logic_error::~logic_error(void);
// public: virtual std::length_error::~length_error(void);
// protected: virtual void std::length_error::_Doraise(void) const;
// merged_82760A88;
// public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);
// public: std::_String_val<char, class std::allocator<char> >::_String_val<char, class std::allocator<char> >(class std::_String_val<char, class std::allocator<char> > const &);
// protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >(class std::allocator<struct include_file_entry>);
// public: std::allocator<struct include_file_entry>::allocator<struct include_file_entry>(class std::allocator<struct include_file_entry> const &);
// public: void std::allocator<struct include_file_entry>::deallocate(struct include_file_entry *, unsigned int);
// public: struct include_file_entry * std::allocator<struct include_file_entry>::allocate(unsigned int);
// public: unsigned int std::allocator<struct include_file_entry>::max_size(void) const;
// void std::_Destroy_range<class std::allocator<struct include_file_entry> >(struct include_file_entry *, struct include_file_entry *, class std::allocator<struct include_file_entry> &);
// struct include_file_entry * std::_Allocate<struct include_file_entry>(unsigned int, struct include_file_entry *);
// struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct include_file_entry *, struct include_file_entry *>(struct include_file_entry *&, struct include_file_entry *&);
// void std::_Destroy_range<class std::allocator<struct include_file_entry> >(struct include_file_entry *, struct include_file_entry *, class std::allocator<struct include_file_entry> &, struct std::_Nonscalar_ptr_iterator_tag);
// public: void std::allocator<struct include_file_entry>::destroy(struct include_file_entry *);
// void std::_Destroy<struct include_file_entry>(struct include_file_entry *);
// public: void * include_file_entry::`scalar deleting destructor'(unsigned int);
// public: include_file_entry::~include_file_entry(void);
// public: std::_Container_base_secure::_Container_base_secure(void);
// public: std::_Container_base_secure::~_Container_base_secure(void);
// public: void std::_Container_base_secure::_Orphan_all(void) const;
// public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(char const *);
// public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::~basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(void);
// public: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::c_str(void) const;
// public: std::_String_val<char, class std::allocator<char> >::~_String_val<char, class std::allocator<char> >(void);
// public: std::_String_base::~_String_base(void);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(char const *);
// public: static unsigned int std::char_traits<char>::length(char const *);
// protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Tidy(bool, unsigned int);
// protected: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Myptr(void) const;
// protected: std::_String_val<char, class std::allocator<char> >::_String_val<char, class std::allocator<char> >(class std::allocator<char>);
// public: std::_String_base::_String_base(void);
// public: void std::allocator<char>::deallocate(char *, unsigned int);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(char const *, unsigned int);
// protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Eos(unsigned int);
// public: static void std::char_traits<char>::assign(char &, char const &);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, unsigned int, unsigned int);
// protected: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Grow(unsigned int, bool);
// protected: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Inside(char const *);
// protected: char * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Myptr(void);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::erase(unsigned int, unsigned int);
// public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::size(void) const;
// public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::max_size(void) const;
// public: unsigned int std::allocator<char>::max_size(void) const;
// protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Copy(unsigned int, unsigned int);
// public: char * std::allocator<char>::allocate(unsigned int);
// void std::_Debug_pointer<char>(char const *, wchar_t const *, unsigned int);
// char * std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int);
// char * std::_Traits_helper::move_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int);
// char * std::_Allocate<char>(unsigned int, char *);
// struct std::_Secure_char_traits_tag std::_Char_traits_cat<struct std::char_traits<char> >(void);
// char * std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int, struct std::_Secure_char_traits_tag);
// public: static char * std::char_traits<char>::_Copy_s(char *, unsigned int, char const *, unsigned int);
// char * std::_Traits_helper::move_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int, struct std::_Secure_char_traits_tag);
// public: static char * std::char_traits<char>::_Move_s(char *, unsigned int, char const *, unsigned int);
// void compile_timer::`dynamic atexit destructor'(void);

//public: static long c_shader_compilation_interface::vertex_type_from_name(char const *)
//{
//    mangled_ppc("?vertex_type_from_name@c_shader_compilation_interface@@SAJPBD@Z");
//};

//public: static long c_shader_compilation_interface::entry_point_from_name(char const *)
//{
//    mangled_ppc("?entry_point_from_name@c_shader_compilation_interface@@SAJPBD@Z");
//};

//public: static char const * c_shader_compilation_interface::vertex_entry_point_name_from_index(long)
//{
//    mangled_ppc("?vertex_entry_point_name_from_index@c_shader_compilation_interface@@SAPBDJ@Z");
//};

//public: static char const * c_shader_compilation_interface::pixel_entry_point_name_from_index(long)
//{
//    mangled_ppc("?pixel_entry_point_name_from_index@c_shader_compilation_interface@@SAPBDJ@Z");
//};

//public: static void c_shader_compilation_interface::set_updb_path(char const *)
//{
//    mangled_ppc("?set_updb_path@c_shader_compilation_interface@@SAXPBD@Z");
//};

//private: static void c_shader_compilation_interface::output_fxc_compile_line(char const *, void const *, char const *, bool, struct xenon_d3d::s_shader_compile_params_ex const *)
//{
//    mangled_ppc("?output_fxc_compile_line@c_shader_compilation_interface@@CAXPBDPBX0_NPBUs_shader_compile_params_ex@xenon_d3d@@@Z");
//};

//public: static bool c_shader_compilation_interface::compile_shader(enum e_target_platform, bool, bool, bool, bool, bool, char const *, char const *, long, long, long, void *, long, struct ID3DXBuffer **, struct ID3DXBuffer **, unsigned long *, bool, bool)
//{
//    mangled_ppc("?compile_shader@c_shader_compilation_interface@@SA_NW4e_target_platform@@_N1111PBD2JJJPAXJPAPAUID3DXBuffer@@4PAK11@Z");
//};

//public: static void * c_shader_compilation_interface::get_scratch_buffer(void)
//{
//    mangled_ppc("?get_scratch_buffer@c_shader_compilation_interface@@SAPAXXZ");
//};

//public: c_dx9_cached_d3dx_include::c_dx9_cached_d3dx_include(void)
//{
//    mangled_ppc("??0c_dx9_cached_d3dx_include@@QAA@XZ");
//};

//public: c_dx9_cached_d3dx_include::~c_dx9_cached_d3dx_include(void)
//{
//    mangled_ppc("??1c_dx9_cached_d3dx_include@@QAA@XZ");
//};

//public: c_tag_d3dx_include::c_tag_d3dx_include(void)
//{
//    mangled_ppc("??0c_tag_d3dx_include@@QAA@XZ");
//};

//public: ID3DXInclude::ID3DXInclude(void)
//{
//    mangled_ppc("??0ID3DXInclude@@QAA@XZ");
//};

//public: static bool c_shader_compilation_interface::set_compiled_vertex_shader(struct ID3DXBuffer *, struct ID3DXBuffer *, long, long, long, class c_rasterizer_vertex_shader *, unsigned long)
//{
//    mangled_ppc("?set_compiled_vertex_shader@c_shader_compilation_interface@@SA_NPAUID3DXBuffer@@0JJJPAVc_rasterizer_vertex_shader@@K@Z");
//};

//public: static bool c_shader_compilation_interface::set_compiled_pixel_shader(struct ID3DXBuffer *, struct ID3DXBuffer *, long, long, class c_rasterizer_pixel_shader *, unsigned long, bool)
//{
//    mangled_ppc("?set_compiled_pixel_shader@c_shader_compilation_interface@@SA_NPAUID3DXBuffer@@0JJPAVc_rasterizer_pixel_shader@@K_N@Z");
//};

//public: static void s_shader_compile_filter::print_filter_info(void)
//{
//    mangled_ppc("?print_filter_info@s_shader_compile_filter@@SAXXZ");
//};

//public: static long s_shader_compile_filter::get_target_platform(void)
//{
//    mangled_ppc("?get_target_platform@s_shader_compile_filter@@SAJXZ");
//};

//public: static long s_shader_compile_filter::get_shader_pipeline(void)
//{
//    mangled_ppc("?get_shader_pipeline@s_shader_compile_filter@@SAJXZ");
//};

//public: static bool s_shader_compile_filter::check_shader_type(char const *)
//{
//    mangled_ppc("?check_shader_type@s_shader_compile_filter@@SA_NPBD@Z");
//};

//public: static bool s_shader_compile_filter::check_shader_category_options(long, short const *)
//{
//    mangled_ppc("?check_shader_category_options@s_shader_compile_filter@@SA_NJPBF@Z");
//};

//void shader_compile_target_platform(char const *)
//{
//    mangled_ppc("?shader_compile_target_platform@@YAXPBD@Z");
//};

//void shader_compile_shader_pipeline(char const *)
//{
//    mangled_ppc("?shader_compile_shader_pipeline@@YAXPBD@Z");
//};

//void shader_compile_filter_shader_type(char const *)
//{
//    mangled_ppc("?shader_compile_filter_shader_type@@YAXPBD@Z");
//};

//void shader_compile_filter_category_option(char const *, char const *)
//{
//    mangled_ppc("?shader_compile_filter_category_option@@YAXPBD0@Z");
//};

//public: std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >(void)
//{
//    mangled_ppc("??0?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@QAA@XZ");
//};

//public: std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::~vector<struct include_file_entry, class std::allocator<struct include_file_entry> >(void)
//{
//    mangled_ppc("??1?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@QAA@XZ");
//};

//public: std::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >::~_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >(void)
//{
//    mangled_ppc("??1?$_Vector_val@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@QAA@XZ");
//};

//protected: bool std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Buy(unsigned int)
//{
//    mangled_ppc("?_Buy@?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAA_NI@Z");
//};

//protected: void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAAXXZ");
//};

//protected: std::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Vector_val<struct include_file_entry, class std::allocator<struct include_file_entry> >(class std::allocator<struct include_file_entry>)
//{
//    mangled_ppc("??0?$_Vector_val@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAA@V?$allocator@Uinclude_file_entry@@@1@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >::~_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >(void)
//{
//    mangled_ppc("??1?$_Container_base_aux_alloc_empty@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAA@XZ");
//};

//public: std::allocator<struct include_file_entry>::allocator<struct include_file_entry>(void)
//{
//    mangled_ppc("??0?$allocator@Uinclude_file_entry@@@std@@QAA@XZ");
//};

//public: unsigned int std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@QBAIXZ");
//};

//protected: void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Destroy(struct include_file_entry *, struct include_file_entry *)
//{
//    mangled_ppc("?_Destroy@?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAAXPAUinclude_file_entry@@0@Z");
//};

//protected: static void std::vector<struct include_file_entry, class std::allocator<struct include_file_entry> >::_Xlen(void)
//{
//    mangled_ppc("?_Xlen@?$vector@Uinclude_file_entry@@V?$allocator@Uinclude_file_entry@@@std@@@std@@KAXXZ");
//};

//public: std::length_error::length_error(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("??0length_error@std@@QAA@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
//};

//public: std::logic_error::logic_error(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("??0logic_error@std@@QAA@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
//};

//public: virtual char const * std::logic_error::what(void) const
//{
//    mangled_ppc("?what@logic_error@std@@UBAPBDXZ");
//};

//protected: virtual void std::logic_error::_Doraise(void) const
//{
//    mangled_ppc("?_Doraise@logic_error@std@@MBAXXZ");
//};

//merged_82760998
//{
//    mangled_ppc("merged_82760998");
//};

//public: virtual std::logic_error::~logic_error(void)
//{
//    mangled_ppc("??1logic_error@std@@UAA@XZ");
//};

//public: virtual std::length_error::~length_error(void)
//{
//    mangled_ppc("??1length_error@std@@UAA@XZ");
//};

//protected: virtual void std::length_error::_Doraise(void) const
//{
//    mangled_ppc("?_Doraise@length_error@std@@MBAXXZ");
//};

//merged_82760A88
//{
//    mangled_ppc("merged_82760A88");
//};

//public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAA@ABV01@@Z");
//};

//public: std::_String_val<char, class std::allocator<char> >::_String_val<char, class std::allocator<char> >(class std::_String_val<char, class std::allocator<char> > const &)
//{
//    mangled_ppc("??0?$_String_val@DV?$allocator@D@std@@@std@@QAA@ABV01@@Z");
//};

//protected: std::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >::_Container_base_aux_alloc_empty<class std::allocator<struct include_file_entry> >(class std::allocator<struct include_file_entry>)
//{
//    mangled_ppc("??0?$_Container_base_aux_alloc_empty@V?$allocator@Uinclude_file_entry@@@std@@@std@@IAA@V?$allocator@Uinclude_file_entry@@@1@@Z");
//};

//public: std::allocator<struct include_file_entry>::allocator<struct include_file_entry>(class std::allocator<struct include_file_entry> const &)
//{
//    mangled_ppc("??0?$allocator@Uinclude_file_entry@@@std@@QAA@ABV01@@Z");
//};

//public: void std::allocator<struct include_file_entry>::deallocate(struct include_file_entry *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@Uinclude_file_entry@@@std@@QAAXPAUinclude_file_entry@@I@Z");
//};

//public: struct include_file_entry * std::allocator<struct include_file_entry>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@Uinclude_file_entry@@@std@@QAAPAUinclude_file_entry@@I@Z");
//};

//public: unsigned int std::allocator<struct include_file_entry>::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@Uinclude_file_entry@@@std@@QBAIXZ");
//};

//void std::_Destroy_range<class std::allocator<struct include_file_entry> >(struct include_file_entry *, struct include_file_entry *, class std::allocator<struct include_file_entry> &)
//{
//    mangled_ppc("??$_Destroy_range@V?$allocator@Uinclude_file_entry@@@std@@@std@@YAXPAUinclude_file_entry@@0AAV?$allocator@Uinclude_file_entry@@@0@@Z");
//};

//struct include_file_entry * std::_Allocate<struct include_file_entry>(unsigned int, struct include_file_entry *)
//{
//    mangled_ppc("??$_Allocate@Uinclude_file_entry@@@std@@YAPAUinclude_file_entry@@IPAU1@@Z");
//};

//struct std::_Nonscalar_ptr_iterator_tag std::_Ptr_cat<struct include_file_entry *, struct include_file_entry *>(struct include_file_entry *&, struct include_file_entry *&)
//{
//    mangled_ppc("??$_Ptr_cat@PAUinclude_file_entry@@PAU1@@std@@YA?AU_Nonscalar_ptr_iterator_tag@0@AAPAUinclude_file_entry@@0@Z");
//};

//void std::_Destroy_range<class std::allocator<struct include_file_entry> >(struct include_file_entry *, struct include_file_entry *, class std::allocator<struct include_file_entry> &, struct std::_Nonscalar_ptr_iterator_tag)
//{
//    mangled_ppc("??$_Destroy_range@V?$allocator@Uinclude_file_entry@@@std@@@std@@YAXPAUinclude_file_entry@@0AAV?$allocator@Uinclude_file_entry@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z");
//};

//public: void std::allocator<struct include_file_entry>::destroy(struct include_file_entry *)
//{
//    mangled_ppc("?destroy@?$allocator@Uinclude_file_entry@@@std@@QAAXPAUinclude_file_entry@@@Z");
//};

//void std::_Destroy<struct include_file_entry>(struct include_file_entry *)
//{
//    mangled_ppc("??$_Destroy@Uinclude_file_entry@@@std@@YAXPAUinclude_file_entry@@@Z");
//};

//public: void * include_file_entry::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ginclude_file_entry@@QAAPAXI@Z");
//};

//public: include_file_entry::~include_file_entry(void)
//{
//    mangled_ppc("??1include_file_entry@@QAA@XZ");
//};

//public: std::_Container_base_secure::_Container_base_secure(void)
//{
//    mangled_ppc("??0_Container_base_secure@std@@QAA@XZ");
//};

//public: std::_Container_base_secure::~_Container_base_secure(void)
//{
//    mangled_ppc("??1_Container_base_secure@std@@QAA@XZ");
//};

//public: void std::_Container_base_secure::_Orphan_all(void) const
//{
//    mangled_ppc("?_Orphan_all@_Container_base_secure@std@@QBAXXZ");
//};

//public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(char const *)
//{
//    mangled_ppc("??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAA@PBD@Z");
//};

//public: std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::~basic_string<char, struct std::char_traits<char>, class std::allocator<char> >(void)
//{
//    mangled_ppc("??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAA@XZ");
//};

//public: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::c_str(void) const
//{
//    mangled_ppc("?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAPBDXZ");
//};

//public: std::_String_val<char, class std::allocator<char> >::~_String_val<char, class std::allocator<char> >(void)
//{
//    mangled_ppc("??1?$_String_val@DV?$allocator@D@std@@@std@@QAA@XZ");
//};

//public: std::_String_base::~_String_base(void)
//{
//    mangled_ppc("??1_String_base@std@@QAA@XZ");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(char const *)
//{
//    mangled_ppc("?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@PBD@Z");
//};

//public: static unsigned int std::char_traits<char>::length(char const *)
//{
//    mangled_ppc("?length@?$char_traits@D@std@@SAIPBD@Z");
//};

//protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Tidy(bool, unsigned int)
//{
//    mangled_ppc("?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAAX_NI@Z");
//};

//protected: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Myptr(void) const
//{
//    mangled_ppc("?_Myptr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IBAPBDXZ");
//};

//protected: std::_String_val<char, class std::allocator<char> >::_String_val<char, class std::allocator<char> >(class std::allocator<char>)
//{
//    mangled_ppc("??0?$_String_val@DV?$allocator@D@std@@@std@@IAA@V?$allocator@D@1@@Z");
//};

//public: std::_String_base::_String_base(void)
//{
//    mangled_ppc("??0_String_base@std@@QAA@XZ");
//};

//public: void std::allocator<char>::deallocate(char *, unsigned int)
//{
//    mangled_ppc("?deallocate@?$allocator@D@std@@QAAXPADI@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(char const *, unsigned int)
//{
//    mangled_ppc("?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@PBDI@Z");
//};

//protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Eos(unsigned int)
//{
//    mangled_ppc("?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAAXI@Z");
//};

//public: static void std::char_traits<char>::assign(char &, char const &)
//{
//    mangled_ppc("?assign@?$char_traits@D@std@@SAXAADABD@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::assign(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, unsigned int, unsigned int)
//{
//    mangled_ppc("?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@ABV12@II@Z");
//};

//protected: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Grow(unsigned int, bool)
//{
//    mangled_ppc("?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAA_NI_N@Z");
//};

//protected: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Inside(char const *)
//{
//    mangled_ppc("?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAA_NPBD@Z");
//};

//protected: char * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Myptr(void)
//{
//    mangled_ppc("?_Myptr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAAPADXZ");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::erase(unsigned int, unsigned int)
//{
//    mangled_ppc("?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@II@Z");
//};

//public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::size(void) const
//{
//    mangled_ppc("?size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAIXZ");
//};

//public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::max_size(void) const
//{
//    mangled_ppc("?max_size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAIXZ");
//};

//public: unsigned int std::allocator<char>::max_size(void) const
//{
//    mangled_ppc("?max_size@?$allocator@D@std@@QBAIXZ");
//};

//protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Copy(unsigned int, unsigned int)
//{
//    mangled_ppc("?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAAXII@Z");
//};

//public: char * std::allocator<char>::allocate(unsigned int)
//{
//    mangled_ppc("?allocate@?$allocator@D@std@@QAAPADI@Z");
//};

//void std::_Debug_pointer<char>(char const *, wchar_t const *, unsigned int)
//{
//    mangled_ppc("??$_Debug_pointer@D@std@@YAXPBDPB_WI@Z");
//};

//char * std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int)
//{
//    mangled_ppc("??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDI@Z");
//};

//char * std::_Traits_helper::move_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int)
//{
//    mangled_ppc("??$move_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDI@Z");
//};

//char * std::_Allocate<char>(unsigned int, char *)
//{
//    mangled_ppc("??$_Allocate@D@std@@YAPADIPAD@Z");
//};

//struct std::_Secure_char_traits_tag std::_Char_traits_cat<struct std::char_traits<char> >(void)
//{
//    mangled_ppc("??$_Char_traits_cat@U?$char_traits@D@std@@@std@@YA?AU_Secure_char_traits_tag@0@XZ");
//};

//char * std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int, struct std::_Secure_char_traits_tag)
//{
//    mangled_ppc("??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z");
//};

//public: static char * std::char_traits<char>::_Copy_s(char *, unsigned int, char const *, unsigned int)
//{
//    mangled_ppc("?_Copy_s@?$char_traits@D@std@@SAPADPADIPBDI@Z");
//};

//char * std::_Traits_helper::move_s<struct std::char_traits<char> >(char *, unsigned int, char const *, unsigned int, struct std::_Secure_char_traits_tag)
//{
//    mangled_ppc("??$move_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z");
//};

//public: static char * std::char_traits<char>::_Move_s(char *, unsigned int, char const *, unsigned int)
//{
//    mangled_ppc("?_Move_s@?$char_traits@D@std@@SAPADPADIPBDI@Z");
//};

//void compile_timer::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fcompile_timer@@YAXXZ");
//};

