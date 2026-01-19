/* ---------- headers */

#include "omaha\interface\components\shipping_map_variant_tasks.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_mvar_files_enabled; // "?g_mvar_files_enabled@@3_NA"

// public: static bool c_load_map_variant_from_mvar_async::submit(class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_load_map_variant_from_mvar_async::c_load_map_variant_from_mvar_async(void);
// public: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_load_map_variant_from_mvar_async::switch_state(enum c_load_map_variant_from_mvar_async::e_state);
// private: void c_load_map_variant_from_mvar_async::enter_desired_state(void);
// private: void c_load_map_variant_from_mvar_async::exit_current_state(void);
// private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_stat(struct s_file_reference *);
// private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_load(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_decode(void);
// class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> async_function_make<enum e_async_pending_bool, class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*, struct s_file_reference *, class c_synchronized_int32*>(enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>::c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>(enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);

//public: static bool c_load_map_variant_from_mvar_async::submit(class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_load_map_variant_from_mvar_async@@SA_NPAV1@PAUs_file_reference@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_load_map_variant_from_mvar_async::c_load_map_variant_from_mvar_async(void)
//{
//    mangled_ppc("??0c_load_map_variant_from_mvar_async@@QAA@XZ");
//};

//public: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?update@c_load_map_variant_from_mvar_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_load_map_variant_from_mvar_async::switch_state(enum c_load_map_variant_from_mvar_async::e_state)
//{
//    mangled_ppc("?switch_state@c_load_map_variant_from_mvar_async@@AAAXW4e_state@1@@Z");
//};

//private: void c_load_map_variant_from_mvar_async::enter_desired_state(void)
//{
//    mangled_ppc("?enter_desired_state@c_load_map_variant_from_mvar_async@@AAAXXZ");
//};

//private: void c_load_map_variant_from_mvar_async::exit_current_state(void)
//{
//    mangled_ppc("?exit_current_state@c_load_map_variant_from_mvar_async@@AAAXXZ");
//};

//private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_stat(struct s_file_reference *)
//{
//    mangled_ppc("?update_stat@c_load_map_variant_from_mvar_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_load(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?update_load@c_load_map_variant_from_mvar_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_load_map_variant_from_mvar_async::update_decode(void)
//{
//    mangled_ppc("?update_decode@c_load_map_variant_from_mvar_async@@AAA?AW4e_async_pending_bool@@XZ");
//};

//class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> async_function_make<enum e_async_pending_bool, class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*, struct s_file_reference *, class c_synchronized_int32*>(enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@W4e_async_pending_bool@@Vc_load_map_variant_from_mvar_async@@PAUs_file_reference@@PAVc_synchronized_int32@@PAU3@PAV4@@@YA?AV?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@P8c_load_map_variant_from_mvar_async@@AA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@ZPAV1@01@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@YA_NABV?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>::c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>(enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@QAA@P8c_load_map_variant_from_mvar_async@@AA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@ZPAV1@01@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@s_async_task_functions@@SA_NABV?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_member_function2<enum e_async_pending_bool, enum e_async_pending_bool (c_load_map_variant_from_mvar_async::*)(struct s_file_reference *, class c_synchronized_int32*), class c_load_map_variant_from_mvar_async, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_member_function2@W4e_async_pending_bool@@P8c_load_map_variant_from_mvar_async@@AA?AW41@PAUs_file_reference@@PAVc_synchronized_int32@@@ZV2@PAU3@PAV4@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

