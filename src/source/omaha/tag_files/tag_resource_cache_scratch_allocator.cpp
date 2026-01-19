/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_tag_resource_cache_scratch_allocator::c_tag_resource_cache_scratch_allocator(class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_persist_stream *, class c_checkpoint_output_stream<struct s_tag_resource_fixup_location> *, class c_checkpoint_output_stream<struct s_tag_persistent_identifier> *, class c_checkpoint_output_stream<struct s_tag_resource_interop_location> *, long, long, bool);
// public: virtual void c_tag_resource_cache_scratch_allocator::reset_allocation_checksum(void);
// public: virtual class c_string_builder c_tag_resource_cache_scratch_allocator::report_allocation_checksum(void) const;
// public: c_cache_file_scratch_allocator::c_cache_file_scratch_allocator(void);
// public: virtual void * c_tag_resource_cache_scratch_allocator::allocate_scratch(unsigned long, long, class c_tag_memory_attributes const &, void **);
// public: virtual void c_tag_resource_cache_scratch_allocator::discard_duplicate_scratch(void **, void *, void *);
// public: virtual void c_tag_resource_cache_scratch_allocator::prepare_allocation_for_commitment(void *);
// public: virtual void c_tag_resource_cache_scratch_allocator::track_allocation(void **);
// public: virtual void c_tag_resource_cache_scratch_allocator::commit_allocation(void **, unsigned long *, void const *);
// void get_aligned_stream_position(class c_persist_stream *, long, unsigned long *);
// void align_and_write_to_stream(class c_persist_stream *, long, class c_basic_buffer<void const>, unsigned long *, unsigned long *);
// public: virtual void c_tag_resource_cache_scratch_allocator::commit_custom_allocation(void **, unsigned long *, void const *, class c_cache_file_tracer *, long, enum e_tag_memory_type);
// public: virtual bool c_tag_resource_cache_scratch_allocator::allow_allocation_aliasing(void *) const;
// public: virtual unsigned long c_tag_resource_cache_scratch_allocator::get_aliasable_space_from_allocation(void *) const;
// public: virtual unsigned long c_tag_resource_cache_scratch_allocator::get_alignment_padding(void) const;
// public: virtual bool c_tag_resource_cache_scratch_allocator::byte_swap_destination(void) const;
// public: virtual void c_tag_resource_cache_scratch_allocator::track_interop(void *, struct s_tag_interop_definition const *);
// public: long c_tag_resource_cache_scratch_allocator::get_maximum_control_alignment_bits(void) const;
// private: class c_tag_resource_fixup c_tag_resource_cache_scratch_allocator::get_fixup_from_scratch_address(void *);
// private: class c_persist_stream * c_tag_resource_cache_scratch_allocator::get_memory_stream(enum e_tag_resource_memory_type);
// private: bool c_tag_resource_cache_scratch_allocator::valid_control_scratch_address(void *);
// private: unsigned long c_tag_resource_cache_scratch_allocator::get_control_offset(void *);
// private: void * c_tag_resource_cache_scratch_allocator::get_virtual_address_from_memory_type_and_offset(enum e_tag_resource_memory_type, unsigned long);
// private: enum e_tag_resource_memory_type c_tag_resource_cache_scratch_allocator::get_memory_type_from_attributes(class c_tag_memory_attributes const &) const;
// bool write_tag_resource_to_scratch_buffers(class c_allocation_interface *, long, void const *, struct s_tag_resource_definition const *, class c_cache_file_resource_library *, class c_cache_file_tracer *, class c_cache_file_space_marker *, bool, long, class c_persist_stream *, class c_persist_stream *, class c_persist_stream *, class c_tag_resource_fixup *, class c_checkpoint_output_stream<struct s_tag_resource_fixup_location> *, class c_checkpoint_output_stream<struct s_tag_persistent_identifier> *, class c_checkpoint_output_stream<struct s_tag_resource_interop_location> *, unsigned long *, long *, unsigned long *, unsigned long *);
// public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::empty(void) const;
// public: void c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::push_back(struct c_tag_resource_cache_scratch_allocator::s_allocation_record const &);
// public: void c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::pop(void);
// public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get_top(void);
// public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record const * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get_top(void) const;
// public: c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>(void);
// public: c_tag_resource_cache_scratch_allocator::s_allocation_record::s_allocation_record(void);
// public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::valid(void) const;
// public: long c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::top(void) const;
// public: long c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::push(void);
// public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record const * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get(long) const;
// public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get(long);
// public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::valid(long) const;
// public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::full(void) const;

//public: c_tag_resource_cache_scratch_allocator::c_tag_resource_cache_scratch_allocator(class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_persist_stream *, class c_checkpoint_output_stream<struct s_tag_resource_fixup_location> *, class c_checkpoint_output_stream<struct s_tag_persistent_identifier> *, class c_checkpoint_output_stream<struct s_tag_resource_interop_location> *, long, long, bool)
//{
//    mangled_ppc("??0c_tag_resource_cache_scratch_allocator@@QAA@PAVc_allocation_interface@@PAVc_persist_stream@@11PAV?$c_checkpoint_output_stream@Us_tag_resource_fixup_location@@@@PAV?$c_checkpoint_output_stream@Us_tag_persistent_identifier@@@@PAV?$c_checkpoint_output_stream@Us_tag_resource_interop_location@@@@JJ_N@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::reset_allocation_checksum(void)
//{
//    mangled_ppc("?reset_allocation_checksum@c_tag_resource_cache_scratch_allocator@@UAAXXZ");
//};

//public: virtual class c_string_builder c_tag_resource_cache_scratch_allocator::report_allocation_checksum(void) const
//{
//    mangled_ppc("?report_allocation_checksum@c_tag_resource_cache_scratch_allocator@@UBA?AVc_string_builder@@XZ");
//};

//public: c_cache_file_scratch_allocator::c_cache_file_scratch_allocator(void)
//{
//    mangled_ppc("??0c_cache_file_scratch_allocator@@QAA@XZ");
//};

//public: virtual void * c_tag_resource_cache_scratch_allocator::allocate_scratch(unsigned long, long, class c_tag_memory_attributes const &, void **)
//{
//    mangled_ppc("?allocate_scratch@c_tag_resource_cache_scratch_allocator@@UAAPAXKJABVc_tag_memory_attributes@@PAPAX@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::discard_duplicate_scratch(void **, void *, void *)
//{
//    mangled_ppc("?discard_duplicate_scratch@c_tag_resource_cache_scratch_allocator@@UAAXPAPAXPAX1@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::prepare_allocation_for_commitment(void *)
//{
//    mangled_ppc("?prepare_allocation_for_commitment@c_tag_resource_cache_scratch_allocator@@UAAXPAX@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::track_allocation(void **)
//{
//    mangled_ppc("?track_allocation@c_tag_resource_cache_scratch_allocator@@UAAXPAPAX@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::commit_allocation(void **, unsigned long *, void const *)
//{
//    mangled_ppc("?commit_allocation@c_tag_resource_cache_scratch_allocator@@UAAXPAPAXPAKPBX@Z");
//};

//void get_aligned_stream_position(class c_persist_stream *, long, unsigned long *)
//{
//    mangled_ppc("?get_aligned_stream_position@@YAXPAVc_persist_stream@@JPAK@Z");
//};

//void align_and_write_to_stream(class c_persist_stream *, long, class c_basic_buffer<void const>, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?align_and_write_to_stream@@YAXPAVc_persist_stream@@JV?$c_basic_buffer@$$CBX@@PAK2@Z");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::commit_custom_allocation(void **, unsigned long *, void const *, class c_cache_file_tracer *, long, enum e_tag_memory_type)
//{
//    mangled_ppc("?commit_custom_allocation@c_tag_resource_cache_scratch_allocator@@UAAXPAPAXPAKPBXPAVc_cache_file_tracer@@JW4e_tag_memory_type@@@Z");
//};

//public: virtual bool c_tag_resource_cache_scratch_allocator::allow_allocation_aliasing(void *) const
//{
//    mangled_ppc("?allow_allocation_aliasing@c_tag_resource_cache_scratch_allocator@@UBA_NPAX@Z");
//};

//public: virtual unsigned long c_tag_resource_cache_scratch_allocator::get_aliasable_space_from_allocation(void *) const
//{
//    mangled_ppc("?get_aliasable_space_from_allocation@c_tag_resource_cache_scratch_allocator@@UBAKPAX@Z");
//};

//public: virtual unsigned long c_tag_resource_cache_scratch_allocator::get_alignment_padding(void) const
//{
//    mangled_ppc("?get_alignment_padding@c_tag_resource_cache_scratch_allocator@@UBAKXZ");
//};

//public: virtual bool c_tag_resource_cache_scratch_allocator::byte_swap_destination(void) const
//{
//    mangled_ppc("?byte_swap_destination@c_tag_resource_cache_scratch_allocator@@UBA_NXZ");
//};

//public: virtual void c_tag_resource_cache_scratch_allocator::track_interop(void *, struct s_tag_interop_definition const *)
//{
//    mangled_ppc("?track_interop@c_tag_resource_cache_scratch_allocator@@UAAXPAXPBUs_tag_interop_definition@@@Z");
//};

//public: long c_tag_resource_cache_scratch_allocator::get_maximum_control_alignment_bits(void) const
//{
//    mangled_ppc("?get_maximum_control_alignment_bits@c_tag_resource_cache_scratch_allocator@@QBAJXZ");
//};

//private: class c_tag_resource_fixup c_tag_resource_cache_scratch_allocator::get_fixup_from_scratch_address(void *)
//{
//    mangled_ppc("?get_fixup_from_scratch_address@c_tag_resource_cache_scratch_allocator@@AAA?AVc_tag_resource_fixup@@PAX@Z");
//};

//private: class c_persist_stream * c_tag_resource_cache_scratch_allocator::get_memory_stream(enum e_tag_resource_memory_type)
//{
//    mangled_ppc("?get_memory_stream@c_tag_resource_cache_scratch_allocator@@AAAPAVc_persist_stream@@W4e_tag_resource_memory_type@@@Z");
//};

//private: bool c_tag_resource_cache_scratch_allocator::valid_control_scratch_address(void *)
//{
//    mangled_ppc("?valid_control_scratch_address@c_tag_resource_cache_scratch_allocator@@AAA_NPAX@Z");
//};

//private: unsigned long c_tag_resource_cache_scratch_allocator::get_control_offset(void *)
//{
//    mangled_ppc("?get_control_offset@c_tag_resource_cache_scratch_allocator@@AAAKPAX@Z");
//};

//private: void * c_tag_resource_cache_scratch_allocator::get_virtual_address_from_memory_type_and_offset(enum e_tag_resource_memory_type, unsigned long)
//{
//    mangled_ppc("?get_virtual_address_from_memory_type_and_offset@c_tag_resource_cache_scratch_allocator@@AAAPAXW4e_tag_resource_memory_type@@K@Z");
//};

//private: enum e_tag_resource_memory_type c_tag_resource_cache_scratch_allocator::get_memory_type_from_attributes(class c_tag_memory_attributes const &) const
//{
//    mangled_ppc("?get_memory_type_from_attributes@c_tag_resource_cache_scratch_allocator@@ABA?AW4e_tag_resource_memory_type@@ABVc_tag_memory_attributes@@@Z");
//};

//bool write_tag_resource_to_scratch_buffers(class c_allocation_interface *, long, void const *, struct s_tag_resource_definition const *, class c_cache_file_resource_library *, class c_cache_file_tracer *, class c_cache_file_space_marker *, bool, long, class c_persist_stream *, class c_persist_stream *, class c_persist_stream *, class c_tag_resource_fixup *, class c_checkpoint_output_stream<struct s_tag_resource_fixup_location> *, class c_checkpoint_output_stream<struct s_tag_persistent_identifier> *, class c_checkpoint_output_stream<struct s_tag_resource_interop_location> *, unsigned long *, long *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?write_tag_resource_to_scratch_buffers@@YA_NPAVc_allocation_interface@@JPBXPBUs_tag_resource_definition@@PAVc_cache_file_resource_library@@PAVc_cache_file_tracer@@PAVc_cache_file_space_marker@@_NJPAVc_persist_stream@@77PAVc_tag_resource_fixup@@PAV?$c_checkpoint_output_stream@Us_tag_resource_fixup_location@@@@PAV?$c_checkpoint_output_stream@Us_tag_persistent_identifier@@@@PAV?$c_checkpoint_output_stream@Us_tag_resource_interop_location@@@@PAKPAJPAKPAK@Z");
//};

//public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBA_NXZ");
//};

//public: void c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::push_back(struct c_tag_resource_cache_scratch_allocator::s_allocation_record const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAAXABUs_allocation_record@c_tag_resource_cache_scratch_allocator@@@Z");
//};

//public: void c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAAXXZ");
//};

//public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get_top(void)
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAAPAUs_allocation_record@c_tag_resource_cache_scratch_allocator@@XZ");
//};

//public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record const * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get_top(void) const
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBAPBUs_allocation_record@c_tag_resource_cache_scratch_allocator@@XZ");
//};

//public: c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAA@XZ");
//};

//public: c_tag_resource_cache_scratch_allocator::s_allocation_record::s_allocation_record(void)
//{
//    mangled_ppc("??0s_allocation_record@c_tag_resource_cache_scratch_allocator@@QAA@XZ");
//};

//public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBAJXZ");
//};

//public: long c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAAJXZ");
//};

//public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record const * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBAPBUs_allocation_record@c_tag_resource_cache_scratch_allocator@@J@Z");
//};

//public: struct c_tag_resource_cache_scratch_allocator::s_allocation_record * c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QAAPAUs_allocation_record@c_tag_resource_cache_scratch_allocator@@J@Z");
//};

//public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_tag_resource_cache_scratch_allocator::s_allocation_record, 1024>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_allocation_record@c_tag_resource_cache_scratch_allocator@@$0EAA@@@QBA_NXZ");
//};

