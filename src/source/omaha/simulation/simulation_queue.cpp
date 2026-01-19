/* ---------- headers */

#include "omaha\simulation\simulation_queue.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: long c_simulation_queue_element::get_size_in_bytes(void) const;
// public: bool c_simulation_queue_element::compare(class c_simulation_queue_element const *) const;
// public: void c_simulation_queue_element::encode(class c_bitstream *) const;
// public: void c_simulation_queue_element::decode_type_and_size(class c_bitstream *);
// public: void c_simulation_queue_element::decode_data(class c_bitstream *);
// public: void c_simulation_queue_element::flag_as_applied(void) const;
// public: void c_simulation_queue::initialize(long);
// public: void c_simulation_queue::transfer_elements(class c_simulation_queue *);
// public: void c_simulation_queue::encode(class c_bitstream *) const;
// public: bool c_simulation_queue::decode(class c_bitstream *, long);
// public: c_simulation_queue_element::c_simulation_queue_element(void);
// public: bool c_simulation_queue::compare(class c_simulation_queue *) const;
// public: void c_simulation_queue::dispose(void);
// public: void c_simulation_queue::clear(void);
// public: void c_simulation_queue::allocate(long, class c_simulation_queue_element **);
// public: void c_simulation_queue::deallocate(class c_simulation_queue_element *);
// public: void c_simulation_queue::enqueue(class c_simulation_queue_element *);
// public: void c_simulation_queue::deque(class c_simulation_queue_element **);
// public: void c_simulation_queue::clear_for_claim_authority(void);
// public: long c_simulation_queue::queued_count(void) const;
// public: long c_simulation_queue::queued_size_in_bytes(void) const;
// public: long c_simulation_queue::queued_encoded_size_in_bytes(void) const;
// public: long c_simulation_queue::queued_new_encoded_size_bytes(long) const;
// public: long c_simulation_queue::allocated_count(void) const;
// public: long c_simulation_queue::allocated_size_in_bytes(void) const;
// public: long c_simulation_queue::allocated_encoded_size_in_bytes(void) const;
// public: long c_simulation_queue::allocated_new_encoded_size_bytes(long) const;
// public: bool c_simulation_queue::contains_element_type(enum e_simulation_queue_element_type) const;
// public: class c_simulation_queue_element * c_simulation_queue::get_first_element(void) const;
// public: class c_simulation_queue_element * c_simulation_queue::get_next_element(class c_simulation_queue_element *) const;
// public: void c_simulation_queue::get_allocation_status(float *, float *) const;
// public: void c_simulation_queue_array::initialize(void);
// public: void c_simulation_queue_array::transfer_elements(class c_simulation_queue *);
// public: void c_simulation_queue_array::encode(class c_bitstream *) const;
// public: bool c_simulation_queue_array::decode(class c_bitstream *);
// public: bool c_simulation_queue_array::compare(class c_simulation_queue_array *) const;
// public: void c_simulation_queue_array::dispose(void);
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element(void) const;
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element(class c_simulation_queue_element const *const *) const;
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element_of_type(enum e_simulation_queue_element_type) const;
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element_of_type(class c_simulation_queue_element const *const *, enum e_simulation_queue_element_type) const;
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element_of_type_and_sort_key0(enum e_simulation_queue_element_type, unsigned char) const;
// public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element_of_type_and_sort_key0(class c_simulation_queue_element const *const *, enum e_simulation_queue_element_type, unsigned char) const;
// public: class c_simulation_queue_element const * c_simulation_queue_array::get_element(class c_simulation_queue_element const *const *) const;
// private: void c_simulation_queue_array::sort(void);
// private: void c_simulation_queue_array::build_offset_table(void);
// public: bool c_simulation_queue_array::must_be_applied_in_order(void) const;
// private: bool c_simulation_queue_array::is_completely_sorted(void) const;
// private: short c_simulation_queue_array::get_element_offset(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, unsigned char) const;
// public: c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>(void);
// public: class s_static_array<short, 256> * s_static_array<class s_static_array<short, 256>, 16>::get_elements(void);
// public: void c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_simulation_queue_element_flags, bool);
// public: c_flags<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_bitstream::write_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> *);
// void qsort_elements_fast<struct c_sorted_simulation_queue_element>(struct c_sorted_simulation_queue_element *, long, void *);
// public: class s_static_array<short, 256> & s_static_array<class s_static_array<short, 256>, 16>::operator[]<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>);
// public: short & s_static_array<short, 256>::operator[]<unsigned char>(unsigned char);
// public: short & s_static_array<short, 256>::operator[]<int>(int);
// public: class s_static_array<short, 256> const & s_static_array<class s_static_array<short, 256>, 16>::operator[]<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>) const;
// public: short const & s_static_array<short, 256>::operator[]<unsigned char>(unsigned char) const;
// public: bool c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: void c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// long required_encoding_bits_for_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>);
// public: static enum e_simulation_queue_element_type c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// void qsort_elements_fast_inlined<struct c_sorted_simulation_queue_element>(struct c_sorted_simulation_queue_element *, long, void *);
// public: static bool c_sorted_simulation_queue_element::compare(unsigned int *, struct c_sorted_simulation_queue_element &, unsigned int *);
// public: static void c_sorted_simulation_queue_element::swap(unsigned int *, struct c_sorted_simulation_queue_element &, unsigned int *, void *);
// public: static bool s_static_array<class s_static_array<short, 256>, 16>::valid<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<short, 256>::valid<unsigned char>(unsigned char);
// public: static bool s_static_array<short, 256>::valid<int>(int);
// private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_queue_element_flags);
// long required_encoding_bits_for_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(void);

//public: long c_simulation_queue_element::get_size_in_bytes(void) const
//{
//    mangled_ppc("?get_size_in_bytes@c_simulation_queue_element@@QBAJXZ");
//};

//public: bool c_simulation_queue_element::compare(class c_simulation_queue_element const *) const
//{
//    mangled_ppc("?compare@c_simulation_queue_element@@QBA_NPBV1@@Z");
//};

//public: void c_simulation_queue_element::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_simulation_queue_element@@QBAXPAVc_bitstream@@@Z");
//};

//public: void c_simulation_queue_element::decode_type_and_size(class c_bitstream *)
//{
//    mangled_ppc("?decode_type_and_size@c_simulation_queue_element@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_simulation_queue_element::decode_data(class c_bitstream *)
//{
//    mangled_ppc("?decode_data@c_simulation_queue_element@@QAAXPAVc_bitstream@@@Z");
//};

//public: void c_simulation_queue_element::flag_as_applied(void) const
//{
//    mangled_ppc("?flag_as_applied@c_simulation_queue_element@@QBAXXZ");
//};

//public: void c_simulation_queue::initialize(long)
//{
//    mangled_ppc("?initialize@c_simulation_queue@@QAAXJ@Z");
//};

//public: void c_simulation_queue::transfer_elements(class c_simulation_queue *)
//{
//    mangled_ppc("?transfer_elements@c_simulation_queue@@QAAXPAV1@@Z");
//};

//public: void c_simulation_queue::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_simulation_queue@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_simulation_queue::decode(class c_bitstream *, long)
//{
//    mangled_ppc("?decode@c_simulation_queue@@QAA_NPAVc_bitstream@@J@Z");
//};

//public: c_simulation_queue_element::c_simulation_queue_element(void)
//{
//    mangled_ppc("??0c_simulation_queue_element@@QAA@XZ");
//};

//public: bool c_simulation_queue::compare(class c_simulation_queue *) const
//{
//    mangled_ppc("?compare@c_simulation_queue@@QBA_NPAV1@@Z");
//};

//public: void c_simulation_queue::dispose(void)
//{
//    mangled_ppc("?dispose@c_simulation_queue@@QAAXXZ");
//};

//public: void c_simulation_queue::clear(void)
//{
//    mangled_ppc("?clear@c_simulation_queue@@QAAXXZ");
//};

//public: void c_simulation_queue::allocate(long, class c_simulation_queue_element **)
//{
//    mangled_ppc("?allocate@c_simulation_queue@@QAAXJPAPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_queue::deallocate(class c_simulation_queue_element *)
//{
//    mangled_ppc("?deallocate@c_simulation_queue@@QAAXPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_queue::enqueue(class c_simulation_queue_element *)
//{
//    mangled_ppc("?enqueue@c_simulation_queue@@QAAXPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_queue::deque(class c_simulation_queue_element **)
//{
//    mangled_ppc("?deque@c_simulation_queue@@QAAXPAPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_queue::clear_for_claim_authority(void)
//{
//    mangled_ppc("?clear_for_claim_authority@c_simulation_queue@@QAAXXZ");
//};

//public: long c_simulation_queue::queued_count(void) const
//{
//    mangled_ppc("?queued_count@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::queued_size_in_bytes(void) const
//{
//    mangled_ppc("?queued_size_in_bytes@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::queued_encoded_size_in_bytes(void) const
//{
//    mangled_ppc("?queued_encoded_size_in_bytes@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::queued_new_encoded_size_bytes(long) const
//{
//    mangled_ppc("?queued_new_encoded_size_bytes@c_simulation_queue@@QBAJJ@Z");
//};

//public: long c_simulation_queue::allocated_count(void) const
//{
//    mangled_ppc("?allocated_count@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::allocated_size_in_bytes(void) const
//{
//    mangled_ppc("?allocated_size_in_bytes@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::allocated_encoded_size_in_bytes(void) const
//{
//    mangled_ppc("?allocated_encoded_size_in_bytes@c_simulation_queue@@QBAJXZ");
//};

//public: long c_simulation_queue::allocated_new_encoded_size_bytes(long) const
//{
//    mangled_ppc("?allocated_new_encoded_size_bytes@c_simulation_queue@@QBAJJ@Z");
//};

//public: bool c_simulation_queue::contains_element_type(enum e_simulation_queue_element_type) const
//{
//    mangled_ppc("?contains_element_type@c_simulation_queue@@QBA_NW4e_simulation_queue_element_type@@@Z");
//};

//public: class c_simulation_queue_element * c_simulation_queue::get_first_element(void) const
//{
//    mangled_ppc("?get_first_element@c_simulation_queue@@QBAPAVc_simulation_queue_element@@XZ");
//};

//public: class c_simulation_queue_element * c_simulation_queue::get_next_element(class c_simulation_queue_element *) const
//{
//    mangled_ppc("?get_next_element@c_simulation_queue@@QBAPAVc_simulation_queue_element@@PAV2@@Z");
//};

//public: void c_simulation_queue::get_allocation_status(float *, float *) const
//{
//    mangled_ppc("?get_allocation_status@c_simulation_queue@@QBAXPAM0@Z");
//};

//public: void c_simulation_queue_array::initialize(void)
//{
//    mangled_ppc("?initialize@c_simulation_queue_array@@QAAXXZ");
//};

//public: void c_simulation_queue_array::transfer_elements(class c_simulation_queue *)
//{
//    mangled_ppc("?transfer_elements@c_simulation_queue_array@@QAAXPAVc_simulation_queue@@@Z");
//};

//public: void c_simulation_queue_array::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_simulation_queue_array@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_simulation_queue_array::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_simulation_queue_array@@QAA_NPAVc_bitstream@@@Z");
//};

//public: bool c_simulation_queue_array::compare(class c_simulation_queue_array *) const
//{
//    mangled_ppc("?compare@c_simulation_queue_array@@QBA_NPAV1@@Z");
//};

//public: void c_simulation_queue_array::dispose(void)
//{
//    mangled_ppc("?dispose@c_simulation_queue_array@@QAAXXZ");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element(void) const
//{
//    mangled_ppc("?get_first_element@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@XZ");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element(class c_simulation_queue_element const *const *) const
//{
//    mangled_ppc("?get_next_element@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@PBQBV2@@Z");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element_of_type(enum e_simulation_queue_element_type) const
//{
//    mangled_ppc("?get_first_element_of_type@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@W4e_simulation_queue_element_type@@@Z");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element_of_type(class c_simulation_queue_element const *const *, enum e_simulation_queue_element_type) const
//{
//    mangled_ppc("?get_next_element_of_type@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@PBQBV2@W4e_simulation_queue_element_type@@@Z");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_first_element_of_type_and_sort_key0(enum e_simulation_queue_element_type, unsigned char) const
//{
//    mangled_ppc("?get_first_element_of_type_and_sort_key0@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@W4e_simulation_queue_element_type@@E@Z");
//};

//public: class c_simulation_queue_element const *const * c_simulation_queue_array::get_next_element_of_type_and_sort_key0(class c_simulation_queue_element const *const *, enum e_simulation_queue_element_type, unsigned char) const
//{
//    mangled_ppc("?get_next_element_of_type_and_sort_key0@c_simulation_queue_array@@QBAPBQBVc_simulation_queue_element@@PBQBV2@W4e_simulation_queue_element_type@@E@Z");
//};

//public: class c_simulation_queue_element const * c_simulation_queue_array::get_element(class c_simulation_queue_element const *const *) const
//{
//    mangled_ppc("?get_element@c_simulation_queue_array@@QBAPBVc_simulation_queue_element@@PBQBV2@@Z");
//};

//private: void c_simulation_queue_array::sort(void)
//{
//    mangled_ppc("?sort@c_simulation_queue_array@@AAAXXZ");
//};

//private: void c_simulation_queue_array::build_offset_table(void)
//{
//    mangled_ppc("?build_offset_table@c_simulation_queue_array@@AAAXXZ");
//};

//public: bool c_simulation_queue_array::must_be_applied_in_order(void) const
//{
//    mangled_ppc("?must_be_applied_in_order@c_simulation_queue_array@@QBA_NXZ");
//};

//private: bool c_simulation_queue_array::is_completely_sorted(void) const
//{
//    mangled_ppc("?is_completely_sorted@c_simulation_queue_array@@ABA_NXZ");
//};

//private: short c_simulation_queue_array::get_element_offset(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, unsigned char) const
//{
//    mangled_ppc("?get_element_offset@c_simulation_queue_array@@ABAFV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@E@Z");
//};

//public: c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class s_static_array<short, 256> * s_static_array<class s_static_array<short, 256>, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@V?$s_static_array@F$0BAA@@@$0BA@@@QAAPAV?$s_static_array@F$0BAA@@@XZ");
//};

//public: void c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_simulation_queue_element_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_simulation_queue_element_flags@@_N@Z");
//};

//public: c_flags<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//void qsort_elements_fast<struct c_sorted_simulation_queue_element>(struct c_sorted_simulation_queue_element *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast@Uc_sorted_simulation_queue_element@@@@YAXPAUc_sorted_simulation_queue_element@@JPAX@Z");
//};

//public: class s_static_array<short, 256> & s_static_array<class s_static_array<short, 256>, 16>::operator[]<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@?$s_static_array@V?$s_static_array@F$0BAA@@@$0BA@@@QAAAAV?$s_static_array@F$0BAA@@@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: short & s_static_array<short, 256>::operator[]<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$?AE@?$s_static_array@F$0BAA@@@QAAAAFE@Z");
//};

//public: short & s_static_array<short, 256>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@F$0BAA@@@QAAAAFH@Z");
//};

//public: class s_static_array<short, 256> const & s_static_array<class s_static_array<short, 256>, 16>::operator[]<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@?$s_static_array@V?$s_static_array@F$0BAA@@@$0BA@@@QBAABV?$s_static_array@F$0BAA@@@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: short const & s_static_array<short, 256>::operator[]<unsigned char>(unsigned char) const
//{
//    mangled_ppc("??$?AE@?$s_static_array@F$0BAA@@@QBAABFE@Z");
//};

//public: bool c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: void c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_simulation_queue_element_type c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@SA?AW4e_simulation_queue_element_type@@H@Z");
//};

//public: static char c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@SADK@Z");
//};

//void qsort_elements_fast_inlined<struct c_sorted_simulation_queue_element>(struct c_sorted_simulation_queue_element *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast_inlined@Uc_sorted_simulation_queue_element@@@@YAXPAUc_sorted_simulation_queue_element@@JPAX@Z");
//};

//public: static bool c_sorted_simulation_queue_element::compare(unsigned int *, struct c_sorted_simulation_queue_element &, unsigned int *)
//{
//    mangled_ppc("?compare@c_sorted_simulation_queue_element@@SA_NPIAU1@0@Z");
//};

//public: static void c_sorted_simulation_queue_element::swap(unsigned int *, struct c_sorted_simulation_queue_element &, unsigned int *, void *)
//{
//    mangled_ppc("?swap@c_sorted_simulation_queue_element@@SAXPIAU1@0PAX@Z");
//};

//public: static bool s_static_array<class s_static_array<short, 256>, 16>::valid<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@?$s_static_array@V?$s_static_array@F$0BAA@@@$0BA@@@SA_NV?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<short, 256>::valid<unsigned char>(unsigned char)
//{
//    mangled_ppc("??$valid@E@?$s_static_array@F$0BAA@@@SA_NE@Z");
//};

//public: static bool s_static_array<short, 256>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@F$0BAA@@@SA_NH@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_queue_element_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_simulation_queue_element_flags@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver> >(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@@YAJXZ");
//};

