/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_vertex_declarations; // "?m_allocated_vertex_declarations@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_surfaces; // "?m_allocated_surfaces@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_textures; // "?m_allocated_textures@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_d3d_pixel_shaders; // "?m_allocated_d3d_pixel_shaders@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_d3d_vertex_shaders; // "?m_allocated_d3d_vertex_shaders@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_d3d_index_buffers; // "?m_allocated_d3d_index_buffers@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct c_d3d_resource_tracker::s_allocation_info *c_d3d_resource_tracker::m_allocated_d3d_vertex_buffers; // "?m_allocated_d3d_vertex_buffers@c_d3d_resource_tracker@@0PAUs_allocation_info@1@A"
// private: static struct D3DDevice *c_d3d_resource_allocator::m_d3d_device_ptr; // "?m_d3d_device_ptr@c_d3d_resource_allocator@@0PAUD3DDevice@@A"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_vertex_buffers; // "?m_num_of_allocated_vertex_buffers@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_index_buffers; // "?m_num_of_allocated_index_buffers@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_vertex_shaders; // "?m_num_of_allocated_vertex_shaders@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_pixel_shaders; // "?m_num_of_allocated_pixel_shaders@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_textures; // "?m_num_of_allocated_textures@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_surfaces; // "?m_num_of_allocated_surfaces@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_num_of_allocated_vertex_declarations; // "?m_num_of_allocated_vertex_declarations@c_d3d_resource_tracker@@0JA"
// private: static long c_d3d_resource_tracker::m_allocation_id_count; // "?m_allocation_id_count@c_d3d_resource_tracker@@0JA"

// public: static long c_d3d_resource_tracker::release_pixel_shaders_for_cache(void);
// public: static long c_d3d_resource_tracker::release_vertex_shaders_for_cache(void);
// private: static long c_d3d_resource_tracker::add_resource_helper(void *, struct c_d3d_resource_tracker::s_allocation_info *, long, long *);
// private: static long c_d3d_resource_tracker::remove_resource_helper(void const *, struct c_d3d_resource_tracker::s_allocation_info *, long *);
// public: static long c_d3d_resource_tracker::add_vertex_shader(struct D3DVertexShader *);
// public: static long c_d3d_resource_tracker::add_pixel_shader(struct D3DPixelShader *);
// public: static long c_d3d_resource_tracker::add_vertex_buffer(struct D3DVertexBuffer *);
// public: static long c_d3d_resource_tracker::add_index_buffer(struct D3DIndexBuffer *);
// public: static long c_d3d_resource_tracker::add_texture(struct D3DBaseTexture *);
// public: static long c_d3d_resource_tracker::add_surface(struct D3DSurface *);
// public: static long c_d3d_resource_tracker::add_vertex_declaration(struct D3DVertexDeclaration *);
// public: static long c_d3d_resource_tracker::remove_vertex_shader(struct D3DVertexShader *);
// public: static long c_d3d_resource_tracker::remove_pixel_shader(struct D3DPixelShader *);
// public: static long c_d3d_resource_tracker::remove_vertex_buffer(struct D3DVertexBuffer *);
// public: static long c_d3d_resource_tracker::remove_index_buffer(struct D3DIndexBuffer *);
// public: static long c_d3d_resource_tracker::remove_texture(struct D3DBaseTexture *);
// public: static long c_d3d_resource_tracker::remove_surface(struct D3DSurface *);
// public: static long c_d3d_resource_tracker::remove_vertex_declaration(struct D3DVertexDeclaration *);
// public: static long c_d3d_resource_tracker::release_all_allocated_vertex_shaders(void);
// public: static long c_d3d_resource_tracker::release_all_allocated_pixel_shaders(void);
// public: static long c_d3d_resource_tracker::release_all_allocated_vertex_buffers(void);
// public: static long c_d3d_resource_tracker::release_all_allocated_index_buffers(void);
// public: static void c_d3d_resource_allocator::set_d3d_device(struct D3DDevice *);
// public: static long c_d3d_resource_allocator::create_d3d_vertex_buffer(unsigned int, unsigned long, unsigned long, unsigned long, struct D3DVertexBuffer **, void **);
// public: static long c_d3d_resource_allocator::create_d3d_index_buffer(unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DIndexBuffer **, void **);
// public: static long c_d3d_resource_allocator::create_vertex_shader(unsigned long const *, struct D3DVertexShader **);
// public: static long c_d3d_resource_allocator::create_pixel_shader(unsigned long const *, struct D3DPixelShader **);
// public: static long c_d3d_resource_allocator::create_vertex_declaration(struct _D3DVERTEXELEMENT9const *, struct D3DVertexDeclaration **);
// public: static long c_d3d_resource_allocator::create_texture(unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DTexture **, unsigned long *, unsigned char *, unsigned long);
// void * allocate_d3d_memory_tracked(unsigned long, char const *);
// public: static long c_d3d_resource_allocator::create_cube_texture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DCubeTexture **, unsigned long *, unsigned char *, unsigned long);
// public: static long c_d3d_resource_allocator::create_volume_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DVolumeTexture **, unsigned long *, unsigned char *, unsigned long);
// public: static long c_d3d_resource_allocator::create_depth_stencil_surface(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, void const *);
// public: static long c_d3d_resource_allocator::create_render_target(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, void const *);
// public: static long c_d3d_resource_allocator::create_array_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DArrayTexture **, unsigned long *, unsigned char *, unsigned long);
// public: static long c_d3d_resource_allocator::create_off_screen_plain_surface(unsigned int, unsigned int, enum _D3DFORMAT, struct D3DSurface **);
// public: static void c_d3d_resource_allocator::verify_d3d_resource_is_unlocked(struct D3DResource *);
// public: static long c_d3d_resource_allocator::release_d3d_vertex_buffer(struct D3DVertexBuffer *);
// public: static long c_d3d_resource_allocator::release_d3d_index_buffer(struct D3DIndexBuffer *);
// public: static long c_d3d_resource_allocator::release_vertex_shader(struct D3DVertexShader *);
// public: static long c_d3d_resource_allocator::release_pixel_shader(struct D3DPixelShader *);
// public: static long c_d3d_resource_allocator::release_texture(struct D3DBaseTexture *, bool);
// void free_d3d_memory_tracked(void *);
// public: static long c_d3d_resource_allocator::release_vertex_declaration(struct D3DVertexDeclaration *);
// public: static long c_d3d_resource_allocator::release_surface(struct D3DSurface *);
// public: static long c_d3d_resource_tracker::release_all_allocated_surfaces(void);
// public: static long c_d3d_resource_tracker::release_all_allocated_textures(void);
// public: static long c_d3d_resource_tracker::release_all_allocated_vertex_declarations(void);
// public: static void c_d3d_resource_tracker::get_allocated_resource_counts(long *, long *, long *, long *, long *, long *, long *);
// void d3d_resource_tracker_output_allocated_resource_counts(void);
// public: static long c_d3d_resource_allocator::release_all_d3d_resources(void);
// public: long D3DDevice::CreateVertexBuffer(unsigned int, unsigned long, unsigned long, unsigned long, struct D3DVertexBuffer **, void **);
// public: long D3DDevice::CreateIndexBuffer(unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DIndexBuffer **, void **);
// public: long D3DDevice::CreateVertexDeclaration(struct _D3DVERTEXELEMENT9const *, struct D3DVertexDeclaration **);
// public: long D3DDevice::CreateRenderTarget(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, struct _D3DSURFACE_PARAMETERS const *);
// public: long D3DDevice::CreateDepthStencilSurface(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, struct _D3DSURFACE_PARAMETERS const *);
// public: long D3DDevice::CreateVertexShader(unsigned long const *, struct D3DVertexShader **);
// public: long D3DDevice::CreatePixelShader(unsigned long const *, struct D3DPixelShader **);
// void * operator new(unsigned int, char const *, long, enum e_operator_dummy);

//public: static long c_d3d_resource_tracker::release_pixel_shaders_for_cache(void)
//{
//    mangled_ppc("?release_pixel_shaders_for_cache@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_vertex_shaders_for_cache(void)
//{
//    mangled_ppc("?release_vertex_shaders_for_cache@c_d3d_resource_tracker@@SAJXZ");
//};

//private: static long c_d3d_resource_tracker::add_resource_helper(void *, struct c_d3d_resource_tracker::s_allocation_info *, long, long *)
//{
//    mangled_ppc("?add_resource_helper@c_d3d_resource_tracker@@CAJPAXPAUs_allocation_info@1@JPAJ@Z");
//};

//private: static long c_d3d_resource_tracker::remove_resource_helper(void const *, struct c_d3d_resource_tracker::s_allocation_info *, long *)
//{
//    mangled_ppc("?remove_resource_helper@c_d3d_resource_tracker@@CAJPBXPAUs_allocation_info@1@PAJ@Z");
//};

//public: static long c_d3d_resource_tracker::add_vertex_shader(struct D3DVertexShader *)
//{
//    mangled_ppc("?add_vertex_shader@c_d3d_resource_tracker@@SAJPAUD3DVertexShader@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_pixel_shader(struct D3DPixelShader *)
//{
//    mangled_ppc("?add_pixel_shader@c_d3d_resource_tracker@@SAJPAUD3DPixelShader@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_vertex_buffer(struct D3DVertexBuffer *)
//{
//    mangled_ppc("?add_vertex_buffer@c_d3d_resource_tracker@@SAJPAUD3DVertexBuffer@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_index_buffer(struct D3DIndexBuffer *)
//{
//    mangled_ppc("?add_index_buffer@c_d3d_resource_tracker@@SAJPAUD3DIndexBuffer@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_texture(struct D3DBaseTexture *)
//{
//    mangled_ppc("?add_texture@c_d3d_resource_tracker@@SAJPAUD3DBaseTexture@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_surface(struct D3DSurface *)
//{
//    mangled_ppc("?add_surface@c_d3d_resource_tracker@@SAJPAUD3DSurface@@@Z");
//};

//public: static long c_d3d_resource_tracker::add_vertex_declaration(struct D3DVertexDeclaration *)
//{
//    mangled_ppc("?add_vertex_declaration@c_d3d_resource_tracker@@SAJPAUD3DVertexDeclaration@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_vertex_shader(struct D3DVertexShader *)
//{
//    mangled_ppc("?remove_vertex_shader@c_d3d_resource_tracker@@SAJPAUD3DVertexShader@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_pixel_shader(struct D3DPixelShader *)
//{
//    mangled_ppc("?remove_pixel_shader@c_d3d_resource_tracker@@SAJPAUD3DPixelShader@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_vertex_buffer(struct D3DVertexBuffer *)
//{
//    mangled_ppc("?remove_vertex_buffer@c_d3d_resource_tracker@@SAJPAUD3DVertexBuffer@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_index_buffer(struct D3DIndexBuffer *)
//{
//    mangled_ppc("?remove_index_buffer@c_d3d_resource_tracker@@SAJPAUD3DIndexBuffer@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_texture(struct D3DBaseTexture *)
//{
//    mangled_ppc("?remove_texture@c_d3d_resource_tracker@@SAJPAUD3DBaseTexture@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_surface(struct D3DSurface *)
//{
//    mangled_ppc("?remove_surface@c_d3d_resource_tracker@@SAJPAUD3DSurface@@@Z");
//};

//public: static long c_d3d_resource_tracker::remove_vertex_declaration(struct D3DVertexDeclaration *)
//{
//    mangled_ppc("?remove_vertex_declaration@c_d3d_resource_tracker@@SAJPAUD3DVertexDeclaration@@@Z");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_vertex_shaders(void)
//{
//    mangled_ppc("?release_all_allocated_vertex_shaders@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_pixel_shaders(void)
//{
//    mangled_ppc("?release_all_allocated_pixel_shaders@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_vertex_buffers(void)
//{
//    mangled_ppc("?release_all_allocated_vertex_buffers@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_index_buffers(void)
//{
//    mangled_ppc("?release_all_allocated_index_buffers@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static void c_d3d_resource_allocator::set_d3d_device(struct D3DDevice *)
//{
//    mangled_ppc("?set_d3d_device@c_d3d_resource_allocator@@SAXPAUD3DDevice@@@Z");
//};

//public: static long c_d3d_resource_allocator::create_d3d_vertex_buffer(unsigned int, unsigned long, unsigned long, unsigned long, struct D3DVertexBuffer **, void **)
//{
//    mangled_ppc("?create_d3d_vertex_buffer@c_d3d_resource_allocator@@SAJIKKKPAPAUD3DVertexBuffer@@PAPAX@Z");
//};

//public: static long c_d3d_resource_allocator::create_d3d_index_buffer(unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DIndexBuffer **, void **)
//{
//    mangled_ppc("?create_d3d_index_buffer@c_d3d_resource_allocator@@SAJIKW4_D3DFORMAT@@KPAPAUD3DIndexBuffer@@PAPAX@Z");
//};

//public: static long c_d3d_resource_allocator::create_vertex_shader(unsigned long const *, struct D3DVertexShader **)
//{
//    mangled_ppc("?create_vertex_shader@c_d3d_resource_allocator@@SAJPBKPAPAUD3DVertexShader@@@Z");
//};

//public: static long c_d3d_resource_allocator::create_pixel_shader(unsigned long const *, struct D3DPixelShader **)
//{
//    mangled_ppc("?create_pixel_shader@c_d3d_resource_allocator@@SAJPBKPAPAUD3DPixelShader@@@Z");
//};

//public: static long c_d3d_resource_allocator::create_vertex_declaration(struct _D3DVERTEXELEMENT9const *, struct D3DVertexDeclaration **)
//{
//    mangled_ppc("?create_vertex_declaration@c_d3d_resource_allocator@@SAJPBU_D3DVERTEXELEMENT9@@PAPAUD3DVertexDeclaration@@@Z");
//};

//public: static long c_d3d_resource_allocator::create_texture(unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DTexture **, unsigned long *, unsigned char *, unsigned long)
//{
//    mangled_ppc("?create_texture@c_d3d_resource_allocator@@SAJIIIKW4_D3DFORMAT@@KPAPAUD3DTexture@@PAKPAEK@Z");
//};

//void * allocate_d3d_memory_tracked(unsigned long, char const *)
//{
//    mangled_ppc("?allocate_d3d_memory_tracked@@YAPAXKPBD@Z");
//};

//public: static long c_d3d_resource_allocator::create_cube_texture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DCubeTexture **, unsigned long *, unsigned char *, unsigned long)
//{
//    mangled_ppc("?create_cube_texture@c_d3d_resource_allocator@@SAJIIKW4_D3DFORMAT@@KPAPAUD3DCubeTexture@@PAKPAEK@Z");
//};

//public: static long c_d3d_resource_allocator::create_volume_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DVolumeTexture **, unsigned long *, unsigned char *, unsigned long)
//{
//    mangled_ppc("?create_volume_texture@c_d3d_resource_allocator@@SAJIIIIKW4_D3DFORMAT@@KPAPAUD3DVolumeTexture@@PAKPAEK@Z");
//};

//public: static long c_d3d_resource_allocator::create_depth_stencil_surface(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, void const *)
//{
//    mangled_ppc("?create_depth_stencil_surface@c_d3d_resource_allocator@@SAJIIW4_D3DFORMAT@@W4_D3DMULTISAMPLE_TYPE@@KHPAPAUD3DSurface@@PBX@Z");
//};

//public: static long c_d3d_resource_allocator::create_render_target(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, void const *)
//{
//    mangled_ppc("?create_render_target@c_d3d_resource_allocator@@SAJIIW4_D3DFORMAT@@W4_D3DMULTISAMPLE_TYPE@@KHPAPAUD3DSurface@@PBX@Z");
//};

//public: static long c_d3d_resource_allocator::create_array_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DArrayTexture **, unsigned long *, unsigned char *, unsigned long)
//{
//    mangled_ppc("?create_array_texture@c_d3d_resource_allocator@@SAJIIIIKW4_D3DFORMAT@@KPAPAUD3DArrayTexture@@PAKPAEK@Z");
//};

//public: static long c_d3d_resource_allocator::create_off_screen_plain_surface(unsigned int, unsigned int, enum _D3DFORMAT, struct D3DSurface **)
//{
//    mangled_ppc("?create_off_screen_plain_surface@c_d3d_resource_allocator@@SAJIIW4_D3DFORMAT@@PAPAUD3DSurface@@@Z");
//};

//public: static void c_d3d_resource_allocator::verify_d3d_resource_is_unlocked(struct D3DResource *)
//{
//    mangled_ppc("?verify_d3d_resource_is_unlocked@c_d3d_resource_allocator@@SAXPAUD3DResource@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_d3d_vertex_buffer(struct D3DVertexBuffer *)
//{
//    mangled_ppc("?release_d3d_vertex_buffer@c_d3d_resource_allocator@@SAJPAUD3DVertexBuffer@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_d3d_index_buffer(struct D3DIndexBuffer *)
//{
//    mangled_ppc("?release_d3d_index_buffer@c_d3d_resource_allocator@@SAJPAUD3DIndexBuffer@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_vertex_shader(struct D3DVertexShader *)
//{
//    mangled_ppc("?release_vertex_shader@c_d3d_resource_allocator@@SAJPAUD3DVertexShader@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_pixel_shader(struct D3DPixelShader *)
//{
//    mangled_ppc("?release_pixel_shader@c_d3d_resource_allocator@@SAJPAUD3DPixelShader@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_texture(struct D3DBaseTexture *, bool)
//{
//    mangled_ppc("?release_texture@c_d3d_resource_allocator@@SAJPAUD3DBaseTexture@@_N@Z");
//};

//void free_d3d_memory_tracked(void *)
//{
//    mangled_ppc("?free_d3d_memory_tracked@@YAXPAX@Z");
//};

//public: static long c_d3d_resource_allocator::release_vertex_declaration(struct D3DVertexDeclaration *)
//{
//    mangled_ppc("?release_vertex_declaration@c_d3d_resource_allocator@@SAJPAUD3DVertexDeclaration@@@Z");
//};

//public: static long c_d3d_resource_allocator::release_surface(struct D3DSurface *)
//{
//    mangled_ppc("?release_surface@c_d3d_resource_allocator@@SAJPAUD3DSurface@@@Z");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_surfaces(void)
//{
//    mangled_ppc("?release_all_allocated_surfaces@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_textures(void)
//{
//    mangled_ppc("?release_all_allocated_textures@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static long c_d3d_resource_tracker::release_all_allocated_vertex_declarations(void)
//{
//    mangled_ppc("?release_all_allocated_vertex_declarations@c_d3d_resource_tracker@@SAJXZ");
//};

//public: static void c_d3d_resource_tracker::get_allocated_resource_counts(long *, long *, long *, long *, long *, long *, long *)
//{
//    mangled_ppc("?get_allocated_resource_counts@c_d3d_resource_tracker@@SAXPAJ000000@Z");
//};

//void d3d_resource_tracker_output_allocated_resource_counts(void)
//{
//    mangled_ppc("?d3d_resource_tracker_output_allocated_resource_counts@@YAXXZ");
//};

//public: static long c_d3d_resource_allocator::release_all_d3d_resources(void)
//{
//    mangled_ppc("?release_all_d3d_resources@c_d3d_resource_allocator@@SAJXZ");
//};

//public: long D3DDevice::CreateVertexBuffer(unsigned int, unsigned long, unsigned long, unsigned long, struct D3DVertexBuffer **, void **)
//{
//    mangled_ppc("?CreateVertexBuffer@D3DDevice@@QAAJIKKKPAPAUD3DVertexBuffer@@PAPAX@Z");
//};

//public: long D3DDevice::CreateIndexBuffer(unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DIndexBuffer **, void **)
//{
//    mangled_ppc("?CreateIndexBuffer@D3DDevice@@QAAJIKW4_D3DFORMAT@@KPAPAUD3DIndexBuffer@@PAPAX@Z");
//};

//public: long D3DDevice::CreateVertexDeclaration(struct _D3DVERTEXELEMENT9const *, struct D3DVertexDeclaration **)
//{
//    mangled_ppc("?CreateVertexDeclaration@D3DDevice@@QAAJPBU_D3DVERTEXELEMENT9@@PAPAUD3DVertexDeclaration@@@Z");
//};

//public: long D3DDevice::CreateRenderTarget(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, struct _D3DSURFACE_PARAMETERS const *)
//{
//    mangled_ppc("?CreateRenderTarget@D3DDevice@@QAAJIIW4_D3DFORMAT@@W4_D3DMULTISAMPLE_TYPE@@KHPAPAUD3DSurface@@PBU_D3DSURFACE_PARAMETERS@@@Z");
//};

//public: long D3DDevice::CreateDepthStencilSurface(unsigned int, unsigned int, enum _D3DFORMAT, enum _D3DMULTISAMPLE_TYPE, unsigned long, int, struct D3DSurface **, struct _D3DSURFACE_PARAMETERS const *)
//{
//    mangled_ppc("?CreateDepthStencilSurface@D3DDevice@@QAAJIIW4_D3DFORMAT@@W4_D3DMULTISAMPLE_TYPE@@KHPAPAUD3DSurface@@PBU_D3DSURFACE_PARAMETERS@@@Z");
//};

//public: long D3DDevice::CreateVertexShader(unsigned long const *, struct D3DVertexShader **)
//{
//    mangled_ppc("?CreateVertexShader@D3DDevice@@QAAJPBKPAPAUD3DVertexShader@@@Z");
//};

//public: long D3DDevice::CreatePixelShader(unsigned long const *, struct D3DPixelShader **)
//{
//    mangled_ppc("?CreatePixelShader@D3DDevice@@QAAJPBKPAPAUD3DPixelShader@@@Z");
//};

//void * operator new(unsigned int, char const *, long, enum e_operator_dummy)
//{
//    mangled_ppc("??2@YAPAXIPBDJW4e_operator_dummy@@@Z");
//};

