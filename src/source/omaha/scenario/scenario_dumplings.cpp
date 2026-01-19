/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_struct_definition scenario_dumpling_struct; // "?scenario_dumpling_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_struct_definition scenario_atmosphere_dumpling_block_struct_definition; // "?scenario_atmosphere_dumpling_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition scenario_atmosphere_dumpling_block; // "?scenario_atmosphere_dumpling_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition scenario_weather_dumpling_block; // "?scenario_weather_dumpling_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition scenario_weather_dumpling_block_struct_definition; // "?scenario_weather_dumpling_block_struct_definition@@3Us_tag_struct_definition@@A"
// bool g_render_debug_weather_dumplings; // "?g_render_debug_weather_dumplings@@3_NA"
// bool g_render_debug_atmosphere_dumplings; // "?g_render_debug_atmosphere_dumplings@@3_NA"
// class c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable> scenario_dumpling_struct_struct_vtable; // "?scenario_dumpling_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@A"

// struct s_sector_point_template<union real_point3d> * scenario_dumpling_get_sector_point(struct s_scenario_dumpling const &, long, long);
// void scenario_dumpling_get_position(struct s_scenario_dumpling const &, union real_point3d *);
// void scenario_dumpling_set_position(struct s_scenario_dumpling *, union real_point3d const &);
// float scenario_dumpling_get_max_z(struct s_scenario_dumpling const &);
// float scenario_dumpling_get_min_z(struct s_scenario_dumpling const &);
// float scenario_dumpling_get_height(struct s_scenario_dumpling const &);
// float scenario_dumpling_get_sink(struct s_scenario_dumpling const &);
// float scenario_dumpling_get_top(struct s_scenario_dumpling const &);
// float scenario_dumpling_get_bottom(struct s_scenario_dumpling const &);
// bool scenario_dumpling_test_point(struct s_scenario_dumpling const &, union real_point3d const &, float *);
// void scenario_dumpling_postprocess(struct s_scenario_dumpling *);
// float scenario_dumpling_get_weight(struct s_scenario_dumpling const &, float);
// void render_debug_weather_dumplings(void);
// void render_debug_atmosphere_dumplings(void);
// public: long c_static_stack<union real_point2d, 32>::count(void) const;
// public: void c_static_stack<union real_point2d, 32>::resize(long);
// public: union real_point2d & c_static_stack<union real_point2d, 32>::operator[](long);
// public: union real_point2d * c_static_stack<union real_point2d, 32>::get_elements(void);
// public: c_static_stack<union real_point2d, 32>::c_static_stack<union real_point2d, 32>(void);
// public: bool c_static_stack<union real_point2d, 32>::valid(void) const;
// public: bool c_static_stack<union real_point2d, 32>::valid(long) const;
// public: c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_dumpling_struct_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_dumpling_struct_vtable>::call(long, void *, bool);
// public: static bool c_scenario_dumpling_struct_vtable::postprocess_proc(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_scenario_dumpling_struct_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_dumpling_struct_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_dumpling_struct_vtable>::call(void *);
// public: static bool c_scenario_dumpling_struct_vtable::on_new_proc(void *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_dumpling_struct_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_dumpling_struct_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_dumpling_struct_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_dumpling_struct_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_dumpling_struct_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_dumpling_struct_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//struct s_sector_point_template<union real_point3d> * scenario_dumpling_get_sector_point(struct s_scenario_dumpling const &, long, long)
//{
//    mangled_ppc("?scenario_dumpling_get_sector_point@@YAPAU?$s_sector_point_template@Treal_point3d@@@@ABUs_scenario_dumpling@@JJ@Z");
//};

//void scenario_dumpling_get_position(struct s_scenario_dumpling const &, union real_point3d *)
//{
//    mangled_ppc("?scenario_dumpling_get_position@@YAXABUs_scenario_dumpling@@PATreal_point3d@@@Z");
//};

//void scenario_dumpling_set_position(struct s_scenario_dumpling *, union real_point3d const &)
//{
//    mangled_ppc("?scenario_dumpling_set_position@@YAXPAUs_scenario_dumpling@@ABTreal_point3d@@@Z");
//};

//float scenario_dumpling_get_max_z(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_max_z@@YAMABUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_min_z(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_min_z@@YAMABUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_height(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_height@@YAMABUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_sink(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_sink@@YAMABUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_top(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_top@@YAMABUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_bottom(struct s_scenario_dumpling const &)
//{
//    mangled_ppc("?scenario_dumpling_get_bottom@@YAMABUs_scenario_dumpling@@@Z");
//};

//bool scenario_dumpling_test_point(struct s_scenario_dumpling const &, union real_point3d const &, float *)
//{
//    mangled_ppc("?scenario_dumpling_test_point@@YA_NABUs_scenario_dumpling@@ABTreal_point3d@@PAM@Z");
//};

//void scenario_dumpling_postprocess(struct s_scenario_dumpling *)
//{
//    mangled_ppc("?scenario_dumpling_postprocess@@YAXPAUs_scenario_dumpling@@@Z");
//};

//float scenario_dumpling_get_weight(struct s_scenario_dumpling const &, float)
//{
//    mangled_ppc("?scenario_dumpling_get_weight@@YAMABUs_scenario_dumpling@@M@Z");
//};

//void render_debug_weather_dumplings(void)
//{
//    mangled_ppc("?render_debug_weather_dumplings@@YAXXZ");
//};

//void render_debug_atmosphere_dumplings(void)
//{
//    mangled_ppc("?render_debug_atmosphere_dumplings@@YAXXZ");
//};

//public: long c_static_stack<union real_point2d, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Treal_point2d@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<union real_point2d, 32>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Treal_point2d@@$0CA@@@QAAXJ@Z");
//};

//public: union real_point2d & c_static_stack<union real_point2d, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Treal_point2d@@$0CA@@@QAAAATreal_point2d@@J@Z");
//};

//public: union real_point2d * c_static_stack<union real_point2d, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Treal_point2d@@$0CA@@@QAAPATreal_point2d@@XZ");
//};

//public: c_static_stack<union real_point2d, 32>::c_static_stack<union real_point2d, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Treal_point2d@@$0CA@@@QAA@XZ");
//};

//public: bool c_static_stack<union real_point2d, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_point2d@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<union real_point2d, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_point2d@@$0CA@@@QBA_NJ@Z");
//};

//public: c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_scenario_dumpling_struct_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_scenario_dumpling_struct_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_scenario_dumpling_struct_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_scenario_dumpling_struct_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_scenario_dumpling_struct_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_scenario_dumpling_struct_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static bool c_scenario_dumpling_struct_vtable::postprocess_proc(long, void *, bool)
//{
//    mangled_ppc("?postprocess_proc@c_scenario_dumpling_struct_vtable@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_scenario_dumpling_struct_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_scenario_dumpling_struct_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_scenario_dumpling_struct_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_scenario_dumpling_struct_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_scenario_dumpling_struct_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_scenario_dumpling_struct_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_scenario_dumpling_struct_vtable::on_new_proc(void *)
//{
//    mangled_ppc("?on_new_proc@c_scenario_dumpling_struct_vtable@@SA_NPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_scenario_dumpling_struct_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_scenario_dumpling_struct_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_scenario_dumpling_struct_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_scenario_dumpling_struct_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_scenario_dumpling_struct_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_scenario_dumpling_struct_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_scenario_dumpling_struct_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_scenario_dumpling_struct_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_scenario_dumpling_struct_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_scenario_dumpling_struct_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_scenario_dumpling_struct_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_scenario_dumpling_struct_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

