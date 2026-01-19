/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// enum e_async_completion async_copy_file_callback(void *);
// struct s_async_task_id async_create_file(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle volatile *, class c_async_completion_flag *);
// bool async_file_set_file_allocated_size_synchronous(char const *, struct s_file_handle, unsigned long, __int64*);
// struct s_async_task_id async_close_file(struct s_file_handle, long, long, class c_async_completion_flag *);
// struct s_async_task_id async_close_file_no_stfs_flush(struct s_file_handle, long, long, class c_async_completion_flag *);
// struct s_async_task_id async_get_file_size(struct s_file_handle, unsigned long volatile *, long, long, class c_async_completion_flag *);
// struct s_async_task_id async_flush_file(struct s_file_handle, long, long, class c_async_completion_flag *);
// struct s_async_task_id async_read_entire_file(char const *, void *, unsigned long, unsigned long *, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_write_buffer_to_file(char const *, void const *, unsigned long, long, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_read_position(struct s_file_handle, void *, long, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_read_position_ex(struct s_file_handle, void *, long, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_write_position(struct s_file_handle, void *, long, unsigned long, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_write_position_ex(struct s_file_handle, void *, long, unsigned long, class c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *);
// public: s_write_position_task::s_write_position_task(void);
// struct s_async_task_id async_copy_position(struct s_file_handle, struct s_file_handle, void *, long, long, long, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_set_file_size(struct s_file_handle, long, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_delete_file(char const *, bool, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_copy_file_from_existing_file(char const *, char const *, void *, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// struct s_async_task_id async_perform_operation_between_files(char const *, char const *, bool, bool, bool, bool, unsigned long, unsigned long, long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, struct s_file_handle *, struct s_file_handle *);
// void async_create_file_synchronous(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle *);
// void async_close_file_synchronous(struct s_file_handle);
// void async_create_file_from_reference_blocking(struct s_file_reference const *, unsigned long, enum e_file_open_disposition, unsigned long, long, struct s_file_handle volatile *);
// struct s_async_task_id async_enumerate_files(unsigned long, char const *, long, struct s_find_file_data *, struct s_file_reference *, long *, long, long, class c_synchronized_int32*, class c_async_completion_flag *);
// bool async_io_is_read_operation(void const *);
// void async_io_get_read_data_from_task_data(void const *, void const *, unsigned long *, unsigned long *);
// void async_io_report_error(bool);
// void async_io_verify_writeable_memory(void *, long);
// void async_create_file_task_initialize(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle volatile *, struct s_create_file_task *);
// void verify_write_alignment(unsigned long, unsigned long);
// unsigned long set_file_position(void *, unsigned long);
// enum e_async_completion async_create_file_callback(void *);
// enum e_async_completion async_close_file_callback(void *);
// enum e_async_completion async_get_file_size_callback(void *);
// enum e_async_completion async_flush_file_callback(void *);
// enum e_async_completion async_read_entire_file_callback(void *);
// enum e_async_completion async_write_buffer_to_file_callback(void *);
// enum e_async_completion async_read_position_callback(void *);
// unsigned long int_min(unsigned long, int);
// enum e_async_completion async_write_position_callback(void *);
// enum e_async_completion async_copy_position_callback(void *);
// enum e_async_completion async_set_file_size_callback(void *);
// enum e_async_completion async_delete_file_callback(void *);
// enum e_async_completion async_enumerate_files_callback(void *);
// public: c_status_value<int, 0>::c_status_value<int, 0>(int const &);
// public: int & c_status_value<int, 0>::operator=(int const &);
// public: int & c_status_value<int, 0>::operator int &(void);
// public: bool s_flags<enum e_write_position_flags, unsigned long, 1>::test(enum e_write_position_flags) const;
// struct s_async_task_id async_task_add<struct s_create_file_task>(long, struct s_create_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_close_file_task>(long, struct s_close_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_get_file_size_task>(long, struct s_get_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_file_raw_handle_based_task>(long, struct s_file_raw_handle_based_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_read_entire_file_task>(long, struct s_read_entire_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_write_buffer_to_file_task>(long, struct s_write_buffer_to_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add_ex<struct s_read_position_task>(long, struct s_read_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add<struct s_write_position_task>(long, struct s_write_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_copy_position_task>(long, struct s_copy_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_set_file_size_task>(long, struct s_set_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_delete_file_task>(long, struct s_delete_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// struct s_async_task_id async_task_add<struct s_enumerate_files_task>(long, struct s_enumerate_files_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// bool operator!=<unsigned long>(enum e_none_sentinel const &, unsigned long const &);
// enum <unnamed-tag> int_min<enum <unnamed-tag> >(enum <unnamed-tag> const &, enum <unnamed-tag> const &);
// struct s_async_task_id async_task_add_ex<struct s_create_file_task>(long, struct s_create_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_close_file_task>(long, struct s_close_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_get_file_size_task>(long, struct s_get_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_file_raw_handle_based_task>(long, struct s_file_raw_handle_based_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_read_entire_file_task>(long, struct s_read_entire_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_write_buffer_to_file_task>(long, struct s_write_buffer_to_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_write_position_task>(long, struct s_write_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_copy_position_task>(long, struct s_copy_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_set_file_size_task>(long, struct s_set_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_delete_file_task>(long, struct s_delete_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// struct s_async_task_id async_task_add_ex<struct s_enumerate_files_task>(long, struct s_enumerate_files_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// unsigned long int_min<unsigned long>(unsigned long const &, unsigned long const &);

//enum e_async_completion async_copy_file_callback(void *)
//{
//    mangled_ppc("?async_copy_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//struct s_async_task_id async_create_file(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle volatile *, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_create_file@@YA?AUs_async_task_id@@PBDKW4e_file_open_disposition@@KJJPCUs_file_handle@@PAVc_async_completion_flag@@@Z");
//};

//bool async_file_set_file_allocated_size_synchronous(char const *, struct s_file_handle, unsigned long, __int64*)
//{
//    mangled_ppc("?async_file_set_file_allocated_size_synchronous@@YA_NPBDUs_file_handle@@KPA_J@Z");
//};

//struct s_async_task_id async_close_file(struct s_file_handle, long, long, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_close_file@@YA?AUs_async_task_id@@Us_file_handle@@JJPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_close_file_no_stfs_flush(struct s_file_handle, long, long, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_close_file_no_stfs_flush@@YA?AUs_async_task_id@@Us_file_handle@@JJPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_get_file_size(struct s_file_handle, unsigned long volatile *, long, long, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_get_file_size@@YA?AUs_async_task_id@@Us_file_handle@@PCKJJPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_flush_file(struct s_file_handle, long, long, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_flush_file@@YA?AUs_async_task_id@@Us_file_handle@@JJPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_read_entire_file(char const *, void *, unsigned long, unsigned long *, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_read_entire_file@@YA?AUs_async_task_id@@PBDPAXKPAKJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_write_buffer_to_file(char const *, void const *, unsigned long, long, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_write_buffer_to_file@@YA?AUs_async_task_id@@PBDPBXKJJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_read_position(struct s_file_handle, void *, long, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_read_position@@YA?AUs_async_task_id@@Us_file_handle@@PAXJKJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_read_position_ex(struct s_file_handle, void *, long, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("?async_read_position_ex@@YA?AUs_async_task_id@@Us_file_handle@@PAXJKJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_write_position(struct s_file_handle, void *, long, unsigned long, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_write_position@@YA?AUs_async_task_id@@Us_file_handle@@PAXJKJJ_NPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_write_position_ex(struct s_file_handle, void *, long, unsigned long, class c_flags_zero_init<enum e_write_position_flags, unsigned long, 1>, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_write_position_ex@@YA?AUs_async_task_id@@Us_file_handle@@PAXJKV?$c_flags_zero_init@W4e_write_position_flags@@K$00@@JJ_NPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//public: s_write_position_task::s_write_position_task(void)
//{
//    mangled_ppc("??0s_write_position_task@@QAA@XZ");
//};

//struct s_async_task_id async_copy_position(struct s_file_handle, struct s_file_handle, void *, long, long, long, long, long, bool, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_copy_position@@YA?AUs_async_task_id@@Us_file_handle@@0PAXJJJJJ_NPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_set_file_size(struct s_file_handle, long, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_set_file_size@@YA?AUs_async_task_id@@Us_file_handle@@JJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_delete_file(char const *, bool, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_delete_file@@YA?AUs_async_task_id@@PBD_NJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_copy_file_from_existing_file(char const *, char const *, void *, unsigned long, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_copy_file_from_existing_file@@YA?AUs_async_task_id@@PBD0PAXKJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_perform_operation_between_files(char const *, char const *, bool, bool, bool, bool, unsigned long, unsigned long, long, long, void const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, struct s_file_handle *, struct s_file_handle *)
//{
//    mangled_ppc("?async_perform_operation_between_files@@YA?AUs_async_task_id@@PBD0_N111KKJJPBXJP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@PAUs_file_handle@@6@Z");
//};

//void async_create_file_synchronous(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle *)
//{
//    mangled_ppc("?async_create_file_synchronous@@YAXPBDKW4e_file_open_disposition@@KJJPAUs_file_handle@@@Z");
//};

//void async_close_file_synchronous(struct s_file_handle)
//{
//    mangled_ppc("?async_close_file_synchronous@@YAXUs_file_handle@@@Z");
//};

//void async_create_file_from_reference_blocking(struct s_file_reference const *, unsigned long, enum e_file_open_disposition, unsigned long, long, struct s_file_handle volatile *)
//{
//    mangled_ppc("?async_create_file_from_reference_blocking@@YAXPBUs_file_reference@@KW4e_file_open_disposition@@KJPCUs_file_handle@@@Z");
//};

//struct s_async_task_id async_enumerate_files(unsigned long, char const *, long, struct s_find_file_data *, struct s_file_reference *, long *, long, long, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_enumerate_files@@YA?AUs_async_task_id@@KPBDJPAUs_find_file_data@@PAUs_file_reference@@PAJJJPAVc_synchronized_int32@@PAVc_async_completion_flag@@@Z");
//};

//bool async_io_is_read_operation(void const *)
//{
//    mangled_ppc("?async_io_is_read_operation@@YA_NPBX@Z");
//};

//void async_io_get_read_data_from_task_data(void const *, void const *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?async_io_get_read_data_from_task_data@@YAXPBX0PAK1@Z");
//};

//void async_io_report_error(bool)
//{
//    mangled_ppc("?async_io_report_error@@YAX_N@Z");
//};

//void async_io_verify_writeable_memory(void *, long)
//{
//    mangled_ppc("?async_io_verify_writeable_memory@@YAXPAXJ@Z");
//};

//void async_create_file_task_initialize(char const *, unsigned long, enum e_file_open_disposition, unsigned long, long, long, struct s_file_handle volatile *, struct s_create_file_task *)
//{
//    mangled_ppc("?async_create_file_task_initialize@@YAXPBDKW4e_file_open_disposition@@KJJPCUs_file_handle@@PAUs_create_file_task@@@Z");
//};

//void verify_write_alignment(unsigned long, unsigned long)
//{
//    mangled_ppc("?verify_write_alignment@@YAXKK@Z");
//};

//unsigned long set_file_position(void *, unsigned long)
//{
//    mangled_ppc("?set_file_position@@YAKPAXK@Z");
//};

//enum e_async_completion async_create_file_callback(void *)
//{
//    mangled_ppc("?async_create_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_close_file_callback(void *)
//{
//    mangled_ppc("?async_close_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_get_file_size_callback(void *)
//{
//    mangled_ppc("?async_get_file_size_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_flush_file_callback(void *)
//{
//    mangled_ppc("?async_flush_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_read_entire_file_callback(void *)
//{
//    mangled_ppc("?async_read_entire_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_write_buffer_to_file_callback(void *)
//{
//    mangled_ppc("?async_write_buffer_to_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_read_position_callback(void *)
//{
//    mangled_ppc("?async_read_position_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//unsigned long int_min(unsigned long, int)
//{
//    mangled_ppc("?int_min@@YAKKH@Z");
//};

//enum e_async_completion async_write_position_callback(void *)
//{
//    mangled_ppc("?async_write_position_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_copy_position_callback(void *)
//{
//    mangled_ppc("?async_copy_position_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_set_file_size_callback(void *)
//{
//    mangled_ppc("?async_set_file_size_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_delete_file_callback(void *)
//{
//    mangled_ppc("?async_delete_file_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//enum e_async_completion async_enumerate_files_callback(void *)
//{
//    mangled_ppc("?async_enumerate_files_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//public: c_status_value<int, 0>::c_status_value<int, 0>(int const &)
//{
//    mangled_ppc("??0?$c_status_value@H$0A@@@QAA@ABH@Z");
//};

//public: int & c_status_value<int, 0>::operator=(int const &)
//{
//    mangled_ppc("??4?$c_status_value@H$0A@@@QAAAAHABH@Z");
//};

//public: int & c_status_value<int, 0>::operator int &(void)
//{
//    mangled_ppc("??B?$c_status_value@H$0A@@@QAAAAHXZ");
//};

//public: bool s_flags<enum e_write_position_flags, unsigned long, 1>::test(enum e_write_position_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_write_position_flags@@K$00@@QBA_NW4e_write_position_flags@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_create_file_task>(long, struct s_create_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_create_file_task@@@@YA?AUs_async_task_id@@JPBUs_create_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_close_file_task>(long, struct s_close_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_close_file_task@@@@YA?AUs_async_task_id@@JPBUs_close_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_get_file_size_task>(long, struct s_get_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_get_file_size_task@@@@YA?AUs_async_task_id@@JPBUs_get_file_size_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_file_raw_handle_based_task>(long, struct s_file_raw_handle_based_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_file_raw_handle_based_task@@@@YA?AUs_async_task_id@@JPBUs_file_raw_handle_based_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_read_entire_file_task>(long, struct s_read_entire_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_read_entire_file_task@@@@YA?AUs_async_task_id@@JPBUs_read_entire_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_write_buffer_to_file_task>(long, struct s_write_buffer_to_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_write_buffer_to_file_task@@@@YA?AUs_async_task_id@@JPBUs_write_buffer_to_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_read_position_task>(long, struct s_read_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_read_position_task@@@@YA?AUs_async_task_id@@JPBUs_read_position_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_write_position_task>(long, struct s_write_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_write_position_task@@@@YA?AUs_async_task_id@@JPBUs_write_position_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_copy_position_task>(long, struct s_copy_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_copy_position_task@@@@YA?AUs_async_task_id@@JPBUs_copy_position_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_set_file_size_task>(long, struct s_set_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_set_file_size_task@@@@YA?AUs_async_task_id@@JPBUs_set_file_size_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_delete_file_task>(long, struct s_delete_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_delete_file_task@@@@YA?AUs_async_task_id@@JPBUs_delete_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//struct s_async_task_id async_task_add<struct s_enumerate_files_task>(long, struct s_enumerate_files_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_enumerate_files_task@@@@YA?AUs_async_task_id@@JPBUs_enumerate_files_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//bool operator!=<unsigned long>(enum e_none_sentinel const &, unsigned long const &)
//{
//    mangled_ppc("??$?9K@@YA_NABW4e_none_sentinel@@ABK@Z");
//};

//enum <unnamed-tag> int_min<enum <unnamed-tag> >(enum <unnamed-tag> const &, enum <unnamed-tag> const &)
//{
//    mangled_ppc("??$int_min@W4<unnamed-tag>@@@@YA?AW4<unnamed-tag>@@ABW40@0@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_create_file_task>(long, struct s_create_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_create_file_task@@@@YA?AUs_async_task_id@@JPBUs_create_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_close_file_task>(long, struct s_close_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_close_file_task@@@@YA?AUs_async_task_id@@JPBUs_close_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_get_file_size_task>(long, struct s_get_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_get_file_size_task@@@@YA?AUs_async_task_id@@JPBUs_get_file_size_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_file_raw_handle_based_task>(long, struct s_file_raw_handle_based_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_file_raw_handle_based_task@@@@YA?AUs_async_task_id@@JPBUs_file_raw_handle_based_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_read_entire_file_task>(long, struct s_read_entire_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_read_entire_file_task@@@@YA?AUs_async_task_id@@JPBUs_read_entire_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_write_buffer_to_file_task>(long, struct s_write_buffer_to_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_write_buffer_to_file_task@@@@YA?AUs_async_task_id@@JPBUs_write_buffer_to_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_write_position_task>(long, struct s_write_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_write_position_task@@@@YA?AUs_async_task_id@@JPBUs_write_position_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_copy_position_task>(long, struct s_copy_position_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_copy_position_task@@@@YA?AUs_async_task_id@@JPBUs_copy_position_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_set_file_size_task>(long, struct s_set_file_size_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_set_file_size_task@@@@YA?AUs_async_task_id@@JPBUs_set_file_size_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_delete_file_task>(long, struct s_delete_file_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_delete_file_task@@@@YA?AUs_async_task_id@@JPBUs_delete_file_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_enumerate_files_task>(long, struct s_enumerate_files_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_enumerate_files_task@@@@YA?AUs_async_task_id@@JPBUs_enumerate_files_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//unsigned long int_min<unsigned long>(unsigned long const &, unsigned long const &)
//{
//    mangled_ppc("??$int_min@K@@YAKABK0@Z");
//};

