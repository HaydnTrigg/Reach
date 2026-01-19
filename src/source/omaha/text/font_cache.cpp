/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_font_cache_flags const c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@2W4e_font_cache_flags@@B"
// bool g_font_cache_debug_list; // "?g_font_cache_debug_list@@3_NA"
// bool g_font_cache_debug_graph; // "?g_font_cache_debug_graph@@3_NA"
// bool g_font_cache_debug_texture; // "?g_font_cache_debug_texture@@3_NA"
// bool g_font_cache_status; // "?g_font_cache_status@@3_NA"
// class c_synchronized_int32g_font_cache_initialized; // "?g_font_cache_initialized@@3Vc_synchronized_int32@@A"
// struct s_font_cache_globals g_internal_font_cache_globals; // "?g_internal_font_cache_globals@@3Us_font_cache_globals@@A"
// struct s_font_cache_globals *g_font_cache_globals; // "?g_font_cache_globals@@3PAUs_font_cache_globals@@A"

// public: c_font_cache_scope_lock::c_font_cache_scope_lock(void);
// public: c_font_cache_scope_lock::~c_font_cache_scope_lock(void);
// bool font_cache_locked(void);
// void font_cache_new(void);
// void font_cache_delete(void);
// void font_cache_list_print_string(void *, char *, long, long);
// struct s_character_datum * character_get(enum e_character_data_index);
// void font_cache_debug_render(void);
// union rgb_color const * font_cache_lruv_render_page_usage_callback(void *, long, unsigned char);
// void font_cache_flush(void);
// void character_iterator_begin(struct s_character_iterator *);
// enum e_character_data_index character_iterator_next(struct s_character_iterator *);
// void font_cache_precache(void);
// void font_cache_get_physical_address_range(void const **, void const **);
// void font_cache_get_virtual_address_range(void const **, void const **);
// void font_cache_bitmap_save_to_targa(char const *);
// void font_cache_idle(void);
// public: c_font_cache_mt_safe::c_font_cache_mt_safe(void);
// public: c_font_cache_mt_safe::~c_font_cache_mt_safe(void);
// public: virtual long c_font_cache_mt_safe::character_data_get_hardware_block_index(enum e_character_data_index);
// public: virtual void c_font_cache_mt_safe::character_data_set_hardware_block_index(enum e_character_data_index, long);
// public: virtual void c_font_cache_mt_safe::character_data_hardware_block_touched(enum e_character_data_index);
// public: virtual bool c_font_cache_mt_safe::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *);
// public: virtual bool c_font_cache_mt_safe::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **);
// public: virtual bool c_font_cache_mt_safe::character_predict(enum e_font_id, enum e_utf32);
// public: c_null_font_cache::c_null_font_cache(void);
// public: c_null_font_cache::~c_null_font_cache(void);
// public: virtual long c_null_font_cache::character_data_get_hardware_block_index(enum e_character_data_index);
// public: virtual void c_null_font_cache::character_data_set_hardware_block_index(enum e_character_data_index, long);
// public: virtual void c_null_font_cache::character_data_hardware_block_touched(enum e_character_data_index);
// public: virtual bool c_null_font_cache::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *);
// public: virtual bool c_null_font_cache::character_predict(enum e_font_id, enum e_utf32);
// public: virtual bool c_null_font_cache::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **);
// void tracking_data_initialize(void);
// void tracking_data_terminate(void);
// void character_cache_initialize(void);
// void character_cache_terminate(void);
// void character_cache_idle(void);
// void character_cache_delete_block_proc(void *, long, bool, bool);
// bool character_cache_locked_block_proc(void *, long);
// void character_data_detach(class c_font_cache_mt_safe *, enum e_character_data_index);
// void character_data_free(class c_font_cache_mt_safe *, enum e_character_data_index);
// void character_data_touch(enum e_character_data_index);
// char const * character_data_describe(enum e_character_data_index);
// bool character_data_locked(enum e_character_data_index);
// unsigned long font_character_hash_function(void const *);
// bool font_character_compare_function(void const *, void const *);
// void font_cache_idle_status_lines(void);
// enum e_character_status font_cache_load_internal(class c_font_cache_mt_safe *, enum e_font_id, enum e_utf32, class c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>, unsigned long *, enum e_character_data_index *, struct s_font_character const **);
// enum e_character_data_index character_data_find(unsigned long);
// enum e_character_data_index character_data_allocate(class c_font_cache_mt_safe *, unsigned long, struct s_font_character const *, long, void const *);
// void character_datum_initialize(struct s_character_datum *, unsigned long, long, short, struct s_font_character const *, long, void const *);
// enum e_character_status font_cache_retrieve_character(unsigned long, class c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>, struct s_font_character const **, void const **);
// public: void c_data_iterator<struct s_font_cache_predicted_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_font_cache_predicted_datum>::next(void);
// public: struct s_font_cache_predicted_datum * c_data_iterator<struct s_font_cache_predicted_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_font_cache_predicted_datum>::get_index(void) const;
// public: static long s_static_array<unsigned short, 16384>::get_count(void);
// public: bool c_hash_table<enum e_character_data_index, unsigned long>::is_created(void) const;
// public: unsigned int c_hash_table<enum e_character_data_index, unsigned long>::allocation_size(long, long) const;
// ?create@?$c_hash_table@W4e_character_data_index@@K@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z;
// public: void c_hash_table<enum e_character_data_index, unsigned long>::dispose(char const *, long);
// public: void const * c_hash_table<enum e_character_data_index, unsigned long>::get_base_address(void) const;
// public: bool c_hash_table<enum e_character_data_index, unsigned long>::add(unsigned long const *, enum e_character_data_index const *);
// public: bool c_hash_table<enum e_character_data_index, unsigned long>::remove(unsigned long const *);
// public: unsigned long const * c_hash_table<enum e_character_data_index, unsigned long>::find(unsigned long const *, enum e_character_data_index *) const;
// public: void c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_font_cache_flags) const;
// public: void c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_font_cache_flags, bool);
// public: c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_font_cache_flags);
// private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_font_cache_flags);
// private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_font_cache_flags);
// public: s_font_cache_globals::s_font_cache_globals(void);
// public: c_hash_table<enum e_character_data_index, unsigned long>::c_hash_table<enum e_character_data_index, unsigned long>(void);
// public: s_font_cache_globals::~s_font_cache_globals(void);
// public: c_hash_table<enum e_character_data_index, unsigned long>::~c_hash_table<enum e_character_data_index, unsigned long>(void);
// void g_internal_font_cache_globals::`dynamic atexit destructor'(void);
// void g_font_cache_initialized::`dynamic atexit destructor'(void);

//public: c_font_cache_scope_lock::c_font_cache_scope_lock(void)
//{
//    mangled_ppc("??0c_font_cache_scope_lock@@QAA@XZ");
//};

//public: c_font_cache_scope_lock::~c_font_cache_scope_lock(void)
//{
//    mangled_ppc("??1c_font_cache_scope_lock@@QAA@XZ");
//};

//bool font_cache_locked(void)
//{
//    mangled_ppc("?font_cache_locked@@YA_NXZ");
//};

//void font_cache_new(void)
//{
//    mangled_ppc("?font_cache_new@@YAXXZ");
//};

//void font_cache_delete(void)
//{
//    mangled_ppc("?font_cache_delete@@YAXXZ");
//};

//void font_cache_list_print_string(void *, char *, long, long)
//{
//    mangled_ppc("?font_cache_list_print_string@@YAXPAXPADJJ@Z");
//};

//struct s_character_datum * character_get(enum e_character_data_index)
//{
//    mangled_ppc("?character_get@@YAPAUs_character_datum@@W4e_character_data_index@@@Z");
//};

//void font_cache_debug_render(void)
//{
//    mangled_ppc("?font_cache_debug_render@@YAXXZ");
//};

//union rgb_color const * font_cache_lruv_render_page_usage_callback(void *, long, unsigned char)
//{
//    mangled_ppc("?font_cache_lruv_render_page_usage_callback@@YAPBTrgb_color@@PAXJE@Z");
//};

//void font_cache_flush(void)
//{
//    mangled_ppc("?font_cache_flush@@YAXXZ");
//};

//void character_iterator_begin(struct s_character_iterator *)
//{
//    mangled_ppc("?character_iterator_begin@@YAXPAUs_character_iterator@@@Z");
//};

//enum e_character_data_index character_iterator_next(struct s_character_iterator *)
//{
//    mangled_ppc("?character_iterator_next@@YA?AW4e_character_data_index@@PAUs_character_iterator@@@Z");
//};

//void font_cache_precache(void)
//{
//    mangled_ppc("?font_cache_precache@@YAXXZ");
//};

//void font_cache_get_physical_address_range(void const **, void const **)
//{
//    mangled_ppc("?font_cache_get_physical_address_range@@YAXPAPBX0@Z");
//};

//void font_cache_get_virtual_address_range(void const **, void const **)
//{
//    mangled_ppc("?font_cache_get_virtual_address_range@@YAXPAPBX0@Z");
//};

//void font_cache_bitmap_save_to_targa(char const *)
//{
//    mangled_ppc("?font_cache_bitmap_save_to_targa@@YAXPBD@Z");
//};

//void font_cache_idle(void)
//{
//    mangled_ppc("?font_cache_idle@@YAXXZ");
//};

//public: c_font_cache_mt_safe::c_font_cache_mt_safe(void)
//{
//    mangled_ppc("??0c_font_cache_mt_safe@@QAA@XZ");
//};

//public: c_font_cache_mt_safe::~c_font_cache_mt_safe(void)
//{
//    mangled_ppc("??1c_font_cache_mt_safe@@QAA@XZ");
//};

//public: virtual long c_font_cache_mt_safe::character_data_get_hardware_block_index(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_get_hardware_block_index@c_font_cache_mt_safe@@UAAJW4e_character_data_index@@@Z");
//};

//public: virtual void c_font_cache_mt_safe::character_data_set_hardware_block_index(enum e_character_data_index, long)
//{
//    mangled_ppc("?character_data_set_hardware_block_index@c_font_cache_mt_safe@@UAAXW4e_character_data_index@@J@Z");
//};

//public: virtual void c_font_cache_mt_safe::character_data_hardware_block_touched(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_hardware_block_touched@c_font_cache_mt_safe@@UAAXW4e_character_data_index@@@Z");
//};

//public: virtual bool c_font_cache_mt_safe::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *)
//{
//    mangled_ppc("?get_pixels@c_font_cache_mt_safe@@UAA_NKW4e_character_data_index@@PBUs_font_character@@PAV?$s_static_array@G$0EAAA@@@@Z");
//};

//public: virtual bool c_font_cache_mt_safe::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **)
//{
//    mangled_ppc("?character_load@c_font_cache_mt_safe@@UAA_NW4e_font_id@@W4e_utf32@@_NPAKPAW4e_character_data_index@@PAPBUs_font_character@@@Z");
//};

//public: virtual bool c_font_cache_mt_safe::character_predict(enum e_font_id, enum e_utf32)
//{
//    mangled_ppc("?character_predict@c_font_cache_mt_safe@@UAA_NW4e_font_id@@W4e_utf32@@@Z");
//};

//public: c_null_font_cache::c_null_font_cache(void)
//{
//    mangled_ppc("??0c_null_font_cache@@QAA@XZ");
//};

//public: c_null_font_cache::~c_null_font_cache(void)
//{
//    mangled_ppc("??1c_null_font_cache@@QAA@XZ");
//};

//public: virtual long c_null_font_cache::character_data_get_hardware_block_index(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_get_hardware_block_index@c_null_font_cache@@UAAJW4e_character_data_index@@@Z");
//};

//public: virtual void c_null_font_cache::character_data_set_hardware_block_index(enum e_character_data_index, long)
//{
//    mangled_ppc("?character_data_set_hardware_block_index@c_null_font_cache@@UAAXW4e_character_data_index@@J@Z");
//};

//public: virtual void c_null_font_cache::character_data_hardware_block_touched(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_hardware_block_touched@c_null_font_cache@@UAAXW4e_character_data_index@@@Z");
//};

//public: virtual bool c_null_font_cache::get_pixels(unsigned long, enum e_character_data_index, struct s_font_character const *, class s_static_array<unsigned short, 16384> *)
//{
//    mangled_ppc("?get_pixels@c_null_font_cache@@UAA_NKW4e_character_data_index@@PBUs_font_character@@PAV?$s_static_array@G$0EAAA@@@@Z");
//};

//public: virtual bool c_null_font_cache::character_predict(enum e_font_id, enum e_utf32)
//{
//    mangled_ppc("?character_predict@c_null_font_cache@@UAA_NW4e_font_id@@W4e_utf32@@@Z");
//};

//public: virtual bool c_null_font_cache::character_load(enum e_font_id, enum e_utf32, bool, unsigned long *, enum e_character_data_index *, struct s_font_character const **)
//{
//    mangled_ppc("?character_load@c_null_font_cache@@UAA_NW4e_font_id@@W4e_utf32@@_NPAKPAW4e_character_data_index@@PAPBUs_font_character@@@Z");
//};

//void tracking_data_initialize(void)
//{
//    mangled_ppc("?tracking_data_initialize@@YAXXZ");
//};

//void tracking_data_terminate(void)
//{
//    mangled_ppc("?tracking_data_terminate@@YAXXZ");
//};

//void character_cache_initialize(void)
//{
//    mangled_ppc("?character_cache_initialize@@YAXXZ");
//};

//void character_cache_terminate(void)
//{
//    mangled_ppc("?character_cache_terminate@@YAXXZ");
//};

//void character_cache_idle(void)
//{
//    mangled_ppc("?character_cache_idle@@YAXXZ");
//};

//void character_cache_delete_block_proc(void *, long, bool, bool)
//{
//    mangled_ppc("?character_cache_delete_block_proc@@YAXPAXJ_N1@Z");
//};

//bool character_cache_locked_block_proc(void *, long)
//{
//    mangled_ppc("?character_cache_locked_block_proc@@YA_NPAXJ@Z");
//};

//void character_data_detach(class c_font_cache_mt_safe *, enum e_character_data_index)
//{
//    mangled_ppc("?character_data_detach@@YAXPAVc_font_cache_mt_safe@@W4e_character_data_index@@@Z");
//};

//void character_data_free(class c_font_cache_mt_safe *, enum e_character_data_index)
//{
//    mangled_ppc("?character_data_free@@YAXPAVc_font_cache_mt_safe@@W4e_character_data_index@@@Z");
//};

//void character_data_touch(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_touch@@YAXW4e_character_data_index@@@Z");
//};

//char const * character_data_describe(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_describe@@YAPBDW4e_character_data_index@@@Z");
//};

//bool character_data_locked(enum e_character_data_index)
//{
//    mangled_ppc("?character_data_locked@@YA_NW4e_character_data_index@@@Z");
//};

//unsigned long font_character_hash_function(void const *)
//{
//    mangled_ppc("?font_character_hash_function@@YAKPBX@Z");
//};

//bool font_character_compare_function(void const *, void const *)
//{
//    mangled_ppc("?font_character_compare_function@@YA_NPBX0@Z");
//};

//void font_cache_idle_status_lines(void)
//{
//    mangled_ppc("?font_cache_idle_status_lines@@YAXXZ");
//};

//enum e_character_status font_cache_load_internal(class c_font_cache_mt_safe *, enum e_font_id, enum e_utf32, class c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>, unsigned long *, enum e_character_data_index *, struct s_font_character const **)
//{
//    mangled_ppc("?font_cache_load_internal@@YA?AW4e_character_status@@PAVc_font_cache_mt_safe@@W4e_font_id@@W4e_utf32@@V?$c_flags@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@PAKPAW4e_character_data_index@@PAPBUs_font_character@@@Z");
//};

//enum e_character_data_index character_data_find(unsigned long)
//{
//    mangled_ppc("?character_data_find@@YA?AW4e_character_data_index@@K@Z");
//};

//enum e_character_data_index character_data_allocate(class c_font_cache_mt_safe *, unsigned long, struct s_font_character const *, long, void const *)
//{
//    mangled_ppc("?character_data_allocate@@YA?AW4e_character_data_index@@PAVc_font_cache_mt_safe@@KPBUs_font_character@@JPBX@Z");
//};

//void character_datum_initialize(struct s_character_datum *, unsigned long, long, short, struct s_font_character const *, long, void const *)
//{
//    mangled_ppc("?character_datum_initialize@@YAXPAUs_character_datum@@KJFPBUs_font_character@@JPBX@Z");
//};

//enum e_character_status font_cache_retrieve_character(unsigned long, class c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>, struct s_font_character const **, void const **)
//{
//    mangled_ppc("?font_cache_retrieve_character@@YA?AW4e_character_status@@KV?$c_flags@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@PAPBUs_font_character@@PAPBX@Z");
//};

//public: void c_data_iterator<struct s_font_cache_predicted_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_font_cache_predicted_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_font_cache_predicted_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_font_cache_predicted_datum@@@@QAA_NXZ");
//};

//public: struct s_font_cache_predicted_datum * c_data_iterator<struct s_font_cache_predicted_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_font_cache_predicted_datum@@@@QBAPAUs_font_cache_predicted_datum@@XZ");
//};

//public: long c_data_iterator<struct s_font_cache_predicted_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_font_cache_predicted_datum@@@@QBAJXZ");
//};

//public: static long s_static_array<unsigned short, 16384>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@G$0EAAA@@@SAJXZ");
//};

//public: bool c_hash_table<enum e_character_data_index, unsigned long>::is_created(void) const
//{
//    mangled_ppc("?is_created@?$c_hash_table@W4e_character_data_index@@K@@QBA_NXZ");
//};

//public: unsigned int c_hash_table<enum e_character_data_index, unsigned long>::allocation_size(long, long) const
//{
//    mangled_ppc("?allocation_size@?$c_hash_table@W4e_character_data_index@@K@@QBAIJJ@Z");
//};

//?create@?$c_hash_table@W4e_character_data_index@@K@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z
//{
//    mangled_ppc("?create@?$c_hash_table@W4e_character_data_index@@K@@QAA_NPBDJJQ6AKPBX@ZQ6A_N11@Z0JPAVc_allocation_interface@@@Z");
//};

//public: void c_hash_table<enum e_character_data_index, unsigned long>::dispose(char const *, long)
//{
//    mangled_ppc("?dispose@?$c_hash_table@W4e_character_data_index@@K@@QAAXPBDJ@Z");
//};

//public: void const * c_hash_table<enum e_character_data_index, unsigned long>::get_base_address(void) const
//{
//    mangled_ppc("?get_base_address@?$c_hash_table@W4e_character_data_index@@K@@QBAPBXXZ");
//};

//public: bool c_hash_table<enum e_character_data_index, unsigned long>::add(unsigned long const *, enum e_character_data_index const *)
//{
//    mangled_ppc("?add@?$c_hash_table@W4e_character_data_index@@K@@QAA_NPBKPBW4e_character_data_index@@@Z");
//};

//public: bool c_hash_table<enum e_character_data_index, unsigned long>::remove(unsigned long const *)
//{
//    mangled_ppc("?remove@?$c_hash_table@W4e_character_data_index@@K@@QAA_NPBK@Z");
//};

//public: unsigned long const * c_hash_table<enum e_character_data_index, unsigned long>::find(unsigned long const *, enum e_character_data_index *) const
//{
//    mangled_ppc("?find@?$c_hash_table@W4e_character_data_index@@K@@QBAPBKPBKPAW4e_character_data_index@@@Z");
//};

//public: void c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_font_cache_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_font_cache_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_font_cache_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_font_cache_flags@@_N@Z");
//};

//public: c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::c_flags<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_font_cache_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_font_cache_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_font_cache_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_font_cache_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_font_cache_flags, unsigned long, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_font_cache_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_font_cache_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_font_cache_flags@@@Z");
//};

//public: s_font_cache_globals::s_font_cache_globals(void)
//{
//    mangled_ppc("??0s_font_cache_globals@@QAA@XZ");
//};

//public: c_hash_table<enum e_character_data_index, unsigned long>::c_hash_table<enum e_character_data_index, unsigned long>(void)
//{
//    mangled_ppc("??0?$c_hash_table@W4e_character_data_index@@K@@QAA@XZ");
//};

//public: s_font_cache_globals::~s_font_cache_globals(void)
//{
//    mangled_ppc("??1s_font_cache_globals@@QAA@XZ");
//};

//public: c_hash_table<enum e_character_data_index, unsigned long>::~c_hash_table<enum e_character_data_index, unsigned long>(void)
//{
//    mangled_ppc("??1?$c_hash_table@W4e_character_data_index@@K@@QAA@XZ");
//};

//void g_internal_font_cache_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_internal_font_cache_globals@@YAXXZ");
//};

//void g_font_cache_initialized::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_font_cache_initialized@@YAXXZ");
//};

