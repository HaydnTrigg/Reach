/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_single_tag_file_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_single_tag_file_header@@@@2QBJB"
// const c_single_tag_file_reader::`vftable'{for `c_tag_file_alternate_stream_read_iterator'}; // "??_7c_single_tag_file_reader@@6Bc_tag_file_alternate_stream_read_iterator@@@"
// const c_single_tag_file_reader::`vftable'{for `c_tag_file_read_interface'}; // "??_7c_single_tag_file_reader@@6Bc_tag_file_read_interface@@@"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_single_tag_file_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_single_tag_file_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_single_tag_file_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_single_tag_file_header@@@@2PAUbyte_swap_definition@@A"

// bool read_tag_header_checksum(class c_persist_stream *, struct s_tag_group const *, unsigned long *);
// bool read_and_validate_tag_header(class c_persist_stream *, struct s_tag_group const *, struct s_single_tag_file_header *, bool *);
// public: c_single_tag_file_block_stream::c_single_tag_file_block_stream(long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *);
// merged_83688010;
// public: c_tag_file_read_interface::c_tag_file_read_interface(void);
// public: c_single_tag_file_block_stream::c_single_tag_file_block_stream(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *);
// private: void c_single_tag_file_block_stream::load_from_stream(long, class c_persist_stream *, class c_persist_stream *, struct s_tag_block_definition const *);
// public: virtual void c_single_tag_file_block_stream::signal_complete(void);
// public: virtual c_single_tag_file_block_stream::~c_single_tag_file_block_stream(void);
// public: virtual class c_tag_group_fixupper * c_single_tag_file_block_stream::get_group_fixupper(void);
// public: virtual class c_persist_stream * c_single_tag_file_block_stream::get_root_data_stream(void);
// private: bool c_single_tag_file_block_stream::load_tag_layout_and_fixupper_from_current_chunk(long, class c_persist_chunk_iterator *, struct s_tag_block_definition const *);
// private: bool c_single_tag_file_block_stream::load_tag_root_data_stream(class c_persist_stream *, class c_persist_chunk_iterator *);
// public: c_single_tag_file_reader::c_single_tag_file_reader(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_persist_stream *);
// merged_83688B08;
// public: c_tag_file_alternate_stream_read_iterator::c_tag_file_alternate_stream_read_iterator(void);
// public: virtual c_single_tag_file_reader::~c_single_tag_file_reader(void);
// public: unsigned long c_single_tag_file_reader::get_checksum(void);
// public: virtual class c_tag_group_fixupper * c_single_tag_file_reader::get_group_fixupper(void);
// public: virtual class c_persist_stream * c_single_tag_file_reader::get_root_data_stream(void);
// public: virtual void c_single_tag_file_reader::signal_complete(void);
// public: bool c_single_tag_file_reader::open(void) const;
// public: virtual bool c_single_tag_file_reader::next(void);
// public: virtual unsigned long c_single_tag_file_reader::get_alternate_stream_tag(void);
// public: virtual class c_tag_file_read_interface * c_single_tag_file_reader::get_alternate_stream(struct s_tag_block_definition const *);
// public: c_checksumed_unbounded_relative_persist_stream::c_checksumed_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long, bool);
// merged_83688E80;
// public: virtual c_checksumed_unbounded_relative_persist_stream::~c_checksumed_unbounded_relative_persist_stream(void);
// public: virtual bool c_checksumed_unbounded_relative_persist_stream::write(void const *, unsigned long);
// public: unsigned long c_checksumed_unbounded_relative_persist_stream::get_checksum(void) const;
// public: c_single_tag_file_block_stream_writer::c_single_tag_file_block_stream_writer(class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool);
// public: class c_persist_stream * c_single_tag_file_block_stream_writer::get_data_stream(void);
// public: class c_persist_stream * c_single_tag_file_block_stream_writer::get_parent_stream(void);
// public: unsigned long c_single_tag_file_block_stream_writer::get_checksum(void) const;
// public: unsigned long c_single_tag_file_block_stream_writer::get_stream_tag(void) const;
// public: void c_single_tag_file_block_stream_writer::cancel(void);
// public: bool c_single_tag_file_block_stream_writer::close(void);
// public: c_single_tag_file_writer::c_single_tag_file_writer(struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *);
// public: c_tag_file_write_interface::c_tag_file_write_interface(void);
// public: void c_single_tag_file_writer::cancel(void);
// public: bool c_single_tag_file_writer::commit(void);
// public: struct s_tag_group const * c_single_tag_file_writer::get_tag_group(void) const;
// public: unsigned long c_single_tag_file_writer::get_checksum(void) const;
// public: virtual class c_persist_stream * c_single_tag_file_writer::create_root_stream(void);
// public: virtual class c_persist_stream * c_single_tag_file_writer::create_alternate_data_stream(unsigned long, struct s_tag_block_definition const *);
// private: class c_persist_stream * c_single_tag_file_writer::create_data_stream(unsigned long, struct s_tag_block_definition const *, bool);
// public: virtual bool c_single_tag_file_writer::commit_stream(class c_persist_stream *);
// bool single_tag_file_write_layout_stream(class c_single_tag_file_layout_writer *, class c_persist_chunk_writer *, struct s_tag_block_definition const *);
// public: c_single_use_tag_file_create_backend::c_single_use_tag_file_create_backend(class c_persist_stream *, class c_single_tag_file_layout_writer *);
// merged_8368A0C8;
// public: virtual c_single_use_tag_file_create_backend::~c_single_use_tag_file_create_backend(void);
// public: virtual class c_tag_file_write_interface * c_single_use_tag_file_create_backend::create_tag_file(struct s_tag_group const *, bool);
// public: virtual bool c_single_use_tag_file_create_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *);
// public: virtual void c_single_use_tag_file_create_backend::cancel_save_tag_file(class c_tag_file_write_interface *);
// public: c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::~c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::destruct(void);
// public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>(void);
// public: c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::~c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>(void);
// public: class c_persist_chunk_iterator * c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::get(void);
// public: c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>(void);
// public: class c_checksumed_unbounded_relative_persist_stream * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get(void);
// public: class c_checksumed_unbounded_relative_persist_stream const * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get_const(void) const;
// public: bool c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>(void);
// public: class c_persist_chunk_writer * c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::get(void);
// public: bool c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>(void);
// public: class c_single_tag_file_block_stream_writer * c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::alive(void) const;
// public: void c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::destruct(void);
// public: void * c_persist_chunk_iterator::`scalar deleting destructor'(unsigned int);
// public: bool c_persist_stream::read_typed<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long);
// void byte_swap_type<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long);
// public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *>(long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *);
// public: class c_persist_chunk_iterator * c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::construct<class c_persist_stream *>(class c_persist_stream *);
// public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *>(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *);
// public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *>(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *);
// public: class c_checksumed_unbounded_relative_persist_stream * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::construct<class c_persist_stream *, int, bool>(class c_persist_stream *, int, bool);
// public: bool c_persist_stream::write_typed<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long);
// public: class c_persist_chunk_writer * c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::construct<class c_persist_stream *>(class c_persist_stream *);
// public: class c_single_tag_file_block_stream_writer * c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::construct<class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool>(class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool);
// public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::construct<struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *>(struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *);
// public: class c_single_tag_file_block_stream * c_opaque_data<class c_single_tag_file_block_stream, 44, 4>::get(void);
// public: class c_persist_chunk_iterator * c_opaque_data<class c_persist_chunk_iterator, 92, 4>::get(void);
// public: class c_checksumed_unbounded_relative_persist_stream * c_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get(void);
// public: class c_persist_chunk_writer * c_opaque_data<class c_persist_chunk_writer, 44, 4>::get(void);
// public: class c_single_tag_file_block_stream_writer * c_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::get(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_single_tag_file_header>::get_bs_definition(void);

//bool read_tag_header_checksum(class c_persist_stream *, struct s_tag_group const *, unsigned long *)
//{
//    mangled_ppc("?read_tag_header_checksum@@YA_NPAVc_persist_stream@@PBUs_tag_group@@PAK@Z");
//};

//bool read_and_validate_tag_header(class c_persist_stream *, struct s_tag_group const *, struct s_single_tag_file_header *, bool *)
//{
//    mangled_ppc("?read_and_validate_tag_header@@YA_NPAVc_persist_stream@@PBUs_tag_group@@PAUs_single_tag_file_header@@PA_N@Z");
//};

//public: c_single_tag_file_block_stream::c_single_tag_file_block_stream(long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("??0c_single_tag_file_block_stream@@QAA@JPAVc_allocation_interface@@PAVc_persist_stream@@1PAVc_single_tag_file_layout_reader@@PBUs_tag_block_definition@@@Z");
//};

//merged_83688010
//{
//    mangled_ppc("merged_83688010");
//};

//public: c_tag_file_read_interface::c_tag_file_read_interface(void)
//{
//    mangled_ppc("??0c_tag_file_read_interface@@QAA@XZ");
//};

//public: c_single_tag_file_block_stream::c_single_tag_file_block_stream(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("??0c_single_tag_file_block_stream@@QAA@JPAVc_allocation_interface@@PAVc_persist_chunk_iterator@@PAVc_single_tag_file_layout_reader@@PBUs_tag_block_definition@@@Z");
//};

//private: void c_single_tag_file_block_stream::load_from_stream(long, class c_persist_stream *, class c_persist_stream *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?load_from_stream@c_single_tag_file_block_stream@@AAAXJPAVc_persist_stream@@0PBUs_tag_block_definition@@@Z");
//};

//public: virtual void c_single_tag_file_block_stream::signal_complete(void)
//{
//    mangled_ppc("?signal_complete@c_single_tag_file_block_stream@@UAAXXZ");
//};

//public: virtual c_single_tag_file_block_stream::~c_single_tag_file_block_stream(void)
//{
//    mangled_ppc("??1c_single_tag_file_block_stream@@UAA@XZ");
//};

//public: virtual class c_tag_group_fixupper * c_single_tag_file_block_stream::get_group_fixupper(void)
//{
//    mangled_ppc("?get_group_fixupper@c_single_tag_file_block_stream@@UAAPAVc_tag_group_fixupper@@XZ");
//};

//public: virtual class c_persist_stream * c_single_tag_file_block_stream::get_root_data_stream(void)
//{
//    mangled_ppc("?get_root_data_stream@c_single_tag_file_block_stream@@UAAPAVc_persist_stream@@XZ");
//};

//private: bool c_single_tag_file_block_stream::load_tag_layout_and_fixupper_from_current_chunk(long, class c_persist_chunk_iterator *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?load_tag_layout_and_fixupper_from_current_chunk@c_single_tag_file_block_stream@@AAA_NJPAVc_persist_chunk_iterator@@PBUs_tag_block_definition@@@Z");
//};

//private: bool c_single_tag_file_block_stream::load_tag_root_data_stream(class c_persist_stream *, class c_persist_chunk_iterator *)
//{
//    mangled_ppc("?load_tag_root_data_stream@c_single_tag_file_block_stream@@AAA_NPAVc_persist_stream@@PAVc_persist_chunk_iterator@@@Z");
//};

//public: c_single_tag_file_reader::c_single_tag_file_reader(class c_allocation_interface *, struct s_tag_group const *, class c_single_tag_file_layout_reader *, class c_persist_stream *)
//{
//    mangled_ppc("??0c_single_tag_file_reader@@QAA@PAVc_allocation_interface@@PBUs_tag_group@@PAVc_single_tag_file_layout_reader@@PAVc_persist_stream@@@Z");
//};

//merged_83688B08
//{
//    mangled_ppc("merged_83688B08");
//};

//public: c_tag_file_alternate_stream_read_iterator::c_tag_file_alternate_stream_read_iterator(void)
//{
//    mangled_ppc("??0c_tag_file_alternate_stream_read_iterator@@QAA@XZ");
//};

//public: virtual c_single_tag_file_reader::~c_single_tag_file_reader(void)
//{
//    mangled_ppc("??1c_single_tag_file_reader@@UAA@XZ");
//};

//public: unsigned long c_single_tag_file_reader::get_checksum(void)
//{
//    mangled_ppc("?get_checksum@c_single_tag_file_reader@@QAAKXZ");
//};

//public: virtual class c_tag_group_fixupper * c_single_tag_file_reader::get_group_fixupper(void)
//{
//    mangled_ppc("?get_group_fixupper@c_single_tag_file_reader@@UAAPAVc_tag_group_fixupper@@XZ");
//};

//public: virtual class c_persist_stream * c_single_tag_file_reader::get_root_data_stream(void)
//{
//    mangled_ppc("?get_root_data_stream@c_single_tag_file_reader@@UAAPAVc_persist_stream@@XZ");
//};

//public: virtual void c_single_tag_file_reader::signal_complete(void)
//{
//    mangled_ppc("?signal_complete@c_single_tag_file_reader@@UAAXXZ");
//};

//public: bool c_single_tag_file_reader::open(void) const
//{
//    mangled_ppc("?open@c_single_tag_file_reader@@QBA_NXZ");
//};

//public: virtual bool c_single_tag_file_reader::next(void)
//{
//    mangled_ppc("?next@c_single_tag_file_reader@@UAA_NXZ");
//};

//public: virtual unsigned long c_single_tag_file_reader::get_alternate_stream_tag(void)
//{
//    mangled_ppc("?get_alternate_stream_tag@c_single_tag_file_reader@@UAAKXZ");
//};

//public: virtual class c_tag_file_read_interface * c_single_tag_file_reader::get_alternate_stream(struct s_tag_block_definition const *)
//{
//    mangled_ppc("?get_alternate_stream@c_single_tag_file_reader@@UAAPAVc_tag_file_read_interface@@PBUs_tag_block_definition@@@Z");
//};

//public: c_checksumed_unbounded_relative_persist_stream::c_checksumed_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long, bool)
//{
//    mangled_ppc("??0c_checksumed_unbounded_relative_persist_stream@@QAA@PAVc_persist_stream@@K_N@Z");
//};

//merged_83688E80
//{
//    mangled_ppc("merged_83688E80");
//};

//public: virtual c_checksumed_unbounded_relative_persist_stream::~c_checksumed_unbounded_relative_persist_stream(void)
//{
//    mangled_ppc("??1c_checksumed_unbounded_relative_persist_stream@@UAA@XZ");
//};

//public: virtual bool c_checksumed_unbounded_relative_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_checksumed_unbounded_relative_persist_stream@@UAA_NPBXK@Z");
//};

//public: unsigned long c_checksumed_unbounded_relative_persist_stream::get_checksum(void) const
//{
//    mangled_ppc("?get_checksum@c_checksumed_unbounded_relative_persist_stream@@QBAKXZ");
//};

//public: c_single_tag_file_block_stream_writer::c_single_tag_file_block_stream_writer(class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool)
//{
//    mangled_ppc("??0c_single_tag_file_block_stream_writer@@QAA@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@KPBUs_tag_block_definition@@_N@Z");
//};

//public: class c_persist_stream * c_single_tag_file_block_stream_writer::get_data_stream(void)
//{
//    mangled_ppc("?get_data_stream@c_single_tag_file_block_stream_writer@@QAAPAVc_persist_stream@@XZ");
//};

//public: class c_persist_stream * c_single_tag_file_block_stream_writer::get_parent_stream(void)
//{
//    mangled_ppc("?get_parent_stream@c_single_tag_file_block_stream_writer@@QAAPAVc_persist_stream@@XZ");
//};

//public: unsigned long c_single_tag_file_block_stream_writer::get_checksum(void) const
//{
//    mangled_ppc("?get_checksum@c_single_tag_file_block_stream_writer@@QBAKXZ");
//};

//public: unsigned long c_single_tag_file_block_stream_writer::get_stream_tag(void) const
//{
//    mangled_ppc("?get_stream_tag@c_single_tag_file_block_stream_writer@@QBAKXZ");
//};

//public: void c_single_tag_file_block_stream_writer::cancel(void)
//{
//    mangled_ppc("?cancel@c_single_tag_file_block_stream_writer@@QAAXXZ");
//};

//public: bool c_single_tag_file_block_stream_writer::close(void)
//{
//    mangled_ppc("?close@c_single_tag_file_block_stream_writer@@QAA_NXZ");
//};

//public: c_single_tag_file_writer::c_single_tag_file_writer(struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *)
//{
//    mangled_ppc("??0c_single_tag_file_writer@@QAA@PBUs_tag_group@@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@@Z");
//};

//public: c_tag_file_write_interface::c_tag_file_write_interface(void)
//{
//    mangled_ppc("??0c_tag_file_write_interface@@QAA@XZ");
//};

//public: void c_single_tag_file_writer::cancel(void)
//{
//    mangled_ppc("?cancel@c_single_tag_file_writer@@QAAXXZ");
//};

//public: bool c_single_tag_file_writer::commit(void)
//{
//    mangled_ppc("?commit@c_single_tag_file_writer@@QAA_NXZ");
//};

//public: struct s_tag_group const * c_single_tag_file_writer::get_tag_group(void) const
//{
//    mangled_ppc("?get_tag_group@c_single_tag_file_writer@@QBAPBUs_tag_group@@XZ");
//};

//public: unsigned long c_single_tag_file_writer::get_checksum(void) const
//{
//    mangled_ppc("?get_checksum@c_single_tag_file_writer@@QBAKXZ");
//};

//public: virtual class c_persist_stream * c_single_tag_file_writer::create_root_stream(void)
//{
//    mangled_ppc("?create_root_stream@c_single_tag_file_writer@@UAAPAVc_persist_stream@@XZ");
//};

//public: virtual class c_persist_stream * c_single_tag_file_writer::create_alternate_data_stream(unsigned long, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?create_alternate_data_stream@c_single_tag_file_writer@@UAAPAVc_persist_stream@@KPBUs_tag_block_definition@@@Z");
//};

//private: class c_persist_stream * c_single_tag_file_writer::create_data_stream(unsigned long, struct s_tag_block_definition const *, bool)
//{
//    mangled_ppc("?create_data_stream@c_single_tag_file_writer@@AAAPAVc_persist_stream@@KPBUs_tag_block_definition@@_N@Z");
//};

//public: virtual bool c_single_tag_file_writer::commit_stream(class c_persist_stream *)
//{
//    mangled_ppc("?commit_stream@c_single_tag_file_writer@@UAA_NPAVc_persist_stream@@@Z");
//};

//bool single_tag_file_write_layout_stream(class c_single_tag_file_layout_writer *, class c_persist_chunk_writer *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?single_tag_file_write_layout_stream@@YA_NPAVc_single_tag_file_layout_writer@@PAVc_persist_chunk_writer@@PBUs_tag_block_definition@@@Z");
//};

//public: c_single_use_tag_file_create_backend::c_single_use_tag_file_create_backend(class c_persist_stream *, class c_single_tag_file_layout_writer *)
//{
//    mangled_ppc("??0c_single_use_tag_file_create_backend@@QAA@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@@Z");
//};

//merged_8368A0C8
//{
//    mangled_ppc("merged_8368A0C8");
//};

//public: virtual c_single_use_tag_file_create_backend::~c_single_use_tag_file_create_backend(void)
//{
//    mangled_ppc("??1c_single_use_tag_file_create_backend@@UAA@XZ");
//};

//public: virtual class c_tag_file_write_interface * c_single_use_tag_file_create_backend::create_tag_file(struct s_tag_group const *, bool)
//{
//    mangled_ppc("?create_tag_file@c_single_use_tag_file_create_backend@@UAAPAVc_tag_file_write_interface@@PBUs_tag_group@@_N@Z");
//};

//public: virtual bool c_single_use_tag_file_create_backend::save_tag_file(class c_tag_file_write_interface *, char const *, unsigned long *)
//{
//    mangled_ppc("?save_tag_file@c_single_use_tag_file_create_backend@@UAA_NPAVc_tag_file_write_interface@@PBDPAK@Z");
//};

//public: virtual void c_single_use_tag_file_create_backend::cancel_save_tag_file(class c_tag_file_write_interface *)
//{
//    mangled_ppc("?cancel_save_tag_file@c_single_use_tag_file_create_backend@@UAAXPAVc_tag_file_write_interface@@@Z");
//};

//public: c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::~c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAXXZ");
//};

//public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAPAVc_single_tag_file_block_stream@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::~c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAA@XZ");
//};

//public: class c_persist_chunk_iterator * c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAAPAVc_persist_chunk_iterator@@XZ");
//};

//public: c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAA@XZ");
//};

//public: class c_checksumed_unbounded_relative_persist_stream * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAAPAVc_checksumed_unbounded_relative_persist_stream@@XZ");
//};

//public: class c_checksumed_unbounded_relative_persist_stream const * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get_const(void) const
//{
//    mangled_ppc("?get_const@?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QBAPBVc_checksumed_unbounded_relative_persist_stream@@XZ");
//};

//public: bool c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAA@XZ");
//};

//public: class c_persist_chunk_writer * c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAAPAVc_persist_chunk_writer@@XZ");
//};

//public: bool c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAA@XZ");
//};

//public: class c_single_tag_file_block_stream_writer * c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAAPAVc_single_tag_file_block_stream_writer@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QBA_NXZ");
//};

//public: void c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAAXXZ");
//};

//public: void * c_persist_chunk_iterator::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_persist_chunk_iterator@@QAAPAXI@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_single_tag_file_header@@@c_persist_stream@@QAA_NPAUs_single_tag_file_header@@J@Z");
//};

//void byte_swap_type<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long)
//{
//    mangled_ppc("??$byte_swap_type@Us_single_tag_file_header@@@@YAXPAUs_single_tag_file_header@@J@Z");
//};

//public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *>(long, class c_allocation_interface *, class c_persist_stream *, class c_persist_stream *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *)
//{
//    mangled_ppc("??$construct@JPAVc_allocation_interface@@PAVc_persist_stream@@PAV2@PAVc_single_tag_file_layout_reader@@PAUs_tag_block_definition@@@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAPAVc_single_tag_file_block_stream@@JPAVc_allocation_interface@@PAVc_persist_stream@@1PAVc_single_tag_file_layout_reader@@PAUs_tag_block_definition@@@Z");
//};

//public: class c_persist_chunk_iterator * c_typed_opaque_data<class c_persist_chunk_iterator, 92, 4>::construct<class c_persist_stream *>(class c_persist_stream *)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@@?$c_typed_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAAPAVc_persist_chunk_iterator@@PAVc_persist_stream@@@Z");
//};

//public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *>(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition *)
//{
//    mangled_ppc("??$construct@JPAVc_allocation_interface@@PAVc_persist_chunk_iterator@@PAVc_single_tag_file_layout_reader@@PAUs_tag_block_definition@@@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAPAVc_single_tag_file_block_stream@@JPAVc_allocation_interface@@PAVc_persist_chunk_iterator@@PAVc_single_tag_file_layout_reader@@PAUs_tag_block_definition@@@Z");
//};

//public: class c_single_tag_file_block_stream * c_typed_opaque_data<class c_single_tag_file_block_stream, 44, 4>::construct<long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *>(long, class c_allocation_interface *, class c_persist_chunk_iterator *, class c_single_tag_file_layout_reader *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("??$construct@JPAVc_allocation_interface@@PAVc_persist_chunk_iterator@@PAVc_single_tag_file_layout_reader@@PBUs_tag_block_definition@@@?$c_typed_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAPAVc_single_tag_file_block_stream@@JPAVc_allocation_interface@@PAVc_persist_chunk_iterator@@PAVc_single_tag_file_layout_reader@@PBUs_tag_block_definition@@@Z");
//};

//public: class c_checksumed_unbounded_relative_persist_stream * c_typed_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::construct<class c_persist_stream *, int, bool>(class c_persist_stream *, int, bool)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@H_N@?$c_typed_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAAPAVc_checksumed_unbounded_relative_persist_stream@@PAVc_persist_stream@@H_N@Z");
//};

//public: bool c_persist_stream::write_typed<struct s_single_tag_file_header>(struct s_single_tag_file_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_single_tag_file_header@@@c_persist_stream@@QAA_NPAUs_single_tag_file_header@@J@Z");
//};

//public: class c_persist_chunk_writer * c_typed_opaque_data<class c_persist_chunk_writer, 44, 4>::construct<class c_persist_stream *>(class c_persist_stream *)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@@?$c_typed_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAAPAVc_persist_chunk_writer@@PAVc_persist_stream@@@Z");
//};

//public: class c_single_tag_file_block_stream_writer * c_typed_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::construct<class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool>(class c_persist_stream *, class c_single_tag_file_layout_writer *, unsigned long, struct s_tag_block_definition const *, bool)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@KPBUs_tag_block_definition@@_N@?$c_typed_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAAPAVc_single_tag_file_block_stream_writer@@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@KPBUs_tag_block_definition@@_N@Z");
//};

//public: class c_single_tag_file_writer * c_typed_opaque_data<class c_single_tag_file_writer, 228, 4>::construct<struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *>(struct s_tag_group const *, class c_persist_stream *, class c_single_tag_file_layout_writer *)
//{
//    mangled_ppc("??$construct@PBUs_tag_group@@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@@?$c_typed_opaque_data@Vc_single_tag_file_writer@@$0OE@$03@@QAAPAVc_single_tag_file_writer@@PBUs_tag_group@@PAVc_persist_stream@@PAVc_single_tag_file_layout_writer@@@Z");
//};

//public: class c_single_tag_file_block_stream * c_opaque_data<class c_single_tag_file_block_stream, 44, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_single_tag_file_block_stream@@$0CM@$03@@QAAPAVc_single_tag_file_block_stream@@XZ");
//};

//public: class c_persist_chunk_iterator * c_opaque_data<class c_persist_chunk_iterator, 92, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_persist_chunk_iterator@@$0FM@$03@@QAAPAVc_persist_chunk_iterator@@XZ");
//};

//public: class c_checksumed_unbounded_relative_persist_stream * c_opaque_data<class c_checksumed_unbounded_relative_persist_stream, 32, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_checksumed_unbounded_relative_persist_stream@@$0CA@$03@@QAAPAVc_checksumed_unbounded_relative_persist_stream@@XZ");
//};

//public: class c_persist_chunk_writer * c_opaque_data<class c_persist_chunk_writer, 44, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_persist_chunk_writer@@$0CM@$03@@QAAPAVc_persist_chunk_writer@@XZ");
//};

//public: class c_single_tag_file_block_stream_writer * c_opaque_data<class c_single_tag_file_block_stream_writer, 88, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_single_tag_file_block_stream_writer@@$0FI@$03@@QAAPAVc_single_tag_file_block_stream_writer@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_single_tag_file_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_single_tag_file_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

