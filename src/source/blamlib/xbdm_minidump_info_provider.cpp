/* ---------- headers */

#include "blamlib\xbdm_minidump_info_provider.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_xbdm_minidump_info_provider::c_xbdm_minidump_info_provider(void);
// merged_83609838;
// public: virtual bool c_xbdm_minidump_info_provider::minidump_begin(struct _EXCEPTION_POINTERS *);
// public: virtual void c_xbdm_minidump_info_provider::minidump_end(void);
// public: virtual void c_xbdm_minidump_info_provider::suspend_non_calling_threads(void);
// public: virtual void c_xbdm_minidump_info_provider::resume_non_calling_threads(void);
// public: virtual void c_xbdm_minidump_info_provider::begin_thread_dump(void);
// public: virtual void c_xbdm_minidump_info_provider::end_thread_dump(void);
// public: virtual void c_xbdm_minidump_info_provider::get_thread_id_array(unsigned long *, unsigned long, unsigned long *);
// public: virtual void c_xbdm_minidump_info_provider::get_thread_information(unsigned long, struct s_thread_information *);
// public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_count(unsigned long *);
// public: virtual void c_xbdm_minidump_info_provider::get_loaded_module(unsigned long, struct _MINIDUMP_MODULE *);
// public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_name(unsigned long, char *, unsigned long);
// public: virtual void c_xbdm_minidump_info_provider::update_exception_information(struct MINIDUMP_EXCEPTION_STREAM *);
// public: virtual bool c_xbdm_minidump_info_provider::start_committed_region_query(void);
// public: virtual void c_xbdm_minidump_info_provider::end_committed_region_query(void);
// public: virtual void c_xbdm_minidump_info_provider::get_committed_region_count(unsigned long *);
// public: virtual bool c_xbdm_minidump_info_provider::get_next_committed_region_info(unsigned long *, unsigned long *);
// public: virtual bool c_xbdm_minidump_info_provider::should_resolve_memory(void);
// public: virtual bool c_xbdm_minidump_info_provider::resolve_memory(void const *, unsigned long, void *, unsigned long *);
// public: virtual bool c_xbdm_minidump_info_provider::start_module_section_memory_query(unsigned long);
// public: virtual void c_xbdm_minidump_info_provider::end_module_section_memory_query(void);
// public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_section_count(unsigned long, unsigned long *);
// public: virtual bool c_xbdm_minidump_info_provider::get_next_module_section_memory_info(unsigned long *, unsigned long *);
// private: static void c_xbdm_minidump_info_provider::get_loaded_module_name_internal(unsigned long, char *, unsigned long);
// private: static bool c_xbdm_minidump_info_provider::is_module_dll(char const *);
// bool is_valid_memory_section_size(long);
// void build_running_module_pe_name(char *, long);

//public: c_xbdm_minidump_info_provider::c_xbdm_minidump_info_provider(void)
//{
//    mangled_ppc("??0c_xbdm_minidump_info_provider@@QAA@XZ");
//};

//merged_83609838
//{
//    mangled_ppc("merged_83609838");
//};

//public: virtual bool c_xbdm_minidump_info_provider::minidump_begin(struct _EXCEPTION_POINTERS *)
//{
//    mangled_ppc("?minidump_begin@c_xbdm_minidump_info_provider@@UAA_NPAU_EXCEPTION_POINTERS@@@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::minidump_end(void)
//{
//    mangled_ppc("?minidump_end@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::suspend_non_calling_threads(void)
//{
//    mangled_ppc("?suspend_non_calling_threads@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::resume_non_calling_threads(void)
//{
//    mangled_ppc("?resume_non_calling_threads@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::begin_thread_dump(void)
//{
//    mangled_ppc("?begin_thread_dump@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::end_thread_dump(void)
//{
//    mangled_ppc("?end_thread_dump@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_thread_id_array(unsigned long *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?get_thread_id_array@c_xbdm_minidump_info_provider@@UAAXPAKK0@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_thread_information(unsigned long, struct s_thread_information *)
//{
//    mangled_ppc("?get_thread_information@c_xbdm_minidump_info_provider@@UAAXKPAUs_thread_information@@@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_count(unsigned long *)
//{
//    mangled_ppc("?get_loaded_module_count@c_xbdm_minidump_info_provider@@UAAXPAK@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_loaded_module(unsigned long, struct _MINIDUMP_MODULE *)
//{
//    mangled_ppc("?get_loaded_module@c_xbdm_minidump_info_provider@@UAAXKPAU_MINIDUMP_MODULE@@@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_name(unsigned long, char *, unsigned long)
//{
//    mangled_ppc("?get_loaded_module_name@c_xbdm_minidump_info_provider@@UAAXKPADK@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::update_exception_information(struct MINIDUMP_EXCEPTION_STREAM *)
//{
//    mangled_ppc("?update_exception_information@c_xbdm_minidump_info_provider@@UAAXPAUMINIDUMP_EXCEPTION_STREAM@@@Z");
//};

//public: virtual bool c_xbdm_minidump_info_provider::start_committed_region_query(void)
//{
//    mangled_ppc("?start_committed_region_query@c_xbdm_minidump_info_provider@@UAA_NXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::end_committed_region_query(void)
//{
//    mangled_ppc("?end_committed_region_query@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_committed_region_count(unsigned long *)
//{
//    mangled_ppc("?get_committed_region_count@c_xbdm_minidump_info_provider@@UAAXPAK@Z");
//};

//public: virtual bool c_xbdm_minidump_info_provider::get_next_committed_region_info(unsigned long *, unsigned long *)
//{
//    mangled_ppc("?get_next_committed_region_info@c_xbdm_minidump_info_provider@@UAA_NPAK0@Z");
//};

//public: virtual bool c_xbdm_minidump_info_provider::should_resolve_memory(void)
//{
//    mangled_ppc("?should_resolve_memory@c_xbdm_minidump_info_provider@@UAA_NXZ");
//};

//public: virtual bool c_xbdm_minidump_info_provider::resolve_memory(void const *, unsigned long, void *, unsigned long *)
//{
//    mangled_ppc("?resolve_memory@c_xbdm_minidump_info_provider@@UAA_NPBXKPAXPAK@Z");
//};

//public: virtual bool c_xbdm_minidump_info_provider::start_module_section_memory_query(unsigned long)
//{
//    mangled_ppc("?start_module_section_memory_query@c_xbdm_minidump_info_provider@@UAA_NK@Z");
//};

//public: virtual void c_xbdm_minidump_info_provider::end_module_section_memory_query(void)
//{
//    mangled_ppc("?end_module_section_memory_query@c_xbdm_minidump_info_provider@@UAAXXZ");
//};

//public: virtual void c_xbdm_minidump_info_provider::get_loaded_module_section_count(unsigned long, unsigned long *)
//{
//    mangled_ppc("?get_loaded_module_section_count@c_xbdm_minidump_info_provider@@UAAXKPAK@Z");
//};

//public: virtual bool c_xbdm_minidump_info_provider::get_next_module_section_memory_info(unsigned long *, unsigned long *)
//{
//    mangled_ppc("?get_next_module_section_memory_info@c_xbdm_minidump_info_provider@@UAA_NPAK0@Z");
//};

//private: static void c_xbdm_minidump_info_provider::get_loaded_module_name_internal(unsigned long, char *, unsigned long)
//{
//    mangled_ppc("?get_loaded_module_name_internal@c_xbdm_minidump_info_provider@@CAXKPADK@Z");
//};

//private: static bool c_xbdm_minidump_info_provider::is_module_dll(char const *)
//{
//    mangled_ppc("?is_module_dll@c_xbdm_minidump_info_provider@@CA_NPBD@Z");
//};

//bool is_valid_memory_section_size(long)
//{
//    mangled_ppc("?is_valid_memory_section_size@@YA_NJ@Z");
//};

//void build_running_module_pe_name(char *, long)
//{
//    mangled_ppc("?build_running_module_pe_name@@YAXPADJ@Z");
//};

