/* ---------- headers */

#include "omaha\memory\rockall_heap.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long `public: __cdecl c_fixed_memory_rockall_backend::c_fixed_memory_rockall_backend(void *, long, long *, bool)'::`2'::_unique_profile_definition_rockall_backend; // "?_unique_profile_definition_rockall_backend@?1???0c_fixed_memory_rockall_backend@@QAA@PAXJPAJ_N@Z@4JA"
// `public: __cdecl c_fixed_memory_rockall_backend::c_fixed_memory_rockall_backend(void *, long, long *, bool)'::`2'::`local static guard'{2}; // "??_B?1???0c_fixed_memory_rockall_backend@@QAA@PAXJPAJ_N@Z@51"
// long `public: virtual void __cdecl c_fixed_memory_rockall_backend::DeleteArea(void *, int, bool)'::`2'::_unique_profile_definition_rockall_backend; // "?_unique_profile_definition_rockall_backend@?1??DeleteArea@c_fixed_memory_rockall_backend@@UAAXPAXH_N@Z@4JA"
// `public: virtual void __cdecl c_fixed_memory_rockall_backend::DeleteArea(void *, int, bool)'::`2'::`local static guard'{2}; // "??_B?1??DeleteArea@c_fixed_memory_rockall_backend@@UAAXPAXH_N@Z@51"
// long `public: virtual int __cdecl c_fixed_memory_rockall_backend::NaturalSize(void)'::`2'::_unique_profile_definition_rockall_backend; // "?_unique_profile_definition_rockall_backend@?1??NaturalSize@c_fixed_memory_rockall_backend@@UAAHXZ@4JA"
// `public: virtual int __cdecl c_fixed_memory_rockall_backend::NaturalSize(void)'::`2'::`local static guard'{2}; // "??_B?1??NaturalSize@c_fixed_memory_rockall_backend@@UAAHXZ@51"
// long `public: virtual void * __cdecl c_fixed_memory_rockall_backend::NewArea(int, int, bool)'::`2'::_unique_profile_definition_rockall_backend; // "?_unique_profile_definition_rockall_backend@?1??NewArea@c_fixed_memory_rockall_backend@@UAAPAXHH_N@Z@4JA"
// `public: virtual void * __cdecl c_fixed_memory_rockall_backend::NewArea(int, int, bool)'::`2'::`local static guard'{2}; // "??_B?1??NewArea@c_fixed_memory_rockall_backend@@UAAPAXHH_N@Z@51"
// long `private: void __cdecl c_fixed_memory_rockall_backend::flag_and_check_pages(long, long, bool)'::`2'::_unique_profile_definition_rockall_backend; // "?_unique_profile_definition_rockall_backend@?1??flag_and_check_pages@c_fixed_memory_rockall_backend@@AAAXJJ_N@Z@4JA"
// `private: void __cdecl c_fixed_memory_rockall_backend::flag_and_check_pages(long, long, bool)'::`2'::`local static guard'{2}; // "??_B?1??flag_and_check_pages@c_fixed_memory_rockall_backend@@AAAXJJ_N@Z@51"

// protected: c_rockall_heap::c_rockall_heap(class ROCKALL_FRONT_END *, bool);
// public: c_rockall_heap::~c_rockall_heap(void);
// public: void * c_rockall_heap::allocate(long);
// public: bool ROCKALL_FRONT_END::Corrupt(void);
// public: void c_rockall_heap::deallocate(void *);
// public: void * c_rockall_heap::reallocate(void *, long);
// public: bool c_rockall_heap::verify_pointer(void *);
// public: void * c_rockall_heap::allocate_aligned(long, long);
// public: static long c_heap_pointer::calculate_heap_size(long, long);
// public: c_heap_pointer::c_heap_pointer(long);
// public: class c_user_pointer * c_heap_pointer::get_user_pointer(long);
// public: class c_heap_pointer * c_user_pointer::get_heap_pointer(void);
// public: void * c_rockall_heap::reallocate_aligned(void *, long, long);
// public: void c_rockall_heap::deallocate_aligned(void *, long);
// public: bool c_rockall_heap::verify_pointer_aligned(void *);
// private: bool c_rockall_heap::can_use_default_allocation(long) const;
// private: long c_rockall_heap::align_allocation_size(long, long) const;
// public: long c_rockall_heap::get_allocation_size(void *);
// public: c_capped_rockall_heap::c_capped_rockall_heap(long, bool);
// public: c_capped_rockall_frontend::c_capped_rockall_frontend(long, long *, bool);
// public: c_capped_memory_rockall_backend::c_capped_memory_rockall_backend(long, long *, bool);
// public: virtual void c_capped_memory_rockall_backend::DeleteArea(void *, int, bool);
// public: virtual void * c_capped_memory_rockall_backend::NewArea(int, int, bool);
// merged_830E4A38;
// public: virtual c_capped_memory_rockall_backend::~c_capped_memory_rockall_backend(void);
// public: c_rockall_custom_back_end_front_end_base::c_rockall_custom_back_end_front_end_base(class ROCKALL_BACK_END *);
// merged_830E4B30;
// public: virtual c_capped_rockall_frontend::~c_capped_rockall_frontend(void);
// public: c_rockall_custom_back_end_front_end_base::~c_rockall_custom_back_end_front_end_base(void);
// public: long c_capped_rockall_heap::get_backend_allocation_size(void) const;
// public: c_fixed_memory_rockall_heap::c_fixed_memory_rockall_heap(void *, long, bool);
// public: c_fixed_memory_rockall_frontend::c_fixed_memory_rockall_frontend(void *, long, long *, bool, bool);
// public: c_fixed_memory_rockall_backend::c_fixed_memory_rockall_backend(void *, long, long *, bool);
// public: virtual void c_fixed_memory_rockall_backend::DeleteArea(void *, int, bool);
// public: virtual int c_fixed_memory_rockall_backend::NaturalSize(void);
// public: virtual void * c_fixed_memory_rockall_backend::NewArea(int, int, bool);
// private: void c_fixed_memory_rockall_backend::flag_and_check_pages(long, long, bool);
// merged_830E5C80;
// public: virtual c_fixed_memory_rockall_backend::~c_fixed_memory_rockall_backend(void);
// merged_830E5CF0;
// public: virtual c_fixed_memory_rockall_frontend::~c_fixed_memory_rockall_frontend(void);
// public: long c_fixed_memory_rockall_heap::get_backend_allocation_size(void) const;

//protected: c_rockall_heap::c_rockall_heap(class ROCKALL_FRONT_END *, bool)
//{
//    mangled_ppc("??0c_rockall_heap@@IAA@PAVROCKALL_FRONT_END@@_N@Z");
//};

//public: c_rockall_heap::~c_rockall_heap(void)
//{
//    mangled_ppc("??1c_rockall_heap@@QAA@XZ");
//};

//public: void * c_rockall_heap::allocate(long)
//{
//    mangled_ppc("?allocate@c_rockall_heap@@QAAPAXJ@Z");
//};

//public: bool ROCKALL_FRONT_END::Corrupt(void)
//{
//    mangled_ppc("?Corrupt@ROCKALL_FRONT_END@@QAA_NXZ");
//};

//public: void c_rockall_heap::deallocate(void *)
//{
//    mangled_ppc("?deallocate@c_rockall_heap@@QAAXPAX@Z");
//};

//public: void * c_rockall_heap::reallocate(void *, long)
//{
//    mangled_ppc("?reallocate@c_rockall_heap@@QAAPAXPAXJ@Z");
//};

//public: bool c_rockall_heap::verify_pointer(void *)
//{
//    mangled_ppc("?verify_pointer@c_rockall_heap@@QAA_NPAX@Z");
//};

//public: void * c_rockall_heap::allocate_aligned(long, long)
//{
//    mangled_ppc("?allocate_aligned@c_rockall_heap@@QAAPAXJJ@Z");
//};

//public: static long c_heap_pointer::calculate_heap_size(long, long)
//{
//    mangled_ppc("?calculate_heap_size@c_heap_pointer@@SAJJJ@Z");
//};

//public: c_heap_pointer::c_heap_pointer(long)
//{
//    mangled_ppc("??0c_heap_pointer@@QAA@J@Z");
//};

//public: class c_user_pointer * c_heap_pointer::get_user_pointer(long)
//{
//    mangled_ppc("?get_user_pointer@c_heap_pointer@@QAAPAVc_user_pointer@@J@Z");
//};

//public: class c_heap_pointer * c_user_pointer::get_heap_pointer(void)
//{
//    mangled_ppc("?get_heap_pointer@c_user_pointer@@QAAPAVc_heap_pointer@@XZ");
//};

//public: void * c_rockall_heap::reallocate_aligned(void *, long, long)
//{
//    mangled_ppc("?reallocate_aligned@c_rockall_heap@@QAAPAXPAXJJ@Z");
//};

//public: void c_rockall_heap::deallocate_aligned(void *, long)
//{
//    mangled_ppc("?deallocate_aligned@c_rockall_heap@@QAAXPAXJ@Z");
//};

//public: bool c_rockall_heap::verify_pointer_aligned(void *)
//{
//    mangled_ppc("?verify_pointer_aligned@c_rockall_heap@@QAA_NPAX@Z");
//};

//private: bool c_rockall_heap::can_use_default_allocation(long) const
//{
//    mangled_ppc("?can_use_default_allocation@c_rockall_heap@@ABA_NJ@Z");
//};

//private: long c_rockall_heap::align_allocation_size(long, long) const
//{
//    mangled_ppc("?align_allocation_size@c_rockall_heap@@ABAJJJ@Z");
//};

//public: long c_rockall_heap::get_allocation_size(void *)
//{
//    mangled_ppc("?get_allocation_size@c_rockall_heap@@QAAJPAX@Z");
//};

//public: c_capped_rockall_heap::c_capped_rockall_heap(long, bool)
//{
//    mangled_ppc("??0c_capped_rockall_heap@@QAA@J_N@Z");
//};

//public: c_capped_rockall_frontend::c_capped_rockall_frontend(long, long *, bool)
//{
//    mangled_ppc("??0c_capped_rockall_frontend@@QAA@JPAJ_N@Z");
//};

//public: c_capped_memory_rockall_backend::c_capped_memory_rockall_backend(long, long *, bool)
//{
//    mangled_ppc("??0c_capped_memory_rockall_backend@@QAA@JPAJ_N@Z");
//};

//public: virtual void c_capped_memory_rockall_backend::DeleteArea(void *, int, bool)
//{
//    mangled_ppc("?DeleteArea@c_capped_memory_rockall_backend@@UAAXPAXH_N@Z");
//};

//public: virtual void * c_capped_memory_rockall_backend::NewArea(int, int, bool)
//{
//    mangled_ppc("?NewArea@c_capped_memory_rockall_backend@@UAAPAXHH_N@Z");
//};

//merged_830E4A38
//{
//    mangled_ppc("merged_830E4A38");
//};

//public: virtual c_capped_memory_rockall_backend::~c_capped_memory_rockall_backend(void)
//{
//    mangled_ppc("??1c_capped_memory_rockall_backend@@UAA@XZ");
//};

//public: c_rockall_custom_back_end_front_end_base::c_rockall_custom_back_end_front_end_base(class ROCKALL_BACK_END *)
//{
//    mangled_ppc("??0c_rockall_custom_back_end_front_end_base@@QAA@PAVROCKALL_BACK_END@@@Z");
//};

//merged_830E4B30
//{
//    mangled_ppc("merged_830E4B30");
//};

//public: virtual c_capped_rockall_frontend::~c_capped_rockall_frontend(void)
//{
//    mangled_ppc("??1c_capped_rockall_frontend@@UAA@XZ");
//};

//public: c_rockall_custom_back_end_front_end_base::~c_rockall_custom_back_end_front_end_base(void)
//{
//    mangled_ppc("??1c_rockall_custom_back_end_front_end_base@@QAA@XZ");
//};

//public: long c_capped_rockall_heap::get_backend_allocation_size(void) const
//{
//    mangled_ppc("?get_backend_allocation_size@c_capped_rockall_heap@@QBAJXZ");
//};

//public: c_fixed_memory_rockall_heap::c_fixed_memory_rockall_heap(void *, long, bool)
//{
//    mangled_ppc("??0c_fixed_memory_rockall_heap@@QAA@PAXJ_N@Z");
//};

//public: c_fixed_memory_rockall_frontend::c_fixed_memory_rockall_frontend(void *, long, long *, bool, bool)
//{
//    mangled_ppc("??0c_fixed_memory_rockall_frontend@@QAA@PAXJPAJ_N2@Z");
//};

//public: c_fixed_memory_rockall_backend::c_fixed_memory_rockall_backend(void *, long, long *, bool)
//{
//    mangled_ppc("??0c_fixed_memory_rockall_backend@@QAA@PAXJPAJ_N@Z");
//};

//public: virtual void c_fixed_memory_rockall_backend::DeleteArea(void *, int, bool)
//{
//    mangled_ppc("?DeleteArea@c_fixed_memory_rockall_backend@@UAAXPAXH_N@Z");
//};

//public: virtual int c_fixed_memory_rockall_backend::NaturalSize(void)
//{
//    mangled_ppc("?NaturalSize@c_fixed_memory_rockall_backend@@UAAHXZ");
//};

//public: virtual void * c_fixed_memory_rockall_backend::NewArea(int, int, bool)
//{
//    mangled_ppc("?NewArea@c_fixed_memory_rockall_backend@@UAAPAXHH_N@Z");
//};

//private: void c_fixed_memory_rockall_backend::flag_and_check_pages(long, long, bool)
//{
//    mangled_ppc("?flag_and_check_pages@c_fixed_memory_rockall_backend@@AAAXJJ_N@Z");
//};

//merged_830E5C80
//{
//    mangled_ppc("merged_830E5C80");
//};

//public: virtual c_fixed_memory_rockall_backend::~c_fixed_memory_rockall_backend(void)
//{
//    mangled_ppc("??1c_fixed_memory_rockall_backend@@UAA@XZ");
//};

//merged_830E5CF0
//{
//    mangled_ppc("merged_830E5CF0");
//};

//public: virtual c_fixed_memory_rockall_frontend::~c_fixed_memory_rockall_frontend(void)
//{
//    mangled_ppc("??1c_fixed_memory_rockall_frontend@@UAA@XZ");
//};

//public: long c_fixed_memory_rockall_heap::get_backend_allocation_size(void) const
//{
//    mangled_ppc("?get_backend_allocation_size@c_fixed_memory_rockall_heap@@QBAJXZ");
//};

