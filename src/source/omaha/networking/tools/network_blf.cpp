/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void s_blf_header::setup(long, long, long, long);
// public: s_blf_chunk_start_of_file::s_blf_chunk_start_of_file(void);
// public: void s_blf_chunk_start_of_file::initialize(void);
// public: void s_blf_chunk_start_of_file::initialize_BE(void);
// public: s_blf_chunk_end_of_file::s_blf_chunk_end_of_file(void);
// public: void s_blf_chunk_end_of_file::initialize(void);
// public: s_blf_chunk_end_of_file_with_crc::s_blf_chunk_end_of_file_with_crc(void);
// public: void s_blf_chunk_end_of_file_with_crc::initialize(void);
// public: s_blf_chunk_end_of_file_with_sha1::s_blf_chunk_end_of_file_with_sha1(void);
// public: void s_blf_chunk_end_of_file_with_sha1::initialize(void);
// public: s_blf_chunk_end_of_file_with_rsa::s_blf_chunk_end_of_file_with_rsa(void);
// public: void s_blf_chunk_end_of_file_with_rsa::initialize(void);
// public: s_blf_chunk_parent::s_blf_chunk_parent(void);
// public: void s_blf_chunk_parent::initialize(void);
// public: void s_blf_chunk_compressed_data::initialize(void);
// public: s_blf_chunk_compressed_data::s_blf_chunk_compressed_data(void);
// public: void s_blf_chunk_author::initialize(void);
// public: s_blf_chunk_author::s_blf_chunk_author(void);
// public: void s_blf_chunk_content_header::initialize(void);
// public: s_blf_chunk_content_header::s_blf_chunk_content_header(void);
// bool network_blf_verify_start_of_file(char const *, long, bool *, long *);
// bool network_blf_read_for_known_chunk(char const *, long, bool, long, short, long *, char const **, long *, short *, bool *);
// bool network_blf_find_chunk(char const *, long, bool, long, short, long *, char const **, long *, short *, bool *);
// bool network_blf_verify_end_of_file(char const *, long, bool, char const *, enum e_blf_file_authentication_type);
// public: static char const * c_network_blf_buffer_reader::find_chunk(char const *, long, long, short, enum e_blf_file_authentication_type, long *);
// public: c_network_blf_writer::c_network_blf_writer(unsigned char *, long);
// public: void c_network_blf_writer::start(void);
// public: long c_network_blf_writer::finish(void);
// public: c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: enum e_blf_file_authentication_type c_enum_no_init<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_blf_file_authentication_type(void) const;
// public: bool c_enum_no_init<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_blf_file_authentication_type) const;
// public: c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(enum e_blf_file_compression_type);
// private: struct s_blf_chunk_start_of_file * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_start_of_file>(void);
// private: struct s_blf_chunk_end_of_file * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_end_of_file>(void);

//public: void s_blf_header::setup(long, long, long, long)
//{
//    mangled_ppc("?setup@s_blf_header@@QAAXJJJJ@Z");
//};

//public: s_blf_chunk_start_of_file::s_blf_chunk_start_of_file(void)
//{
//    mangled_ppc("??0s_blf_chunk_start_of_file@@QAA@XZ");
//};

//public: void s_blf_chunk_start_of_file::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_start_of_file@@QAAXXZ");
//};

//public: void s_blf_chunk_start_of_file::initialize_BE(void)
//{
//    mangled_ppc("?initialize_BE@s_blf_chunk_start_of_file@@QAAXXZ");
//};

//public: s_blf_chunk_end_of_file::s_blf_chunk_end_of_file(void)
//{
//    mangled_ppc("??0s_blf_chunk_end_of_file@@QAA@XZ");
//};

//public: void s_blf_chunk_end_of_file::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_end_of_file@@QAAXXZ");
//};

//public: s_blf_chunk_end_of_file_with_crc::s_blf_chunk_end_of_file_with_crc(void)
//{
//    mangled_ppc("??0s_blf_chunk_end_of_file_with_crc@@QAA@XZ");
//};

//public: void s_blf_chunk_end_of_file_with_crc::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_end_of_file_with_crc@@QAAXXZ");
//};

//public: s_blf_chunk_end_of_file_with_sha1::s_blf_chunk_end_of_file_with_sha1(void)
//{
//    mangled_ppc("??0s_blf_chunk_end_of_file_with_sha1@@QAA@XZ");
//};

//public: void s_blf_chunk_end_of_file_with_sha1::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_end_of_file_with_sha1@@QAAXXZ");
//};

//public: s_blf_chunk_end_of_file_with_rsa::s_blf_chunk_end_of_file_with_rsa(void)
//{
//    mangled_ppc("??0s_blf_chunk_end_of_file_with_rsa@@QAA@XZ");
//};

//public: void s_blf_chunk_end_of_file_with_rsa::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_end_of_file_with_rsa@@QAAXXZ");
//};

//public: s_blf_chunk_parent::s_blf_chunk_parent(void)
//{
//    mangled_ppc("??0s_blf_chunk_parent@@QAA@XZ");
//};

//public: void s_blf_chunk_parent::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_parent@@QAAXXZ");
//};

//public: void s_blf_chunk_compressed_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_compressed_data@@QAAXXZ");
//};

//public: s_blf_chunk_compressed_data::s_blf_chunk_compressed_data(void)
//{
//    mangled_ppc("??0s_blf_chunk_compressed_data@@QAA@XZ");
//};

//public: void s_blf_chunk_author::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_author@@QAAXXZ");
//};

//public: s_blf_chunk_author::s_blf_chunk_author(void)
//{
//    mangled_ppc("??0s_blf_chunk_author@@QAA@XZ");
//};

//public: void s_blf_chunk_content_header::initialize(void)
//{
//    mangled_ppc("?initialize@s_blf_chunk_content_header@@QAAXXZ");
//};

//public: s_blf_chunk_content_header::s_blf_chunk_content_header(void)
//{
//    mangled_ppc("??0s_blf_chunk_content_header@@QAA@XZ");
//};

//bool network_blf_verify_start_of_file(char const *, long, bool *, long *)
//{
//    mangled_ppc("?network_blf_verify_start_of_file@@YA_NPBDJPA_NPAJ@Z");
//};

//bool network_blf_read_for_known_chunk(char const *, long, bool, long, short, long *, char const **, long *, short *, bool *)
//{
//    mangled_ppc("?network_blf_read_for_known_chunk@@YA_NPBDJ_NJFPAJPAPBD2PAFPA_N@Z");
//};

//bool network_blf_find_chunk(char const *, long, bool, long, short, long *, char const **, long *, short *, bool *)
//{
//    mangled_ppc("?network_blf_find_chunk@@YA_NPBDJ_NJFPAJPAPBD2PAFPA_N@Z");
//};

//bool network_blf_verify_end_of_file(char const *, long, bool, char const *, enum e_blf_file_authentication_type)
//{
//    mangled_ppc("?network_blf_verify_end_of_file@@YA_NPBDJ_N0W4e_blf_file_authentication_type@@@Z");
//};

//public: static char const * c_network_blf_buffer_reader::find_chunk(char const *, long, long, short, enum e_blf_file_authentication_type, long *)
//{
//    mangled_ppc("?find_chunk@c_network_blf_buffer_reader@@SAPBDPBDJJFW4e_blf_file_authentication_type@@PAJ@Z");
//};

//public: c_network_blf_writer::c_network_blf_writer(unsigned char *, long)
//{
//    mangled_ppc("??0c_network_blf_writer@@QAA@PAEJ@Z");
//};

//public: void c_network_blf_writer::start(void)
//{
//    mangled_ppc("?start@c_network_blf_writer@@QAAXXZ");
//};

//public: long c_network_blf_writer::finish(void)
//{
//    mangled_ppc("?finish@c_network_blf_writer@@QAAJXZ");
//};

//public: c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_blf_file_authentication_type@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: enum e_blf_file_authentication_type c_enum_no_init<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_blf_file_authentication_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_blf_file_authentication_type@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_blf_file_authentication_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_blf_file_authentication_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_blf_file_authentication_type@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_blf_file_authentication_type@@@Z");
//};

//public: c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_blf_file_compression_type@@E$0A@$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_compression_type, unsigned char, 0, 1, struct s_default_enum_string_resolver>(enum e_blf_file_compression_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_blf_file_compression_type@@E$0A@$00Us_default_enum_string_resolver@@@@QAA@W4e_blf_file_compression_type@@@Z");
//};

//private: struct s_blf_chunk_start_of_file * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_start_of_file>(void)
//{
//    mangled_ppc("??$add_chunk_internal@Us_blf_chunk_start_of_file@@@c_network_blf_writer@@AAAPAUs_blf_chunk_start_of_file@@XZ");
//};

//private: struct s_blf_chunk_end_of_file * c_network_blf_writer::add_chunk_internal<struct s_blf_chunk_end_of_file>(void)
//{
//    mangled_ppc("??$add_chunk_internal@Us_blf_chunk_end_of_file@@@c_network_blf_writer@@AAAPAUs_blf_chunk_end_of_file@@XZ");
//};

