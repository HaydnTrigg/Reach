/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<4096>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0BAAA@@@2JB"
// public: static long const s_static_string<4096>::k_element_count; // "?k_element_count@?$s_static_string@$0BAAA@@@2JB"
// float g_http_client_test_failure_ratio; // "?g_http_client_test_failure_ratio@@3MA"

// public: c_http_client::c_http_client(void);
// public: bool c_http_client::is_started(void) const;
// public: bool c_http_client::is_connected(void) const;
// public: long c_http_client::get_upload_position(void) const;
// public: long c_http_client::get_upload_length(void) const;
// public: unsigned long c_http_client::get_ip_address(void) const;
// public: bool c_http_client::start(class c_http_stream *, long, unsigned short, char const *, bool);
// public: bool c_http_client::stop(void);
// public: bool c_http_client::do_work(bool *, char *, long *, long *, enum c_http_client::e_failure_reason *);
// public: char const * c_http_stream::get_url(void) const;
// private: bool c_http_client::start_connect(void);
// private: bool c_http_client::send_data(void);
// private: bool c_http_client::receive_data(bool *, char *, long *, long *, enum c_http_client::e_failure_reason *);
// private: bool c_http_client::parse_http_response(char const *, long, bool *, long *, long *, long *);
// public: static void c_http_client::get_ip_address_string(long, class c_static_string<16> *);
// private: static void c_http_client::transport_shutdown(void *);
// public: long c_http_client::get_upstream_quota(void) const;
// public: void c_http_client::set_upstream_quota(long);
// public: c_fake_http_client::c_fake_http_client(void);
// public: bool c_fake_http_client::start(class c_http_stream *, long, unsigned short, char const *, bool);
// public: bool c_fake_http_client::do_work(bool *, char *, long *, long *);
// public: bool c_fake_http_client::stop(void);
// public: bool c_fake_http_client::is_started(void) const;
// public: bool c_fake_http_client::is_connected(void) const;
// public: long c_fake_http_client::get_upload_position(void) const;
// public: long c_fake_http_client::get_upload_length(void) const;
// public: unsigned long c_fake_http_client::get_ip_address(void) const;
// public: static void c_fake_http_client::get_ip_address_string(long, class c_static_string<16> *);
// public: bool s_static_string<256>::starts_with(char const *) const;
// public: void s_static_string<4096>::set_bounded(char const *, long);
// public: long s_static_string<4096>::index_of(char const *) const;
// public: long s_static_string<4096>::next_index_of(char const *, long) const;
// public: bool s_static_string<4096>::starts_with(char const *) const;
// public: bool s_static_string<4096>::substring(long, long, class s_static_string<4096> *) const;
// public: long s_static_string<4096>::length(void) const;
// public: char const * s_static_string<4096>::get_string(void) const;
// public: c_static_string<4096>::c_static_string<4096>(void);
// public: void s_static_string<4096>::clear(void);

//public: c_http_client::c_http_client(void)
//{
//    mangled_ppc("??0c_http_client@@QAA@XZ");
//};

//public: bool c_http_client::is_started(void) const
//{
//    mangled_ppc("?is_started@c_http_client@@QBA_NXZ");
//};

//public: bool c_http_client::is_connected(void) const
//{
//    mangled_ppc("?is_connected@c_http_client@@QBA_NXZ");
//};

//public: long c_http_client::get_upload_position(void) const
//{
//    mangled_ppc("?get_upload_position@c_http_client@@QBAJXZ");
//};

//public: long c_http_client::get_upload_length(void) const
//{
//    mangled_ppc("?get_upload_length@c_http_client@@QBAJXZ");
//};

//public: unsigned long c_http_client::get_ip_address(void) const
//{
//    mangled_ppc("?get_ip_address@c_http_client@@QBAKXZ");
//};

//public: bool c_http_client::start(class c_http_stream *, long, unsigned short, char const *, bool)
//{
//    mangled_ppc("?start@c_http_client@@QAA_NPAVc_http_stream@@JGPBD_N@Z");
//};

//public: bool c_http_client::stop(void)
//{
//    mangled_ppc("?stop@c_http_client@@QAA_NXZ");
//};

//public: bool c_http_client::do_work(bool *, char *, long *, long *, enum c_http_client::e_failure_reason *)
//{
//    mangled_ppc("?do_work@c_http_client@@QAA_NPA_NPADPAJ2PAW4e_failure_reason@1@@Z");
//};

//public: char const * c_http_stream::get_url(void) const
//{
//    mangled_ppc("?get_url@c_http_stream@@QBAPBDXZ");
//};

//private: bool c_http_client::start_connect(void)
//{
//    mangled_ppc("?start_connect@c_http_client@@AAA_NXZ");
//};

//private: bool c_http_client::send_data(void)
//{
//    mangled_ppc("?send_data@c_http_client@@AAA_NXZ");
//};

//private: bool c_http_client::receive_data(bool *, char *, long *, long *, enum c_http_client::e_failure_reason *)
//{
//    mangled_ppc("?receive_data@c_http_client@@AAA_NPA_NPADPAJ2PAW4e_failure_reason@1@@Z");
//};

//private: bool c_http_client::parse_http_response(char const *, long, bool *, long *, long *, long *)
//{
//    mangled_ppc("?parse_http_response@c_http_client@@AAA_NPBDJPA_NPAJ22@Z");
//};

//public: static void c_http_client::get_ip_address_string(long, class c_static_string<16> *)
//{
//    mangled_ppc("?get_ip_address_string@c_http_client@@SAXJPAV?$c_static_string@$0BA@@@@Z");
//};

//private: static void c_http_client::transport_shutdown(void *)
//{
//    mangled_ppc("?transport_shutdown@c_http_client@@CAXPAX@Z");
//};

//public: long c_http_client::get_upstream_quota(void) const
//{
//    mangled_ppc("?get_upstream_quota@c_http_client@@QBAJXZ");
//};

//public: void c_http_client::set_upstream_quota(long)
//{
//    mangled_ppc("?set_upstream_quota@c_http_client@@QAAXJ@Z");
//};

//public: c_fake_http_client::c_fake_http_client(void)
//{
//    mangled_ppc("??0c_fake_http_client@@QAA@XZ");
//};

//public: bool c_fake_http_client::start(class c_http_stream *, long, unsigned short, char const *, bool)
//{
//    mangled_ppc("?start@c_fake_http_client@@QAA_NPAVc_http_stream@@JGPBD_N@Z");
//};

//public: bool c_fake_http_client::do_work(bool *, char *, long *, long *)
//{
//    mangled_ppc("?do_work@c_fake_http_client@@QAA_NPA_NPADPAJ2@Z");
//};

//public: bool c_fake_http_client::stop(void)
//{
//    mangled_ppc("?stop@c_fake_http_client@@QAA_NXZ");
//};

//public: bool c_fake_http_client::is_started(void) const
//{
//    mangled_ppc("?is_started@c_fake_http_client@@QBA_NXZ");
//};

//public: bool c_fake_http_client::is_connected(void) const
//{
//    mangled_ppc("?is_connected@c_fake_http_client@@QBA_NXZ");
//};

//public: long c_fake_http_client::get_upload_position(void) const
//{
//    mangled_ppc("?get_upload_position@c_fake_http_client@@QBAJXZ");
//};

//public: long c_fake_http_client::get_upload_length(void) const
//{
//    mangled_ppc("?get_upload_length@c_fake_http_client@@QBAJXZ");
//};

//public: unsigned long c_fake_http_client::get_ip_address(void) const
//{
//    mangled_ppc("?get_ip_address@c_fake_http_client@@QBAKXZ");
//};

//public: static void c_fake_http_client::get_ip_address_string(long, class c_static_string<16> *)
//{
//    mangled_ppc("?get_ip_address_string@c_fake_http_client@@SAXJPAV?$c_static_string@$0BA@@@@Z");
//};

//public: bool s_static_string<256>::starts_with(char const *) const
//{
//    mangled_ppc("?starts_with@?$s_static_string@$0BAA@@@QBA_NPBD@Z");
//};

//public: void s_static_string<4096>::set_bounded(char const *, long)
//{
//    mangled_ppc("?set_bounded@?$s_static_string@$0BAAA@@@QAAXPBDJ@Z");
//};

//public: long s_static_string<4096>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0BAAA@@@QBAJPBD@Z");
//};

//public: long s_static_string<4096>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0BAAA@@@QBAJPBDJ@Z");
//};

//public: bool s_static_string<4096>::starts_with(char const *) const
//{
//    mangled_ppc("?starts_with@?$s_static_string@$0BAAA@@@QBA_NPBD@Z");
//};

//public: bool s_static_string<4096>::substring(long, long, class s_static_string<4096> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0BAAA@@@QBA_NJJPAV1@@Z");
//};

//public: long s_static_string<4096>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0BAAA@@@QBAJXZ");
//};

//public: char const * s_static_string<4096>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0BAAA@@@QBAPBDXZ");
//};

//public: c_static_string<4096>::c_static_string<4096>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0BAAA@@@QAA@XZ");
//};

//public: void s_static_string<4096>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0BAAA@@@QAAXXZ");
//};

