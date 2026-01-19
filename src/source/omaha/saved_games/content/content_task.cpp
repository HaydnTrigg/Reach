/* ---------- headers */

#include "omaha\saved_games\content\content_task.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_content_task::c_content_task(void);
// merged_835C3968;
// public: virtual c_content_task::~c_content_task(void);
// void content_task_initialize(class c_content_task *const, enum e_content_task_type);
// void content_task_per_use_initialize(class c_content_task *const);
// void content_task_pre_submit(class c_content_task *const, enum e_controller_index);
// void content_task_post_submit(class c_content_task *const, bool);
// void content_task_set_complete(class c_content_task *const, bool);
// void content_task_set_overlapped_handle(class c_content_task *const, class c_overlapped_task *const);
// bool content_task_async_task_add(class c_content_task *const, enum e_async_completion (*)(void *));
// enum e_content_task_type content_task_get_type(class c_content_task const *const);
// bool content_task_in_progress(class c_content_task const *const);
// bool content_task_is_complete(class c_content_task const *const);
// bool content_task_is_complete_and_succeeded(class c_content_task const *const);
// bool content_task_is_complete_and_failed(class c_content_task const *const);
// void content_task_block_until_complete(class c_content_task *const);
// enum e_controller_index content_task_get_controller_index(class c_content_task const *const);
// void content_task_set_async_handle(class c_content_task *const);
// public: c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::c_typed_opaque_data<struct s_content_task_private_data, 36, 4>(void);
// public: c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::~c_typed_opaque_data<struct s_content_task_private_data, 36, 4>(void);
// public: struct s_content_task_private_data * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::destruct(void);
// public: struct s_content_task_private_data * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::get(void);
// public: struct s_content_task_private_data const * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::alive(void) const;
// public: s_content_task_private_data::s_content_task_private_data(void);
// public: void * s_content_task_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_task_private_data::<unnamed-type-m_async_handle>::<unnamed-type-m_async_handle>(void);
// public: s_content_task_private_data::~s_content_task_private_data(void);
// public: s_content_task_private_data::<unnamed-type-m_async_handle>::~<unnamed-type-m_async_handle>(void);
// public: struct s_content_task_private_data * c_opaque_data<struct s_content_task_private_data, 36, 4>::get(void);
// struct s_async_task_id async_task_add<class c_content_task *>(long, class c_content_task *const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add_ex<class c_content_task *>(long, class c_content_task *const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);

//public: c_content_task::c_content_task(void)
//{
//    mangled_ppc("??0c_content_task@@QAA@XZ");
//};

//merged_835C3968
//{
//    mangled_ppc("merged_835C3968");
//};

//public: virtual c_content_task::~c_content_task(void)
//{
//    mangled_ppc("??1c_content_task@@UAA@XZ");
//};

//void content_task_initialize(class c_content_task *const, enum e_content_task_type)
//{
//    mangled_ppc("?content_task_initialize@@YAXQAVc_content_task@@W4e_content_task_type@@@Z");
//};

//void content_task_per_use_initialize(class c_content_task *const)
//{
//    mangled_ppc("?content_task_per_use_initialize@@YAXQAVc_content_task@@@Z");
//};

//void content_task_pre_submit(class c_content_task *const, enum e_controller_index)
//{
//    mangled_ppc("?content_task_pre_submit@@YAXQAVc_content_task@@W4e_controller_index@@@Z");
//};

//void content_task_post_submit(class c_content_task *const, bool)
//{
//    mangled_ppc("?content_task_post_submit@@YAXQAVc_content_task@@_N@Z");
//};

//void content_task_set_complete(class c_content_task *const, bool)
//{
//    mangled_ppc("?content_task_set_complete@@YAXQAVc_content_task@@_N@Z");
//};

//void content_task_set_overlapped_handle(class c_content_task *const, class c_overlapped_task *const)
//{
//    mangled_ppc("?content_task_set_overlapped_handle@@YAXQAVc_content_task@@QAVc_overlapped_task@@@Z");
//};

//bool content_task_async_task_add(class c_content_task *const, enum e_async_completion (*)(void *))
//{
//    mangled_ppc("?content_task_async_task_add@@YA_NQAVc_content_task@@P6A?AW4e_async_completion@@PAX@Z@Z");
//};

//enum e_content_task_type content_task_get_type(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_get_type@@YA?AW4e_content_task_type@@QBVc_content_task@@@Z");
//};

//bool content_task_in_progress(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_in_progress@@YA_NQBVc_content_task@@@Z");
//};

//bool content_task_is_complete(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_is_complete@@YA_NQBVc_content_task@@@Z");
//};

//bool content_task_is_complete_and_succeeded(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_is_complete_and_succeeded@@YA_NQBVc_content_task@@@Z");
//};

//bool content_task_is_complete_and_failed(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_is_complete_and_failed@@YA_NQBVc_content_task@@@Z");
//};

//void content_task_block_until_complete(class c_content_task *const)
//{
//    mangled_ppc("?content_task_block_until_complete@@YAXQAVc_content_task@@@Z");
//};

//enum e_controller_index content_task_get_controller_index(class c_content_task const *const)
//{
//    mangled_ppc("?content_task_get_controller_index@@YA?AW4e_controller_index@@QBVc_content_task@@@Z");
//};

//void content_task_set_async_handle(class c_content_task *const)
//{
//    mangled_ppc("?content_task_set_async_handle@@YAXQAVc_content_task@@@Z");
//};

//public: c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::c_typed_opaque_data<struct s_content_task_private_data, 36, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::~c_typed_opaque_data<struct s_content_task_private_data, 36, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAA@XZ");
//};

//public: struct s_content_task_private_data * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAAPAUs_content_task_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAAXXZ");
//};

//public: struct s_content_task_private_data * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAAPAUs_content_task_private_data@@XZ");
//};

//public: struct s_content_task_private_data const * c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QBAPBUs_content_task_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_task_private_data, 36, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_task_private_data@@$0CE@$03@@QBA_NXZ");
//};

//public: s_content_task_private_data::s_content_task_private_data(void)
//{
//    mangled_ppc("??0s_content_task_private_data@@QAA@XZ");
//};

//public: void * s_content_task_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_task_private_data@@QAAPAXI@Z");
//};

//public: s_content_task_private_data::<unnamed-type-m_async_handle>::<unnamed-type-m_async_handle>(void)
//{
//    mangled_ppc("??0<unnamed-type-m_async_handle>@s_content_task_private_data@@QAA@XZ");
//};

//public: s_content_task_private_data::~s_content_task_private_data(void)
//{
//    mangled_ppc("??1s_content_task_private_data@@QAA@XZ");
//};

//public: s_content_task_private_data::<unnamed-type-m_async_handle>::~<unnamed-type-m_async_handle>(void)
//{
//    mangled_ppc("??1<unnamed-type-m_async_handle>@s_content_task_private_data@@QAA@XZ");
//};

//public: struct s_content_task_private_data * c_opaque_data<struct s_content_task_private_data, 36, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_task_private_data@@$0CE@$03@@QAAPAUs_content_task_private_data@@XZ");
//};

//struct s_async_task_id async_task_add<class c_content_task *>(long, class c_content_task *const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@PAVc_content_task@@@@YA?AUs_async_task_id@@JPBQAVc_content_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add_ex<class c_content_task *>(long, class c_content_task *const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@PAVc_content_task@@@@YA?AUs_async_task_id@@JPBQAVc_content_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

