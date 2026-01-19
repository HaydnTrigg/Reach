/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_buffered_read_stream::c_buffered_read_stream(class c_persist_stream *, unsigned __int64*);
// merged_833DD168;
// protected: c_buffered_read_stream::c_buffered_read_stream(enum e_dont_initialize_yet);
// protected: void c_buffered_read_stream::initialize(class c_persist_stream *, unsigned __int64*);
// public: virtual c_buffered_read_stream::~c_buffered_read_stream(void);
// public: float c_buffered_read_stream::get_blocking_time(void) const;
// public: virtual bool c_buffered_read_stream::read(void *, unsigned long);
// public: virtual bool c_buffered_read_stream::write(void const *, unsigned long);
// public: virtual bool c_buffered_read_stream::write_extend_to_position(void);
// public: virtual bool c_buffered_read_stream::seek_relative(long);
// public: virtual bool c_buffered_read_stream::seek_absolute(unsigned long);
// public: virtual bool c_buffered_read_stream::get_absolute_position(unsigned long *);
// public: virtual bool c_buffered_read_stream::get_total_size(unsigned long *);
// public: bool c_buffered_file_stream::is_open(void) const;
// public: struct s_file_reference const * c_buffered_file_stream::get_file_reference_const(void) const;
// private: bool c_buffered_read_stream::refill_buffer_from_stream(void);
// private: void c_buffered_read_stream::flush_buffer(void);
// private: bool c_buffered_read_stream::update_buffer_position(long);
// private: long c_buffered_read_stream::consume_buffer(void *, long);
// private: long c_buffered_read_stream::buffer_bytes_left(void) const;
// private: unsigned long c_buffered_read_stream::current_buffer_stream_position(void) const;
// public: c_buffered_file_stream::c_buffered_file_stream(struct s_file_reference const *, unsigned long, unsigned __int64*);
// merged_833DDE30;
// public: unsigned char * s_static_array<unsigned char, 16384>::get_elements(void);
// public: unsigned int s_static_array<unsigned char, 16384>::get_total_element_size(void) const;
// public: unsigned char & s_static_array<unsigned char, 16384>::operator[]<unsigned long>(unsigned long);
// public: static bool s_static_array<unsigned char, 16384>::valid<unsigned long>(unsigned long);

//public: c_buffered_read_stream::c_buffered_read_stream(class c_persist_stream *, unsigned __int64*)
//{
//    mangled_ppc("??0c_buffered_read_stream@@QAA@PAVc_persist_stream@@PA_K@Z");
//};

//merged_833DD168
//{
//    mangled_ppc("merged_833DD168");
//};

//protected: c_buffered_read_stream::c_buffered_read_stream(enum e_dont_initialize_yet)
//{
//    mangled_ppc("??0c_buffered_read_stream@@IAA@W4e_dont_initialize_yet@@@Z");
//};

//protected: void c_buffered_read_stream::initialize(class c_persist_stream *, unsigned __int64*)
//{
//    mangled_ppc("?initialize@c_buffered_read_stream@@IAAXPAVc_persist_stream@@PA_K@Z");
//};

//public: virtual c_buffered_read_stream::~c_buffered_read_stream(void)
//{
//    mangled_ppc("??1c_buffered_read_stream@@UAA@XZ");
//};

//public: float c_buffered_read_stream::get_blocking_time(void) const
//{
//    mangled_ppc("?get_blocking_time@c_buffered_read_stream@@QBAMXZ");
//};

//public: virtual bool c_buffered_read_stream::read(void *, unsigned long)
//{
//    mangled_ppc("?read@c_buffered_read_stream@@UAA_NPAXK@Z");
//};

//public: virtual bool c_buffered_read_stream::write(void const *, unsigned long)
//{
//    mangled_ppc("?write@c_buffered_read_stream@@UAA_NPBXK@Z");
//};

//public: virtual bool c_buffered_read_stream::write_extend_to_position(void)
//{
//    mangled_ppc("?write_extend_to_position@c_buffered_read_stream@@UAA_NXZ");
//};

//public: virtual bool c_buffered_read_stream::seek_relative(long)
//{
//    mangled_ppc("?seek_relative@c_buffered_read_stream@@UAA_NJ@Z");
//};

//public: virtual bool c_buffered_read_stream::seek_absolute(unsigned long)
//{
//    mangled_ppc("?seek_absolute@c_buffered_read_stream@@UAA_NK@Z");
//};

//public: virtual bool c_buffered_read_stream::get_absolute_position(unsigned long *)
//{
//    mangled_ppc("?get_absolute_position@c_buffered_read_stream@@UAA_NPAK@Z");
//};

//public: virtual bool c_buffered_read_stream::get_total_size(unsigned long *)
//{
//    mangled_ppc("?get_total_size@c_buffered_read_stream@@UAA_NPAK@Z");
//};

//public: bool c_buffered_file_stream::is_open(void) const
//{
//    mangled_ppc("?is_open@c_buffered_file_stream@@QBA_NXZ");
//};

//public: struct s_file_reference const * c_buffered_file_stream::get_file_reference_const(void) const
//{
//    mangled_ppc("?get_file_reference_const@c_buffered_file_stream@@QBAPBUs_file_reference@@XZ");
//};

//private: bool c_buffered_read_stream::refill_buffer_from_stream(void)
//{
//    mangled_ppc("?refill_buffer_from_stream@c_buffered_read_stream@@AAA_NXZ");
//};

//private: void c_buffered_read_stream::flush_buffer(void)
//{
//    mangled_ppc("?flush_buffer@c_buffered_read_stream@@AAAXXZ");
//};

//private: bool c_buffered_read_stream::update_buffer_position(long)
//{
//    mangled_ppc("?update_buffer_position@c_buffered_read_stream@@AAA_NJ@Z");
//};

//private: long c_buffered_read_stream::consume_buffer(void *, long)
//{
//    mangled_ppc("?consume_buffer@c_buffered_read_stream@@AAAJPAXJ@Z");
//};

//private: long c_buffered_read_stream::buffer_bytes_left(void) const
//{
//    mangled_ppc("?buffer_bytes_left@c_buffered_read_stream@@ABAJXZ");
//};

//private: unsigned long c_buffered_read_stream::current_buffer_stream_position(void) const
//{
//    mangled_ppc("?current_buffer_stream_position@c_buffered_read_stream@@ABAKXZ");
//};

//public: c_buffered_file_stream::c_buffered_file_stream(struct s_file_reference const *, unsigned long, unsigned __int64*)
//{
//    mangled_ppc("??0c_buffered_file_stream@@QAA@PBUs_file_reference@@KPA_K@Z");
//};

//merged_833DDE30
//{
//    mangled_ppc("merged_833DDE30");
//};

//public: unsigned char * s_static_array<unsigned char, 16384>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@E$0EAAA@@@QAAPAEXZ");
//};

//public: unsigned int s_static_array<unsigned char, 16384>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@E$0EAAA@@@QBAIXZ");
//};

//public: unsigned char & s_static_array<unsigned char, 16384>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@E$0EAAA@@@QAAAAEK@Z");
//};

//public: static bool s_static_array<unsigned char, 16384>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@E$0EAAA@@@SA_NK@Z");
//};

