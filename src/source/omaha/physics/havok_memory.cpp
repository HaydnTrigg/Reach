/* ---------- headers */

#include "omaha\physics\havok_memory.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<long, 17>::k_element_count; // "?k_element_count@?$s_static_array@J$0BB@@@2JB"
// bool debug_havok_memory; // "?debug_havok_memory@@3_NA"

// void havok_notify_stack_memory_allocation(long, long);
// void havok_memory_initialize(void);
// void clear_stack_memory_watermark(void);
// void havok_memory_dispose(void);
// public: void c_havok_blam_memory_system::notify_disposing(void);
// public: void c_fixed_memory_allocator::notify_disposing(void);
// void havok_memory_initialize_for_render_thread(void);
// void havok_memory_dispose_for_render_thread(void);
// void havok_memory_initialize_for_audio_thread(void);
// void havok_memory_dispose_for_audio_thread(void);
// void havok_memory_initialize_for_job_thread(void);
// void havok_memory_dispose_for_job_thread(void);
// class hkMemoryRouter * havok_memory_get_router(void);
// bool havok_memory_allocator_is_initialized(void);
// bool is_overflow_pool_memory_address(void *);
// void havok_memory_initialize_overflow(void);
// public: bool c_havok_blam_memory_system::using_overflow_memory(void);
// public: void c_havok_blam_memory_system::allow_havok_overflow_buffer_use(bool);
// public: void c_fixed_memory_allocator::allow_havok_overflow_buffer_use(bool);
// void havok_memory_dispose_overflow(void);
// bool is_havok_update_memory_initialized(void);
// void havok_memory_test_borrowing(void);
// public: void c_havok_overflow_memory_borrower::initialize(char const *, long);
// void * havok_overflow_memory_borrow(class c_havok_overflow_memory_borrower const *, unsigned long);
// public: bool c_havok_blam_memory_system::havok_overflow_buffer_in_use(void) const;
// public: bool c_fixed_memory_allocator::havok_overflow_buffer_in_use(void) const;
// public: void c_havok_overflow_memory_borrower::dispose(void);
// void havok_overflow_memory_return(class c_havok_overflow_memory_borrower const *);
// public: void * c_havok_overflow_memory_borrower::get_buffer(void);
// public: unsigned long c_havok_overflow_memory_borrower::get_buffer_size(void) const;
// public: c_havok_overflow_memory_borrower_scope::c_havok_overflow_memory_borrower_scope(char const *, long);
// public: c_havok_overflow_memory_borrower_scope::~c_havok_overflow_memory_borrower_scope(void);
// bool havok_memory_level_unsafe(void);
// public: class hkFreeListAllocator * c_havok_blam_memory_system::get_free_list_allocator(void);
// void havok_memory_garbage_collect(void);
// bool havok_memory_garbage_collection_is_active(void);
// void havok_memory_garbage_collect(bool);
// bool havok_memory_level_unsafe_internal(void);
// void havok_memory_allocator_lock(void);
// void havok_memory_allocator_unlock(void);
// void havok_memory_debug(void);
// void havok_memory_print_status_line(char const *, ...);
// void print_stack_memory(char const *, long);
// public: c_havok_memory_enable_system_allocator::c_havok_memory_enable_system_allocator(void);
// public: c_havok_memory_enable_system_allocator::~c_havok_memory_enable_system_allocator(void);
// public: hkFlags<enum hkMemorySystem::FlagBits, int>::hkFlags<enum hkMemorySystem::FlagBits, int>(int);
// public: class c_havok_blam_memory_system * c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::construct(void);
// public: void c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::destruct(void);
// public: class c_havok_blam_memory_system * c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::get(void);
// public: bool c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::alive(void) const;
// public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::empty(void) const;
// public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::full(void) const;
// public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::clear(void);
// public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::push_back(class c_havok_overflow_memory_borrower const *const &);
// public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::pop(void);
// public: class c_havok_overflow_memory_borrower const ** c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::get_top(void);
// public: static long c_static_stack<struct c_status_line, 16>::maximum_count(void);
// public: void c_static_stack<struct c_status_line, 16>::clear(void);
// public: long c_static_stack<struct c_status_line, 16>::push(void);
// public: struct c_status_line * c_static_stack<struct c_status_line, 16>::get(long);
// public: struct c_status_line * c_static_stack<struct c_status_line, 16>::get_elements(void);
// public: void s_static_array<long, 17>::set_all(long const &);
// public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::valid(void) const;
// public: long c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::top(void) const;
// public: long c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::push(void);
// public: class c_havok_overflow_memory_borrower const ** c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::get(long);
// public: bool c_static_stack<struct c_status_line, 16>::valid(long) const;
// public: bool c_static_stack<struct c_status_line, 16>::full(void) const;
// public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::valid(long) const;
// public: bool c_static_stack<struct c_status_line, 16>::valid(void) const;
// public: class c_havok_blam_memory_system * c_opaque_data<class c_havok_blam_memory_system, 3408, 4>::get(void);
// public: long & s_static_array<long, 17>::operator[]<long>(long);
// public: static bool s_static_array<long, 17>::valid<long>(long);
// public: hkMemoryAllocator::MemoryStatistics::MemoryStatistics(void);
// public: void const * hkStackMemory::getStackStart(void);
// public: void const * hkStackMemory::getStackNext(void);
// public: void hkStackMemory::initMemory(void *, int);
// public: class hkMemoryAllocator & hkMemoryRouter::global(void);
// public: static void * hkMemorySystem::operator new(unsigned int, void *);
// public: static class hkMonitorStream * hkMonitorStream::getInstancePtr(void);
// public: s_havok_memory_globals::s_havok_memory_globals(void);
// public: hkMonitorStream::hkMonitorStream(void);
// public: c_malloc_allocator::c_malloc_allocator(void);
// public: hkMallocAllocator::hkMallocAllocator(int);
// public: hkMemoryAllocator::hkMemoryAllocator(void);
// merged_8312D060;
// merged_8312D0A8;
// public: virtual hkMallocAllocator::~hkMallocAllocator(void);
// public: virtual void * c_malloc_allocator::blockAlloc(int);
// merged_8312D1B8;
// public: virtual c_malloc_allocator::~c_malloc_allocator(void);
// public: hkPadSpu<char *>::hkPadSpu<char *>(void);
// public: c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>(void);
// public: c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::c_static_stack<class c_havok_overflow_memory_borrower const *, 4>(void);
// public: static void hkMemoryAllocator::operator delete(void *);
// public: virtual void hkMemoryAllocator::resetPeakMemoryStatistics(void);
// public: c_static_stack<struct c_status_line, 16>::c_static_stack<struct c_status_line, 16>(void);
// public: s_havok_memory_globals::~s_havok_memory_globals(void);
// public: c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::~c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>(void);
// void g_havok_memory_globals::`dynamic atexit destructor'(void);

//void havok_notify_stack_memory_allocation(long, long)
//{
//    mangled_ppc("?havok_notify_stack_memory_allocation@@YAXJJ@Z");
//};

//void havok_memory_initialize(void)
//{
//    mangled_ppc("?havok_memory_initialize@@YAXXZ");
//};

//void clear_stack_memory_watermark(void)
//{
//    mangled_ppc("?clear_stack_memory_watermark@@YAXXZ");
//};

//void havok_memory_dispose(void)
//{
//    mangled_ppc("?havok_memory_dispose@@YAXXZ");
//};

//public: void c_havok_blam_memory_system::notify_disposing(void)
//{
//    mangled_ppc("?notify_disposing@c_havok_blam_memory_system@@QAAXXZ");
//};

//public: void c_fixed_memory_allocator::notify_disposing(void)
//{
//    mangled_ppc("?notify_disposing@c_fixed_memory_allocator@@QAAXXZ");
//};

//void havok_memory_initialize_for_render_thread(void)
//{
//    mangled_ppc("?havok_memory_initialize_for_render_thread@@YAXXZ");
//};

//void havok_memory_dispose_for_render_thread(void)
//{
//    mangled_ppc("?havok_memory_dispose_for_render_thread@@YAXXZ");
//};

//void havok_memory_initialize_for_audio_thread(void)
//{
//    mangled_ppc("?havok_memory_initialize_for_audio_thread@@YAXXZ");
//};

//void havok_memory_dispose_for_audio_thread(void)
//{
//    mangled_ppc("?havok_memory_dispose_for_audio_thread@@YAXXZ");
//};

//void havok_memory_initialize_for_job_thread(void)
//{
//    mangled_ppc("?havok_memory_initialize_for_job_thread@@YAXXZ");
//};

//void havok_memory_dispose_for_job_thread(void)
//{
//    mangled_ppc("?havok_memory_dispose_for_job_thread@@YAXXZ");
//};

//class hkMemoryRouter * havok_memory_get_router(void)
//{
//    mangled_ppc("?havok_memory_get_router@@YAPAVhkMemoryRouter@@XZ");
//};

//bool havok_memory_allocator_is_initialized(void)
//{
//    mangled_ppc("?havok_memory_allocator_is_initialized@@YA_NXZ");
//};

//bool is_overflow_pool_memory_address(void *)
//{
//    mangled_ppc("?is_overflow_pool_memory_address@@YA_NPAX@Z");
//};

//void havok_memory_initialize_overflow(void)
//{
//    mangled_ppc("?havok_memory_initialize_overflow@@YAXXZ");
//};

//public: bool c_havok_blam_memory_system::using_overflow_memory(void)
//{
//    mangled_ppc("?using_overflow_memory@c_havok_blam_memory_system@@QAA_NXZ");
//};

//public: void c_havok_blam_memory_system::allow_havok_overflow_buffer_use(bool)
//{
//    mangled_ppc("?allow_havok_overflow_buffer_use@c_havok_blam_memory_system@@QAAX_N@Z");
//};

//public: void c_fixed_memory_allocator::allow_havok_overflow_buffer_use(bool)
//{
//    mangled_ppc("?allow_havok_overflow_buffer_use@c_fixed_memory_allocator@@QAAX_N@Z");
//};

//void havok_memory_dispose_overflow(void)
//{
//    mangled_ppc("?havok_memory_dispose_overflow@@YAXXZ");
//};

//bool is_havok_update_memory_initialized(void)
//{
//    mangled_ppc("?is_havok_update_memory_initialized@@YA_NXZ");
//};

//void havok_memory_test_borrowing(void)
//{
//    mangled_ppc("?havok_memory_test_borrowing@@YAXXZ");
//};

//public: void c_havok_overflow_memory_borrower::initialize(char const *, long)
//{
//    mangled_ppc("?initialize@c_havok_overflow_memory_borrower@@QAAXPBDJ@Z");
//};

//void * havok_overflow_memory_borrow(class c_havok_overflow_memory_borrower const *, unsigned long)
//{
//    mangled_ppc("?havok_overflow_memory_borrow@@YAPAXPBVc_havok_overflow_memory_borrower@@K@Z");
//};

//public: bool c_havok_blam_memory_system::havok_overflow_buffer_in_use(void) const
//{
//    mangled_ppc("?havok_overflow_buffer_in_use@c_havok_blam_memory_system@@QBA_NXZ");
//};

//public: bool c_fixed_memory_allocator::havok_overflow_buffer_in_use(void) const
//{
//    mangled_ppc("?havok_overflow_buffer_in_use@c_fixed_memory_allocator@@QBA_NXZ");
//};

//public: void c_havok_overflow_memory_borrower::dispose(void)
//{
//    mangled_ppc("?dispose@c_havok_overflow_memory_borrower@@QAAXXZ");
//};

//void havok_overflow_memory_return(class c_havok_overflow_memory_borrower const *)
//{
//    mangled_ppc("?havok_overflow_memory_return@@YAXPBVc_havok_overflow_memory_borrower@@@Z");
//};

//public: void * c_havok_overflow_memory_borrower::get_buffer(void)
//{
//    mangled_ppc("?get_buffer@c_havok_overflow_memory_borrower@@QAAPAXXZ");
//};

//public: unsigned long c_havok_overflow_memory_borrower::get_buffer_size(void) const
//{
//    mangled_ppc("?get_buffer_size@c_havok_overflow_memory_borrower@@QBAKXZ");
//};

//public: c_havok_overflow_memory_borrower_scope::c_havok_overflow_memory_borrower_scope(char const *, long)
//{
//    mangled_ppc("??0c_havok_overflow_memory_borrower_scope@@QAA@PBDJ@Z");
//};

//public: c_havok_overflow_memory_borrower_scope::~c_havok_overflow_memory_borrower_scope(void)
//{
//    mangled_ppc("??1c_havok_overflow_memory_borrower_scope@@QAA@XZ");
//};

//bool havok_memory_level_unsafe(void)
//{
//    mangled_ppc("?havok_memory_level_unsafe@@YA_NXZ");
//};

//public: class hkFreeListAllocator * c_havok_blam_memory_system::get_free_list_allocator(void)
//{
//    mangled_ppc("?get_free_list_allocator@c_havok_blam_memory_system@@QAAPAVhkFreeListAllocator@@XZ");
//};

//void havok_memory_garbage_collect(void)
//{
//    mangled_ppc("?havok_memory_garbage_collect@@YAXXZ");
//};

//bool havok_memory_garbage_collection_is_active(void)
//{
//    mangled_ppc("?havok_memory_garbage_collection_is_active@@YA_NXZ");
//};

//void havok_memory_garbage_collect(bool)
//{
//    mangled_ppc("?havok_memory_garbage_collect@@YAX_N@Z");
//};

//bool havok_memory_level_unsafe_internal(void)
//{
//    mangled_ppc("?havok_memory_level_unsafe_internal@@YA_NXZ");
//};

//void havok_memory_allocator_lock(void)
//{
//    mangled_ppc("?havok_memory_allocator_lock@@YAXXZ");
//};

//void havok_memory_allocator_unlock(void)
//{
//    mangled_ppc("?havok_memory_allocator_unlock@@YAXXZ");
//};

//void havok_memory_debug(void)
//{
//    mangled_ppc("?havok_memory_debug@@YAXXZ");
//};

//void havok_memory_print_status_line(char const *, ...)
//{
//    mangled_ppc("?havok_memory_print_status_line@@YAXPBDZZ");
//};

//void print_stack_memory(char const *, long)
//{
//    mangled_ppc("?print_stack_memory@@YAXPBDJ@Z");
//};

//public: c_havok_memory_enable_system_allocator::c_havok_memory_enable_system_allocator(void)
//{
//    mangled_ppc("??0c_havok_memory_enable_system_allocator@@QAA@XZ");
//};

//public: c_havok_memory_enable_system_allocator::~c_havok_memory_enable_system_allocator(void)
//{
//    mangled_ppc("??1c_havok_memory_enable_system_allocator@@QAA@XZ");
//};

//public: hkFlags<enum hkMemorySystem::FlagBits, int>::hkFlags<enum hkMemorySystem::FlagBits, int>(int)
//{
//    mangled_ppc("??0?$hkFlags@W4FlagBits@hkMemorySystem@@H@@QAA@H@Z");
//};

//public: class c_havok_blam_memory_system * c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAAPAVc_havok_blam_memory_system@@XZ");
//};

//public: void c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAAXXZ");
//};

//public: class c_havok_blam_memory_system * c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAAPAVc_havok_blam_memory_system@@XZ");
//};

//public: bool c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QBA_NXZ");
//};

//public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAXXZ");
//};

//public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::push_back(class c_havok_overflow_memory_borrower const *const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAXABQBVc_havok_overflow_memory_borrower@@@Z");
//};

//public: void c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAXXZ");
//};

//public: class c_havok_overflow_memory_borrower const ** c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAPAPBVc_havok_overflow_memory_borrower@@XZ");
//};

//public: static long c_static_stack<struct c_status_line, 16>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Uc_status_line@@$0BA@@@SAJXZ");
//};

//public: void c_static_stack<struct c_status_line, 16>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Uc_status_line@@$0BA@@@QAAXXZ");
//};

//public: long c_static_stack<struct c_status_line, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Uc_status_line@@$0BA@@@QAAJXZ");
//};

//public: struct c_status_line * c_static_stack<struct c_status_line, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Uc_status_line@@$0BA@@@QAAPAUc_status_line@@J@Z");
//};

//public: struct c_status_line * c_static_stack<struct c_status_line, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Uc_status_line@@$0BA@@@QAAPAUc_status_line@@XZ");
//};

//public: void s_static_array<long, 17>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0BB@@@QAAXABJ@Z");
//};

//public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QBA_NXZ");
//};

//public: long c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QBAJXZ");
//};

//public: long c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAJXZ");
//};

//public: class c_havok_overflow_memory_borrower const ** c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAAPAPBVc_havok_overflow_memory_borrower@@J@Z");
//};

//public: bool c_static_stack<struct c_status_line, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uc_status_line@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_status_line, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Uc_status_line@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_status_line, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Uc_status_line@@$0BA@@@QBA_NXZ");
//};

//public: class c_havok_blam_memory_system * c_opaque_data<class c_havok_blam_memory_system, 3408, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAAPAVc_havok_blam_memory_system@@XZ");
//};

//public: long & s_static_array<long, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BB@@@QAAAAJJ@Z");
//};

//public: static bool s_static_array<long, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0BB@@@SA_NJ@Z");
//};

//public: hkMemoryAllocator::MemoryStatistics::MemoryStatistics(void)
//{
//    mangled_ppc("??0MemoryStatistics@hkMemoryAllocator@@QAA@XZ");
//};

//public: void const * hkStackMemory::getStackStart(void)
//{
//    mangled_ppc("?getStackStart@hkStackMemory@@QAAPBXXZ");
//};

//public: void const * hkStackMemory::getStackNext(void)
//{
//    mangled_ppc("?getStackNext@hkStackMemory@@QAAPBXXZ");
//};

//public: void hkStackMemory::initMemory(void *, int)
//{
//    mangled_ppc("?initMemory@hkStackMemory@@QAAXPAXH@Z");
//};

//public: class hkMemoryAllocator & hkMemoryRouter::global(void)
//{
//    mangled_ppc("?global@hkMemoryRouter@@QAAAAVhkMemoryAllocator@@XZ");
//};

//public: static void * hkMemorySystem::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkMemorySystem@@SAPAXIPAX@Z");
//};

//public: static class hkMonitorStream * hkMonitorStream::getInstancePtr(void)
//{
//    mangled_ppc("?getInstancePtr@hkMonitorStream@@SAPAV1@XZ");
//};

//public: s_havok_memory_globals::s_havok_memory_globals(void)
//{
//    mangled_ppc("??0s_havok_memory_globals@@QAA@XZ");
//};

//public: hkMonitorStream::hkMonitorStream(void)
//{
//    mangled_ppc("??0hkMonitorStream@@QAA@XZ");
//};

//public: c_malloc_allocator::c_malloc_allocator(void)
//{
//    mangled_ppc("??0c_malloc_allocator@@QAA@XZ");
//};

//public: hkMallocAllocator::hkMallocAllocator(int)
//{
//    mangled_ppc("??0hkMallocAllocator@@QAA@H@Z");
//};

//public: hkMemoryAllocator::hkMemoryAllocator(void)
//{
//    mangled_ppc("??0hkMemoryAllocator@@QAA@XZ");
//};

//merged_8312D060
//{
//    mangled_ppc("merged_8312D060");
//};

//merged_8312D0A8
//{
//    mangled_ppc("merged_8312D0A8");
//};

//public: virtual hkMallocAllocator::~hkMallocAllocator(void)
//{
//    mangled_ppc("??1hkMallocAllocator@@UAA@XZ");
//};

//public: virtual void * c_malloc_allocator::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@c_malloc_allocator@@UAAPAXH@Z");
//};

//merged_8312D1B8
//{
//    mangled_ppc("merged_8312D1B8");
//};

//public: virtual c_malloc_allocator::~c_malloc_allocator(void)
//{
//    mangled_ppc("??1c_malloc_allocator@@UAA@XZ");
//};

//public: hkPadSpu<char *>::hkPadSpu<char *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAD@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAA@XZ");
//};

//public: c_static_stack<class c_havok_overflow_memory_borrower const *, 4>::c_static_stack<class c_havok_overflow_memory_borrower const *, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@PBVc_havok_overflow_memory_borrower@@$03@@QAA@XZ");
//};

//public: static void hkMemoryAllocator::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryAllocator@@SAXPAX@Z");
//};

//public: virtual void hkMemoryAllocator::resetPeakMemoryStatistics(void)
//{
//    mangled_ppc("?resetPeakMemoryStatistics@hkMemoryAllocator@@UAAXXZ");
//};

//public: c_static_stack<struct c_status_line, 16>::c_static_stack<struct c_status_line, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Uc_status_line@@$0BA@@@QAA@XZ");
//};

//public: s_havok_memory_globals::~s_havok_memory_globals(void)
//{
//    mangled_ppc("??1s_havok_memory_globals@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>::~c_typed_opaque_data<class c_havok_blam_memory_system, 3408, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_havok_blam_memory_system@@$0NFA@$03@@QAA@XZ");
//};

//void g_havok_memory_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_memory_globals@@YAXXZ");
//};

