/* ---------- headers */

#include "omaha\networking\logic\network_bandwidth_estimation.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_weighted_sample, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_weighted_sample@@$0CA@@@2JB"

// float network_bandwidth_estimate_upstream_bps(float *);
// float network_bandwidth_estimate_upstream_congestion_variance(void);
// float network_bandwidth_estimate_latency_ms(void);
// float network_bandwidth_estimate_latency_variance_ms(void);
// float network_bandwidth_estimate_packet_loss_pct(void);
// long network_days_since(unsigned __int64);
// long network_weeks_since(unsigned __int64);
// float build_and_compute_weighted_average_simple(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type);
// float build_and_compute_weighted_average(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type, float, float *);
// float weighted_average(struct s_weighted_sample const *, long, float, float *);
// float weighted_sum(struct s_weighted_sample const *, long, float, float *);
// void build_weighted_sample_set(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type, struct s_weighted_sample *, long *);
// float get_weight_for_sample(enum e_sample_type, unsigned __int64, float);
// float get_host_sample(struct s_bandwidth_host_measurement const *, enum e_sample_type);
// float get_latency_sample(struct s_latency_measurement const *, enum e_sample_type);
// float get_packet_loss_sample(struct s_packet_loss_measurement const *, enum e_sample_type);
// float get_client_sample(struct s_bandwidth_client_measurement const *, enum e_sample_type, enum e_sample_client_data_type);
// float get_local_sample(struct s_bandwidth_local_measurement const *, enum e_sample_type);
// float get_upstream_congested(enum e_network_quality_context, float *);
// float get_upstream_peak(enum e_network_quality_context, float, float *);
// float get_matchmaking_weighted_average(enum e_sample_type, float, float *);
// float get_host_constrained_and_unconstrained(enum e_network_quality_context, enum e_sample_type, float *);
// float get_client_loaded_and_unloaded(enum e_network_quality_context, enum e_sample_type, float *);
// public: static long c_static_stack<struct s_bandwidth_host_measurement, 16>::maximum_count(void);
// public: static long c_static_stack<struct s_bandwidth_client_measurement, 8>::maximum_count(void);
// public: struct s_bandwidth_client_measurement const & c_static_stack<struct s_bandwidth_client_measurement, 8>::operator[](long) const;
// public: static long c_static_stack<struct s_bandwidth_local_measurement, 32>::maximum_count(void);
// public: struct s_weighted_sample * s_static_array<struct s_weighted_sample, 32>::get_elements(void);
// public: static long s_static_array<struct s_weighted_sample, 32>::get_count(void);
// difftime;
// time;

//float network_bandwidth_estimate_upstream_bps(float *)
//{
//    mangled_ppc("?network_bandwidth_estimate_upstream_bps@@YAMPAM@Z");
//};

//float network_bandwidth_estimate_upstream_congestion_variance(void)
//{
//    mangled_ppc("?network_bandwidth_estimate_upstream_congestion_variance@@YAMXZ");
//};

//float network_bandwidth_estimate_latency_ms(void)
//{
//    mangled_ppc("?network_bandwidth_estimate_latency_ms@@YAMXZ");
//};

//float network_bandwidth_estimate_latency_variance_ms(void)
//{
//    mangled_ppc("?network_bandwidth_estimate_latency_variance_ms@@YAMXZ");
//};

//float network_bandwidth_estimate_packet_loss_pct(void)
//{
//    mangled_ppc("?network_bandwidth_estimate_packet_loss_pct@@YAMXZ");
//};

//long network_days_since(unsigned __int64)
//{
//    mangled_ppc("?network_days_since@@YAJ_K@Z");
//};

//long network_weeks_since(unsigned __int64)
//{
//    mangled_ppc("?network_weeks_since@@YAJ_K@Z");
//};

//float build_and_compute_weighted_average_simple(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type)
//{
//    mangled_ppc("?build_and_compute_weighted_average_simple@@YAMW4e_sample_peer_type@@W4e_sample_client_data_type@@W4e_bandwidth_measurement_type@@W4e_network_quality_context@@W4e_sample_type@@@Z");
//};

//float build_and_compute_weighted_average(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type, float, float *)
//{
//    mangled_ppc("?build_and_compute_weighted_average@@YAMW4e_sample_peer_type@@W4e_sample_client_data_type@@W4e_bandwidth_measurement_type@@W4e_network_quality_context@@W4e_sample_type@@MPAM@Z");
//};

//float weighted_average(struct s_weighted_sample const *, long, float, float *)
//{
//    mangled_ppc("?weighted_average@@YAMPBUs_weighted_sample@@JMPAM@Z");
//};

//float weighted_sum(struct s_weighted_sample const *, long, float, float *)
//{
//    mangled_ppc("?weighted_sum@@YAMPBUs_weighted_sample@@JMPAM@Z");
//};

//void build_weighted_sample_set(enum e_sample_peer_type, enum e_sample_client_data_type, enum e_bandwidth_measurement_type, enum e_network_quality_context, enum e_sample_type, struct s_weighted_sample *, long *)
//{
//    mangled_ppc("?build_weighted_sample_set@@YAXW4e_sample_peer_type@@W4e_sample_client_data_type@@W4e_bandwidth_measurement_type@@W4e_network_quality_context@@W4e_sample_type@@PAUs_weighted_sample@@PAJ@Z");
//};

//float get_weight_for_sample(enum e_sample_type, unsigned __int64, float)
//{
//    mangled_ppc("?get_weight_for_sample@@YAMW4e_sample_type@@_KM@Z");
//};

//float get_host_sample(struct s_bandwidth_host_measurement const *, enum e_sample_type)
//{
//    mangled_ppc("?get_host_sample@@YAMPBUs_bandwidth_host_measurement@@W4e_sample_type@@@Z");
//};

//float get_latency_sample(struct s_latency_measurement const *, enum e_sample_type)
//{
//    mangled_ppc("?get_latency_sample@@YAMPBUs_latency_measurement@@W4e_sample_type@@@Z");
//};

//float get_packet_loss_sample(struct s_packet_loss_measurement const *, enum e_sample_type)
//{
//    mangled_ppc("?get_packet_loss_sample@@YAMPBUs_packet_loss_measurement@@W4e_sample_type@@@Z");
//};

//float get_client_sample(struct s_bandwidth_client_measurement const *, enum e_sample_type, enum e_sample_client_data_type)
//{
//    mangled_ppc("?get_client_sample@@YAMPBUs_bandwidth_client_measurement@@W4e_sample_type@@W4e_sample_client_data_type@@@Z");
//};

//float get_local_sample(struct s_bandwidth_local_measurement const *, enum e_sample_type)
//{
//    mangled_ppc("?get_local_sample@@YAMPBUs_bandwidth_local_measurement@@W4e_sample_type@@@Z");
//};

//float get_upstream_congested(enum e_network_quality_context, float *)
//{
//    mangled_ppc("?get_upstream_congested@@YAMW4e_network_quality_context@@PAM@Z");
//};

//float get_upstream_peak(enum e_network_quality_context, float, float *)
//{
//    mangled_ppc("?get_upstream_peak@@YAMW4e_network_quality_context@@MPAM@Z");
//};

//float get_matchmaking_weighted_average(enum e_sample_type, float, float *)
//{
//    mangled_ppc("?get_matchmaking_weighted_average@@YAMW4e_sample_type@@MPAM@Z");
//};

//float get_host_constrained_and_unconstrained(enum e_network_quality_context, enum e_sample_type, float *)
//{
//    mangled_ppc("?get_host_constrained_and_unconstrained@@YAMW4e_network_quality_context@@W4e_sample_type@@PAM@Z");
//};

//float get_client_loaded_and_unloaded(enum e_network_quality_context, enum e_sample_type, float *)
//{
//    mangled_ppc("?get_client_loaded_and_unloaded@@YAMW4e_network_quality_context@@W4e_sample_type@@PAM@Z");
//};

//public: static long c_static_stack<struct s_bandwidth_host_measurement, 16>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@SAJXZ");
//};

//public: static long c_static_stack<struct s_bandwidth_client_measurement, 8>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@SAJXZ");
//};

//public: struct s_bandwidth_client_measurement const & c_static_stack<struct s_bandwidth_client_measurement, 8>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBAABUs_bandwidth_client_measurement@@J@Z");
//};

//public: static long c_static_stack<struct s_bandwidth_local_measurement, 32>::maximum_count(void)
//{
//    mangled_ppc("?maximum_count@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@SAJXZ");
//};

//public: struct s_weighted_sample * s_static_array<struct s_weighted_sample, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_weighted_sample@@$0CA@@@QAAPAUs_weighted_sample@@XZ");
//};

//public: static long s_static_array<struct s_weighted_sample, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_weighted_sample@@$0CA@@@SAJXZ");
//};

//difftime
//{
//    mangled_ppc("difftime");
//};

//time
//{
//    mangled_ppc("time");
//};

