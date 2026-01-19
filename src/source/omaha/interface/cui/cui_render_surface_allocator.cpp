/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_cui_render_surface_allocator::c_cui_render_surface_allocator(enum e_surface);
// public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_surface(unsigned int, unsigned int, enum _D3DFORMAT);
// public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_depth_stencil_surface(unsigned int, unsigned int, enum _D3DFORMAT);
// public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::allocate_texture(unsigned int, unsigned int, enum _D3DFORMAT);
// public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_alias_surface(unsigned int, unsigned int, enum _D3DFORMAT);
// public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::allocate_alias_texture(unsigned int, unsigned int, enum _D3DFORMAT);
// public: void c_cui_render_surface_allocator::release_surface(void);
// public: void c_cui_render_surface_allocator::release_texture(void);
// public: void c_cui_render_surface_allocator::release_alias_surface(void);
// public: void c_cui_render_surface_allocator::release_alias_texture(void);
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::full(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::top(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::push(void);
// public: void c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::pop(void);
// public: struct c_cui_render_surface_allocator::s_surface_allocation & c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::operator[](long);
// public: c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>(void);
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::full(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::top(void) const;
// public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::push(void);
// public: void c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::pop(void);
// public: c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>(void);
// public: c_cui_render_surface_allocator::s_texture_allocation::s_texture_allocation(void);
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::valid(void) const;
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::valid(long) const;
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::empty(void) const;
// public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::empty(void) const;

//public: c_cui_render_surface_allocator::c_cui_render_surface_allocator(enum e_surface)
//{
//    mangled_ppc("??0c_cui_render_surface_allocator@@QAA@W4e_surface@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_surface(unsigned int, unsigned int, enum _D3DFORMAT)
//{
//    mangled_ppc("?allocate_surface@c_cui_render_surface_allocator@@QAAPAUs_surface_allocation@1@IIW4_D3DFORMAT@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_depth_stencil_surface(unsigned int, unsigned int, enum _D3DFORMAT)
//{
//    mangled_ppc("?allocate_depth_stencil_surface@c_cui_render_surface_allocator@@QAAPAUs_surface_allocation@1@IIW4_D3DFORMAT@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::allocate_texture(unsigned int, unsigned int, enum _D3DFORMAT)
//{
//    mangled_ppc("?allocate_texture@c_cui_render_surface_allocator@@QAAPAUs_texture_allocation@1@IIW4_D3DFORMAT@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_surface_allocation * c_cui_render_surface_allocator::allocate_alias_surface(unsigned int, unsigned int, enum _D3DFORMAT)
//{
//    mangled_ppc("?allocate_alias_surface@c_cui_render_surface_allocator@@QAAPAUs_surface_allocation@1@IIW4_D3DFORMAT@@@Z");
//};

//public: struct c_cui_render_surface_allocator::s_texture_allocation * c_cui_render_surface_allocator::allocate_alias_texture(unsigned int, unsigned int, enum _D3DFORMAT)
//{
//    mangled_ppc("?allocate_alias_texture@c_cui_render_surface_allocator@@QAAPAUs_texture_allocation@1@IIW4_D3DFORMAT@@@Z");
//};

//public: void c_cui_render_surface_allocator::release_surface(void)
//{
//    mangled_ppc("?release_surface@c_cui_render_surface_allocator@@QAAXXZ");
//};

//public: void c_cui_render_surface_allocator::release_texture(void)
//{
//    mangled_ppc("?release_texture@c_cui_render_surface_allocator@@QAAXXZ");
//};

//public: void c_cui_render_surface_allocator::release_alias_surface(void)
//{
//    mangled_ppc("?release_alias_surface@c_cui_render_surface_allocator@@QAAXXZ");
//};

//public: void c_cui_render_surface_allocator::release_alias_texture(void)
//{
//    mangled_ppc("?release_alias_texture@c_cui_render_surface_allocator@@QAAXXZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBAJXZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QAAJXZ");
//};

//public: void c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QAAXXZ");
//};

//public: struct c_cui_render_surface_allocator::s_surface_allocation & c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QAAAAUs_surface_allocation@c_cui_render_surface_allocator@@J@Z");
//};

//public: c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QAA@XZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBAJXZ");
//};

//public: long c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QAAJXZ");
//};

//public: void c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QAAXXZ");
//};

//public: c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QAA@XZ");
//};

//public: c_cui_render_surface_allocator::s_texture_allocation::s_texture_allocation(void)
//{
//    mangled_ppc("??0s_texture_allocation@c_cui_render_surface_allocator@@QAA@XZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_surface_allocation, 4>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_surface_allocation@c_cui_render_surface_allocator@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_cui_render_surface_allocator::s_texture_allocation, 128>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_texture_allocation@c_cui_render_surface_allocator@@$0IA@@@QBA_NXZ");
//};

