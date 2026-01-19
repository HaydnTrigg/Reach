/* ---------- headers */

#include "omaha\networking\delivery\network_link.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_network_drop_fraction_incoming; // "?g_network_drop_fraction_incoming@@3MA"

// public: bool c_network_link::initialize_link(void);
// private: static bool c_network_link::create_endpoint(enum e_transport_type, long, bool, struct transport_endpoint **);
// public: void c_network_link::attach_out_of_band(class c_network_out_of_band_consumer *);
// public: void c_network_link::destroy_link(void);
// public: bool c_network_link::create_endpoints(void);
// public: void c_network_link::destroy_endpoints(void);
// public: static bool c_network_link::physical_link_available(void);
// public: static bool c_network_link::packet_has_voice(long);
// public: static char const * c_network_link::get_packet_mode_string(long);
// public: void c_network_link::get_link_status(unsigned __int64*, float *, float *, unsigned __int64*, float *, float *, float *, float *);
// public: unsigned long c_network_link::generate_channel_identifier(void);
// public: static class c_network_channel * c_network_link::get_associated_channel(struct transport_address const *);
// public: bool c_network_channel::is_remote_address_valid_for_channel(struct transport_address const *) const;
// public: void c_network_link::process_incoming_packets(void);
// public: void c_network_link::process_all_channels(void);
// public: static bool c_network_link::adjust_packet_size(bool, long, long *);
// public: void c_network_link::send_broadcast(class c_bitstream const *, long *);
// public: void c_network_link::send_out_of_band(class c_bitstream const *, struct transport_address const *, long *);
// public: void c_network_link::send_channel(class c_bitstream const *, long, unsigned char const *, struct transport_address const *, long *);
// private: static void c_network_link::initialize_packet(struct c_network_link::s_link_packet *);
// private: bool c_network_link::read_packet_internal(struct c_network_link::s_link_packet *);
// private: void c_network_link::send_packet_internal(struct c_network_link::s_link_packet const *);
// private: void c_network_link::process_packet_internal(struct c_network_link::s_link_packet const *);
// void network_process_voice_data(unsigned char *, long);
// private: void c_network_link::encode_packet(struct c_network_link::s_link_packet const *, long *, unsigned char *, long) const;
// private: bool c_network_link::decode_packet(long, unsigned char const *, struct c_network_link::s_link_packet *) const;
// private: long c_network_link::compute_size_on_wire(struct c_network_link::s_link_packet const *) const;
// private: bool c_network_link::read_data_immediate(long, struct transport_address *, long *, unsigned long *, unsigned char *, long);
// private: void c_network_link::send_data_immediate(long, struct transport_address const *, long, void const *);

//public: bool c_network_link::initialize_link(void)
//{
//    mangled_ppc("?initialize_link@c_network_link@@QAA_NXZ");
//};

//private: static bool c_network_link::create_endpoint(enum e_transport_type, long, bool, struct transport_endpoint **)
//{
//    mangled_ppc("?create_endpoint@c_network_link@@CA_NW4e_transport_type@@J_NPAPAUtransport_endpoint@@@Z");
//};

//public: void c_network_link::attach_out_of_band(class c_network_out_of_band_consumer *)
//{
//    mangled_ppc("?attach_out_of_band@c_network_link@@QAAXPAVc_network_out_of_band_consumer@@@Z");
//};

//public: void c_network_link::destroy_link(void)
//{
//    mangled_ppc("?destroy_link@c_network_link@@QAAXXZ");
//};

//public: bool c_network_link::create_endpoints(void)
//{
//    mangled_ppc("?create_endpoints@c_network_link@@QAA_NXZ");
//};

//public: void c_network_link::destroy_endpoints(void)
//{
//    mangled_ppc("?destroy_endpoints@c_network_link@@QAAXXZ");
//};

//public: static bool c_network_link::physical_link_available(void)
//{
//    mangled_ppc("?physical_link_available@c_network_link@@SA_NXZ");
//};

//public: static bool c_network_link::packet_has_voice(long)
//{
//    mangled_ppc("?packet_has_voice@c_network_link@@SA_NJ@Z");
//};

//public: static char const * c_network_link::get_packet_mode_string(long)
//{
//    mangled_ppc("?get_packet_mode_string@c_network_link@@SAPBDJ@Z");
//};

//public: void c_network_link::get_link_status(unsigned __int64*, float *, float *, unsigned __int64*, float *, float *, float *, float *)
//{
//    mangled_ppc("?get_link_status@c_network_link@@QAAXPA_KPAM101111@Z");
//};

//public: unsigned long c_network_link::generate_channel_identifier(void)
//{
//    mangled_ppc("?generate_channel_identifier@c_network_link@@QAAKXZ");
//};

//public: static class c_network_channel * c_network_link::get_associated_channel(struct transport_address const *)
//{
//    mangled_ppc("?get_associated_channel@c_network_link@@SAPAVc_network_channel@@PBUtransport_address@@@Z");
//};

//public: bool c_network_channel::is_remote_address_valid_for_channel(struct transport_address const *) const
//{
//    mangled_ppc("?is_remote_address_valid_for_channel@c_network_channel@@QBA_NPBUtransport_address@@@Z");
//};

//public: void c_network_link::process_incoming_packets(void)
//{
//    mangled_ppc("?process_incoming_packets@c_network_link@@QAAXXZ");
//};

//public: void c_network_link::process_all_channels(void)
//{
//    mangled_ppc("?process_all_channels@c_network_link@@QAAXXZ");
//};

//public: static bool c_network_link::adjust_packet_size(bool, long, long *)
//{
//    mangled_ppc("?adjust_packet_size@c_network_link@@SA_N_NJPAJ@Z");
//};

//public: void c_network_link::send_broadcast(class c_bitstream const *, long *)
//{
//    mangled_ppc("?send_broadcast@c_network_link@@QAAXPBVc_bitstream@@PAJ@Z");
//};

//public: void c_network_link::send_out_of_band(class c_bitstream const *, struct transport_address const *, long *)
//{
//    mangled_ppc("?send_out_of_band@c_network_link@@QAAXPBVc_bitstream@@PBUtransport_address@@PAJ@Z");
//};

//public: void c_network_link::send_channel(class c_bitstream const *, long, unsigned char const *, struct transport_address const *, long *)
//{
//    mangled_ppc("?send_channel@c_network_link@@QAAXPBVc_bitstream@@JPBEPBUtransport_address@@PAJ@Z");
//};

//private: static void c_network_link::initialize_packet(struct c_network_link::s_link_packet *)
//{
//    mangled_ppc("?initialize_packet@c_network_link@@CAXPAUs_link_packet@1@@Z");
//};

//private: bool c_network_link::read_packet_internal(struct c_network_link::s_link_packet *)
//{
//    mangled_ppc("?read_packet_internal@c_network_link@@AAA_NPAUs_link_packet@1@@Z");
//};

//private: void c_network_link::send_packet_internal(struct c_network_link::s_link_packet const *)
//{
//    mangled_ppc("?send_packet_internal@c_network_link@@AAAXPBUs_link_packet@1@@Z");
//};

//private: void c_network_link::process_packet_internal(struct c_network_link::s_link_packet const *)
//{
//    mangled_ppc("?process_packet_internal@c_network_link@@AAAXPBUs_link_packet@1@@Z");
//};

//void network_process_voice_data(unsigned char *, long)
//{
//    mangled_ppc("?network_process_voice_data@@YAXPAEJ@Z");
//};

//private: void c_network_link::encode_packet(struct c_network_link::s_link_packet const *, long *, unsigned char *, long) const
//{
//    mangled_ppc("?encode_packet@c_network_link@@ABAXPBUs_link_packet@1@PAJPAEJ@Z");
//};

//private: bool c_network_link::decode_packet(long, unsigned char const *, struct c_network_link::s_link_packet *) const
//{
//    mangled_ppc("?decode_packet@c_network_link@@ABA_NJPBEPAUs_link_packet@1@@Z");
//};

//private: long c_network_link::compute_size_on_wire(struct c_network_link::s_link_packet const *) const
//{
//    mangled_ppc("?compute_size_on_wire@c_network_link@@ABAJPBUs_link_packet@1@@Z");
//};

//private: bool c_network_link::read_data_immediate(long, struct transport_address *, long *, unsigned long *, unsigned char *, long)
//{
//    mangled_ppc("?read_data_immediate@c_network_link@@AAA_NJPAUtransport_address@@PAJPAKPAEJ@Z");
//};

//private: void c_network_link::send_data_immediate(long, struct transport_address const *, long, void const *)
//{
//    mangled_ppc("?send_data_immediate@c_network_link@@AAAXJPBUtransport_address@@JPBX@Z");
//};

