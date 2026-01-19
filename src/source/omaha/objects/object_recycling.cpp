/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_recycling_tolerance_flag_bits const c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@2W4e_recycling_tolerance_flag_bits@@B"
// struct s_tag_struct_definition garbage_collection_block_struct_definition; // "?garbage_collection_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition garbage_collection_block; // "?garbage_collection_block@@3Us_tag_block_definition@@A"
// struct s_recycling_history_item *g_recycling_history_storage; // "?g_recycling_history_storage@@3PAUs_recycling_history_item@@A"
// bool debug_object_recycling; // "?debug_object_recycling@@3_NA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_recycling_groups_allocator::*)(void *)> g_recycling_groups_allocator; // "?g_recycling_groups_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@A"
// class c_stop_watch g_object_deletion_timer; // "?g_object_deletion_timer@@3Vc_stop_watch@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_recycling_volumes_allocator::*)(void *)> g_recycling_volumes_allocator; // "?g_recycling_volumes_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@A"
// class c_ring_buffer g_recycling_history_ring; // "?g_recycling_history_ring@@3Vc_ring_buffer@@A"
// union argb_color const **g_recycling_object_colors; // "?g_recycling_object_colors@@3PAPBTargb_color@@A"
// struct s_data_array *recycling_groups; // "?recycling_groups@@3PAUs_data_array@@A"
// struct s_recycling_volumes *recycling_volumes; // "?recycling_volumes@@3PAUs_recycling_volumes@@A"

// void __tls_set_g_recycling_groups_allocator(void *);
// void __tls_set_g_recycling_volumes_allocator(void *);
// void objects_recycling_initialize(void);
// void objects_recycling_dispose(void);
// void objects_recycling_initialize_for_new_map(void);
// void objects_recycling_dispose_from_old_map(void);
// void object_recycling_clear_history(void);
// void object_recycling_system_remove_volume(long);
// void object_recycling_group_remove_object(long);
// void move_recycling_object_between_groups(long, long, long, long);
// long setup_recycling_workspace(long, unsigned char *, long, bool *, char *, long);
// void objects_recycling_update_membership(struct s_recycling_workspace *);
// void objects_recycling_group_process(struct s_recycling_workspace *, long);
// void prepare_recycling_group_list(struct s_recycling_workspace *);
// void sort_recycling_entry_list(struct s_recycling_workspace *);
// int sort_recycling_entry_descending(void const *, void const *);
// float closest_player_distance_squared(union real_point3d const *, union real_point3d const *, long);
// long get_player_head_positions(union real_point3d *, long);
// long recycle_worst_object_available(long, unsigned char *, long, bool *, char *, long);
// void update_recycling_group_list(struct s_recycling_workspace *);
// long find_worst_object_in_group(long, struct s_recycling_group const *, long);
// void recycling_release_object(long);
// void objects_recycling_update(enum e_recycling_methods);
// void objects_recycling_render(struct s_recycling_workspace *);
// union argb_color const * get_recycling_group_color(long);
// class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver> recycling_get_tolerance_flags(void);
// class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver> recycling_get_target_flags(class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>);
// void object_recycling_reset_volume_list(void);
// void object_recycling_switch_lists(long, long *, long *);
// void object_recycling_system_add_volume_by_type(long, long, long, long);
// void object_recycling_system_add_volume(long, long, long);
// void update_active_recycling_volumes(struct s_recycling_workspace *);
// long object_garbage_time_get(enum e_object_garbage_type);
// void postprocess_garbage_collection_globals(long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void c_data_iterator<struct s_recycling_group>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_recycling_group>::next(void);
// public: struct s_recycling_group * c_data_iterator<struct s_recycling_group>::get_datum(void) const;
// public: long c_data_iterator<struct s_recycling_group>::get_index(void) const;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::valid(void) const;
// public: void c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_recycling_tolerance_flag_bits) const;
// public: void c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum e_recycling_tolerance_flag_bits, bool);
// public: unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>(void);
// public: static bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_recycling_tolerance_flag_bits);
// private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_recycling_tolerance_flag_bits);
// private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_recycling_tolerance_flag_bits);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>(void);
// void g_object_deletion_timer::`dynamic atexit destructor'(void);
// void g_recycling_groups_allocator::`dynamic atexit destructor'(void);
// void g_recycling_volumes_allocator::`dynamic atexit destructor'(void);
// void g_recycling_history_ring::`dynamic atexit destructor'(void);

//void __tls_set_g_recycling_groups_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_recycling_volumes_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z");
//};

//void objects_recycling_initialize(void)
//{
//    mangled_ppc("?objects_recycling_initialize@@YAXXZ");
//};

//void objects_recycling_dispose(void)
//{
//    mangled_ppc("?objects_recycling_dispose@@YAXXZ");
//};

//void objects_recycling_initialize_for_new_map(void)
//{
//    mangled_ppc("?objects_recycling_initialize_for_new_map@@YAXXZ");
//};

//void objects_recycling_dispose_from_old_map(void)
//{
//    mangled_ppc("?objects_recycling_dispose_from_old_map@@YAXXZ");
//};

//void object_recycling_clear_history(void)
//{
//    mangled_ppc("?object_recycling_clear_history@@YAXXZ");
//};

//void object_recycling_system_remove_volume(long)
//{
//    mangled_ppc("?object_recycling_system_remove_volume@@YAXJ@Z");
//};

//void object_recycling_group_remove_object(long)
//{
//    mangled_ppc("?object_recycling_group_remove_object@@YAXJ@Z");
//};

//void move_recycling_object_between_groups(long, long, long, long)
//{
//    mangled_ppc("?move_recycling_object_between_groups@@YAXJJJJ@Z");
//};

//long setup_recycling_workspace(long, unsigned char *, long, bool *, char *, long)
//{
//    mangled_ppc("?setup_recycling_workspace@@YAJJPAEJPA_NPADJ@Z");
//};

//void objects_recycling_update_membership(struct s_recycling_workspace *)
//{
//    mangled_ppc("?objects_recycling_update_membership@@YAXPAUs_recycling_workspace@@@Z");
//};

//void objects_recycling_group_process(struct s_recycling_workspace *, long)
//{
//    mangled_ppc("?objects_recycling_group_process@@YAXPAUs_recycling_workspace@@J@Z");
//};

//void prepare_recycling_group_list(struct s_recycling_workspace *)
//{
//    mangled_ppc("?prepare_recycling_group_list@@YAXPAUs_recycling_workspace@@@Z");
//};

//void sort_recycling_entry_list(struct s_recycling_workspace *)
//{
//    mangled_ppc("?sort_recycling_entry_list@@YAXPAUs_recycling_workspace@@@Z");
//};

//int sort_recycling_entry_descending(void const *, void const *)
//{
//    mangled_ppc("?sort_recycling_entry_descending@@YAHPBX0@Z");
//};

//float closest_player_distance_squared(union real_point3d const *, union real_point3d const *, long)
//{
//    mangled_ppc("?closest_player_distance_squared@@YAMPBTreal_point3d@@0J@Z");
//};

//long get_player_head_positions(union real_point3d *, long)
//{
//    mangled_ppc("?get_player_head_positions@@YAJPATreal_point3d@@J@Z");
//};

//long recycle_worst_object_available(long, unsigned char *, long, bool *, char *, long)
//{
//    mangled_ppc("?recycle_worst_object_available@@YAJJPAEJPA_NPADJ@Z");
//};

//void update_recycling_group_list(struct s_recycling_workspace *)
//{
//    mangled_ppc("?update_recycling_group_list@@YAXPAUs_recycling_workspace@@@Z");
//};

//long find_worst_object_in_group(long, struct s_recycling_group const *, long)
//{
//    mangled_ppc("?find_worst_object_in_group@@YAJJPBUs_recycling_group@@J@Z");
//};

//void recycling_release_object(long)
//{
//    mangled_ppc("?recycling_release_object@@YAXJ@Z");
//};

//void objects_recycling_update(enum e_recycling_methods)
//{
//    mangled_ppc("?objects_recycling_update@@YAXW4e_recycling_methods@@@Z");
//};

//void objects_recycling_render(struct s_recycling_workspace *)
//{
//    mangled_ppc("?objects_recycling_render@@YAXPAUs_recycling_workspace@@@Z");
//};

//union argb_color const * get_recycling_group_color(long)
//{
//    mangled_ppc("?get_recycling_group_color@@YAPBTargb_color@@J@Z");
//};

//class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver> recycling_get_tolerance_flags(void)
//{
//    mangled_ppc("?recycling_get_tolerance_flags@@YA?AV?$c_flags@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@XZ");
//};

//class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver> recycling_get_target_flags(class c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?recycling_get_target_flags@@YA?AV?$c_flags@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@V1@@Z");
//};

//void object_recycling_reset_volume_list(void)
//{
//    mangled_ppc("?object_recycling_reset_volume_list@@YAXXZ");
//};

//void object_recycling_switch_lists(long, long *, long *)
//{
//    mangled_ppc("?object_recycling_switch_lists@@YAXJPAJ0@Z");
//};

//void object_recycling_system_add_volume_by_type(long, long, long, long)
//{
//    mangled_ppc("?object_recycling_system_add_volume_by_type@@YAXJJJJ@Z");
//};

//void object_recycling_system_add_volume(long, long, long)
//{
//    mangled_ppc("?object_recycling_system_add_volume@@YAXJJJ@Z");
//};

//void update_active_recycling_volumes(struct s_recycling_workspace *)
//{
//    mangled_ppc("?update_active_recycling_volumes@@YAXPAUs_recycling_workspace@@@Z");
//};

//long object_garbage_time_get(enum e_object_garbage_type)
//{
//    mangled_ppc("?object_garbage_time_get@@YAJW4e_object_garbage_type@@@Z");
//};

//void postprocess_garbage_collection_globals(long)
//{
//    mangled_ppc("?postprocess_garbage_collection_globals@@YAXJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void c_data_iterator<struct s_recycling_group>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_recycling_group@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_recycling_group>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_recycling_group@@@@QAA_NXZ");
//};

//public: struct s_recycling_group * c_data_iterator<struct s_recycling_group>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_recycling_group@@@@QBAPAUs_recycling_group@@XZ");
//};

//public: long c_data_iterator<struct s_recycling_group>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_recycling_group@@@@QBAJXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::test(enum e_recycling_tolerance_flag_bits) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QBA_NW4e_recycling_tolerance_flag_bits@@@Z");
//};

//public: void c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::set(enum e_recycling_tolerance_flag_bits, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QAAXW4e_recycling_tolerance_flag_bits@@_N@Z");
//};

//public: unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::c_flags<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_recycling_tolerance_flag_bits)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@SA_NW4e_recycling_tolerance_flag_bits@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_recycling_tolerance_flag_bits)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@CAKW4e_recycling_tolerance_flag_bits@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_recycling_tolerance_flag_bits, unsigned long, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_recycling_tolerance_flag_bits)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_recycling_tolerance_flag_bits@@K$03Us_default_enum_string_resolver@@@@CAKW4e_recycling_tolerance_flag_bits@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_groups_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_groups_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_recycling_volumes_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_recycling_volumes_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_object_deletion_timer::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_object_deletion_timer@@YAXXZ");
//};

//void g_recycling_groups_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_recycling_groups_allocator@@YAXXZ");
//};

//void g_recycling_volumes_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_recycling_volumes_allocator@@YAXXZ");
//};

//void g_recycling_history_ring::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_recycling_history_ring@@YAXXZ");
//};

