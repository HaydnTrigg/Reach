/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_particle::x_holdback_type; // "?x_holdback_type@c_particle@@0W4e_effect_holdback_type@@B"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_memory_pool_allocator::*)(void *)> g_memory_pool_allocator; // "?g_memory_pool_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@A"
// public: static struct s_data_array *c_particle::x_data_array; // "?x_data_array@c_particle@@2PAUs_data_array@@A"

// void __tls_set_g_memory_pool_allocator(void *);
// public: static void c_particle::initialize_for_game(void);
// public: static void c_particle::initialize_for_map(void);
// public: static void c_particle::dispose_from_map(void);
// public: static void c_particle::dispose_from_game(void);
// public: static long c_particle::create(unsigned char);
// public: static void c_particle::destroy(long);
// public: void c_particle::play_attachments(enum e_particle_attachment_type, long, class c_particle_collision_event const *, class c_particle_state_list const *) const;
// public: long s_particle_attachment::get_tag_index(void) const;
// public: bool c_particle_definition::get_particle_has_sweetener(void) const;
// public: void c_particle::set_scales(unsigned long, unsigned char, unsigned char, float *, float *) const;
// private: float c_particle::calculate_effect_scale(void) const;
// private: void c_particle::spawn_effect(long, struct s_particle_attachment const *, class c_particle_collision_event const *, class c_particle_state_list const *, struct s_location const *) const;
// public: enum c_particle_state_list::e_particle_state_input s_particle_attachment::get_primary_scale(void) const;
// public: enum c_particle_state_list::e_particle_state_input s_particle_attachment::get_secondary_scale(void) const;
// public: union real_point3d const * c_particle_collision_event::get_collision_point(void) const;
// public: union vector3d const * c_particle_collision_event::get_collision_forward(void) const;
// public: union vector3d const * c_particle_collision_event::get_collision_normal(void) const;
// private: void c_particle::spawn_sound(struct s_particle_attachment const *, class c_particle_collision_event const *) const;
// private: void c_particle::spawn_material_effect(struct s_particle_attachment const *, class c_particle_collision_event const *, enum e_sweetener_size) const;
// public: class c_global_material_type c_particle_collision_event::get_material_type(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>(void);
// void g_memory_pool_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_memory_pool_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_memory_pool_allocator@@YAXPAX@Z");
//};

//public: static void c_particle::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_particle@@SAXXZ");
//};

//public: static void c_particle::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_particle@@SAXXZ");
//};

//public: static void c_particle::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_particle@@SAXXZ");
//};

//public: static void c_particle::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_particle@@SAXXZ");
//};

//public: static long c_particle::create(unsigned char)
//{
//    mangled_ppc("?create@c_particle@@SAJE@Z");
//};

//public: static void c_particle::destroy(long)
//{
//    mangled_ppc("?destroy@c_particle@@SAXJ@Z");
//};

//public: void c_particle::play_attachments(enum e_particle_attachment_type, long, class c_particle_collision_event const *, class c_particle_state_list const *) const
//{
//    mangled_ppc("?play_attachments@c_particle@@QBAXW4e_particle_attachment_type@@JPBVc_particle_collision_event@@PBVc_particle_state_list@@@Z");
//};

//public: long s_particle_attachment::get_tag_index(void) const
//{
//    mangled_ppc("?get_tag_index@s_particle_attachment@@QBAJXZ");
//};

//public: bool c_particle_definition::get_particle_has_sweetener(void) const
//{
//    mangled_ppc("?get_particle_has_sweetener@c_particle_definition@@QBA_NXZ");
//};

//public: void c_particle::set_scales(unsigned long, unsigned char, unsigned char, float *, float *) const
//{
//    mangled_ppc("?set_scales@c_particle@@QBAXKEEPAM0@Z");
//};

//private: float c_particle::calculate_effect_scale(void) const
//{
//    mangled_ppc("?calculate_effect_scale@c_particle@@ABAMXZ");
//};

//private: void c_particle::spawn_effect(long, struct s_particle_attachment const *, class c_particle_collision_event const *, class c_particle_state_list const *, struct s_location const *) const
//{
//    mangled_ppc("?spawn_effect@c_particle@@ABAXJPBUs_particle_attachment@@PBVc_particle_collision_event@@PBVc_particle_state_list@@PBUs_location@@@Z");
//};

//public: enum c_particle_state_list::e_particle_state_input s_particle_attachment::get_primary_scale(void) const
//{
//    mangled_ppc("?get_primary_scale@s_particle_attachment@@QBA?AW4e_particle_state_input@c_particle_state_list@@XZ");
//};

//public: enum c_particle_state_list::e_particle_state_input s_particle_attachment::get_secondary_scale(void) const
//{
//    mangled_ppc("?get_secondary_scale@s_particle_attachment@@QBA?AW4e_particle_state_input@c_particle_state_list@@XZ");
//};

//public: union real_point3d const * c_particle_collision_event::get_collision_point(void) const
//{
//    mangled_ppc("?get_collision_point@c_particle_collision_event@@QBAPBTreal_point3d@@XZ");
//};

//public: union vector3d const * c_particle_collision_event::get_collision_forward(void) const
//{
//    mangled_ppc("?get_collision_forward@c_particle_collision_event@@QBAPBTvector3d@@XZ");
//};

//public: union vector3d const * c_particle_collision_event::get_collision_normal(void) const
//{
//    mangled_ppc("?get_collision_normal@c_particle_collision_event@@QBAPBTvector3d@@XZ");
//};

//private: void c_particle::spawn_sound(struct s_particle_attachment const *, class c_particle_collision_event const *) const
//{
//    mangled_ppc("?spawn_sound@c_particle@@ABAXPBUs_particle_attachment@@PBVc_particle_collision_event@@@Z");
//};

//private: void c_particle::spawn_material_effect(struct s_particle_attachment const *, class c_particle_collision_event const *, enum e_sweetener_size) const
//{
//    mangled_ppc("?spawn_material_effect@c_particle@@ABAXPBUs_particle_attachment@@PBVc_particle_collision_event@@W4e_sweetener_size@@@Z");
//};

//public: class c_global_material_type c_particle_collision_event::get_material_type(void) const
//{
//    mangled_ppc("?get_material_type@c_particle_collision_event@@QBA?AVc_global_material_type@@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_memory_pool_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_memory_pool_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_memory_pool_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_memory_pool_allocator@@YAXXZ");
//};

