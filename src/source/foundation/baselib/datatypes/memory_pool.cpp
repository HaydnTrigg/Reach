/* ---------- headers */

#include "foundation\baselib\datatypes\memory_pool.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// ?memory_pool_new@@YAPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@0J@Z;
// void memory_pool_dispose(struct s_memory_pool *, char const *, long);
// ?memory_pool_inplace_new@@YAPAUs_memory_pool@@PBDPAXIQ6AXJK@Z@Z;
// void memory_pool_inplace_dispose(struct s_memory_pool *);
// unsigned int memory_pool_allocation_size(unsigned int);
// void memory_pool_clear(struct s_memory_pool *);
// void memory_pool_compact(struct s_memory_pool *);
// struct s_memory_pool_block_info * memory_pool_get_block(struct s_memory_pool const *, unsigned long);
// void * memory_pool_address_from_handle(struct s_memory_pool const *, unsigned long);
// void memory_pool_compact_incrementally(struct s_memory_pool *, long);
// unsigned long memory_pool_handle_from_address(struct s_memory_pool const *, void const *);
// struct s_memory_pool_block_info * memory_pool_compact_block(struct s_memory_pool *, struct s_memory_pool_block_info *);
// void * memory_pool_get_base_address(struct s_memory_pool const *);
// void memory_pool_verify(struct s_memory_pool const *);
// struct s_memory_pool_block_info const * memory_pool_get_block_const(struct s_memory_pool const *, unsigned long);
// ?memory_pool_set_relocation_function@@YAXPAUs_memory_pool@@Q6AXJK@Z@Z;
// void memory_pool_set_reference_tracking(struct s_memory_pool *, bool);
// void memory_pool_set_allow_block_pointers(struct s_memory_pool *, bool);
// void memory_pool_set_allocation_from_anywhere_in_pool(struct s_memory_pool *, bool);
// void memory_pool_set_allocation_from_anywhere_in_pool_on_failure(struct s_memory_pool *, bool);
// void memory_pool_set_allow_compact_on_allocate(struct s_memory_pool *, bool);
// void memory_pool_set_verification(struct s_memory_pool *, bool);
// long memory_pool_get_number_of_blocks(struct s_memory_pool const *);
// unsigned int memory_pool_get_free_size(struct s_memory_pool const *);
// unsigned int memory_pool_get_used_size(struct s_memory_pool const *);
// void const * memory_pool_block_get_end_of_block_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *);
// unsigned int memory_pool_get_contiguous_free_size(struct s_memory_pool const *);
// void memory_pool_get_bounds(struct s_memory_pool const *, void **, void **);
// void * memory_pool_get_end_address(struct s_memory_pool const *);
// unsigned long memory_pool_block_allocate_handle_tracked(struct s_memory_pool *, long, unsigned int, char const *, long);
// unsigned long memory_pool_payload_handle_from_block_handle(unsigned long);
// unsigned long memory_pool_block_reallocate_handle_tracked(struct s_memory_pool *, unsigned long, unsigned int, char const *, long);
// unsigned long memory_pool_block_handle_from_payload_handle(unsigned long);
// void memory_pool_block_free_handle(struct s_memory_pool *, unsigned long);
// bool memory_pool_block_verify_handle(struct s_memory_pool const *, unsigned long);
// void * memory_pool_handle_get_address(struct s_memory_pool const *, unsigned long);
// unsigned int memory_pool_get_block_handle_size(struct s_memory_pool const *, unsigned long);
// bool memory_pool_block_allocate_tracked(struct s_memory_pool *, void **, unsigned int, char const *, long);
// bool memory_pool_block_reallocate_tracked(struct s_memory_pool *, void **, unsigned int, char const *, long);
// void memory_pool_block_free(struct s_memory_pool *, void **);
// bool memory_pool_block_verify(struct s_memory_pool *, void **);
// unsigned int memory_pool_get_block_size(struct s_memory_pool const *, void **);
// void memory_pool_dump_to_file(struct s_memory_pool const *, char const *);
// void memory_pool_dump_to_debugger(struct s_memory_pool const *, char const *);
// void memory_pool_dump(struct s_memory_pool const *, char const *, class c_simple_file *);
// void const * memory_pool_payload_from_block_const(struct s_memory_pool_block_info const *);
// ?memory_pool_initialize@@YAXPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@@Z;
// unsigned int memory_pool_block_compute_actual_size(struct s_memory_pool const *, unsigned int);
// unsigned int memory_pool_overhead_size(struct s_memory_pool const *);
// unsigned int memory_pool_compute_available_inplace_size(unsigned int);
// struct s_memory_pool_block_info * memory_pool_block_new(struct s_memory_pool *, unsigned int, char const *, long);
// struct s_memory_pool_block_info * memory_pool_block_new_from_end_of_pool(struct s_memory_pool *, unsigned int, char const *, long);
// void * memory_pool_block_get_end_of_block(struct s_memory_pool const *, struct s_memory_pool_block_info *);
// struct s_memory_pool_block_info * memory_pool_block_new_from_front_of_pool(struct s_memory_pool *, unsigned int, char const *, long);
// struct s_memory_pool_block_info * memory_pool_block_new_from_in_between_blocks(struct s_memory_pool *, unsigned int, char const *, long);
// struct s_memory_pool_block_info * memory_pool_block_initialize(struct s_memory_pool *, void *, unsigned int, char const *, long, struct s_memory_pool_block_info *, struct s_memory_pool_block_info *);
// void * memory_pool_payload_from_block(struct s_memory_pool_block_info *);
// bool memory_pool_block_valid(struct s_memory_pool const *, struct s_memory_pool_block_info const *);
// void memory_block_notify_reference(struct s_memory_pool const *, struct s_memory_pool_block_info *);
// struct s_memory_pool_block_info * memory_pool_block_base_get_block(struct s_memory_pool const *, void *);
// void * memory_pool_block_get_base(struct s_memory_pool const *, struct s_memory_pool_block_info *);
// void const * memory_pool_block_get_base_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *);
// struct s_memory_pool_block_header * memory_pool_block_get_header(struct s_memory_pool const *, struct s_memory_pool_block_info *);
// struct s_memory_pool_block_header const * memory_pool_block_get_header_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *);
// struct s_memory_pool_block_info * memory_pool_payload_get_block(struct s_memory_pool *, unsigned long);
// struct s_memory_pool_block_info const * memory_pool_payload_get_block_const(struct s_memory_pool const *, unsigned long);
// public: bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::test(enum e_memory_pool_flags) const;
// public: void s_flags<enum e_memory_pool_flags, unsigned long, 8>::set(enum e_memory_pool_flags, bool);
// public: static bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::valid_bit(enum e_memory_pool_flags);
// public: bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::valid(void) const;
// private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::flag_size_type(enum e_memory_pool_flags);
// private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_memory_pool_flags);

//?memory_pool_new@@YAPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@0J@Z
//{
//    mangled_ppc("?memory_pool_new@@YAPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@0J@Z");
//};

//void memory_pool_dispose(struct s_memory_pool *, char const *, long)
//{
//    mangled_ppc("?memory_pool_dispose@@YAXPAUs_memory_pool@@PBDJ@Z");
//};

//?memory_pool_inplace_new@@YAPAUs_memory_pool@@PBDPAXIQ6AXJK@Z@Z
//{
//    mangled_ppc("?memory_pool_inplace_new@@YAPAUs_memory_pool@@PBDPAXIQ6AXJK@Z@Z");
//};

//void memory_pool_inplace_dispose(struct s_memory_pool *)
//{
//    mangled_ppc("?memory_pool_inplace_dispose@@YAXPAUs_memory_pool@@@Z");
//};

//unsigned int memory_pool_allocation_size(unsigned int)
//{
//    mangled_ppc("?memory_pool_allocation_size@@YAII@Z");
//};

//void memory_pool_clear(struct s_memory_pool *)
//{
//    mangled_ppc("?memory_pool_clear@@YAXPAUs_memory_pool@@@Z");
//};

//void memory_pool_compact(struct s_memory_pool *)
//{
//    mangled_ppc("?memory_pool_compact@@YAXPAUs_memory_pool@@@Z");
//};

//struct s_memory_pool_block_info * memory_pool_get_block(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_get_block@@YAPAUs_memory_pool_block_info@@PBUs_memory_pool@@K@Z");
//};

//void * memory_pool_address_from_handle(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_address_from_handle@@YAPAXPBUs_memory_pool@@K@Z");
//};

//void memory_pool_compact_incrementally(struct s_memory_pool *, long)
//{
//    mangled_ppc("?memory_pool_compact_incrementally@@YAXPAUs_memory_pool@@J@Z");
//};

//unsigned long memory_pool_handle_from_address(struct s_memory_pool const *, void const *)
//{
//    mangled_ppc("?memory_pool_handle_from_address@@YAKPBUs_memory_pool@@PBX@Z");
//};

//struct s_memory_pool_block_info * memory_pool_compact_block(struct s_memory_pool *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_compact_block@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@PAU1@@Z");
//};

//void * memory_pool_get_base_address(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_base_address@@YAPAXPBUs_memory_pool@@@Z");
//};

//void memory_pool_verify(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_verify@@YAXPBUs_memory_pool@@@Z");
//};

//struct s_memory_pool_block_info const * memory_pool_get_block_const(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_get_block_const@@YAPBUs_memory_pool_block_info@@PBUs_memory_pool@@K@Z");
//};

//?memory_pool_set_relocation_function@@YAXPAUs_memory_pool@@Q6AXJK@Z@Z
//{
//    mangled_ppc("?memory_pool_set_relocation_function@@YAXPAUs_memory_pool@@Q6AXJK@Z@Z");
//};

//void memory_pool_set_reference_tracking(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_reference_tracking@@YAXPAUs_memory_pool@@_N@Z");
//};

//void memory_pool_set_allow_block_pointers(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_allow_block_pointers@@YAXPAUs_memory_pool@@_N@Z");
//};

//void memory_pool_set_allocation_from_anywhere_in_pool(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_allocation_from_anywhere_in_pool@@YAXPAUs_memory_pool@@_N@Z");
//};

//void memory_pool_set_allocation_from_anywhere_in_pool_on_failure(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_allocation_from_anywhere_in_pool_on_failure@@YAXPAUs_memory_pool@@_N@Z");
//};

//void memory_pool_set_allow_compact_on_allocate(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_allow_compact_on_allocate@@YAXPAUs_memory_pool@@_N@Z");
//};

//void memory_pool_set_verification(struct s_memory_pool *, bool)
//{
//    mangled_ppc("?memory_pool_set_verification@@YAXPAUs_memory_pool@@_N@Z");
//};

//long memory_pool_get_number_of_blocks(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_number_of_blocks@@YAJPBUs_memory_pool@@@Z");
//};

//unsigned int memory_pool_get_free_size(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_free_size@@YAIPBUs_memory_pool@@@Z");
//};

//unsigned int memory_pool_get_used_size(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_used_size@@YAIPBUs_memory_pool@@@Z");
//};

//void const * memory_pool_block_get_end_of_block_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *)
//{
//    mangled_ppc("?memory_pool_block_get_end_of_block_const@@YAPBXPBUs_memory_pool@@PBUs_memory_pool_block_info@@@Z");
//};

//unsigned int memory_pool_get_contiguous_free_size(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_contiguous_free_size@@YAIPBUs_memory_pool@@@Z");
//};

//void memory_pool_get_bounds(struct s_memory_pool const *, void **, void **)
//{
//    mangled_ppc("?memory_pool_get_bounds@@YAXPBUs_memory_pool@@PAPAX1@Z");
//};

//void * memory_pool_get_end_address(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_get_end_address@@YAPAXPBUs_memory_pool@@@Z");
//};

//unsigned long memory_pool_block_allocate_handle_tracked(struct s_memory_pool *, long, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_allocate_handle_tracked@@YAKPAUs_memory_pool@@JIPBDJ@Z");
//};

//unsigned long memory_pool_payload_handle_from_block_handle(unsigned long)
//{
//    mangled_ppc("?memory_pool_payload_handle_from_block_handle@@YAKK@Z");
//};

//unsigned long memory_pool_block_reallocate_handle_tracked(struct s_memory_pool *, unsigned long, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_reallocate_handle_tracked@@YAKPAUs_memory_pool@@KIPBDJ@Z");
//};

//unsigned long memory_pool_block_handle_from_payload_handle(unsigned long)
//{
//    mangled_ppc("?memory_pool_block_handle_from_payload_handle@@YAKK@Z");
//};

//void memory_pool_block_free_handle(struct s_memory_pool *, unsigned long)
//{
//    mangled_ppc("?memory_pool_block_free_handle@@YAXPAUs_memory_pool@@K@Z");
//};

//bool memory_pool_block_verify_handle(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_block_verify_handle@@YA_NPBUs_memory_pool@@K@Z");
//};

//void * memory_pool_handle_get_address(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_handle_get_address@@YAPAXPBUs_memory_pool@@K@Z");
//};

//unsigned int memory_pool_get_block_handle_size(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_get_block_handle_size@@YAIPBUs_memory_pool@@K@Z");
//};

//bool memory_pool_block_allocate_tracked(struct s_memory_pool *, void **, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_allocate_tracked@@YA_NPAUs_memory_pool@@PAPAXIPBDJ@Z");
//};

//bool memory_pool_block_reallocate_tracked(struct s_memory_pool *, void **, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_reallocate_tracked@@YA_NPAUs_memory_pool@@PAPAXIPBDJ@Z");
//};

//void memory_pool_block_free(struct s_memory_pool *, void **)
//{
//    mangled_ppc("?memory_pool_block_free@@YAXPAUs_memory_pool@@PAPAX@Z");
//};

//bool memory_pool_block_verify(struct s_memory_pool *, void **)
//{
//    mangled_ppc("?memory_pool_block_verify@@YA_NPAUs_memory_pool@@PAPAX@Z");
//};

//unsigned int memory_pool_get_block_size(struct s_memory_pool const *, void **)
//{
//    mangled_ppc("?memory_pool_get_block_size@@YAIPBUs_memory_pool@@PAPAX@Z");
//};

//void memory_pool_dump_to_file(struct s_memory_pool const *, char const *)
//{
//    mangled_ppc("?memory_pool_dump_to_file@@YAXPBUs_memory_pool@@PBD@Z");
//};

//void memory_pool_dump_to_debugger(struct s_memory_pool const *, char const *)
//{
//    mangled_ppc("?memory_pool_dump_to_debugger@@YAXPBUs_memory_pool@@PBD@Z");
//};

//void memory_pool_dump(struct s_memory_pool const *, char const *, class c_simple_file *)
//{
//    mangled_ppc("?memory_pool_dump@@YAXPBUs_memory_pool@@PBDPAVc_simple_file@@@Z");
//};

//void const * memory_pool_payload_from_block_const(struct s_memory_pool_block_info const *)
//{
//    mangled_ppc("?memory_pool_payload_from_block_const@@YAPBXPBUs_memory_pool_block_info@@@Z");
//};

//?memory_pool_initialize@@YAXPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@@Z
//{
//    mangled_ppc("?memory_pool_initialize@@YAXPAUs_memory_pool@@PBDIQ6AXJK@ZPAVc_allocation_interface@@@Z");
//};

//unsigned int memory_pool_block_compute_actual_size(struct s_memory_pool const *, unsigned int)
//{
//    mangled_ppc("?memory_pool_block_compute_actual_size@@YAIPBUs_memory_pool@@I@Z");
//};

//unsigned int memory_pool_overhead_size(struct s_memory_pool const *)
//{
//    mangled_ppc("?memory_pool_overhead_size@@YAIPBUs_memory_pool@@@Z");
//};

//unsigned int memory_pool_compute_available_inplace_size(unsigned int)
//{
//    mangled_ppc("?memory_pool_compute_available_inplace_size@@YAII@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_new(struct s_memory_pool *, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_new@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@IPBDJ@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_new_from_end_of_pool(struct s_memory_pool *, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_new_from_end_of_pool@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@IPBDJ@Z");
//};

//void * memory_pool_block_get_end_of_block(struct s_memory_pool const *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_block_get_end_of_block@@YAPAXPBUs_memory_pool@@PAUs_memory_pool_block_info@@@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_new_from_front_of_pool(struct s_memory_pool *, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_new_from_front_of_pool@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@IPBDJ@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_new_from_in_between_blocks(struct s_memory_pool *, unsigned int, char const *, long)
//{
//    mangled_ppc("?memory_pool_block_new_from_in_between_blocks@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@IPBDJ@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_initialize(struct s_memory_pool *, void *, unsigned int, char const *, long, struct s_memory_pool_block_info *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_block_initialize@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@PAXIPBDJPAU1@3@Z");
//};

//void * memory_pool_payload_from_block(struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_payload_from_block@@YAPAXPAUs_memory_pool_block_info@@@Z");
//};

//bool memory_pool_block_valid(struct s_memory_pool const *, struct s_memory_pool_block_info const *)
//{
//    mangled_ppc("?memory_pool_block_valid@@YA_NPBUs_memory_pool@@PBUs_memory_pool_block_info@@@Z");
//};

//void memory_block_notify_reference(struct s_memory_pool const *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_block_notify_reference@@YAXPBUs_memory_pool@@PAUs_memory_pool_block_info@@@Z");
//};

//struct s_memory_pool_block_info * memory_pool_block_base_get_block(struct s_memory_pool const *, void *)
//{
//    mangled_ppc("?memory_pool_block_base_get_block@@YAPAUs_memory_pool_block_info@@PBUs_memory_pool@@PAX@Z");
//};

//void * memory_pool_block_get_base(struct s_memory_pool const *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_block_get_base@@YAPAXPBUs_memory_pool@@PAUs_memory_pool_block_info@@@Z");
//};

//void const * memory_pool_block_get_base_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *)
//{
//    mangled_ppc("?memory_pool_block_get_base_const@@YAPBXPBUs_memory_pool@@PBUs_memory_pool_block_info@@@Z");
//};

//struct s_memory_pool_block_header * memory_pool_block_get_header(struct s_memory_pool const *, struct s_memory_pool_block_info *)
//{
//    mangled_ppc("?memory_pool_block_get_header@@YAPAUs_memory_pool_block_header@@PBUs_memory_pool@@PAUs_memory_pool_block_info@@@Z");
//};

//struct s_memory_pool_block_header const * memory_pool_block_get_header_const(struct s_memory_pool const *, struct s_memory_pool_block_info const *)
//{
//    mangled_ppc("?memory_pool_block_get_header_const@@YAPBUs_memory_pool_block_header@@PBUs_memory_pool@@PBUs_memory_pool_block_info@@@Z");
//};

//struct s_memory_pool_block_info * memory_pool_payload_get_block(struct s_memory_pool *, unsigned long)
//{
//    mangled_ppc("?memory_pool_payload_get_block@@YAPAUs_memory_pool_block_info@@PAUs_memory_pool@@K@Z");
//};

//struct s_memory_pool_block_info const * memory_pool_payload_get_block_const(struct s_memory_pool const *, unsigned long)
//{
//    mangled_ppc("?memory_pool_payload_get_block_const@@YAPBUs_memory_pool_block_info@@PBUs_memory_pool@@K@Z");
//};

//public: bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::test(enum e_memory_pool_flags) const
//{
//    mangled_ppc("?test@?$s_flags@W4e_memory_pool_flags@@K$07@@QBA_NW4e_memory_pool_flags@@@Z");
//};

//public: void s_flags<enum e_memory_pool_flags, unsigned long, 8>::set(enum e_memory_pool_flags, bool)
//{
//    mangled_ppc("?set@?$s_flags@W4e_memory_pool_flags@@K$07@@QAAXW4e_memory_pool_flags@@_N@Z");
//};

//public: static bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::valid_bit(enum e_memory_pool_flags)
//{
//    mangled_ppc("?valid_bit@?$s_flags@W4e_memory_pool_flags@@K$07@@SA_NW4e_memory_pool_flags@@@Z");
//};

//public: bool s_flags<enum e_memory_pool_flags, unsigned long, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$s_flags@W4e_memory_pool_flags@@K$07@@QBA_NXZ");
//};

//private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::flag_size_type(enum e_memory_pool_flags)
//{
//    mangled_ppc("?flag_size_type@?$s_flags@W4e_memory_pool_flags@@K$07@@CAKW4e_memory_pool_flags@@@Z");
//};

//private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$s_flags@W4e_memory_pool_flags@@K$07@@CAKXZ");
//};

//private: static unsigned long s_flags<enum e_memory_pool_flags, unsigned long, 8>::make_N_bit_mask_size_type(enum e_memory_pool_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$s_flags@W4e_memory_pool_flags@@K$07@@CAKW4e_memory_pool_flags@@@Z");
//};

