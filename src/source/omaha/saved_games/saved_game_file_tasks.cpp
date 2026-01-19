/* ---------- headers */

#include "omaha\saved_games\saved_game_file_tasks.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_saved_game_file_create_or_open_async::c_saved_game_file_create_or_open_async(bool);
// public: enum e_async_pending_bool c_saved_game_file_create_or_open_async::operator()(struct s_file_reference *, unsigned long, unsigned long *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::stat(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_create_or_open_async::switch_state(enum c_saved_game_file_create_or_open_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::create(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::open(struct s_file_reference *, unsigned long, unsigned long *, class c_synchronized_int32*);
// public: c_saved_game_file_read_buffer_async::c_saved_game_file_read_buffer_async(void *, unsigned int, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_read_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// public: static bool c_saved_game_file_load_buffer_async::submit(class c_saved_game_file_load_buffer_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_saved_game_file_load_buffer_async::c_saved_game_file_load_buffer_async(void *, unsigned int, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_load_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_load_buffer_async::switch_state(enum c_saved_game_file_load_buffer_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::read(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::close(struct s_file_reference *);
// public: c_saved_game_file_write_buffer_async::c_saved_game_file_write_buffer_async(void const *, unsigned int, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_write_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// public: c_saved_game_file_save_buffer_async::c_saved_game_file_save_buffer_async(void const *, unsigned int, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_save_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_save_buffer_async::switch_state(enum c_saved_game_file_save_buffer_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::write(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::close(struct s_file_reference *);
// public: c_saved_game_file_seek_blf_chunk_async::c_saved_game_file_seek_blf_chunk_async(bool);
// public: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::operator()(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::verify_start(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &);
// private: void c_saved_game_file_seek_blf_chunk_async::switch_state(enum c_saved_game_file_seek_blf_chunk_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::seek(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &);
// public: c_saved_game_file_write_utility_drive_buffer_async::c_saved_game_file_write_utility_drive_buffer_async(void const *, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_write_utility_drive_buffer_async::operator()(class c_aligned_stored_buffered_file_writer<4096> *, class c_synchronized_int32*);
// public: static bool c_saved_game_file_save_utility_drive_buffer_async::submit(class c_saved_game_file_save_utility_drive_buffer_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *);
// public: c_saved_game_file_save_utility_drive_buffer_async::c_saved_game_file_save_utility_drive_buffer_async(void const *, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_save_utility_drive_buffer_async::switch_state(enum c_saved_game_file_save_utility_drive_buffer_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::write(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::close(struct s_file_reference *);
// public: c_saved_game_file_copy_async::c_saved_game_file_copy_async(void *, unsigned int);
// public: enum e_async_pending_bool c_saved_game_file_copy_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::open_target(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_copy_async::switch_state(enum c_saved_game_file_copy_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::open_source(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::stat_source(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::read_source_block(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::write_target_block(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::close_source(struct s_file_reference *);
// private: enum e_async_pending_bool c_saved_game_file_copy_async::close_target(struct s_file_reference *);
// public: c_saved_game_file_copy_to_utility_drive_async::c_saved_game_file_copy_to_utility_drive_async(void);
// public: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::open_target(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_copy_to_utility_drive_async::switch_state(enum c_saved_game_file_copy_to_utility_drive_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::open_source(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::stat_source(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::read_source_block(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::write_target_block(class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::close_source(struct s_file_reference *);
// private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::close_target(struct s_file_reference *);
// public: c_saved_game_file_load_metadata_async::c_saved_game_file_load_metadata_async(void);
// public: enum e_async_pending_bool c_saved_game_file_load_metadata_async::operator()(struct s_file_reference *, struct s_content_item_metadata *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::open(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_load_metadata_async::switch_state(enum c_saved_game_file_load_metadata_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::read(struct s_file_reference *, struct s_content_item_metadata *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::close(struct s_file_reference *);
// public: c_saved_game_file_update_metadata_async::c_saved_game_file_update_metadata_async(void);
// public: enum e_async_pending_bool c_saved_game_file_update_metadata_async::operator()(struct s_file_reference *, struct s_content_item_metadata const *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::open(struct s_file_reference *, class c_synchronized_int32*);
// private: void c_saved_game_file_update_metadata_async::switch_state(enum c_saved_game_file_update_metadata_async::e_state);
// private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::read(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::seek(struct s_file_reference *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::write(struct s_file_reference *, struct s_content_item_metadata const *, class c_synchronized_int32*);
// private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::close(struct s_file_reference *);
// public: c_saved_game_file_save_buffer_to_content_item_async::c_saved_game_file_save_buffer_to_content_item_async(void *, unsigned int, unsigned int);
// public: class c_saved_game_file_save_buffer_to_content_item_async * c_saved_game_file_save_buffer_to_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// public: c_saved_game_file_load_buffer_from_content_item_async::c_saved_game_file_load_buffer_from_content_item_async(void *, unsigned int, unsigned int);
// public: class c_saved_game_file_load_buffer_from_content_item_async * c_saved_game_file_load_buffer_from_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// public: c_saved_game_file_load_metadata_from_content_item_async::c_saved_game_file_load_metadata_from_content_item_async(struct s_content_item_metadata *);
// public: class c_saved_game_file_load_metadata_from_content_item_async * c_saved_game_file_load_metadata_from_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// public: c_saved_game_file_update_metadata_in_content_item_async::c_saved_game_file_update_metadata_in_content_item_async(struct s_content_item_metadata const *);
// public: class c_saved_game_file_update_metadata_in_content_item_async * c_saved_game_file_update_metadata_in_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// public: c_saved_game_file_copy_to_content_item_async::c_saved_game_file_copy_to_content_item_async(void *, unsigned int, struct s_file_reference *);
// public: class c_saved_game_file_copy_to_content_item_async * c_saved_game_file_copy_to_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *);
// class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_load_buffer_async *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_save_utility_drive_buffer_async *, struct s_file_reference *, class c_synchronized_int32*);
// bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_load_buffer_async *);
// public: s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_save_utility_drive_buffer_async *);
// public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*);
// public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *);
// public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &);
// struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void);
// struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// public: enum e_async_pending_bool s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*);
// public: enum e_async_pending_bool s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*);

//public: c_saved_game_file_create_or_open_async::c_saved_game_file_create_or_open_async(bool)
//{
//    mangled_ppc("??0c_saved_game_file_create_or_open_async@@QAA@_N@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_create_or_open_async::operator()(struct s_file_reference *, unsigned long, unsigned long *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_create_or_open_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@KPAKPAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::stat(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?stat@c_saved_game_file_create_or_open_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_create_or_open_async::switch_state(enum c_saved_game_file_create_or_open_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_create_or_open_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::create(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?create@c_saved_game_file_create_or_open_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_create_or_open_async::open(struct s_file_reference *, unsigned long, unsigned long *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_create_or_open_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@KPAKPAVc_synchronized_int32@@@Z");
//};

//public: c_saved_game_file_read_buffer_async::c_saved_game_file_read_buffer_async(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_read_buffer_async@@QAA@PAXII@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_read_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_read_buffer_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool c_saved_game_file_load_buffer_async::submit(class c_saved_game_file_load_buffer_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_saved_game_file_load_buffer_async@@SA_NPAV1@PAUs_file_reference@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_saved_game_file_load_buffer_async::c_saved_game_file_load_buffer_async(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_load_buffer_async@@QAA@PAXII@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_load_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_load_buffer_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_load_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_load_buffer_async::switch_state(enum c_saved_game_file_load_buffer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_load_buffer_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::read(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?read@c_saved_game_file_load_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_buffer_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_saved_game_file_load_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_write_buffer_async::c_saved_game_file_write_buffer_async(void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_write_buffer_async@@QAA@PBXII@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_write_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_write_buffer_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: c_saved_game_file_save_buffer_async::c_saved_game_file_save_buffer_async(void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_save_buffer_async@@QAA@PBXII@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_save_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_save_buffer_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_save_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_save_buffer_async::switch_state(enum c_saved_game_file_save_buffer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_save_buffer_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::write(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?write@c_saved_game_file_save_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_buffer_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_saved_game_file_save_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_seek_blf_chunk_async::c_saved_game_file_seek_blf_chunk_async(bool)
//{
//    mangled_ppc("??0c_saved_game_file_seek_blf_chunk_async@@QAA@_N@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::operator()(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_seek_blf_chunk_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@ABUs_parameters@0@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::verify_start(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &)
//{
//    mangled_ppc("?verify_start@c_saved_game_file_seek_blf_chunk_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@ABUs_parameters@1@@Z");
//};

//private: void c_saved_game_file_seek_blf_chunk_async::switch_state(enum c_saved_game_file_seek_blf_chunk_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_seek_blf_chunk_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_seek_blf_chunk_async::seek(struct s_file_reference *, struct c_saved_game_file_seek_blf_chunk_async::s_parameters const &)
//{
//    mangled_ppc("?seek@c_saved_game_file_seek_blf_chunk_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@ABUs_parameters@1@@Z");
//};

//public: c_saved_game_file_write_utility_drive_buffer_async::c_saved_game_file_write_utility_drive_buffer_async(void const *, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_write_utility_drive_buffer_async@@QAA@PBXI@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_write_utility_drive_buffer_async::operator()(class c_aligned_stored_buffered_file_writer<4096> *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_write_utility_drive_buffer_async@@QAA?AW4e_async_pending_bool@@PAV?$c_aligned_stored_buffered_file_writer@$0BAAA@@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool c_saved_game_file_save_utility_drive_buffer_async::submit(class c_saved_game_file_save_utility_drive_buffer_async *, struct s_file_reference *, class c_synchronized_int32*, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("?submit@c_saved_game_file_save_utility_drive_buffer_async@@SA_NPAV1@PAUs_file_reference@@PAVc_synchronized_int32@@PAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_saved_game_file_save_utility_drive_buffer_async::c_saved_game_file_save_utility_drive_buffer_async(void const *, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_save_utility_drive_buffer_async@@QAA@PBXI@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_save_utility_drive_buffer_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::open(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_save_utility_drive_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_save_utility_drive_buffer_async::switch_state(enum c_saved_game_file_save_utility_drive_buffer_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_save_utility_drive_buffer_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::write(class c_synchronized_int32*)
//{
//    mangled_ppc("?write@c_saved_game_file_save_utility_drive_buffer_async@@AAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_save_utility_drive_buffer_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_saved_game_file_save_utility_drive_buffer_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_copy_async::c_saved_game_file_copy_async(void *, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_copy_async@@QAA@PAXI@Z");
//};

//public: enum e_async_pending_bool c_saved_game_file_copy_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_copy_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::open_target(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open_target@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_copy_async::switch_state(enum c_saved_game_file_copy_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_copy_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::open_source(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open_source@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::stat_source(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?stat_source@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::read_source_block(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?read_source_block@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::write_target_block(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?write_target_block@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::close_source(struct s_file_reference *)
//{
//    mangled_ppc("?close_source@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_async::close_target(struct s_file_reference *)
//{
//    mangled_ppc("?close_target@c_saved_game_file_copy_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_copy_to_utility_drive_async::c_saved_game_file_copy_to_utility_drive_async(void)
//{
//    mangled_ppc("??0c_saved_game_file_copy_to_utility_drive_async@@QAA@XZ");
//};

//public: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::operator()(struct s_file_reference *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_copy_to_utility_drive_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@0PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::open_target(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open_target@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_copy_to_utility_drive_async::switch_state(enum c_saved_game_file_copy_to_utility_drive_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_copy_to_utility_drive_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::open_source(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open_source@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::stat_source(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?stat_source@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::read_source_block(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?read_source_block@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::write_target_block(class c_synchronized_int32*)
//{
//    mangled_ppc("?write_target_block@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::close_source(struct s_file_reference *)
//{
//    mangled_ppc("?close_source@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_copy_to_utility_drive_async::close_target(struct s_file_reference *)
//{
//    mangled_ppc("?close_target@c_saved_game_file_copy_to_utility_drive_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_load_metadata_async::c_saved_game_file_load_metadata_async(void)
//{
//    mangled_ppc("??0c_saved_game_file_load_metadata_async@@QAA@XZ");
//};

//public: enum e_async_pending_bool c_saved_game_file_load_metadata_async::operator()(struct s_file_reference *, struct s_content_item_metadata *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_load_metadata_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAUs_content_item_metadata@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::open(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_load_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_load_metadata_async::switch_state(enum c_saved_game_file_load_metadata_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_load_metadata_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::read(struct s_file_reference *, struct s_content_item_metadata *, class c_synchronized_int32*)
//{
//    mangled_ppc("?read@c_saved_game_file_load_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAUs_content_item_metadata@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_load_metadata_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_saved_game_file_load_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_update_metadata_async::c_saved_game_file_update_metadata_async(void)
//{
//    mangled_ppc("??0c_saved_game_file_update_metadata_async@@QAA@XZ");
//};

//public: enum e_async_pending_bool c_saved_game_file_update_metadata_async::operator()(struct s_file_reference *, struct s_content_item_metadata const *, class c_synchronized_int32*)
//{
//    mangled_ppc("??Rc_saved_game_file_update_metadata_async@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PBUs_content_item_metadata@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::open(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?open@c_saved_game_file_update_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: void c_saved_game_file_update_metadata_async::switch_state(enum c_saved_game_file_update_metadata_async::e_state)
//{
//    mangled_ppc("?switch_state@c_saved_game_file_update_metadata_async@@AAAXW4e_state@1@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::read(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?read@c_saved_game_file_update_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::seek(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("?seek@c_saved_game_file_update_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::write(struct s_file_reference *, struct s_content_item_metadata const *, class c_synchronized_int32*)
//{
//    mangled_ppc("?write@c_saved_game_file_update_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@PBUs_content_item_metadata@@PAVc_synchronized_int32@@@Z");
//};

//private: enum e_async_pending_bool c_saved_game_file_update_metadata_async::close(struct s_file_reference *)
//{
//    mangled_ppc("?close@c_saved_game_file_update_metadata_async@@AAA?AW4e_async_pending_bool@@PAUs_file_reference@@@Z");
//};

//public: c_saved_game_file_save_buffer_to_content_item_async::c_saved_game_file_save_buffer_to_content_item_async(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_save_buffer_to_content_item_async@@QAA@PAXII@Z");
//};

//public: class c_saved_game_file_save_buffer_to_content_item_async * c_saved_game_file_save_buffer_to_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_saved_game_file_save_buffer_to_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//public: c_saved_game_file_load_buffer_from_content_item_async::c_saved_game_file_load_buffer_from_content_item_async(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("??0c_saved_game_file_load_buffer_from_content_item_async@@QAA@PAXII@Z");
//};

//public: class c_saved_game_file_load_buffer_from_content_item_async * c_saved_game_file_load_buffer_from_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_saved_game_file_load_buffer_from_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//public: c_saved_game_file_load_metadata_from_content_item_async::c_saved_game_file_load_metadata_from_content_item_async(struct s_content_item_metadata *)
//{
//    mangled_ppc("??0c_saved_game_file_load_metadata_from_content_item_async@@QAA@PAUs_content_item_metadata@@@Z");
//};

//public: class c_saved_game_file_load_metadata_from_content_item_async * c_saved_game_file_load_metadata_from_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_saved_game_file_load_metadata_from_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//public: c_saved_game_file_update_metadata_in_content_item_async::c_saved_game_file_update_metadata_in_content_item_async(struct s_content_item_metadata const *)
//{
//    mangled_ppc("??0c_saved_game_file_update_metadata_in_content_item_async@@QAA@PBUs_content_item_metadata@@@Z");
//};

//public: class c_saved_game_file_update_metadata_in_content_item_async * c_saved_game_file_update_metadata_in_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_saved_game_file_update_metadata_in_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//public: c_saved_game_file_copy_to_content_item_async::c_saved_game_file_copy_to_content_item_async(void *, unsigned int, struct s_file_reference *)
//{
//    mangled_ppc("??0c_saved_game_file_copy_to_content_item_async@@QAA@PAXIPAUs_file_reference@@@Z");
//};

//public: class c_saved_game_file_copy_to_content_item_async * c_saved_game_file_copy_to_content_item_async::initialize(struct s_content_item_mini_metadata const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?initialize@c_saved_game_file_copy_to_content_item_async@@QAAPAV1@PBUs_content_item_mini_metadata@@PAUs_opened_content_item@@@Z");
//};

//class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_load_buffer_async *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAVc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> async_function_make<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_save_utility_drive_buffer_async *, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??$async_function_make@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@YA?AV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAVc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//bool async_function_submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$async_function_submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@YA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_load_buffer_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@PAVc_saved_game_file_load_buffer_async@@@Z");
//};

//public: s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>(class c_saved_game_file_save_utility_drive_buffer_async *)
//{
//    mangled_ppc("??0?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@PAVc_saved_game_file_save_utility_drive_buffer_async@@@Z");
//};

//public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>(struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??0?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: static bool s_async_task_functions::submit<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &, long, long, class c_async_task<enum e_async_pending_bool> *)
//{
//    mangled_ppc("??$submit@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@s_async_task_functions@@SA_NABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@JJPAV?$c_async_task@W4e_async_pending_bool@@@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: static enum e_async_completion s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::callback(void *)
//{
//    mangled_ppc("?callback@?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@SA?AW4e_async_completion@@PAX@Z");
//};

//public: s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >::s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> >(class c_async_task<enum e_async_pending_bool> *, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> const &)
//{
//    mangled_ppc("??0?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@QAA@PAV?$c_async_task@W4e_async_pending_bool@@@@ABV?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*>::operator()(void)
//{
//    mangled_ppc("??R?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@XZ");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > >(long, struct s_async_callback_context<enum e_async_pending_bool, class c_async_function2<enum e_async_pending_bool, struct s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>, struct s_file_reference *, class c_synchronized_int32*> > const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@U?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@@@YA?AUs_async_task_id@@JPBU?$s_async_callback_context@W4e_async_pending_bool@@V?$c_async_function2@W4e_async_pending_bool@@U?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@PAUs_file_reference@@PAVc_synchronized_int32@@@@@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function2<class c_saved_game_file_load_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function2@Vc_saved_game_file_load_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

//public: enum e_async_pending_bool s_async_indirect_function2<class c_saved_game_file_save_utility_drive_buffer_async, struct s_file_reference *, class c_synchronized_int32*>::operator()(struct s_file_reference *, class c_synchronized_int32*)
//{
//    mangled_ppc("??R?$s_async_indirect_function2@Vc_saved_game_file_save_utility_drive_buffer_async@@PAUs_file_reference@@PAVc_synchronized_int32@@@@QAA?AW4e_async_pending_bool@@PAUs_file_reference@@PAVc_synchronized_int32@@@Z");
//};

