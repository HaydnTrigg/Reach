/* ---------- headers */

#include "omaha\weather\weather.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_rain_wetness_coefficient; // "?g_rain_wetness_coefficient@@3MA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_weather_state_shared_allocator::*)(void *)> g_weather_state_shared_allocator; // "?g_weather_state_shared_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_weather_state_render_allocator::*)(void *)> g_weather_state_render_allocator; // "?g_weather_state_render_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_weather_state_deterministic_allocator::*)(void *)> g_weather_state_deterministic_allocator; // "?g_weather_state_deterministic_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@A"
// struct s_weather_state_shared *g_weather_state_shared; // "?g_weather_state_shared@@3PAUs_weather_state_shared@@A"
// struct s_weather_state_render *g_weather_state_render; // "?g_weather_state_render@@3PAUs_weather_state_render@@A"
// struct s_weather_state_deterministic *g_weather_state_deterministic; // "?g_weather_state_deterministic@@3PAUs_weather_state_deterministic@@A"

// void __tls_set_g_weather_state_shared_allocator(void *);
// void __tls_set_g_weather_state_render_allocator(void *);
// void __tls_set_g_weather_state_deterministic_allocator(void *);
// void weather_initialize(void);
// void weather_initialize_for_new_map(void);
// void weather_dispose_from_old_map(void);
// void weather_dispose(void);
// void weather_frame_update(float);
// void weather_animate(long, float, float);
// void weather_animate_force(long, float, float);
// void debug_rain_toggle(void);
// void rain_sample_and_update(union real_point3d const *, class c_player_view const *, long, struct s_rain_parameters *);
// public: static struct s_rain_definition const * s_rain_definition::get(long);
// float atan(float);
// bool rain_is_on(void);
// float rain_intensity(void);
// void rain_update_deterministic(void);
// float weather_get_global_wetness_coefficient_deterministic(void);
// bool rain_is_on_deterministic(void);
// float rain_intensity_deterministic(void);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>(void);
// void g_weather_state_shared_allocator::`dynamic atexit destructor'(void);
// void g_weather_state_render_allocator::`dynamic atexit destructor'(void);
// void g_weather_state_deterministic_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_weather_state_shared_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_weather_state_render_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_weather_state_deterministic_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z");
//};

//void weather_initialize(void)
//{
//    mangled_ppc("?weather_initialize@@YAXXZ");
//};

//void weather_initialize_for_new_map(void)
//{
//    mangled_ppc("?weather_initialize_for_new_map@@YAXXZ");
//};

//void weather_dispose_from_old_map(void)
//{
//    mangled_ppc("?weather_dispose_from_old_map@@YAXXZ");
//};

//void weather_dispose(void)
//{
//    mangled_ppc("?weather_dispose@@YAXXZ");
//};

//void weather_frame_update(float)
//{
//    mangled_ppc("?weather_frame_update@@YAXM@Z");
//};

//void weather_animate(long, float, float)
//{
//    mangled_ppc("?weather_animate@@YAXJMM@Z");
//};

//void weather_animate_force(long, float, float)
//{
//    mangled_ppc("?weather_animate_force@@YAXJMM@Z");
//};

//void debug_rain_toggle(void)
//{
//    mangled_ppc("?debug_rain_toggle@@YAXXZ");
//};

//void rain_sample_and_update(union real_point3d const *, class c_player_view const *, long, struct s_rain_parameters *)
//{
//    mangled_ppc("?rain_sample_and_update@@YAXPBTreal_point3d@@PBVc_player_view@@JPAUs_rain_parameters@@@Z");
//};

//public: static struct s_rain_definition const * s_rain_definition::get(long)
//{
//    mangled_ppc("?get@s_rain_definition@@SAPBU1@J@Z");
//};

//float atan(float)
//{
//    mangled_ppc("?atan@@YAMM@Z");
//};

//bool rain_is_on(void)
//{
//    mangled_ppc("?rain_is_on@@YA_NXZ");
//};

//float rain_intensity(void)
//{
//    mangled_ppc("?rain_intensity@@YAMXZ");
//};

//void rain_update_deterministic(void)
//{
//    mangled_ppc("?rain_update_deterministic@@YAXXZ");
//};

//float weather_get_global_wetness_coefficient_deterministic(void)
//{
//    mangled_ppc("?weather_get_global_wetness_coefficient_deterministic@@YAMXZ");
//};

//bool rain_is_on_deterministic(void)
//{
//    mangled_ppc("?rain_is_on_deterministic@@YA_NXZ");
//};

//float rain_intensity_deterministic(void)
//{
//    mangled_ppc("?rain_intensity_deterministic@@YAMXZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_shared_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_shared_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_weather_state_render_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_weather_state_render_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_weather_state_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_weather_state_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_weather_state_shared_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_weather_state_shared_allocator@@YAXXZ");
//};

//void g_weather_state_render_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_weather_state_render_allocator@@YAXXZ");
//};

//void g_weather_state_deterministic_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_weather_state_deterministic_allocator@@YAXXZ");
//};

