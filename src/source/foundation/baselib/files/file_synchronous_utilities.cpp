/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool file_is_readable(class c_file_path const *);
// bool file_create_parent_directories(class c_file_path const *);
// bool file_read_into_memory(class c_file_path const *, class c_allocation_interface *, unsigned int, void **, unsigned int *, unsigned int *);
// bool file_read_into_buffer(class c_file_path const *, void *, unsigned int, unsigned int *, unsigned int *);
// bool file_trim(class c_file_path const *, unsigned int);
// bool file_trim_fast(class c_file_path const *, unsigned int, void *, unsigned int);
// bool directory_create_and_delete_contents(class c_file_path const *);
// bool directory_create_recursive(class c_file_path const *);
// bool directory_copy_recursive(class c_file_path const *, class c_file_path const *, enum e_file_overwrite_mode);
// long find_files(class s_flags<enum e_find_files_flags, unsigned long, 3>, class c_file_path const *, char const *, long, class c_file_path *);
// public: c_flags_zero_init<enum e_file_open_flags, unsigned long, 8>::c_flags_zero_init<enum e_file_open_flags, unsigned long, 8>(void);
// public: void s_flags<enum e_file_open_flags, unsigned long, 8>::clear(void);
// public: void s_flags<enum e_file_open_flags, unsigned long, 8>::set(enum e_file_open_flags, bool);
// public: char * c_file_path::get_name<256>(unsigned long, class s_static_string<256> *) const;
// public: void s_flags<enum e_find_files_flags, unsigned long, 3>::set(enum e_find_files_flags, bool);
// public: char * c_file_path::get_parent_directory<256>(class s_static_string<256> *) const;
// public: char * c_file_path::get_parent_directory(char *, long) const;
// public: static bool s_flags<enum e_file_open_flags, unsigned long, 8>::valid_bit(enum e_file_open_flags);
// public: bool s_flags<enum e_file_open_flags, unsigned long, 8>::valid(void) const;
// private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::flag_size_type(enum e_file_open_flags);
// private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_file_open_flags);

//bool file_is_readable(class c_file_path const *)
//{
//    mangled_ppc("?file_is_readable@@YA_NPBVc_file_path@@@Z");
//};

//bool file_create_parent_directories(class c_file_path const *)
//{
//    mangled_ppc("?file_create_parent_directories@@YA_NPBVc_file_path@@@Z");
//};

//bool file_read_into_memory(class c_file_path const *, class c_allocation_interface *, unsigned int, void **, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?file_read_into_memory@@YA_NPBVc_file_path@@PAVc_allocation_interface@@IPAPAXPAI3@Z");
//};

//bool file_read_into_buffer(class c_file_path const *, void *, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?file_read_into_buffer@@YA_NPBVc_file_path@@PAXIPAI2@Z");
//};

//bool file_trim(class c_file_path const *, unsigned int)
//{
//    mangled_ppc("?file_trim@@YA_NPBVc_file_path@@I@Z");
//};

//bool file_trim_fast(class c_file_path const *, unsigned int, void *, unsigned int)
//{
//    mangled_ppc("?file_trim_fast@@YA_NPBVc_file_path@@IPAXI@Z");
//};

//bool directory_create_and_delete_contents(class c_file_path const *)
//{
//    mangled_ppc("?directory_create_and_delete_contents@@YA_NPBVc_file_path@@@Z");
//};

//bool directory_create_recursive(class c_file_path const *)
//{
//    mangled_ppc("?directory_create_recursive@@YA_NPBVc_file_path@@@Z");
//};

//bool directory_copy_recursive(class c_file_path const *, class c_file_path const *, enum e_file_overwrite_mode)
//{
//    mangled_ppc("?directory_copy_recursive@@YA_NPBVc_file_path@@0W4e_file_overwrite_mode@@@Z");
//};

//long find_files(class s_flags<enum e_find_files_flags, unsigned long, 3>, class c_file_path const *, char const *, long, class c_file_path *)
//{
//    mangled_ppc("?find_files@@YAJV?$s_flags@W4e_find_files_flags@@K$02@@PBVc_file_path@@PBDJPAV2@@Z");
//};

//public: c_flags_zero_init<enum e_file_open_flags, unsigned long, 8>::c_flags_zero_init<enum e_file_open_flags, unsigned long, 8>(void)
//{
//    mangled_ppc("??0?$c_flags_zero_init@W4e_file_open_flags@@K$07@@QAA@XZ");
//};

//public: void s_flags<enum e_file_open_flags, unsigned long, 8>::clear(void)
//{
//    mangled_ppc("?clear@?$s_flags@W4e_file_open_flags@@K$07@@QAAXXZ");
//};

//public: void s_flags<enum e_file_open_flags, unsigned long, 8>::set(enum e_file_open_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_file_open_flags@@K$07@@QAAXW4e_file_open_flags@@_N@Z");
//};

//public: char * c_file_path::get_name<256>(unsigned long, class s_static_string<256> *) const
//{
//    mangled_ppc("??$get_name@$0BAA@@c_file_path@@QBAPADKPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: void s_flags<enum e_find_files_flags, unsigned long, 3>::set(enum e_find_files_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_find_files_flags@@K$02@@QAAXW4e_find_files_flags@@_N@Z");
//};

//public: char * c_file_path::get_parent_directory<256>(class s_static_string<256> *) const
//{
//    mangled_ppc("??$get_parent_directory@$0BAA@@c_file_path@@QBAPADPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: char * c_file_path::get_parent_directory(char *, long) const
//{
//    mangled_ppc("?get_parent_directory@c_file_path@@QBAPADPADJ@Z");
//};

//public: static bool s_flags<enum e_file_open_flags, unsigned long, 8>::valid_bit(enum e_file_open_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_file_open_flags@@K$07@@SA_NW4e_file_open_flags@@@Z");
//};

//public: bool s_flags<enum e_file_open_flags, unsigned long, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_file_open_flags@@K$07@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::flag_size_type(enum e_file_open_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_file_open_flags@@K$07@@CAKW4e_file_open_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_file_open_flags@@K$07@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_file_open_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_file_open_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_file_open_flags@@K$07@@CAKW4e_file_open_flags@@@Z");
//};

