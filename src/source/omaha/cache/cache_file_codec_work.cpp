/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct _OVERLAPPED, 2>::k_element_count; // "?k_element_count@?$s_static_array@U_OVERLAPPED@@$01@@2JB"
// public: static long const s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_simple_read_file_ex_overlapped_result@@$01@@2JB"
// long volatile `public: virtual bool __cdecl c_cache_file_async_task_read_stream::read(class c_basic_buffer<void>, unsigned long, unsigned long *, unsigned long)'::`33'::x_event_category_index; // "?x_event_category_index@?CB@??read@c_cache_file_async_task_read_stream@@UAA_NV?$c_basic_buffer@X@@KPAKK@Z@4JC"
// long volatile `public: virtual bool __cdecl c_cache_file_async_task_read_stream::read_finished(unsigned long, unsigned long *, bool *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??read_finished@c_cache_file_async_task_read_stream@@UAA_NKPAKPA_N@Z@4JC"

// public: c_simple_io_pipe::c_simple_io_pipe(class c_basic_buffer<void>, unsigned long, unsigned long);
// public: s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>(void);
// public: c_simple_io_pipe::s_pipe_packet::s_pipe_packet(void);
// public: bool c_simple_io_pipe::input_available(void) const;
// public: class c_basic_buffer<void> c_simple_io_pipe::prepare_input(unsigned long *);
// public: void c_simple_io_pipe::commit_input(unsigned long, unsigned long);
// public: bool c_simple_io_pipe::output_available(void) const;
// public: class c_basic_buffer<void const> c_simple_io_pipe::acquire_output(unsigned long *);
// public: void c_simple_io_pipe::release_output(unsigned long, class c_basic_buffer<void const>);
// private: long c_simple_io_pipe::find_next_output_packet_index(void) const;
// public: unsigned char c_simple_io_pipe::number_of_reads_outstanding(void) const;
// private: void c_simple_io_pipe::advance_read_identifier(void);
// private: void c_simple_io_pipe::advance_write_identifier(void);
// public: c_cache_file_decompression_task::c_cache_file_decompression_task(unsigned long, class c_basic_buffer<void>, class c_cache_file_decompressor *, bool);
// private: void c_cache_file_decompression_task::initialize_hash_workspace(void);
// public: bool c_cache_file_decompression_task::finish_and_verify_hash(struct s_network_http_request_hash const *);
// public: bool c_cache_file_decompression_task::done(void) const;
// public: void c_cache_file_decompression_task::verify_done(class c_cache_file_read_stream *);
// public: unsigned char c_simple_io_pipe::total_input_buffers(void) const;
// public: bool c_simple_io_pipe::is_buffer_free(unsigned char) const;
// public: bool c_simple_io_pipe::is_buffer_read(unsigned char) const;
// public: void c_cache_file_decompression_task::abort(class c_cache_file_read_stream *);
// public: bool c_cache_file_decompression_task::success(void) const;
// public: void c_cache_file_decompression_task::run_decompression_loop(class c_cache_file_read_stream *);
// private: bool c_cache_file_decompression_task::failed(void) const;
// public: class c_cache_file_decompressor * c_cache_file_decompression_task::get_decompressor(void);
// public: unsigned long c_cache_file_decompression_task::get_total_bytes_processed(void) const;
// private: bool c_cache_file_decompression_task::can_run_more_io(void) const;
// private: void c_cache_file_decompression_task::try_to_read_another_buffer(class c_cache_file_read_stream *);
// private: bool c_cache_file_decompression_task::can_run_more_decompression(void) const;
// private: void c_cache_file_decompression_task::try_to_decompress_another_buffer(void);
// enum e_async_completion async_decompress_file_section_callback(void *);
// struct s_async_task_id async_decompress_file_section(long, struct s_file_handle, unsigned long, unsigned long, struct s_network_http_request_hash const *, class c_basic_buffer<void>, class c_cache_file_decompressor *, class c_basic_buffer<void>, bool *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_completion_flag *);
// public: c_cache_file_async_task_read_stream::c_cache_file_async_task_read_stream(struct s_file_handle, unsigned long, unsigned long);
// public: virtual bool c_cache_file_async_task_read_stream::read(class c_basic_buffer<void>, unsigned long, unsigned long *, unsigned long);
// public: virtual void c_cache_file_async_task_read_stream::sync(unsigned long);
// public: virtual bool c_cache_file_async_task_read_stream::read_finished(unsigned long, unsigned long *, bool *);
// private: unsigned long c_cache_file_async_task_read_stream::aligned_read_size(void) const;
// public: s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>(void);
// public: s_simple_read_file_ex_overlapped_result::s_simple_read_file_ex_overlapped_result(void);
// public: s_async_decompress_file_section_task::~s_async_decompress_file_section_task(void);
// public: c_cache_file_async_task_read_stream::~c_cache_file_async_task_read_stream(void);
// public: s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::~s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>(void);
// public: s_simple_read_file_ex_overlapped_result::~s_simple_read_file_ex_overlapped_result(void);
// public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::test(unsigned long) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::set(unsigned long, bool);
// public: unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: c_flags<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: struct c_simple_io_pipe::s_pipe_packet & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<long>(long);
// public: struct c_simple_io_pipe::s_pipe_packet & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<unsigned long>(unsigned long);
// public: struct c_simple_io_pipe::s_pipe_packet const & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<long>(long) const;
// int memcmp_type<struct s_network_http_request_hash const, struct s_network_http_request_hash>(struct s_network_http_request_hash const *, struct s_network_http_request_hash *);
// public: struct _OVERLAPPED & s_static_array<struct _OVERLAPPED, 2>::operator[]<unsigned long>(unsigned long);
// public: struct s_simple_read_file_ex_overlapped_result & s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::operator[]<unsigned long>(unsigned long);
// struct s_async_task_id async_task_add<struct s_async_decompress_file_section_task>(long, struct s_async_decompress_file_section_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *);
// public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(unsigned long);
// public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(unsigned long);
// public: static bool s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::valid<long>(long);
// public: static bool s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::valid<unsigned long>(unsigned long);
// public: static bool s_static_array<struct _OVERLAPPED, 2>::valid<unsigned long>(unsigned long);
// public: static bool s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::valid<unsigned long>(unsigned long);
// struct s_async_task_id async_task_add_ex<struct s_async_decompress_file_section_task>(long, struct s_async_decompress_file_section_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long);

//public: c_simple_io_pipe::c_simple_io_pipe(class c_basic_buffer<void>, unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_simple_io_pipe@@QAA@V?$c_basic_buffer@X@@KK@Z");
//};

//public: s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@QAA@XZ");
//};

//public: c_simple_io_pipe::s_pipe_packet::s_pipe_packet(void)
//{
//    mangled_ppc("??0s_pipe_packet@c_simple_io_pipe@@QAA@XZ");
//};

//public: bool c_simple_io_pipe::input_available(void) const
//{
//    mangled_ppc("?input_available@c_simple_io_pipe@@QBA_NXZ");
//};

//public: class c_basic_buffer<void> c_simple_io_pipe::prepare_input(unsigned long *)
//{
//    mangled_ppc("?prepare_input@c_simple_io_pipe@@QAA?AV?$c_basic_buffer@X@@PAK@Z");
//};

//public: void c_simple_io_pipe::commit_input(unsigned long, unsigned long)
//{
//    mangled_ppc("?commit_input@c_simple_io_pipe@@QAAXKK@Z");
//};

//public: bool c_simple_io_pipe::output_available(void) const
//{
//    mangled_ppc("?output_available@c_simple_io_pipe@@QBA_NXZ");
//};

//public: class c_basic_buffer<void const> c_simple_io_pipe::acquire_output(unsigned long *)
//{
//    mangled_ppc("?acquire_output@c_simple_io_pipe@@QAA?AV?$c_basic_buffer@$$CBX@@PAK@Z");
//};

//public: void c_simple_io_pipe::release_output(unsigned long, class c_basic_buffer<void const>)
//{
//    mangled_ppc("?release_output@c_simple_io_pipe@@QAAXKV?$c_basic_buffer@$$CBX@@@Z");
//};

//private: long c_simple_io_pipe::find_next_output_packet_index(void) const
//{
//    mangled_ppc("?find_next_output_packet_index@c_simple_io_pipe@@ABAJXZ");
//};

//public: unsigned char c_simple_io_pipe::number_of_reads_outstanding(void) const
//{
//    mangled_ppc("?number_of_reads_outstanding@c_simple_io_pipe@@QBAEXZ");
//};

//private: void c_simple_io_pipe::advance_read_identifier(void)
//{
//    mangled_ppc("?advance_read_identifier@c_simple_io_pipe@@AAAXXZ");
//};

//private: void c_simple_io_pipe::advance_write_identifier(void)
//{
//    mangled_ppc("?advance_write_identifier@c_simple_io_pipe@@AAAXXZ");
//};

//public: c_cache_file_decompression_task::c_cache_file_decompression_task(unsigned long, class c_basic_buffer<void>, class c_cache_file_decompressor *, bool)
//{
//    mangled_ppc("??0c_cache_file_decompression_task@@QAA@KV?$c_basic_buffer@X@@PAVc_cache_file_decompressor@@_N@Z");
//};

//private: void c_cache_file_decompression_task::initialize_hash_workspace(void)
//{
//    mangled_ppc("?initialize_hash_workspace@c_cache_file_decompression_task@@AAAXXZ");
//};

//public: bool c_cache_file_decompression_task::finish_and_verify_hash(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?finish_and_verify_hash@c_cache_file_decompression_task@@QAA_NPBUs_network_http_request_hash@@@Z");
//};

//public: bool c_cache_file_decompression_task::done(void) const
//{
//    mangled_ppc("?done@c_cache_file_decompression_task@@QBA_NXZ");
//};

//public: void c_cache_file_decompression_task::verify_done(class c_cache_file_read_stream *)
//{
//    mangled_ppc("?verify_done@c_cache_file_decompression_task@@QAAXPAVc_cache_file_read_stream@@@Z");
//};

//public: unsigned char c_simple_io_pipe::total_input_buffers(void) const
//{
//    mangled_ppc("?total_input_buffers@c_simple_io_pipe@@QBAEXZ");
//};

//public: bool c_simple_io_pipe::is_buffer_free(unsigned char) const
//{
//    mangled_ppc("?is_buffer_free@c_simple_io_pipe@@QBA_NE@Z");
//};

//public: bool c_simple_io_pipe::is_buffer_read(unsigned char) const
//{
//    mangled_ppc("?is_buffer_read@c_simple_io_pipe@@QBA_NE@Z");
//};

//public: void c_cache_file_decompression_task::abort(class c_cache_file_read_stream *)
//{
//    mangled_ppc("?abort@c_cache_file_decompression_task@@QAAXPAVc_cache_file_read_stream@@@Z");
//};

//public: bool c_cache_file_decompression_task::success(void) const
//{
//    mangled_ppc("?success@c_cache_file_decompression_task@@QBA_NXZ");
//};

//public: void c_cache_file_decompression_task::run_decompression_loop(class c_cache_file_read_stream *)
//{
//    mangled_ppc("?run_decompression_loop@c_cache_file_decompression_task@@QAAXPAVc_cache_file_read_stream@@@Z");
//};

//private: bool c_cache_file_decompression_task::failed(void) const
//{
//    mangled_ppc("?failed@c_cache_file_decompression_task@@ABA_NXZ");
//};

//public: class c_cache_file_decompressor * c_cache_file_decompression_task::get_decompressor(void)
//{
//    mangled_ppc("?get_decompressor@c_cache_file_decompression_task@@QAAPAVc_cache_file_decompressor@@XZ");
//};

//public: unsigned long c_cache_file_decompression_task::get_total_bytes_processed(void) const
//{
//    mangled_ppc("?get_total_bytes_processed@c_cache_file_decompression_task@@QBAKXZ");
//};

//private: bool c_cache_file_decompression_task::can_run_more_io(void) const
//{
//    mangled_ppc("?can_run_more_io@c_cache_file_decompression_task@@ABA_NXZ");
//};

//private: void c_cache_file_decompression_task::try_to_read_another_buffer(class c_cache_file_read_stream *)
//{
//    mangled_ppc("?try_to_read_another_buffer@c_cache_file_decompression_task@@AAAXPAVc_cache_file_read_stream@@@Z");
//};

//private: bool c_cache_file_decompression_task::can_run_more_decompression(void) const
//{
//    mangled_ppc("?can_run_more_decompression@c_cache_file_decompression_task@@ABA_NXZ");
//};

//private: void c_cache_file_decompression_task::try_to_decompress_another_buffer(void)
//{
//    mangled_ppc("?try_to_decompress_another_buffer@c_cache_file_decompression_task@@AAAXXZ");
//};

//enum e_async_completion async_decompress_file_section_callback(void *)
//{
//    mangled_ppc("?async_decompress_file_section_callback@@YA?AW4e_async_completion@@PAX@Z");
//};

//struct s_async_task_id async_decompress_file_section(long, struct s_file_handle, unsigned long, unsigned long, struct s_network_http_request_hash const *, class c_basic_buffer<void>, class c_cache_file_decompressor *, class c_basic_buffer<void>, bool *, class c_synchronized_int32*, class c_synchronized_int32*, class c_async_completion_flag *)
//{
//    mangled_ppc("?async_decompress_file_section@@YA?AUs_async_task_id@@JUs_file_handle@@KKPBUs_network_http_request_hash@@V?$c_basic_buffer@X@@PAVc_cache_file_decompressor@@2PA_NPAVc_synchronized_int32@@5PAVc_async_completion_flag@@@Z");
//};

//public: c_cache_file_async_task_read_stream::c_cache_file_async_task_read_stream(struct s_file_handle, unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_cache_file_async_task_read_stream@@QAA@Us_file_handle@@KK@Z");
//};

//public: virtual bool c_cache_file_async_task_read_stream::read(class c_basic_buffer<void>, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?read@c_cache_file_async_task_read_stream@@UAA_NV?$c_basic_buffer@X@@KPAKK@Z");
//};

//public: virtual void c_cache_file_async_task_read_stream::sync(unsigned long)
//{
//    mangled_ppc("?sync@c_cache_file_async_task_read_stream@@UAAXK@Z");
//};

//public: virtual bool c_cache_file_async_task_read_stream::read_finished(unsigned long, unsigned long *, bool *)
//{
//    mangled_ppc("?read_finished@c_cache_file_async_task_read_stream@@UAA_NKPAKPA_N@Z");
//};

//private: unsigned long c_cache_file_async_task_read_stream::aligned_read_size(void) const
//{
//    mangled_ppc("?aligned_read_size@c_cache_file_async_task_read_stream@@ABAKXZ");
//};

//public: s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_simple_read_file_ex_overlapped_result@@$01@@QAA@XZ");
//};

//public: s_simple_read_file_ex_overlapped_result::s_simple_read_file_ex_overlapped_result(void)
//{
//    mangled_ppc("??0s_simple_read_file_ex_overlapped_result@@QAA@XZ");
//};

//public: s_async_decompress_file_section_task::~s_async_decompress_file_section_task(void)
//{
//    mangled_ppc("??1s_async_decompress_file_section_task@@QAA@XZ");
//};

//public: c_cache_file_async_task_read_stream::~c_cache_file_async_task_read_stream(void)
//{
//    mangled_ppc("??1c_cache_file_async_task_read_stream@@QAA@XZ");
//};

//public: s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::~s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_simple_read_file_ex_overlapped_result@@$01@@QAA@XZ");
//};

//public: s_simple_read_file_ex_overlapped_result::~s_simple_read_file_ex_overlapped_result(void)
//{
//    mangled_ppc("??1s_simple_read_file_ex_overlapped_result@@QAA@XZ");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::test(unsigned long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QBA_NK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::set(unsigned long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QAAXK_N@Z");
//};

//public: unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: c_flags<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@KE$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct c_simple_io_pipe::s_pipe_packet & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@QAAAAUs_pipe_packet@c_simple_io_pipe@@J@Z");
//};

//public: struct c_simple_io_pipe::s_pipe_packet & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@QAAAAUs_pipe_packet@c_simple_io_pipe@@K@Z");
//};

//public: struct c_simple_io_pipe::s_pipe_packet const & s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@QBAABUs_pipe_packet@c_simple_io_pipe@@J@Z");
//};

//int memcmp_type<struct s_network_http_request_hash const, struct s_network_http_request_hash>(struct s_network_http_request_hash const *, struct s_network_http_request_hash *)
//{
//    mangled_ppc("??$memcmp_type@$$CBUs_network_http_request_hash@@U1@@@YAHPBUs_network_http_request_hash@@PAU0@@Z");
//};

//public: struct _OVERLAPPED & s_static_array<struct _OVERLAPPED, 2>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@U_OVERLAPPED@@$01@@QAAAAU_OVERLAPPED@@K@Z");
//};

//public: struct s_simple_read_file_ex_overlapped_result & s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Us_simple_read_file_ex_overlapped_result@@$01@@QAAAAUs_simple_read_file_ex_overlapped_result@@K@Z");
//};

//struct s_async_task_id async_task_add<struct s_async_decompress_file_section_task>(long, struct s_async_decompress_file_section_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *)
//{
//    mangled_ppc("??$async_task_add@Us_async_decompress_file_section_task@@@@YA?AUs_async_task_id@@JPBUs_async_decompress_file_section_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@@Z");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(unsigned long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@SA_NK@Z");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(unsigned long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@CAEK@Z");
//};

//public: static bool s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_simple_io_pipe::s_pipe_packet, 2>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Us_pipe_packet@c_simple_io_pipe@@$01@@SA_NK@Z");
//};

//public: static bool s_static_array<struct _OVERLAPPED, 2>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@U_OVERLAPPED@@$01@@SA_NK@Z");
//};

//public: static bool s_static_array<struct s_simple_read_file_ex_overlapped_result, 2>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Us_simple_read_file_ex_overlapped_result@@$01@@SA_NK@Z");
//};

//struct s_async_task_id async_task_add_ex<struct s_async_decompress_file_section_task>(long, struct s_async_decompress_file_section_task const *, long, enum e_async_completion (*)(void *), class c_async_completion_flag *, enum e_async_block_if_full)
//{
//    mangled_ppc("??$async_task_add_ex@Us_async_decompress_file_section_task@@@@YA?AUs_async_task_id@@JPBUs_async_decompress_file_section_task@@JP6A?AW4e_async_completion@@PAX@ZPAVc_async_completion_flag@@W4e_async_block_if_full@@@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@KE$01Us_default_enum_string_resolver@@@@CAEK@Z");
//};

