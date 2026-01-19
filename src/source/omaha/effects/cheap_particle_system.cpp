/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_cheap_particles_spawn_enabled; // "?g_cheap_particles_spawn_enabled@@3_NA"
// bool g_cheap_particles_update_enabled; // "?g_cheap_particles_update_enabled@@3_NA"
// bool g_cheap_particles_render_enabled; // "?g_cheap_particles_render_enabled@@3_NA"
// bool g_cheap_particles_debug_enabled; // "?g_cheap_particles_debug_enabled@@3_NA"
// float g_time_until_all_particles_die; // "?g_time_until_all_particles_die@@3MA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)> g_cheap_particle_emitter_from_update_thread_data_allocator; // "?g_cheap_particle_emitter_from_update_thread_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@A"
// struct s_emitter_list x_active_emitters; // "?x_active_emitters@@3Us_emitter_list@@A"
// struct s_particle_buffers x_particle_buffers; // "?x_particle_buffers@@3Us_particle_buffers@@A"
// struct s_data_array *cheap_particle_emitter_from_update_thread_data; // "?cheap_particle_emitter_from_update_thread_data@@3PAUs_data_array@@A"

// void __tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator(void *);
// public: static void s_cheap_particle_system::initialize_for_game(void);
// public: static void s_cheap_particle_system::initialize_for_map(void);
// public: static void s_cheap_particle_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// public: static void s_cheap_particle_system::initialize_for_new_structure_bsp(unsigned long);
// public: static void s_cheap_particle_system::dispose_from_old_structure_bsp(unsigned long);
// public: static void s_cheap_particle_system::dispose_from_map(void);
// public: static void s_cheap_particle_system::dispose_from_game(void);
// public: static void s_cheap_particle_system::shell_initialize(void);
// public: static void s_cheap_particle_system::handle_game_state_after_load(void);
// public: static void s_cheap_particle_system::clear_and_initialize_active_emitter_list(union real_point3d const *);
// public: void s_emitter_list::clear_and_initialize_emitter_list(union real_point3d const *);
// public: static void s_cheap_particle_system::add_active_emitter(union real_point3d const *, union vector3d const *, union vector3d const *, long, float, float, float, long);
// public: static void s_cheap_particle_system::add_scenario_emitters(void);
// public: static struct s_cheap_particle_emitter_from_update_thread * s_cheap_particle_emitter_from_update_thread::get(long);
// void add_active_cheap_particle_emitter_from_update_thread(long, union real_point3d const *, union vector3d const *, union vector3d const *);
// void clear_cheap_particle_emitters_from_update_thread(void);
// public: static void s_cheap_particle_system::update(float);
// public: void s_particle_buffers::clear_if_required(void);
// public: static void s_cheap_particle_system::render(float);
// public: void s_emitter_list::add_emitter(union real_point3d const *, union vector3d const *, union vector3d const *, long, float, float, float, long);
// bool map_texture_buffer_to_vertex_buffer(struct D3DVertexBuffer *, enum e_surface, unsigned long, long);
// public: bool s_particle_buffers::initialize(void);
// void shader_setup_export_state(void);
// void shader_setup_global_state(float);
// public: void s_particle_buffers::clear(void);
// public: void s_particle_buffers::setup_vertex_streams(void);
// public: void s_particle_buffers::begin_memexport(long, long);
// D3DDevice_SetVertexShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetVertexShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// public: void s_particle_buffers::end_memexport(void);
// bool shader_setup_type_library(bool);
// public: static struct s_cheap_particle_type_library const * s_cheap_particle_type_library::get(long);
// D3DDevice_SetStreamSource_Inline;
// void spawn_particles(struct s_emitter_list *, struct s_particle_buffers *, float);
// public: void s_emitter_list::s_emitter::spawn(struct s_particle_buffers *, float);
// void generate_random_texture_transform(union vector4d *);
// public: void s_emitter_list::s_emitter::setup_emitter_spawn_state(void);
// public: void s_particle_buffers::spawn(long);
// void update_particles(struct s_particle_buffers *, float);
// public: void s_particle_buffers::update(void);
// void render_particles(struct s_particle_buffers *, float);
// void render_debug_cheap_particles(bool);
// public: static void s_cheap_particle_system::debug_render(void);
// D3DDevice_SetPixelShaderConstantF;
// D3DDevice_SetPixelShaderConstantF1;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::valid(void) const;
// public: s_emitter_list::s_emitter_list(void);
// public: s_particle_buffers::s_particle_buffers(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>(void);
// void g_cheap_particle_emitter_from_update_thread_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z");
//};

//public: static void s_cheap_particle_system::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?prepare_for_non_bsp_zone_set_switch@s_cheap_particle_system@@SAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//public: static void s_cheap_particle_system::initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?initialize_for_new_structure_bsp@s_cheap_particle_system@@SAXK@Z");
//};

//public: static void s_cheap_particle_system::dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?dispose_from_old_structure_bsp@s_cheap_particle_system@@SAXK@Z");
//};

//public: static void s_cheap_particle_system::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::shell_initialize(void)
//{
//    mangled_ppc("?shell_initialize@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::handle_game_state_after_load(void)
//{
//    mangled_ppc("?handle_game_state_after_load@s_cheap_particle_system@@SAXXZ");
//};

//public: static void s_cheap_particle_system::clear_and_initialize_active_emitter_list(union real_point3d const *)
//{
//    mangled_ppc("?clear_and_initialize_active_emitter_list@s_cheap_particle_system@@SAXPBTreal_point3d@@@Z");
//};

//public: void s_emitter_list::clear_and_initialize_emitter_list(union real_point3d const *)
//{
//    mangled_ppc("?clear_and_initialize_emitter_list@s_emitter_list@@QAAXPBTreal_point3d@@@Z");
//};

//public: static void s_cheap_particle_system::add_active_emitter(union real_point3d const *, union vector3d const *, union vector3d const *, long, float, float, float, long)
//{
//    mangled_ppc("?add_active_emitter@s_cheap_particle_system@@SAXPBTreal_point3d@@PBTvector3d@@1JMMMJ@Z");
//};

//public: static void s_cheap_particle_system::add_scenario_emitters(void)
//{
//    mangled_ppc("?add_scenario_emitters@s_cheap_particle_system@@SAXXZ");
//};

//public: static struct s_cheap_particle_emitter_from_update_thread * s_cheap_particle_emitter_from_update_thread::get(long)
//{
//    mangled_ppc("?get@s_cheap_particle_emitter_from_update_thread@@SAPAU1@J@Z");
//};

//void add_active_cheap_particle_emitter_from_update_thread(long, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?add_active_cheap_particle_emitter_from_update_thread@@YAXJPBTreal_point3d@@PBTvector3d@@1@Z");
//};

//void clear_cheap_particle_emitters_from_update_thread(void)
//{
//    mangled_ppc("?clear_cheap_particle_emitters_from_update_thread@@YAXXZ");
//};

//public: static void s_cheap_particle_system::update(float)
//{
//    mangled_ppc("?update@s_cheap_particle_system@@SAXM@Z");
//};

//public: void s_particle_buffers::clear_if_required(void)
//{
//    mangled_ppc("?clear_if_required@s_particle_buffers@@QAAXXZ");
//};

//public: static void s_cheap_particle_system::render(float)
//{
//    mangled_ppc("?render@s_cheap_particle_system@@SAXM@Z");
//};

//public: void s_emitter_list::add_emitter(union real_point3d const *, union vector3d const *, union vector3d const *, long, float, float, float, long)
//{
//    mangled_ppc("?add_emitter@s_emitter_list@@QAAXPBTreal_point3d@@PBTvector3d@@1JMMMJ@Z");
//};

//bool map_texture_buffer_to_vertex_buffer(struct D3DVertexBuffer *, enum e_surface, unsigned long, long)
//{
//    mangled_ppc("?map_texture_buffer_to_vertex_buffer@@YA_NPAUD3DVertexBuffer@@W4e_surface@@KJ@Z");
//};

//public: bool s_particle_buffers::initialize(void)
//{
//    mangled_ppc("?initialize@s_particle_buffers@@QAA_NXZ");
//};

//void shader_setup_export_state(void)
//{
//    mangled_ppc("?shader_setup_export_state@@YAXXZ");
//};

//void shader_setup_global_state(float)
//{
//    mangled_ppc("?shader_setup_global_state@@YAXM@Z");
//};

//public: void s_particle_buffers::clear(void)
//{
//    mangled_ppc("?clear@s_particle_buffers@@QAAXXZ");
//};

//public: void s_particle_buffers::setup_vertex_streams(void)
//{
//    mangled_ppc("?setup_vertex_streams@s_particle_buffers@@QAAXXZ");
//};

//public: void s_particle_buffers::begin_memexport(long, long)
//{
//    mangled_ppc("?begin_memexport@s_particle_buffers@@QAAXJJ@Z");
//};

//D3DDevice_SetVertexShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetVertexShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetVertexShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetVertexShaderConstantF1");
//};

//D3DVECTOR4_SetX
//{
//    mangled_ppc("D3DVECTOR4_SetX");
//};

//D3DVECTOR4_SetY
//{
//    mangled_ppc("D3DVECTOR4_SetY");
//};

//D3DVECTOR4_SetZ
//{
//    mangled_ppc("D3DVECTOR4_SetZ");
//};

//D3DVECTOR4_SetW
//{
//    mangled_ppc("D3DVECTOR4_SetW");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//public: void s_particle_buffers::end_memexport(void)
//{
//    mangled_ppc("?end_memexport@s_particle_buffers@@QAAXXZ");
//};

//bool shader_setup_type_library(bool)
//{
//    mangled_ppc("?shader_setup_type_library@@YA_N_N@Z");
//};

//public: static struct s_cheap_particle_type_library const * s_cheap_particle_type_library::get(long)
//{
//    mangled_ppc("?get@s_cheap_particle_type_library@@SAPBU1@J@Z");
//};

//D3DDevice_SetStreamSource_Inline
//{
//    mangled_ppc("D3DDevice_SetStreamSource_Inline");
//};

//void spawn_particles(struct s_emitter_list *, struct s_particle_buffers *, float)
//{
//    mangled_ppc("?spawn_particles@@YAXPAUs_emitter_list@@PAUs_particle_buffers@@M@Z");
//};

//public: void s_emitter_list::s_emitter::spawn(struct s_particle_buffers *, float)
//{
//    mangled_ppc("?spawn@s_emitter@s_emitter_list@@QAAXPAUs_particle_buffers@@M@Z");
//};

//void generate_random_texture_transform(union vector4d *)
//{
//    mangled_ppc("?generate_random_texture_transform@@YAXPATvector4d@@@Z");
//};

//public: void s_emitter_list::s_emitter::setup_emitter_spawn_state(void)
//{
//    mangled_ppc("?setup_emitter_spawn_state@s_emitter@s_emitter_list@@QAAXXZ");
//};

//public: void s_particle_buffers::spawn(long)
//{
//    mangled_ppc("?spawn@s_particle_buffers@@QAAXJ@Z");
//};

//void update_particles(struct s_particle_buffers *, float)
//{
//    mangled_ppc("?update_particles@@YAXPAUs_particle_buffers@@M@Z");
//};

//public: void s_particle_buffers::update(void)
//{
//    mangled_ppc("?update@s_particle_buffers@@QAAXXZ");
//};

//void render_particles(struct s_particle_buffers *, float)
//{
//    mangled_ppc("?render_particles@@YAXPAUs_particle_buffers@@M@Z");
//};

//void render_debug_cheap_particles(bool)
//{
//    mangled_ppc("?render_debug_cheap_particles@@YAX_N@Z");
//};

//public: static void s_cheap_particle_system::debug_render(void)
//{
//    mangled_ppc("?debug_render@s_cheap_particle_system@@SAXXZ");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DDevice_SetPixelShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF1");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: s_emitter_list::s_emitter_list(void)
//{
//    mangled_ppc("??0s_emitter_list@@QAA@XZ");
//};

//public: s_particle_buffers::s_particle_buffers(void)
//{
//    mangled_ppc("??0s_particle_buffers@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cheap_particle_emitter_from_update_thread_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_cheap_particle_emitter_from_update_thread_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cheap_particle_emitter_from_update_thread_data_allocator@@YAXXZ");
//};

