/* ---------- headers */

#include "omaha\interface\custom_bitmaps\custom_bitmap_tasks.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool c_load_jpeg_from_buffer_async::submit(class c_load_jpeg_from_buffer_async *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_load_jpeg_from_buffer_async::c_load_jpeg_from_buffer_async(void const *, unsigned int, class c_custom_bitmap_key const &);
// public: c_user_interface_jpeg_allocator::c_user_interface_jpeg_allocator(void);
// merged_84BCA9A0;
// public: c_jpeg_allocator::c_jpeg_allocator(void);
// public: c_jpeg_buffer_decompression_source::c_jpeg_buffer_decompression_source(unsigned char const *, unsigned int);
// public: c_jpeg_source_decompressor::c_jpeg_source_decompressor(class c_jpeg_allocator *, class c_jpeg_decompression_source *);
// public: c_jpeg_argb_image::c_jpeg_argb_image(void);
// public: enum e_async_pending_bool c_load_jpeg_from_buffer_async::operator()(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::start(void);
// private: void c_load_jpeg_from_buffer_async::switch_state(enum c_load_jpeg_from_buffer_async::e_state);
// private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::update_acquire_allocate(void);
// private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::run(void);
// public: bool c_jpeg_decompressor::is_complete(void) const;
// public: c_load_jpeg_from_blf_chunk_async::c_decompress_state::c_decompress_state(struct s_file_reference *);
// public: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::update(class c_custom_bitmap_key const &, class c_custom_bitmap_ptr *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::start(class c_custom_bitmap_key const &);
// private: void c_load_jpeg_from_blf_chunk_async::c_decompress_state::switch_substate(enum c_load_jpeg_from_blf_chunk_async::c_decompress_state::e_substate);
// private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::update_acquire_allocate(class c_custom_bitmap_key const &, class c_custom_bitmap_ptr *);
// private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::run(class c_custom_bitmap_ptr *);
// public: static bool c_load_jpeg_from_blf_chunk_async::submit(class c_load_jpeg_from_blf_chunk_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// public: void * c_load_jpeg_from_blf_chunk_async::c_decompress_state::`scalar deleting destructor'(unsigned int);
// public: c_load_jpeg_from_blf_chunk_async::c_decompress_state::~c_decompress_state(void);
// private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::open(struct s_file_reference *);
// private: void c_load_jpeg_from_blf_chunk_async::switch_state(enum c_load_jpeg_from_blf_chunk_async::e_state);
// private: void c_load_jpeg_from_blf_chunk_async::seek(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_load_jpeg_from_blf_chunk_async::decompress(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::close(struct s_file_reference *);
// public: class c_load_jpeg_from_content_item_blf_chunk_async * c_load_jpeg_from_content_item_blf_chunk_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// class c_custom_bitmap_key fit_bitmap_key(class c_jpeg_decompressor &, class c_custom_bitmap_key const &);
// public: void c_jpeg_decompressor::set_scale(unsigned int);
// public: class c_saved_game_file_seek_blf_chunk_async * c_opaque_data<class c_saved_game_file_seek_blf_chunk_async, 4, 4>::get(void);
// public: class c_load_jpeg_from_blf_chunk_async::c_decompress_state * c_opaque_data<class c_load_jpeg_from_blf_chunk_async::c_decompress_state, 6464, 16>::get(void);
// class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>(class c_load_jpeg_from_buffer_async *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>(class c_load_jpeg_from_blf_chunk_async *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>(class c_load_jpeg_from_buffer_async *);
// public: s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>(class c_load_jpeg_from_blf_chunk_async *);
// public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*);

//public: static bool c_load_jpeg_from_buffer_async::submit(class c_load_jpeg_from_buffer_async *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_load_jpeg_from_buffer_async@@SA_NPAV1@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_load_jpeg_from_buffer_async::c_load_jpeg_from_buffer_async(void const *, unsigned int, class c_custom_bitmap_key const &)
//{
//    mangled_ppc("??0c_load_jpeg_from_buffer_async@@QAA@PBXIABVc_custom_bitmap_key@@@Z");
//};

//public: c_user_interface_jpeg_allocator::c_user_interface_jpeg_allocator(void)
//{
//    mangled_ppc("??0c_user_interface_jpeg_allocator@@QAA@XZ");
//};

//merged_84BCA9A0
//{
//    mangled_ppc("merged_84BCA9A0");
//};

//public: c_jpeg_allocator::c_jpeg_allocator(void)
//{
//    mangled_ppc("??0c_jpeg_allocator@@QAA@XZ");
//};

//public: c_jpeg_buffer_decompression_source::c_jpeg_buffer_decompression_source(unsigned char const *, unsigned int)
//{
//    mangled_ppc("??0c_jpeg_buffer_decompression_source@@QAA@PBEI@Z");
//};

//public: c_jpeg_source_decompressor::c_jpeg_source_decompressor(class c_jpeg_allocator *, class c_jpeg_decompression_source *)
//{
//    mangled_ppc("??0c_jpeg_source_decompressor@@QAA@PAVc_jpeg_allocator@@PAVc_jpeg_decompression_source@@@Z");
//};

//public: c_jpeg_argb_image::c_jpeg_argb_image(void)
//{
//    mangled_ppc("??0c_jpeg_argb_image@@QAA@XZ");
//};

//public: enum e_async_pending_bool c_load_jpeg_from_buffer_async::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_load_jpeg_from_buffer_async@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::start(void)
//{
//    mangled_ppc("?start@c_load_jpeg_from_buffer_async@@AAA?AW4e_async_pending_bool@@XZ");
//};

//private: void c_load_jpeg_from_buffer_async::switch_state(enum c_load_jpeg_from_buffer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_load_jpeg_from_buffer_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::update_acquire_allocate(void)
//{
//    mangled_ppc("?update_acquire_allocate@c_load_jpeg_from_buffer_async@@AAA?AW4e_async_pending_bool@@XZ");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_buffer_async::run(void)
//{
//    mangled_ppc("?run@c_load_jpeg_from_buffer_async@@AAA?AW4e_async_pending_bool@@XZ");
//};

//public: bool c_jpeg_decompressor::is_complete(void) const
//{
//    mangled_ppc("?is_complete@c_jpeg_decompressor@@QBA_NXZ");
//};

//public: c_load_jpeg_from_blf_chunk_async::c_decompress_state::c_decompress_state(struct s_file_reference *)
//{
//    mangled_ppc("??0c_decompress_state@c_load_jpeg_from_blf_chunk_async@@QAA@PAUs_file_reference@@@Z");
//};

//public: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::update(class c_custom_bitmap_key const &, class c_custom_bitmap_ptr *, class c_synchronized_int32*)
//{
//    mangled_ppc("?update@c_decompress_state@c_load_jpeg_from_blf_chunk_async@@QAA?AW4e_async_pending_bool@@ABVc_custom_bitmap_key@@PAVc_custom_bitmap_ptr@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::start(class c_custom_bitmap_key const &)
//{
//    mangled_ppc("?start@c_decompress_state@c_load_jpeg_from_blf_chunk_async@@AAA?AW4e_async_pending_bool@@ABVc_custom_bitmap_key@@@Z");
//};

//private: void c_load_jpeg_from_blf_chunk_async::c_decompress_state::switch_substate(enum c_load_jpeg_from_blf_chunk_async::c_decompress_state::e_substate)
//{
//    mangled_ppc("?switch_substate@c_decompress_state@c_load_jpeg_from_blf_chunk_async@@AAAXW4e_substate@12@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::update_acquire_allocate(class c_custom_bitmap_key const &, class c_custom_bitmap_ptr *)
//{
//    mangled_ppc("?update_acquire_allocate@c_decompress_state@c_load_jpeg_from_blf_chunk_async@@AAA?AW4e_async_pending_bool@@ABVc_custom_bitmap_key@@PAVc_custom_bitmap_ptr@@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::c_decompress_state::run(class c_custom_bitmap_ptr *)
//{
//    mangled_ppc("?run@c_decompress_state@c_load_jpeg_from_blf_chunk_async@@AAA?AW4e_async_pending_bool@@PAVc_custom_bitmap_ptr@@@Z");
//};

//public: static bool c_load_jpeg_from_blf_chunk_async::submit(class c_load_jpeg_from_blf_chunk_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_load_jpeg_from_blf_chunk_async@@SA_NPAV1@PAUs_file_reference@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_load_jpeg_from_blf_chunk_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: void * c_load_jpeg_from_blf_chunk_async::c_decompress_state::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_decompress_state@c_load_jpeg_from_blf_chunk_async@@QAAPAXI@Z");
//};

//public: c_load_jpeg_from_blf_chunk_async::c_decompress_state::~c_decompress_state(void)
//{
//    mangled_ppc("??1c_decompress_state@c_load_jpeg_from_blf_chunk_async@@QAA@XZ");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::open(struct s_file_reference *)
//{
//    mangled_ppc("?open@c_load_jpeg_from_blf_chunk_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: void c_load_jpeg_from_blf_chunk_async::switch_state(enum c_load_jpeg_from_blf_chunk_async::e_state)
//{
//    mangled_ppc("?switch_state@c_load_jpeg_from_blf_chunk_async@@AAAXW4e_state@1@@Z");
//};

//private: void c_load_jpeg_from_blf_chunk_async::seek(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?seek@c_load_jpeg_from_blf_chunk_async@@AAAXPAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_load_jpeg_from_blf_chunk_async::decompress(class c_synchronized_int32*)
//{
//    mangled_ppc("?decompress@c_load_jpeg_from_blf_chunk_async@@AAAXPAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_load_jpeg_from_blf_chunk_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_load_jpeg_from_blf_chunk_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: class c_load_jpeg_from_content_item_blf_chunk_async * c_load_jpeg_from_content_item_blf_chunk_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_load_jpeg_from_content_item_blf_chunk_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//class c_custom_bitmap_key fit_bitmap_key(class c_jpeg_decompressor &, class c_custom_bitmap_key const &)
//{
//    mangled_ppc("?fit_bitmap_key@@YA?AVc_custom_bitmap_key@@AAVc_jpeg_decompressor@@ABV1@@Z");
//};

//public: void c_jpeg_decompressor::set_scale(unsigned int)
//{
//    mangled_ppc("?set_scale@c_jpeg_decompressor@@QAAXI@Z");
//};

//public: class c_saved_game_file_seek_blf_chunk_async * c_opaque_data<class c_saved_game_file_seek_blf_chunk_async, 4, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_saved_game_file_seek_blf_chunk_async@@$03$03@@QAAPAVc_saved_game_file_seek_blf_chunk_async@@XZ");
//};

//public: class c_load_jpeg_from_blf_chunk_async::c_decompress_state * c_opaque_data<class c_load_jpeg_from_blf_chunk_async::c_decompress_state, 6464, 16>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_decompress_state@c_load_jpeg_from_blf_chunk_async@@$0BJEA@$0BA@@@QAAPAVc_decompress_state@c_load_jpeg_from_blf_chunk_async@@XZ");
//};

//class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> async_function_make<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>(class c_load_jpeg_from_buffer_async *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@PAVc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>(class c_load_jpeg_from_blf_chunk_async *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAVc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>::s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>(class c_load_jpeg_from_buffer_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@QAA@PAVc_load_jpeg_from_buffer_async@@@Z");
//};

//public: s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>(class c_load_jpeg_from_blf_chunk_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@PAVc_load_jpeg_from_blf_chunk_async@@@Z");
//};

//public: c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>::c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>(struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function1<enum e_async_pending_bool, struct s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function1@W4e_async_pending_bool@@U?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function1<class c_load_jpeg_from_buffer_async, class c_synchronized_int32*>::operator()(class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function1@Vc_load_jpeg_from_buffer_async@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function2<class c_load_jpeg_from_blf_chunk_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function2@Vc_load_jpeg_from_blf_chunk_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

