/* ---------- headers */

#include "omaha\toolbox\chunk_persist_streams.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_persist_chunk_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_persist_chunk_header@@@@2QBJB"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_persist_chunk_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_persist_chunk_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_persist_chunk_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_persist_chunk_header@@@@2PAUbyte_swap_definition@@A"

// public: c_persist_chunk_writer::c_persist_chunk_writer(class c_persist_stream *);
// public: c_persist_chunk_writer::~c_persist_chunk_writer(void);
// public: class c_persist_stream * c_persist_chunk_writer::add_chunk(unsigned long, long, unsigned long);
// public: void c_persist_chunk_writer::close_chunk(class c_persist_stream *);
// public: void c_persist_chunk_writer::abort_chunk(class c_persist_stream *);
// public: class c_persist_stream * c_persist_chunk_writer::add_variable_chunk(void);
// public: bool c_persist_chunk_writer::commit_variable_chunk(unsigned long, long, class c_persist_stream *);
// public: void c_persist_chunk_writer::abort_variable_chunk(class c_persist_stream *);
// public: void c_persist_chunk_reader::restore(class c_persist_stream *);
// public: virtual c_bounded_relative_persist_stream::~c_bounded_relative_persist_stream(void);
// public: virtual c_relative_persist_stream_base::~c_relative_persist_stream_base(void);
// public: c_persist_chunk_iterator::c_persist_chunk_iterator(class c_persist_stream *);
// public: c_persist_chunk_iterator::c_persist_chunk_iterator(class c_persist_stream *, class c_persist_stream *);
// public: c_persist_chunk_iterator::~c_persist_chunk_iterator(void);
// bool safe_chunk_header_increment(unsigned long, unsigned long);
// public: bool c_persist_chunk_iterator::next(void);
// public: bool c_persist_chunk_iterator::done(void) const;
// public: struct s_persist_chunk_header const * c_persist_chunk_iterator::get_chunk_header(void) const;
// public: class c_persist_stream * c_persist_chunk_iterator::acquire_chunk_stream(void);
// public: void c_persist_chunk_iterator::release_chunk_stream(void);
// public: void c_persist_chunk_iterator::open_chunk_stream(class c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4> *);
// public: c_bounded_relative_persist_stream::c_bounded_relative_persist_stream(class c_bounded_relative_persist_stream const &);
// merged_833C8BA8;
// public: c_relative_persist_stream_base::c_relative_persist_stream_base(class c_relative_persist_stream_base const &);
// merged_833C8C68;
// public: c_simple_persist_stream_base::c_simple_persist_stream_base(class c_simple_persist_stream_base const &);
// merged_833C8D08;
// public: c_persist_stream::c_persist_stream(class c_persist_stream const &);
// public: c_scoped_variable_chunk::c_scoped_variable_chunk(class c_persist_chunk_writer *);
// public: c_scoped_variable_chunk::~c_scoped_variable_chunk(void);
// public: bool c_scoped_variable_chunk::create_chunk(void);
// public: class c_persist_stream * c_scoped_variable_chunk::get_chunk_stream(void);
// public: bool c_scoped_variable_chunk::commit_chunk(unsigned long, long);
// public: c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>(void);
// public: c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::~c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>(void);
// public: void c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::destruct(void);
// public: c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>(void);
// public: c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::~c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>(void);
// public: void c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::destruct(void);
// public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::get(void);
// public: c_reference_count<unsigned char>::c_reference_count<unsigned char>(void);
// public: c_reference_count<unsigned char>::~c_reference_count<unsigned char>(void);
// public: void c_reference_count<unsigned char>::acquire(void);
// public: void c_reference_count<unsigned char>::release(void);
// public: bool c_reference_count<unsigned char>::unlocked(void) const;
// public: bool c_persist_stream::write_typed<struct s_persist_chunk_header>(struct s_persist_chunk_header *, long);
// public: class c_unbounded_relative_persist_stream * c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long>(class c_persist_stream *, unsigned long);
// public: bool c_persist_stream::read_typed<struct s_persist_chunk_header>(struct s_persist_chunk_header *, long);
// public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long, int>(class c_persist_stream *, unsigned long, int);
// public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long, unsigned long>(class c_persist_stream *, unsigned long, unsigned long);
// public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_bounded_relative_persist_stream>(class c_bounded_relative_persist_stream);
// public: class c_unbounded_relative_persist_stream * c_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::get(void);
// public: class c_bounded_relative_persist_stream * c_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::get(void);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_persist_chunk_header>::get_bs_definition(void);

//public: c_persist_chunk_writer::c_persist_chunk_writer(class c_persist_stream *)
//{
//    mangled_ppc("??0c_persist_chunk_writer@@QAA@PAVc_persist_stream@@@Z");
//};

//public: c_persist_chunk_writer::~c_persist_chunk_writer(void)
//{
//    mangled_ppc("??1c_persist_chunk_writer@@QAA@XZ");
//};

//public: class c_persist_stream * c_persist_chunk_writer::add_chunk(unsigned long, long, unsigned long)
//{
//    mangled_ppc("?add_chunk@c_persist_chunk_writer@@QAAPAVc_persist_stream@@KJK@Z");
//};

//public: void c_persist_chunk_writer::close_chunk(class c_persist_stream *)
//{
//    mangled_ppc("?close_chunk@c_persist_chunk_writer@@QAAXPAVc_persist_stream@@@Z");
//};

//public: void c_persist_chunk_writer::abort_chunk(class c_persist_stream *)
//{
//    mangled_ppc("?abort_chunk@c_persist_chunk_writer@@QAAXPAVc_persist_stream@@@Z");
//};

//public: class c_persist_stream * c_persist_chunk_writer::add_variable_chunk(void)
//{
//    mangled_ppc("?add_variable_chunk@c_persist_chunk_writer@@QAAPAVc_persist_stream@@XZ");
//};

//public: bool c_persist_chunk_writer::commit_variable_chunk(unsigned long, long, class c_persist_stream *)
//{
//    mangled_ppc("?commit_variable_chunk@c_persist_chunk_writer@@QAA_NKJPAVc_persist_stream@@@Z");
//};

//public: void c_persist_chunk_writer::abort_variable_chunk(class c_persist_stream *)
//{
//    mangled_ppc("?abort_variable_chunk@c_persist_chunk_writer@@QAAXPAVc_persist_stream@@@Z");
//};

//public: void c_persist_chunk_reader::restore(class c_persist_stream *)
//{
//    mangled_ppc("?restore@c_persist_chunk_reader@@QAAXPAVc_persist_stream@@@Z");
//};

//public: virtual c_bounded_relative_persist_stream::~c_bounded_relative_persist_stream(void)
//{
//    mangled_ppc("??1c_bounded_relative_persist_stream@@UAA@XZ");
//};

//public: virtual c_relative_persist_stream_base::~c_relative_persist_stream_base(void)
//{
//    mangled_ppc("??1c_relative_persist_stream_base@@UAA@XZ");
//};

//public: c_persist_chunk_iterator::c_persist_chunk_iterator(class c_persist_stream *)
//{
//    mangled_ppc("??0c_persist_chunk_iterator@@QAA@PAVc_persist_stream@@@Z");
//};

//public: c_persist_chunk_iterator::c_persist_chunk_iterator(class c_persist_stream *, class c_persist_stream *)
//{
//    mangled_ppc("??0c_persist_chunk_iterator@@QAA@PAVc_persist_stream@@0@Z");
//};

//public: c_persist_chunk_iterator::~c_persist_chunk_iterator(void)
//{
//    mangled_ppc("??1c_persist_chunk_iterator@@QAA@XZ");
//};

//bool safe_chunk_header_increment(unsigned long, unsigned long)
//{
//    mangled_ppc("?safe_chunk_header_increment@@YA_NKK@Z");
//};

//public: bool c_persist_chunk_iterator::next(void)
//{
//    mangled_ppc("?next@c_persist_chunk_iterator@@QAA_NXZ");
//};

//public: bool c_persist_chunk_iterator::done(void) const
//{
//    mangled_ppc("?done@c_persist_chunk_iterator@@QBA_NXZ");
//};

//public: struct s_persist_chunk_header const * c_persist_chunk_iterator::get_chunk_header(void) const
//{
//    mangled_ppc("?get_chunk_header@c_persist_chunk_iterator@@QBAPBUs_persist_chunk_header@@XZ");
//};

//public: class c_persist_stream * c_persist_chunk_iterator::acquire_chunk_stream(void)
//{
//    mangled_ppc("?acquire_chunk_stream@c_persist_chunk_iterator@@QAAPAVc_persist_stream@@XZ");
//};

//public: void c_persist_chunk_iterator::release_chunk_stream(void)
//{
//    mangled_ppc("?release_chunk_stream@c_persist_chunk_iterator@@QAAXXZ");
//};

//public: void c_persist_chunk_iterator::open_chunk_stream(class c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4> *)
//{
//    mangled_ppc("?open_chunk_stream@c_persist_chunk_iterator@@QAAXPAV?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@@Z");
//};

//public: c_bounded_relative_persist_stream::c_bounded_relative_persist_stream(class c_bounded_relative_persist_stream const &)
//{
//    mangled_ppc("??0c_bounded_relative_persist_stream@@QAA@ABV0@@Z");
//};

//merged_833C8BA8
//{
//    mangled_ppc("merged_833C8BA8");
//};

//public: c_relative_persist_stream_base::c_relative_persist_stream_base(class c_relative_persist_stream_base const &)
//{
//    mangled_ppc("??0c_relative_persist_stream_base@@QAA@ABV0@@Z");
//};

//merged_833C8C68
//{
//    mangled_ppc("merged_833C8C68");
//};

//public: c_simple_persist_stream_base::c_simple_persist_stream_base(class c_simple_persist_stream_base const &)
//{
//    mangled_ppc("??0c_simple_persist_stream_base@@QAA@ABV0@@Z");
//};

//merged_833C8D08
//{
//    mangled_ppc("merged_833C8D08");
//};

//public: c_persist_stream::c_persist_stream(class c_persist_stream const &)
//{
//    mangled_ppc("??0c_persist_stream@@QAA@ABV0@@Z");
//};

//public: c_scoped_variable_chunk::c_scoped_variable_chunk(class c_persist_chunk_writer *)
//{
//    mangled_ppc("??0c_scoped_variable_chunk@@QAA@PAVc_persist_chunk_writer@@@Z");
//};

//public: c_scoped_variable_chunk::~c_scoped_variable_chunk(void)
//{
//    mangled_ppc("??1c_scoped_variable_chunk@@QAA@XZ");
//};

//public: bool c_scoped_variable_chunk::create_chunk(void)
//{
//    mangled_ppc("?create_chunk@c_scoped_variable_chunk@@QAA_NXZ");
//};

//public: class c_persist_stream * c_scoped_variable_chunk::get_chunk_stream(void)
//{
//    mangled_ppc("?get_chunk_stream@c_scoped_variable_chunk@@QAAPAVc_persist_stream@@XZ");
//};

//public: bool c_scoped_variable_chunk::commit_chunk(unsigned long, long)
//{
//    mangled_ppc("?commit_chunk@c_scoped_variable_chunk@@QAA_NKJ@Z");
//};

//public: c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_unbounded_relative_persist_stream@@$0BI@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::~c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_unbounded_relative_persist_stream@@$0BI@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_unbounded_relative_persist_stream@@$0BI@$03@@QAAXXZ");
//};

//public: c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::~c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAXXZ");
//};

//public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_bounded_relative_persist_stream@@XZ");
//};

//public: c_reference_count<unsigned char>::c_reference_count<unsigned char>(void)
//{
//    mangled_ppc("??0?$c_reference_count@E@@QAA@XZ");
//};

//public: c_reference_count<unsigned char>::~c_reference_count<unsigned char>(void)
//{
//    mangled_ppc("??1?$c_reference_count@E@@QAA@XZ");
//};

//public: void c_reference_count<unsigned char>::acquire(void)
//{
//    mangled_ppc("?acquire@?$c_reference_count@E@@QAAXXZ");
//};

//public: void c_reference_count<unsigned char>::release(void)
//{
//    mangled_ppc("?release@?$c_reference_count@E@@QAAXXZ");
//};

//public: bool c_reference_count<unsigned char>::unlocked(void) const
//{
//    mangled_ppc("?unlocked@?$c_reference_count@E@@QBA_NXZ");
//};

//public: bool c_persist_stream::write_typed<struct s_persist_chunk_header>(struct s_persist_chunk_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_persist_chunk_header@@@c_persist_stream@@QAA_NPAUs_persist_chunk_header@@J@Z");
//};

//public: class c_unbounded_relative_persist_stream * c_typed_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long>(class c_persist_stream *, unsigned long)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@K@?$c_typed_opaque_data@Vc_unbounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_unbounded_relative_persist_stream@@PAVc_persist_stream@@K@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_persist_chunk_header>(struct s_persist_chunk_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_persist_chunk_header@@@c_persist_stream@@QAA_NPAUs_persist_chunk_header@@J@Z");
//};

//public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long, int>(class c_persist_stream *, unsigned long, int)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@KH@?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_bounded_relative_persist_stream@@PAVc_persist_stream@@KH@Z");
//};

//public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_persist_stream *, unsigned long, unsigned long>(class c_persist_stream *, unsigned long, unsigned long)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@KK@?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_bounded_relative_persist_stream@@PAVc_persist_stream@@KK@Z");
//};

//public: class c_bounded_relative_persist_stream * c_typed_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::construct<class c_bounded_relative_persist_stream>(class c_bounded_relative_persist_stream)
//{
//    mangled_ppc("??$construct@Vc_bounded_relative_persist_stream@@@?$c_typed_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_bounded_relative_persist_stream@@V1@@Z");
//};

//public: class c_unbounded_relative_persist_stream * c_opaque_data<class c_unbounded_relative_persist_stream, 24, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_unbounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_unbounded_relative_persist_stream@@XZ");
//};

//public: class c_bounded_relative_persist_stream * c_opaque_data<class c_bounded_relative_persist_stream, 24, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_bounded_relative_persist_stream@@$0BI@$03@@QAAPAVc_bounded_relative_persist_stream@@XZ");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_persist_chunk_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_persist_chunk_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

