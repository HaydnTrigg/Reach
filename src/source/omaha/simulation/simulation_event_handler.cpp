/* ---------- headers */

#include "omaha\simulation\simulation_event_handler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_simulation_event_handler::initialize(class c_simulation_world *, class c_replication_event_manager *, class c_simulation_type_collection *, class c_simulation_entity_database *);
// public: void c_replication_event_manager::register_client(class c_simulation_event_handler *);
// public: static void c_simulation_event_handler::reset(void);
// public: void c_simulation_event_handler::destroy(void);
// public: void c_replication_event_manager::deregister_client(class c_simulation_event_handler const *);
// public: char const * c_simulation_event_handler::get_event_type_name(enum e_simulation_event_type) const;
// public: class c_simulation_event_definition * c_simulation_event_handler::get_event_definition(enum e_simulation_event_type) const;
// public: enum e_network_read_result c_simulation_event_handler::read_incoming_event(long, long const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *);
// public: long c_simulation_type_collection::get_event_definition_count(void) const;
// public: void c_simulation_event_handler::process_incoming_event(long, long const *, long, struct s_replication_allocation_block *);
// public: void c_simulation_event_handler::write_outgoing_event(long, long, void const *, class c_bitstream *, struct s_event_payload_encode_parameters const *);
// public: bool c_simulation_event_handler::calculate_requirements(class c_replication_outgoing_event const *, void const *, float *, float *);
// public: long c_replication_outgoing_event::get_entity_reference(long) const;
// public: long c_replication_outgoing_event::get_payload_size(void) const;
// public: void c_simulation_event_handler::write_description_to_string(class c_replication_outgoing_event const *, void const *, long, char *);
// public: enum e_replication_entity_encoding_type c_simulation_event_handler::get_event_entity_reference_encoding_type(long, long) const;
// public: void c_simulation_event_handler::notify_outgoing_event_retired(class c_replication_outgoing_event const *);
// public: void c_simulation_event_handler::send_event(enum e_simulation_event_type, long, long const *, unsigned long, long, void const *, long) const;
// public: bool c_simulation_view::established(void) const;
// public: long c_simulation_view::get_machine_index(void) const;
// public: void c_replication_outgoing_event::set_replication_family_index(long);
// public: void c_replication_outgoing_event::set_type(long);
// public: void c_replication_outgoing_event::set_entity_reference(long, long);
// public: bool c_replication_outgoing_event::set_payload(unsigned char const *, long);
// public: void c_replication_outgoing_event::set_cancel_timer(long);

//public: void c_simulation_event_handler::initialize(class c_simulation_world *, class c_replication_event_manager *, class c_simulation_type_collection *, class c_simulation_entity_database *)
//{
//    mangled_ppc("?initialize@c_simulation_event_handler@@QAAXPAVc_simulation_world@@PAVc_replication_event_manager@@PAVc_simulation_type_collection@@PAVc_simulation_entity_database@@@Z");
//};

//public: void c_replication_event_manager::register_client(class c_simulation_event_handler *)
//{
//    mangled_ppc("?register_client@c_replication_event_manager@@QAAXPAVc_simulation_event_handler@@@Z");
//};

//public: static void c_simulation_event_handler::reset(void)
//{
//    mangled_ppc("?reset@c_simulation_event_handler@@SAXXZ");
//};

//public: void c_simulation_event_handler::destroy(void)
//{
//    mangled_ppc("?destroy@c_simulation_event_handler@@QAAXXZ");
//};

//public: void c_replication_event_manager::deregister_client(class c_simulation_event_handler const *)
//{
//    mangled_ppc("?deregister_client@c_replication_event_manager@@QAAXPBVc_simulation_event_handler@@@Z");
//};

//public: char const * c_simulation_event_handler::get_event_type_name(enum e_simulation_event_type) const
//{
//    mangled_ppc("?get_event_type_name@c_simulation_event_handler@@QBAPBDW4e_simulation_event_type@@@Z");
//};

//public: class c_simulation_event_definition * c_simulation_event_handler::get_event_definition(enum e_simulation_event_type) const
//{
//    mangled_ppc("?get_event_definition@c_simulation_event_handler@@QBAPAVc_simulation_event_definition@@W4e_simulation_event_type@@@Z");
//};

//public: enum e_network_read_result c_simulation_event_handler::read_incoming_event(long, long const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *)
//{
//    mangled_ppc("?read_incoming_event@c_simulation_event_handler@@QAA?AW4e_network_read_result@@JPBJJPAJPAUs_replication_allocation_block@@PAVc_bitstream@@@Z");
//};

//public: long c_simulation_type_collection::get_event_definition_count(void) const
//{
//    mangled_ppc("?get_event_definition_count@c_simulation_type_collection@@QBAJXZ");
//};

//public: void c_simulation_event_handler::process_incoming_event(long, long const *, long, struct s_replication_allocation_block *)
//{
//    mangled_ppc("?process_incoming_event@c_simulation_event_handler@@QAAXJPBJJPAUs_replication_allocation_block@@@Z");
//};

//public: void c_simulation_event_handler::write_outgoing_event(long, long, void const *, class c_bitstream *, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?write_outgoing_event@c_simulation_event_handler@@QAAXJJPBXPAVc_bitstream@@PBUs_event_payload_encode_parameters@@@Z");
//};

//public: bool c_simulation_event_handler::calculate_requirements(class c_replication_outgoing_event const *, void const *, float *, float *)
//{
//    mangled_ppc("?calculate_requirements@c_simulation_event_handler@@QAA_NPBVc_replication_outgoing_event@@PBXPAM2@Z");
//};

//public: long c_replication_outgoing_event::get_entity_reference(long) const
//{
//    mangled_ppc("?get_entity_reference@c_replication_outgoing_event@@QBAJJ@Z");
//};

//public: long c_replication_outgoing_event::get_payload_size(void) const
//{
//    mangled_ppc("?get_payload_size@c_replication_outgoing_event@@QBAJXZ");
//};

//public: void c_simulation_event_handler::write_description_to_string(class c_replication_outgoing_event const *, void const *, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_simulation_event_handler@@QAAXPBVc_replication_outgoing_event@@PBXJPAD@Z");
//};

//public: enum e_replication_entity_encoding_type c_simulation_event_handler::get_event_entity_reference_encoding_type(long, long) const
//{
//    mangled_ppc("?get_event_entity_reference_encoding_type@c_simulation_event_handler@@QBA?AW4e_replication_entity_encoding_type@@JJ@Z");
//};

//public: void c_simulation_event_handler::notify_outgoing_event_retired(class c_replication_outgoing_event const *)
//{
//    mangled_ppc("?notify_outgoing_event_retired@c_simulation_event_handler@@QAAXPBVc_replication_outgoing_event@@@Z");
//};

//public: void c_simulation_event_handler::send_event(enum e_simulation_event_type, long, long const *, unsigned long, long, void const *, long) const
//{
//    mangled_ppc("?send_event@c_simulation_event_handler@@QBAXW4e_simulation_event_type@@JPBJKJPBXJ@Z");
//};

//public: bool c_simulation_view::established(void) const
//{
//    mangled_ppc("?established@c_simulation_view@@QBA_NXZ");
//};

//public: long c_simulation_view::get_machine_index(void) const
//{
//    mangled_ppc("?get_machine_index@c_simulation_view@@QBAJXZ");
//};

//public: void c_replication_outgoing_event::set_replication_family_index(long)
//{
//    mangled_ppc("?set_replication_family_index@c_replication_outgoing_event@@QAAXJ@Z");
//};

//public: void c_replication_outgoing_event::set_type(long)
//{
//    mangled_ppc("?set_type@c_replication_outgoing_event@@QAAXJ@Z");
//};

//public: void c_replication_outgoing_event::set_entity_reference(long, long)
//{
//    mangled_ppc("?set_entity_reference@c_replication_outgoing_event@@QAAXJJ@Z");
//};

//public: bool c_replication_outgoing_event::set_payload(unsigned char const *, long)
//{
//    mangled_ppc("?set_payload@c_replication_outgoing_event@@QAA_NPBEJ@Z");
//};

//public: void c_replication_outgoing_event::set_cancel_timer(long)
//{
//    mangled_ppc("?set_cancel_timer@c_replication_outgoing_event@@QAAXJ@Z");
//};

