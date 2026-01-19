/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **k_http_request_queue_failure_reason_descriptions; // "?k_http_request_queue_failure_reason_descriptions@@3PAPBDA"
// unsigned long g_last_http_acquire_server_time; // "?g_last_http_acquire_server_time@@3KA"
// class c_static_string<256> g_storage_url_subdirectory; // "?g_storage_url_subdirectory@@3V?$c_static_string@$0BAA@@@A"
// class c_network_http_request_queue *g_network_http_request_queue; // "?g_network_http_request_queue@@3PAVc_network_http_request_queue@@A"

// void network_http_request_queue_initialize(void);
// void network_http_request_queue_dispose(void);
// void network_http_request_queue_update(void);
// void network_http_request_queue_describe(enum e_network_http_request_queue_type, class c_static_string<256> *);
// void network_storage_set_storage_subdirectory(char const *);
// void network_storage_set_storage_user(char const *);
// void network_storage_run_locally(bool);
// public: c_network_http_request_description::c_network_http_request_description(void);
// public: c_network_http_request_description::c_network_http_request_description(char const *, enum e_http_request_type);
// public: c_network_http_request_description::c_network_http_request_description(char const *, enum e_http_request_type, struct s_network_http_request_hash const *);
// public: c_network_http_request_queue::c_network_http_request_queue(enum e_network_http_request_queue_type);
// public: c_network_http_request_item::c_network_http_request_item(void);
// public: static class c_network_http_request_queue * c_network_http_request_queue::get(enum e_network_http_request_queue_type);
// public: static void c_network_http_request_queue::update(void);
// public: long c_network_http_request_queue::start_request(enum e_online_lsp_service_type, class c_network_http_request_description const *);
// public: class c_static_string<256> const * c_network_http_request_description::get_url(void) const;
// public: c_network_http_request_item::c_network_http_request_item(long, class c_network_http_request_queue *, enum e_online_lsp_service_type, class c_network_http_request_description const *);
// public: void c_network_http_request_item::set_client_usage_type(enum e_client_usage_type);
// public: long c_network_http_request_queue::start_request_into_buffer(enum e_online_lsp_service_type, class c_network_http_request_description const *, char *, long);
// public: enum e_client_usage_type c_network_http_request_item::get_client_usage_type(void) const;
// public: char * c_network_http_request_item::get_fill_buffer(void) const;
// public: void c_network_http_request_item::set_fill_buffer(char *);
// public: void c_network_http_request_item::set_fill_buffer_length(long);
// public: void c_network_http_request_item::set_fill_buffer_progress(long);
// public: void c_network_http_request_queue::cancel_request(long);
// public: long c_network_http_request_item::get_request_cookie(void) const;
// public: enum e_network_http_request_state c_network_http_request_item::get_request_state(void) const;
// private: void c_network_http_request_queue::remove_first_item_from_queue(void);
// public: enum e_network_http_request_result c_network_http_request_queue::is_fill_buffer_complete(long, long *, enum e_network_http_request_queue_failure_reason *, long *);
// public: class c_network_http_request_description const * c_network_http_request_item::get_description(void) const;
// public: long c_network_http_request_item::get_fill_buffer_length(void) const;
// public: long c_network_http_request_item::get_fill_buffer_progress(void) const;
// public: enum e_network_http_request_result c_network_http_request_queue::read_bytes(long, char *, long, long *, enum e_network_http_request_queue_failure_reason *, long *);
// public: void c_network_http_request_queue::describe(class c_static_string<256> *) const;
// private: enum e_network_http_request_result c_network_http_request_queue::acquire_server(class c_network_http_request_item *);
// public: enum e_http_request_type c_network_http_request_description::get_request_type(void) const;
// public: class c_http_post_source const * c_network_http_request_description::get_post_source(void) const;
// public: char const * c_network_http_request_description::get_headers(void) const;
// public: void c_network_http_request_item::set_request_state(enum e_network_http_request_state);
// public: enum e_online_lsp_service_type c_network_http_request_item::get_service_type(void) const;
// private: bool c_network_http_request_queue::run_request(class c_network_http_request_item *, char *, long, long *, bool *, long *, enum c_network_http_request_queue::e_run_request_failure_reason *);
// private: enum e_network_http_request_result c_network_http_request_queue::read_bytes_internal(class c_network_http_request_item *, char *, long, long *, bool *, enum e_network_http_request_queue_failure_reason *, long *);
// public: long c_network_http_request_item::get_retries_remaining(void) const;
// private: void c_network_http_request_queue::request_succeeded(class c_network_http_request_item *);
// private: void c_network_http_request_queue::request_failed(class c_network_http_request_item *, enum e_network_http_request_queue_failure_reason, bool);
// public: void c_network_http_request_item::failed(bool);
// private: class c_network_http_request_item * c_network_http_request_queue::find_http_request_item_from_cookie(long);
// private: long c_network_http_request_queue::find_http_request_item_index(class c_network_http_request_item const *) const;
// void make_url(class c_static_string<256> const *, class c_static_string<256> *);
// public: bool s_static_string<256>::substring(long, long, class s_static_string<256> *) const;
// public: void s_static_string<260>::replace(char, char);
// public: bool s_static_string<260>::substring(long, long, class s_static_string<260> *) const;
// public: long s_static_string<260>::length(void) const;

//void network_http_request_queue_initialize(void)
//{
//    mangled_ppc("?network_http_request_queue_initialize@@YAXXZ");
//};

//void network_http_request_queue_dispose(void)
//{
//    mangled_ppc("?network_http_request_queue_dispose@@YAXXZ");
//};

//void network_http_request_queue_update(void)
//{
//    mangled_ppc("?network_http_request_queue_update@@YAXXZ");
//};

//void network_http_request_queue_describe(enum e_network_http_request_queue_type, class c_static_string<256> *)
//{
//    mangled_ppc("?network_http_request_queue_describe@@YAXW4e_network_http_request_queue_type@@PAV?$c_static_string@$0BAA@@@@Z");
//};

//void network_storage_set_storage_subdirectory(char const *)
//{
//    mangled_ppc("?network_storage_set_storage_subdirectory@@YAXPBD@Z");
//};

//void network_storage_set_storage_user(char const *)
//{
//    mangled_ppc("?network_storage_set_storage_user@@YAXPBD@Z");
//};

//void network_storage_run_locally(bool)
//{
//    mangled_ppc("?network_storage_run_locally@@YAX_N@Z");
//};

//public: c_network_http_request_description::c_network_http_request_description(void)
//{
//    mangled_ppc("??0c_network_http_request_description@@QAA@XZ");
//};

//public: c_network_http_request_description::c_network_http_request_description(char const *, enum e_http_request_type)
//{
//    mangled_ppc("??0c_network_http_request_description@@QAA@PBDW4e_http_request_type@@@Z");
//};

//public: c_network_http_request_description::c_network_http_request_description(char const *, enum e_http_request_type, struct s_network_http_request_hash const *)
//{
//    mangled_ppc("??0c_network_http_request_description@@QAA@PBDW4e_http_request_type@@PBUs_network_http_request_hash@@@Z");
//};

//public: c_network_http_request_queue::c_network_http_request_queue(enum e_network_http_request_queue_type)
//{
//    mangled_ppc("??0c_network_http_request_queue@@QAA@W4e_network_http_request_queue_type@@@Z");
//};

//public: c_network_http_request_item::c_network_http_request_item(void)
//{
//    mangled_ppc("??0c_network_http_request_item@@QAA@XZ");
//};

//public: static class c_network_http_request_queue * c_network_http_request_queue::get(enum e_network_http_request_queue_type)
//{
//    mangled_ppc("?get@c_network_http_request_queue@@SAPAV1@W4e_network_http_request_queue_type@@@Z");
//};

//public: static void c_network_http_request_queue::update(void)
//{
//    mangled_ppc("?update@c_network_http_request_queue@@SAXXZ");
//};

//public: long c_network_http_request_queue::start_request(enum e_online_lsp_service_type, class c_network_http_request_description const *)
//{
//    mangled_ppc("?start_request@c_network_http_request_queue@@QAAJW4e_online_lsp_service_type@@PBVc_network_http_request_description@@@Z");
//};

//public: class c_static_string<256> const * c_network_http_request_description::get_url(void) const
//{
//    mangled_ppc("?get_url@c_network_http_request_description@@QBAPBV?$c_static_string@$0BAA@@@XZ");
//};

//public: c_network_http_request_item::c_network_http_request_item(long, class c_network_http_request_queue *, enum e_online_lsp_service_type, class c_network_http_request_description const *)
//{
//    mangled_ppc("??0c_network_http_request_item@@QAA@JPAVc_network_http_request_queue@@W4e_online_lsp_service_type@@PBVc_network_http_request_description@@@Z");
//};

//public: void c_network_http_request_item::set_client_usage_type(enum e_client_usage_type)
//{
//    mangled_ppc("?set_client_usage_type@c_network_http_request_item@@QAAXW4e_client_usage_type@@@Z");
//};

//public: long c_network_http_request_queue::start_request_into_buffer(enum e_online_lsp_service_type, class c_network_http_request_description const *, char *, long)
//{
//    mangled_ppc("?start_request_into_buffer@c_network_http_request_queue@@QAAJW4e_online_lsp_service_type@@PBVc_network_http_request_description@@PADJ@Z");
//};

//public: enum e_client_usage_type c_network_http_request_item::get_client_usage_type(void) const
//{
//    mangled_ppc("?get_client_usage_type@c_network_http_request_item@@QBA?AW4e_client_usage_type@@XZ");
//};

//public: char * c_network_http_request_item::get_fill_buffer(void) const
//{
//    mangled_ppc("?get_fill_buffer@c_network_http_request_item@@QBAPADXZ");
//};

//public: void c_network_http_request_item::set_fill_buffer(char *)
//{
//    mangled_ppc("?set_fill_buffer@c_network_http_request_item@@QAAXPAD@Z");
//};

//public: void c_network_http_request_item::set_fill_buffer_length(long)
//{
//    mangled_ppc("?set_fill_buffer_length@c_network_http_request_item@@QAAXJ@Z");
//};

//public: void c_network_http_request_item::set_fill_buffer_progress(long)
//{
//    mangled_ppc("?set_fill_buffer_progress@c_network_http_request_item@@QAAXJ@Z");
//};

//public: void c_network_http_request_queue::cancel_request(long)
//{
//    mangled_ppc("?cancel_request@c_network_http_request_queue@@QAAXJ@Z");
//};

//public: long c_network_http_request_item::get_request_cookie(void) const
//{
//    mangled_ppc("?get_request_cookie@c_network_http_request_item@@QBAJXZ");
//};

//public: enum e_network_http_request_state c_network_http_request_item::get_request_state(void) const
//{
//    mangled_ppc("?get_request_state@c_network_http_request_item@@QBA?AW4e_network_http_request_state@@XZ");
//};

//private: void c_network_http_request_queue::remove_first_item_from_queue(void)
//{
//    mangled_ppc("?remove_first_item_from_queue@c_network_http_request_queue@@AAAXXZ");
//};

//public: enum e_network_http_request_result c_network_http_request_queue::is_fill_buffer_complete(long, long *, enum e_network_http_request_queue_failure_reason *, long *)
//{
//    mangled_ppc("?is_fill_buffer_complete@c_network_http_request_queue@@QAA?AW4e_network_http_request_result@@JPAJPAW4e_network_http_request_queue_failure_reason@@0@Z");
//};

//public: class c_network_http_request_description const * c_network_http_request_item::get_description(void) const
//{
//    mangled_ppc("?get_description@c_network_http_request_item@@QBAPBVc_network_http_request_description@@XZ");
//};

//public: long c_network_http_request_item::get_fill_buffer_length(void) const
//{
//    mangled_ppc("?get_fill_buffer_length@c_network_http_request_item@@QBAJXZ");
//};

//public: long c_network_http_request_item::get_fill_buffer_progress(void) const
//{
//    mangled_ppc("?get_fill_buffer_progress@c_network_http_request_item@@QBAJXZ");
//};

//public: enum e_network_http_request_result c_network_http_request_queue::read_bytes(long, char *, long, long *, enum e_network_http_request_queue_failure_reason *, long *)
//{
//    mangled_ppc("?read_bytes@c_network_http_request_queue@@QAA?AW4e_network_http_request_result@@JPADJPAJPAW4e_network_http_request_queue_failure_reason@@1@Z");
//};

//public: void c_network_http_request_queue::describe(class c_static_string<256> *) const
//{
//    mangled_ppc("?describe@c_network_http_request_queue@@QBAXPAV?$c_static_string@$0BAA@@@@Z");
//};

//private: enum e_network_http_request_result c_network_http_request_queue::acquire_server(class c_network_http_request_item *)
//{
//    mangled_ppc("?acquire_server@c_network_http_request_queue@@AAA?AW4e_network_http_request_result@@PAVc_network_http_request_item@@@Z");
//};

//public: enum e_http_request_type c_network_http_request_description::get_request_type(void) const
//{
//    mangled_ppc("?get_request_type@c_network_http_request_description@@QBA?AW4e_http_request_type@@XZ");
//};

//public: class c_http_post_source const * c_network_http_request_description::get_post_source(void) const
//{
//    mangled_ppc("?get_post_source@c_network_http_request_description@@QBAPBVc_http_post_source@@XZ");
//};

//public: char const * c_network_http_request_description::get_headers(void) const
//{
//    mangled_ppc("?get_headers@c_network_http_request_description@@QBAPBDXZ");
//};

//public: void c_network_http_request_item::set_request_state(enum e_network_http_request_state)
//{
//    mangled_ppc("?set_request_state@c_network_http_request_item@@QAAXW4e_network_http_request_state@@@Z");
//};

//public: enum e_online_lsp_service_type c_network_http_request_item::get_service_type(void) const
//{
//    mangled_ppc("?get_service_type@c_network_http_request_item@@QBA?AW4e_online_lsp_service_type@@XZ");
//};

//private: bool c_network_http_request_queue::run_request(class c_network_http_request_item *, char *, long, long *, bool *, long *, enum c_network_http_request_queue::e_run_request_failure_reason *)
//{
//    mangled_ppc("?run_request@c_network_http_request_queue@@AAA_NPAVc_network_http_request_item@@PADJPAJPA_N2PAW4e_run_request_failure_reason@1@@Z");
//};

//private: enum e_network_http_request_result c_network_http_request_queue::read_bytes_internal(class c_network_http_request_item *, char *, long, long *, bool *, enum e_network_http_request_queue_failure_reason *, long *)
//{
//    mangled_ppc("?read_bytes_internal@c_network_http_request_queue@@AAA?AW4e_network_http_request_result@@PAVc_network_http_request_item@@PADJPAJPA_NPAW4e_network_http_request_queue_failure_reason@@2@Z");
//};

//public: long c_network_http_request_item::get_retries_remaining(void) const
//{
//    mangled_ppc("?get_retries_remaining@c_network_http_request_item@@QBAJXZ");
//};

//private: void c_network_http_request_queue::request_succeeded(class c_network_http_request_item *)
//{
//    mangled_ppc("?request_succeeded@c_network_http_request_queue@@AAAXPAVc_network_http_request_item@@@Z");
//};

//private: void c_network_http_request_queue::request_failed(class c_network_http_request_item *, enum e_network_http_request_queue_failure_reason, bool)
//{
//    mangled_ppc("?request_failed@c_network_http_request_queue@@AAAXPAVc_network_http_request_item@@W4e_network_http_request_queue_failure_reason@@_N@Z");
//};

//public: void c_network_http_request_item::failed(bool)
//{
//    mangled_ppc("?failed@c_network_http_request_item@@QAAX_N@Z");
//};

//private: class c_network_http_request_item * c_network_http_request_queue::find_http_request_item_from_cookie(long)
//{
//    mangled_ppc("?find_http_request_item_from_cookie@c_network_http_request_queue@@AAAPAVc_network_http_request_item@@J@Z");
//};

//private: long c_network_http_request_queue::find_http_request_item_index(class c_network_http_request_item const *) const
//{
//    mangled_ppc("?find_http_request_item_index@c_network_http_request_queue@@ABAJPBVc_network_http_request_item@@@Z");
//};

//void make_url(class c_static_string<256> const *, class c_static_string<256> *)
//{
//    mangled_ppc("?make_url@@YAXPBV?$c_static_string@$0BAA@@@PAV1@@Z");
//};

//public: bool s_static_string<256>::substring(long, long, class s_static_string<256> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0BAA@@@QBA_NJJPAV1@@Z");
//};

//public: void s_static_string<260>::replace(char, char)
//{
//    mangled_ppc("?replace@?$s_static_string@$0BAE@@@QAAXDD@Z");
//};

//public: bool s_static_string<260>::substring(long, long, class s_static_string<260> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0BAE@@@QBA_NJJPAV1@@Z");
//};

//public: long s_static_string<260>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0BAE@@@QBAJXZ");
//};

