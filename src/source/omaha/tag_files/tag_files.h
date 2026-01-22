#pragma once
#include "tag_group_definitions.h"
#ifndef __TAG_FILES_H__
#define __TAG_FILES_H__

/* ---------- headers */

#include "omaha/memory/static_arrays.h"

/* ---------- constants */

enum e_shell_application_type;
enum e_tag_file_open_result;

enum e_load_tag_flag
{
    _load_tag_unknown0_bit,
    _load_tag_unknown1_bit,
    _load_tag_unknown2_bit,
    _load_tag_unknown3_bit,
    _load_tag_unknown4_bit,
    _load_tag_unknown5_bit,
    _load_tag_unknown6_bit,
    _load_tag_unknown7_bit,
    _load_tag_unknown8_bit,
    _load_tag_unknown9_bit,
    k_num_load_tag_flags
};
typedef c_flags<e_load_tag_flag, unsigned short, k_num_load_tag_flags> c_load_tag_flag;

/* ---------- definitions */

struct s_tag_file_shim_backend;
struct s_async_task_id;
struct s_file_last_modification_date;
struct s_file_reference;
struct s_tag_group;

/* ---------- prototypes */

extern void tag_files_open(e_shell_application_type);
extern void tag_files_close(void);
extern void tag_files_initialize_from_main(void);
extern void tag_files_dispose_backend(void);
extern void tag_files_set_initialized_backend(s_tag_file_shim_backend const *);
extern void tag_files_set_backend(s_tag_file_shim_backend const *);
extern void tag_file_set_backend_by_name(char const * new_backend_name);
extern long tag_files_get_sequence_identifier(void);
extern bool tag_files_backend_supports_alternate_streams(void);
extern bool tag_files_can_load_tags(void);
extern bool tag_files_get_total_bytes_read(unsigned __int64*);
extern void tag_files_dump_allocation_profile(void);
extern bool tag_file_try_to_read(unsigned long, char const *, unsigned long, unsigned long, void *);
extern void tag_files_pin_layout_cache(void);
extern void tag_files_unpin_layout_cache(void);
extern bool tag_files_support_async_data(void);
extern bool tag_files_async_data_available(void);
extern s_async_task_id tag_file_read_async(long, unsigned long, char const *, unsigned long, unsigned long, void *, class c_synchronized_int32*, class c_synchronized_int32*, long, long);
extern bool tag_file_has_async_data(unsigned long, char const *);
extern bool tag_file_read_only(unsigned long, char const *);
extern bool tag_file_get_last_modification_date(unsigned long, char const *, s_file_last_modification_date *);
extern bool tag_file_set_writeable(unsigned long, char const *, bool);
extern bool tag_file_checksum(unsigned long, char const *, unsigned long *);
extern bool tag_file_exists(unsigned long, char const *);
extern bool tag_file_get_file_reference(s_file_reference *, unsigned long, char const *);
extern bool tag_file_get_name_and_group_tag_from_path(char const *, unsigned long *, char (&)[256]);
extern char const * tag_files_get_root_directory_path(void);
extern void tag_files_predict_load(class c_tag_files_prediction_manager *, unsigned long, char const *);
extern void tag_files_predict_load_from_block(class c_tag_files_prediction_manager *, s_tag_block const *);
extern void tag_files_predict_load_finished(void);
extern bool tag_save_to_backend(s_tag_group const *, char const *, s_tag_block *, unsigned long *, class c_tag_alternate_stream_iterator *);
extern bool tag_load_from_backend(s_tag_block *, s_tag_group const *, char const *, c_load_tag_flag, e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *);
extern void tag_files_sync_initialize(void);
extern void tag_files_sync_dispose(void);
extern void tag_files_sync_idle(void);
extern bool tag_files_sync_tags_changed(void);
extern class c_tag_file_difference_iterator * tag_files_sync_get_difference_iterator(void);
extern void tag_files_sync_dispose_difference_iterator(class c_tag_file_difference_iterator *);
extern void tag_files_sync_reload_begin(void);
extern void tag_files_sync_reload_end(void);
extern void tag_files_set_cache_file_output(class c_allocation_interface *, class c_cache_file_builder_tag_resource_output *);
extern void tag_files_close_cache_file_output(void);
extern void tag_file_get_path(unsigned long, char const *, char (&)[256]);
extern bool tag_file_create_temporary_path(unsigned long, char const *, char (&)[256], char (&)[256]);
// extern char * file_reference_get_name<256>(s_file_reference const *, unsigned long, char (&)[256]);
// extern char * file_reference_get_fullpath<256>(s_file_reference const *, char (&)[256]);

/* ---------- globals */

extern s_tag_file_shim_backend const * g_default_tag_file_shim;

/* ---------- public code */

#endif // __TAG_FILES_H__
