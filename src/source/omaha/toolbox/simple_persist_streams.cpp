/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_simple_persist_stream_base::c_simple_persist_stream_base(void);
// public: c_simple_persist_stream_base::c_simple_persist_stream_base(bool);
// public: virtual bool c_simple_persist_stream_base::needs_byteswapping(void);
// public: virtual void c_simple_persist_stream_base::set_needs_byteswapping(bool);
// public: c_used_size_only_stream::c_used_size_only_stream(void);
// merged_833D8D28;
// public: virtual bool c_used_size_only_stream::read(void *, unsigned long);
// public: virtual bool c_used_size_only_stream::write(void const *, unsigned long);
// public: virtual bool c_used_size_only_stream::write_extend_to_position(void);
// public: virtual bool c_used_size_only_stream::seek_relative(long);
// public: virtual bool c_used_size_only_stream::seek_absolute(unsigned long);
// public: virtual bool c_used_size_only_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_used_size_only_stream::get_total_size(unsigned long *);
// public: unsigned long c_used_size_only_stream::get_used_size(void) const;
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, unsigned long);
// merged_833D9118;
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, unsigned long, unsigned __int64*);
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(char const *, unsigned long);
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(unsigned long);
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, char const *, unsigned long);
// public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, char const *, unsigned long, unsigned __int64*);
// public: virtual c_simple_file_persist_stream::~c_simple_file_persist_stream(void);
// public: virtual bool c_simple_file_persist_stream::read(void *, unsigned long);
// public: virtual bool c_simple_file_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_simple_file_persist_stream::write_extend_to_position(void);
// public: virtual bool c_simple_file_persist_stream::seek_relative(long);
// public: virtual bool c_simple_file_persist_stream::seek_absolute(unsigned long);
// public: virtual bool c_simple_file_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_simple_file_persist_stream::get_total_size(unsigned long *);
// public: bool c_simple_file_persist_stream::close(void);
// public: bool c_simple_file_persist_stream::open(unsigned long);
// public: unsigned long c_simple_file_persist_stream::get_position(void) const;
// public: bool c_simple_file_persist_stream::set_eof(unsigned long);
// public: void c_simple_file_persist_stream::get_file_reference(struct s_file_reference *);
// public: struct s_file_reference const * c_simple_file_persist_stream::get_file_reference_const(void) const;
// public: c_relative_persist_stream_base::c_relative_persist_stream_base(class c_persist_stream *, unsigned long);
// public: virtual bool c_relative_persist_stream_base::read(void *, unsigned long);
// public: virtual bool c_relative_persist_stream_base::write(void const *, unsigned long);
// public: virtual bool c_relative_persist_stream_base::reserve_write(unsigned long, unsigned long);
// public: virtual bool c_relative_persist_stream_base::seek_relative(long);
// public: virtual bool c_relative_persist_stream_base::seek_absolute(unsigned long);
// public: virtual bool c_relative_persist_stream_base::get_absolute_position(unsigned long *);
// public: virtual bool c_relative_persist_stream_base::get_position_relative_to_stream(class c_persist_stream *, unsigned long *);
// public: virtual bool c_relative_persist_stream_base::get_absolute_position_relative_to_stream(class c_persist_stream *, unsigned long, unsigned long *);
// protected: unsigned long c_relative_persist_stream_base::get_local_position(void) const;
// protected: unsigned long c_relative_persist_stream_base::get_parent_relative_position(void) const;
// public: virtual class c_persist_stream * c_relative_persist_stream_base::get_ancestor_stream(void);
// public: class c_persist_stream * c_relative_persist_stream_base::get_parent_stream(void);
// public: c_bounded_relative_persist_stream::c_bounded_relative_persist_stream(class c_persist_stream *, unsigned long, unsigned long);
// protected: virtual bool c_bounded_relative_persist_stream::validate_range(unsigned long, long);
// public: virtual bool c_bounded_relative_persist_stream::get_total_size(unsigned long *);
// public: virtual bool c_bounded_relative_persist_stream::write_extend_to_position(void);
// public: c_unbounded_relative_persist_stream::c_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long);
// merged_833DA6D8;
// public: virtual c_unbounded_relative_persist_stream::~c_unbounded_relative_persist_stream(void);
// protected: virtual bool c_unbounded_relative_persist_stream::validate_range(unsigned long, long);
// public: virtual bool c_unbounded_relative_persist_stream::get_total_size(unsigned long *);
// public: virtual bool c_unbounded_relative_persist_stream::write_extend_to_position(void);
// public: c_quantum_canary_unbounded_relative_persist_stream::c_quantum_canary_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long);
// merged_833DA8C0;
// public: virtual c_quantum_canary_unbounded_relative_persist_stream::~c_quantum_canary_unbounded_relative_persist_stream(void);
// protected: virtual bool c_quantum_canary_unbounded_relative_persist_stream::validate_range(unsigned long, long);
// public: virtual bool c_quantum_canary_unbounded_relative_persist_stream::seek_relative(long);
// public: virtual bool c_quantum_canary_unbounded_relative_persist_stream::seek_absolute(unsigned long);
// private: void c_quantum_canary_unbounded_relative_persist_stream::synchronize_position(void);
// public: c_memory_persist_stream::c_memory_persist_stream(void *, unsigned long);
// merged_833DABB0;
// public: c_memory_persist_stream::c_memory_persist_stream(class c_basic_buffer<void>);
// public: virtual bool c_memory_persist_stream::read(void *, unsigned long);
// public: virtual bool c_memory_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_memory_persist_stream::write_extend_to_position(void);
// public: virtual bool c_memory_persist_stream::seek_relative(long);
// public: virtual bool c_memory_persist_stream::seek_absolute(unsigned long);
// public: virtual bool c_memory_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_memory_persist_stream::get_total_size(unsigned long *);
// public: unsigned long c_memory_persist_stream::get_position(void) const;
// public: c_write_verify_persist_stream::c_write_verify_persist_stream(class c_basic_buffer<void const>);
// merged_833DB4B0;
// public: virtual c_write_verify_persist_stream::~c_write_verify_persist_stream(void);
// public: virtual bool c_write_verify_persist_stream::read(void *, unsigned long);
// public: virtual bool c_write_verify_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_write_verify_persist_stream::write_extend_to_position(void);
// public: virtual bool c_write_verify_persist_stream::seek_relative(long);
// public: virtual bool c_write_verify_persist_stream::seek_absolute(unsigned long);
// public: virtual bool c_write_verify_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_write_verify_persist_stream::get_total_size(unsigned long *);
// public: c_positional_stream_base::c_positional_stream_base(void);
// merged_833DBC20;
// public: virtual c_positional_stream_base::~c_positional_stream_base(void);
// public: c_positional_stream_base::c_positional_stream_base(unsigned long);
// public: virtual bool c_positional_stream_base::read(void *, unsigned long);
// public: virtual bool c_positional_stream_base::write(void const *, unsigned long);
// public: virtual bool c_positional_stream_base::write_extend_to_position(void);
// public: virtual bool c_positional_stream_base::seek_relative(long);
// public: virtual bool c_positional_stream_base::seek_absolute(unsigned long);
// public: virtual bool c_positional_stream_base::get_absolute_position(unsigned long *);
// public: c_read_only_memory_stream::c_read_only_memory_stream(class c_basic_buffer<void const>);
// merged_833DBFB0;
// public: virtual c_read_only_memory_stream::~c_read_only_memory_stream(void);
// public: virtual bool c_read_only_memory_stream::get_total_size(unsigned long *);
// private: virtual bool c_read_only_memory_stream::read_from_position(class c_basic_buffer<void>, unsigned long);
// private: virtual bool c_read_only_memory_stream::write_to_position(class c_basic_buffer<void const>, unsigned long);
// private: virtual bool c_read_only_memory_stream::write_extend_to_position(unsigned long);
// public: c_dynamic_memory_persist_stream::c_dynamic_memory_persist_stream(struct array_template<unsigned char> *, bool);
// merged_833DC2C0;
// public: virtual c_dynamic_memory_persist_stream::~c_dynamic_memory_persist_stream(void);
// public: struct array_template<unsigned char> const & c_dynamic_memory_persist_stream::get_buffer(void) const;
// public: virtual bool c_dynamic_memory_persist_stream::read(void *, unsigned long);
// public: virtual bool c_dynamic_memory_persist_stream::write(void const *, unsigned long);
// public: virtual bool c_dynamic_memory_persist_stream::write_extend_to_position(void);
// public: virtual bool c_dynamic_memory_persist_stream::seek_relative(long);
// public: virtual bool c_dynamic_memory_persist_stream::seek_absolute(unsigned long);
// public: virtual bool c_dynamic_memory_persist_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_dynamic_memory_persist_stream::get_total_size(unsigned long *);
// private: bool c_dynamic_memory_persist_stream::ensure_buffer_size(unsigned long);
// public: c_simple_array_persist_stream::c_simple_array_persist_stream(void);
// merged_833DCB28;
// public: virtual c_simple_array_persist_stream::~c_simple_array_persist_stream(void);

//public: c_simple_persist_stream_base::c_simple_persist_stream_base(void)
//{
//    mangled_ppc("??0c_simple_persist_stream_base@@QAA@XZ");
//};

//public: c_simple_persist_stream_base::c_simple_persist_stream_base(bool)
//{
//    mangled_ppc("??0c_simple_persist_stream_base@@QAA@_N@Z");
//};

//public: virtual bool c_simple_persist_stream_base::needs_byteswapping(void)
//{
//    mangled_ppc("?needs_byteswapping@c_simple_persist_stream_base@@UAA_NXZ");
//};

//public: virtual void c_simple_persist_stream_base::set_needs_byteswapping(bool)
//{
//    mangled_ppc("?set_needs_byteswapping@c_simple_persist_stream_base@@UAAX_N@Z");
//};

//public: c_used_size_only_stream::c_used_size_only_stream(void)
//{
//    mangled_ppc("??0c_used_size_only_stream@@QAA@XZ");
//};

//merged_833D8D28
//{
//    mangled_ppc("merged_833D8D28");
//};

//public: virtual bool c_used_size_only_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_used_size_only_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_used_size_only_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_used_size_only_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_used_size_only_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_used_size_only_stream@@UAA_NXZ");
//};

//public: virtual bool c_used_size_only_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_used_size_only_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_used_size_only_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_used_size_only_stream@@UAA_NK@Z");
//};

//public: virtual bool c_used_size_only_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_used_size_only_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_used_size_only_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_used_size_only_stream@@UAA_NPAK@Z");
//};

//public: unsigned long c_used_size_only_stream::get_used_size(void) const
//{
//    mangled_ppc("?get_used_size@c_used_size_only_stream@@QBAKXZ");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, unsigned long)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@PBUs_file_reference@@K@Z");
//};

//merged_833D9118
//{
//    mangled_ppc("merged_833D9118");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, unsigned long, unsigned __int64*)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@PBUs_file_reference@@KPA_K@Z");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(char const *, unsigned long)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@PBDK@Z");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(unsigned long)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@K@Z");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, char const *, unsigned long)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@PBUs_file_reference@@PBDK@Z");
//};

//public: c_simple_file_persist_stream::c_simple_file_persist_stream(struct s_file_reference const *, char const *, unsigned long, unsigned __int64*)
//{
//    mangled_ppc("??0c_simple_file_persist_stream@@QAA@PBUs_file_reference@@PBDKPA_K@Z");
//};

//public: virtual c_simple_file_persist_stream::~c_simple_file_persist_stream(void)
//{
//    mangled_ppc("??1c_simple_file_persist_stream@@UAA@XZ");
//};

//public: virtual bool c_simple_file_persist_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_simple_file_persist_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_simple_file_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_simple_file_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_simple_file_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_simple_file_persist_stream@@UAA_NXZ");
//};

//public: virtual bool c_simple_file_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_simple_file_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_simple_file_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_simple_file_persist_stream@@UAA_NK@Z");
//};

//public: virtual bool c_simple_file_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_simple_file_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_simple_file_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_simple_file_persist_stream@@UAA_NPAK@Z");
//};

//public: bool c_simple_file_persist_stream::close(void)
//{
//    mangled_ppc("?close@c_simple_file_persist_stream@@QAA_NXZ");
//};

//public: bool c_simple_file_persist_stream::open(unsigned long)
//{
//    mangled_ppc("?open@c_simple_file_persist_stream@@QAA_NK@Z");
//};

//public: unsigned long c_simple_file_persist_stream::get_position(void) const
//{
//    mangled_ppc("?get_position@c_simple_file_persist_stream@@QBAKXZ");
//};

//public: bool c_simple_file_persist_stream::set_eof(unsigned long)
//{
//    mangled_ppc("?set_eof@c_simple_file_persist_stream@@QAA_NK@Z");
//};

//public: void c_simple_file_persist_stream::get_file_reference(struct s_file_reference *)
//{
//    mangled_ppc("?get_file_reference@c_simple_file_persist_stream@@QAAXPAUs_file_reference@@@Z");
//};

//public: struct s_file_reference const * c_simple_file_persist_stream::get_file_reference_const(void) const
//{
//    mangled_ppc("?get_file_reference_const@c_simple_file_persist_stream@@QBAPBUs_file_reference@@XZ");
//};

//public: c_relative_persist_stream_base::c_relative_persist_stream_base(class c_persist_stream *, unsigned long)
//{
//    mangled_ppc("??0c_relative_persist_stream_base@@QAA@PAVc_persist_stream@@K@Z");
//};

//public: virtual bool c_relative_persist_stream_base::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_relative_persist_stream_base@@UAA_NPAXK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_relative_persist_stream_base@@UAA_NPBXK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::reserve_write(unsigned long, unsigned long)
//{
//    mangled_ppc("?reserve_write@c_relative_persist_stream_base@@UAA_NKK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_relative_persist_stream_base@@UAA_NJ@Z");
//};

//public: virtual bool c_relative_persist_stream_base::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_relative_persist_stream_base@@UAA_NK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_relative_persist_stream_base@@UAA_NPAK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::get_position_relative_to_stream(class c_persist_stream *, unsigned long *)
//{
//    mangled_ppc("?get_position_relative_to_stream@c_relative_persist_stream_base@@UAA_NPAVc_persist_stream@@PAK@Z");
//};

//public: virtual bool c_relative_persist_stream_base::get_absolute_position_relative_to_stream(class c_persist_stream *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?get_absolute_position_relative_to_stream@c_relative_persist_stream_base@@UAA_NPAVc_persist_stream@@KPAK@Z");
//};

//protected: unsigned long c_relative_persist_stream_base::get_local_position(void) const
//{
//    mangled_ppc("?get_local_position@c_relative_persist_stream_base@@IBAKXZ");
//};

//protected: unsigned long c_relative_persist_stream_base::get_parent_relative_position(void) const
//{
//    mangled_ppc("?get_parent_relative_position@c_relative_persist_stream_base@@IBAKXZ");
//};

//public: virtual class c_persist_stream * c_relative_persist_stream_base::get_ancestor_stream(void)
//{
//    mangled_ppc("?get_ancestor_stream@c_relative_persist_stream_base@@UAAPAVc_persist_stream@@XZ");
//};

//public: class c_persist_stream * c_relative_persist_stream_base::get_parent_stream(void)
//{
//    mangled_ppc("?get_parent_stream@c_relative_persist_stream_base@@QAAPAVc_persist_stream@@XZ");
//};

//public: c_bounded_relative_persist_stream::c_bounded_relative_persist_stream(class c_persist_stream *, unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_bounded_relative_persist_stream@@QAA@PAVc_persist_stream@@KK@Z");
//};

//protected: virtual bool c_bounded_relative_persist_stream::validate_range(unsigned long, long)
//{
//    mangled_ppc("?validate_range@c_bounded_relative_persist_stream@@MAA_NKJ@Z");
//};

//public: virtual bool c_bounded_relative_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_bounded_relative_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_bounded_relative_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_bounded_relative_persist_stream@@UAA_NXZ");
//};

//public: c_unbounded_relative_persist_stream::c_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long)
//{
//    mangled_ppc("??0c_unbounded_relative_persist_stream@@QAA@PAVc_persist_stream@@K@Z");
//};

//merged_833DA6D8
//{
//    mangled_ppc("merged_833DA6D8");
//};

//public: virtual c_unbounded_relative_persist_stream::~c_unbounded_relative_persist_stream(void)
//{
//    mangled_ppc("??1c_unbounded_relative_persist_stream@@UAA@XZ");
//};

//protected: virtual bool c_unbounded_relative_persist_stream::validate_range(unsigned long, long)
//{
//    mangled_ppc("?validate_range@c_unbounded_relative_persist_stream@@MAA_NKJ@Z");
//};

//public: virtual bool c_unbounded_relative_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_unbounded_relative_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_unbounded_relative_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_unbounded_relative_persist_stream@@UAA_NXZ");
//};

//public: c_quantum_canary_unbounded_relative_persist_stream::c_quantum_canary_unbounded_relative_persist_stream(class c_persist_stream *, unsigned long)
//{
//    mangled_ppc("??0c_quantum_canary_unbounded_relative_persist_stream@@QAA@PAVc_persist_stream@@K@Z");
//};

//merged_833DA8C0
//{
//    mangled_ppc("merged_833DA8C0");
//};

//public: virtual c_quantum_canary_unbounded_relative_persist_stream::~c_quantum_canary_unbounded_relative_persist_stream(void)
//{
//    mangled_ppc("??1c_quantum_canary_unbounded_relative_persist_stream@@UAA@XZ");
//};

//protected: virtual bool c_quantum_canary_unbounded_relative_persist_stream::validate_range(unsigned long, long)
//{
//    mangled_ppc("?validate_range@c_quantum_canary_unbounded_relative_persist_stream@@MAA_NKJ@Z");
//};

//public: virtual bool c_quantum_canary_unbounded_relative_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_quantum_canary_unbounded_relative_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_quantum_canary_unbounded_relative_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_quantum_canary_unbounded_relative_persist_stream@@UAA_NK@Z");
//};

//private: void c_quantum_canary_unbounded_relative_persist_stream::synchronize_position(void)
//{
//    mangled_ppc("?synchronize_position@c_quantum_canary_unbounded_relative_persist_stream@@AAAXXZ");
//};

//public: c_memory_persist_stream::c_memory_persist_stream(void *, unsigned long)
//{
//    mangled_ppc("??0c_memory_persist_stream@@QAA@PAXK@Z");
//};

//merged_833DABB0
//{
//    mangled_ppc("merged_833DABB0");
//};

//public: c_memory_persist_stream::c_memory_persist_stream(class c_basic_buffer<void>)
//{
//    mangled_ppc("??0c_memory_persist_stream@@QAA@V?$c_basic_buffer@X@@@Z");
//};

//public: virtual bool c_memory_persist_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_memory_persist_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_memory_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_memory_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_memory_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_memory_persist_stream@@UAA_NXZ");
//};

//public: virtual bool c_memory_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_memory_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_memory_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_memory_persist_stream@@UAA_NK@Z");
//};

//public: virtual bool c_memory_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_memory_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_memory_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_memory_persist_stream@@UAA_NPAK@Z");
//};

//public: unsigned long c_memory_persist_stream::get_position(void) const
//{
//    mangled_ppc("?get_position@c_memory_persist_stream@@QBAKXZ");
//};

//public: c_write_verify_persist_stream::c_write_verify_persist_stream(class c_basic_buffer<void const>)
//{
//    mangled_ppc("??0c_write_verify_persist_stream@@QAA@V?$c_basic_buffer@$$CBX@@@Z");
//};

//merged_833DB4B0
//{
//    mangled_ppc("merged_833DB4B0");
//};

//public: virtual c_write_verify_persist_stream::~c_write_verify_persist_stream(void)
//{
//    mangled_ppc("??1c_write_verify_persist_stream@@UAA@XZ");
//};

//public: virtual bool c_write_verify_persist_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_write_verify_persist_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_write_verify_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_write_verify_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_write_verify_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_write_verify_persist_stream@@UAA_NXZ");
//};

//public: virtual bool c_write_verify_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_write_verify_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_write_verify_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_write_verify_persist_stream@@UAA_NK@Z");
//};

//public: virtual bool c_write_verify_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_write_verify_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_write_verify_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_write_verify_persist_stream@@UAA_NPAK@Z");
//};

//public: c_positional_stream_base::c_positional_stream_base(void)
//{
//    mangled_ppc("??0c_positional_stream_base@@QAA@XZ");
//};

//merged_833DBC20
//{
//    mangled_ppc("merged_833DBC20");
//};

//public: virtual c_positional_stream_base::~c_positional_stream_base(void)
//{
//    mangled_ppc("??1c_positional_stream_base@@UAA@XZ");
//};

//public: c_positional_stream_base::c_positional_stream_base(unsigned long)
//{
//    mangled_ppc("??0c_positional_stream_base@@QAA@K@Z");
//};

//public: virtual bool c_positional_stream_base::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_positional_stream_base@@UAA_NPAXK@Z");
//};

//public: virtual bool c_positional_stream_base::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_positional_stream_base@@UAA_NPBXK@Z");
//};

//public: virtual bool c_positional_stream_base::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_positional_stream_base@@UAA_NXZ");
//};

//public: virtual bool c_positional_stream_base::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_positional_stream_base@@UAA_NJ@Z");
//};

//public: virtual bool c_positional_stream_base::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_positional_stream_base@@UAA_NK@Z");
//};

//public: virtual bool c_positional_stream_base::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_positional_stream_base@@UAA_NPAK@Z");
//};

//public: c_read_only_memory_stream::c_read_only_memory_stream(class c_basic_buffer<void const>)
//{
//    mangled_ppc("??0c_read_only_memory_stream@@QAA@V?$c_basic_buffer@$$CBX@@@Z");
//};

//merged_833DBFB0
//{
//    mangled_ppc("merged_833DBFB0");
//};

//public: virtual c_read_only_memory_stream::~c_read_only_memory_stream(void)
//{
//    mangled_ppc("??1c_read_only_memory_stream@@UAA@XZ");
//};

//public: virtual bool c_read_only_memory_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_read_only_memory_stream@@UAA_NPAK@Z");
//};

//private: virtual bool c_read_only_memory_stream::read_from_position(class c_basic_buffer<void>, unsigned long)
//{
//    mangled_ppc("?read_from_position@c_read_only_memory_stream@@EAA_NV?$c_basic_buffer@X@@K@Z");
//};

//private: virtual bool c_read_only_memory_stream::write_to_position(class c_basic_buffer<void const>, unsigned long)
//{
//    mangled_ppc("?write_to_position@c_read_only_memory_stream@@EAA_NV?$c_basic_buffer@$$CBX@@K@Z");
//};

//private: virtual bool c_read_only_memory_stream::write_extend_to_position(unsigned long)
//{
//    mangled_ppc("?write_extend_to_position@c_read_only_memory_stream@@EAA_NK@Z");
//};

//public: c_dynamic_memory_persist_stream::c_dynamic_memory_persist_stream(struct array_template<unsigned char> *, bool)
//{
//    mangled_ppc("??0c_dynamic_memory_persist_stream@@QAA@PAU?$array_template@E@@_N@Z");
//};

//merged_833DC2C0
//{
//    mangled_ppc("merged_833DC2C0");
//};

//public: virtual c_dynamic_memory_persist_stream::~c_dynamic_memory_persist_stream(void)
//{
//    mangled_ppc("??1c_dynamic_memory_persist_stream@@UAA@XZ");
//};

//public: struct array_template<unsigned char> const & c_dynamic_memory_persist_stream::get_buffer(void) const
//{
//    mangled_ppc("?get_buffer@c_dynamic_memory_persist_stream@@QBAABU?$array_template@E@@XZ");
//};

//public: virtual bool c_dynamic_memory_persist_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_dynamic_memory_persist_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_dynamic_memory_persist_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_dynamic_memory_persist_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_dynamic_memory_persist_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_dynamic_memory_persist_stream@@UAA_NXZ");
//};

//public: virtual bool c_dynamic_memory_persist_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_dynamic_memory_persist_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_dynamic_memory_persist_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_dynamic_memory_persist_stream@@UAA_NK@Z");
//};

//public: virtual bool c_dynamic_memory_persist_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_dynamic_memory_persist_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_dynamic_memory_persist_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_dynamic_memory_persist_stream@@UAA_NPAK@Z");
//};

//private: bool c_dynamic_memory_persist_stream::ensure_buffer_size(unsigned long)
//{
//    mangled_ppc("?ensure_buffer_size@c_dynamic_memory_persist_stream@@AAA_NK@Z");
//};

//public: c_simple_array_persist_stream::c_simple_array_persist_stream(void)
//{
//    mangled_ppc("??0c_simple_array_persist_stream@@QAA@XZ");
//};

//merged_833DCB28
//{
//    mangled_ppc("merged_833DCB28");
//};

//public: virtual c_simple_array_persist_stream::~c_simple_array_persist_stream(void)
//{
//    mangled_ppc("??1c_simple_array_persist_stream@@UAA@XZ");
//};

