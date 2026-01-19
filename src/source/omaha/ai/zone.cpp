/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct zone_area_ref ZONE_AREA_REF_NONE; // "?ZONE_AREA_REF_NONE@@3Uzone_area_ref@@A"
// struct s_tag_block_definition area_sector_point_block; // "?area_sector_point_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition area_sector_point_block_struct_definition; // "?area_sector_point_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition areas_block; // "?areas_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition areas_block_struct; // "?areas_block_struct@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition zone_block; // "?zone_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition zone_block_struct_definition; // "?zone_block_struct_definition@@3Us_tag_struct_definition@@A"
// class c_tag_struct_vtable<class c_areas_block_vtable> areas_block_struct_struct_vtable; // "?areas_block_struct_struct_vtable@@3V?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@A"

// void zone_scenario_postprocess(long, bool);
// bool zone_postprocess(long, void *, bool);
// int fp_qsort(void const *, void const *);
// bool sector_make_valid(struct s_tag_block *, class c_sector_accessor_base *);
// bool sector_move_points_inside_sector(struct s_tag_block *, struct s_tag_block const *, class c_sector_accessor_base *);
// bool sector_move_point_inside_sector(union real_point3d *, struct s_tag_block const *, class c_sector_accessor_base *);
// struct area_definition * zone_get_area(short, short);
// bool area_in_structure_bsp(long, long, struct structure_bsp const *);
// long zone_get_by_name(char const *);
// struct zone_definition * zone_definition_get(long);
// bool link_in_area(struct generate_firing_points_data const *, struct pathfinding_data const *, long);
// bool point_in_area(struct generate_firing_points_data const *, union real_point3d const *);
// bool zone_area_get_bounding_volume(struct scenario *, struct area_definition const *, union real_point2d *, long *, float *, float *);
// bool point_in_zone_area_volume(union real_point3d const *, union real_point2d const *, long, float, float, float);
// public: c_tag_struct_vtable<class c_areas_block_vtable>::c_tag_struct_vtable<class c_areas_block_vtable>(void);
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_byte_swap_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::byte_swap_block_proc(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_postprocess_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::postprocess_thunk(long, void *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_format_proc(void) const;
// public: virtual char * c_tag_struct_vtable<class c_areas_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_delete_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::on_delete_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_new_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::on_new_thunk(void *) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_copy_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::on_copy_thunk(void const *, void *) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_write_to_cache_file_proc(void) const;
// public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_definition(void) const;
// public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_areas_block_vtable>::get_fixup_source_definition_thunk(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const;
// public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const;
// public: static void s_tag_vtable_has_byte_swap_proc<class c_areas_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_postprocess_proc<class c_areas_block_vtable>::call(long, void *, bool);
// public: static char * s_tag_vtable_has_format_proc<class c_areas_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long);
// public: static void s_tag_vtable_has_on_delete_proc<class c_areas_block_vtable>::call(void *);
// public: static bool s_tag_vtable_has_on_new_proc<class c_areas_block_vtable>::call(void *);
// public: static bool c_areas_block_vtable::on_new_proc(void *);
// void area_set_default_generation_values(struct area_definition *);
// public: static bool s_tag_vtable_has_on_copy_proc<class c_areas_block_vtable>::call(void const *, void *);
// public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_areas_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **);
// public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_areas_block_vtable>::call(void);
// public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_areas_block_vtable>::call(void);
// public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_areas_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);
// public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_areas_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool);

//void zone_scenario_postprocess(long, bool)
//{
//    mangled_ppc("?zone_scenario_postprocess@@YAXJ_N@Z");
//};

//bool zone_postprocess(long, void *, bool)
//{
//    mangled_ppc("?zone_postprocess@@YA_NJPAX_N@Z");
//};

//int fp_qsort(void const *, void const *)
//{
//    mangled_ppc("?fp_qsort@@YAHPBX0@Z");
//};

//bool sector_make_valid(struct s_tag_block *, class c_sector_accessor_base *)
//{
//    mangled_ppc("?sector_make_valid@@YA_NPAUs_tag_block@@PAVc_sector_accessor_base@@@Z");
//};

//bool sector_move_points_inside_sector(struct s_tag_block *, struct s_tag_block const *, class c_sector_accessor_base *)
//{
//    mangled_ppc("?sector_move_points_inside_sector@@YA_NPAUs_tag_block@@PBU1@PAVc_sector_accessor_base@@@Z");
//};

//bool sector_move_point_inside_sector(union real_point3d *, struct s_tag_block const *, class c_sector_accessor_base *)
//{
//    mangled_ppc("?sector_move_point_inside_sector@@YA_NPATreal_point3d@@PBUs_tag_block@@PAVc_sector_accessor_base@@@Z");
//};

//struct area_definition * zone_get_area(short, short)
//{
//    mangled_ppc("?zone_get_area@@YAPAUarea_definition@@FF@Z");
//};

//bool area_in_structure_bsp(long, long, struct structure_bsp const *)
//{
//    mangled_ppc("?area_in_structure_bsp@@YA_NJJPBUstructure_bsp@@@Z");
//};

//long zone_get_by_name(char const *)
//{
//    mangled_ppc("?zone_get_by_name@@YAJPBD@Z");
//};

//struct zone_definition * zone_definition_get(long)
//{
//    mangled_ppc("?zone_definition_get@@YAPAUzone_definition@@J@Z");
//};

//bool link_in_area(struct generate_firing_points_data const *, struct pathfinding_data const *, long)
//{
//    mangled_ppc("?link_in_area@@YA_NPBUgenerate_firing_points_data@@PBUpathfinding_data@@J@Z");
//};

//bool point_in_area(struct generate_firing_points_data const *, union real_point3d const *)
//{
//    mangled_ppc("?point_in_area@@YA_NPBUgenerate_firing_points_data@@PBTreal_point3d@@@Z");
//};

//bool zone_area_get_bounding_volume(struct scenario *, struct area_definition const *, union real_point2d *, long *, float *, float *)
//{
//    mangled_ppc("?zone_area_get_bounding_volume@@YA_NPAUscenario@@PBUarea_definition@@PATreal_point2d@@PAJPAM4@Z");
//};

//bool point_in_zone_area_volume(union real_point3d const *, union real_point2d const *, long, float, float, float)
//{
//    mangled_ppc("?point_in_zone_area_volume@@YA_NPBTreal_point3d@@PBTreal_point2d@@JMMM@Z");
//};

//public: c_tag_struct_vtable<class c_areas_block_vtable>::c_tag_struct_vtable<class c_areas_block_vtable>(void)
//{
//    mangled_ppc("??0?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@QAA@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_byte_swap_proc(void) const
//{
//    mangled_ppc("?has_byte_swap_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::byte_swap_block_proc(void *) const
//{
//    mangled_ppc("?byte_swap_block_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_postprocess_proc(void) const
//{
//    mangled_ppc("?has_postprocess_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::postprocess_thunk(long, void *, bool) const
//{
//    mangled_ppc("?postprocess_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NJPAX_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_format_proc(void) const
//{
//    mangled_ppc("?has_format_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual char * c_tag_struct_vtable<class c_areas_block_vtable>::format_thunk(long, __int64, struct s_tag_block *, long, char *, long) const
//{
//    mangled_ppc("?format_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_delete_proc(void) const
//{
//    mangled_ppc("?has_on_delete_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::on_delete_thunk(void *) const
//{
//    mangled_ppc("?on_delete_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBAXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_new_proc(void) const
//{
//    mangled_ppc("?has_on_new_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::on_new_thunk(void *) const
//{
//    mangled_ppc("?on_new_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_on_copy_proc(void) const
//{
//    mangled_ppc("?has_on_copy_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::on_copy_thunk(void const *, void *) const
//{
//    mangled_ppc("?on_copy_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NPBXPAX@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_write_to_cache_file_proc(void) const
//{
//    mangled_ppc("?has_write_to_cache_file_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual void c_tag_struct_vtable<class c_areas_block_vtable>::write_to_cache_file_thunk(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **) const
//{
//    mangled_ppc("?write_to_cache_file_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_block_does_not_exist_in_cache_file_proc(void) const
//{
//    mangled_ppc("?has_block_does_not_exist_in_cache_file_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::block_does_not_exist_in_cache_file_thunk(void) const
//{
//    mangled_ppc("?block_does_not_exist_in_cache_file_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_definition(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_definition@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual struct s_tag_struct_definition * c_tag_struct_vtable<class c_areas_block_vtable>::get_fixup_source_definition_thunk(void) const
//{
//    mangled_ppc("?get_fixup_source_definition_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBAPAUs_tag_struct_definition@@XZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::fixup_old_struct_thunk(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::has_fixup_old_struct_from_disk_proc(void) const
//{
//    mangled_ppc("?has_fixup_old_struct_from_disk_proc@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NXZ");
//};

//public: virtual bool c_tag_struct_vtable<class c_areas_block_vtable>::fixup_old_struct_from_disk_thunk(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool) const
//{
//    mangled_ppc("?fixup_old_struct_from_disk_thunk@?$c_tag_struct_vtable@Vc_areas_block_vtable@@@@UBA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

//public: static void s_tag_vtable_has_byte_swap_proc<class c_areas_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_byte_swap_proc@Vc_areas_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_postprocess_proc<class c_areas_block_vtable>::call(long, void *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_postprocess_proc@Vc_areas_block_vtable@@@@SA_NJPAX_N@Z");
//};

//public: static char * s_tag_vtable_has_format_proc<class c_areas_block_vtable>::call(long, __int64, struct s_tag_block *, long, char *, long)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_format_proc@Vc_areas_block_vtable@@@@SAPADJ_JPAUs_tag_block@@JPADJ@Z");
//};

//public: static void s_tag_vtable_has_on_delete_proc<class c_areas_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_delete_proc@Vc_areas_block_vtable@@@@SAXPAX@Z");
//};

//public: static bool s_tag_vtable_has_on_new_proc<class c_areas_block_vtable>::call(void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_new_proc@Vc_areas_block_vtable@@@@SA_NPAX@Z");
//};

//public: static bool c_areas_block_vtable::on_new_proc(void *)
//{
//    mangled_ppc("?on_new_proc@c_areas_block_vtable@@SA_NPAX@Z");
//};

//void area_set_default_generation_values(struct area_definition *)
//{
//    mangled_ppc("?area_set_default_generation_values@@YAXPAUarea_definition@@@Z");
//};

//public: static bool s_tag_vtable_has_on_copy_proc<class c_areas_block_vtable>::call(void const *, void *)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_on_copy_proc@Vc_areas_block_vtable@@@@SA_NPBXPAX@Z");
//};

//public: static void s_tag_vtable_has_write_to_cache_file_proc<class c_areas_block_vtable>::call(long, struct s_tag_block *, struct s_cache_file_builder_stream_context const *, void **, void **)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_write_to_cache_file_proc@Vc_areas_block_vtable@@@@SAXJPAUs_tag_block@@PBUs_cache_file_builder_stream_context@@PAPAX2@Z");
//};

//public: static bool s_tag_vtable_has_block_does_not_exist_in_cache_file<class c_areas_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_block_does_not_exist_in_cache_file@Vc_areas_block_vtable@@@@SA_NXZ");
//};

//public: static struct s_tag_struct_definition * s_tag_vtable_has_get_fixup_source_definition_proc<class c_areas_block_vtable>::call(void)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_get_fixup_source_definition_proc@Vc_areas_block_vtable@@@@SAPAUs_tag_struct_definition@@XZ");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_proc<class c_areas_block_vtable>::call(class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_proc@Vc_areas_block_vtable@@@@SA_NAAV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@01PAVc_tag_allocator@@_N@Z");
//};

//public: static bool s_tag_vtable_has_fixup_old_struct_from_disk_proc<class c_areas_block_vtable>::call(struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_basic_buffer<void> &, struct s_tag_struct_definition const *, class c_tag_allocator *, bool)
//{
//    mangled_ppc("?call@?$s_tag_vtable_has_fixup_old_struct_from_disk_proc@Vc_areas_block_vtable@@@@SA_NPBUs_tag_struct_definition@@AAV?$c_basic_buffer@X@@010PAVc_tag_allocator@@_N@Z");
//};

