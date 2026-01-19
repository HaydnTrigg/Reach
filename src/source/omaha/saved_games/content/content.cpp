/* ---------- headers */

#include "omaha\saved_games\content\content.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_content_creation_flag const c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@2W4e_content_creation_flag@@B"
// public: static enum e_tracked_open_content_item_flag const c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@2W4e_tracked_open_content_item_flag@@B"
// public: static long const s_tracked_open_content_item::k_refcount_open_in_progress; // "?k_refcount_open_in_progress@s_tracked_open_content_item@@2JB"
// public: static long const s_tracked_open_content_item::k_refcount_close_in_progress; // "?k_refcount_close_in_progress@s_tracked_open_content_item@@2JB"

// void content_initialize(void);
// void content_dispose(void);
// void content_update(void);
// enum e_content_controller_state content_get_controller_state(enum e_controller_index);
// bool content_submit_task(enum e_controller_index, class c_content_task *const);
// bool content_continue_enumerating_items(enum e_controller_index, class c_content_enumerate_items_task *const);
// bool content_continue_enumerating_items(enum e_controller_index, class c_content_enumerate_cross_title_items_task *const);
// bool content_close_item(struct s_content_item_platform_handle const *const);
// bool content_item_is_open(struct s_content_item_platform_handle const *);
// bool content_item_is_still_valid(struct s_content_item_platform_handle const *);
// long content_get_open_item_count(void);
// void content_log_open_items(void);
// void content_build_directory_reference(struct s_opened_content_item const *const, struct s_file_reference *);
// void content_build_filename(struct s_content_item_platform_handle const *, class s_static_string<256> const *const, class s_static_string<256> *);
// void content_build_file_reference(struct s_opened_content_item const *const, class s_static_string<256> const *const, struct s_file_reference *);
// public: s_content_item_platform_handle::s_content_item_platform_handle(void);
// public: bool s_content_item_platform_handle::is_valid(void) const;
// public: void s_content_item_platform_handle::get_title(class c_static_wchar_string<128> *const) const;
// public: bool s_content_item_platform_handle::operator==(struct s_content_item_platform_handle const &) const;
// class c_static_string<256> content_item_platform_handle_to_string(struct s_content_item_platform_handle const &);
// public: bool c_content_task::in_progress(void) const;
// public: bool c_content_task::is_complete(void) const;
// public: bool c_content_task::is_complete_and_succeeded(void) const;
// public: bool c_content_task::is_complete_and_failed(void) const;
// public: void c_content_task::block_until_complete(void);
// public: enum e_controller_index c_content_task::get_controller_index(void) const;
// public: c_content_enumerate_items_task::c_content_enumerate_items_task(void);
// merged_83195AE0;
// public: virtual c_content_enumerate_items_task::~c_content_enumerate_items_task(void);
// public: void c_content_enumerate_items_task::initialize(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, unsigned char *const, long);
// public: void c_content_enumerate_items_task::dispose(void);
// public: struct c_content_enumerate_items_task::s_results const * c_content_enumerate_items_task::get_results(void) const;
// public: virtual void c_enumeration_callback::complete(bool, void *const);
// public: c_content_enumerate_cross_title_items_task::c_content_enumerate_cross_title_items_task(void);
// merged_83195E50;
// public: virtual c_content_enumerate_cross_title_items_task::~c_content_enumerate_cross_title_items_task(void);
// public: void c_content_enumerate_cross_title_items_task::initialize(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, unsigned char *const, long);
// public: void c_content_enumerate_cross_title_items_task::dispose(void);
// public: struct c_content_enumerate_cross_title_items_task::s_results const * c_content_enumerate_cross_title_items_task::get_results(void) const;
// public: virtual void c_cross_title_enumeration_callback::complete(bool, void *const);
// public: c_content_open_items_task::c_content_open_items_task(void);
// merged_831961A0;
// public: virtual c_content_open_items_task::~c_content_open_items_task(void);
// public: void c_content_open_items_task::initialize(struct c_content_open_items_task::s_input const *, long, unsigned char *const, long);
// public: struct c_content_open_items_task::s_results const * c_content_open_items_task::get_results(void) const;
// public: virtual void c_open_callback::complete(bool, void *const);
// public: c_content_open_cross_title_items_task::c_content_open_cross_title_items_task(void);
// merged_83196490;
// public: virtual c_content_open_cross_title_items_task::~c_content_open_cross_title_items_task(void);
// public: void c_content_open_cross_title_items_task::initialize(struct s_content_cross_title_enumeration_result const *, long, unsigned char *const, long);
// public: struct c_content_open_cross_title_items_task::s_results const * c_content_open_cross_title_items_task::get_results(void) const;
// public: virtual void c_open_cross_title_callback::complete(bool, void *const);
// public: c_content_flush_items_task::c_content_flush_items_task(void);
// merged_83196770;
// public: virtual c_content_flush_items_task::~c_content_flush_items_task(void);
// public: void c_content_flush_items_task::initialize(struct s_content_item_platform_handle const *, long);
// public: virtual void c_flush_callback::complete(bool, void *const);
// public: c_content_close_items_task::c_content_close_items_task(void);
// merged_831969C8;
// public: virtual c_content_close_items_task::~c_content_close_items_task(void);
// public: void c_content_close_items_task::initialize(struct s_content_item_platform_handle const *const, long);
// public: virtual void c_close_callback::complete(bool, void *const);
// public: c_content_create_item_task::c_content_create_item_task(void);
// merged_83196C20;
// public: virtual c_content_create_item_task::~c_content_create_item_task(void);
// public: void c_content_create_item_task::initialize(struct s_content_item_mini_metadata_input const *, class c_static_wchar_string<128> const *, long);
// public: struct c_content_create_item_task::s_result const * c_content_create_item_task::get_result(void) const;
// public: c_content_delete_item_task::c_content_delete_item_task(void);
// merged_83196E98;
// public: virtual c_content_delete_item_task::~c_content_delete_item_task(void);
// public: void c_content_delete_item_task::initialize(struct s_content_item_platform_handle const *);
// public: virtual void c_deletion_callback::complete(bool, void *const);
// public: c_content_globals_accessor::c_content_globals_accessor(void);
// public: c_content_globals_accessor::~c_content_globals_accessor(void);
// public: struct s_content_globals const * c_content_globals_accessor::operator->(void) const;
// public: struct s_content_globals * c_content_globals_accessor::operator->(void);
// void content_tracker_delete_item(long);
// long content_tracker_find_open_item(struct s_content_item_platform_handle const *const);
// enum e_async_completion content_open_items_task_async_work_callback(void *);
// enum e_open_item_tracker_result content_tracker_consider_open_attempt(enum e_controller_index, struct s_content_item_platform_handle const *, struct s_opened_content_item *);
// void content_tracker_handle_open_completion(enum e_controller_index, struct s_content_item_platform_handle const *, struct s_opened_content_item const *);
// enum e_async_completion content_open_cross_title_items_task_async_work_callback(void *);
// enum e_async_completion content_flush_items_task_async_work_callback(void *);
// enum e_async_completion content_close_items_task_async_work_callback(void *);
// enum e_open_item_tracker_result content_tracker_consider_close_attempt(struct s_content_item_platform_handle const *);
// void content_tracker_handle_close_completion(struct s_content_item_platform_handle const *const);
// void content_tracker_handle_close_completion_by_index(long);
// enum e_async_completion content_create_item_task_async_work_callback(void *);
// void content_build_container_full_path_from_xcontent(class s_static_string<256> *const, struct _XCONTENT_DATA const *const, bool);
// void content_build_directory(struct s_opened_content_item const *const, class s_static_string<256> *);
// void content_async_task_support_set_overlapped_complete(struct s_async_task_support *, bool);
// void content_initialize_mini_metadata_for_creation(struct s_content_item_mini_metadata *const);
// public: c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>(void);
// public: c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::~c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>(void);
// public: struct s_content_enumerate_items_private_data * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::destruct(void);
// public: struct s_content_enumerate_items_private_data * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get(void);
// public: struct s_content_enumerate_items_private_data const * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>(void);
// public: c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::~c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>(void);
// public: struct s_content_enumerate_cross_title_items_private_data * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::destruct(void);
// public: struct s_content_enumerate_cross_title_items_private_data * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get(void);
// public: struct s_content_enumerate_cross_title_items_private_data const * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>(void);
// public: c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::~c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>(void);
// public: struct s_content_open_items_private_data * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::destruct(void);
// public: struct s_content_open_items_private_data * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::get(void);
// public: struct s_content_open_items_private_data const * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>(void);
// public: c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::~c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>(void);
// public: struct s_content_open_cross_title_items_private_data * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::destruct(void);
// public: struct s_content_open_cross_title_items_private_data * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get(void);
// public: struct s_content_open_cross_title_items_private_data const * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>(void);
// public: c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::~c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>(void);
// public: struct s_content_flush_items_private_data * c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::destruct(void);
// public: struct s_content_flush_items_private_data * c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::get(void);
// public: bool c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>(void);
// public: c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::~c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>(void);
// public: struct s_content_close_items_private_data * c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::destruct(void);
// public: struct s_content_close_items_private_data * c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::get(void);
// public: bool c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>(void);
// public: c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::~c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>(void);
// public: struct s_content_create_item_private_data * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::construct(void);
// public: void c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::destruct(void);
// public: struct s_content_create_item_private_data * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get(void);
// public: struct s_content_create_item_private_data const * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get_const(void) const;
// public: bool c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::alive(void) const;
// public: c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>(void);
// public: c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::~c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>(void);
// public: struct s_content_delete_item_private_data * c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::construct(void);
// public: void c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::destruct(void);
// public: struct s_content_delete_item_private_data * c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::get(void);
// public: bool c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::alive(void) const;
// public: void c_data_iterator<struct s_tracked_open_content_item>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_tracked_open_content_item>::next(void);
// public: struct s_tracked_open_content_item * c_data_iterator<struct s_tracked_open_content_item>::get_datum(void) const;
// public: long c_data_iterator<struct s_tracked_open_content_item>::get_index(void) const;
// public: s_content_enumerate_items_private_data::s_content_enumerate_items_private_data(void);
// public: void * s_content_enumerate_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_enumerate_cross_title_items_private_data::s_content_enumerate_cross_title_items_private_data(void);
// public: void * s_content_enumerate_cross_title_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_open_items_private_data::s_content_open_items_private_data(void);
// public: void * s_content_open_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_open_cross_title_items_private_data::s_content_open_cross_title_items_private_data(void);
// public: void * s_content_open_cross_title_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_flush_items_private_data::s_content_flush_items_private_data(void);
// public: void * s_content_flush_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_close_items_private_data::s_content_close_items_private_data(void);
// public: void * s_content_close_items_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_create_item_private_data::s_content_create_item_private_data(void);
// public: void * s_content_create_item_private_data::`scalar deleting destructor'(unsigned int);
// public: s_content_delete_item_private_data::s_content_delete_item_private_data(void);
// public: void * s_content_delete_item_private_data::`scalar deleting destructor'(unsigned int);
// public: c_content_enumerate_overlapped_task::c_content_enumerate_overlapped_task(void);
// public: virtual char const * c_content_enumerate_overlapped_task::get_context_string(void) const;
// public: s_content_enumerate_items_private_data::~s_content_enumerate_items_private_data(void);
// public: virtual c_content_enumerate_overlapped_task::~c_content_enumerate_overlapped_task(void);
// public: c_content_enumerate_cross_title_overlapped_task::c_content_enumerate_cross_title_overlapped_task(void);
// public: virtual char const * c_content_enumerate_cross_title_overlapped_task::get_context_string(void) const;
// public: s_content_enumerate_cross_title_items_private_data::~s_content_enumerate_cross_title_items_private_data(void);
// public: virtual c_content_enumerate_cross_title_overlapped_task::~c_content_enumerate_cross_title_overlapped_task(void);
// public: c_content_single_item_overlapped_task::c_content_single_item_overlapped_task(void);
// public: s_async_task_support::s_async_task_support(void);
// public: s_content_open_items_private_data::~s_content_open_items_private_data(void);
// public: virtual c_content_single_item_overlapped_task::~c_content_single_item_overlapped_task(void);
// public: s_async_task_support::~s_async_task_support(void);
// public: s_content_open_cross_title_items_private_data::~s_content_open_cross_title_items_private_data(void);
// public: s_content_flush_items_private_data::~s_content_flush_items_private_data(void);
// public: s_content_close_items_private_data::~s_content_close_items_private_data(void);
// public: c_content_create_item_task::s_result::s_result(void);
// public: s_content_create_item_private_data::~s_content_create_item_private_data(void);
// public: s_content_delete_item_private_data::~s_content_delete_item_private_data(void);
// merged_8319B760;
// public: virtual c_content_overlapped_task::~c_content_overlapped_task(void);
// merged_8319B7D0;
// merged_8319B818;
// public: void c_flags_no_init<enum s_opened_content_item::e_opened_content_item_flag, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum s_opened_content_item::e_opened_content_item_flag, bool);
// public: struct s_content_enumerate_items_private_data * c_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get(void);
// public: struct s_content_enumerate_cross_title_items_private_data * c_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get(void);
// public: struct s_content_open_items_private_data * c_opaque_data<struct s_content_open_items_private_data, 668, 4>::get(void);
// public: struct s_content_open_cross_title_items_private_data * c_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get(void);
// public: struct s_content_flush_items_private_data * c_opaque_data<struct s_content_flush_items_private_data, 648, 4>::get(void);
// public: struct s_content_close_items_private_data * c_opaque_data<struct s_content_close_items_private_data, 648, 4>::get(void);
// public: struct s_content_create_item_private_data * c_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get(void);
// public: struct s_content_delete_item_private_data * c_opaque_data<struct s_content_delete_item_private_data, 932, 4>::get(void);
// public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_content_creation_flag, bool);
// public: void c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_tracked_open_content_item_flag) const;
// public: void c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_tracked_open_content_item_flag, bool);
// public: c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: char const * s_static_string<43>::operator char const *(void) const;
// public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_content_creation_flag);
// private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_creation_flag);
// public: static bool c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_tracked_open_content_item_flag);
// private: static unsigned char c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_tracked_open_content_item_flag);
// private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_creation_flag);
// public: c_content_globals_container::c_content_globals_container(void);
// public: s_content_globals::s_content_globals(void);
// public: s_content_globals_non_threadsafe::s_content_globals_non_threadsafe(void);
// public: c_enumeration_callback::c_enumeration_callback(void);
// public: c_cross_title_enumeration_callback::c_cross_title_enumeration_callback(void);
// public: c_open_callback::c_open_callback(void);
// public: c_open_cross_title_callback::c_open_cross_title_callback(void);
// public: c_flush_callback::c_flush_callback(void);
// public: c_close_callback::c_close_callback(void);
// public: c_deletion_callback::c_deletion_callback(void);
// public: c_content_overlapped_task_callback_interface::c_content_overlapped_task_callback_interface(void);
// public: c_content_globals_container::~c_content_globals_container(void);
// public: s_content_globals::~s_content_globals(void);
// void content_globals::`dynamic atexit destructor'(void);
// void `void content_initialize_mini_metadata_for_creation(struct s_content_item_mini_metadata *const)'::`2'::session_salt::`dynamic atexit destructor'(void);

//void content_initialize(void)
//{
//    mangled_ppc("?content_initialize@@YAXXZ");
//};

//void content_dispose(void)
//{
//    mangled_ppc("?content_dispose@@YAXXZ");
//};

//void content_update(void)
//{
//    mangled_ppc("?content_update@@YAXXZ");
//};

//enum e_content_controller_state content_get_controller_state(enum e_controller_index)
//{
//    mangled_ppc("?content_get_controller_state@@YA?AW4e_content_controller_state@@W4e_controller_index@@@Z");
//};

//bool content_submit_task(enum e_controller_index, class c_content_task *const)
//{
//    mangled_ppc("?content_submit_task@@YA_NW4e_controller_index@@QAVc_content_task@@@Z");
//};

//bool content_continue_enumerating_items(enum e_controller_index, class c_content_enumerate_items_task *const)
//{
//    mangled_ppc("?content_continue_enumerating_items@@YA_NW4e_controller_index@@QAVc_content_enumerate_items_task@@@Z");
//};

//bool content_continue_enumerating_items(enum e_controller_index, class c_content_enumerate_cross_title_items_task *const)
//{
//    mangled_ppc("?content_continue_enumerating_items@@YA_NW4e_controller_index@@QAVc_content_enumerate_cross_title_items_task@@@Z");
//};

//bool content_close_item(struct s_content_item_platform_handle const *const)
//{
//    mangled_ppc("?content_close_item@@YA_NQBUs_content_item_platform_handle@@@Z");
//};

//bool content_item_is_open(struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?content_item_is_open@@YA_NPBUs_content_item_platform_handle@@@Z");
//};

//bool content_item_is_still_valid(struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?content_item_is_still_valid@@YA_NPBUs_content_item_platform_handle@@@Z");
//};

//long content_get_open_item_count(void)
//{
//    mangled_ppc("?content_get_open_item_count@@YAJXZ");
//};

//void content_log_open_items(void)
//{
//    mangled_ppc("?content_log_open_items@@YAXXZ");
//};

//void content_build_directory_reference(struct s_opened_content_item const *const, struct s_file_reference *)
//{
//    mangled_ppc("?content_build_directory_reference@@YAXQBUs_opened_content_item@@PAUs_file_reference@@@Z");
//};

//void content_build_filename(struct s_content_item_platform_handle const *, class s_static_string<256> const *const, class s_static_string<256> *)
//{
//    mangled_ppc("?content_build_filename@@YAXPBUs_content_item_platform_handle@@QBV?$s_static_string@$0BAA@@@PAV2@@Z");
//};

//void content_build_file_reference(struct s_opened_content_item const *const, class s_static_string<256> const *const, struct s_file_reference *)
//{
//    mangled_ppc("?content_build_file_reference@@YAXQBUs_opened_content_item@@QBV?$s_static_string@$0BAA@@@PAUs_file_reference@@@Z");
//};

//public: s_content_item_platform_handle::s_content_item_platform_handle(void)
//{
//    mangled_ppc("??0s_content_item_platform_handle@@QAA@XZ");
//};

//public: bool s_content_item_platform_handle::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_content_item_platform_handle@@QBA_NXZ");
//};

//public: void s_content_item_platform_handle::get_title(class c_static_wchar_string<128> *const) const
//{
//    mangled_ppc("?get_title@s_content_item_platform_handle@@QBAXQAV?$c_static_wchar_string@$0IA@@@@Z");
//};

//public: bool s_content_item_platform_handle::operator==(struct s_content_item_platform_handle const &) const
//{
//    mangled_ppc("??8s_content_item_platform_handle@@QBA_NABU0@@Z");
//};

//class c_static_string<256> content_item_platform_handle_to_string(struct s_content_item_platform_handle const &)
//{
//    mangled_ppc("?content_item_platform_handle_to_string@@YA?AV?$c_static_string@$0BAA@@@ABUs_content_item_platform_handle@@@Z");
//};

//public: bool c_content_task::in_progress(void) const
//{
//    mangled_ppc("?in_progress@c_content_task@@QBA_NXZ");
//};

//public: bool c_content_task::is_complete(void) const
//{
//    mangled_ppc("?is_complete@c_content_task@@QBA_NXZ");
//};

//public: bool c_content_task::is_complete_and_succeeded(void) const
//{
//    mangled_ppc("?is_complete_and_succeeded@c_content_task@@QBA_NXZ");
//};

//public: bool c_content_task::is_complete_and_failed(void) const
//{
//    mangled_ppc("?is_complete_and_failed@c_content_task@@QBA_NXZ");
//};

//public: void c_content_task::block_until_complete(void)
//{
//    mangled_ppc("?block_until_complete@c_content_task@@QAAXXZ");
//};

//public: enum e_controller_index c_content_task::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_content_task@@QBA?AW4e_controller_index@@XZ");
//};

//public: c_content_enumerate_items_task::c_content_enumerate_items_task(void)
//{
//    mangled_ppc("??0c_content_enumerate_items_task@@QAA@XZ");
//};

//merged_83195AE0
//{
//    mangled_ppc("merged_83195AE0");
//};

//public: virtual c_content_enumerate_items_task::~c_content_enumerate_items_task(void)
//{
//    mangled_ppc("??1c_content_enumerate_items_task@@UAA@XZ");
//};

//public: void c_content_enumerate_items_task::initialize(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, unsigned char *const, long)
//{
//    mangled_ppc("?initialize@c_content_enumerate_items_task@@QAAXV?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAEJ@Z");
//};

//public: void c_content_enumerate_items_task::dispose(void)
//{
//    mangled_ppc("?dispose@c_content_enumerate_items_task@@QAAXXZ");
//};

//public: struct c_content_enumerate_items_task::s_results const * c_content_enumerate_items_task::get_results(void) const
//{
//    mangled_ppc("?get_results@c_content_enumerate_items_task@@QBAPBUs_results@1@XZ");
//};

//public: virtual void c_enumeration_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_enumeration_callback@@UAAX_NQAX@Z");
//};

//public: c_content_enumerate_cross_title_items_task::c_content_enumerate_cross_title_items_task(void)
//{
//    mangled_ppc("??0c_content_enumerate_cross_title_items_task@@QAA@XZ");
//};

//merged_83195E50
//{
//    mangled_ppc("merged_83195E50");
//};

//public: virtual c_content_enumerate_cross_title_items_task::~c_content_enumerate_cross_title_items_task(void)
//{
//    mangled_ppc("??1c_content_enumerate_cross_title_items_task@@UAA@XZ");
//};

//public: void c_content_enumerate_cross_title_items_task::initialize(class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, unsigned char *const, long)
//{
//    mangled_ppc("?initialize@c_content_enumerate_cross_title_items_task@@QAAXV?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAEJ@Z");
//};

//public: void c_content_enumerate_cross_title_items_task::dispose(void)
//{
//    mangled_ppc("?dispose@c_content_enumerate_cross_title_items_task@@QAAXXZ");
//};

//public: struct c_content_enumerate_cross_title_items_task::s_results const * c_content_enumerate_cross_title_items_task::get_results(void) const
//{
//    mangled_ppc("?get_results@c_content_enumerate_cross_title_items_task@@QBAPBUs_results@1@XZ");
//};

//public: virtual void c_cross_title_enumeration_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_cross_title_enumeration_callback@@UAAX_NQAX@Z");
//};

//public: c_content_open_items_task::c_content_open_items_task(void)
//{
//    mangled_ppc("??0c_content_open_items_task@@QAA@XZ");
//};

//merged_831961A0
//{
//    mangled_ppc("merged_831961A0");
//};

//public: virtual c_content_open_items_task::~c_content_open_items_task(void)
//{
//    mangled_ppc("??1c_content_open_items_task@@UAA@XZ");
//};

//public: void c_content_open_items_task::initialize(struct c_content_open_items_task::s_input const *, long, unsigned char *const, long)
//{
//    mangled_ppc("?initialize@c_content_open_items_task@@QAAXPBUs_input@1@JQAEJ@Z");
//};

//public: struct c_content_open_items_task::s_results const * c_content_open_items_task::get_results(void) const
//{
//    mangled_ppc("?get_results@c_content_open_items_task@@QBAPBUs_results@1@XZ");
//};

//public: virtual void c_open_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_open_callback@@UAAX_NQAX@Z");
//};

//public: c_content_open_cross_title_items_task::c_content_open_cross_title_items_task(void)
//{
//    mangled_ppc("??0c_content_open_cross_title_items_task@@QAA@XZ");
//};

//merged_83196490
//{
//    mangled_ppc("merged_83196490");
//};

//public: virtual c_content_open_cross_title_items_task::~c_content_open_cross_title_items_task(void)
//{
//    mangled_ppc("??1c_content_open_cross_title_items_task@@UAA@XZ");
//};

//public: void c_content_open_cross_title_items_task::initialize(struct s_content_cross_title_enumeration_result const *, long, unsigned char *const, long)
//{
//    mangled_ppc("?initialize@c_content_open_cross_title_items_task@@QAAXPBUs_content_cross_title_enumeration_result@@JQAEJ@Z");
//};

//public: struct c_content_open_cross_title_items_task::s_results const * c_content_open_cross_title_items_task::get_results(void) const
//{
//    mangled_ppc("?get_results@c_content_open_cross_title_items_task@@QBAPBUs_results@1@XZ");
//};

//public: virtual void c_open_cross_title_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_open_cross_title_callback@@UAAX_NQAX@Z");
//};

//public: c_content_flush_items_task::c_content_flush_items_task(void)
//{
//    mangled_ppc("??0c_content_flush_items_task@@QAA@XZ");
//};

//merged_83196770
//{
//    mangled_ppc("merged_83196770");
//};

//public: virtual c_content_flush_items_task::~c_content_flush_items_task(void)
//{
//    mangled_ppc("??1c_content_flush_items_task@@UAA@XZ");
//};

//public: void c_content_flush_items_task::initialize(struct s_content_item_platform_handle const *, long)
//{
//    mangled_ppc("?initialize@c_content_flush_items_task@@QAAXPBUs_content_item_platform_handle@@J@Z");
//};

//public: virtual void c_flush_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_flush_callback@@UAAX_NQAX@Z");
//};

//public: c_content_close_items_task::c_content_close_items_task(void)
//{
//    mangled_ppc("??0c_content_close_items_task@@QAA@XZ");
//};

//merged_831969C8
//{
//    mangled_ppc("merged_831969C8");
//};

//public: virtual c_content_close_items_task::~c_content_close_items_task(void)
//{
//    mangled_ppc("??1c_content_close_items_task@@UAA@XZ");
//};

//public: void c_content_close_items_task::initialize(struct s_content_item_platform_handle const *const, long)
//{
//    mangled_ppc("?initialize@c_content_close_items_task@@QAAXQBUs_content_item_platform_handle@@J@Z");
//};

//public: virtual void c_close_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_close_callback@@UAAX_NQAX@Z");
//};

//public: c_content_create_item_task::c_content_create_item_task(void)
//{
//    mangled_ppc("??0c_content_create_item_task@@QAA@XZ");
//};

//merged_83196C20
//{
//    mangled_ppc("merged_83196C20");
//};

//public: virtual c_content_create_item_task::~c_content_create_item_task(void)
//{
//    mangled_ppc("??1c_content_create_item_task@@UAA@XZ");
//};

//public: void c_content_create_item_task::initialize(struct s_content_item_mini_metadata_input const *, class c_static_wchar_string<128> const *, long)
//{
//    mangled_ppc("?initialize@c_content_create_item_task@@QAAXPBUs_content_item_mini_metadata_input@@PBV?$c_static_wchar_string@$0IA@@@J@Z");
//};

//public: struct c_content_create_item_task::s_result const * c_content_create_item_task::get_result(void) const
//{
//    mangled_ppc("?get_result@c_content_create_item_task@@QBAPBUs_result@1@XZ");
//};

//public: c_content_delete_item_task::c_content_delete_item_task(void)
//{
//    mangled_ppc("??0c_content_delete_item_task@@QAA@XZ");
//};

//merged_83196E98
//{
//    mangled_ppc("merged_83196E98");
//};

//public: virtual c_content_delete_item_task::~c_content_delete_item_task(void)
//{
//    mangled_ppc("??1c_content_delete_item_task@@UAA@XZ");
//};

//public: void c_content_delete_item_task::initialize(struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?initialize@c_content_delete_item_task@@QAAXPBUs_content_item_platform_handle@@@Z");
//};

//public: virtual void c_deletion_callback::complete(bool, void *const)
//{
//    mangled_ppc("?complete@c_deletion_callback@@UAAX_NQAX@Z");
//};

//public: c_content_globals_accessor::c_content_globals_accessor(void)
//{
//    mangled_ppc("??0c_content_globals_accessor@@QAA@XZ");
//};

//public: c_content_globals_accessor::~c_content_globals_accessor(void)
//{
//    mangled_ppc("??1c_content_globals_accessor@@QAA@XZ");
//};

//public: struct s_content_globals const * c_content_globals_accessor::operator->(void) const
//{
//    mangled_ppc("??Cc_content_globals_accessor@@QBAPBUs_content_globals@@XZ");
//};

//public: struct s_content_globals * c_content_globals_accessor::operator->(void)
//{
//    mangled_ppc("??Cc_content_globals_accessor@@QAAPAUs_content_globals@@XZ");
//};

//void content_tracker_delete_item(long)
//{
//    mangled_ppc("?content_tracker_delete_item@@YAXJ@Z");
//};

//long content_tracker_find_open_item(struct s_content_item_platform_handle const *const)
//{
//    mangled_ppc("?content_tracker_find_open_item@@YAJQBUs_content_item_platform_handle@@@Z");
//};

//enum e_async_completion content_open_items_task_async_work_callback(void *)
//{
//    mangled_ppc("?content_open_items_task_async_work_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_open_item_tracker_result content_tracker_consider_open_attempt(enum e_controller_index, struct s_content_item_platform_handle const *, struct s_opened_content_item *)
//{
//    mangled_ppc("?content_tracker_consider_open_attempt@@YA?AW4e_open_item_tracker_result@@W4e_controller_index@@PBUs_content_item_platform_handle@@PAUs_opened_content_item@@@Z");
//};

//void content_tracker_handle_open_completion(enum e_controller_index, struct s_content_item_platform_handle const *, struct s_opened_content_item const *)
//{
//    mangled_ppc("?content_tracker_handle_open_completion@@YAXW4e_controller_index@@PBUs_content_item_platform_handle@@PBUs_opened_content_item@@@Z");
//};

//enum e_async_completion content_open_cross_title_items_task_async_work_callback(void *)
//{
//    mangled_ppc("?content_open_cross_title_items_task_async_work_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion content_flush_items_task_async_work_callback(void *)
//{
//    mangled_ppc("?content_flush_items_task_async_work_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion content_close_items_task_async_work_callback(void *)
//{
//    mangled_ppc("?content_close_items_task_async_work_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_open_item_tracker_result content_tracker_consider_close_attempt(struct s_content_item_platform_handle const *)
//{
//    mangled_ppc("?content_tracker_consider_close_attempt@@YA?AW4e_open_item_tracker_result@@PBUs_content_item_platform_handle@@@Z");
//};

//void content_tracker_handle_close_completion(struct s_content_item_platform_handle const *const)
//{
//    mangled_ppc("?content_tracker_handle_close_completion@@YAXQBUs_content_item_platform_handle@@@Z");
//};

//void content_tracker_handle_close_completion_by_index(long)
//{
//    mangled_ppc("?content_tracker_handle_close_completion_by_index@@YAXJ@Z");
//};

//enum e_async_completion content_create_item_task_async_work_callback(void *)
//{
//    mangled_ppc("?content_create_item_task_async_work_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//void content_build_container_full_path_from_xcontent(class s_static_string<256> *const, struct _XCONTENT_DATA const *const, bool)
//{
//    mangled_ppc("?content_build_container_full_path_from_xcontent@@YAXQAV?$s_static_string@$0BAA@@@QBU_XCONTENT_DATA@@_N@Z");
//};

//void content_build_directory(struct s_opened_content_item const *const, class s_static_string<256> *)
//{
//    mangled_ppc("?content_build_directory@@YAXQBUs_opened_content_item@@PAV?$s_static_string@$0BAA@@@@Z");
//};

//void content_async_task_support_set_overlapped_complete(struct s_async_task_support *, bool)
//{
//    mangled_ppc("?content_async_task_support_set_overlapped_complete@@YAXPAUs_async_task_support@@_N@Z");
//};

//void content_initialize_mini_metadata_for_creation(struct s_content_item_mini_metadata *const)
//{
//    mangled_ppc("?content_initialize_mini_metadata_for_creation@@YAXQAUs_content_item_mini_metadata@@@Z");
//};

//public: c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::~c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAA@XZ");
//};

//public: struct s_content_enumerate_items_private_data * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAAXXZ");
//};

//public: struct s_content_enumerate_items_private_data * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_items_private_data@@XZ");
//};

//public: struct s_content_enumerate_items_private_data const * c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QBAPBUs_content_enumerate_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::~c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAA@XZ");
//};

//public: struct s_content_enumerate_cross_title_items_private_data * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_cross_title_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAAXXZ");
//};

//public: struct s_content_enumerate_cross_title_items_private_data * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_cross_title_items_private_data@@XZ");
//};

//public: struct s_content_enumerate_cross_title_items_private_data const * c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QBAPBUs_content_enumerate_cross_title_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::~c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAA@XZ");
//};

//public: struct s_content_open_items_private_data * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAAPAUs_content_open_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAAXXZ");
//};

//public: struct s_content_open_items_private_data * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAAPAUs_content_open_items_private_data@@XZ");
//};

//public: struct s_content_open_items_private_data const * c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QBAPBUs_content_open_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_open_items_private_data, 668, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::~c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAA@XZ");
//};

//public: struct s_content_open_cross_title_items_private_data * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAAPAUs_content_open_cross_title_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAAXXZ");
//};

//public: struct s_content_open_cross_title_items_private_data * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAAPAUs_content_open_cross_title_items_private_data@@XZ");
//};

//public: struct s_content_open_cross_title_items_private_data const * c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QBAPBUs_content_open_cross_title_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::~c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAA@XZ");
//};

//public: struct s_content_flush_items_private_data * c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAAPAUs_content_flush_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAAXXZ");
//};

//public: struct s_content_flush_items_private_data * c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAAPAUs_content_flush_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_flush_items_private_data, 648, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::~c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAA@XZ");
//};

//public: struct s_content_close_items_private_data * c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAAPAUs_content_close_items_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAAXXZ");
//};

//public: struct s_content_close_items_private_data * c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAAPAUs_content_close_items_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_close_items_private_data, 648, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::~c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAA@XZ");
//};

//public: struct s_content_create_item_private_data * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAAPAUs_content_create_item_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAAXXZ");
//};

//public: struct s_content_create_item_private_data * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAAPAUs_content_create_item_private_data@@XZ");
//};

//public: struct s_content_create_item_private_data const * c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QBAPBUs_content_create_item_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_create_item_private_data, 3936, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QBA_NXZ");
//};

//public: c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::~c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAA@XZ");
//};

//public: struct s_content_delete_item_private_data * c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAAPAUs_content_delete_item_private_data@@XZ");
//};

//public: void c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAAXXZ");
//};

//public: struct s_content_delete_item_private_data * c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAAPAUs_content_delete_item_private_data@@XZ");
//};

//public: bool c_typed_opaque_data<struct s_content_delete_item_private_data, 932, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QBA_NXZ");
//};

//public: void c_data_iterator<struct s_tracked_open_content_item>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_tracked_open_content_item@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_tracked_open_content_item>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_tracked_open_content_item@@@@QAA_NXZ");
//};

//public: struct s_tracked_open_content_item * c_data_iterator<struct s_tracked_open_content_item>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_tracked_open_content_item@@@@QBAPAUs_tracked_open_content_item@@XZ");
//};

//public: long c_data_iterator<struct s_tracked_open_content_item>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_tracked_open_content_item@@@@QBAJXZ");
//};

//public: s_content_enumerate_items_private_data::s_content_enumerate_items_private_data(void)
//{
//    mangled_ppc("??0s_content_enumerate_items_private_data@@QAA@XZ");
//};

//public: void * s_content_enumerate_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_enumerate_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_enumerate_cross_title_items_private_data::s_content_enumerate_cross_title_items_private_data(void)
//{
//    mangled_ppc("??0s_content_enumerate_cross_title_items_private_data@@QAA@XZ");
//};

//public: void * s_content_enumerate_cross_title_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_enumerate_cross_title_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_open_items_private_data::s_content_open_items_private_data(void)
//{
//    mangled_ppc("??0s_content_open_items_private_data@@QAA@XZ");
//};

//public: void * s_content_open_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_open_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_open_cross_title_items_private_data::s_content_open_cross_title_items_private_data(void)
//{
//    mangled_ppc("??0s_content_open_cross_title_items_private_data@@QAA@XZ");
//};

//public: void * s_content_open_cross_title_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_open_cross_title_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_flush_items_private_data::s_content_flush_items_private_data(void)
//{
//    mangled_ppc("??0s_content_flush_items_private_data@@QAA@XZ");
//};

//public: void * s_content_flush_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_flush_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_close_items_private_data::s_content_close_items_private_data(void)
//{
//    mangled_ppc("??0s_content_close_items_private_data@@QAA@XZ");
//};

//public: void * s_content_close_items_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_close_items_private_data@@QAAPAXI@Z");
//};

//public: s_content_create_item_private_data::s_content_create_item_private_data(void)
//{
//    mangled_ppc("??0s_content_create_item_private_data@@QAA@XZ");
//};

//public: void * s_content_create_item_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_create_item_private_data@@QAAPAXI@Z");
//};

//public: s_content_delete_item_private_data::s_content_delete_item_private_data(void)
//{
//    mangled_ppc("??0s_content_delete_item_private_data@@QAA@XZ");
//};

//public: void * s_content_delete_item_private_data::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gs_content_delete_item_private_data@@QAAPAXI@Z");
//};

//public: c_content_enumerate_overlapped_task::c_content_enumerate_overlapped_task(void)
//{
//    mangled_ppc("??0c_content_enumerate_overlapped_task@@QAA@XZ");
//};

//public: virtual char const * c_content_enumerate_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_content_enumerate_overlapped_task@@UBAPBDXZ");
//};

//public: s_content_enumerate_items_private_data::~s_content_enumerate_items_private_data(void)
//{
//    mangled_ppc("??1s_content_enumerate_items_private_data@@QAA@XZ");
//};

//public: virtual c_content_enumerate_overlapped_task::~c_content_enumerate_overlapped_task(void)
//{
//    mangled_ppc("??1c_content_enumerate_overlapped_task@@UAA@XZ");
//};

//public: c_content_enumerate_cross_title_overlapped_task::c_content_enumerate_cross_title_overlapped_task(void)
//{
//    mangled_ppc("??0c_content_enumerate_cross_title_overlapped_task@@QAA@XZ");
//};

//public: virtual char const * c_content_enumerate_cross_title_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_content_enumerate_cross_title_overlapped_task@@UBAPBDXZ");
//};

//public: s_content_enumerate_cross_title_items_private_data::~s_content_enumerate_cross_title_items_private_data(void)
//{
//    mangled_ppc("??1s_content_enumerate_cross_title_items_private_data@@QAA@XZ");
//};

//public: virtual c_content_enumerate_cross_title_overlapped_task::~c_content_enumerate_cross_title_overlapped_task(void)
//{
//    mangled_ppc("??1c_content_enumerate_cross_title_overlapped_task@@UAA@XZ");
//};

//public: c_content_single_item_overlapped_task::c_content_single_item_overlapped_task(void)
//{
//    mangled_ppc("??0c_content_single_item_overlapped_task@@QAA@XZ");
//};

//public: s_async_task_support::s_async_task_support(void)
//{
//    mangled_ppc("??0s_async_task_support@@QAA@XZ");
//};

//public: s_content_open_items_private_data::~s_content_open_items_private_data(void)
//{
//    mangled_ppc("??1s_content_open_items_private_data@@QAA@XZ");
//};

//public: virtual c_content_single_item_overlapped_task::~c_content_single_item_overlapped_task(void)
//{
//    mangled_ppc("??1c_content_single_item_overlapped_task@@UAA@XZ");
//};

//public: s_async_task_support::~s_async_task_support(void)
//{
//    mangled_ppc("??1s_async_task_support@@QAA@XZ");
//};

//public: s_content_open_cross_title_items_private_data::~s_content_open_cross_title_items_private_data(void)
//{
//    mangled_ppc("??1s_content_open_cross_title_items_private_data@@QAA@XZ");
//};

//public: s_content_flush_items_private_data::~s_content_flush_items_private_data(void)
//{
//    mangled_ppc("??1s_content_flush_items_private_data@@QAA@XZ");
//};

//public: s_content_close_items_private_data::~s_content_close_items_private_data(void)
//{
//    mangled_ppc("??1s_content_close_items_private_data@@QAA@XZ");
//};

//public: c_content_create_item_task::s_result::s_result(void)
//{
//    mangled_ppc("??0s_result@c_content_create_item_task@@QAA@XZ");
//};

//public: s_content_create_item_private_data::~s_content_create_item_private_data(void)
//{
//    mangled_ppc("??1s_content_create_item_private_data@@QAA@XZ");
//};

//public: s_content_delete_item_private_data::~s_content_delete_item_private_data(void)
//{
//    mangled_ppc("??1s_content_delete_item_private_data@@QAA@XZ");
//};

//merged_8319B760
//{
//    mangled_ppc("merged_8319B760");
//};

//public: virtual c_content_overlapped_task::~c_content_overlapped_task(void)
//{
//    mangled_ppc("??1c_content_overlapped_task@@UAA@XZ");
//};

//merged_8319B7D0
//{
//    mangled_ppc("merged_8319B7D0");
//};

//merged_8319B818
//{
//    mangled_ppc("merged_8319B818");
//};

//public: void c_flags_no_init<enum s_opened_content_item::e_opened_content_item_flag, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum s_opened_content_item::e_opened_content_item_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_opened_content_item_flag@s_opened_content_item@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_opened_content_item_flag@s_opened_content_item@@_N@Z");
//};

//public: struct s_content_enumerate_items_private_data * c_opaque_data<struct s_content_enumerate_items_private_data, 108, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_enumerate_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_items_private_data@@XZ");
//};

//public: struct s_content_enumerate_cross_title_items_private_data * c_opaque_data<struct s_content_enumerate_cross_title_items_private_data, 108, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_enumerate_cross_title_items_private_data@@$0GM@$03@@QAAPAUs_content_enumerate_cross_title_items_private_data@@XZ");
//};

//public: struct s_content_open_items_private_data * c_opaque_data<struct s_content_open_items_private_data, 668, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_open_items_private_data@@$0CJM@$03@@QAAPAUs_content_open_items_private_data@@XZ");
//};

//public: struct s_content_open_cross_title_items_private_data * c_opaque_data<struct s_content_open_cross_title_items_private_data, 664, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_open_cross_title_items_private_data@@$0CJI@$03@@QAAPAUs_content_open_cross_title_items_private_data@@XZ");
//};

//public: struct s_content_flush_items_private_data * c_opaque_data<struct s_content_flush_items_private_data, 648, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_flush_items_private_data@@$0CII@$03@@QAAPAUs_content_flush_items_private_data@@XZ");
//};

//public: struct s_content_close_items_private_data * c_opaque_data<struct s_content_close_items_private_data, 648, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_close_items_private_data@@$0CII@$03@@QAAPAUs_content_close_items_private_data@@XZ");
//};

//public: struct s_content_create_item_private_data * c_opaque_data<struct s_content_create_item_private_data, 3936, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_create_item_private_data@@$0PGA@$07@@QAAPAUs_content_create_item_private_data@@XZ");
//};

//public: struct s_content_delete_item_private_data * c_opaque_data<struct s_content_delete_item_private_data, 932, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Us_content_delete_item_private_data@@$0DKE@$03@@QAAPAUs_content_delete_item_private_data@@XZ");
//};

//public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_content_creation_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_content_creation_flag@@_N@Z");
//};

//public: void c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_tracked_open_content_item_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_tracked_open_content_item_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_tracked_open_content_item_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_tracked_open_content_item_flag@@_N@Z");
//};

//public: c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: char const * s_static_string<43>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0CL@@@QBAPBDXZ");
//};

//public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_content_creation_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_content_creation_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_content_creation_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@CAEW4e_content_creation_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_tracked_open_content_item_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_tracked_open_content_item_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_tracked_open_content_item_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_tracked_open_content_item_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_tracked_open_content_item_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_tracked_open_content_item_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_content_creation_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@CAEW4e_content_creation_flag@@@Z");
//};

//public: c_content_globals_container::c_content_globals_container(void)
//{
//    mangled_ppc("??0c_content_globals_container@@QAA@XZ");
//};

//public: s_content_globals::s_content_globals(void)
//{
//    mangled_ppc("??0s_content_globals@@QAA@XZ");
//};

//public: s_content_globals_non_threadsafe::s_content_globals_non_threadsafe(void)
//{
//    mangled_ppc("??0s_content_globals_non_threadsafe@@QAA@XZ");
//};

//public: c_enumeration_callback::c_enumeration_callback(void)
//{
//    mangled_ppc("??0c_enumeration_callback@@QAA@XZ");
//};

//public: c_cross_title_enumeration_callback::c_cross_title_enumeration_callback(void)
//{
//    mangled_ppc("??0c_cross_title_enumeration_callback@@QAA@XZ");
//};

//public: c_open_callback::c_open_callback(void)
//{
//    mangled_ppc("??0c_open_callback@@QAA@XZ");
//};

//public: c_open_cross_title_callback::c_open_cross_title_callback(void)
//{
//    mangled_ppc("??0c_open_cross_title_callback@@QAA@XZ");
//};

//public: c_flush_callback::c_flush_callback(void)
//{
//    mangled_ppc("??0c_flush_callback@@QAA@XZ");
//};

//public: c_close_callback::c_close_callback(void)
//{
//    mangled_ppc("??0c_close_callback@@QAA@XZ");
//};

//public: c_deletion_callback::c_deletion_callback(void)
//{
//    mangled_ppc("??0c_deletion_callback@@QAA@XZ");
//};

//public: c_content_overlapped_task_callback_interface::c_content_overlapped_task_callback_interface(void)
//{
//    mangled_ppc("??0c_content_overlapped_task_callback_interface@@QAA@XZ");
//};

//public: c_content_globals_container::~c_content_globals_container(void)
//{
//    mangled_ppc("??1c_content_globals_container@@QAA@XZ");
//};

//public: s_content_globals::~s_content_globals(void)
//{
//    mangled_ppc("??1s_content_globals@@QAA@XZ");
//};

//void content_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fcontent_globals@@YAXXZ");
//};

//void `void content_initialize_mini_metadata_for_creation(struct s_content_item_mini_metadata *const)'::`2'::session_salt::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fsession_salt@?1??content_initialize_mini_metadata_for_creation@@YAXQAUs_content_item_mini_metadata@@@Z@YAXXZ");
//};

