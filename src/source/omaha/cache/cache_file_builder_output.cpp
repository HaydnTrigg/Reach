/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_cache_file_builder_tag_resource_output_simple::c_cache_file_builder_tag_resource_output_simple(class c_allocation_interface *, class c_cache_file_writer *, class c_cache_file_builder_codec_registry *, bool);
// public: c_cache_file_builder_tag_resource_output::c_cache_file_builder_tag_resource_output(void);
// public: c_cache_file_builder_tag_resource_output_simple::c_cache_file_builder_tag_resource_output_simple(class c_allocation_interface *, class c_cache_file_writer *, bool);
// public: virtual class c_cache_file_builder_codec_registry * c_cache_file_builder_tag_resource_output_simple::get_codec_registry(void);
// public: virtual bool c_cache_file_builder_tag_resource_output_simple::get_file_location_from_identifier(struct s_tag_persistent_identifier const &, struct s_tag_resource_cache_file_config *);
// public: virtual bool c_cache_file_builder_tag_resource_output_simple::calculate_resource_memory_layout(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout *);
// public: c_interop_sizer_output_stream::c_interop_sizer_output_stream(void);
// public: virtual void c_interop_sizer_output_stream::write(struct s_tag_persistent_identifier const &);
// public: virtual unsigned long c_interop_sizer_output_stream::checkpoint(void);
// public: virtual void c_interop_sizer_output_stream::revert(unsigned long);
// public: unsigned long c_interop_sizer_output_stream::get_interop_buffer_size(void) const;
// public: long c_interop_sizer_output_stream::get_interop_buffer_alignment_bits(void) const;
// public: virtual c_checksum_and_used_size_write_stream::~c_checksum_and_used_size_write_stream(void);
// public: virtual c_simple_persist_write_only_stream_base::~c_simple_persist_write_only_stream_base(void);
// public: virtual bool c_cache_file_builder_tag_resource_output_simple::write_resource(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location>, class c_tag_resource_fixup *, struct s_cache_file_builder_resource_file_layout *);
// private: bool c_cache_file_builder_tag_resource_output_simple::write_control_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location>, class c_tag_resource_fixup *);
// private: bool c_cache_file_builder_tag_resource_output_simple::write_required_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, struct s_cache_file_builder_resource_file_location *);
// public: c_cache_file_blob_stream::c_cache_file_blob_stream(class c_cache_file_writer *);
// public: virtual bool c_cache_file_blob_stream::write(void const *, unsigned long);
// public: virtual bool c_cache_file_blob_stream::seek_to_align_absolute_position(long, unsigned long *);
// public: virtual bool c_cache_file_blob_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_cache_file_blob_stream::get_total_size(unsigned long *);
// public: virtual bool c_cache_file_blob_stream::get_position_relative_to_stream(class c_persist_stream *, unsigned long *);
// public: virtual class c_persist_stream * c_cache_file_blob_stream::get_ancestor_stream(void);
// public: bool c_cache_file_blob_stream::commit(void);
// public: unsigned long c_cache_file_blob_stream::get_starting_position(void) const;
// public: unsigned long c_cache_file_blob_stream::get_written_size(void) const;
// private: void c_cache_file_blob_stream::accumulate_nothing(unsigned long);
// unsigned long align_down(unsigned long, long);
// private: void c_cache_file_blob_stream::accumulate_nothing(unsigned long *);
// private: void c_cache_file_blob_stream::accumulate_buffer(class c_basic_buffer<void const>);
// private: void c_cache_file_blob_stream::accumulate_slop(class c_basic_buffer<void const> *);
// private: void c_cache_file_blob_stream::drain_slop(void);
// private: void c_cache_file_blob_stream::write_nothing(unsigned long);
// private: void c_cache_file_blob_stream::write_buffer(class c_basic_buffer<void const>);
// merged_836D24F0;
// public: c_simple_persist_write_only_stream_base::c_simple_persist_write_only_stream_base(void);
// public: virtual c_cache_file_blob_stream::~c_cache_file_blob_stream(void);
// merged_836D25A0;
// private: bool c_cache_file_builder_tag_resource_output_simple::write_required_section_to_stream(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_persist_stream *);
// private: bool c_cache_file_builder_tag_resource_output_simple::write_optional_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, struct s_cache_file_builder_resource_file_location *);
// private: bool c_cache_file_builder_tag_resource_output_simple::write_optional_section_to_stream(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_persist_stream *);
// private: static void c_cache_file_builder_tag_resource_output_simple::clear_resource_location(struct s_cache_file_builder_resource_file_location *);
// private: void c_cache_file_builder_tag_resource_output_simple::get_output_file_config(struct s_tag_resource_cache_file_config *);
// private: void c_cache_file_builder_tag_resource_output_simple::get_output_file_identifier(struct s_tag_persistent_identifier *);
// public: c_basic_buffer<void const>::c_basic_buffer<void const>(void const *, void const *);
// public: c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::write(struct s_tag_resource_fixup_location const &);
// public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::checkpoint(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::revert(unsigned long);
// public: unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::get_count(void) const;
// public: c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::write(struct s_tag_resource_interop_location const &);
// public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::checkpoint(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::revert(unsigned long);
// public: c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::write(struct s_tag_persistent_identifier const &);
// public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::checkpoint(void);
// public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::revert(unsigned long);

//public: c_cache_file_builder_tag_resource_output_simple::c_cache_file_builder_tag_resource_output_simple(class c_allocation_interface *, class c_cache_file_writer *, class c_cache_file_builder_codec_registry *, bool)
//{
//    mangled_ppc("??0c_cache_file_builder_tag_resource_output_simple@@QAA@PAVc_allocation_interface@@PAVc_cache_file_writer@@PAVc_cache_file_builder_codec_registry@@_N@Z");
//};

//public: c_cache_file_builder_tag_resource_output::c_cache_file_builder_tag_resource_output(void)
//{
//    mangled_ppc("??0c_cache_file_builder_tag_resource_output@@QAA@XZ");
//};

//public: c_cache_file_builder_tag_resource_output_simple::c_cache_file_builder_tag_resource_output_simple(class c_allocation_interface *, class c_cache_file_writer *, bool)
//{
//    mangled_ppc("??0c_cache_file_builder_tag_resource_output_simple@@QAA@PAVc_allocation_interface@@PAVc_cache_file_writer@@_N@Z");
//};

//public: virtual class c_cache_file_builder_codec_registry * c_cache_file_builder_tag_resource_output_simple::get_codec_registry(void)
//{
//    mangled_ppc("?get_codec_registry@c_cache_file_builder_tag_resource_output_simple@@UAAPAVc_cache_file_builder_codec_registry@@XZ");
//};

//public: virtual bool c_cache_file_builder_tag_resource_output_simple::get_file_location_from_identifier(struct s_tag_persistent_identifier const &, struct s_tag_resource_cache_file_config *)
//{
//    mangled_ppc("?get_file_location_from_identifier@c_cache_file_builder_tag_resource_output_simple@@UAA_NABUs_tag_persistent_identifier@@PAUs_tag_resource_cache_file_config@@@Z");
//};

//public: virtual bool c_cache_file_builder_tag_resource_output_simple::calculate_resource_memory_layout(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout *)
//{
//    mangled_ppc("?calculate_resource_memory_layout@c_cache_file_builder_tag_resource_output_simple@@UAA_NPBUs_cache_file_builder_resource_setup@@PAUs_cache_file_builder_resource_memory_layout@@@Z");
//};

//public: c_interop_sizer_output_stream::c_interop_sizer_output_stream(void)
//{
//    mangled_ppc("??0c_interop_sizer_output_stream@@QAA@XZ");
//};

//public: virtual void c_interop_sizer_output_stream::write(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("?write@c_interop_sizer_output_stream@@UAAXABUs_tag_persistent_identifier@@@Z");
//};

//public: virtual unsigned long c_interop_sizer_output_stream::checkpoint(void)
//{
//    mangled_ppc("?checkpoint@c_interop_sizer_output_stream@@UAAKXZ");
//};

//public: virtual void c_interop_sizer_output_stream::revert(unsigned long)
//{
//    mangled_ppc("?revert@c_interop_sizer_output_stream@@UAAXK@Z");
//};

//public: unsigned long c_interop_sizer_output_stream::get_interop_buffer_size(void) const
//{
//    mangled_ppc("?get_interop_buffer_size@c_interop_sizer_output_stream@@QBAKXZ");
//};

//public: long c_interop_sizer_output_stream::get_interop_buffer_alignment_bits(void) const
//{
//    mangled_ppc("?get_interop_buffer_alignment_bits@c_interop_sizer_output_stream@@QBAJXZ");
//};

//public: virtual c_checksum_and_used_size_write_stream::~c_checksum_and_used_size_write_stream(void)
//{
//    mangled_ppc("??1c_checksum_and_used_size_write_stream@@UAA@XZ");
//};

//public: virtual c_simple_persist_write_only_stream_base::~c_simple_persist_write_only_stream_base(void)
//{
//    mangled_ppc("??1c_simple_persist_write_only_stream_base@@UAA@XZ");
//};

//public: virtual bool c_cache_file_builder_tag_resource_output_simple::write_resource(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location>, class c_tag_resource_fixup *, struct s_cache_file_builder_resource_file_layout *)
//{
//    mangled_ppc("?write_resource@c_cache_file_builder_tag_resource_output_simple@@UAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@V?$c_basic_buffer@X@@V?$c_wrapped_array@Us_tag_resource_fixup_location@@@@PAVc_tag_resource_fixup@@PAUs_cache_file_builder_resource_file_layout@@@Z");
//};

//private: bool c_cache_file_builder_tag_resource_output_simple::write_control_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_basic_buffer<void>, class c_wrapped_array<struct s_tag_resource_fixup_location>, class c_tag_resource_fixup *)
//{
//    mangled_ppc("?write_control_section@c_cache_file_builder_tag_resource_output_simple@@AAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@V?$c_basic_buffer@X@@V?$c_wrapped_array@Us_tag_resource_fixup_location@@@@PAVc_tag_resource_fixup@@@Z");
//};

//private: bool c_cache_file_builder_tag_resource_output_simple::write_required_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, struct s_cache_file_builder_resource_file_location *)
//{
//    mangled_ppc("?write_required_section@c_cache_file_builder_tag_resource_output_simple@@AAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@PAUs_cache_file_builder_resource_file_location@@@Z");
//};

//public: c_cache_file_blob_stream::c_cache_file_blob_stream(class c_cache_file_writer *)
//{
//    mangled_ppc("??0c_cache_file_blob_stream@@QAA@PAVc_cache_file_writer@@@Z");
//};

//public: virtual bool c_cache_file_blob_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_cache_file_blob_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_cache_file_blob_stream::seek_to_align_absolute_position(long, unsigned long *)
//{
//    mangled_ppc("?seek_to_align_absolute_position@c_cache_file_blob_stream@@UAA_NJPAK@Z");
//};

//public: virtual bool c_cache_file_blob_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_cache_file_blob_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_cache_file_blob_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_cache_file_blob_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_cache_file_blob_stream::get_position_relative_to_stream(class c_persist_stream *, unsigned long *)
//{
//    mangled_ppc("?get_position_relative_to_stream@c_cache_file_blob_stream@@UAA_NPAVc_persist_stream@@PAK@Z");
//};

//public: virtual class c_persist_stream * c_cache_file_blob_stream::get_ancestor_stream(void)
//{
//    mangled_ppc("?get_ancestor_stream@c_cache_file_blob_stream@@UAAPAVc_persist_stream@@XZ");
//};

//public: bool c_cache_file_blob_stream::commit(void)
//{
//    mangled_ppc("?commit@c_cache_file_blob_stream@@QAA_NXZ");
//};

//public: unsigned long c_cache_file_blob_stream::get_starting_position(void) const
//{
//    mangled_ppc("?get_starting_position@c_cache_file_blob_stream@@QBAKXZ");
//};

//public: unsigned long c_cache_file_blob_stream::get_written_size(void) const
//{
//    mangled_ppc("?get_written_size@c_cache_file_blob_stream@@QBAKXZ");
//};

//private: void c_cache_file_blob_stream::accumulate_nothing(unsigned long)
//{
//    mangled_ppc("?accumulate_nothing@c_cache_file_blob_stream@@AAAXK@Z");
//};

//unsigned long align_down(unsigned long, long)
//{
//    mangled_ppc("?align_down@@YAKKJ@Z");
//};

//private: void c_cache_file_blob_stream::accumulate_nothing(unsigned long *)
//{
//    mangled_ppc("?accumulate_nothing@c_cache_file_blob_stream@@AAAXPAK@Z");
//};

//private: void c_cache_file_blob_stream::accumulate_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?accumulate_buffer@c_cache_file_blob_stream@@AAAXV?$c_basic_buffer@$$CBX@@@Z");
//};

//private: void c_cache_file_blob_stream::accumulate_slop(class c_basic_buffer<void const> *)
//{
//    mangled_ppc("?accumulate_slop@c_cache_file_blob_stream@@AAAXPAV?$c_basic_buffer@$$CBX@@@Z");
//};

//private: void c_cache_file_blob_stream::drain_slop(void)
//{
//    mangled_ppc("?drain_slop@c_cache_file_blob_stream@@AAAXXZ");
//};

//private: void c_cache_file_blob_stream::write_nothing(unsigned long)
//{
//    mangled_ppc("?write_nothing@c_cache_file_blob_stream@@AAAXK@Z");
//};

//private: void c_cache_file_blob_stream::write_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?write_buffer@c_cache_file_blob_stream@@AAAXV?$c_basic_buffer@$$CBX@@@Z");
//};

//merged_836D24F0
//{
//    mangled_ppc("merged_836D24F0");
//};

//public: c_simple_persist_write_only_stream_base::c_simple_persist_write_only_stream_base(void)
//{
//    mangled_ppc("??0c_simple_persist_write_only_stream_base@@QAA@XZ");
//};

//public: virtual c_cache_file_blob_stream::~c_cache_file_blob_stream(void)
//{
//    mangled_ppc("??1c_cache_file_blob_stream@@UAA@XZ");
//};

//merged_836D25A0
//{
//    mangled_ppc("merged_836D25A0");
//};

//private: bool c_cache_file_builder_tag_resource_output_simple::write_required_section_to_stream(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_persist_stream *)
//{
//    mangled_ppc("?write_required_section_to_stream@c_cache_file_builder_tag_resource_output_simple@@AAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@PAVc_persist_stream@@@Z");
//};

//private: bool c_cache_file_builder_tag_resource_output_simple::write_optional_section(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, struct s_cache_file_builder_resource_file_location *)
//{
//    mangled_ppc("?write_optional_section@c_cache_file_builder_tag_resource_output_simple@@AAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@PAUs_cache_file_builder_resource_file_location@@@Z");
//};

//private: bool c_cache_file_builder_tag_resource_output_simple::write_optional_section_to_stream(struct s_cache_file_builder_resource_setup const *, struct s_cache_file_builder_resource_memory_layout const *, class c_persist_stream *)
//{
//    mangled_ppc("?write_optional_section_to_stream@c_cache_file_builder_tag_resource_output_simple@@AAA_NPBUs_cache_file_builder_resource_setup@@PBUs_cache_file_builder_resource_memory_layout@@PAVc_persist_stream@@@Z");
//};

//private: static void c_cache_file_builder_tag_resource_output_simple::clear_resource_location(struct s_cache_file_builder_resource_file_location *)
//{
//    mangled_ppc("?clear_resource_location@c_cache_file_builder_tag_resource_output_simple@@CAXPAUs_cache_file_builder_resource_file_location@@@Z");
//};

//private: void c_cache_file_builder_tag_resource_output_simple::get_output_file_config(struct s_tag_resource_cache_file_config *)
//{
//    mangled_ppc("?get_output_file_config@c_cache_file_builder_tag_resource_output_simple@@AAAXPAUs_tag_resource_cache_file_config@@@Z");
//};

//private: void c_cache_file_builder_tag_resource_output_simple::get_output_file_identifier(struct s_tag_persistent_identifier *)
//{
//    mangled_ppc("?get_output_file_identifier@c_cache_file_builder_tag_resource_output_simple@@AAAXPAUs_tag_persistent_identifier@@@Z");
//};

//public: c_basic_buffer<void const>::c_basic_buffer<void const>(void const *, void const *)
//{
//    mangled_ppc("??0?$c_basic_buffer@$$CBX@@QAA@PBX0@Z");
//};

//public: c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>(void)
//{
//    mangled_ppc("??0?$c_checkpoint_count_only_output_stream@Us_tag_resource_fixup_location@@@@QAA@XZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::write(struct s_tag_resource_fixup_location const &)
//{
//    mangled_ppc("?write@?$c_checkpoint_count_only_output_stream@Us_tag_resource_fixup_location@@@@UAAXABUs_tag_resource_fixup_location@@@Z");
//};

//public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::checkpoint(void)
//{
//    mangled_ppc("?checkpoint@?$c_checkpoint_count_only_output_stream@Us_tag_resource_fixup_location@@@@UAAKXZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::revert(unsigned long)
//{
//    mangled_ppc("?revert@?$c_checkpoint_count_only_output_stream@Us_tag_resource_fixup_location@@@@UAAXK@Z");
//};

//public: unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_fixup_location>::get_count(void) const
//{
//    mangled_ppc("?get_count@?$c_checkpoint_count_only_output_stream@Us_tag_resource_fixup_location@@@@QBAKXZ");
//};

//public: c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>(void)
//{
//    mangled_ppc("??0?$c_checkpoint_count_only_output_stream@Us_tag_resource_interop_location@@@@QAA@XZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::write(struct s_tag_resource_interop_location const &)
//{
//    mangled_ppc("?write@?$c_checkpoint_count_only_output_stream@Us_tag_resource_interop_location@@@@UAAXABUs_tag_resource_interop_location@@@Z");
//};

//public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::checkpoint(void)
//{
//    mangled_ppc("?checkpoint@?$c_checkpoint_count_only_output_stream@Us_tag_resource_interop_location@@@@UAAKXZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_resource_interop_location>::revert(unsigned long)
//{
//    mangled_ppc("?revert@?$c_checkpoint_count_only_output_stream@Us_tag_resource_interop_location@@@@UAAXK@Z");
//};

//public: c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>(void)
//{
//    mangled_ppc("??0?$c_checkpoint_count_only_output_stream@Us_tag_persistent_identifier@@@@QAA@XZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::write(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("?write@?$c_checkpoint_count_only_output_stream@Us_tag_persistent_identifier@@@@UAAXABUs_tag_persistent_identifier@@@Z");
//};

//public: virtual unsigned long c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::checkpoint(void)
//{
//    mangled_ppc("?checkpoint@?$c_checkpoint_count_only_output_stream@Us_tag_persistent_identifier@@@@UAAKXZ");
//};

//public: virtual void c_checkpoint_count_only_output_stream<struct s_tag_persistent_identifier>::revert(unsigned long)
//{
//    mangled_ppc("?revert@?$c_checkpoint_count_only_output_stream@Us_tag_persistent_identifier@@@@UAAXK@Z");
//};

