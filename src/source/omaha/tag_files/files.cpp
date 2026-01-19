/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char (*file_location_volume_names)[256]; // "?file_location_volume_names@@3PAY0BAA@DA"

// void file_location_set_volume(short, char const *);
// struct s_file_reference * file_reference_agnostic_create(struct s_file_reference *, short);
// struct s_file_reference * file_reference_create_from_path(struct s_file_reference *, char const *, bool);
// struct s_file_reference * file_reference_copy(struct s_file_reference *, struct s_file_reference const *);
// struct s_file_reference * file_reference_add_directory(struct s_file_reference *, char const *);
// struct s_file_reference * file_reference_remove_directory(struct s_file_reference *);
// struct s_file_reference * file_reference_set_name(struct s_file_reference *, char const *);
// struct s_file_reference * file_reference_remove_name(struct s_file_reference *);
// short file_reference_get_location(struct s_file_reference const *);
// char * file_reference_get_fullpath(struct s_file_reference const *, char *, long);
// char * file_reference_get_name(struct s_file_reference const *, unsigned long, char *, long);
// bool file_references_equal(struct s_file_reference const *, struct s_file_reference const *);
// long find_files(unsigned long, struct s_file_reference const *, long, struct s_file_reference *);
// bool file_is_readable(struct s_file_reference *, unsigned long *);
// void file_trim(struct s_file_reference *, long);
// void * file_read_into_memory_with_null_padding(struct s_file_reference *, unsigned long *, unsigned long);
// void * file_read_into_memory(struct s_file_reference *, unsigned long *);
// bool file_read_into_buffer(struct s_file_reference *, void *, unsigned long);
// void file_printf(struct s_file_reference *, char const *, ...);
// void file_vprintf(struct s_file_reference *, char const *, char *);
// void directory_create_or_delete_contents(char const *);
// char const * file_reference_get_path_for_debugging(struct s_file_reference const *);
// bool datastore_read(char const *, char const *, long, void *);
// bool datastore_write(char const *, char const *, long, void const *);
// struct file_reference_info * file_reference_get_info(struct s_file_reference *);
// bool file_create_parent_directories_if_not_present(struct s_file_reference const *);

//void file_location_set_volume(short, char const *)
//{
//    mangled_ppc("?file_location_set_volume@@YAXFPBD@Z");
//};

//struct s_file_reference * file_reference_agnostic_create(struct s_file_reference *, short)
//{
//    mangled_ppc("?file_reference_agnostic_create@@YAPAUs_file_reference@@PAU1@F@Z");
//};

//struct s_file_reference * file_reference_create_from_path(struct s_file_reference *, char const *, bool)
//{
//    mangled_ppc("?file_reference_create_from_path@@YAPAUs_file_reference@@PAU1@PBD_N@Z");
//};

//struct s_file_reference * file_reference_copy(struct s_file_reference *, struct s_file_reference const *)
//{
//    mangled_ppc("?file_reference_copy@@YAPAUs_file_reference@@PAU1@PBU1@@Z");
//};

//struct s_file_reference * file_reference_add_directory(struct s_file_reference *, char const *)
//{
//    mangled_ppc("?file_reference_add_directory@@YAPAUs_file_reference@@PAU1@PBD@Z");
//};

//struct s_file_reference * file_reference_remove_directory(struct s_file_reference *)
//{
//    mangled_ppc("?file_reference_remove_directory@@YAPAUs_file_reference@@PAU1@@Z");
//};

//struct s_file_reference * file_reference_set_name(struct s_file_reference *, char const *)
//{
//    mangled_ppc("?file_reference_set_name@@YAPAUs_file_reference@@PAU1@PBD@Z");
//};

//struct s_file_reference * file_reference_remove_name(struct s_file_reference *)
//{
//    mangled_ppc("?file_reference_remove_name@@YAPAUs_file_reference@@PAU1@@Z");
//};

//short file_reference_get_location(struct s_file_reference const *)
//{
//    mangled_ppc("?file_reference_get_location@@YAFPBUs_file_reference@@@Z");
//};

//char * file_reference_get_fullpath(struct s_file_reference const *, char *, long)
//{
//    mangled_ppc("?file_reference_get_fullpath@@YAPADPBUs_file_reference@@PADJ@Z");
//};

//char * file_reference_get_name(struct s_file_reference const *, unsigned long, char *, long)
//{
//    mangled_ppc("?file_reference_get_name@@YAPADPBUs_file_reference@@KPADJ@Z");
//};

//bool file_references_equal(struct s_file_reference const *, struct s_file_reference const *)
//{
//    mangled_ppc("?file_references_equal@@YA_NPBUs_file_reference@@0@Z");
//};

//long find_files(unsigned long, struct s_file_reference const *, long, struct s_file_reference *)
//{
//    mangled_ppc("?find_files@@YAJKPBUs_file_reference@@JPAU1@@Z");
//};

//bool file_is_readable(struct s_file_reference *, unsigned long *)
//{
//    mangled_ppc("?file_is_readable@@YA_NPAUs_file_reference@@PAK@Z");
//};

//void file_trim(struct s_file_reference *, long)
//{
//    mangled_ppc("?file_trim@@YAXPAUs_file_reference@@J@Z");
//};

//void * file_read_into_memory_with_null_padding(struct s_file_reference *, unsigned long *, unsigned long)
//{
//    mangled_ppc("?file_read_into_memory_with_null_padding@@YAPAXPAUs_file_reference@@PAKK@Z");
//};

//void * file_read_into_memory(struct s_file_reference *, unsigned long *)
//{
//    mangled_ppc("?file_read_into_memory@@YAPAXPAUs_file_reference@@PAK@Z");
//};

//bool file_read_into_buffer(struct s_file_reference *, void *, unsigned long)
//{
//    mangled_ppc("?file_read_into_buffer@@YA_NPAUs_file_reference@@PAXK@Z");
//};

//void file_printf(struct s_file_reference *, char const *, ...)
//{
//    mangled_ppc("?file_printf@@YAXPAUs_file_reference@@PBDZZ");
//};

//void file_vprintf(struct s_file_reference *, char const *, char *)
//{
//    mangled_ppc("?file_vprintf@@YAXPAUs_file_reference@@PBDPAD@Z");
//};

//void directory_create_or_delete_contents(char const *)
//{
//    mangled_ppc("?directory_create_or_delete_contents@@YAXPBD@Z");
//};

//char const * file_reference_get_path_for_debugging(struct s_file_reference const *)
//{
//    mangled_ppc("?file_reference_get_path_for_debugging@@YAPBDPBUs_file_reference@@@Z");
//};

//bool datastore_read(char const *, char const *, long, void *)
//{
//    mangled_ppc("?datastore_read@@YA_NPBD0JPAX@Z");
//};

//bool datastore_write(char const *, char const *, long, void const *)
//{
//    mangled_ppc("?datastore_write@@YA_NPBD0JPBX@Z");
//};

//struct file_reference_info * file_reference_get_info(struct s_file_reference *)
//{
//    mangled_ppc("?file_reference_get_info@@YAPAUfile_reference_info@@PAUs_file_reference@@@Z");
//};

//bool file_create_parent_directories_if_not_present(struct s_file_reference const *)
//{
//    mangled_ppc("?file_create_parent_directories_if_not_present@@YA_NPBUs_file_reference@@@Z");
//};

