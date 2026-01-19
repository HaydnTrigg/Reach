/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_asynchronous_io_marker, 2>::k_element_count; // "?k_element_count@?$s_static_array@Vc_asynchronous_io_marker@@$01@@2JB"
// public: static long const c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@2JB"
// unsigned long const k_recommended_decompression_buffer_size; // "?k_recommended_decompression_buffer_size@@3KB"
// public: static long const s_static_array<union _FILE_SEGMENT_ELEMENT, 33>::k_element_count; // "?k_element_count@?$s_static_array@T_FILE_SEGMENT_ELEMENT@@$0CB@@@2JB"

// public: void c_asynchronous_io_marker::set_io_status(enum e_asynchronous_io_status);
// public: void c_asynchronous_io_marker::initialize(struct s_async_io_file const *, unsigned long, unsigned long);
// public: enum e_asynchronous_io_status c_asynchronous_io_marker::get_io_status(void) const;
// public: unsigned long c_asynchronous_io_marker::get_unaligned_io_size(void) const;
// public: bool c_asynchronous_io_marker::request_completed(void) const;
// public: c_asynchronous_io_arena::c_asynchronous_io_arena(void);
// public: c_asynchronous_io_arena::~c_asynchronous_io_arena(void);
// public: c_asynchronous_io_arena::c_idle_io_handler::~c_idle_io_handler(void);
// public: c_asynchronous_io_marker::~c_asynchronous_io_marker(void);
// private: bool c_asynchronous_io_arena::create_io_completion_port(void);
// public: bool c_asynchronous_io_arena::open_file(long, struct s_file_reference const *, char const *);
// public: bool c_asynchronous_io_arena::valid_file(long) const;
// public: void c_asynchronous_io_arena::close_file(long);
// public: long c_asynchronous_io_arena::get_file_index(struct s_indirect_file *) const;
// public: struct s_indirect_file * c_asynchronous_io_arena::get_indirect_file_handle(long) const;
// public: bool c_asynchronous_io_arena::open_file_indirect(struct s_file_reference const *, char const *, struct s_indirect_file **);
// public: void c_asynchronous_io_arena::invalidate_indirect_file_handle(struct s_indirect_file **) const;
// public: bool c_asynchronous_io_arena::is_invalid_indirect_file_handle(struct s_indirect_file *) const;
// public: void c_asynchronous_io_arena::close_file(struct s_indirect_file *);
// public: unsigned long c_asynchronous_io_arena::get_file_sort_key_base(struct s_indirect_file *) const;
// private: void * c_asynchronous_io_arena::get_io_completion_port(void) const;
// private: void * c_asynchronous_io_arena::get_file_handle(long) const;
// public: void c_asynchronous_io_arena::cancel_io(void);
// public: void c_asynchronous_io_arena::fatal_io_error(char const *);
// public: void c_asynchronous_io_arena::update_with_quantum_entanglement(bool);
// public: bool c_asynchronous_io_arena::submit_async_gather_read(long, unsigned long, unsigned long, class c_wrapped_array<union _FILE_SEGMENT_ELEMENT>, class c_asynchronous_io_marker *, unsigned long);
// public: bool c_asynchronous_io_arena::submit_async_read(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *);
// private: void c_asynchronous_io_arena::handle_io_submit_success(long, class c_asynchronous_io_marker const *);
// public: bool c_asynchronous_io_arena::submit_indirect_async_read(class c_indirect_cache_file_location_atlas *, struct s_indirect_cache_file_read_request const *, class c_asynchronous_io_marker *);
// public: bool c_asynchronous_io_arena::submit_location_relative_async_read(struct s_indirect_cache_file_location const *, struct s_indirect_cache_file_read_request const *, class c_asynchronous_io_marker *);
// public: c_asynchronous_io_arena::c_idle_io_handler::c_idle_io_handler(void);
// public: c_asynchronous_io_marker::c_asynchronous_io_marker(void);
// public: void c_asynchronous_io_arena::c_idle_io_handler::on_io_submit(long, unsigned long);
// public: void c_asynchronous_io_arena::c_idle_io_handler::handle_file_close(long);
// public: void c_asynchronous_io_arena::c_idle_io_handler::on_idle(class c_asynchronous_io_arena *, bool);
// unsigned long get_usable_size(struct s_indirect_cache_file_read_request const &, struct s_indirect_cache_file_location const &, class c_file_scatter_gatherer const &);
// public: unsigned long c_file_scatter_gatherer::get_bytes_to_read(void) const;
// public: unsigned long c_file_scatter_gatherer::get_starting_offset(void) const;
// void cache_file_read_build_single_sub_request(struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, struct s_indirect_cache_file_read_request *);
// bool cache_file_read_single_request_initiate(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, class c_asynchronous_io_marker *);
// bool cache_file_read_single_request_initiate(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_location const &, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, class c_asynchronous_io_marker *);
// enum e_indirect_cache_file_read_result cache_file_read_single_request_wait_for_completion(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, class c_asynchronous_io_marker *, unsigned long *);
// enum e_indirect_cache_file_read_result cache_file_read_single_request_synchronous(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, unsigned long *);
// unsigned long get_sub_request_count(unsigned long, unsigned long);
// public: c_synchronous_bulk_reader_stream::c_synchronous_bulk_reader_stream(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long *, class c_stop_watch_template<class c_default_stop_watch_traits> *);
// public: c_cache_file_read_stream::c_cache_file_read_stream(void);
// public: s_static_array<class c_asynchronous_io_marker, 2>::s_static_array<class c_asynchronous_io_marker, 2>(void);
// public: c_synchronous_bulk_reader_stream::c_synchronous_bulk_reader_stream(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_location const *, struct s_indirect_cache_file_read_request const &, unsigned long *, class c_stop_watch_template<class c_default_stop_watch_traits> *);
// public: virtual bool c_synchronous_bulk_reader_stream::read(class c_basic_buffer<void>, unsigned long, unsigned long *, unsigned long);
// public: virtual bool c_synchronous_bulk_reader_stream::read_finished(unsigned long, unsigned long *, bool *);
// public: virtual void c_synchronous_bulk_reader_stream::sync(unsigned long);
// enum e_indirect_cache_file_read_result cache_file_read_decompression_request_synchronous(class c_cache_file_read_stream *, class c_indirect_cache_file_decompressor_service *, struct s_indirect_cache_file_read_request const *, class c_basic_buffer<void>);
// void cache_file_read_multiple_requests_synchronous(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_decompressor_service *, class c_indirect_cache_file_bulk_read_iterator *, class c_basic_buffer<void>);
// public: c_synchronous_bulk_reader_stream::~c_synchronous_bulk_reader_stream(void);
// public: s_static_array<class c_asynchronous_io_marker, 2>::~s_static_array<class c_asynchronous_io_marker, 2>(void);
// char const * indirect_cache_file_result_describe(enum e_indirect_cache_file_read_result);
// void cache_file_read_single_request_scatter(void);
// public: static long s_static_array<struct s_async_io_file, 32>::get_count(void);
// public: long c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>::count(void) const;
// public: union _FILE_SEGMENT_ELEMENT & c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::operator[](long);
// public: union _FILE_SEGMENT_ELEMENT * c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::get_elements(void);
// public: union _FILE_SEGMENT_ELEMENT * c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>::begin(void);
// public: union _FILE_SEGMENT_ELEMENT * c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::begin(void);
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::valid_index(long) const;
// public: class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> * c_recursive_template_pattern<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> >::get_super_class(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::count(void) const;
// public: class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> const * c_recursive_template_pattern<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> >::get_super_class(void) const;
// public: void c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::set(long, bool);
// public: c_flags<long, unsigned long, 2, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 2, struct s_default_enum_string_resolver>(void);
// public: struct s_async_io_file & s_static_array<struct s_async_io_file, 32>::operator[]<long>(long);
// public: static bool s_static_array<struct s_async_io_file, 32>::valid<long>(long);
// public: struct s_async_io_file const & s_static_array<struct s_async_io_file, 32>::operator[]<long>(long) const;
// public: struct s_async_io_file & s_static_array<struct s_async_io_file, 32>::operator[]<unsigned long>(unsigned long);
// public: class c_asynchronous_io_marker & s_static_array<class c_asynchronous_io_marker, 2>::operator[]<unsigned long>(unsigned long);
// public: bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct s_async_io_file, 32>::valid<unsigned long>(unsigned long);
// public: static bool s_static_array<class c_asynchronous_io_marker, 2>::valid<unsigned long>(unsigned long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);

//public: void c_asynchronous_io_marker::set_io_status(enum e_asynchronous_io_status)
//{
//    mangled_ppc("?set_io_status@c_asynchronous_io_marker@@QAAXW4e_asynchronous_io_status@@@Z");
//};

//public: void c_asynchronous_io_marker::initialize(struct s_async_io_file const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?initialize@c_asynchronous_io_marker@@QAAXPBUs_async_io_file@@KK@Z");
//};

//public: enum e_asynchronous_io_status c_asynchronous_io_marker::get_io_status(void) const
//{
//    mangled_ppc("?get_io_status@c_asynchronous_io_marker@@QBA?AW4e_asynchronous_io_status@@XZ");
//};

//public: unsigned long c_asynchronous_io_marker::get_unaligned_io_size(void) const
//{
//    mangled_ppc("?get_unaligned_io_size@c_asynchronous_io_marker@@QBAKXZ");
//};

//public: bool c_asynchronous_io_marker::request_completed(void) const
//{
//    mangled_ppc("?request_completed@c_asynchronous_io_marker@@QBA_NXZ");
//};

//public: c_asynchronous_io_arena::c_asynchronous_io_arena(void)
//{
//    mangled_ppc("??0c_asynchronous_io_arena@@QAA@XZ");
//};

//public: c_asynchronous_io_arena::~c_asynchronous_io_arena(void)
//{
//    mangled_ppc("??1c_asynchronous_io_arena@@QAA@XZ");
//};

//public: c_asynchronous_io_arena::c_idle_io_handler::~c_idle_io_handler(void)
//{
//    mangled_ppc("??1c_idle_io_handler@c_asynchronous_io_arena@@QAA@XZ");
//};

//public: c_asynchronous_io_marker::~c_asynchronous_io_marker(void)
//{
//    mangled_ppc("??1c_asynchronous_io_marker@@QAA@XZ");
//};

//private: bool c_asynchronous_io_arena::create_io_completion_port(void)
//{
//    mangled_ppc("?create_io_completion_port@c_asynchronous_io_arena@@AAA_NXZ");
//};

//public: bool c_asynchronous_io_arena::open_file(long, struct s_file_reference const *, char const *)
//{
//    mangled_ppc("?open_file@c_asynchronous_io_arena@@QAA_NJPBUs_file_reference@@PBD@Z");
//};

//public: bool c_asynchronous_io_arena::valid_file(long) const
//{
//    mangled_ppc("?valid_file@c_asynchronous_io_arena@@QBA_NJ@Z");
//};

//public: void c_asynchronous_io_arena::close_file(long)
//{
//    mangled_ppc("?close_file@c_asynchronous_io_arena@@QAAXJ@Z");
//};

//public: long c_asynchronous_io_arena::get_file_index(struct s_indirect_file *) const
//{
//    mangled_ppc("?get_file_index@c_asynchronous_io_arena@@QBAJPAUs_indirect_file@@@Z");
//};

//public: struct s_indirect_file * c_asynchronous_io_arena::get_indirect_file_handle(long) const
//{
//    mangled_ppc("?get_indirect_file_handle@c_asynchronous_io_arena@@QBAPAUs_indirect_file@@J@Z");
//};

//public: bool c_asynchronous_io_arena::open_file_indirect(struct s_file_reference const *, char const *, struct s_indirect_file **)
//{
//    mangled_ppc("?open_file_indirect@c_asynchronous_io_arena@@QAA_NPBUs_file_reference@@PBDPAPAUs_indirect_file@@@Z");
//};

//public: void c_asynchronous_io_arena::invalidate_indirect_file_handle(struct s_indirect_file **) const
//{
//    mangled_ppc("?invalidate_indirect_file_handle@c_asynchronous_io_arena@@QBAXPAPAUs_indirect_file@@@Z");
//};

//public: bool c_asynchronous_io_arena::is_invalid_indirect_file_handle(struct s_indirect_file *) const
//{
//    mangled_ppc("?is_invalid_indirect_file_handle@c_asynchronous_io_arena@@QBA_NPAUs_indirect_file@@@Z");
//};

//public: void c_asynchronous_io_arena::close_file(struct s_indirect_file *)
//{
//    mangled_ppc("?close_file@c_asynchronous_io_arena@@QAAXPAUs_indirect_file@@@Z");
//};

//public: unsigned long c_asynchronous_io_arena::get_file_sort_key_base(struct s_indirect_file *) const
//{
//    mangled_ppc("?get_file_sort_key_base@c_asynchronous_io_arena@@QBAKPAUs_indirect_file@@@Z");
//};

//private: void * c_asynchronous_io_arena::get_io_completion_port(void) const
//{
//    mangled_ppc("?get_io_completion_port@c_asynchronous_io_arena@@ABAPAXXZ");
//};

//private: void * c_asynchronous_io_arena::get_file_handle(long) const
//{
//    mangled_ppc("?get_file_handle@c_asynchronous_io_arena@@ABAPAXJ@Z");
//};

//public: void c_asynchronous_io_arena::cancel_io(void)
//{
//    mangled_ppc("?cancel_io@c_asynchronous_io_arena@@QAAXXZ");
//};

//public: void c_asynchronous_io_arena::fatal_io_error(char const *)
//{
//    mangled_ppc("?fatal_io_error@c_asynchronous_io_arena@@QAAXPBD@Z");
//};

//public: void c_asynchronous_io_arena::update_with_quantum_entanglement(bool)
//{
//    mangled_ppc("?update_with_quantum_entanglement@c_asynchronous_io_arena@@QAAX_N@Z");
//};

//public: bool c_asynchronous_io_arena::submit_async_gather_read(long, unsigned long, unsigned long, class c_wrapped_array<union _FILE_SEGMENT_ELEMENT>, class c_asynchronous_io_marker *, unsigned long)
//{
//    mangled_ppc("?submit_async_gather_read@c_asynchronous_io_arena@@QAA_NJKKV?$c_wrapped_array@T_FILE_SEGMENT_ELEMENT@@@@PAVc_asynchronous_io_marker@@K@Z");
//};

//public: bool c_asynchronous_io_arena::submit_async_read(long, unsigned long, unsigned long, class c_basic_buffer<void>, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?submit_async_read@c_asynchronous_io_arena@@QAA_NJKKV?$c_basic_buffer@X@@PAVc_asynchronous_io_marker@@@Z");
//};

//private: void c_asynchronous_io_arena::handle_io_submit_success(long, class c_asynchronous_io_marker const *)
//{
//    mangled_ppc("?handle_io_submit_success@c_asynchronous_io_arena@@AAAXJPBVc_asynchronous_io_marker@@@Z");
//};

//public: bool c_asynchronous_io_arena::submit_indirect_async_read(class c_indirect_cache_file_location_atlas *, struct s_indirect_cache_file_read_request const *, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?submit_indirect_async_read@c_asynchronous_io_arena@@QAA_NPAVc_indirect_cache_file_location_atlas@@PBUs_indirect_cache_file_read_request@@PAVc_asynchronous_io_marker@@@Z");
//};

//public: bool c_asynchronous_io_arena::submit_location_relative_async_read(struct s_indirect_cache_file_location const *, struct s_indirect_cache_file_read_request const *, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?submit_location_relative_async_read@c_asynchronous_io_arena@@QAA_NPBUs_indirect_cache_file_location@@PBUs_indirect_cache_file_read_request@@PAVc_asynchronous_io_marker@@@Z");
//};

//public: c_asynchronous_io_arena::c_idle_io_handler::c_idle_io_handler(void)
//{
//    mangled_ppc("??0c_idle_io_handler@c_asynchronous_io_arena@@QAA@XZ");
//};

//public: c_asynchronous_io_marker::c_asynchronous_io_marker(void)
//{
//    mangled_ppc("??0c_asynchronous_io_marker@@QAA@XZ");
//};

//public: void c_asynchronous_io_arena::c_idle_io_handler::on_io_submit(long, unsigned long)
//{
//    mangled_ppc("?on_io_submit@c_idle_io_handler@c_asynchronous_io_arena@@QAAXJK@Z");
//};

//public: void c_asynchronous_io_arena::c_idle_io_handler::handle_file_close(long)
//{
//    mangled_ppc("?handle_file_close@c_idle_io_handler@c_asynchronous_io_arena@@QAAXJ@Z");
//};

//public: void c_asynchronous_io_arena::c_idle_io_handler::on_idle(class c_asynchronous_io_arena *, bool)
//{
//    mangled_ppc("?on_idle@c_idle_io_handler@c_asynchronous_io_arena@@QAAXPAV2@_N@Z");
//};

//unsigned long get_usable_size(struct s_indirect_cache_file_read_request const &, struct s_indirect_cache_file_location const &, class c_file_scatter_gatherer const &)
//{
//    mangled_ppc("?get_usable_size@@YAKABUs_indirect_cache_file_read_request@@ABUs_indirect_cache_file_location@@ABVc_file_scatter_gatherer@@@Z");
//};

//public: unsigned long c_file_scatter_gatherer::get_bytes_to_read(void) const
//{
//    mangled_ppc("?get_bytes_to_read@c_file_scatter_gatherer@@QBAKXZ");
//};

//public: unsigned long c_file_scatter_gatherer::get_starting_offset(void) const
//{
//    mangled_ppc("?get_starting_offset@c_file_scatter_gatherer@@QBAKXZ");
//};

//void cache_file_read_build_single_sub_request(struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, struct s_indirect_cache_file_read_request *)
//{
//    mangled_ppc("?cache_file_read_build_single_sub_request@@YAXABUs_indirect_cache_file_read_request@@KKPAV?$c_basic_buffer@X@@PAKPAU1@@Z");
//};

//bool cache_file_read_single_request_initiate(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?cache_file_read_single_request_initiate@@YA_NPAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_location_atlas@@PAVc_indirect_cache_file_bulk_read_iterator@@ABUs_indirect_cache_file_read_request@@KKPAV?$c_basic_buffer@X@@PAKPAVc_asynchronous_io_marker@@@Z");
//};

//bool cache_file_read_single_request_initiate(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_location const &, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, class c_asynchronous_io_marker *)
//{
//    mangled_ppc("?cache_file_read_single_request_initiate@@YA_NPAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_bulk_read_iterator@@ABUs_indirect_cache_file_location@@ABUs_indirect_cache_file_read_request@@KKPAV?$c_basic_buffer@X@@PAKPAVc_asynchronous_io_marker@@@Z");
//};

//enum e_indirect_cache_file_read_result cache_file_read_single_request_wait_for_completion(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, class c_asynchronous_io_marker *, unsigned long *)
//{
//    mangled_ppc("?cache_file_read_single_request_wait_for_completion@@YA?AW4e_indirect_cache_file_read_result@@PAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_bulk_read_iterator@@PAVc_asynchronous_io_marker@@PAK@Z");
//};

//enum e_indirect_cache_file_read_result cache_file_read_single_request_synchronous(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long, unsigned long, class c_basic_buffer<void> *, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?cache_file_read_single_request_synchronous@@YA?AW4e_indirect_cache_file_read_result@@PAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_location_atlas@@PAVc_indirect_cache_file_bulk_read_iterator@@ABUs_indirect_cache_file_read_request@@KKPAV?$c_basic_buffer@X@@PAK5@Z");
//};

//unsigned long get_sub_request_count(unsigned long, unsigned long)
//{
//    mangled_ppc("?get_sub_request_count@@YAKKK@Z");
//};

//public: c_synchronous_bulk_reader_stream::c_synchronous_bulk_reader_stream(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_read_request const &, unsigned long *, class c_stop_watch_template<class c_default_stop_watch_traits> *)
//{
//    mangled_ppc("??0c_synchronous_bulk_reader_stream@@QAA@PAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_location_atlas@@PAVc_indirect_cache_file_bulk_read_iterator@@ABUs_indirect_cache_file_read_request@@PAKPAV?$c_stop_watch_template@Vc_default_stop_watch_traits@@@@@Z");
//};

//public: c_cache_file_read_stream::c_cache_file_read_stream(void)
//{
//    mangled_ppc("??0c_cache_file_read_stream@@QAA@XZ");
//};

//public: s_static_array<class c_asynchronous_io_marker, 2>::s_static_array<class c_asynchronous_io_marker, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_asynchronous_io_marker@@$01@@QAA@XZ");
//};

//public: c_synchronous_bulk_reader_stream::c_synchronous_bulk_reader_stream(class c_asynchronous_io_arena *, class c_indirect_cache_file_bulk_read_iterator *, struct s_indirect_cache_file_location const *, struct s_indirect_cache_file_read_request const &, unsigned long *, class c_stop_watch_template<class c_default_stop_watch_traits> *)
//{
//    mangled_ppc("??0c_synchronous_bulk_reader_stream@@QAA@PAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_bulk_read_iterator@@PBUs_indirect_cache_file_location@@ABUs_indirect_cache_file_read_request@@PAKPAV?$c_stop_watch_template@Vc_default_stop_watch_traits@@@@@Z");
//};

//public: virtual bool c_synchronous_bulk_reader_stream::read(class c_basic_buffer<void>, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?read@c_synchronous_bulk_reader_stream@@UAA_NV?$c_basic_buffer@X@@KPAKK@Z");
//};

//public: virtual bool c_synchronous_bulk_reader_stream::read_finished(unsigned long, unsigned long *, bool *)
//{
//    mangled_ppc("?read_finished@c_synchronous_bulk_reader_stream@@UAA_NKPAKPA_N@Z");
//};

//public: virtual void c_synchronous_bulk_reader_stream::sync(unsigned long)
//{
//    mangled_ppc("?sync@c_synchronous_bulk_reader_stream@@UAAXK@Z");
//};

//enum e_indirect_cache_file_read_result cache_file_read_decompression_request_synchronous(class c_cache_file_read_stream *, class c_indirect_cache_file_decompressor_service *, struct s_indirect_cache_file_read_request const *, class c_basic_buffer<void>)
//{
//    mangled_ppc("?cache_file_read_decompression_request_synchronous@@YA?AW4e_indirect_cache_file_read_result@@PAVc_cache_file_read_stream@@PAVc_indirect_cache_file_decompressor_service@@PBUs_indirect_cache_file_read_request@@V?$c_basic_buffer@X@@@Z");
//};

//void cache_file_read_multiple_requests_synchronous(class c_asynchronous_io_arena *, class c_indirect_cache_file_location_atlas *, class c_indirect_cache_file_decompressor_service *, class c_indirect_cache_file_bulk_read_iterator *, class c_basic_buffer<void>)
//{
//    mangled_ppc("?cache_file_read_multiple_requests_synchronous@@YAXPAVc_asynchronous_io_arena@@PAVc_indirect_cache_file_location_atlas@@PAVc_indirect_cache_file_decompressor_service@@PAVc_indirect_cache_file_bulk_read_iterator@@V?$c_basic_buffer@X@@@Z");
//};

//public: c_synchronous_bulk_reader_stream::~c_synchronous_bulk_reader_stream(void)
//{
//    mangled_ppc("??1c_synchronous_bulk_reader_stream@@QAA@XZ");
//};

//public: s_static_array<class c_asynchronous_io_marker, 2>::~s_static_array<class c_asynchronous_io_marker, 2>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_asynchronous_io_marker@@$01@@QAA@XZ");
//};

//char const * indirect_cache_file_result_describe(enum e_indirect_cache_file_read_result)
//{
//    mangled_ppc("?indirect_cache_file_result_describe@@YAPBDW4e_indirect_cache_file_read_result@@@Z");
//};

//void cache_file_read_single_request_scatter(void)
//{
//    mangled_ppc("?cache_file_read_single_request_scatter@@YAXXZ");
//};

//public: static long s_static_array<struct s_async_io_file, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_async_io_file@@$0CA@@@SAJXZ");
//};

//public: long c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@QBAJXZ");
//};

//public: union _FILE_SEGMENT_ELEMENT & c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@T_FILE_SEGMENT_ELEMENT@@@@QAAAAT_FILE_SEGMENT_ELEMENT@@J@Z");
//};

//public: union _FILE_SEGMENT_ELEMENT * c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@T_FILE_SEGMENT_ELEMENT@@@@QAAPAT_FILE_SEGMENT_ELEMENT@@XZ");
//};

//public: union _FILE_SEGMENT_ELEMENT * c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@QAAPAT_FILE_SEGMENT_ELEMENT@@XZ");
//};

//public: union _FILE_SEGMENT_ELEMENT * c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@T_FILE_SEGMENT_ELEMENT@@@@QAAPAT_FILE_SEGMENT_ELEMENT@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@T_FILE_SEGMENT_ELEMENT@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> * c_recursive_template_pattern<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@@@QAAPAV?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT>, union _FILE_SEGMENT_ELEMENT>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@T_FILE_SEGMENT_ELEMENT@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> const * c_recursive_template_pattern<class c_wrapped_array_no_init<union _FILE_SEGMENT_ELEMENT> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@@@QBAPBV?$c_wrapped_array_no_init@T_FILE_SEGMENT_ELEMENT@@@@XZ");
//};

//public: void c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: c_flags<long, unsigned long, 2, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JK$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_async_io_file & s_static_array<struct s_async_io_file, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_async_io_file@@$0CA@@@QAAAAUs_async_io_file@@J@Z");
//};

//public: static bool s_static_array<struct s_async_io_file, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_async_io_file@@$0CA@@@SA_NJ@Z");
//};

//public: struct s_async_io_file const & s_static_array<struct s_async_io_file, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_async_io_file@@$0CA@@@QBAABUs_async_io_file@@J@Z");
//};

//public: struct s_async_io_file & s_static_array<struct s_async_io_file, 32>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Us_async_io_file@@$0CA@@@QAAAAUs_async_io_file@@K@Z");
//};

//public: class c_asynchronous_io_marker & s_static_array<class c_asynchronous_io_marker, 2>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Vc_asynchronous_io_marker@@$01@@QAAAAVc_asynchronous_io_marker@@K@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: static bool s_static_array<struct s_async_io_file, 32>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Us_async_io_file@@$0CA@@@SA_NK@Z");
//};

//public: static bool s_static_array<class c_asynchronous_io_marker, 2>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Vc_asynchronous_io_marker@@$01@@SA_NK@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JK$01Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

