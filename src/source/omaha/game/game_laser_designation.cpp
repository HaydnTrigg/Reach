/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_objective_allow_laser_designation_selection_of_objectives; // "?g_objective_allow_laser_designation_selection_of_objectives@@3_NA"
// bool g_laser_designation_requires_equipment; // "?g_laser_designation_requires_equipment@@3_NA"
// float g_laser_designation_laser_point_fade_out_seconds; // "?g_laser_designation_laser_point_fade_out_seconds@@3MA"
// bool g_laser_designation_control_enable; // "?g_laser_designation_control_enable@@3_NA"
// bool g_laser_designation_control_as_toggle; // "?g_laser_designation_control_as_toggle@@3_NA"
// bool g_laser_designation_allow_firing_at_own_laser; // "?g_laser_designation_allow_firing_at_own_laser@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_lasing_data_allocator::*)(void *)> g_lasing_data_allocator; // "?g_lasing_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_lasing_data; // "?g_lasing_data@@3PAUs_data_array@@A"

// void __tls_set_g_lasing_data_allocator(void *);
// void laser_designation_initialize(void);
// void laser_designation_dispose(void);
// void laser_designation_initialize_for_new_map(void);
// void laser_designation_dispose_from_old_map(void);
// void laser_designation_enable_laser(long, bool);
// void laser_designation_notify_locked_on(long, long);
// long find_unit_locked_on_index(struct s_lasing_datum *, long);
// void laser_designation_biped_update(long);
// void laser_designation_state_request(long, bool);
// bool handle_laser_designation_objective_selection(long, bool);
// bool laser_designation_biped_is_laser_equipped(long);
// void laser_designation_pre_object_update(void);
// void laser_designation_post_object_update(void);
// void laser_designation_handle_deleted_object(long);
// void laser_designation_info_add(long);
// void laser_designation_info_delete(long);
// void laser_designation_submit_navpoints(enum e_output_user_index);
// public: c_chud_navpoint::c_chud_navpoint(void);
// bool laser_designation_is_laser_on(long);
// bool laser_designation_is_lasing_button_pressed(long);
// float laser_designation_get_laser_radius(void);
// bool laser_designation_get_laser_point(long, union real_point3d *);
// bool laser_designation_get_laser_object(long, long *);
// void hs_laser_designation_allow_object_to_be_lased(long, bool);
// bool hs_laser_designation_is_object_being_lased(long);
// public: void c_lasing_iterator::begin(void);
// public: bool c_lasing_iterator::next(void);
// long laser_designation_info_get_index(long);
// public: void c_data_iterator<struct s_lasing_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_lasing_datum>::next(void);
// public: long c_data_iterator<struct s_lasing_datum>::get_index(void) const;
// public: void c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_chud_navpoint_flags, bool);
// public: c_flags<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void);
// public: wchar_t * c_static_wchar_string<16>::copy_to(wchar_t *, unsigned int) const;
// public: bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_chud_navpoint_flags);
// private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_chud_navpoint_flags);
// private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_chud_navpoint_flags);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>(void);
// void g_lasing_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_lasing_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_lasing_data_allocator@@YAXPAX@Z");
//};

//void laser_designation_initialize(void)
//{
//    mangled_ppc("?laser_designation_initialize@@YAXXZ");
//};

//void laser_designation_dispose(void)
//{
//    mangled_ppc("?laser_designation_dispose@@YAXXZ");
//};

//void laser_designation_initialize_for_new_map(void)
//{
//    mangled_ppc("?laser_designation_initialize_for_new_map@@YAXXZ");
//};

//void laser_designation_dispose_from_old_map(void)
//{
//    mangled_ppc("?laser_designation_dispose_from_old_map@@YAXXZ");
//};

//void laser_designation_enable_laser(long, bool)
//{
//    mangled_ppc("?laser_designation_enable_laser@@YAXJ_N@Z");
//};

//void laser_designation_notify_locked_on(long, long)
//{
//    mangled_ppc("?laser_designation_notify_locked_on@@YAXJJ@Z");
//};

//long find_unit_locked_on_index(struct s_lasing_datum *, long)
//{
//    mangled_ppc("?find_unit_locked_on_index@@YAJPAUs_lasing_datum@@J@Z");
//};

//void laser_designation_biped_update(long)
//{
//    mangled_ppc("?laser_designation_biped_update@@YAXJ@Z");
//};

//void laser_designation_state_request(long, bool)
//{
//    mangled_ppc("?laser_designation_state_request@@YAXJ_N@Z");
//};

//bool handle_laser_designation_objective_selection(long, bool)
//{
//    mangled_ppc("?handle_laser_designation_objective_selection@@YA_NJ_N@Z");
//};

//bool laser_designation_biped_is_laser_equipped(long)
//{
//    mangled_ppc("?laser_designation_biped_is_laser_equipped@@YA_NJ@Z");
//};

//void laser_designation_pre_object_update(void)
//{
//    mangled_ppc("?laser_designation_pre_object_update@@YAXXZ");
//};

//void laser_designation_post_object_update(void)
//{
//    mangled_ppc("?laser_designation_post_object_update@@YAXXZ");
//};

//void laser_designation_handle_deleted_object(long)
//{
//    mangled_ppc("?laser_designation_handle_deleted_object@@YAXJ@Z");
//};

//void laser_designation_info_add(long)
//{
//    mangled_ppc("?laser_designation_info_add@@YAXJ@Z");
//};

//void laser_designation_info_delete(long)
//{
//    mangled_ppc("?laser_designation_info_delete@@YAXJ@Z");
//};

//void laser_designation_submit_navpoints(enum e_output_user_index)
//{
//    mangled_ppc("?laser_designation_submit_navpoints@@YAXW4e_output_user_index@@@Z");
//};

//public: c_chud_navpoint::c_chud_navpoint(void)
//{
//    mangled_ppc("??0c_chud_navpoint@@QAA@XZ");
//};

//bool laser_designation_is_laser_on(long)
//{
//    mangled_ppc("?laser_designation_is_laser_on@@YA_NJ@Z");
//};

//bool laser_designation_is_lasing_button_pressed(long)
//{
//    mangled_ppc("?laser_designation_is_lasing_button_pressed@@YA_NJ@Z");
//};

//float laser_designation_get_laser_radius(void)
//{
//    mangled_ppc("?laser_designation_get_laser_radius@@YAMXZ");
//};

//bool laser_designation_get_laser_point(long, union real_point3d *)
//{
//    mangled_ppc("?laser_designation_get_laser_point@@YA_NJPATreal_point3d@@@Z");
//};

//bool laser_designation_get_laser_object(long, long *)
//{
//    mangled_ppc("?laser_designation_get_laser_object@@YA_NJPAJ@Z");
//};

//void hs_laser_designation_allow_object_to_be_lased(long, bool)
//{
//    mangled_ppc("?hs_laser_designation_allow_object_to_be_lased@@YAXJ_N@Z");
//};

//bool hs_laser_designation_is_object_being_lased(long)
//{
//    mangled_ppc("?hs_laser_designation_is_object_being_lased@@YA_NJ@Z");
//};

//public: void c_lasing_iterator::begin(void)
//{
//    mangled_ppc("?begin@c_lasing_iterator@@QAAXXZ");
//};

//public: bool c_lasing_iterator::next(void)
//{
//    mangled_ppc("?next@c_lasing_iterator@@QAA_NXZ");
//};

//long laser_designation_info_get_index(long)
//{
//    mangled_ppc("?laser_designation_info_get_index@@YAJJ@Z");
//};

//public: void c_data_iterator<struct s_lasing_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_lasing_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_lasing_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_lasing_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_lasing_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_lasing_datum@@@@QBAJXZ");
//};

//public: void c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_chud_navpoint_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_chud_navpoint_flags@@_N@Z");
//};

//public: c_flags<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::c_flags<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: wchar_t * c_static_wchar_string<16>::copy_to(wchar_t *, unsigned int) const
//{
//    mangled_ppc("?copy_to@?$c_static_wchar_string@$0BA@@@QBAPA_WPA_WI@Z");
//};

//public: bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_chud_navpoint_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_chud_navpoint_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_chud_navpoint_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_chud_navpoint_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_chud_navpoint_flags, unsigned short, 9, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_chud_navpoint_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_chud_navpoint_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_chud_navpoint_flags@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_lasing_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_lasing_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_lasing_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_lasing_data_allocator@@YAXXZ");
//};

