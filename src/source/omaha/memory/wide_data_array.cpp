/* ---------- headers */

#include "omaha\memory\wide_data_array.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const *const const c_byte_swap_traits<struct s_wide_data_array_header>::g_bs_codes_internal; // "?g_bs_codes_internal@?$c_byte_swap_traits@Us_wide_data_array_header@@@@2QBJB"
// public: static struct byte_swap_definition c_byte_swap_traits<struct s_wide_data_array_header>::g_bs_definition_internal; // "?g_bs_definition_internal@?$c_byte_swap_traits@Us_wide_data_array_header@@@@2Ubyte_swap_definition@@A"
// public: static struct byte_swap_definition *c_byte_swap_traits<struct s_wide_data_array_header>::g_bs_definition; // "?g_bs_definition@?$c_byte_swap_traits@Us_wide_data_array_header@@@@2PAUbyte_swap_definition@@A"

// __int64 wide_data_partition_datum_new(struct s_wide_data_array *, long);
// __int64 wide_datum_index_from_partition_and_datum_index(long, long);
// long partition_index_from_wide_datum_index(__int64);
// long datum_index_from_wide_datum_index(__int64);
// bool wide_data_initialize_partition(struct s_wide_data_array *, struct s_wide_data_partition *);
// long wide_data_create_partition(struct s_wide_data_array *);
// void wide_data_delete_all(struct s_wide_data_array *);
// struct s_wide_data_array * wide_data_new(char const *, long, long, long, long, class c_allocation_interface *, char const *, long);
// void get_partition_set_name(char const *, class c_static_string<32> *);
// void wide_data_dispose(struct s_wide_data_array *, char const *, long);
// void * wide_datum_get(struct s_wide_data_array *, __int64);
// void * wide_datum_try_and_get(struct s_wide_data_array const *, __int64);
// __int64 wide_datum_new(struct s_wide_data_array *);
// void wide_datum_delete(struct s_wide_data_array *, __int64);
// __int64 wide_data_first_index(struct s_wide_data_array const *);
// __int64 wide_data_next_index(struct s_wide_data_array const *, __int64);
// public: c_wide_data_partition_persister::c_wide_data_partition_persister(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_persister *);
// public: virtual bool c_wide_data_partition_persister::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *);
// public: c_wide_data_partition_restorer::c_wide_data_partition_restorer(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_restorer *);
// public: virtual bool c_wide_data_partition_restorer::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *);
// long wide_data_persist_compact_size(struct s_wide_data_array const *);
// bool wide_data_persist(struct s_wide_data_array const *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_persister *);
// public: s_wide_data_array_header::s_wide_data_array_header(void);
// bool wide_data_restore(struct s_wide_data_array *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *);
// public: c_wide_data_partition_recreater::c_wide_data_partition_recreater(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_restorer *);
// public: virtual bool c_wide_data_partition_recreater::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *);
// bool wide_data_recreate_from_stream(struct s_wide_data_array **, char const *, long, long, long, long, class c_allocation_interface *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *);
// public: struct s_data_array * c_smart_data_array<struct s_wide_data_partition>::operator struct s_data_array *(void) const;
// public: struct s_data_array * c_smart_data_array<struct s_wide_data_partition>::operator->(void);
// public: struct s_data_array const * c_smart_data_array<struct s_wide_data_partition>::operator->(void) const;
// public: class c_smart_data_array<struct s_wide_data_partition> & c_smart_data_array<struct s_wide_data_partition>::operator=(struct s_data_array *);
// public: void c_data_iterator<struct s_wide_data_partition>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_wide_data_partition>::next(void);
// public: struct s_wide_data_partition * c_data_iterator<struct s_wide_data_partition>::get_datum(void) const;
// public: char const * s_static_string<32>::append(char const *);
// public: struct s_wide_data_partition const * c_basic_buffer<void const>::c_basic_buffer_checked_caster_const::operatorcast<struct s_wide_data_partition>(void);
// public: struct s_wide_data_partition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_wide_data_partition>(void);
// public: bool c_persist_stream::write_typed<struct s_wide_data_array_header>(struct s_wide_data_array_header *, long);
// public: bool c_persist_stream::read_typed<struct s_wide_data_array_header>(struct s_wide_data_array_header *, long);
// public: struct s_wide_data_partition const * c_basic_buffer<void const>::get_as_type<struct s_wide_data_partition const>(void) const;
// public: struct s_wide_data_partition * c_basic_buffer<void>::get_as_type<struct s_wide_data_partition>(void);
// public: struct s_wide_data_partition const * c_basic_buffer<void const>::get_as_type_from_offset<struct s_wide_data_partition const>(unsigned long) const;
// public: struct s_wide_data_partition * c_basic_buffer<void>::get_as_type_from_offset<struct s_wide_data_partition>(unsigned long);
// public: static struct byte_swap_definition * c_byte_swap_traits<struct s_wide_data_array_header>::get_bs_definition(void);

//__int64 wide_data_partition_datum_new(struct s_wide_data_array *, long)
//{
//    mangled_ppc("?wide_data_partition_datum_new@@YA_JPAUs_wide_data_array@@J@Z");
//};

//__int64 wide_datum_index_from_partition_and_datum_index(long, long)
//{
//    mangled_ppc("?wide_datum_index_from_partition_and_datum_index@@YA_JJJ@Z");
//};

//long partition_index_from_wide_datum_index(__int64)
//{
//    mangled_ppc("?partition_index_from_wide_datum_index@@YAJ_J@Z");
//};

//long datum_index_from_wide_datum_index(__int64)
//{
//    mangled_ppc("?datum_index_from_wide_datum_index@@YAJ_J@Z");
//};

//bool wide_data_initialize_partition(struct s_wide_data_array *, struct s_wide_data_partition *)
//{
//    mangled_ppc("?wide_data_initialize_partition@@YA_NPAUs_wide_data_array@@PAUs_wide_data_partition@@@Z");
//};

//long wide_data_create_partition(struct s_wide_data_array *)
//{
//    mangled_ppc("?wide_data_create_partition@@YAJPAUs_wide_data_array@@@Z");
//};

//void wide_data_delete_all(struct s_wide_data_array *)
//{
//    mangled_ppc("?wide_data_delete_all@@YAXPAUs_wide_data_array@@@Z");
//};

//struct s_wide_data_array * wide_data_new(char const *, long, long, long, long, class c_allocation_interface *, char const *, long)
//{
//    mangled_ppc("?wide_data_new@@YAPAUs_wide_data_array@@PBDJJJJPAVc_allocation_interface@@0J@Z");
//};

//void get_partition_set_name(char const *, class c_static_string<32> *)
//{
//    mangled_ppc("?get_partition_set_name@@YAXPBDPAV?$c_static_string@$0CA@@@@Z");
//};

//void wide_data_dispose(struct s_wide_data_array *, char const *, long)
//{
//    mangled_ppc("?wide_data_dispose@@YAXPAUs_wide_data_array@@PBDJ@Z");
//};

//void * wide_datum_get(struct s_wide_data_array *, __int64)
//{
//    mangled_ppc("?wide_datum_get@@YAPAXPAUs_wide_data_array@@_J@Z");
//};

//void * wide_datum_try_and_get(struct s_wide_data_array const *, __int64)
//{
//    mangled_ppc("?wide_datum_try_and_get@@YAPAXPBUs_wide_data_array@@_J@Z");
//};

//__int64 wide_datum_new(struct s_wide_data_array *)
//{
//    mangled_ppc("?wide_datum_new@@YA_JPAUs_wide_data_array@@@Z");
//};

//void wide_datum_delete(struct s_wide_data_array *, __int64)
//{
//    mangled_ppc("?wide_datum_delete@@YAXPAUs_wide_data_array@@_J@Z");
//};

//__int64 wide_data_first_index(struct s_wide_data_array const *)
//{
//    mangled_ppc("?wide_data_first_index@@YA_JPBUs_wide_data_array@@@Z");
//};

//__int64 wide_data_next_index(struct s_wide_data_array const *, __int64)
//{
//    mangled_ppc("?wide_data_next_index@@YA_JPBUs_wide_data_array@@_J@Z");
//};

//public: c_wide_data_partition_persister::c_wide_data_partition_persister(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_persister *)
//{
//    mangled_ppc("??0c_wide_data_partition_persister@@QAA@PAUs_wide_data_array@@PAUbyte_swap_definition@@PAVc_datum_persister@@@Z");
//};

//public: virtual bool c_wide_data_partition_persister::write_datum_for_save(class c_basic_buffer<void const> const &, class c_persist_stream *)
//{
//    mangled_ppc("?write_datum_for_save@c_wide_data_partition_persister@@UAA_NABV?$c_basic_buffer@$$CBX@@PAVc_persist_stream@@@Z");
//};

//public: c_wide_data_partition_restorer::c_wide_data_partition_restorer(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_restorer *)
//{
//    mangled_ppc("??0c_wide_data_partition_restorer@@QAA@PAUs_wide_data_array@@PAUbyte_swap_definition@@PAVc_datum_restorer@@@Z");
//};

//public: virtual bool c_wide_data_partition_restorer::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *)
//{
//    mangled_ppc("?restore_datum_from_load@c_wide_data_partition_restorer@@UAA_NAAV?$c_basic_buffer@X@@PAVc_persist_stream@@@Z");
//};

//long wide_data_persist_compact_size(struct s_wide_data_array const *)
//{
//    mangled_ppc("?wide_data_persist_compact_size@@YAJPBUs_wide_data_array@@@Z");
//};

//bool wide_data_persist(struct s_wide_data_array const *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_persister *)
//{
//    mangled_ppc("?wide_data_persist@@YA_NPBUs_wide_data_array@@PAVc_persist_stream@@PAUbyte_swap_definition@@PAVc_datum_persister@@@Z");
//};

//public: s_wide_data_array_header::s_wide_data_array_header(void)
//{
//    mangled_ppc("??0s_wide_data_array_header@@QAA@XZ");
//};

//bool wide_data_restore(struct s_wide_data_array *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *)
//{
//    mangled_ppc("?wide_data_restore@@YA_NPAUs_wide_data_array@@PAVc_persist_stream@@PAUbyte_swap_definition@@PAVc_datum_restorer@@@Z");
//};

//public: c_wide_data_partition_recreater::c_wide_data_partition_recreater(struct s_wide_data_array *, struct byte_swap_definition *, class c_datum_restorer *)
//{
//    mangled_ppc("??0c_wide_data_partition_recreater@@QAA@PAUs_wide_data_array@@PAUbyte_swap_definition@@PAVc_datum_restorer@@@Z");
//};

//public: virtual bool c_wide_data_partition_recreater::restore_datum_from_load(class c_basic_buffer<void> &, class c_persist_stream *)
//{
//    mangled_ppc("?restore_datum_from_load@c_wide_data_partition_recreater@@UAA_NAAV?$c_basic_buffer@X@@PAVc_persist_stream@@@Z");
//};

//bool wide_data_recreate_from_stream(struct s_wide_data_array **, char const *, long, long, long, long, class c_allocation_interface *, class c_persist_stream *, struct byte_swap_definition *, class c_datum_restorer *)
//{
//    mangled_ppc("?wide_data_recreate_from_stream@@YA_NPAPAUs_wide_data_array@@PBDJJJJPAVc_allocation_interface@@PAVc_persist_stream@@PAUbyte_swap_definition@@PAVc_datum_restorer@@@Z");
//};

//public: struct s_data_array * c_smart_data_array<struct s_wide_data_partition>::operator struct s_data_array *(void) const
//{
//    mangled_ppc("??B?$c_smart_data_array@Us_wide_data_partition@@@@QBAPAUs_data_array@@XZ");
//};

//public: struct s_data_array * c_smart_data_array<struct s_wide_data_partition>::operator->(void)
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_wide_data_partition@@@@QAAPAUs_data_array@@XZ");
//};

//public: struct s_data_array const * c_smart_data_array<struct s_wide_data_partition>::operator->(void) const
//{
//    mangled_ppc("??C?$c_smart_data_array@Us_wide_data_partition@@@@QBAPBUs_data_array@@XZ");
//};

//public: class c_smart_data_array<struct s_wide_data_partition> & c_smart_data_array<struct s_wide_data_partition>::operator=(struct s_data_array *)
//{
//    mangled_ppc("??4?$c_smart_data_array@Us_wide_data_partition@@@@QAAAAV0@PAUs_data_array@@@Z");
//};

//public: void c_data_iterator<struct s_wide_data_partition>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_wide_data_partition@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_wide_data_partition>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_wide_data_partition@@@@QAA_NXZ");
//};

//public: struct s_wide_data_partition * c_data_iterator<struct s_wide_data_partition>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_wide_data_partition@@@@QBAPAUs_wide_data_partition@@XZ");
//};

//public: char const * s_static_string<32>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0CA@@@QAAPBDPBD@Z");
//};

//public: struct s_wide_data_partition const * c_basic_buffer<void const>::c_basic_buffer_checked_caster_const::operatorcast<struct s_wide_data_partition>(void)
//{
//    mangled_ppc("??$?BUs_wide_data_partition@@@c_basic_buffer_checked_caster_const@?$c_basic_buffer@$$CBX@@QAAPBUs_wide_data_partition@@XZ");
//};

//public: struct s_wide_data_partition * c_basic_buffer<void>::c_basic_buffer_checked_caster::operatorcast<struct s_wide_data_partition>(void)
//{
//    mangled_ppc("??$?BUs_wide_data_partition@@@c_basic_buffer_checked_caster@?$c_basic_buffer@X@@QAAPAUs_wide_data_partition@@XZ");
//};

//public: bool c_persist_stream::write_typed<struct s_wide_data_array_header>(struct s_wide_data_array_header *, long)
//{
//    mangled_ppc("??$write_typed@Us_wide_data_array_header@@@c_persist_stream@@QAA_NPAUs_wide_data_array_header@@J@Z");
//};

//public: bool c_persist_stream::read_typed<struct s_wide_data_array_header>(struct s_wide_data_array_header *, long)
//{
//    mangled_ppc("??$read_typed@Us_wide_data_array_header@@@c_persist_stream@@QAA_NPAUs_wide_data_array_header@@J@Z");
//};

//public: struct s_wide_data_partition const * c_basic_buffer<void const>::get_as_type<struct s_wide_data_partition const>(void) const
//{
//    mangled_ppc("??$get_as_type@$$CBUs_wide_data_partition@@@?$c_basic_buffer@$$CBX@@QBAPBUs_wide_data_partition@@XZ");
//};

//public: struct s_wide_data_partition * c_basic_buffer<void>::get_as_type<struct s_wide_data_partition>(void)
//{
//    mangled_ppc("??$get_as_type@Us_wide_data_partition@@@?$c_basic_buffer@X@@QAAPAUs_wide_data_partition@@XZ");
//};

//public: struct s_wide_data_partition const * c_basic_buffer<void const>::get_as_type_from_offset<struct s_wide_data_partition const>(unsigned long) const
//{
//    mangled_ppc("??$get_as_type_from_offset@$$CBUs_wide_data_partition@@@?$c_basic_buffer@$$CBX@@QBAPBUs_wide_data_partition@@K@Z");
//};

//public: struct s_wide_data_partition * c_basic_buffer<void>::get_as_type_from_offset<struct s_wide_data_partition>(unsigned long)
//{
//    mangled_ppc("??$get_as_type_from_offset@Us_wide_data_partition@@@?$c_basic_buffer@X@@QAAPAUs_wide_data_partition@@K@Z");
//};

//public: static struct byte_swap_definition * c_byte_swap_traits<struct s_wide_data_array_header>::get_bs_definition(void)
//{
//    mangled_ppc("?get_bs_definition@?$c_byte_swap_traits@Us_wide_data_array_header@@@@SAPAUbyte_swap_definition@@XZ");
//};

