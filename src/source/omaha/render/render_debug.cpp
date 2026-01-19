/* ---------- headers */

#include "omaha\render\render_debug.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_render_debug_context const c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_render_debug_context@@B"
// public: static long const s_static_array<struct s_render_debug_deferred_entry_event, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 128>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$0IA@@@2JB"
// long *type_list; // "?type_list@@3PAJA"
// bool g_render_debug_pause_aging; // "?g_render_debug_pause_aging@@3_NA"
// class t_restricted_allocation_manager<7, 0, 0, void (__cdecl __tls_set_g_render_debug_globals_allocator::*)(void *)> g_render_debug_globals_allocator; // "?g_render_debug_globals_allocator@@3V?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@A"
// struct s_render_debug_globals *g_render_debug_globals; // "?g_render_debug_globals@@3PAUs_render_debug_globals@@A"

// void __tls_set_g_render_debug_globals_allocator(void *);
// void rasterizer_debug_line(union real_point3d const *, union real_point3d const *, union argb_color const *, union argb_color const *);
// void rasterizer_debug_line2d(union real_point2d const *, union real_point2d const *, union argb_color const *, union argb_color const *);
// void rasterizer_debug_triangle(union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void rasterizer_debug_quad_screenspace(union real_point2d const *, unsigned long const *);
// void render_debug_initialize(void);
// void render_debug_dispose(void);
// bool render_debug_initialized(void);
// void render_debug_begin(void);
// struct s_render_debug_globals * get_render_debug_globals(void);
// void render_debug_end(bool);
// void render_debug_update(void);
// public: c_mtp_profiler_context::c_mtp_profiler_context(unsigned short);
// public: c_mtp_profiler_context::~c_mtp_profiler_context(void);
// public: c_game_tag_defense_push_scope::c_game_tag_defense_push_scope(bool);
// public: c_game_tag_defense_push_scope::~c_game_tag_defense_push_scope(void);
// void game_tag_defense_push(bool);
// void game_tag_defense_pop(void);
// void render_debug_process_deferred_events(void);
// void render_debug_game_tick(void);
// bool render_debug_active(void);
// void render_debug_group_begin(union real_point3d const *);
// void render_debug_group_end(void);
// void render_debug_notify_game_tick_begin(void);
// void render_debug_notify_game_tick_end(void);
// union argb_color const * render_debug_random_color(union argb_color *);
// unsigned short _random(unsigned long *, char const *, char const *, unsigned long);
// union argb_color const * render_debug_unique_color(long, union argb_color *);
// union rgb_color const * render_debug_palette_color(long, union rgb_color *);
// void render_debug_spray(void (*)(struct collision_result *, void *), struct s_collision_test_flags, long, long, void *);
// public: collision_result::collision_result(void);
// public: c_global_material_type::c_global_material_type(void);
// void render_debug_text_using_simple_font(bool);
// void render_debug_point2d(bool, struct plane3d const *, short, bool, union real_point2d const *, float, union argb_color const *, float);
// void render_debug_line2d(union real_point2d const *, union real_point2d const *, union argb_color const *);
// void render_debug_line2d(bool, struct plane3d const *, short, bool, union real_point2d const *, union real_point2d const *, union argb_color const *, float);
// void render_debug_vector2d(bool, struct plane3d const *, short, bool, union real_point2d const *, union vector2d const *, float, union argb_color const *, float);
// void render_debug_circle(bool, struct plane3d const *, short, bool, union real_point2d const *, float, union argb_color const *, float);
// void render_debug_circle(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_ellipse(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, union argb_color const *);
// void render_debug_polygon_regular(bool, union real_point3d const *, long, union vector3d const *, float, union argb_color const *);
// void render_debug_screenspace_quad(bool, union real_point2d const *, unsigned long const *);
// void render_debug_point(bool, union real_point3d const *, float, union argb_color const *);
// void render_debug_line(bool, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_line_shaded(bool, union real_point3d const *, union real_point3d const *, union argb_color const *, union argb_color const *);
// void render_debug_line2d_shaded(union real_point2d const *, union real_point2d const *, union argb_color const *, union argb_color const *);
// void render_debug_line_unclipped(bool, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_line_non_occluded(bool, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_vector(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_tick(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_line_offset(bool, union real_point3d const *, union real_point3d const *, union argb_color const *, float);
// void render_debug_vectors(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float);
// void render_debug_quaternion(bool, union real_point3d const *, struct real32_quaternion const *, float);
// void render_debug_matrix(bool, struct real_matrix4x3const *, float);
// void render_debug_matrix3x3(bool, struct matrix3x3const *, union real_point3d const *, float);
// void render_debug_triangle(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_triangle_outline(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_quadrilateral(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *);
// void render_debug_sphere(bool, union real_point3d const *, float, union argb_color const *);
// void render_debug_sphere_filled(bool, union real_point3d const *, float, union argb_color const *);
// void render_debug_cylinder(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_beveled_cylinder(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *);
// void render_debug_pill(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_pill_filled(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *);
// void render_debug_box2d_outline(bool, union real_rectangle2d const *, union argb_color const *);
// void render_debug_box(bool, union real_rectangle3d const *, union argb_color const *);
// void render_debug_box_oriented(bool, union real_rectangle3d const *, struct real_matrix4x3const *, union argb_color const *);
// void render_debug_box_outline(bool, union real_rectangle3d const *, union argb_color const *);
// void render_debug_box_outline_oriented(bool, union real_rectangle3d const *, struct real_matrix4x3const *, union argb_color const *);
// void render_debug_box_outline_unclipped(bool, union real_rectangle3d const *, union argb_color const *);
// void render_debug_convex_shape(bool, struct plane3d const *, long, union real_point3d const *, union argb_color const *);
// void render_debug_polygon(union real_point3d const *, short, union argb_color const *);
// void render_debug_polygon_edges(union real_point3d const *, short, union argb_color const *);
// void render_debug_line_strip(union real_point3d const *, union real_point3d const *, short, union argb_color const *, union argb_color const *, bool);
// void render_debug_concave_polygon(union real_point3d const *, short, union argb_color const *, union vector3d const *);
// void render_arrow_from_points(union real_point3d const *, union real_point3d const *, union argb_color const *, bool);
// void render_arrow(union real_point3d const *, union vector3d const *, float, union argb_color const *, bool);
// void render_pretty_arrow(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float, float, union argb_color const *, bool);
// void render_2D_arrow(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float, union argb_color const *, bool);
// void render_debug_k_graph(union real_point3d const *, short, union argb_color const *);
// void render_debug_cone_filled(bool, union real_point3d const *, union vector3d const *, float, float, bool, union argb_color const *);
// void render_debug_cone_build_points(union real_point3d const *, union vector3d const *, float, float, union real_point3d *, union real_point3d *, long);
// void render_debug_build_circle_points3d(union real_point3d const *, union vector3d const *, float, union real_point3d *, long);
// void render_debug_cone_outline(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *);
// void render_debug_cone_outline_from_points(bool, union real_point3d const *, union real_point3d const *, long, union argb_color const *);
// void render_debug_snowcone_outline(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *);
// void render_debug_string(char const *);
// void render_debug_string_with_tabs(char const *, short, short const *);
// void render_debug_string_force_simple_font(char const *);
// void render_debug_refresh_all_string_references(void);
// void render_debug_refresh_string_references(struct s_cache_entry *);
// void render_debug_age_and_clear_expired_cache_entries(class c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>, float);
// void render_debug_age_cache_entry(struct s_cache_entry *, float);
// void render_debug_string_at_point(union real_point3d const *, char const *, union argb_color const *);
// void render_debug_string_at_point_force_simple_font(union real_point3d const *, char const *, union argb_color const *);
// void render_debug_string_at_point_with_perspective(union real_point3d const *, char const *, union argb_color const *, float);
// void render_debug_string_at_point_with_perspective_force_simple_font(union real_point3d const *, char const *, union argb_color const *, float);
// void render_debug_cache_sort(void);
// bool render_debug_cache_sort_function(void const *, void const *, void const *);
// void render_debug_cache_draw(bool);
// void render_debug_string_immediate(bool, short const *, short, char const *);
// public: virtual c_simple_font_draw_string::~c_simple_font_draw_string(void);
// void render_debug_string_at_point_immediate(union real_point3d const *, char const *, union argb_color const *, float, bool);
// public: void c_draw_string::set_scale(float);
// bool render_debug_draw_immediately(union argb_color const *);
// bool render_debug_cache_currently_drawing(void);
// struct s_cache_entry * render_debug_allocate_cache_entry(void);
// void render_debug_add_cache_entry(short, ...);
// void render_debug_free_last_cache_entry(struct s_cache_entry *);
// void render_debug_update_cache_entry_main_thread(struct s_cache_entry *);
// long render_debug_add_cache_string(char const *);
// void render_debug_build_circle_points(float, union real_point2d *, long);
// void render_debug_build_ellipse_points(float, float, union real_point2d *, long);
// void render_debug_build_pill_points(union real_point3d const *, union vector3d const *, float, float, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *);
// float build_height_matrix(union real_point3d const *, union vector3d const *, struct real_matrix4x3*);
// bool render_debug_allowed_in_current_thread(void);
// public: c_render_debug_line_drawer::c_render_debug_line_drawer(void);
// public: c_render_debug_line_drawer::~c_render_debug_line_drawer(void);
// private: void c_render_debug_line_drawer::flush(void);
// public: void c_render_debug_line_drawer::set_color(union argb_color const *);
// public: void c_render_debug_line_drawer::set_color(unsigned long);
// public: void c_render_debug_line_drawer::add_line_2d(union int16_point2d const *, union int16_point2d const *, unsigned long, unsigned long);
// public: void c_render_debug_line_drawer::add_line_2d(union int16_point2d const *, union int16_point2d const *);
// public: void c_render_debug_line_drawer::add_line_2d(union real_point2d const *, union real_point2d const *, unsigned long, unsigned long);
// public: void c_render_debug_line_drawer::add_line_2d(union real_point2d const *, union real_point2d const *);
// public: void c_render_debug_line_drawer::add_line_3d(union real_point3d const *, union real_point3d const *);
// public: void c_render_debug_line_drawer::add_line_3d_unclipped(union real_point3d const *, union real_point3d const *);
// public: c_render_debug_duration_scoper::c_render_debug_duration_scoper(float);
// public: c_render_debug_duration_scoper::~c_render_debug_duration_scoper(void);
// public: c_render_debug_cache_entry_flags_scoper::c_render_debug_cache_entry_flags_scoper(class c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: c_render_debug_cache_entry_flags_scoper::~c_render_debug_cache_entry_flags_scoper(void);
// public: c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_render_debug_context);
// public: enum e_render_debug_context c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_render_debug_context(void) const;
// public: bool c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_render_debug_context) const;
// public: void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: c_ear_triangulation<32>::c_ear_triangulation<32>(void);
// public: c_ear_triangulation<32>::~c_ear_triangulation<32>(void);
// public: bool t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::valid(void) const;
// public: c_triangulation<32>::c_triangulation<32>(void);
// public: c_triangulation<32>::~c_triangulation<32>(void);
// public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_render_debug_cache_entry_flag) const;
// public: c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::initialize(void);
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::dispose(void);
// public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::queue_event(struct s_render_debug_deferred_entry_event *);
// public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::release_chain_top_event(struct s_render_debug_deferred_entry_event *);
// public: bool c_triangulation<32>::calculate(union real_point3d const *, long, union vector3d const *);
// public: long c_ear_triangulation<32>::get_data(struct s_ear_triangle *, long);
// private: virtual bool c_ear_triangulation<32>::internal_calculate(union real_point2d const *, long);
// public: void c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_render_debug_cache_entry_flag);
// private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_render_debug_cache_entry_flag);
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::initialize_limited(long);
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::reset(void);
// public: bool t_event_queue<struct s_render_debug_deferred_entry_event, 128>::valid_event(void const *) const;
// public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: bool c_triangulation<32>::calculate(union real_point2d const *, long);
// public: static long s_static_array<struct s_render_debug_deferred_entry_event, 128>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 128>::get_elements(void);
// private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: struct s_render_debug_deferred_entry_event & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 128>::operator[]<long>(long);
// public: struct s_render_debug_deferred_entry_event const & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<int>(int) const;
// public: struct s_render_debug_deferred_entry_event const & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<long>(long) const;
// private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_render_debug_cache_entry_flag);
// public: static bool s_static_array<struct s_render_debug_deferred_entry_event, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 128>::valid<long>(long);
// long abs(long);
// public: static bool s_static_array<struct s_render_debug_deferred_entry_event, 128>::valid<int>(int);
// union real_point2d * set_real_point2d(union real_point2d *, float, float);
// union real_point2d * point_from_line2d(union real_point2d const *, union vector2d const *, float, union real_point2d *);
// union real_point2d * midpoint2d(union real_point2d const *, union real_point2d const *, union real_point2d *);
// union real_point3d * project_point2d(union real_point2d const *, struct plane3d const *, short, bool, union real_point3d *);
// union real_point3d * midpoint3d(union real_point3d const *, union real_point3d const *, union real_point3d *);
// float plane3d_distance_to_point(struct plane3d const *, union real_point3d const *);
// union real_point3d * rectangle3d_center(union real_rectangle3d const *, union real_point3d *);
// public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::free_memory(void);
// public: t_event_queue<struct s_render_debug_deferred_entry_event, 128>::t_event_queue<struct s_render_debug_deferred_entry_event, 128>(void);
// public: s_static_array<struct s_render_debug_deferred_entry_event, 128>::s_static_array<struct s_render_debug_deferred_entry_event, 128>(void);
// public: s_render_debug_deferred_entry_event::s_render_debug_deferred_entry_event(void);
// public: s_cache_entry::s_cache_entry(void);
// public: c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>(void);
// public: t_event_queue<struct s_render_debug_deferred_entry_event, 128>::~t_event_queue<struct s_render_debug_deferred_entry_event, 128>(void);
// void g_render_debug_globals_allocator::`dynamic atexit destructor'(void);
// void g_render_debug_deferred_entries::`dynamic atexit destructor'(void);

//void __tls_set_g_render_debug_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z");
//};

//void rasterizer_debug_line(union real_point3d const *, union real_point3d const *, union argb_color const *, union argb_color const *)
//{
//    mangled_ppc("?rasterizer_debug_line@@YAXPBTreal_point3d@@0PBTargb_color@@1@Z");
//};

//void rasterizer_debug_line2d(union real_point2d const *, union real_point2d const *, union argb_color const *, union argb_color const *)
//{
//    mangled_ppc("?rasterizer_debug_line2d@@YAXPBTreal_point2d@@0PBTargb_color@@1@Z");
//};

//void rasterizer_debug_triangle(union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?rasterizer_debug_triangle@@YAXPBTreal_point3d@@00PBTargb_color@@@Z");
//};

//void rasterizer_debug_quad_screenspace(union real_point2d const *, unsigned long const *)
//{
//    mangled_ppc("?rasterizer_debug_quad_screenspace@@YAXPBTreal_point2d@@PBK@Z");
//};

//void render_debug_initialize(void)
//{
//    mangled_ppc("?render_debug_initialize@@YAXXZ");
//};

//void render_debug_dispose(void)
//{
//    mangled_ppc("?render_debug_dispose@@YAXXZ");
//};

//bool render_debug_initialized(void)
//{
//    mangled_ppc("?render_debug_initialized@@YA_NXZ");
//};

//void render_debug_begin(void)
//{
//    mangled_ppc("?render_debug_begin@@YAXXZ");
//};

//struct s_render_debug_globals * get_render_debug_globals(void)
//{
//    mangled_ppc("?get_render_debug_globals@@YAPAUs_render_debug_globals@@XZ");
//};

//void render_debug_end(bool)
//{
//    mangled_ppc("?render_debug_end@@YAX_N@Z");
//};

//void render_debug_update(void)
//{
//    mangled_ppc("?render_debug_update@@YAXXZ");
//};

//public: c_mtp_profiler_context::c_mtp_profiler_context(unsigned short)
//{
//    mangled_ppc("??0c_mtp_profiler_context@@QAA@G@Z");
//};

//public: c_mtp_profiler_context::~c_mtp_profiler_context(void)
//{
//    mangled_ppc("??1c_mtp_profiler_context@@QAA@XZ");
//};

//public: c_game_tag_defense_push_scope::c_game_tag_defense_push_scope(bool)
//{
//    mangled_ppc("??0c_game_tag_defense_push_scope@@QAA@_N@Z");
//};

//public: c_game_tag_defense_push_scope::~c_game_tag_defense_push_scope(void)
//{
//    mangled_ppc("??1c_game_tag_defense_push_scope@@QAA@XZ");
//};

//void game_tag_defense_push(bool)
//{
//    mangled_ppc("?game_tag_defense_push@@YAX_N@Z");
//};

//void game_tag_defense_pop(void)
//{
//    mangled_ppc("?game_tag_defense_pop@@YAXXZ");
//};

//void render_debug_process_deferred_events(void)
//{
//    mangled_ppc("?render_debug_process_deferred_events@@YAXXZ");
//};

//void render_debug_game_tick(void)
//{
//    mangled_ppc("?render_debug_game_tick@@YAXXZ");
//};

//bool render_debug_active(void)
//{
//    mangled_ppc("?render_debug_active@@YA_NXZ");
//};

//void render_debug_group_begin(union real_point3d const *)
//{
//    mangled_ppc("?render_debug_group_begin@@YAXPBTreal_point3d@@@Z");
//};

//void render_debug_group_end(void)
//{
//    mangled_ppc("?render_debug_group_end@@YAXXZ");
//};

//void render_debug_notify_game_tick_begin(void)
//{
//    mangled_ppc("?render_debug_notify_game_tick_begin@@YAXXZ");
//};

//void render_debug_notify_game_tick_end(void)
//{
//    mangled_ppc("?render_debug_notify_game_tick_end@@YAXXZ");
//};

//union argb_color const * render_debug_random_color(union argb_color *)
//{
//    mangled_ppc("?render_debug_random_color@@YAPBTargb_color@@PAT1@@Z");
//};

//unsigned short _random(unsigned long *, char const *, char const *, unsigned long)
//{
//    mangled_ppc("?_random@@YAGPAKPBD1K@Z");
//};

//union argb_color const * render_debug_unique_color(long, union argb_color *)
//{
//    mangled_ppc("?render_debug_unique_color@@YAPBTargb_color@@JPAT1@@Z");
//};

//union rgb_color const * render_debug_palette_color(long, union rgb_color *)
//{
//    mangled_ppc("?render_debug_palette_color@@YAPBTrgb_color@@JPAT1@@Z");
//};

//void render_debug_spray(void (*)(struct collision_result *, void *), struct s_collision_test_flags, long, long, void *)
//{
//    mangled_ppc("?render_debug_spray@@YAXP6AXPAUcollision_result@@PAX@ZUs_collision_test_flags@@JJ1@Z");
//};

//public: collision_result::collision_result(void)
//{
//    mangled_ppc("??0collision_result@@QAA@XZ");
//};

//public: c_global_material_type::c_global_material_type(void)
//{
//    mangled_ppc("??0c_global_material_type@@QAA@XZ");
//};

//void render_debug_text_using_simple_font(bool)
//{
//    mangled_ppc("?render_debug_text_using_simple_font@@YAX_N@Z");
//};

//void render_debug_point2d(bool, struct plane3d const *, short, bool, union real_point2d const *, float, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_point2d@@YAX_NPBUplane3d@@F0PBTreal_point2d@@MPBTargb_color@@M@Z");
//};

//void render_debug_line2d(union real_point2d const *, union real_point2d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line2d@@YAXPBTreal_point2d@@0PBTargb_color@@@Z");
//};

//void render_debug_line2d(bool, struct plane3d const *, short, bool, union real_point2d const *, union real_point2d const *, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_line2d@@YAX_NPBUplane3d@@F0PBTreal_point2d@@2PBTargb_color@@M@Z");
//};

//void render_debug_vector2d(bool, struct plane3d const *, short, bool, union real_point2d const *, union vector2d const *, float, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_vector2d@@YAX_NPBUplane3d@@F0PBTreal_point2d@@PBTvector2d@@MPBTargb_color@@M@Z");
//};

//void render_debug_circle(bool, struct plane3d const *, short, bool, union real_point2d const *, float, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_circle@@YAX_NPBUplane3d@@F0PBTreal_point2d@@MPBTargb_color@@M@Z");
//};

//void render_debug_circle(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_circle@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_ellipse(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_ellipse@@YAX_NPBTreal_point3d@@PBTvector3d@@2MMPBTargb_color@@@Z");
//};

//void render_debug_polygon_regular(bool, union real_point3d const *, long, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_polygon_regular@@YAX_NPBTreal_point3d@@JPBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_screenspace_quad(bool, union real_point2d const *, unsigned long const *)
//{
//    mangled_ppc("?render_debug_screenspace_quad@@YAX_NPBTreal_point2d@@PBK@Z");
//};

//void render_debug_point(bool, union real_point3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_point@@YAX_NPBTreal_point3d@@MPBTargb_color@@@Z");
//};

//void render_debug_line(bool, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line@@YAX_NPBTreal_point3d@@1PBTargb_color@@@Z");
//};

//void render_debug_line_shaded(bool, union real_point3d const *, union real_point3d const *, union argb_color const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line_shaded@@YAX_NPBTreal_point3d@@1PBTargb_color@@2@Z");
//};

//void render_debug_line2d_shaded(union real_point2d const *, union real_point2d const *, union argb_color const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line2d_shaded@@YAXPBTreal_point2d@@0PBTargb_color@@1@Z");
//};

//void render_debug_line_unclipped(bool, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line_unclipped@@YAX_NPBTreal_point3d@@1PBTargb_color@@@Z");
//};

//void render_debug_line_non_occluded(bool, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_line_non_occluded@@YAX_NPBTreal_point3d@@1PBTargb_color@@@Z");
//};

//void render_debug_vector(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_vector@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_tick(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_tick@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_line_offset(bool, union real_point3d const *, union real_point3d const *, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_line_offset@@YAX_NPBTreal_point3d@@1PBTargb_color@@M@Z");
//};

//void render_debug_vectors(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?render_debug_vectors@@YAX_NPBTreal_point3d@@PBTvector3d@@2M@Z");
//};

//void render_debug_quaternion(bool, union real_point3d const *, struct real32_quaternion const *, float)
//{
//    mangled_ppc("?render_debug_quaternion@@YAX_NPBTreal_point3d@@PBUreal32_quaternion@@M@Z");
//};

//void render_debug_matrix(bool, struct real_matrix4x3const *, float)
//{
//    mangled_ppc("?render_debug_matrix@@YAX_NPBUreal_matrix4x3@@M@Z");
//};

//void render_debug_matrix3x3(bool, struct matrix3x3const *, union real_point3d const *, float)
//{
//    mangled_ppc("?render_debug_matrix3x3@@YAX_NPBUmatrix3x3@@PBTreal_point3d@@M@Z");
//};

//void render_debug_triangle(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_triangle@@YAX_NPBTreal_point3d@@11PBTargb_color@@@Z");
//};

//void render_debug_triangle_outline(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_triangle_outline@@YAX_NPBTreal_point3d@@11PBTargb_color@@@Z");
//};

//void render_debug_quadrilateral(bool, union real_point3d const *, union real_point3d const *, union real_point3d const *, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_quadrilateral@@YAX_NPBTreal_point3d@@111PBTargb_color@@@Z");
//};

//void render_debug_sphere(bool, union real_point3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_sphere@@YAX_NPBTreal_point3d@@MPBTargb_color@@@Z");
//};

//void render_debug_sphere_filled(bool, union real_point3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_sphere_filled@@YAX_NPBTreal_point3d@@MPBTargb_color@@@Z");
//};

//void render_debug_cylinder(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_cylinder@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_beveled_cylinder(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_beveled_cylinder@@YAX_NPBTreal_point3d@@PBTvector3d@@MMPBTargb_color@@@Z");
//};

//void render_debug_pill(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_pill@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_pill_filled(bool, union real_point3d const *, union vector3d const *, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_pill_filled@@YAX_NPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@@Z");
//};

//void render_debug_box2d_outline(bool, union real_rectangle2d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box2d_outline@@YAX_NPBTreal_rectangle2d@@PBTargb_color@@@Z");
//};

//void render_debug_box(bool, union real_rectangle3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box@@YAX_NPBTreal_rectangle3d@@PBTargb_color@@@Z");
//};

//void render_debug_box_oriented(bool, union real_rectangle3d const *, struct real_matrix4x3const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box_oriented@@YAX_NPBTreal_rectangle3d@@PBUreal_matrix4x3@@PBTargb_color@@@Z");
//};

//void render_debug_box_outline(bool, union real_rectangle3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box_outline@@YAX_NPBTreal_rectangle3d@@PBTargb_color@@@Z");
//};

//void render_debug_box_outline_oriented(bool, union real_rectangle3d const *, struct real_matrix4x3const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box_outline_oriented@@YAX_NPBTreal_rectangle3d@@PBUreal_matrix4x3@@PBTargb_color@@@Z");
//};

//void render_debug_box_outline_unclipped(bool, union real_rectangle3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_box_outline_unclipped@@YAX_NPBTreal_rectangle3d@@PBTargb_color@@@Z");
//};

//void render_debug_convex_shape(bool, struct plane3d const *, long, union real_point3d const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_convex_shape@@YAX_NPBUplane3d@@JPBTreal_point3d@@PBTargb_color@@@Z");
//};

//void render_debug_polygon(union real_point3d const *, short, union argb_color const *)
//{
//    mangled_ppc("?render_debug_polygon@@YAXPBTreal_point3d@@FPBTargb_color@@@Z");
//};

//void render_debug_polygon_edges(union real_point3d const *, short, union argb_color const *)
//{
//    mangled_ppc("?render_debug_polygon_edges@@YAXPBTreal_point3d@@FPBTargb_color@@@Z");
//};

//void render_debug_line_strip(union real_point3d const *, union real_point3d const *, short, union argb_color const *, union argb_color const *, bool)
//{
//    mangled_ppc("?render_debug_line_strip@@YAXPBTreal_point3d@@0FPBTargb_color@@1_N@Z");
//};

//void render_debug_concave_polygon(union real_point3d const *, short, union argb_color const *, union vector3d const *)
//{
//    mangled_ppc("?render_debug_concave_polygon@@YAXPBTreal_point3d@@FPBTargb_color@@PBTvector3d@@@Z");
//};

//void render_arrow_from_points(union real_point3d const *, union real_point3d const *, union argb_color const *, bool)
//{
//    mangled_ppc("?render_arrow_from_points@@YAXPBTreal_point3d@@0PBTargb_color@@_N@Z");
//};

//void render_arrow(union real_point3d const *, union vector3d const *, float, union argb_color const *, bool)
//{
//    mangled_ppc("?render_arrow@@YAXPBTreal_point3d@@PBTvector3d@@MPBTargb_color@@_N@Z");
//};

//void render_pretty_arrow(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float, float, union argb_color const *, bool)
//{
//    mangled_ppc("?render_pretty_arrow@@YAXPBTreal_point3d@@0PBTvector3d@@MMMPBTargb_color@@_N@Z");
//};

//void render_2D_arrow(union real_point3d const *, union real_point3d const *, union vector3d const *, float, float, union argb_color const *, bool)
//{
//    mangled_ppc("?render_2D_arrow@@YAXPBTreal_point3d@@0PBTvector3d@@MMPBTargb_color@@_N@Z");
//};

//void render_debug_k_graph(union real_point3d const *, short, union argb_color const *)
//{
//    mangled_ppc("?render_debug_k_graph@@YAXPBTreal_point3d@@FPBTargb_color@@@Z");
//};

//void render_debug_cone_filled(bool, union real_point3d const *, union vector3d const *, float, float, bool, union argb_color const *)
//{
//    mangled_ppc("?render_debug_cone_filled@@YAX_NPBTreal_point3d@@PBTvector3d@@MM0PBTargb_color@@@Z");
//};

//void render_debug_cone_build_points(union real_point3d const *, union vector3d const *, float, float, union real_point3d *, union real_point3d *, long)
//{
//    mangled_ppc("?render_debug_cone_build_points@@YAXPBTreal_point3d@@PBTvector3d@@MMPAT1@2J@Z");
//};

//void render_debug_build_circle_points3d(union real_point3d const *, union vector3d const *, float, union real_point3d *, long)
//{
//    mangled_ppc("?render_debug_build_circle_points3d@@YAXPBTreal_point3d@@PBTvector3d@@MPAT1@J@Z");
//};

//void render_debug_cone_outline(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_cone_outline@@YAX_NPBTreal_point3d@@PBTvector3d@@MMPBTargb_color@@@Z");
//};

//void render_debug_cone_outline_from_points(bool, union real_point3d const *, union real_point3d const *, long, union argb_color const *)
//{
//    mangled_ppc("?render_debug_cone_outline_from_points@@YAX_NPBTreal_point3d@@1JPBTargb_color@@@Z");
//};

//void render_debug_snowcone_outline(bool, union real_point3d const *, union vector3d const *, float, float, union argb_color const *)
//{
//    mangled_ppc("?render_debug_snowcone_outline@@YAX_NPBTreal_point3d@@PBTvector3d@@MMPBTargb_color@@@Z");
//};

//void render_debug_string(char const *)
//{
//    mangled_ppc("?render_debug_string@@YAXPBD@Z");
//};

//void render_debug_string_with_tabs(char const *, short, short const *)
//{
//    mangled_ppc("?render_debug_string_with_tabs@@YAXPBDFPBF@Z");
//};

//void render_debug_string_force_simple_font(char const *)
//{
//    mangled_ppc("?render_debug_string_force_simple_font@@YAXPBD@Z");
//};

//void render_debug_refresh_all_string_references(void)
//{
//    mangled_ppc("?render_debug_refresh_all_string_references@@YAXXZ");
//};

//void render_debug_refresh_string_references(struct s_cache_entry *)
//{
//    mangled_ppc("?render_debug_refresh_string_references@@YAXPAUs_cache_entry@@@Z");
//};

//void render_debug_age_and_clear_expired_cache_entries(class c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>, float)
//{
//    mangled_ppc("?render_debug_age_and_clear_expired_cache_entries@@YAXV?$c_enum@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@M@Z");
//};

//void render_debug_age_cache_entry(struct s_cache_entry *, float)
//{
//    mangled_ppc("?render_debug_age_cache_entry@@YAXPAUs_cache_entry@@M@Z");
//};

//void render_debug_string_at_point(union real_point3d const *, char const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_string_at_point@@YAXPBTreal_point3d@@PBDPBTargb_color@@@Z");
//};

//void render_debug_string_at_point_force_simple_font(union real_point3d const *, char const *, union argb_color const *)
//{
//    mangled_ppc("?render_debug_string_at_point_force_simple_font@@YAXPBTreal_point3d@@PBDPBTargb_color@@@Z");
//};

//void render_debug_string_at_point_with_perspective(union real_point3d const *, char const *, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_string_at_point_with_perspective@@YAXPBTreal_point3d@@PBDPBTargb_color@@M@Z");
//};

//void render_debug_string_at_point_with_perspective_force_simple_font(union real_point3d const *, char const *, union argb_color const *, float)
//{
//    mangled_ppc("?render_debug_string_at_point_with_perspective_force_simple_font@@YAXPBTreal_point3d@@PBDPBTargb_color@@M@Z");
//};

//void render_debug_cache_sort(void)
//{
//    mangled_ppc("?render_debug_cache_sort@@YAXXZ");
//};

//bool render_debug_cache_sort_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?render_debug_cache_sort_function@@YA_NPBX00@Z");
//};

//void render_debug_cache_draw(bool)
//{
//    mangled_ppc("?render_debug_cache_draw@@YAX_N@Z");
//};

//void render_debug_string_immediate(bool, short const *, short, char const *)
//{
//    mangled_ppc("?render_debug_string_immediate@@YAX_NPBFFPBD@Z");
//};

//public: virtual c_simple_font_draw_string::~c_simple_font_draw_string(void)
//{
//    mangled_ppc("??1c_simple_font_draw_string@@UAA@XZ");
//};

//void render_debug_string_at_point_immediate(union real_point3d const *, char const *, union argb_color const *, float, bool)
//{
//    mangled_ppc("?render_debug_string_at_point_immediate@@YAXPBTreal_point3d@@PBDPBTargb_color@@M_N@Z");
//};

//public: void c_draw_string::set_scale(float)
//{
//    mangled_ppc("?set_scale@c_draw_string@@QAAXM@Z");
//};

//bool render_debug_draw_immediately(union argb_color const *)
//{
//    mangled_ppc("?render_debug_draw_immediately@@YA_NPBTargb_color@@@Z");
//};

//bool render_debug_cache_currently_drawing(void)
//{
//    mangled_ppc("?render_debug_cache_currently_drawing@@YA_NXZ");
//};

//struct s_cache_entry * render_debug_allocate_cache_entry(void)
//{
//    mangled_ppc("?render_debug_allocate_cache_entry@@YAPAUs_cache_entry@@XZ");
//};

//void render_debug_add_cache_entry(short, ...)
//{
//    mangled_ppc("?render_debug_add_cache_entry@@YAXFZZ");
//};

//void render_debug_free_last_cache_entry(struct s_cache_entry *)
//{
//    mangled_ppc("?render_debug_free_last_cache_entry@@YAXPAUs_cache_entry@@@Z");
//};

//void render_debug_update_cache_entry_main_thread(struct s_cache_entry *)
//{
//    mangled_ppc("?render_debug_update_cache_entry_main_thread@@YAXPAUs_cache_entry@@@Z");
//};

//long render_debug_add_cache_string(char const *)
//{
//    mangled_ppc("?render_debug_add_cache_string@@YAJPBD@Z");
//};

//void render_debug_build_circle_points(float, union real_point2d *, long)
//{
//    mangled_ppc("?render_debug_build_circle_points@@YAXMPATreal_point2d@@J@Z");
//};

//void render_debug_build_ellipse_points(float, float, union real_point2d *, long)
//{
//    mangled_ppc("?render_debug_build_ellipse_points@@YAXMMPATreal_point2d@@J@Z");
//};

//void render_debug_build_pill_points(union real_point3d const *, union vector3d const *, float, float, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?render_debug_build_pill_points@@YAXPBTreal_point3d@@PBTvector3d@@MMPAT1@22222@Z");
//};

//float build_height_matrix(union real_point3d const *, union vector3d const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?build_height_matrix@@YAMPBTreal_point3d@@PBTvector3d@@PAUreal_matrix4x3@@@Z");
//};

//bool render_debug_allowed_in_current_thread(void)
//{
//    mangled_ppc("?render_debug_allowed_in_current_thread@@YA_NXZ");
//};

//public: c_render_debug_line_drawer::c_render_debug_line_drawer(void)
//{
//    mangled_ppc("??0c_render_debug_line_drawer@@QAA@XZ");
//};

//public: c_render_debug_line_drawer::~c_render_debug_line_drawer(void)
//{
//    mangled_ppc("??1c_render_debug_line_drawer@@QAA@XZ");
//};

//private: void c_render_debug_line_drawer::flush(void)
//{
//    mangled_ppc("?flush@c_render_debug_line_drawer@@AAAXXZ");
//};

//public: void c_render_debug_line_drawer::set_color(union argb_color const *)
//{
//    mangled_ppc("?set_color@c_render_debug_line_drawer@@QAAXPBTargb_color@@@Z");
//};

//public: void c_render_debug_line_drawer::set_color(unsigned long)
//{
//    mangled_ppc("?set_color@c_render_debug_line_drawer@@QAAXK@Z");
//};

//public: void c_render_debug_line_drawer::add_line_2d(union int16_point2d const *, union int16_point2d const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?add_line_2d@c_render_debug_line_drawer@@QAAXPBTint16_point2d@@0KK@Z");
//};

//public: void c_render_debug_line_drawer::add_line_2d(union int16_point2d const *, union int16_point2d const *)
//{
//    mangled_ppc("?add_line_2d@c_render_debug_line_drawer@@QAAXPBTint16_point2d@@0@Z");
//};

//public: void c_render_debug_line_drawer::add_line_2d(union real_point2d const *, union real_point2d const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?add_line_2d@c_render_debug_line_drawer@@QAAXPBTreal_point2d@@0KK@Z");
//};

//public: void c_render_debug_line_drawer::add_line_2d(union real_point2d const *, union real_point2d const *)
//{
//    mangled_ppc("?add_line_2d@c_render_debug_line_drawer@@QAAXPBTreal_point2d@@0@Z");
//};

//public: void c_render_debug_line_drawer::add_line_3d(union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?add_line_3d@c_render_debug_line_drawer@@QAAXPBTreal_point3d@@0@Z");
//};

//public: void c_render_debug_line_drawer::add_line_3d_unclipped(union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?add_line_3d_unclipped@c_render_debug_line_drawer@@QAAXPBTreal_point3d@@0@Z");
//};

//public: c_render_debug_duration_scoper::c_render_debug_duration_scoper(float)
//{
//    mangled_ppc("??0c_render_debug_duration_scoper@@QAA@M@Z");
//};

//public: c_render_debug_duration_scoper::~c_render_debug_duration_scoper(void)
//{
//    mangled_ppc("??1c_render_debug_duration_scoper@@QAA@XZ");
//};

//public: c_render_debug_cache_entry_flags_scoper::c_render_debug_cache_entry_flags_scoper(class c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0c_render_debug_cache_entry_flags_scoper@@QAA@V?$c_flags@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_render_debug_cache_entry_flags_scoper::~c_render_debug_cache_entry_flags_scoper(void)
//{
//    mangled_ppc("??1c_render_debug_cache_entry_flags_scoper@@QAA@XZ");
//};

//public: c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_render_debug_context)
//{
//    mangled_ppc("??0?$c_enum@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_render_debug_context@@@Z");
//};

//public: enum e_render_debug_context c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_render_debug_context(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_render_debug_context@@XZ");
//};

//public: bool c_enum_no_init<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_render_debug_context) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_render_debug_context@@@Z");
//};

//public: void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: c_ear_triangulation<32>::c_ear_triangulation<32>(void)
//{
//    mangled_ppc("??0?$c_ear_triangulation@$0CA@@@QAA@XZ");
//};

//public: c_ear_triangulation<32>::~c_ear_triangulation<32>(void)
//{
//    mangled_ppc("??1?$c_ear_triangulation@$0CA@@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: c_triangulation<32>::c_triangulation<32>(void)
//{
//    mangled_ppc("??0?$c_triangulation@$0CA@@@QAA@XZ");
//};

//public: c_triangulation<32>::~c_triangulation<32>(void)
//{
//    mangled_ppc("??1?$c_triangulation@$0CA@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_render_debug_cache_entry_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_render_debug_cache_entry_flag@@@Z");
//};

//public: c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAXXZ");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::dispose(void)
//{
//    mangled_ppc("?dispose@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAXXZ");
//};

//public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAPAUs_render_debug_deferred_entry_event@@XZ");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::queue_event(struct s_render_debug_deferred_entry_event *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAXPAUs_render_debug_deferred_entry_event@@@Z");
//};

//public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAPAUs_render_debug_deferred_entry_event@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_render_debug_deferred_entry_event * t_event_queue<struct s_render_debug_deferred_entry_event, 128>::release_chain_top_event(struct s_render_debug_deferred_entry_event *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAPAUs_render_debug_deferred_entry_event@@PAU2@@Z");
//};

//public: bool c_triangulation<32>::calculate(union real_point3d const *, long, union vector3d const *)
//{
//    mangled_ppc("?calculate@?$c_triangulation@$0CA@@@QAA_NPBTreal_point3d@@JPBTvector3d@@@Z");
//};

//public: long c_ear_triangulation<32>::get_data(struct s_ear_triangle *, long)
//{
//    mangled_ppc("?get_data@?$c_ear_triangulation@$0CA@@@QAAJPAUs_ear_triangle@@J@Z");
//};

//private: virtual bool c_ear_triangulation<32>::internal_calculate(union real_point2d const *, long)
//{
//    mangled_ppc("?internal_calculate@?$c_ear_triangulation@$0CA@@@EAA_NPBTreal_point2d@@J@Z");
//};

//public: void c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_render_debug_cache_entry_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_render_debug_cache_entry_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_render_debug_cache_entry_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_render_debug_cache_entry_flag@@@Z");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAXJ@Z");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::reset(void)
//{
//    mangled_ppc("?reset@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAAXXZ");
//};

//public: bool t_event_queue<struct s_render_debug_deferred_entry_event, 128>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_render_debug_deferred_entry_event, 128>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: bool c_triangulation<32>::calculate(union real_point2d const *, long)
//{
//    mangled_ppc("?calculate@?$c_triangulation@$0CA@@@QAA_NPBTreal_point2d@@J@Z");
//};

//public: static long s_static_array<struct s_render_debug_deferred_entry_event, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 128>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$0IA@@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: struct s_render_debug_deferred_entry_event & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@QAAAAUs_render_debug_deferred_entry_event@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$0IA@@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: struct s_render_debug_deferred_entry_event const & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@QBAABUs_render_debug_deferred_entry_event@@H@Z");
//};

//public: struct s_render_debug_deferred_entry_event const & s_static_array<struct s_render_debug_deferred_entry_event, 128>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@QBAABUs_render_debug_deferred_entry_event@@J@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_render_debug_cache_entry_flag, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_render_debug_cache_entry_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_render_debug_cache_entry_flag@@E$00Us_default_enum_string_resolver@@@@CAEW4e_render_debug_cache_entry_flag@@@Z");
//};

//public: static bool s_static_array<struct s_render_debug_deferred_entry_event, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$0IA@@@SA_NJ@Z");
//};

//long abs(long)
//{
//    mangled_ppc("?abs@@YAJJ@Z");
//};

//public: static bool s_static_array<struct s_render_debug_deferred_entry_event, 128>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@SA_NH@Z");
//};

//union real_point2d * set_real_point2d(union real_point2d *, float, float)
//{
//    mangled_ppc("?set_real_point2d@@YAPATreal_point2d@@PAT1@MM@Z");
//};

//union real_point2d * point_from_line2d(union real_point2d const *, union vector2d const *, float, union real_point2d *)
//{
//    mangled_ppc("?point_from_line2d@@YAPATreal_point2d@@PBT1@PBTvector2d@@MPAT1@@Z");
//};

//union real_point2d * midpoint2d(union real_point2d const *, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?midpoint2d@@YAPATreal_point2d@@PBT1@0PAT1@@Z");
//};

//union real_point3d * project_point2d(union real_point2d const *, struct plane3d const *, short, bool, union real_point3d *)
//{
//    mangled_ppc("?project_point2d@@YAPATreal_point3d@@PBTreal_point2d@@PBUplane3d@@F_NPAT1@@Z");
//};

//union real_point3d * midpoint3d(union real_point3d const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?midpoint3d@@YAPATreal_point3d@@PBT1@0PAT1@@Z");
//};

//float plane3d_distance_to_point(struct plane3d const *, union real_point3d const *)
//{
//    mangled_ppc("?plane3d_distance_to_point@@YAMPBUplane3d@@PBTreal_point3d@@@Z");
//};

//union real_point3d * rectangle3d_center(union real_rectangle3d const *, union real_point3d *)
//{
//    mangled_ppc("?rectangle3d_center@@YAPATreal_point3d@@PBTreal_rectangle3d@@PAT1@@Z");
//};

//public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_event_queue<struct s_render_debug_deferred_entry_event, 128>::t_event_queue<struct s_render_debug_deferred_entry_event, 128>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAA@XZ");
//};

//public: s_static_array<struct s_render_debug_deferred_entry_event, 128>::s_static_array<struct s_render_debug_deferred_entry_event, 128>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_render_debug_deferred_entry_event@@$0IA@@@QAA@XZ");
//};

//public: s_render_debug_deferred_entry_event::s_render_debug_deferred_entry_event(void)
//{
//    mangled_ppc("??0s_render_debug_deferred_entry_event@@QAA@XZ");
//};

//public: s_cache_entry::s_cache_entry(void)
//{
//    mangled_ppc("??0s_cache_entry@@QAA@XZ");
//};

//public: c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_render_debug_context, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_render_debug_context@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_event_queue<struct s_render_debug_deferred_entry_event, 128>::~t_event_queue<struct s_render_debug_deferred_entry_event, 128>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_render_debug_deferred_entry_event@@$0IA@@@QAA@XZ");
//};

//void g_render_debug_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_debug_globals_allocator@@YAXXZ");
//};

//void g_render_debug_deferred_entries::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_debug_deferred_entries@@YAXXZ");
//};

