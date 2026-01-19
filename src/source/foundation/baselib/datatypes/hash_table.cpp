/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int hash_table_allocation_size(unsigned int, long, long);
// ?hash_table_create@@YAPAUs_hash_table_internals@@PBDIJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z;
// void hash_table_dispose(struct s_hash_table_internals *, char const *, long);
// void hash_table_reset(struct s_hash_table_internals *);
// struct s_hash_table_bucket ** get_buckets(struct s_hash_table_internals *);
// struct s_hash_table_bucket * get_free_list_elements(struct s_hash_table_internals *);
// void hash_table_verify(struct s_hash_table_internals const *);
// struct s_hash_table_bucket const * get_free_list_elements_const(struct s_hash_table_internals const *);
// void hash_table_rebase(struct s_hash_table_internals *, bool);
// bool hash_table_add(struct s_hash_table_internals *, void const *, void const *);
// void * get_user_data(struct s_hash_table_bucket *);
// bool hash_table_remove(struct s_hash_table_internals *, void const *);
// void const * hash_table_find(struct s_hash_table_internals const *, void const *, void *);
// void const * get_user_data_const(struct s_hash_table_bucket const *);
// bool hash_table_set_data(struct s_hash_table_internals *, void const *, void const *);
// ?hash_table_set_functions@@YAXPAUs_hash_table_internals@@Q6AKPBX@ZQ6A_N11@Z@Z;
// bool valid_bucket_pointer(struct s_hash_table_internals const *, struct s_hash_table_bucket const *);
// void rebase_pointer(struct s_hash_table_internals *, struct s_hash_table_bucket **);
// struct s_hash_table_bucket const * hash_table_find_internal(struct s_hash_table_internals const *, void const *);
// unsigned long string_hash_table_hash_function(void const *);
// bool string_hash_table_compare_function(void const *, void const *);

//unsigned int hash_table_allocation_size(unsigned int, long, long)
//{
//    mangled_ppc("?hash_table_allocation_size@@YAIIJJ@Z");
//};

//?hash_table_create@@YAPAUs_hash_table_internals@@PBDIJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z
//{
//    mangled_ppc("?hash_table_create@@YAPAUs_hash_table_internals@@PBDIJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z");
//};

//void hash_table_dispose(struct s_hash_table_internals *, char const *, long)
//{
//    mangled_ppc("?hash_table_dispose@@YAXPAUs_hash_table_internals@@PBDJ@Z");
//};

//void hash_table_reset(struct s_hash_table_internals *)
//{
//    mangled_ppc("?hash_table_reset@@YAXPAUs_hash_table_internals@@@Z");
//};

//struct s_hash_table_bucket ** get_buckets(struct s_hash_table_internals *)
//{
//    mangled_ppc("?get_buckets@@YAPAPAUs_hash_table_bucket@@PAUs_hash_table_internals@@@Z");
//};

//struct s_hash_table_bucket * get_free_list_elements(struct s_hash_table_internals *)
//{
//    mangled_ppc("?get_free_list_elements@@YAPAUs_hash_table_bucket@@PAUs_hash_table_internals@@@Z");
//};

//void hash_table_verify(struct s_hash_table_internals const *)
//{
//    mangled_ppc("?hash_table_verify@@YAXPBUs_hash_table_internals@@@Z");
//};

//struct s_hash_table_bucket const * get_free_list_elements_const(struct s_hash_table_internals const *)
//{
//    mangled_ppc("?get_free_list_elements_const@@YAPBUs_hash_table_bucket@@PBUs_hash_table_internals@@@Z");
//};

//void hash_table_rebase(struct s_hash_table_internals *, bool)
//{
//    mangled_ppc("?hash_table_rebase@@YAXPAUs_hash_table_internals@@_N@Z");
//};

//bool hash_table_add(struct s_hash_table_internals *, void const *, void const *)
//{
//    mangled_ppc("?hash_table_add@@YA_NPAUs_hash_table_internals@@PBX1@Z");
//};

//void * get_user_data(struct s_hash_table_bucket *)
//{
//    mangled_ppc("?get_user_data@@YAPAXPAUs_hash_table_bucket@@@Z");
//};

//bool hash_table_remove(struct s_hash_table_internals *, void const *)
//{
//    mangled_ppc("?hash_table_remove@@YA_NPAUs_hash_table_internals@@PBX@Z");
//};

//void const * hash_table_find(struct s_hash_table_internals const *, void const *, void *)
//{
//    mangled_ppc("?hash_table_find@@YAPBXPBUs_hash_table_internals@@PBXPAX@Z");
//};

//void const * get_user_data_const(struct s_hash_table_bucket const *)
//{
//    mangled_ppc("?get_user_data_const@@YAPBXPBUs_hash_table_bucket@@@Z");
//};

//bool hash_table_set_data(struct s_hash_table_internals *, void const *, void const *)
//{
//    mangled_ppc("?hash_table_set_data@@YA_NPAUs_hash_table_internals@@PBX1@Z");
//};

//?hash_table_set_functions@@YAXPAUs_hash_table_internals@@Q6AKPBX@ZQ6A_N11@Z@Z
//{
//    mangled_ppc("?hash_table_set_functions@@YAXPAUs_hash_table_internals@@Q6AKPBX@ZQ6A_N11@Z@Z");
//};

//bool valid_bucket_pointer(struct s_hash_table_internals const *, struct s_hash_table_bucket const *)
//{
//    mangled_ppc("?valid_bucket_pointer@@YA_NPBUs_hash_table_internals@@PBUs_hash_table_bucket@@@Z");
//};

//void rebase_pointer(struct s_hash_table_internals *, struct s_hash_table_bucket **)
//{
//    mangled_ppc("?rebase_pointer@@YAXPAUs_hash_table_internals@@PAPAUs_hash_table_bucket@@@Z");
//};

//struct s_hash_table_bucket const * hash_table_find_internal(struct s_hash_table_internals const *, void const *)
//{
//    mangled_ppc("?hash_table_find_internal@@YAPBUs_hash_table_bucket@@PBUs_hash_table_internals@@PBX@Z");
//};

//unsigned long string_hash_table_hash_function(void const *)
//{
//    mangled_ppc("?string_hash_table_hash_function@@YAKPBX@Z");
//};

//bool string_hash_table_compare_function(void const *, void const *)
//{
//    mangled_ppc("?string_hash_table_compare_function@@YA_NPBX0@Z");
//};

