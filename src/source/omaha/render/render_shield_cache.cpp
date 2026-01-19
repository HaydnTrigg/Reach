/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct c_render_shield::s_effect_object *c_render_shield::g_effect_objects; // "?g_effect_objects@c_render_shield@@0PAUs_effect_object@1@A"
// private: static struct c_render_shield::s_cached_object *c_render_shield::g_cached_objects; // "?g_cached_objects@c_render_shield@@0PAUs_cached_object@1@A"
// private: static long c_render_shield::g_effect_object_index; // "?g_effect_object_index@c_render_shield@@0JA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_shield_render_cache_data_allocator::*)(void *)> g_shield_render_cache_data_allocator; // "?g_shield_render_cache_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *shield_render_cache_message_data; // "?shield_render_cache_message_data@@3PAUs_data_array@@A"

// void __tls_set_g_shield_render_cache_data_allocator(void *);
// void shield_render_cache_message_initialize(void);
// void shield_render_cache_message_initialize_for_new_map(void);
// void shield_render_cache_message_dispose_from_old_map(void);
// void shield_render_cache_message_dispose(void);
// void shield_render_cache_message_reset(void);
// public: static void c_render_shield::cache_object_collision_point_for_shield_rendering(long, union real_point3d const *, long, long);
// public: static struct s_object_cache_message_datum * s_object_cache_message_datum::get(long);
// public: static struct c_render_shield::s_cached_object * c_render_shield::get_cached_object(long);
// public: static void c_render_shield::update_cached_objects(float);
// public: void c_render_shield::s_cached_object::update(float);
// public: void c_render_shield::s_cached_object::initialize(long);
// public: void c_render_shield::s_cached_object::add_point(long, long, union real_point3d *);
// public: static struct c_render_shield::s_effect_object * c_render_shield::add_effect_object(struct s_visible_object_render_visibility *, long, long, float, union real_point3d *);
// public: void c_data_iterator<struct s_object_cache_message_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_object_cache_message_datum>::next(void);
// public: long c_data_iterator<struct s_object_cache_message_datum>::get_index(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>(void);
// void g_shield_render_cache_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_shield_render_cache_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z");
//};

//void shield_render_cache_message_initialize(void)
//{
//    mangled_ppc("?shield_render_cache_message_initialize@@YAXXZ");
//};

//void shield_render_cache_message_initialize_for_new_map(void)
//{
//    mangled_ppc("?shield_render_cache_message_initialize_for_new_map@@YAXXZ");
//};

//void shield_render_cache_message_dispose_from_old_map(void)
//{
//    mangled_ppc("?shield_render_cache_message_dispose_from_old_map@@YAXXZ");
//};

//void shield_render_cache_message_dispose(void)
//{
//    mangled_ppc("?shield_render_cache_message_dispose@@YAXXZ");
//};

//void shield_render_cache_message_reset(void)
//{
//    mangled_ppc("?shield_render_cache_message_reset@@YAXXZ");
//};

//public: static void c_render_shield::cache_object_collision_point_for_shield_rendering(long, union real_point3d const *, long, long)
//{
//    mangled_ppc("?cache_object_collision_point_for_shield_rendering@c_render_shield@@SAXJPBTreal_point3d@@JJ@Z");
//};

//public: static struct s_object_cache_message_datum * s_object_cache_message_datum::get(long)
//{
//    mangled_ppc("?get@s_object_cache_message_datum@@SAPAU1@J@Z");
//};

//public: static struct c_render_shield::s_cached_object * c_render_shield::get_cached_object(long)
//{
//    mangled_ppc("?get_cached_object@c_render_shield@@SAPAUs_cached_object@1@J@Z");
//};

//public: static void c_render_shield::update_cached_objects(float)
//{
//    mangled_ppc("?update_cached_objects@c_render_shield@@SAXM@Z");
//};

//public: void c_render_shield::s_cached_object::update(float)
//{
//    mangled_ppc("?update@s_cached_object@c_render_shield@@QAAXM@Z");
//};

//public: void c_render_shield::s_cached_object::initialize(long)
//{
//    mangled_ppc("?initialize@s_cached_object@c_render_shield@@QAAXJ@Z");
//};

//public: void c_render_shield::s_cached_object::add_point(long, long, union real_point3d *)
//{
//    mangled_ppc("?add_point@s_cached_object@c_render_shield@@QAAXJJPATreal_point3d@@@Z");
//};

//public: static struct c_render_shield::s_effect_object * c_render_shield::add_effect_object(struct s_visible_object_render_visibility *, long, long, float, union real_point3d *)
//{
//    mangled_ppc("?add_effect_object@c_render_shield@@SAPAUs_effect_object@1@PAUs_visible_object_render_visibility@@JJMPATreal_point3d@@@Z");
//};

//public: void c_data_iterator<struct s_object_cache_message_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_object_cache_message_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_object_cache_message_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_object_cache_message_datum@@@@QAA_NXZ");
//};

//public: long c_data_iterator<struct s_object_cache_message_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_object_cache_message_datum@@@@QBAJXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_shield_render_cache_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_shield_render_cache_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_shield_render_cache_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_shield_render_cache_data_allocator@@YAXXZ");
//};

