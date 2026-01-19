/* ---------- headers */

#include "omaha\networking\tools\remote_command.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const REMOTE_COMMAND_HEADER_TAG; // "?REMOTE_COMMAND_HEADER_TAG@@3PBDB"

// void remote_command_initialize(void);
// void reset_data_packet_globals(void);
// void remote_command_transport_shutdown(void *);
// void remote_command_dispose(void);
// void remote_command_disconnect(void);
// bool remote_command_connect(char const *);
// bool remote_command_connected(void);
// bool remote_command_send(enum e_remote_command, void const *, long, void const *);
// bool remote_command_send_encoded(long, void const *, long, void const *, bool *);
// void remote_command_process(void);
// bool remote_command_process_received_chunk(char const *, long);
// bool remote_command_process_command(long, void const *, long, void const *);
// bool remote_command_process_command_from_file(long, void const *, struct s_file_reference *);
// bool remote_command_process_map_synch(struct s_remote_synchronize_map const *);
// bool remote_command_process_tag_quick_preview(struct s_remote_tag_quick_preview_header const *, long, void const *);
// bool remote_command_process_prepare_ifp_tag(struct s_remote_tag_quick_preview_header const *, long, void const *);
// bool remote_command_process_individual_field_preview(struct s_remote_tag_ifp_header const *, long, void const *);
// bool remote_command_process_tag_quick_preview_from_file(struct s_remote_tag_quick_preview_header const *, struct s_file_reference *);
// bool remote_command_process_add_object(struct s_remote_add_object const *);
// bool remote_command_get_object_handler(char const *, long, long, struct s_remote_command_placement_handler const **, struct s_tag_block **, struct s_tag_block **, long *);
// bool remote_command_process_modify_object(struct s_remote_modify_object const *, long, void const *);
// bool remote_command_process_delete_object(struct s_remote_delete_object const *);
// bool remote_scenario_update(void);
// bool remote_camera_update(enum e_output_user_index, struct s_observer_result const *);
// bool require_camera_transmission(struct s_observer_result const *, struct s_observer_result const *);
// void remote_camera_force_update(void);
// void remote_camera_suppress_update(void);
// bool remote_sound_command(long, void *, long);
// bool find_scenario_datum_block(long, struct s_tag_block **, struct s_tag_block **, long *);
// bool apply_object_addition(long);
// bool apply_object_modification(long, long, void const *);
// bool apply_object_update(long, long);
// bool apply_object_deletion(long, long);
// bool remote_add_object(long, long);
// bool remote_modify_object(long, long, long, bool);
// bool remote_delete_object(long, long, long);
// bool find_light_block(long, struct s_tag_block **, struct s_tag_block **, long *);
// bool apply_light_addition(long);
// bool apply_light_modification(long, long, void const *);
// bool apply_light_update(long, long);
// bool apply_light_deletion(long, long);
// bool remote_add_light(long);
// bool remote_modify_light(long, long, bool);
// bool require_object_transmission(struct s_scenario_object const *, struct s_scenario_object const *);
// bool require_light_transmission(struct s_scenario_light_datum const *, struct s_scenario_light_datum const *);
// bool remote_delete_light(long, long);
// void remote_command_send_hs_result(long, long);
// bool remote_hs_expression_send_with_result(char const *, void (*)(struct s_remote_hs_command_results const *, char const *, long));
// bool remote_hs_expression_send(char const *);
// bool remote_tag_placement(unsigned long, char const *);
// bool remote_tag_quick_preview(char const *, unsigned long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *));
// bool remote_tag_prepare_individual_field_preview(char const *, unsigned long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *));
// bool remote_tag_individual_field_preview(char const *, unsigned long, long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *));
// bool remote_command_process_tag_placement(struct s_remote_tag_placement const *);
// void remote_flag_new(char const *, char const *, union real_point3d const *);
// public: bool c_flags_no_init<enum e_scenario_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_scenario_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &) const;
// public: s_remote_command_globals::s_remote_command_globals(void);
// public: s_scenario_light::s_scenario_light(void);
// public: s_remote_command_globals::~s_remote_command_globals(void);
// public: s_scenario_light::~s_scenario_light(void);
// void remote_command_globals::`dynamic atexit destructor'(void);

//void remote_command_initialize(void)
//{
//    mangled_ppc("?remote_command_initialize@@YAXXZ");
//};

//void reset_data_packet_globals(void)
//{
//    mangled_ppc("?reset_data_packet_globals@@YAXXZ");
//};

//void remote_command_transport_shutdown(void *)
//{
//    mangled_ppc("?remote_command_transport_shutdown@@YAXPAX@Z");
//};

//void remote_command_dispose(void)
//{
//    mangled_ppc("?remote_command_dispose@@YAXXZ");
//};

//void remote_command_disconnect(void)
//{
//    mangled_ppc("?remote_command_disconnect@@YAXXZ");
//};

//bool remote_command_connect(char const *)
//{
//    mangled_ppc("?remote_command_connect@@YA_NPBD@Z");
//};

//bool remote_command_connected(void)
//{
//    mangled_ppc("?remote_command_connected@@YA_NXZ");
//};

//bool remote_command_send(enum e_remote_command, void const *, long, void const *)
//{
//    mangled_ppc("?remote_command_send@@YA_NW4e_remote_command@@PBXJ1@Z");
//};

//bool remote_command_send_encoded(long, void const *, long, void const *, bool *)
//{
//    mangled_ppc("?remote_command_send_encoded@@YA_NJPBXJ0PA_N@Z");
//};

//void remote_command_process(void)
//{
//    mangled_ppc("?remote_command_process@@YAXXZ");
//};

//bool remote_command_process_received_chunk(char const *, long)
//{
//    mangled_ppc("?remote_command_process_received_chunk@@YA_NPBDJ@Z");
//};

//bool remote_command_process_command(long, void const *, long, void const *)
//{
//    mangled_ppc("?remote_command_process_command@@YA_NJPBXJ0@Z");
//};

//bool remote_command_process_command_from_file(long, void const *, struct s_file_reference *)
//{
//    mangled_ppc("?remote_command_process_command_from_file@@YA_NJPBXPAUs_file_reference@@@Z");
//};

//bool remote_command_process_map_synch(struct s_remote_synchronize_map const *)
//{
//    mangled_ppc("?remote_command_process_map_synch@@YA_NPBUs_remote_synchronize_map@@@Z");
//};

//bool remote_command_process_tag_quick_preview(struct s_remote_tag_quick_preview_header const *, long, void const *)
//{
//    mangled_ppc("?remote_command_process_tag_quick_preview@@YA_NPBUs_remote_tag_quick_preview_header@@JPBX@Z");
//};

//bool remote_command_process_prepare_ifp_tag(struct s_remote_tag_quick_preview_header const *, long, void const *)
//{
//    mangled_ppc("?remote_command_process_prepare_ifp_tag@@YA_NPBUs_remote_tag_quick_preview_header@@JPBX@Z");
//};

//bool remote_command_process_individual_field_preview(struct s_remote_tag_ifp_header const *, long, void const *)
//{
//    mangled_ppc("?remote_command_process_individual_field_preview@@YA_NPBUs_remote_tag_ifp_header@@JPBX@Z");
//};

//bool remote_command_process_tag_quick_preview_from_file(struct s_remote_tag_quick_preview_header const *, struct s_file_reference *)
//{
//    mangled_ppc("?remote_command_process_tag_quick_preview_from_file@@YA_NPBUs_remote_tag_quick_preview_header@@PAUs_file_reference@@@Z");
//};

//bool remote_command_process_add_object(struct s_remote_add_object const *)
//{
//    mangled_ppc("?remote_command_process_add_object@@YA_NPBUs_remote_add_object@@@Z");
//};

//bool remote_command_get_object_handler(char const *, long, long, struct s_remote_command_placement_handler const **, struct s_tag_block **, struct s_tag_block **, long *)
//{
//    mangled_ppc("?remote_command_get_object_handler@@YA_NPBDJJPAPBUs_remote_command_placement_handler@@PAPAUs_tag_block@@2PAJ@Z");
//};

//bool remote_command_process_modify_object(struct s_remote_modify_object const *, long, void const *)
//{
//    mangled_ppc("?remote_command_process_modify_object@@YA_NPBUs_remote_modify_object@@JPBX@Z");
//};

//bool remote_command_process_delete_object(struct s_remote_delete_object const *)
//{
//    mangled_ppc("?remote_command_process_delete_object@@YA_NPBUs_remote_delete_object@@@Z");
//};

//bool remote_scenario_update(void)
//{
//    mangled_ppc("?remote_scenario_update@@YA_NXZ");
//};

//bool remote_camera_update(enum e_output_user_index, struct s_observer_result const *)
//{
//    mangled_ppc("?remote_camera_update@@YA_NW4e_output_user_index@@PBUs_observer_result@@@Z");
//};

//bool require_camera_transmission(struct s_observer_result const *, struct s_observer_result const *)
//{
//    mangled_ppc("?require_camera_transmission@@YA_NPBUs_observer_result@@0@Z");
//};

//void remote_camera_force_update(void)
//{
//    mangled_ppc("?remote_camera_force_update@@YAXXZ");
//};

//void remote_camera_suppress_update(void)
//{
//    mangled_ppc("?remote_camera_suppress_update@@YAXXZ");
//};

//bool remote_sound_command(long, void *, long)
//{
//    mangled_ppc("?remote_sound_command@@YA_NJPAXJ@Z");
//};

//bool find_scenario_datum_block(long, struct s_tag_block **, struct s_tag_block **, long *)
//{
//    mangled_ppc("?find_scenario_datum_block@@YA_NJPAPAUs_tag_block@@0PAJ@Z");
//};

//bool apply_object_addition(long)
//{
//    mangled_ppc("?apply_object_addition@@YA_NJ@Z");
//};

//bool apply_object_modification(long, long, void const *)
//{
//    mangled_ppc("?apply_object_modification@@YA_NJJPBX@Z");
//};

//bool apply_object_update(long, long)
//{
//    mangled_ppc("?apply_object_update@@YA_NJJ@Z");
//};

//bool apply_object_deletion(long, long)
//{
//    mangled_ppc("?apply_object_deletion@@YA_NJJ@Z");
//};

//bool remote_add_object(long, long)
//{
//    mangled_ppc("?remote_add_object@@YA_NJJ@Z");
//};

//bool remote_modify_object(long, long, long, bool)
//{
//    mangled_ppc("?remote_modify_object@@YA_NJJJ_N@Z");
//};

//bool remote_delete_object(long, long, long)
//{
//    mangled_ppc("?remote_delete_object@@YA_NJJJ@Z");
//};

//bool find_light_block(long, struct s_tag_block **, struct s_tag_block **, long *)
//{
//    mangled_ppc("?find_light_block@@YA_NJPAPAUs_tag_block@@0PAJ@Z");
//};

//bool apply_light_addition(long)
//{
//    mangled_ppc("?apply_light_addition@@YA_NJ@Z");
//};

//bool apply_light_modification(long, long, void const *)
//{
//    mangled_ppc("?apply_light_modification@@YA_NJJPBX@Z");
//};

//bool apply_light_update(long, long)
//{
//    mangled_ppc("?apply_light_update@@YA_NJJ@Z");
//};

//bool apply_light_deletion(long, long)
//{
//    mangled_ppc("?apply_light_deletion@@YA_NJJ@Z");
//};

//bool remote_add_light(long)
//{
//    mangled_ppc("?remote_add_light@@YA_NJ@Z");
//};

//bool remote_modify_light(long, long, bool)
//{
//    mangled_ppc("?remote_modify_light@@YA_NJJ_N@Z");
//};

//bool require_object_transmission(struct s_scenario_object const *, struct s_scenario_object const *)
//{
//    mangled_ppc("?require_object_transmission@@YA_NPBUs_scenario_object@@0@Z");
//};

//bool require_light_transmission(struct s_scenario_light_datum const *, struct s_scenario_light_datum const *)
//{
//    mangled_ppc("?require_light_transmission@@YA_NPBUs_scenario_light_datum@@0@Z");
//};

//bool remote_delete_light(long, long)
//{
//    mangled_ppc("?remote_delete_light@@YA_NJJ@Z");
//};

//void remote_command_send_hs_result(long, long)
//{
//    mangled_ppc("?remote_command_send_hs_result@@YAXJJ@Z");
//};

//bool remote_hs_expression_send_with_result(char const *, void (*)(struct s_remote_hs_command_results const *, char const *, long))
//{
//    mangled_ppc("?remote_hs_expression_send_with_result@@YA_NPBDP6AXPBUs_remote_hs_command_results@@0J@Z@Z");
//};

//bool remote_hs_expression_send(char const *)
//{
//    mangled_ppc("?remote_hs_expression_send@@YA_NPBD@Z");
//};

//bool remote_tag_placement(unsigned long, char const *)
//{
//    mangled_ppc("?remote_tag_placement@@YA_NKPBD@Z");
//};

//bool remote_tag_quick_preview(char const *, unsigned long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *))
//{
//    mangled_ppc("?remote_tag_quick_preview@@YA_NPBDKPBXJP6AXPBUs_remote_tag_quick_preview_results@@@Z@Z");
//};

//bool remote_tag_prepare_individual_field_preview(char const *, unsigned long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *))
//{
//    mangled_ppc("?remote_tag_prepare_individual_field_preview@@YA_NPBDKPBXJP6AXPBUs_remote_tag_quick_preview_results@@@Z@Z");
//};

//bool remote_tag_individual_field_preview(char const *, unsigned long, long, void const *, long, void (*)(struct s_remote_tag_quick_preview_results const *))
//{
//    mangled_ppc("?remote_tag_individual_field_preview@@YA_NPBDKJPBXJP6AXPBUs_remote_tag_quick_preview_results@@@Z@Z");
//};

//bool remote_command_process_tag_placement(struct s_remote_tag_placement const *)
//{
//    mangled_ppc("?remote_command_process_tag_placement@@YA_NPBUs_remote_tag_placement@@@Z");
//};

//void remote_flag_new(char const *, char const *, union real_point3d const *)
//{
//    mangled_ppc("?remote_flag_new@@YAXPBD0PBTreal_point3d@@@Z");
//};

//public: bool c_flags_no_init<enum e_scenario_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_scenario_object_placement_flags, unsigned long, 12, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_scenario_object_placement_flags@@K$0M@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: s_remote_command_globals::s_remote_command_globals(void)
//{
//    mangled_ppc("??0s_remote_command_globals@@QAA@XZ");
//};

//public: s_scenario_light::s_scenario_light(void)
//{
//    mangled_ppc("??0s_scenario_light@@QAA@XZ");
//};

//public: s_remote_command_globals::~s_remote_command_globals(void)
//{
//    mangled_ppc("??1s_remote_command_globals@@QAA@XZ");
//};

//public: s_scenario_light::~s_scenario_light(void)
//{
//    mangled_ppc("??1s_scenario_light@@QAA@XZ");
//};

//void remote_command_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fremote_command_globals@@YAXXZ");
//};

