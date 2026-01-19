/* ---------- headers */

#include "omaha\ai\path_influence_map.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_path_influence_data_allocator::*)(void *)> g_path_influence_data_allocator; // "?g_path_influence_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *path_influence_data; // "?path_influence_data@@3PAUs_data_array@@A"

// public: void c_bresenham_cell_iterator::start(long, long, long, long);
// public: bool c_bresenham_cell_iterator::next(void);
// void __tls_set_g_path_influence_data_allocator(void *);
// void path_influence_initialize(void);
// void path_influence_dispose(void);
// void path_influence_initialize_for_new_map(void);
// void path_influence_dispose_from_old_map(void);
// void path_influence_update(void);
// long path_influence_datum_index_get(enum e_campaign_team);
// void path_influence_map_get_position(long, short, union real_point3d *);
// short path_influence_map_find_cell_index(long, union real_point3d const *);
// float path_influence_map_get_cell_value(long, short);
// float path_influence_map_get_position_value(long, union real_point3d const *);
// float path_influence_map_get_line_segment_value(long, union real_point3d const *, union vector3d const *);
// short path_influence_map_get_row_index(long, union real_point3d const *);
// short path_influence_map_get_column_index(long, union real_point3d const *);
// void path_influence_map_get_obstacles_in_sphere(long, struct obstacles *, union real_point3d const *, float);
// void path_influence_map_ping_cell(long, short, float);
// void path_influence_map_affect_position(long, union real_point3d const *, float);
// void path_influence_map_affect_position(enum e_campaign_team, union real_point3d const *, float);
// void path_influence_map_affect_line_segment(long, union real_point3d const *, union vector3d const *, float);
// void path_influence_map_affect_line_segment(enum e_campaign_team, union real_point3d const *, union vector3d const *, float);
// void path_influence_handle_death(enum e_campaign_team, union real_point3d const *, union real_point3d const *);
// void path_influence_handle_damage(enum e_campaign_team, union real_point3d const *);
// bool path_influence_map_position_valid(long, union real_point3d const *);
// void path_influence_map_update(long);
// bool path_influence_map_valid(long, enum e_campaign_team);
// void path_influence_map_clear(long);
// void path_influence_map_place(long, short);
// void path_influence_map_render(short);
// public: void c_data_iterator<struct s_path_influence_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_path_influence_datum>::next(void);
// public: long c_data_iterator<struct s_path_influence_datum>::get_index(void) const;
// public: short c_grid_2d<short, long, 50, 50>::find_cell_index(union real_point3d const *) const;
// public: short c_grid_2d<short, long, 50, 50>::build_cell_index(short, short) const;
// public: short c_grid_2d<short, long, 50, 50>::get_row_index(union real_point3d const *) const;
// public: short c_grid_2d<short, long, 50, 50>::get_column_index(union real_point3d const *) const;
// public: bool c_grid_2d<short, long, 50, 50>::position_valid(union real_point3d const *) const;
// public: union real_point3d * c_grid_2d<short, long, 50, 50>::get_cell_position(short, union real_point3d *) const;
// public: long c_grid_2d<short, long, 50, 50>::get_cell_value(short) const;
// public: void c_grid_2d<short, long, 50, 50>::set_cell_value(short, long);
// public: void c_grid_2d<short, long, 50, 50>::initialize(long, float, union real_point3d const *);
// public: bool c_grid_2d<short, long, 50, 50>::valid_cell_index(short) const;
// public: void s_static_array<long, 2500>::set_memory(long);
// public: bool c_grid_2d<short, long, 50, 50>::position_valid_slow(union real_point3d const *) const;
// public: long const & s_static_array<long, 2500>::operator[]<short>(short) const;
// public: long & s_static_array<long, 2500>::operator[]<short>(short);
// public: static bool s_static_array<long, 2500>::valid<short>(short);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>(void);
// void g_path_influence_data_allocator::`dynamic atexit destructor'(void);

//public: void c_bresenham_cell_iterator::start(long, long, long, long)
//{
//    mangled_ppc("?start@c_bresenham_cell_iterator@@QAAXJJJJ@Z");
//};

//public: bool c_bresenham_cell_iterator::next(void)
//{
//    mangled_ppc("?next@c_bresenham_cell_iterator@@QAA_NXZ");
//};

//void __tls_set_g_path_influence_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z");
//};

//void path_influence_initialize(void)
//{
//    mangled_ppc("?path_influence_initialize@@YAXXZ");
//};

//void path_influence_dispose(void)
//{
//    mangled_ppc("?path_influence_dispose@@YAXXZ");
//};

//void path_influence_initialize_for_new_map(void)
//{
//    mangled_ppc("?path_influence_initialize_for_new_map@@YAXXZ");
//};

//void path_influence_dispose_from_old_map(void)
//{
//    mangled_ppc("?path_influence_dispose_from_old_map@@YAXXZ");
//};

//void path_influence_update(void)
//{
//    mangled_ppc("?path_influence_update@@YAXXZ");
//};

//long path_influence_datum_index_get(enum e_campaign_team)
//{
//    mangled_ppc("?path_influence_datum_index_get@@YAJW4e_campaign_team@@@Z");
//};

//void path_influence_map_get_position(long, short, union real_point3d *)
//{
//    mangled_ppc("?path_influence_map_get_position@@YAXJFPATreal_point3d@@@Z");
//};

//short path_influence_map_find_cell_index(long, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_map_find_cell_index@@YAFJPBTreal_point3d@@@Z");
//};

//float path_influence_map_get_cell_value(long, short)
//{
//    mangled_ppc("?path_influence_map_get_cell_value@@YAMJF@Z");
//};

//float path_influence_map_get_position_value(long, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_map_get_position_value@@YAMJPBTreal_point3d@@@Z");
//};

//float path_influence_map_get_line_segment_value(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?path_influence_map_get_line_segment_value@@YAMJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//short path_influence_map_get_row_index(long, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_map_get_row_index@@YAFJPBTreal_point3d@@@Z");
//};

//short path_influence_map_get_column_index(long, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_map_get_column_index@@YAFJPBTreal_point3d@@@Z");
//};

//void path_influence_map_get_obstacles_in_sphere(long, struct obstacles *, union real_point3d const *, float)
//{
//    mangled_ppc("?path_influence_map_get_obstacles_in_sphere@@YAXJPAUobstacles@@PBTreal_point3d@@M@Z");
//};

//void path_influence_map_ping_cell(long, short, float)
//{
//    mangled_ppc("?path_influence_map_ping_cell@@YAXJFM@Z");
//};

//void path_influence_map_affect_position(long, union real_point3d const *, float)
//{
//    mangled_ppc("?path_influence_map_affect_position@@YAXJPBTreal_point3d@@M@Z");
//};

//void path_influence_map_affect_position(enum e_campaign_team, union real_point3d const *, float)
//{
//    mangled_ppc("?path_influence_map_affect_position@@YAXW4e_campaign_team@@PBTreal_point3d@@M@Z");
//};

//void path_influence_map_affect_line_segment(long, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?path_influence_map_affect_line_segment@@YAXJPBTreal_point3d@@PBTvector3d@@M@Z");
//};

//void path_influence_map_affect_line_segment(enum e_campaign_team, union real_point3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?path_influence_map_affect_line_segment@@YAXW4e_campaign_team@@PBTreal_point3d@@PBTvector3d@@M@Z");
//};

//void path_influence_handle_death(enum e_campaign_team, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_handle_death@@YAXW4e_campaign_team@@PBTreal_point3d@@1@Z");
//};

//void path_influence_handle_damage(enum e_campaign_team, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_handle_damage@@YAXW4e_campaign_team@@PBTreal_point3d@@@Z");
//};

//bool path_influence_map_position_valid(long, union real_point3d const *)
//{
//    mangled_ppc("?path_influence_map_position_valid@@YA_NJPBTreal_point3d@@@Z");
//};

//void path_influence_map_update(long)
//{
//    mangled_ppc("?path_influence_map_update@@YAXJ@Z");
//};

//bool path_influence_map_valid(long, enum e_campaign_team)
//{
//    mangled_ppc("?path_influence_map_valid@@YA_NJW4e_campaign_team@@@Z");
//};

//void path_influence_map_clear(long)
//{
//    mangled_ppc("?path_influence_map_clear@@YAXJ@Z");
//};

//void path_influence_map_place(long, short)
//{
//    mangled_ppc("?path_influence_map_place@@YAXJF@Z");
//};

//void path_influence_map_render(short)
//{
//    mangled_ppc("?path_influence_map_render@@YAXF@Z");
//};

//public: void c_data_iterator<struct s_path_influence_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_path_influence_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_path_influence_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_path_influence_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_path_influence_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_path_influence_datum@@@@QBAJXZ");
//};

//public: short c_grid_2d<short, long, 50, 50>::find_cell_index(union real_point3d const *) const
//{
//    mangled_ppc("?find_cell_index@?$c_grid_2d@FJ$0DC@$0DC@@@QBAFPBTreal_point3d@@@Z");
//};

//public: short c_grid_2d<short, long, 50, 50>::build_cell_index(short, short) const
//{
//    mangled_ppc("?build_cell_index@?$c_grid_2d@FJ$0DC@$0DC@@@QBAFFF@Z");
//};

//public: short c_grid_2d<short, long, 50, 50>::get_row_index(union real_point3d const *) const
//{
//    mangled_ppc("?get_row_index@?$c_grid_2d@FJ$0DC@$0DC@@@QBAFPBTreal_point3d@@@Z");
//};

//public: short c_grid_2d<short, long, 50, 50>::get_column_index(union real_point3d const *) const
//{
//    mangled_ppc("?get_column_index@?$c_grid_2d@FJ$0DC@$0DC@@@QBAFPBTreal_point3d@@@Z");
//};

//public: bool c_grid_2d<short, long, 50, 50>::position_valid(union real_point3d const *) const
//{
//    mangled_ppc("?position_valid@?$c_grid_2d@FJ$0DC@$0DC@@@QBA_NPBTreal_point3d@@@Z");
//};

//public: union real_point3d * c_grid_2d<short, long, 50, 50>::get_cell_position(short, union real_point3d *) const
//{
//    mangled_ppc("?get_cell_position@?$c_grid_2d@FJ$0DC@$0DC@@@QBAPATreal_point3d@@FPAT2@@Z");
//};

//public: long c_grid_2d<short, long, 50, 50>::get_cell_value(short) const
//{
//    mangled_ppc("?get_cell_value@?$c_grid_2d@FJ$0DC@$0DC@@@QBAJF@Z");
//};

//public: void c_grid_2d<short, long, 50, 50>::set_cell_value(short, long)
//{
//    mangled_ppc("?set_cell_value@?$c_grid_2d@FJ$0DC@$0DC@@@QAAXFJ@Z");
//};

//public: void c_grid_2d<short, long, 50, 50>::initialize(long, float, union real_point3d const *)
//{
//    mangled_ppc("?initialize@?$c_grid_2d@FJ$0DC@$0DC@@@QAAXJMPBTreal_point3d@@@Z");
//};

//public: bool c_grid_2d<short, long, 50, 50>::valid_cell_index(short) const
//{
//    mangled_ppc("?valid_cell_index@?$c_grid_2d@FJ$0DC@$0DC@@@QBA_NF@Z");
//};

//public: void s_static_array<long, 2500>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@J$0JME@@@QAAXJ@Z");
//};

//public: bool c_grid_2d<short, long, 50, 50>::position_valid_slow(union real_point3d const *) const
//{
//    mangled_ppc("?position_valid_slow@?$c_grid_2d@FJ$0DC@$0DC@@@QBA_NPBTreal_point3d@@@Z");
//};

//public: long const & s_static_array<long, 2500>::operator[]<short>(short) const
//{
//    mangled_ppc("??$?AF@?$s_static_array@J$0JME@@@QBAABJF@Z");
//};

//public: long & s_static_array<long, 2500>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@J$0JME@@@QAAAAJF@Z");
//};

//public: static bool s_static_array<long, 2500>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@J$0JME@@@SA_NF@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_path_influence_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_path_influence_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_path_influence_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_path_influence_data_allocator@@YAXXZ");
//};

