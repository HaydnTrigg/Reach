/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct c_tag_file_backend_resource_cache_file_datum_handler_simple::s_cache_file_builder_output_location, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_cache_file_builder_output_location@c_tag_file_backend_resource_cache_file_datum_handler_simple@@$0CA@@@2JB"
// public: static long const s_static_array<class c_cache_file_builder_codec *, 64>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_cache_file_builder_codec@@$0EA@@@2JB"
// const c_tag_resource_persist_manager_simple::`vftable'{for `c_tag_resource_persist_writer'}; // "??_7c_tag_resource_persist_manager_simple@@6Bc_tag_resource_persist_writer@@@"
// const c_tag_resource_persist_manager_simple::`vftable'{for `c_tag_resource_persist_reader'}; // "??_7c_tag_resource_persist_manager_simple@@6Bc_tag_resource_persist_reader@@@"
// class c_tag_block_copier::`RTTI Type Descriptor'; // "??_R0?AVc_tag_block_copier@@@8"
// class c_tag_block_paster::`RTTI Type Descriptor'; // "??_R0?AVc_tag_block_paster@@@8"

// public: c_default_tag_block_layout_clipboard::c_default_tag_block_layout_clipboard(class c_allocation_interface *, struct s_tag_block_definition const *);
// public: virtual unsigned long c_default_tag_block_layout_clipboard::get_chunk_tag(void);
// public: virtual long c_default_tag_block_layout_clipboard::get_chunk_version(void);
// public: virtual bool c_default_tag_block_layout_clipboard::persist(class c_persist_stream *, struct s_tag_block_definition const *);
// public: virtual bool c_default_tag_block_layout_clipboard::restore(class c_persist_stream *, struct s_tag_block_definition const *);
// public: bool c_tag_block_copier::write_layout(class c_persist_stream *);
// public: bool c_tag_block_paster::read_layout(class c_persist_stream *);
// public: bool c_tag_block_copier::write_aggregate(class c_persist_stream *);
// public: bool c_tag_block_paster::read_aggregate(class c_persist_stream *);
// public: c_tag_block_copy_paste_persist_context::c_tag_block_copy_paste_persist_context(class c_persist_stream *, class c_tag_field_editor_manager *, class c_tag_allocator *, class c_allocation_interface *, class c_tag_resource_persist_reader *, class c_tag_resource_persist_writer *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>);
// public: c_tag_persist_context::c_tag_persist_context(void);
// public: virtual class c_tag_resource_persist_reader * c_tag_persist_context::get_resource_reader(void);
// public: virtual class c_tag_resource_persist_writer * c_tag_persist_context::get_resource_writer(void);
// public: class c_tag_persist_context * c_tag_block_copy_paste_persist_context::operator class c_tag_persist_context *(void);
// private: virtual class c_persist_stream * c_tag_block_copy_paste_persist_context::get_root_data_stream(void);
// private: virtual class c_tag_field_editor_manager * c_tag_block_copy_paste_persist_context::get_editor_manager(void);
// private: virtual class c_tag_allocator * c_tag_block_copy_paste_persist_context::get_allocator(void);
// private: virtual class c_allocation_interface * c_tag_block_copy_paste_persist_context::get_scratch_allocator(void);
// private: virtual class c_tag_resource_persist_reader * c_tag_block_copy_paste_persist_context::get_resource_reader(void);
// private: virtual class c_tag_resource_persist_writer * c_tag_block_copy_paste_persist_context::get_resource_writer(void);
// private: virtual enum e_runtime_platform_type c_tag_block_copy_paste_persist_context::get_runtime_platform(void);
// private: virtual bool c_tag_block_copy_paste_persist_context::editing(void);
// private: virtual bool c_tag_block_copy_paste_persist_context::for_checkpoint(void);
// public: c_tag_block_edit_context::c_tag_block_edit_context(class c_tag_field_editor_manager *, class c_allocation_interface *, class c_tag_allocator *, class c_tag_resource_persist_reader *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>);
// public: c_tag_block_edit_context::c_tag_block_edit_context(class c_tag_field_editor_manager *, class c_allocation_interface *, class c_tag_allocator *, class c_tag_resource_persist_writer *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>);
// public: class c_allocation_interface * c_tag_block_edit_context::get_allocator(void) const;
// public: class c_tag_block_copy_paste_persist_context c_tag_block_edit_context::get_persist_context(class c_persist_stream *) const;
// public: c_tag_block_copier::c_tag_block_copier(class c_tag_block_layout_clipboard *, class c_tag_block_edit_context *, struct s_tag_block *);
// private: struct s_tag_block_definition const * c_tag_block_copier::get_block_definition(void) const;
// private: struct s_tag_block * c_tag_block_copier::get_block(void);
// public: c_tag_block_paster::c_tag_block_paster(class c_tag_block_layout_clipboard *, class c_tag_block_edit_context *, struct s_tag_block *);
// public: c_tag_block_paster::~c_tag_block_paster(void);
// public: struct s_tag_block * c_tag_block_paster::get_block(void);
// bool tag_aggregate_copy_to_stream(class c_basic_buffer<void>, struct s_tag_struct_definition const *, class c_persist_stream *);
// bool tag_block_copy_to_stream(struct s_tag_block *, class c_persist_stream *);
// public: c_tag_resource_persist_manager_simple::c_tag_resource_persist_manager_simple(void);
// bool tag_block_copy_to_stream_custom(struct s_tag_block *, class c_persist_stream *, struct s_tag_block_copy_context const *);
// bool tag_block_archive(class c_tag_block_layout_clipboard *, class c_typed_pointer_holder, class c_persist_stream *, enum e_chunk_archive_action);
// bool tag_aggregate_paste_from_stream(struct s_tag_struct_definition const *, class c_persist_stream *, struct s_tag_block *);
// bool tag_block_paste_from_stream(class c_persist_stream *, struct s_tag_block *);
// bool tag_block_paste_from_stream_custom(class c_persist_stream *, struct s_tag_block *, struct s_tag_block_paste_context const *);
// public: bool c_flags_no_init<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_tag_persist_bit) const;
// class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster> create_agnostic_chunk_archiver<class c_tag_block_copier, class c_tag_block_paster>(char const *, unsigned long, long, bool (c_tag_block_copier::*)(class c_persist_stream *), bool (c_tag_block_paster::*)(class c_persist_stream *));
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster> >(class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>);
// public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<2>(struct s_persist_archiver_holder (&)[2]);
// public: c_typed_pointer_holder::ctor<class c_tag_block_copier>(class c_tag_block_copier *);
// public: c_typed_pointer_holder::ctor<class c_tag_block_paster>(class c_tag_block_paster *);
// public: c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>(char const *, unsigned long, long, bool (c_tag_block_copier::*)(class c_persist_stream *), bool (c_tag_block_paster::*)(class c_persist_stream *));
// public: virtual char const * c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_description(void) const;
// public: virtual unsigned long c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_chunk_tag(void) const;
// public: virtual long c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_chunk_version(void) const;
// public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: class c_tag_block_copier * c_typed_pointer_holder::operatorcast<class c_tag_block_copier>(void);
// public: class c_tag_block_paster * c_typed_pointer_holder::operatorcast<class c_tag_block_paster>(void);
// [thunk]: public: virtual bool c_tag_resource_persist_manager_simple::resource_available(struct s_tag_resource const *);

//public: c_default_tag_block_layout_clipboard::c_default_tag_block_layout_clipboard(class c_allocation_interface *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("??0c_default_tag_block_layout_clipboard@@QAA@PAVc_allocation_interface@@PBUs_tag_block_definition@@@Z");
//};

//public: virtual unsigned long c_default_tag_block_layout_clipboard::get_chunk_tag(void)
//{
//    mangled_ppc("?get_chunk_tag@c_default_tag_block_layout_clipboard@@UAAKXZ");
//};

//public: virtual long c_default_tag_block_layout_clipboard::get_chunk_version(void)
//{
//    mangled_ppc("?get_chunk_version@c_default_tag_block_layout_clipboard@@UAAJXZ");
//};

//public: virtual bool c_default_tag_block_layout_clipboard::persist(class c_persist_stream *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?persist@c_default_tag_block_layout_clipboard@@UAA_NPAVc_persist_stream@@PBUs_tag_block_definition@@@Z");
//};

//public: virtual bool c_default_tag_block_layout_clipboard::restore(class c_persist_stream *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?restore@c_default_tag_block_layout_clipboard@@UAA_NPAVc_persist_stream@@PBUs_tag_block_definition@@@Z");
//};

//public: bool c_tag_block_copier::write_layout(class c_persist_stream *)
//{
//    mangled_ppc("?write_layout@c_tag_block_copier@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_block_paster::read_layout(class c_persist_stream *)
//{
//    mangled_ppc("?read_layout@c_tag_block_paster@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_block_copier::write_aggregate(class c_persist_stream *)
//{
//    mangled_ppc("?write_aggregate@c_tag_block_copier@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_tag_block_paster::read_aggregate(class c_persist_stream *)
//{
//    mangled_ppc("?read_aggregate@c_tag_block_paster@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: c_tag_block_copy_paste_persist_context::c_tag_block_copy_paste_persist_context(class c_persist_stream *, class c_tag_field_editor_manager *, class c_tag_allocator *, class c_allocation_interface *, class c_tag_resource_persist_reader *, class c_tag_resource_persist_writer *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0c_tag_block_copy_paste_persist_context@@QAA@PAVc_persist_stream@@PAVc_tag_field_editor_manager@@PAVc_tag_allocator@@PAVc_allocation_interface@@PAVc_tag_resource_persist_reader@@PAVc_tag_resource_persist_writer@@W4e_runtime_platform_type@@V?$c_flags@W4e_tag_persist_bit@@K$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_tag_persist_context::c_tag_persist_context(void)
//{
//    mangled_ppc("??0c_tag_persist_context@@QAA@XZ");
//};

//public: virtual class c_tag_resource_persist_reader * c_tag_persist_context::get_resource_reader(void)
//{
//    mangled_ppc("?get_resource_reader@c_tag_persist_context@@UAAPAVc_tag_resource_persist_reader@@XZ");
//};

//public: virtual class c_tag_resource_persist_writer * c_tag_persist_context::get_resource_writer(void)
//{
//    mangled_ppc("?get_resource_writer@c_tag_persist_context@@UAAPAVc_tag_resource_persist_writer@@XZ");
//};

//public: class c_tag_persist_context * c_tag_block_copy_paste_persist_context::operator class c_tag_persist_context *(void)
//{
//    mangled_ppc("??Bc_tag_block_copy_paste_persist_context@@QAAPAVc_tag_persist_context@@XZ");
//};

//private: virtual class c_persist_stream * c_tag_block_copy_paste_persist_context::get_root_data_stream(void)
//{
//    mangled_ppc("?get_root_data_stream@c_tag_block_copy_paste_persist_context@@EAAPAVc_persist_stream@@XZ");
//};

//private: virtual class c_tag_field_editor_manager * c_tag_block_copy_paste_persist_context::get_editor_manager(void)
//{
//    mangled_ppc("?get_editor_manager@c_tag_block_copy_paste_persist_context@@EAAPAVc_tag_field_editor_manager@@XZ");
//};

//private: virtual class c_tag_allocator * c_tag_block_copy_paste_persist_context::get_allocator(void)
//{
//    mangled_ppc("?get_allocator@c_tag_block_copy_paste_persist_context@@EAAPAVc_tag_allocator@@XZ");
//};

//private: virtual class c_allocation_interface * c_tag_block_copy_paste_persist_context::get_scratch_allocator(void)
//{
//    mangled_ppc("?get_scratch_allocator@c_tag_block_copy_paste_persist_context@@EAAPAVc_allocation_interface@@XZ");
//};

//private: virtual class c_tag_resource_persist_reader * c_tag_block_copy_paste_persist_context::get_resource_reader(void)
//{
//    mangled_ppc("?get_resource_reader@c_tag_block_copy_paste_persist_context@@EAAPAVc_tag_resource_persist_reader@@XZ");
//};

//private: virtual class c_tag_resource_persist_writer * c_tag_block_copy_paste_persist_context::get_resource_writer(void)
//{
//    mangled_ppc("?get_resource_writer@c_tag_block_copy_paste_persist_context@@EAAPAVc_tag_resource_persist_writer@@XZ");
//};

//private: virtual enum e_runtime_platform_type c_tag_block_copy_paste_persist_context::get_runtime_platform(void)
//{
//    mangled_ppc("?get_runtime_platform@c_tag_block_copy_paste_persist_context@@EAA?AW4e_runtime_platform_type@@XZ");
//};

//private: virtual bool c_tag_block_copy_paste_persist_context::editing(void)
//{
//    mangled_ppc("?editing@c_tag_block_copy_paste_persist_context@@EAA_NXZ");
//};

//private: virtual bool c_tag_block_copy_paste_persist_context::for_checkpoint(void)
//{
//    mangled_ppc("?for_checkpoint@c_tag_block_copy_paste_persist_context@@EAA_NXZ");
//};

//public: c_tag_block_edit_context::c_tag_block_edit_context(class c_tag_field_editor_manager *, class c_allocation_interface *, class c_tag_allocator *, class c_tag_resource_persist_reader *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0c_tag_block_edit_context@@QAA@PAVc_tag_field_editor_manager@@PAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_resource_persist_reader@@W4e_runtime_platform_type@@V?$c_flags@W4e_tag_persist_bit@@K$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_tag_block_edit_context::c_tag_block_edit_context(class c_tag_field_editor_manager *, class c_allocation_interface *, class c_tag_allocator *, class c_tag_resource_persist_writer *, enum e_runtime_platform_type, class c_flags<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0c_tag_block_edit_context@@QAA@PAVc_tag_field_editor_manager@@PAVc_allocation_interface@@PAVc_tag_allocator@@PAVc_tag_resource_persist_writer@@W4e_runtime_platform_type@@V?$c_flags@W4e_tag_persist_bit@@K$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_allocation_interface * c_tag_block_edit_context::get_allocator(void) const
//{
//    mangled_ppc("?get_allocator@c_tag_block_edit_context@@QBAPAVc_allocation_interface@@XZ");
//};

//public: class c_tag_block_copy_paste_persist_context c_tag_block_edit_context::get_persist_context(class c_persist_stream *) const
//{
//    mangled_ppc("?get_persist_context@c_tag_block_edit_context@@QBA?AVc_tag_block_copy_paste_persist_context@@PAVc_persist_stream@@@Z");
//};

//public: c_tag_block_copier::c_tag_block_copier(class c_tag_block_layout_clipboard *, class c_tag_block_edit_context *, struct s_tag_block *)
//{
//    mangled_ppc("??0c_tag_block_copier@@QAA@PAVc_tag_block_layout_clipboard@@PAVc_tag_block_edit_context@@PAUs_tag_block@@@Z");
//};

//private: struct s_tag_block_definition const * c_tag_block_copier::get_block_definition(void) const
//{
//    mangled_ppc("?get_block_definition@c_tag_block_copier@@ABAPBUs_tag_block_definition@@XZ");
//};

//private: struct s_tag_block * c_tag_block_copier::get_block(void)
//{
//    mangled_ppc("?get_block@c_tag_block_copier@@AAAPAUs_tag_block@@XZ");
//};

//public: c_tag_block_paster::c_tag_block_paster(class c_tag_block_layout_clipboard *, class c_tag_block_edit_context *, struct s_tag_block *)
//{
//    mangled_ppc("??0c_tag_block_paster@@QAA@PAVc_tag_block_layout_clipboard@@PAVc_tag_block_edit_context@@PAUs_tag_block@@@Z");
//};

//public: c_tag_block_paster::~c_tag_block_paster(void)
//{
//    mangled_ppc("??1c_tag_block_paster@@QAA@XZ");
//};

//public: struct s_tag_block * c_tag_block_paster::get_block(void)
//{
//    mangled_ppc("?get_block@c_tag_block_paster@@QAAPAUs_tag_block@@XZ");
//};

//bool tag_aggregate_copy_to_stream(class c_basic_buffer<void>, struct s_tag_struct_definition const *, class c_persist_stream *)
//{
//    mangled_ppc("?tag_aggregate_copy_to_stream@@YA_NV?$c_basic_buffer@X@@PBUs_tag_struct_definition@@PAVc_persist_stream@@@Z");
//};

//bool tag_block_copy_to_stream(struct s_tag_block *, class c_persist_stream *)
//{
//    mangled_ppc("?tag_block_copy_to_stream@@YA_NPAUs_tag_block@@PAVc_persist_stream@@@Z");
//};

//public: c_tag_resource_persist_manager_simple::c_tag_resource_persist_manager_simple(void)
//{
//    mangled_ppc("??0c_tag_resource_persist_manager_simple@@QAA@XZ");
//};

//bool tag_block_copy_to_stream_custom(struct s_tag_block *, class c_persist_stream *, struct s_tag_block_copy_context const *)
//{
//    mangled_ppc("?tag_block_copy_to_stream_custom@@YA_NPAUs_tag_block@@PAVc_persist_stream@@PBUs_tag_block_copy_context@@@Z");
//};

//bool tag_block_archive(class c_tag_block_layout_clipboard *, class c_typed_pointer_holder, class c_persist_stream *, enum e_chunk_archive_action)
//{
//    mangled_ppc("?tag_block_archive@@YA_NPAVc_tag_block_layout_clipboard@@Vc_typed_pointer_holder@@PAVc_persist_stream@@W4e_chunk_archive_action@@@Z");
//};

//bool tag_aggregate_paste_from_stream(struct s_tag_struct_definition const *, class c_persist_stream *, struct s_tag_block *)
//{
//    mangled_ppc("?tag_aggregate_paste_from_stream@@YA_NPBUs_tag_struct_definition@@PAVc_persist_stream@@PAUs_tag_block@@@Z");
//};

//bool tag_block_paste_from_stream(class c_persist_stream *, struct s_tag_block *)
//{
//    mangled_ppc("?tag_block_paste_from_stream@@YA_NPAVc_persist_stream@@PAUs_tag_block@@@Z");
//};

//bool tag_block_paste_from_stream_custom(class c_persist_stream *, struct s_tag_block *, struct s_tag_block_paste_context const *)
//{
//    mangled_ppc("?tag_block_paste_from_stream_custom@@YA_NPAVc_persist_stream@@PAUs_tag_block@@PBUs_tag_block_paste_context@@@Z");
//};

//public: bool c_flags_no_init<enum e_tag_persist_bit, unsigned long, 2, struct s_default_enum_string_resolver>::test(enum e_tag_persist_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_tag_persist_bit@@K$01Us_default_enum_string_resolver@@@@QBA_NW4e_tag_persist_bit@@@Z");
//};

//class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster> create_agnostic_chunk_archiver<class c_tag_block_copier, class c_tag_block_paster>(char const *, unsigned long, long, bool (c_tag_block_copier::*)(class c_persist_stream *), bool (c_tag_block_paster::*)(class c_persist_stream *))
//{
//    mangled_ppc("??$create_agnostic_chunk_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@YA?AV?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@PBDKJP8c_tag_block_copier@@AA_NPAVc_persist_stream@@@ZP8c_tag_block_paster@@AA_N1@Z@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster> >(class c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>)
//{
//    mangled_ppc("??$make@V?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@@Z");
//};

//public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<2>(struct s_persist_archiver_holder (&)[2])
//{
//    mangled_ppc("??$?0$01@?$c_wrapped_array@Us_persist_archiver_holder@@@@QAA@AAY01Us_persist_archiver_holder@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_tag_block_copier>(class c_tag_block_copier *)
//{
//    mangled_ppc("??$?0Vc_tag_block_copier@@@c_typed_pointer_holder@@QAA@PAVc_tag_block_copier@@@Z");
//};

//public: c_typed_pointer_holder::ctor<class c_tag_block_paster>(class c_tag_block_paster *)
//{
//    mangled_ppc("??$?0Vc_tag_block_paster@@@c_typed_pointer_holder@@QAA@PAVc_tag_block_paster@@@Z");
//};

//public: c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>(char const *, unsigned long, long, bool (c_tag_block_copier::*)(class c_persist_stream *), bool (c_tag_block_paster::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@QAA@PBDKJP8c_tag_block_copier@@AA_NPAVc_persist_stream@@@ZP8c_tag_block_paster@@AA_N1@Z@Z");
//};

//public: virtual char const * c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBAKXZ");
//};

//public: virtual long c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBAJXZ");
//};

//public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_agnostic_handler_chunk_section_archiver<class c_tag_block_copier, class c_tag_block_paster>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_agnostic_handler_chunk_section_archiver@Vc_tag_block_copier@@Vc_tag_block_paster@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: class c_tag_block_copier * c_typed_pointer_holder::operatorcast<class c_tag_block_copier>(void)
//{
//    mangled_ppc("??$?BVc_tag_block_copier@@@c_typed_pointer_holder@@QAAPAVc_tag_block_copier@@XZ");
//};

//public: class c_tag_block_paster * c_typed_pointer_holder::operatorcast<class c_tag_block_paster>(void)
//{
//    mangled_ppc("??$?BVc_tag_block_paster@@@c_typed_pointer_holder@@QAAPAVc_tag_block_paster@@XZ");
//};

//[thunk]: public: virtual bool c_tag_resource_persist_manager_simple::resource_available(struct s_tag_resource const *)
//{
//    mangled_ppc("?resource_available@c_tag_resource_persist_manager_simple@@W3AA_NPBUs_tag_resource@@@Z");
//};

