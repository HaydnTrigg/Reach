/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_data_array * data_new(char const *, long, unsigned int, long, char const *, long, class c_allocation_interface *);
// struct s_data_array * data_new_disconnected(char const *, long, unsigned int, long, char const *, long, class c_allocation_interface *);
// void data_dispose(struct s_data_array *, char const *, long);
// unsigned int data_allocation_size(long, unsigned int, long);
// void data_initialize(struct s_data_array *, char const *, long, unsigned int, long, class c_allocation_interface *);
// void data_initialize_disconnected(struct s_data_array *, char const *, long, unsigned int, long, class c_allocation_interface *, unsigned long *);
// void data_connect(struct s_data_array *, long, void *);
// void data_disconnect(struct s_data_array *);
// void data_make_valid(struct s_data_array *);
// void data_make_invalid(struct s_data_array *);
// void data_copy(struct s_data_array const *, struct s_data_array *);
// void data_delete_all(struct s_data_array *);
// long datum_new(struct s_data_array *);
// bool datum_available_at_index(struct s_data_array const *, long);
// long datum_new_at_index(struct s_data_array *, long);
// long datum_new_at_absolute_index(struct s_data_array *, long);
// long datum_new_in_range(struct s_data_array *, long, long, enum e_datum_salt);
// void datum_clear(void *, unsigned int);
// void datum_delete(struct s_data_array *, long);
// void * datum_get(struct s_data_array *, long);
// void * datum_get_absolute(struct s_data_array *, long);
// void * datum_try_and_get(struct s_data_array *, long);
// void * datum_try_and_get_unsafe(struct s_data_array *, long);
// void * datum_try_and_get_absolute(struct s_data_array *, long);
// long datum_absolute_index_to_index(struct s_data_array const *, long);
// void data_iterator_begin(struct s_data_iterator *, struct s_data_array const *);
// void const * data_iterator_next(struct s_data_iterator *);
// long data_next_index(struct s_data_array const *, long);
// long data_last_index(struct s_data_array const *);
// long data_previous_index(struct s_data_array const *, long);
// void data_verify(struct s_data_array const *);
// bool data_is_empty(struct s_data_array const *);
// bool data_is_full(struct s_data_array const *);
// long data_get_count(struct s_data_array const *);
// long data_get_watermark(struct s_data_array const *);
// void data_unprotect_all(struct s_data_array const *);
// void data_set_new_base_address(struct s_data_array **, struct s_data_array *);
// void data_update_protection(struct s_data_array const *);
// short data_make_first_identifier(struct s_data_array const *);
// void datum_initialize(struct s_data_array *, struct s_datum_header *, short *);
// long data_next_absolute_index(struct s_data_array const *, long);
// bool data_should_verify_data_pattern(struct s_data_array const *);
// void data_set_protection(struct s_data_array const *, long);

//struct s_data_array * data_new(char const *, long, unsigned int, long, char const *, long, class c_allocation_interface *)
//{
//    mangled_ppc("?data_new@@YAPAUs_data_array@@PBDJIJ0JPAVc_allocation_interface@@@Z");
//};

//struct s_data_array * data_new_disconnected(char const *, long, unsigned int, long, char const *, long, class c_allocation_interface *)
//{
//    mangled_ppc("?data_new_disconnected@@YAPAUs_data_array@@PBDJIJ0JPAVc_allocation_interface@@@Z");
//};

//void data_dispose(struct s_data_array *, char const *, long)
//{
//    mangled_ppc("?data_dispose@@YAXPAUs_data_array@@PBDJ@Z");
//};

//unsigned int data_allocation_size(long, unsigned int, long)
//{
//    mangled_ppc("?data_allocation_size@@YAIJIJ@Z");
//};

//void data_initialize(struct s_data_array *, char const *, long, unsigned int, long, class c_allocation_interface *)
//{
//    mangled_ppc("?data_initialize@@YAXPAUs_data_array@@PBDJIJPAVc_allocation_interface@@@Z");
//};

//void data_initialize_disconnected(struct s_data_array *, char const *, long, unsigned int, long, class c_allocation_interface *, unsigned long *)
//{
//    mangled_ppc("?data_initialize_disconnected@@YAXPAUs_data_array@@PBDJIJPAVc_allocation_interface@@PAK@Z");
//};

//void data_connect(struct s_data_array *, long, void *)
//{
//    mangled_ppc("?data_connect@@YAXPAUs_data_array@@JPAX@Z");
//};

//void data_disconnect(struct s_data_array *)
//{
//    mangled_ppc("?data_disconnect@@YAXPAUs_data_array@@@Z");
//};

//void data_make_valid(struct s_data_array *)
//{
//    mangled_ppc("?data_make_valid@@YAXPAUs_data_array@@@Z");
//};

//void data_make_invalid(struct s_data_array *)
//{
//    mangled_ppc("?data_make_invalid@@YAXPAUs_data_array@@@Z");
//};

//void data_copy(struct s_data_array const *, struct s_data_array *)
//{
//    mangled_ppc("?data_copy@@YAXPBUs_data_array@@PAU1@@Z");
//};

//void data_delete_all(struct s_data_array *)
//{
//    mangled_ppc("?data_delete_all@@YAXPAUs_data_array@@@Z");
//};

//long datum_new(struct s_data_array *)
//{
//    mangled_ppc("?datum_new@@YAJPAUs_data_array@@@Z");
//};

//bool datum_available_at_index(struct s_data_array const *, long)
//{
//    mangled_ppc("?datum_available_at_index@@YA_NPBUs_data_array@@J@Z");
//};

//long datum_new_at_index(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_new_at_index@@YAJPAUs_data_array@@J@Z");
//};

//long datum_new_at_absolute_index(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_new_at_absolute_index@@YAJPAUs_data_array@@J@Z");
//};

//long datum_new_in_range(struct s_data_array *, long, long, enum e_datum_salt)
//{
//    mangled_ppc("?datum_new_in_range@@YAJPAUs_data_array@@JJW4e_datum_salt@@@Z");
//};

//void datum_clear(void *, unsigned int)
//{
//    mangled_ppc("?datum_clear@@YAXPAXI@Z");
//};

//void datum_delete(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_delete@@YAXPAUs_data_array@@J@Z");
//};

//void * datum_get(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_get@@YAPAXPAUs_data_array@@J@Z");
//};

//void * datum_get_absolute(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_get_absolute@@YAPAXPAUs_data_array@@J@Z");
//};

//void * datum_try_and_get(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_try_and_get@@YAPAXPAUs_data_array@@J@Z");
//};

//void * datum_try_and_get_unsafe(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_try_and_get_unsafe@@YAPAXPAUs_data_array@@J@Z");
//};

//void * datum_try_and_get_absolute(struct s_data_array *, long)
//{
//    mangled_ppc("?datum_try_and_get_absolute@@YAPAXPAUs_data_array@@J@Z");
//};

//long datum_absolute_index_to_index(struct s_data_array const *, long)
//{
//    mangled_ppc("?datum_absolute_index_to_index@@YAJPBUs_data_array@@J@Z");
//};

//void data_iterator_begin(struct s_data_iterator *, struct s_data_array const *)
//{
//    mangled_ppc("?data_iterator_begin@@YAXPAUs_data_iterator@@PBUs_data_array@@@Z");
//};

//void const * data_iterator_next(struct s_data_iterator *)
//{
//    mangled_ppc("?data_iterator_next@@YAPBXPAUs_data_iterator@@@Z");
//};

//long data_next_index(struct s_data_array const *, long)
//{
//    mangled_ppc("?data_next_index@@YAJPBUs_data_array@@J@Z");
//};

//long data_last_index(struct s_data_array const *)
//{
//    mangled_ppc("?data_last_index@@YAJPBUs_data_array@@@Z");
//};

//long data_previous_index(struct s_data_array const *, long)
//{
//    mangled_ppc("?data_previous_index@@YAJPBUs_data_array@@J@Z");
//};

//void data_verify(struct s_data_array const *)
//{
//    mangled_ppc("?data_verify@@YAXPBUs_data_array@@@Z");
//};

//bool data_is_empty(struct s_data_array const *)
//{
//    mangled_ppc("?data_is_empty@@YA_NPBUs_data_array@@@Z");
//};

//bool data_is_full(struct s_data_array const *)
//{
//    mangled_ppc("?data_is_full@@YA_NPBUs_data_array@@@Z");
//};

//long data_get_count(struct s_data_array const *)
//{
//    mangled_ppc("?data_get_count@@YAJPBUs_data_array@@@Z");
//};

//long data_get_watermark(struct s_data_array const *)
//{
//    mangled_ppc("?data_get_watermark@@YAJPBUs_data_array@@@Z");
//};

//void data_unprotect_all(struct s_data_array const *)
//{
//    mangled_ppc("?data_unprotect_all@@YAXPBUs_data_array@@@Z");
//};

//void data_set_new_base_address(struct s_data_array **, struct s_data_array *)
//{
//    mangled_ppc("?data_set_new_base_address@@YAXPAPAUs_data_array@@PAU1@@Z");
//};

//void data_update_protection(struct s_data_array const *)
//{
//    mangled_ppc("?data_update_protection@@YAXPBUs_data_array@@@Z");
//};

//short data_make_first_identifier(struct s_data_array const *)
//{
//    mangled_ppc("?data_make_first_identifier@@YAFPBUs_data_array@@@Z");
//};

//void datum_initialize(struct s_data_array *, struct s_datum_header *, short *)
//{
//    mangled_ppc("?datum_initialize@@YAXPAUs_data_array@@PAUs_datum_header@@PAF@Z");
//};

//long data_next_absolute_index(struct s_data_array const *, long)
//{
//    mangled_ppc("?data_next_absolute_index@@YAJPBUs_data_array@@J@Z");
//};

//bool data_should_verify_data_pattern(struct s_data_array const *)
//{
//    mangled_ppc("?data_should_verify_data_pattern@@YA_NPBUs_data_array@@@Z");
//};

//void data_set_protection(struct s_data_array const *, long)
//{
//    mangled_ppc("?data_set_protection@@YAXPBUs_data_array@@J@Z");
//};

