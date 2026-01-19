/* ---------- headers */

#include "foundation\threadlib\multithreading\profiler\mt_profiler_context.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct mt_profiler_internal::s_mt_context (*mt_profiler_internal::global_contexts)[2048]; // "?global_contexts@mt_profiler_internal@@3PAY0IAA@Us_mt_context@1@A"
// __int64mt_profiler_internal::g_framestart_time; // "?g_framestart_time@mt_profiler_internal@@3_JA"
// __int64*mt_profiler_internal::g_framestart_counter; // "?g_framestart_counter@mt_profiler_internal@@3PA_JA"
// __int64mt_profiler_internal::g_frame_number; // "?g_frame_number@mt_profiler_internal@@3_JA"
// __int64mt_profiler_internal::g_vsync_cycles; // "?g_vsync_cycles@mt_profiler_internal@@3_JA"
// class c_synchronized_int32mt_profiler_internal::current_context_index; // "?current_context_index@mt_profiler_internal@@3Vc_synchronized_int32@@A"
// public: static class mt_profiler_internal::c_context_stack_manager mt_profiler_internal::c_context_stack_manager::m_internal_instance; // "?m_internal_instance@c_context_stack_manager@mt_profiler_internal@@2V12@A"
// class t_initialization_container<class mt_profiler_internal::c_context_stack_manager *> mt_profiler_internal::g_context_stack_man; // "?g_context_stack_man@mt_profiler_internal@@3V?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@A"
// class mt_profiler_internal::c_context_stack *mt_profiler_internal::g_context_stack_def; // "?g_context_stack_def@mt_profiler_internal@@3PAVc_context_stack@1@A"

// struct mt_profiler_internal::s_mt_context * mt_profiler_internal::get_free_context(void);
// void mt_profiler_internal::context_stack_setup(class mt_profiler_internal::c_context_stack_manager **);
// public: void mt_profiler_internal::c_context_stack_manager::initialize(void);
// public: void mt_profiler_internal::c_context_stack::initialize(void);
// public: void mt_profiler_internal::c_context_stack_manager::set_hw_mode(unsigned long);
// class mt_profiler_internal::c_context_stack_manager * mt_profiler_internal::get_context_stack_manager(void);
// class mt_profiler_internal::c_context_stack * mt_profiler_internal::get_context_stack(void);
// public: void mt_profiler_internal::c_context_stack::set_thread_id(unsigned long);
// public: class mt_profiler_internal::c_context_stack * mt_profiler_internal::c_context_stack_manager::get_free(void);
// unsigned char mt_profiler_internal::get_thread_index(unsigned long);
// public: unsigned long mt_profiler_internal::c_context_stack::get_thread_id(void);
// public: class mt_profiler_internal::c_context_stack * mt_profiler_internal::c_context_stack_manager::get_details(unsigned long &);
// long mt_profiler_internal::get_current_time_index(void);
// __int64 mt_profiler_internal::get_hw_counter(unsigned long, enum e_mt_profiler_mode);
// long mt_profiler_internal::get_current_hw_counter_offset(unsigned long, enum e_mt_profiler_mode);
// float mt_profiler_internal::get_user_hw(long, float);
// void mt_profiler_internal::start_context(unsigned short);
// public: void mt_profiler_internal::s_mt_context::set_depth(unsigned char);
// public: void mt_profiler_internal::s_mt_context::set_wrapped(unsigned char);
// public: void mt_profiler_internal::c_context_stack::push(struct mt_profiler_internal::s_mt_context *);
// public: unsigned long mt_profiler_internal::c_context_stack::get_hw_thread(void);
// public: unsigned char mt_profiler_internal::c_context_stack::get_depth(void);
// public: enum e_mt_profiler_mode mt_profiler_internal::c_context_stack::get_mode(void);
// void mt_profiler_internal::end_context(unsigned short);
// public: struct mt_profiler_internal::s_mt_context * mt_profiler_internal::c_context_stack::pop(void);
// void mt_profiler_internal::set_vsync_point(void);
// void mt_profiler_internal::start_frame(void);
// public: void s_storage_context::set_start(float);
// public: unsigned short s_storage_context::encode(float);
// public: void s_storage_context::set_end(float);
// public: unsigned char mt_profiler_internal::s_mt_context::get_depth(void);
// public: unsigned char mt_profiler_internal::s_mt_context::get_wrapped(void);
// public: unsigned char mt_profiler_internal::c_context_stack::get_max_depth(void);
// public: void mt_profiler_internal::c_context_stack::set_max_depth(unsigned long);
// public: void mt_profiler_internal::c_context_stack::decay_depth(void);
// public: void mt_profiler_internal::c_context_stack::set_mode(enum e_mt_profiler_mode);
// public: struct mt_profiler_internal::s_mt_context ** mt_profiler_internal::c_context_stack::get_stack_ptr(void);
// ?get@?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@QAAPBQAVc_context_stack_manager@mt_profiler_internal@@Q6AXPAPAV23@@Z@Z;
// public: mt_profiler_internal::c_context_stack_manager::c_context_stack_manager(void);
// public: t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>::t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>(void);
// public: mt_profiler_internal::c_context_stack_manager::~c_context_stack_manager(void);
// public: t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>::~t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>(void);
// void mt_profiler_internal::current_context_index::`dynamic atexit destructor'(void);
// ??__F?m_internal_instance@c_context_stack_manager@mt_profiler_internal@@2V12@A@@YAXXZ;
// void mt_profiler_internal::g_context_stack_man::`dynamic atexit destructor'(void);

//struct mt_profiler_internal::s_mt_context * mt_profiler_internal::get_free_context(void)
//{
//    mangled_ppc("?get_free_context@mt_profiler_internal@@YAPAUs_mt_context@1@XZ");
//};

//void mt_profiler_internal::context_stack_setup(class mt_profiler_internal::c_context_stack_manager **)
//{
//    mangled_ppc("?context_stack_setup@mt_profiler_internal@@YAXPAPAVc_context_stack_manager@1@@Z");
//};

//public: void mt_profiler_internal::c_context_stack_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_context_stack_manager@mt_profiler_internal@@QAAXXZ");
//};

//public: void mt_profiler_internal::c_context_stack::initialize(void)
//{
//    mangled_ppc("?initialize@c_context_stack@mt_profiler_internal@@QAAXXZ");
//};

//public: void mt_profiler_internal::c_context_stack_manager::set_hw_mode(unsigned long)
//{
//    mangled_ppc("?set_hw_mode@c_context_stack_manager@mt_profiler_internal@@QAAXK@Z");
//};

//class mt_profiler_internal::c_context_stack_manager * mt_profiler_internal::get_context_stack_manager(void)
//{
//    mangled_ppc("?get_context_stack_manager@mt_profiler_internal@@YAPAVc_context_stack_manager@1@XZ");
//};

//class mt_profiler_internal::c_context_stack * mt_profiler_internal::get_context_stack(void)
//{
//    mangled_ppc("?get_context_stack@mt_profiler_internal@@YAPAVc_context_stack@1@XZ");
//};

//public: void mt_profiler_internal::c_context_stack::set_thread_id(unsigned long)
//{
//    mangled_ppc("?set_thread_id@c_context_stack@mt_profiler_internal@@QAAXK@Z");
//};

//public: class mt_profiler_internal::c_context_stack * mt_profiler_internal::c_context_stack_manager::get_free(void)
//{
//    mangled_ppc("?get_free@c_context_stack_manager@mt_profiler_internal@@QAAPAVc_context_stack@2@XZ");
//};

//unsigned char mt_profiler_internal::get_thread_index(unsigned long)
//{
//    mangled_ppc("?get_thread_index@mt_profiler_internal@@YAEK@Z");
//};

//public: unsigned long mt_profiler_internal::c_context_stack::get_thread_id(void)
//{
//    mangled_ppc("?get_thread_id@c_context_stack@mt_profiler_internal@@QAAKXZ");
//};

//public: class mt_profiler_internal::c_context_stack * mt_profiler_internal::c_context_stack_manager::get_details(unsigned long &)
//{
//    mangled_ppc("?get_details@c_context_stack_manager@mt_profiler_internal@@QAAPAVc_context_stack@2@AAK@Z");
//};

//long mt_profiler_internal::get_current_time_index(void)
//{
//    mangled_ppc("?get_current_time_index@mt_profiler_internal@@YAJXZ");
//};

//__int64 mt_profiler_internal::get_hw_counter(unsigned long, enum e_mt_profiler_mode)
//{
//    mangled_ppc("?get_hw_counter@mt_profiler_internal@@YA_JKW4e_mt_profiler_mode@@@Z");
//};

//long mt_profiler_internal::get_current_hw_counter_offset(unsigned long, enum e_mt_profiler_mode)
//{
//    mangled_ppc("?get_current_hw_counter_offset@mt_profiler_internal@@YAJKW4e_mt_profiler_mode@@@Z");
//};

//float mt_profiler_internal::get_user_hw(long, float)
//{
//    mangled_ppc("?get_user_hw@mt_profiler_internal@@YAMJM@Z");
//};

//void mt_profiler_internal::start_context(unsigned short)
//{
//    mangled_ppc("?start_context@mt_profiler_internal@@YAXG@Z");
//};

//public: void mt_profiler_internal::s_mt_context::set_depth(unsigned char)
//{
//    mangled_ppc("?set_depth@s_mt_context@mt_profiler_internal@@QAAXE@Z");
//};

//public: void mt_profiler_internal::s_mt_context::set_wrapped(unsigned char)
//{
//    mangled_ppc("?set_wrapped@s_mt_context@mt_profiler_internal@@QAAXE@Z");
//};

//public: void mt_profiler_internal::c_context_stack::push(struct mt_profiler_internal::s_mt_context *)
//{
//    mangled_ppc("?push@c_context_stack@mt_profiler_internal@@QAAXPAUs_mt_context@2@@Z");
//};

//public: unsigned long mt_profiler_internal::c_context_stack::get_hw_thread(void)
//{
//    mangled_ppc("?get_hw_thread@c_context_stack@mt_profiler_internal@@QAAKXZ");
//};

//public: unsigned char mt_profiler_internal::c_context_stack::get_depth(void)
//{
//    mangled_ppc("?get_depth@c_context_stack@mt_profiler_internal@@QAAEXZ");
//};

//public: enum e_mt_profiler_mode mt_profiler_internal::c_context_stack::get_mode(void)
//{
//    mangled_ppc("?get_mode@c_context_stack@mt_profiler_internal@@QAA?AW4e_mt_profiler_mode@@XZ");
//};

//void mt_profiler_internal::end_context(unsigned short)
//{
//    mangled_ppc("?end_context@mt_profiler_internal@@YAXG@Z");
//};

//public: struct mt_profiler_internal::s_mt_context * mt_profiler_internal::c_context_stack::pop(void)
//{
//    mangled_ppc("?pop@c_context_stack@mt_profiler_internal@@QAAPAUs_mt_context@2@XZ");
//};

//void mt_profiler_internal::set_vsync_point(void)
//{
//    mangled_ppc("?set_vsync_point@mt_profiler_internal@@YAXXZ");
//};

//void mt_profiler_internal::start_frame(void)
//{
//    mangled_ppc("?start_frame@mt_profiler_internal@@YAXXZ");
//};

//public: void s_storage_context::set_start(float)
//{
//    mangled_ppc("?set_start@s_storage_context@@QAAXM@Z");
//};

//public: unsigned short s_storage_context::encode(float)
//{
//    mangled_ppc("?encode@s_storage_context@@QAAGM@Z");
//};

//public: void s_storage_context::set_end(float)
//{
//    mangled_ppc("?set_end@s_storage_context@@QAAXM@Z");
//};

//public: unsigned char mt_profiler_internal::s_mt_context::get_depth(void)
//{
//    mangled_ppc("?get_depth@s_mt_context@mt_profiler_internal@@QAAEXZ");
//};

//public: unsigned char mt_profiler_internal::s_mt_context::get_wrapped(void)
//{
//    mangled_ppc("?get_wrapped@s_mt_context@mt_profiler_internal@@QAAEXZ");
//};

//public: unsigned char mt_profiler_internal::c_context_stack::get_max_depth(void)
//{
//    mangled_ppc("?get_max_depth@c_context_stack@mt_profiler_internal@@QAAEXZ");
//};

//public: void mt_profiler_internal::c_context_stack::set_max_depth(unsigned long)
//{
//    mangled_ppc("?set_max_depth@c_context_stack@mt_profiler_internal@@QAAXK@Z");
//};

//public: void mt_profiler_internal::c_context_stack::decay_depth(void)
//{
//    mangled_ppc("?decay_depth@c_context_stack@mt_profiler_internal@@QAAXXZ");
//};

//public: void mt_profiler_internal::c_context_stack::set_mode(enum e_mt_profiler_mode)
//{
//    mangled_ppc("?set_mode@c_context_stack@mt_profiler_internal@@QAAXW4e_mt_profiler_mode@@@Z");
//};

//public: struct mt_profiler_internal::s_mt_context ** mt_profiler_internal::c_context_stack::get_stack_ptr(void)
//{
//    mangled_ppc("?get_stack_ptr@c_context_stack@mt_profiler_internal@@QAAPAPAUs_mt_context@2@XZ");
//};

//?get@?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@QAAPBQAVc_context_stack_manager@mt_profiler_internal@@Q6AXPAPAV23@@Z@Z
//{
//    mangled_ppc("?get@?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@QAAPBQAVc_context_stack_manager@mt_profiler_internal@@Q6AXPAPAV23@@Z@Z");
//};

//public: mt_profiler_internal::c_context_stack_manager::c_context_stack_manager(void)
//{
//    mangled_ppc("??0c_context_stack_manager@mt_profiler_internal@@QAA@XZ");
//};

//public: t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>::t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>(void)
//{
//    mangled_ppc("??0?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@QAA@XZ");
//};

//public: mt_profiler_internal::c_context_stack_manager::~c_context_stack_manager(void)
//{
//    mangled_ppc("??1c_context_stack_manager@mt_profiler_internal@@QAA@XZ");
//};

//public: t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>::~t_initialization_container<class mt_profiler_internal::c_context_stack_manager *>(void)
//{
//    mangled_ppc("??1?$t_initialization_container@PAVc_context_stack_manager@mt_profiler_internal@@@@QAA@XZ");
//};

//void mt_profiler_internal::current_context_index::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fcurrent_context_index@mt_profiler_internal@@YAXXZ");
//};

//??__F?m_internal_instance@c_context_stack_manager@mt_profiler_internal@@2V12@A@@YAXXZ
//{
//    mangled_ppc("??__F?m_internal_instance@c_context_stack_manager@mt_profiler_internal@@2V12@A@@YAXXZ");
//};

//void mt_profiler_internal::g_context_stack_man::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_context_stack_man@mt_profiler_internal@@YAXXZ");
//};

