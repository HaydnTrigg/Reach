#pragma once
#ifndef __TAG_GROUP_FILES_H__
#define __TAG_GROUP_FILES_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct s_tag_file_shim_backend;
struct s_tag_file_new_globals;
class c_allocation_interface;
class c_tag_group_files_allocation;
class c_monolithic_tag_group_files_allocator;

/* ---------- prototypes */

/* ---------- globals */

extern s_tag_file_shim_backend const g_single_file_tag_file_backend;
extern s_tag_file_shim_backend const g_monolithic_tag_file_backend;
extern s_tag_file_shim_backend const g_xbox_monolithic_tag_file_backend;
extern s_tag_file_shim_backend const g_cache_file_builder_tag_file_backend;
extern s_tag_file_shim_backend const g_cache_file_shared_tag_file_backend;
extern s_tag_file_shim_backend const g_cache_file_campaign_tag_file_backend;
extern s_tag_file_shim_backend const g_simple_patched_tag_file_backend;
extern s_tag_file_new_globals g_tag_file_new_globals;
extern c_allocation_interface *g_tag_file_new_allocator;
extern c_tag_group_files_allocation g_backend_tracker_allocator;
extern c_monolithic_tag_group_files_allocator g_monolithic_tag_allocator;

/* ---------- public code */

#endif // __TAG_GROUP_FILES_H__
