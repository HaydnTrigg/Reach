/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_block_definition cs_point_block; // "?cs_point_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition cs_point_block_struct; // "?cs_point_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition cs_point_set_block; // "?cs_point_set_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition cs_point_set_block_struct_definition; // "?cs_point_set_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition cs_script_data_block_struct_definition; // "?cs_script_data_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition cs_script_data_block; // "?cs_script_data_block@@3Us_tag_block_definition@@A"
// class c_tag_struct_vtable<class c_cs_point_vtable> cs_point_block_struct_struct_vtable; // "?cs_point_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@A"

// short cs_point_set_index_by_name(char const *);
// short cs_point_index_by_name(struct cs_point_set const *, char const *);
// public: c_tag_struct_vtable<class c_cs_point_vtable>::c_tag_struct_vtable<class c_cs_point_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_cs_point_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_cs_point_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_cs_point_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_cs_point_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_cs_point_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_cs_point_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_cs_point_vtable>::call(void *);
// public: static bool c_cs_point_vtable::on_new_proc(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_cs_point_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_cs_point_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_cs_point_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_cs_point_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_cs_point_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_cs_point_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//short cs_point_set_index_by_name(char const *)
//{
//    mangled_ppc("?cs_point_set_index_by_name@@YAFPBD@Z");
//};

//short cs_point_index_by_name(struct cs_point_set const *, char const *)
//{
//    mangled_ppc("?cs_point_index_by_name@@YAFPBUcs_point_set@@PBD@Z");
//};

//public: c_tag_struct_vtable<class c_cs_point_vtable>::c_tag_struct_vtable<class c_cs_point_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_cs_point_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_cs_point_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_cs_point_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_cs_point_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_cs_point_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_cs_point_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_cs_point_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_cs_point_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_cs_point_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_cs_point_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_cs_point_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_cs_point_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_cs_point_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_cs_point_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_cs_point_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_cs_point_vtable::on_new_proc(void *)
//{
//    mangled_ppc("?on_new_proc@c_cs_point_vtable@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_cs_point_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_cs_point_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_cs_point_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_cs_point_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_cs_point_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_cs_point_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_cs_point_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_cs_point_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_cs_point_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_cs_point_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_cs_point_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_cs_point_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

