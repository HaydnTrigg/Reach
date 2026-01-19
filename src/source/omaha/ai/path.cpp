/* ---------- headers */

#include "omaha\ai\path.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<unsigned char, 10000>::k_element_count; // "?k_element_count@?$s_static_array@E$0CHBA@@@2JB"
// except_record_8392C2C8; // "except_record_8392C2C8"
// except_record_8392D160; // "except_record_8392D160"
// except_record_8392FD20; // "except_record_8392FD20"
// bool g_pathfinding_use_attractor_bounds; // "?g_pathfinding_use_attractor_bounds@@3_NA"
// short g_ai_pathfinding_performance_render_threshold; // "?g_ai_pathfinding_performance_render_threshold@@3FA"
// float g_ai_pathfinding_performance_cell_size; // "?g_ai_pathfinding_performance_cell_size@@3MA"
// short g_path_state_traverse_max_iteration_count; // "?g_path_state_traverse_max_iteration_count@@3FA"
// bool g_ai_pathfinding_performance_debug_enabled; // "?g_ai_pathfinding_performance_debug_enabled@@3_NA"
// long *g_test_ray2d_counter; // "?g_test_ray2d_counter@@3PAJA"
// long *g_test_ray2d_innter_loop_counter; // "?g_test_ray2d_innter_loop_counter@@3PAJA"
// long *g_turning_point_iteration_max; // "?g_turning_point_iteration_max@@3PAJA"
// struct s_pathfinding_performance_debug g_pathfinding_performance_debug; // "?g_pathfinding_performance_debug@@3Us_pathfinding_performance_debug@@A"

// public: void c_path_destination::set(class c_ai_point3d const *, class c_sector_ref const *, float);
// void paths_initialize(void);
// void paths_dispose(void);
// void paths_initialize_for_new_map(void);
// void paths_dispose_from_old_map(void);
// void path_input_new(struct path_input *, float, bool, long, float);
// void path_input_add_destination_sector(struct path_input *, class c_sector_ref, short);
// void path_input_set_attractor_bounds(struct path_input *, union real_rectangle2d const *);
// void path_input_set_pathfinding_influence_map(struct path_input *, enum e_campaign_team);
// void path_input_set_target_object(struct path_input *, long);
// void path_input_set_start(struct path_input *, class c_ai_point3d const *, class c_sector_ref);
// void path_input_set_attractor(struct path_input *, union real_point3d const *, float, float, long, float, bool);
// void path_input_set_search_bounds(struct path_input *, float);
// bool path_error_info_contains_link(struct path_error_info const *, long);
// void path_error_stage_advance(struct path_error_info *);
// bool path_state_approach_point(struct path_state *, class c_ai_point3d const *, class c_sector_ref, bool *, class c_ai_point3d *);
// float path_state_unit_distance(struct path_state *, class c_ai_point3d const *, class c_sector_ref, long);
// bool path_state_estimated_distance(struct path_state *, class c_ai_point3d const *, class c_sector_ref, float *, float *, union vector3d *);
// bool path_state_build_path(long, struct path_state *, struct path_result *);
// public: `long unkink_raw_path_hint_segment(long, class path_step_array_inverter<40> *, long, class c_ai_point3d const *, class c_sector_ref, float)'::`109'::s_refined_step_struct::s_refined_step_struct(void);
// short build_raw_path(long, struct path_state *, struct path_result const *, short, short, struct path_step *, bool *, short *, struct path_step_source *, short);
// bool step_source_threshold(struct pathfinding_data const *, struct path_step_source const *);
// bool raw_path_refine_around_hint(class path_step_array_inverter<40> *, struct path_state *, long, struct path_node *, long);
// long unkink_raw_path_hint_segment(long, class path_step_array_inverter<40> *, long, class c_ai_point3d const *, class c_sector_ref, float);
// void path_state_new(struct path_input const *, struct path_state *, struct path_error_info const *, struct path_debug_storage *, struct special_movement const *, struct s_hint_penalty_cache const *);
// void path_state_destination(struct path_state *, class c_ai_point3d const *, class c_sector_ref, float);
// void path_state_destination(struct path_state *, class c_path_destination const *);
// void path_state_reset(struct path_state *);
// bool path_state_find(struct path_state *);
// bool path_state_begin(struct path_state *);
// bool path_state_traverse(struct path_state *);
// bool path_destination_sector_compare_sort(void const *, void const *, void const *);
// short path_input_attractor_bounds_visit_sector(struct path_input *, class c_sector_ref);
// long path_destination_sector_compare_search(void const *, void const *, void const *);
// bool path_thresholds_equal(struct path_step_source const *, struct path_step_source const *);
// bool ai_get_sector_center(class c_sector_ref, union real_point3d *);
// bool path_heap_verify(struct path_state *, short, short);
// bool path_heap_is_empty(struct path_state *);
// void path_heap_clear(struct path_state *);
// void path_heap_bubble_up(struct path_state *, short);
// void path_heap_bubble_down(struct path_state *, short);
// short path_heap_pop_cheapest_node(struct path_state *);
// void path_heap_insert(struct path_state *, short, short);
// short build_path_links_for_sector(struct path_node const *, struct path_link *, struct path_state const *);
// struct path_node * path_get_node(struct path_state *, short);
// short path_node_from_hash_table(struct path_state const *, class c_sector_ref, long);
// void closest_point_to_attractor(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d *);
// float path_attractor_weight(struct path_state const *, class c_ai_point3d const *, class c_ai_point3d const *, float *);
// bool process_step(struct path_step const *);
// public: c_path_state::c_path_state(void);
// public: c_path_state::~c_path_state(void);
// void ai_pathfinding_performance_render_debug(void);
// void ai_pathfinding_performance_initialize(union real_point3d const *);
// void ai_pathfinding_performance_ping_position(union real_point3d const *);
// public: bool c_static_stack<struct s_path_destination_sector, 24>::empty(void) const;
// public: bool c_static_stack<struct s_path_destination_sector, 24>::full(void) const;
// public: long c_static_stack<struct s_path_destination_sector, 24>::count(void) const;
// public: static unsigned int c_static_stack<struct s_path_destination_sector, 24>::element_size(void);
// public: void c_static_stack<struct s_path_destination_sector, 24>::clear(void);
// public: void c_static_stack<struct s_path_destination_sector, 24>::push_back(struct s_path_destination_sector const &);
// public: void c_static_stack<struct s_path_destination_sector, 24>::pop(void);
// public: struct s_path_destination_sector & c_static_stack<struct s_path_destination_sector, 24>::operator[](long);
// public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::get_elements(void);
// public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::begin(void);
// public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::end(void);
// public: union real_point3d * c_grid_2d<short, unsigned char, 100, 100>::get_center(union real_point3d *) const;
// public: short c_grid_2d<short, unsigned char, 100, 100>::get_cell_count(void) const;
// public: path_step_array_inverter<40>::path_step_array_inverter<40>(struct path_step *, long);
// public: struct path_step * path_step_array_inverter<40>::get_path_step(long);
// public: long path_step_array_inverter<40>::get_size(void);
// public: struct path_step * path_step_array_inverter<40>::add_path_step(long *);
// public: void path_step_array_inverter<40>::set_link_index(long, long);
// public: void path_step_array_inverter<40>::set_structure_index(long, short);
// public: long path_step_array_inverter<40>::get_link_index(long);
// public: short path_step_array_inverter<40>::get_structure_index(long);
// public: void path_step_array_inverter<40>::compact(void);
// public: bool c_static_stack<struct s_path_destination_sector, 24>::valid(void) const;
// public: bool c_static_stack<struct s_path_destination_sector, 24>::valid(long) const;
// public: long c_static_stack<struct s_path_destination_sector, 24>::push(void);
// public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::get(long);
// public: static long s_static_array<unsigned char, 10000>::get_count(void);
// public: short c_grid_2d<short, unsigned char, 100, 100>::find_cell_index(union real_point3d const *) const;
// public: union real_point3d * c_grid_2d<short, unsigned char, 100, 100>::get_cell_position(short, union real_point3d *) const;
// public: unsigned char c_grid_2d<short, unsigned char, 100, 100>::get_cell_value(short) const;
// public: void c_grid_2d<short, unsigned char, 100, 100>::set_cell_value(short, unsigned char);
// public: void c_grid_2d<short, unsigned char, 100, 100>::initialize(unsigned char, float, union real_point3d const *);
// public: bool c_grid_2d<short, unsigned char, 100, 100>::valid_cell_index(short) const;
// public: void s_static_array<unsigned char, 10000>::set_memory(long);
// public: short c_grid_2d<short, unsigned char, 100, 100>::build_cell_index(short, short) const;
// public: short c_grid_2d<short, unsigned char, 100, 100>::get_row_index(union real_point3d const *) const;
// public: short c_grid_2d<short, unsigned char, 100, 100>::get_column_index(union real_point3d const *) const;
// public: bool c_grid_2d<short, unsigned char, 100, 100>::position_valid(union real_point3d const *) const;
// public: unsigned char const & s_static_array<unsigned char, 10000>::operator[]<short>(short) const;
// public: unsigned char & s_static_array<unsigned char, 10000>::operator[]<short>(short);
// public: static bool s_static_array<unsigned char, 10000>::valid<short>(short);
// public: bool c_grid_2d<short, unsigned char, 100, 100>::position_valid_slow(union real_point3d const *) const;
// public: s_pathfinding_performance_debug::s_pathfinding_performance_debug(void);

//public: void c_path_destination::set(class c_ai_point3d const *, class c_sector_ref const *, float)
//{
//    mangled_ppc("?set@c_path_destination@@QAAXPBVc_ai_point3d@@PBVc_sector_ref@@M@Z");
//};

//void paths_initialize(void)
//{
//    mangled_ppc("?paths_initialize@@YAXXZ");
//};

//void paths_dispose(void)
//{
//    mangled_ppc("?paths_dispose@@YAXXZ");
//};

//void paths_initialize_for_new_map(void)
//{
//    mangled_ppc("?paths_initialize_for_new_map@@YAXXZ");
//};

//void paths_dispose_from_old_map(void)
//{
//    mangled_ppc("?paths_dispose_from_old_map@@YAXXZ");
//};

//void path_input_new(struct path_input *, float, bool, long, float)
//{
//    mangled_ppc("?path_input_new@@YAXPAUpath_input@@M_NJM@Z");
//};

//void path_input_add_destination_sector(struct path_input *, class c_sector_ref, short)
//{
//    mangled_ppc("?path_input_add_destination_sector@@YAXPAUpath_input@@Vc_sector_ref@@F@Z");
//};

//void path_input_set_attractor_bounds(struct path_input *, union real_rectangle2d const *)
//{
//    mangled_ppc("?path_input_set_attractor_bounds@@YAXPAUpath_input@@PBTreal_rectangle2d@@@Z");
//};

//void path_input_set_pathfinding_influence_map(struct path_input *, enum e_campaign_team)
//{
//    mangled_ppc("?path_input_set_pathfinding_influence_map@@YAXPAUpath_input@@W4e_campaign_team@@@Z");
//};

//void path_input_set_target_object(struct path_input *, long)
//{
//    mangled_ppc("?path_input_set_target_object@@YAXPAUpath_input@@J@Z");
//};

//void path_input_set_start(struct path_input *, class c_ai_point3d const *, class c_sector_ref)
//{
//    mangled_ppc("?path_input_set_start@@YAXPAUpath_input@@PBVc_ai_point3d@@Vc_sector_ref@@@Z");
//};

//void path_input_set_attractor(struct path_input *, union real_point3d const *, float, float, long, float, bool)
//{
//    mangled_ppc("?path_input_set_attractor@@YAXPAUpath_input@@PBTreal_point3d@@MMJM_N@Z");
//};

//void path_input_set_search_bounds(struct path_input *, float)
//{
//    mangled_ppc("?path_input_set_search_bounds@@YAXPAUpath_input@@M@Z");
//};

//bool path_error_info_contains_link(struct path_error_info const *, long)
//{
//    mangled_ppc("?path_error_info_contains_link@@YA_NPBUpath_error_info@@J@Z");
//};

//void path_error_stage_advance(struct path_error_info *)
//{
//    mangled_ppc("?path_error_stage_advance@@YAXPAUpath_error_info@@@Z");
//};

//bool path_state_approach_point(struct path_state *, class c_ai_point3d const *, class c_sector_ref, bool *, class c_ai_point3d *)
//{
//    mangled_ppc("?path_state_approach_point@@YA_NPAUpath_state@@PBVc_ai_point3d@@Vc_sector_ref@@PA_NPAV2@@Z");
//};

//float path_state_unit_distance(struct path_state *, class c_ai_point3d const *, class c_sector_ref, long)
//{
//    mangled_ppc("?path_state_unit_distance@@YAMPAUpath_state@@PBVc_ai_point3d@@Vc_sector_ref@@J@Z");
//};

//bool path_state_estimated_distance(struct path_state *, class c_ai_point3d const *, class c_sector_ref, float *, float *, union vector3d *)
//{
//    mangled_ppc("?path_state_estimated_distance@@YA_NPAUpath_state@@PBVc_ai_point3d@@Vc_sector_ref@@PAM3PATvector3d@@@Z");
//};

//bool path_state_build_path(long, struct path_state *, struct path_result *)
//{
//    mangled_ppc("?path_state_build_path@@YA_NJPAUpath_state@@PAUpath_result@@@Z");
//};

//public: `long unkink_raw_path_hint_segment(long, class path_step_array_inverter<40> *, long, class c_ai_point3d const *, class c_sector_ref, float)'::`109'::s_refined_step_struct::s_refined_step_struct(void)
//{
//    mangled_ppc("??0s_refined_step_struct@?GN@??unkink_raw_path_hint_segment@@YAJJPAV?$path_step_array_inverter@$0CI@@@JPBVc_ai_point3d@@Vc_sector_ref@@M@Z@QAA@XZ");
//};

//short build_raw_path(long, struct path_state *, struct path_result const *, short, short, struct path_step *, bool *, short *, struct path_step_source *, short)
//{
//    mangled_ppc("?build_raw_path@@YAFJPAUpath_state@@PBUpath_result@@FFPAUpath_step@@PA_NPAFPAUpath_step_source@@F@Z");
//};

//bool step_source_threshold(struct pathfinding_data const *, struct path_step_source const *)
//{
//    mangled_ppc("?step_source_threshold@@YA_NPBUpathfinding_data@@PBUpath_step_source@@@Z");
//};

//bool raw_path_refine_around_hint(class path_step_array_inverter<40> *, struct path_state *, long, struct path_node *, long)
//{
//    mangled_ppc("?raw_path_refine_around_hint@@YA_NPAV?$path_step_array_inverter@$0CI@@@PAUpath_state@@JPAUpath_node@@J@Z");
//};

//long unkink_raw_path_hint_segment(long, class path_step_array_inverter<40> *, long, class c_ai_point3d const *, class c_sector_ref, float)
//{
//    mangled_ppc("?unkink_raw_path_hint_segment@@YAJJPAV?$path_step_array_inverter@$0CI@@@JPBVc_ai_point3d@@Vc_sector_ref@@M@Z");
//};

//void path_state_new(struct path_input const *, struct path_state *, struct path_error_info const *, struct path_debug_storage *, struct special_movement const *, struct s_hint_penalty_cache const *)
//{
//    mangled_ppc("?path_state_new@@YAXPBUpath_input@@PAUpath_state@@PBUpath_error_info@@PAUpath_debug_storage@@PBUspecial_movement@@PBUs_hint_penalty_cache@@@Z");
//};

//void path_state_destination(struct path_state *, class c_ai_point3d const *, class c_sector_ref, float)
//{
//    mangled_ppc("?path_state_destination@@YAXPAUpath_state@@PBVc_ai_point3d@@Vc_sector_ref@@M@Z");
//};

//void path_state_destination(struct path_state *, class c_path_destination const *)
//{
//    mangled_ppc("?path_state_destination@@YAXPAUpath_state@@PBVc_path_destination@@@Z");
//};

//void path_state_reset(struct path_state *)
//{
//    mangled_ppc("?path_state_reset@@YAXPAUpath_state@@@Z");
//};

//bool path_state_find(struct path_state *)
//{
//    mangled_ppc("?path_state_find@@YA_NPAUpath_state@@@Z");
//};

//bool path_state_begin(struct path_state *)
//{
//    mangled_ppc("?path_state_begin@@YA_NPAUpath_state@@@Z");
//};

//bool path_state_traverse(struct path_state *)
//{
//    mangled_ppc("?path_state_traverse@@YA_NPAUpath_state@@@Z");
//};

//bool path_destination_sector_compare_sort(void const *, void const *, void const *)
//{
//    mangled_ppc("?path_destination_sector_compare_sort@@YA_NPBX00@Z");
//};

//short path_input_attractor_bounds_visit_sector(struct path_input *, class c_sector_ref)
//{
//    mangled_ppc("?path_input_attractor_bounds_visit_sector@@YAFPAUpath_input@@Vc_sector_ref@@@Z");
//};

//long path_destination_sector_compare_search(void const *, void const *, void const *)
//{
//    mangled_ppc("?path_destination_sector_compare_search@@YAJPBX00@Z");
//};

//bool path_thresholds_equal(struct path_step_source const *, struct path_step_source const *)
//{
//    mangled_ppc("?path_thresholds_equal@@YA_NPBUpath_step_source@@0@Z");
//};

//bool ai_get_sector_center(class c_sector_ref, union real_point3d *)
//{
//    mangled_ppc("?ai_get_sector_center@@YA_NVc_sector_ref@@PATreal_point3d@@@Z");
//};

//bool path_heap_verify(struct path_state *, short, short)
//{
//    mangled_ppc("?path_heap_verify@@YA_NPAUpath_state@@FF@Z");
//};

//bool path_heap_is_empty(struct path_state *)
//{
//    mangled_ppc("?path_heap_is_empty@@YA_NPAUpath_state@@@Z");
//};

//void path_heap_clear(struct path_state *)
//{
//    mangled_ppc("?path_heap_clear@@YAXPAUpath_state@@@Z");
//};

//void path_heap_bubble_up(struct path_state *, short)
//{
//    mangled_ppc("?path_heap_bubble_up@@YAXPAUpath_state@@F@Z");
//};

//void path_heap_bubble_down(struct path_state *, short)
//{
//    mangled_ppc("?path_heap_bubble_down@@YAXPAUpath_state@@F@Z");
//};

//short path_heap_pop_cheapest_node(struct path_state *)
//{
//    mangled_ppc("?path_heap_pop_cheapest_node@@YAFPAUpath_state@@@Z");
//};

//void path_heap_insert(struct path_state *, short, short)
//{
//    mangled_ppc("?path_heap_insert@@YAXPAUpath_state@@FF@Z");
//};

//short build_path_links_for_sector(struct path_node const *, struct path_link *, struct path_state const *)
//{
//    mangled_ppc("?build_path_links_for_sector@@YAFPBUpath_node@@PAUpath_link@@PBUpath_state@@@Z");
//};

//struct path_node * path_get_node(struct path_state *, short)
//{
//    mangled_ppc("?path_get_node@@YAPAUpath_node@@PAUpath_state@@F@Z");
//};

//short path_node_from_hash_table(struct path_state const *, class c_sector_ref, long)
//{
//    mangled_ppc("?path_node_from_hash_table@@YAFPBUpath_state@@Vc_sector_ref@@J@Z");
//};

//void closest_point_to_attractor(union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?closest_point_to_attractor@@YAXPBTreal_point3d@@00PAT1@@Z");
//};

//float path_attractor_weight(struct path_state const *, class c_ai_point3d const *, class c_ai_point3d const *, float *)
//{
//    mangled_ppc("?path_attractor_weight@@YAMPBUpath_state@@PBVc_ai_point3d@@1PAM@Z");
//};

//bool process_step(struct path_step const *)
//{
//    mangled_ppc("?process_step@@YA_NPBUpath_step@@@Z");
//};

//public: c_path_state::c_path_state(void)
//{
//    mangled_ppc("??0c_path_state@@QAA@XZ");
//};

//public: c_path_state::~c_path_state(void)
//{
//    mangled_ppc("??1c_path_state@@QAA@XZ");
//};

//void ai_pathfinding_performance_render_debug(void)
//{
//    mangled_ppc("?ai_pathfinding_performance_render_debug@@YAXXZ");
//};

//void ai_pathfinding_performance_initialize(union real_point3d const *)
//{
//    mangled_ppc("?ai_pathfinding_performance_initialize@@YAXPBTreal_point3d@@@Z");
//};

//void ai_pathfinding_performance_ping_position(union real_point3d const *)
//{
//    mangled_ppc("?ai_pathfinding_performance_ping_position@@YAXPBTreal_point3d@@@Z");
//};

//public: bool c_static_stack<struct s_path_destination_sector, 24>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_path_destination_sector, 24>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_path_destination_sector, 24>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QBAJXZ");
//};

//public: static unsigned int c_static_stack<struct s_path_destination_sector, 24>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@Us_path_destination_sector@@$0BI@@@SAIXZ");
//};

//public: void c_static_stack<struct s_path_destination_sector, 24>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_path_destination_sector, 24>::push_back(struct s_path_destination_sector const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAXABUs_path_destination_sector@@@Z");
//};

//public: void c_static_stack<struct s_path_destination_sector, 24>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAXXZ");
//};

//public: struct s_path_destination_sector & c_static_stack<struct s_path_destination_sector, 24>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAAAUs_path_destination_sector@@J@Z");
//};

//public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAPAUs_path_destination_sector@@XZ");
//};

//public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAPAUs_path_destination_sector@@XZ");
//};

//public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAPAUs_path_destination_sector@@XZ");
//};

//public: union real_point3d * c_grid_2d<short, unsigned char, 100, 100>::get_center(union real_point3d *) const
//{
//    mangled_ppc("?get_center@?$c_grid_2d@FE$0GE@$0GE@@@QBAPATreal_point3d@@PAT2@@Z");
//};

//public: short c_grid_2d<short, unsigned char, 100, 100>::get_cell_count(void) const
//{
//    mangled_ppc("?get_cell_count@?$c_grid_2d@FE$0GE@$0GE@@@QBAFXZ");
//};

//public: path_step_array_inverter<40>::path_step_array_inverter<40>(struct path_step *, long)
//{
//    mangled_ppc("??0?$path_step_array_inverter@$0CI@@@QAA@PAUpath_step@@J@Z");
//};

//public: struct path_step * path_step_array_inverter<40>::get_path_step(long)
//{
//    mangled_ppc("?get_path_step@?$path_step_array_inverter@$0CI@@@QAAPAUpath_step@@J@Z");
//};

//public: long path_step_array_inverter<40>::get_size(void)
//{
//    mangled_ppc("?get_size@?$path_step_array_inverter@$0CI@@@QAAJXZ");
//};

//public: struct path_step * path_step_array_inverter<40>::add_path_step(long *)
//{
//    mangled_ppc("?add_path_step@?$path_step_array_inverter@$0CI@@@QAAPAUpath_step@@PAJ@Z");
//};

//public: void path_step_array_inverter<40>::set_link_index(long, long)
//{
//    mangled_ppc("?set_link_index@?$path_step_array_inverter@$0CI@@@QAAXJJ@Z");
//};

//public: void path_step_array_inverter<40>::set_structure_index(long, short)
//{
//    mangled_ppc("?set_structure_index@?$path_step_array_inverter@$0CI@@@QAAXJF@Z");
//};

//public: long path_step_array_inverter<40>::get_link_index(long)
//{
//    mangled_ppc("?get_link_index@?$path_step_array_inverter@$0CI@@@QAAJJ@Z");
//};

//public: short path_step_array_inverter<40>::get_structure_index(long)
//{
//    mangled_ppc("?get_structure_index@?$path_step_array_inverter@$0CI@@@QAAFJ@Z");
//};

//public: void path_step_array_inverter<40>::compact(void)
//{
//    mangled_ppc("?compact@?$path_step_array_inverter@$0CI@@@QAAXXZ");
//};

//public: bool c_static_stack<struct s_path_destination_sector, 24>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_path_destination_sector, 24>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_path_destination_sector, 24>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAJXZ");
//};

//public: struct s_path_destination_sector * c_static_stack<struct s_path_destination_sector, 24>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_path_destination_sector@@$0BI@@@QAAPAUs_path_destination_sector@@J@Z");
//};

//public: static long s_static_array<unsigned char, 10000>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@E$0CHBA@@@SAJXZ");
//};

//public: short c_grid_2d<short, unsigned char, 100, 100>::find_cell_index(union real_point3d const *) const
//{
//    mangled_ppc("?find_cell_index@?$c_grid_2d@FE$0GE@$0GE@@@QBAFPBTreal_point3d@@@Z");
//};

//public: union real_point3d * c_grid_2d<short, unsigned char, 100, 100>::get_cell_position(short, union real_point3d *) const
//{
//    mangled_ppc("?get_cell_position@?$c_grid_2d@FE$0GE@$0GE@@@QBAPATreal_point3d@@FPAT2@@Z");
//};

//public: unsigned char c_grid_2d<short, unsigned char, 100, 100>::get_cell_value(short) const
//{
//    mangled_ppc("?get_cell_value@?$c_grid_2d@FE$0GE@$0GE@@@QBAEF@Z");
//};

//public: void c_grid_2d<short, unsigned char, 100, 100>::set_cell_value(short, unsigned char)
//{
//    mangled_ppc("?set_cell_value@?$c_grid_2d@FE$0GE@$0GE@@@QAAXFE@Z");
//};

//public: void c_grid_2d<short, unsigned char, 100, 100>::initialize(unsigned char, float, union real_point3d const *)
//{
//    mangled_ppc("?initialize@?$c_grid_2d@FE$0GE@$0GE@@@QAAXEMPBTreal_point3d@@@Z");
//};

//public: bool c_grid_2d<short, unsigned char, 100, 100>::valid_cell_index(short) const
//{
//    mangled_ppc("?valid_cell_index@?$c_grid_2d@FE$0GE@$0GE@@@QBA_NF@Z");
//};

//public: void s_static_array<unsigned char, 10000>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@E$0CHBA@@@QAAXJ@Z");
//};

//public: short c_grid_2d<short, unsigned char, 100, 100>::build_cell_index(short, short) const
//{
//    mangled_ppc("?build_cell_index@?$c_grid_2d@FE$0GE@$0GE@@@QBAFFF@Z");
//};

//public: short c_grid_2d<short, unsigned char, 100, 100>::get_row_index(union real_point3d const *) const
//{
//    mangled_ppc("?get_row_index@?$c_grid_2d@FE$0GE@$0GE@@@QBAFPBTreal_point3d@@@Z");
//};

//public: short c_grid_2d<short, unsigned char, 100, 100>::get_column_index(union real_point3d const *) const
//{
//    mangled_ppc("?get_column_index@?$c_grid_2d@FE$0GE@$0GE@@@QBAFPBTreal_point3d@@@Z");
//};

//public: bool c_grid_2d<short, unsigned char, 100, 100>::position_valid(union real_point3d const *) const
//{
//    mangled_ppc("?position_valid@?$c_grid_2d@FE$0GE@$0GE@@@QBA_NPBTreal_point3d@@@Z");
//};

//public: unsigned char const & s_static_array<unsigned char, 10000>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@E$0CHBA@@@QBAABEF@Z");
//};

//public: unsigned char & s_static_array<unsigned char, 10000>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@E$0CHBA@@@QAAAAEF@Z");
//};

//public: static bool s_static_array<unsigned char, 10000>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@E$0CHBA@@@SA_NF@Z");
//};

//public: bool c_grid_2d<short, unsigned char, 100, 100>::position_valid_slow(union real_point3d const *) const
//{
//    mangled_ppc("?position_valid_slow@?$c_grid_2d@FE$0GE@$0GE@@@QBA_NPBTreal_point3d@@@Z");
//};

//public: s_pathfinding_performance_debug::s_pathfinding_performance_debug(void)
//{
//    mangled_ppc("??0s_pathfinding_performance_debug@@QAA@XZ");
//};

