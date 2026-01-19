/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual bool c_simple_persist_write_only_stream_base::read(void *, unsigned long);
// public: virtual bool c_simple_persist_write_only_stream_base::write_extend_to_position(void);
// public: virtual bool c_simple_persist_write_only_stream_base::seek_relative(long);
// public: virtual bool c_simple_persist_write_only_stream_base::seek_absolute(unsigned long);
// public: virtual bool c_simple_persist_write_only_stream_base::seek_to_align_absolute_position(long, unsigned long *);
// public: c_write_only_relative_persist_stream::c_write_only_relative_persist_stream(class c_persist_stream *, unsigned long);
// merged_8370DBE0;
// public: virtual c_write_only_relative_persist_stream::~c_write_only_relative_persist_stream(void);
// public: virtual bool c_write_only_relative_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_write_only_relative_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_write_only_relative_persist_stream::get_total_size(unsigned long *);
// public: c_checksum_and_used_size_write_stream::c_checksum_and_used_size_write_stream(void);
// public: c_cache_file_resource_checksum_incremental::c_cache_file_resource_checksum_incremental(void);
// merged_8370DE18;
// public: virtual bool c_checksum_and_used_size_write_stream::write(void const *, unsigned long);
// public: void c_checksum_and_used_size_write_stream::finish_writing(void);
// public: virtual bool c_checksum_and_used_size_write_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_checksum_and_used_size_write_stream::get_total_size(unsigned long *);
// public: unsigned long c_checksum_and_used_size_write_stream::get_used_size(void) const;
// public: void c_checksum_and_used_size_write_stream::get_checksum(struct s_cache_file_resource_checksum *) const;
// public: c_cache_file_compress_stream::c_cache_file_compress_stream(class c_cache_file_compressor_service *, class c_persist_stream *);
// merged_8370E268;
// public: virtual c_cache_file_compress_stream::~c_cache_file_compress_stream(void);
// public: virtual bool c_cache_file_compress_stream::write(void const *, unsigned long);
// public: virtual bool c_cache_file_compress_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_cache_file_compress_stream::get_total_size(unsigned long *);
// public: bool c_cache_file_compress_stream::finish(void);
// public: c_write_only_stream_collection::c_write_only_stream_collection(class c_wrapped_array<class c_simple_persist_write_only_stream_base *>);
// merged_8370E680;
// public: virtual c_write_only_stream_collection::~c_write_only_stream_collection(void);
// public: virtual bool c_write_only_stream_collection::write(void const *, unsigned long);
// public: virtual bool c_write_only_stream_collection::get_absolute_position(unsigned long *);
// public: virtual bool c_write_only_stream_collection::get_total_size(unsigned long *);
// private: void c_write_only_stream_collection::verify_invariants(void) const;
// public: long c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::count(void) const;
// public: class c_simple_persist_write_only_stream_base *& c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::operator[](long);
// public: class c_simple_persist_write_only_stream_base *const & c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::operator[](long) const;
// public: class c_simple_persist_write_only_stream_base ** c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::begin(void);
// public: class c_simple_persist_write_only_stream_base *const * c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::valid_index(long) const;
// public: class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> >::get_super_class(void);
// public: class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::count(void) const;
// public: c_wrapped_array<class c_simple_persist_write_only_stream_base *>::ctor<class c_simple_persist_write_only_stream_base *>(class c_wrapped_array<class c_simple_persist_write_only_stream_base *> &);
// public: void c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::set_elements(class c_simple_persist_write_only_stream_base **, long);
// public: class c_simple_persist_write_only_stream_base ** c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::get_elements(void);
// public: class c_simple_persist_write_only_stream_base ** c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::begin(void);

//public: virtual bool c_simple_persist_write_only_stream_base::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_simple_persist_write_only_stream_base@@UAA_NPAXK@Z");
//};

//public: virtual bool c_simple_persist_write_only_stream_base::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_simple_persist_write_only_stream_base@@UAA_NXZ");
//};

//public: virtual bool c_simple_persist_write_only_stream_base::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_simple_persist_write_only_stream_base@@UAA_NJ@Z");
//};

//public: virtual bool c_simple_persist_write_only_stream_base::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_simple_persist_write_only_stream_base@@UAA_NK@Z");
//};

//public: virtual bool c_simple_persist_write_only_stream_base::seek_to_align_absolute_position(long, unsigned long *)
//{
//    mangled_ppc("?seek_to_align_absolute_position@c_simple_persist_write_only_stream_base@@UAA_NJPAK@Z");
//};

//public: c_write_only_relative_persist_stream::c_write_only_relative_persist_stream(class c_persist_stream *, unsigned long)
//{
//    mangled_ppc("??0c_write_only_relative_persist_stream@@QAA@PAVc_persist_stream@@K@Z");
//};

//merged_8370DBE0
//{
//    mangled_ppc("merged_8370DBE0");
//};

//public: virtual c_write_only_relative_persist_stream::~c_write_only_relative_persist_stream(void)
//{
//    mangled_ppc("??1c_write_only_relative_persist_stream@@UAA@XZ");
//};

//public: virtual bool c_write_only_relative_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_write_only_relative_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_write_only_relative_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_write_only_relative_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_write_only_relative_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_write_only_relative_persist_stream@@UAA_NPAK@Z");
//};

//public: c_checksum_and_used_size_write_stream::c_checksum_and_used_size_write_stream(void)
//{
//    mangled_ppc("??0c_checksum_and_used_size_write_stream@@QAA@XZ");
//};

//public: c_cache_file_resource_checksum_incremental::c_cache_file_resource_checksum_incremental(void)
//{
//    mangled_ppc("??0c_cache_file_resource_checksum_incremental@@QAA@XZ");
//};

//merged_8370DE18
//{
//    mangled_ppc("merged_8370DE18");
//};

//public: virtual bool c_checksum_and_used_size_write_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_checksum_and_used_size_write_stream@@UAA_NPBXK@Z");
//};

//public: void c_checksum_and_used_size_write_stream::finish_writing(void)
//{
//    mangled_ppc("?finish_writing@c_checksum_and_used_size_write_stream@@QAAXXZ");
//};

//public: virtual bool c_checksum_and_used_size_write_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_checksum_and_used_size_write_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_checksum_and_used_size_write_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_checksum_and_used_size_write_stream@@UAA_NPAK@Z");
//};

//public: unsigned long c_checksum_and_used_size_write_stream::get_used_size(void) const
//{
//    mangled_ppc("?get_used_size@c_checksum_and_used_size_write_stream@@QBAKXZ");
//};

//public: void c_checksum_and_used_size_write_stream::get_checksum(struct s_cache_file_resource_checksum *) const
//{
//    mangled_ppc("?get_checksum@c_checksum_and_used_size_write_stream@@QBAXPAUs_cache_file_resource_checksum@@@Z");
//};

//public: c_cache_file_compress_stream::c_cache_file_compress_stream(class c_cache_file_compressor_service *, class c_persist_stream *)
//{
//    mangled_ppc("??0c_cache_file_compress_stream@@QAA@PAVc_cache_file_compressor_service@@PAVc_persist_stream@@@Z");
//};

//merged_8370E268
//{
//    mangled_ppc("merged_8370E268");
//};

//public: virtual c_cache_file_compress_stream::~c_cache_file_compress_stream(void)
//{
//    mangled_ppc("??1c_cache_file_compress_stream@@UAA@XZ");
//};

//public: virtual bool c_cache_file_compress_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_cache_file_compress_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_cache_file_compress_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_cache_file_compress_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_cache_file_compress_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_cache_file_compress_stream@@UAA_NPAK@Z");
//};

//public: bool c_cache_file_compress_stream::finish(void)
//{
//    mangled_ppc("?finish@c_cache_file_compress_stream@@QAA_NXZ");
//};

//public: c_write_only_stream_collection::c_write_only_stream_collection(class c_wrapped_array<class c_simple_persist_write_only_stream_base *>)
//{
//    mangled_ppc("??0c_write_only_stream_collection@@QAA@V?$c_wrapped_array@PAVc_simple_persist_write_only_stream_base@@@@@Z");
//};

//merged_8370E680
//{
//    mangled_ppc("merged_8370E680");
//};

//public: virtual c_write_only_stream_collection::~c_write_only_stream_collection(void)
//{
//    mangled_ppc("??1c_write_only_stream_collection@@UAA@XZ");
//};

//public: virtual bool c_write_only_stream_collection::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_write_only_stream_collection@@UAA_NPBXK@Z");
//};

//public: virtual bool c_write_only_stream_collection::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_write_only_stream_collection@@UAA_NPAK@Z");
//};

//public: virtual bool c_write_only_stream_collection::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_write_only_stream_collection@@UAA_NPAK@Z");
//};

//private: void c_write_only_stream_collection::verify_invariants(void) const
//{
//    mangled_ppc("?verify_invariants@c_write_only_stream_collection@@ABAXXZ");
//};

//public: long c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@QBAJXZ");
//};

//public: class c_simple_persist_write_only_stream_base *& c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QAAAAPAVc_simple_persist_write_only_stream_base@@J@Z");
//};

//public: class c_simple_persist_write_only_stream_base *const & c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QBAABQAVc_simple_persist_write_only_stream_base@@J@Z");
//};

//public: class c_simple_persist_write_only_stream_base ** c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@QAAPAPAVc_simple_persist_write_only_stream_base@@XZ");
//};

//public: class c_simple_persist_write_only_stream_base *const * c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@QBAPBQAVc_simple_persist_write_only_stream_base@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@@@QAAPAV?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@XZ");
//};

//public: class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@@@QBAPBV?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QBAJXZ");
//};

//public: c_wrapped_array<class c_simple_persist_write_only_stream_base *>::ctor<class c_simple_persist_write_only_stream_base *>(class c_wrapped_array<class c_simple_persist_write_only_stream_base *> &)
//{
//    mangled_ppc("??$?0PAVc_simple_persist_write_only_stream_base@@@?$c_wrapped_array@PAVc_simple_persist_write_only_stream_base@@@@QAA@AAV0@@Z");
//};

//public: void c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>::set_elements(class c_simple_persist_write_only_stream_base **, long)
//{
//    mangled_ppc("?set_elements@?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@QAAXPAPAVc_simple_persist_write_only_stream_base@@J@Z");
//};

//public: class c_simple_persist_write_only_stream_base ** c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QAAPAPAVc_simple_persist_write_only_stream_base@@XZ");
//};

//public: class c_simple_persist_write_only_stream_base ** c_array_operator_interface<class c_wrapped_array_no_init<class c_simple_persist_write_only_stream_base *>, class c_simple_persist_write_only_stream_base *>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PAVc_simple_persist_write_only_stream_base@@@@PAVc_simple_persist_write_only_stream_base@@@@QAAPAPAVc_simple_persist_write_only_stream_base@@XZ");
//};

