/* ---------- headers */

#include "omaha\tag_files\tag_resource_cache_datum_persist.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_tag_resource_cache_datum_persister::`vftable'{for `c_datum_restorer'}; // "??_7c_tag_resource_cache_datum_persister@@6Bc_datum_restorer@@@"
// const c_tag_resource_cache_datum_persister::`vftable'{for `c_datum_persister'}; // "??_7c_tag_resource_cache_datum_persister@@6Bc_datum_persister@@@"
// long volatile `public: virtual bool __cdecl c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const'::`6'::x_event_category_index; // "?x_event_category_index@?5??persist@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const'::`42'::x_event_category_index; // "?x_event_category_index@?CK@??restore@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z@4JC"

// bool save_buffer(class c_persist_stream *, class c_basic_buffer<void>);
// bool restore_buffer(class c_persist_stream *, class c_basic_buffer<void>);
// bool allocate_tag_resource_cache_datum_storage(class c_allocation_interface *, char const *, struct s_tag_resource_cache_datum_descriptor const *, struct s_tag_resource_cache_datum_allocation *);
// bool save_or_load_tag_resource_cache_datum(class c_persist_stream *, class c_allocation_interface *, class c_basic_buffer<void>, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *, enum e_chunk_archive_action);
// public: c_resource_structure_persister::c_resource_structure_persister(class c_allocation_interface *, class c_basic_buffer<void>, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *);
// public: bool c_resource_structure_persister::persist_control_data(class c_persist_stream *);
// public: bool c_resource_structure_persister::restore_control_data(class c_persist_stream *);
// public: bool c_resource_structure_persister::persist_control_fixups(class c_persist_stream *);
// public: bool c_resource_structure_persister::restore_control_fixups(class c_persist_stream *);
// public: s_tag_resource_cache_datum_allocation::s_tag_resource_cache_datum_allocation(void);
// public: c_tag_resource_cache_datum_persister::c_tag_resource_cache_datum_persister(class c_allocation_interface *, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *);
// public: virtual bool c_tag_resource_cache_datum_persister::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *);
// public: virtual bool c_tag_resource_cache_datum_persister::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *);
// public: virtual bool c_tag_resource_cache_datum_persister::is_supported_datum_size(unsigned long);
// bool save_tag_resource_cache_data_array(struct s_data_array *, class c_persist_stream *, class c_tag_resource_cache_datum_access *);
// bool load_tag_resource_cache_data_array(struct s_data_array *, class c_persist_stream *, class c_allocation_interface *, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *);
// class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister> create_handler_chunk_archiver<class c_resource_structure_persister, class c_resource_structure_persister>(char const *, unsigned long, long, class c_resource_structure_persister *, class c_resource_structure_persister *);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister> >(class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>);
// class c_free_chunk_section_archiver<class c_resource_structure_persister> make_free_chunk_section_archiver<class c_resource_structure_persister>(class c_resource_structure_persister *, char const *, unsigned long, long, bool (c_resource_structure_persister::*)(class c_persist_stream *), bool (c_resource_structure_persister::*)(class c_persist_stream *));
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_resource_structure_persister> >(class c_free_chunk_section_archiver<class c_resource_structure_persister>);
// public: c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>(char const *, unsigned long, long, class c_resource_structure_persister *, class c_resource_structure_persister *);
// public: virtual char const * c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_description(void) const;
// public: virtual unsigned long c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_chunk_tag(void) const;
// public: virtual long c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_chunk_version(void) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: bool c_resource_structure_persister::persist(class c_persist_stream *);
// private: static bool c_resource_structure_persister::save_or_restore(class c_basic_buffer<void>, struct s_tag_resource_cache_datum_descriptor *, class c_persist_stream *, enum e_chunk_archive_action);
// class c_raw_buffer_chunk_section_archiver make_raw_buffer_archiver(char const *, unsigned long, long, class c_basic_buffer<void>);
// public: c_raw_buffer_chunk_section_archiver::c_raw_buffer_chunk_section_archiver(char const *, unsigned long, long, class c_basic_buffer<void>);
// public: virtual bool c_raw_buffer_chunk_section_archiver::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_raw_buffer_chunk_section_archiver::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: bool c_resource_structure_persister::restore(class c_persist_stream *);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_raw_buffer_chunk_section_archiver>(class c_raw_buffer_chunk_section_archiver);
// class c_raw_buffer_chunk_section_archiver make_raw_section_archiver<struct s_tag_resource_cache_datum_descriptor>(char const *, unsigned long, long, struct s_tag_resource_cache_datum_descriptor *);
// public: c_free_chunk_section_archiver<class c_resource_structure_persister>::c_free_chunk_section_archiver<class c_resource_structure_persister>(class c_resource_structure_persister *, char const *, unsigned long, long, bool (c_resource_structure_persister::*)(class c_persist_stream *), bool (c_resource_structure_persister::*)(class c_persist_stream *));
// public: virtual char const * c_free_chunk_section_archiver<class c_resource_structure_persister>::get_description(void) const;
// public: virtual unsigned long c_free_chunk_section_archiver<class c_resource_structure_persister>::get_chunk_tag(void) const;
// public: virtual long c_free_chunk_section_archiver<class c_resource_structure_persister>::get_chunk_version(void) const;
// public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;

//bool save_buffer(class c_persist_stream *, class c_basic_buffer<void>)
//{
//    mangled_ppc("?save_buffer@@YA_NPAVc_persist_stream@@V?$c_basic_buffer@X@@@Z");
//};

//bool restore_buffer(class c_persist_stream *, class c_basic_buffer<void>)
//{
//    mangled_ppc("?restore_buffer@@YA_NPAVc_persist_stream@@V?$c_basic_buffer@X@@@Z");
//};

//bool allocate_tag_resource_cache_datum_storage(class c_allocation_interface *, char const *, struct s_tag_resource_cache_datum_descriptor const *, struct s_tag_resource_cache_datum_allocation *)
//{
//    mangled_ppc("?allocate_tag_resource_cache_datum_storage@@YA_NPAVc_allocation_interface@@PBDPBUs_tag_resource_cache_datum_descriptor@@PAUs_tag_resource_cache_datum_allocation@@@Z");
//};

//bool save_or_load_tag_resource_cache_datum(class c_persist_stream *, class c_allocation_interface *, class c_basic_buffer<void>, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *, enum e_chunk_archive_action)
//{
//    mangled_ppc("?save_or_load_tag_resource_cache_datum@@YA_NPAVc_persist_stream@@PAVc_allocation_interface@@V?$c_basic_buffer@X@@PAVc_tag_resource_cache_datum_access@@PAVc_tag_resource_definition_dictionary@@W4e_chunk_archive_action@@@Z");
//};

//public: c_resource_structure_persister::c_resource_structure_persister(class c_allocation_interface *, class c_basic_buffer<void>, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("??0c_resource_structure_persister@@QAA@PAVc_allocation_interface@@V?$c_basic_buffer@X@@PAVc_tag_resource_cache_datum_access@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: bool c_resource_structure_persister::persist_control_data(class c_persist_stream *)
//{
//    mangled_ppc("?persist_control_data@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_resource_structure_persister::restore_control_data(class c_persist_stream *)
//{
//    mangled_ppc("?restore_control_data@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_resource_structure_persister::persist_control_fixups(class c_persist_stream *)
//{
//    mangled_ppc("?persist_control_fixups@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: bool c_resource_structure_persister::restore_control_fixups(class c_persist_stream *)
//{
//    mangled_ppc("?restore_control_fixups@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: s_tag_resource_cache_datum_allocation::s_tag_resource_cache_datum_allocation(void)
//{
//    mangled_ppc("??0s_tag_resource_cache_datum_allocation@@QAA@XZ");
//};

//public: c_tag_resource_cache_datum_persister::c_tag_resource_cache_datum_persister(class c_allocation_interface *, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("??0c_tag_resource_cache_datum_persister@@QAA@PAVc_allocation_interface@@PAVc_tag_resource_cache_datum_access@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//public: virtual bool c_tag_resource_cache_datum_persister::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *)
//{
//    mangled_ppc("?write_datum_for_save@c_tag_resource_cache_datum_persister@@UAA_NABV?$c_basic_buffer@$$CBX@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_cache_datum_persister::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *)
//{
//    mangled_ppc("?restore_datum_from_load@c_tag_resource_cache_datum_persister@@UAA_NAAV?$c_basic_buffer@X@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_tag_resource_cache_datum_persister::is_supported_datum_size(unsigned long)
//{
//    mangled_ppc("?is_supported_datum_size@c_tag_resource_cache_datum_persister@@UAA_NK@Z");
//};

//bool save_tag_resource_cache_data_array(struct s_data_array *, class c_persist_stream *, class c_tag_resource_cache_datum_access *)
//{
//    mangled_ppc("?save_tag_resource_cache_data_array@@YA_NPAUs_data_array@@PAVc_persist_stream@@PAVc_tag_resource_cache_datum_access@@@Z");
//};

//bool load_tag_resource_cache_data_array(struct s_data_array *, class c_persist_stream *, class c_allocation_interface *, class c_tag_resource_cache_datum_access *, class c_tag_resource_definition_dictionary *)
//{
//    mangled_ppc("?load_tag_resource_cache_data_array@@YA_NPAUs_data_array@@PAVc_persist_stream@@PAVc_allocation_interface@@PAVc_tag_resource_cache_datum_access@@PAVc_tag_resource_definition_dictionary@@@Z");
//};

//class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister> create_handler_chunk_archiver<class c_resource_structure_persister, class c_resource_structure_persister>(char const *, unsigned long, long, class c_resource_structure_persister *, class c_resource_structure_persister *)
//{
//    mangled_ppc("??$create_handler_chunk_archiver@Vc_resource_structure_persister@@V1@@@YA?AV?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@PBDKJPAVc_resource_structure_persister@@1@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister> >(class c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>)
//{
//    mangled_ppc("??$make@V?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@@s_persist_archiver_holder@@SA?AU0@V?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@@Z");
//};

//class c_free_chunk_section_archiver<class c_resource_structure_persister> make_free_chunk_section_archiver<class c_resource_structure_persister>(class c_resource_structure_persister *, char const *, unsigned long, long, bool (c_resource_structure_persister::*)(class c_persist_stream *), bool (c_resource_structure_persister::*)(class c_persist_stream *))
//{
//    mangled_ppc("??$make_free_chunk_section_archiver@Vc_resource_structure_persister@@@@YA?AV?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@PAVc_resource_structure_persister@@PBDKJP81@AA_NPAVc_persist_stream@@@Z3@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_free_chunk_section_archiver<class c_resource_structure_persister> >(class c_free_chunk_section_archiver<class c_resource_structure_persister>)
//{
//    mangled_ppc("??$make@V?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@@s_persist_archiver_holder@@SA?AU0@V?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@@Z");
//};

//public: c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>(char const *, unsigned long, long, class c_resource_structure_persister *, class c_resource_structure_persister *)
//{
//    mangled_ppc("??0?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@QAA@PBDKJPAVc_resource_structure_persister@@1@Z");
//};

//public: virtual char const * c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBAKXZ");
//};

//public: virtual long c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBAJXZ");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBA_NKJ@Z");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: bool c_resource_structure_persister::persist(class c_persist_stream *)
//{
//    mangled_ppc("?persist@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//private: static bool c_resource_structure_persister::save_or_restore(class c_basic_buffer<void>, struct s_tag_resource_cache_datum_descriptor *, class c_persist_stream *, enum e_chunk_archive_action)
//{
//    mangled_ppc("?save_or_restore@c_resource_structure_persister@@CA_NV?$c_basic_buffer@X@@PAUs_tag_resource_cache_datum_descriptor@@PAVc_persist_stream@@W4e_chunk_archive_action@@@Z");
//};

//class c_raw_buffer_chunk_section_archiver make_raw_buffer_archiver(char const *, unsigned long, long, class c_basic_buffer<void>)
//{
//    mangled_ppc("?make_raw_buffer_archiver@@YA?AVc_raw_buffer_chunk_section_archiver@@PBDKJV?$c_basic_buffer@X@@@Z");
//};

//public: c_raw_buffer_chunk_section_archiver::c_raw_buffer_chunk_section_archiver(char const *, unsigned long, long, class c_basic_buffer<void>)
//{
//    mangled_ppc("??0c_raw_buffer_chunk_section_archiver@@QAA@PBDKJV?$c_basic_buffer@X@@@Z");
//};

//public: virtual bool c_raw_buffer_chunk_section_archiver::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@c_raw_buffer_chunk_section_archiver@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_raw_buffer_chunk_section_archiver::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@c_raw_buffer_chunk_section_archiver@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_handler_chunk_section_archiver<class c_resource_structure_persister, class c_resource_structure_persister>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_handler_chunk_section_archiver@Vc_resource_structure_persister@@V1@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: bool c_resource_structure_persister::restore(class c_persist_stream *)
//{
//    mangled_ppc("?restore@c_resource_structure_persister@@QAA_NPAVc_persist_stream@@@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_raw_buffer_chunk_section_archiver>(class c_raw_buffer_chunk_section_archiver)
//{
//    mangled_ppc("??$make@Vc_raw_buffer_chunk_section_archiver@@@s_persist_archiver_holder@@SA?AU0@Vc_raw_buffer_chunk_section_archiver@@@Z");
//};

//class c_raw_buffer_chunk_section_archiver make_raw_section_archiver<struct s_tag_resource_cache_datum_descriptor>(char const *, unsigned long, long, struct s_tag_resource_cache_datum_descriptor *)
//{
//    mangled_ppc("??$make_raw_section_archiver@Us_tag_resource_cache_datum_descriptor@@@@YA?AVc_raw_buffer_chunk_section_archiver@@PBDKJPAUs_tag_resource_cache_datum_descriptor@@@Z");
//};

//public: c_free_chunk_section_archiver<class c_resource_structure_persister>::c_free_chunk_section_archiver<class c_resource_structure_persister>(class c_resource_structure_persister *, char const *, unsigned long, long, bool (c_resource_structure_persister::*)(class c_persist_stream *), bool (c_resource_structure_persister::*)(class c_persist_stream *))
//{
//    mangled_ppc("??0?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@QAA@PAVc_resource_structure_persister@@PBDKJP81@AA_NPAVc_persist_stream@@@Z3@Z");
//};

//public: virtual char const * c_free_chunk_section_archiver<class c_resource_structure_persister>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_free_chunk_section_archiver<class c_resource_structure_persister>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBAKXZ");
//};

//public: virtual long c_free_chunk_section_archiver<class c_resource_structure_persister>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBAJXZ");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBA_NKJ@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_free_chunk_section_archiver<class c_resource_structure_persister>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_free_chunk_section_archiver@Vc_resource_structure_persister@@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

