/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct _D3DVERTEXELEMENT9(*c_vertex_declaration_table::explicit_vertex_decls)[64]; // "?explicit_vertex_decls@c_vertex_declaration_table@@2PAY0EA@U_D3DVERTEXELEMENT9@@A"
// public: static struct _D3DVERTEXELEMENT9(*c_vertex_declaration_table::base_vertex_decls)[64]; // "?base_vertex_decls@c_vertex_declaration_table@@2PAY0EA@U_D3DVERTEXELEMENT9@@A"
// public: static struct _D3DVERTEXELEMENT9(*c_vertex_declaration_table::lighting_vertex_decls)[64]; // "?lighting_vertex_decls@c_vertex_declaration_table@@2PAY0EA@U_D3DVERTEXELEMENT9@@A"
// public: static struct _D3DVERTEXELEMENT9(*c_vertex_declaration_table::transfer_vertex_decls)[64]; // "?transfer_vertex_decls@c_vertex_declaration_table@@2PAY0EA@U_D3DVERTEXELEMENT9@@A"
// private: static struct D3DVertexDeclaration **c_vertex_declaration_table::m_explicit_vertex_declarations; // "?m_explicit_vertex_declarations@c_vertex_declaration_table@@0PAPAUD3DVertexDeclaration@@A"
// private: static struct D3DVertexDeclaration * (*c_vertex_declaration_table::m_vertex_declarations)[4][4]; // "?m_vertex_declarations@c_vertex_declaration_table@@0PAY133PAUD3DVertexDeclaration@@A"

// private: static void c_vertex_declaration_table::concat_decl(struct _D3DVERTEXELEMENT9*const, struct _D3DVERTEXELEMENT9const *const, struct _D3DVERTEXELEMENT9const *const, struct _D3DVERTEXELEMENT9const *const);
// public: static bool c_vertex_declaration_table::initialize_vertex_declarations(void);
// public: static bool c_vertex_declaration_table::release_vertex_declarations(void);
// public: static struct D3DVertexDeclaration * c_vertex_declaration_table::get_d3d_vertex_declaration(enum e_vertex_type, enum e_lighting_vertex_types, enum e_transfer_vector_vertex_types);
// public: static bool c_vertex_declaration_table::set(enum e_vertex_type, enum e_transfer_vector_vertex_types, long);
// public: static bool c_vertex_declaration_table::set_explicit(enum e_explicit_vertex_type);
// void populate_stream_strides(enum e_vertex_type, enum e_transfer_vector_vertex_types, long, unsigned long *const);
// public: static struct D3DVertexDeclaration * c_vertex_declaration_table::get_d3d_vertex_declaration_by_entry_point(enum e_vertex_type, enum e_transfer_vector_vertex_types, long);
// public: static long c_vertex_declaration_table::calculate_stride(long, long);
// public: c_vertex_buffer_resource::c_vertex_buffer_resource(void);
// public: bool c_vertex_buffer_resource::create(long, long);
// public: bool c_vertex_buffer_resource::release(void);
// public: bool c_vertex_buffer_resource::lock(unsigned char **);
// public: void c_vertex_buffer_resource::unlock(void);
// public: static class c_vertex_buffer_resource * c_vertex_buffer_resource::clone(void);
// public: bool c_vertex_buffer_resource::set_stream_source(unsigned long);
// long real_point3d_to_d3d_decl_type(long, union real_point3d const *, void **);
// long real_point2d_to_d3d_decl_type(long, union real_point2d const *, void **);
// long pixel32_to_d3d_decl_type(long, unsigned long, void **);
// long node_indices_to_d3d_decl_type(long, unsigned char const *, void **);
// long node_weights_to_d3d_decl_type(long, float const *, void **);
// public: static void c_vertex_buffer_resource::copy_data_from_raw_vertices(struct s_raw_vertex *, long, long);
// public: static bool c_rasterizer_resource_factory::create_vertex_buffer_resource(class c_vertex_buffer_resource *, long, long);
// bool operator!=<unsigned char>(unsigned char const &, enum e_none_sentinel const &);
// bool operator==<unsigned char>(unsigned char const &, enum e_none_sentinel const &);
// D3DDevice_SetStreamSource_Inline;

//private: static void c_vertex_declaration_table::concat_decl(struct _D3DVERTEXELEMENT9*const, struct _D3DVERTEXELEMENT9const *const, struct _D3DVERTEXELEMENT9const *const, struct _D3DVERTEXELEMENT9const *const)
//{
//    mangled_ppc("?concat_decl@c_vertex_declaration_table@@CAXQAU_D3DVERTEXELEMENT9@@QBU2@11@Z");
//};

//public: static bool c_vertex_declaration_table::initialize_vertex_declarations(void)
//{
//    mangled_ppc("?initialize_vertex_declarations@c_vertex_declaration_table@@SA_NXZ");
//};

//public: static bool c_vertex_declaration_table::release_vertex_declarations(void)
//{
//    mangled_ppc("?release_vertex_declarations@c_vertex_declaration_table@@SA_NXZ");
//};

//public: static struct D3DVertexDeclaration * c_vertex_declaration_table::get_d3d_vertex_declaration(enum e_vertex_type, enum e_lighting_vertex_types, enum e_transfer_vector_vertex_types)
//{
//    mangled_ppc("?get_d3d_vertex_declaration@c_vertex_declaration_table@@SAPAUD3DVertexDeclaration@@W4e_vertex_type@@W4e_lighting_vertex_types@@W4e_transfer_vector_vertex_types@@@Z");
//};

//public: static bool c_vertex_declaration_table::set(enum e_vertex_type, enum e_transfer_vector_vertex_types, long)
//{
//    mangled_ppc("?set@c_vertex_declaration_table@@SA_NW4e_vertex_type@@W4e_transfer_vector_vertex_types@@J@Z");
//};

//public: static bool c_vertex_declaration_table::set_explicit(enum e_explicit_vertex_type)
//{
//    mangled_ppc("?set_explicit@c_vertex_declaration_table@@SA_NW4e_explicit_vertex_type@@@Z");
//};

//void populate_stream_strides(enum e_vertex_type, enum e_transfer_vector_vertex_types, long, unsigned long *const)
//{
//    mangled_ppc("?populate_stream_strides@@YAXW4e_vertex_type@@W4e_transfer_vector_vertex_types@@JQAK@Z");
//};

//public: static struct D3DVertexDeclaration * c_vertex_declaration_table::get_d3d_vertex_declaration_by_entry_point(enum e_vertex_type, enum e_transfer_vector_vertex_types, long)
//{
//    mangled_ppc("?get_d3d_vertex_declaration_by_entry_point@c_vertex_declaration_table@@SAPAUD3DVertexDeclaration@@W4e_vertex_type@@W4e_transfer_vector_vertex_types@@J@Z");
//};

//public: static long c_vertex_declaration_table::calculate_stride(long, long)
//{
//    mangled_ppc("?calculate_stride@c_vertex_declaration_table@@SAJJJ@Z");
//};

//public: c_vertex_buffer_resource::c_vertex_buffer_resource(void)
//{
//    mangled_ppc("??0c_vertex_buffer_resource@@QAA@XZ");
//};

//public: bool c_vertex_buffer_resource::create(long, long)
//{
//    mangled_ppc("?create@c_vertex_buffer_resource@@QAA_NJJ@Z");
//};

//public: bool c_vertex_buffer_resource::release(void)
//{
//    mangled_ppc("?release@c_vertex_buffer_resource@@QAA_NXZ");
//};

//public: bool c_vertex_buffer_resource::lock(unsigned char **)
//{
//    mangled_ppc("?lock@c_vertex_buffer_resource@@QAA_NPAPAE@Z");
//};

//public: void c_vertex_buffer_resource::unlock(void)
//{
//    mangled_ppc("?unlock@c_vertex_buffer_resource@@QAAXXZ");
//};

//public: static class c_vertex_buffer_resource * c_vertex_buffer_resource::clone(void)
//{
//    mangled_ppc("?clone@c_vertex_buffer_resource@@SAPAV1@XZ");
//};

//public: bool c_vertex_buffer_resource::set_stream_source(unsigned long)
//{
//    mangled_ppc("?set_stream_source@c_vertex_buffer_resource@@QAA_NK@Z");
//};

//long real_point3d_to_d3d_decl_type(long, union real_point3d const *, void **)
//{
//    mangled_ppc("?real_point3d_to_d3d_decl_type@@YAJJPBTreal_point3d@@PAPAX@Z");
//};

//long real_point2d_to_d3d_decl_type(long, union real_point2d const *, void **)
//{
//    mangled_ppc("?real_point2d_to_d3d_decl_type@@YAJJPBTreal_point2d@@PAPAX@Z");
//};

//long pixel32_to_d3d_decl_type(long, unsigned long, void **)
//{
//    mangled_ppc("?pixel32_to_d3d_decl_type@@YAJJKPAPAX@Z");
//};

//long node_indices_to_d3d_decl_type(long, unsigned char const *, void **)
//{
//    mangled_ppc("?node_indices_to_d3d_decl_type@@YAJJPBEPAPAX@Z");
//};

//long node_weights_to_d3d_decl_type(long, float const *, void **)
//{
//    mangled_ppc("?node_weights_to_d3d_decl_type@@YAJJPBMPAPAX@Z");
//};

//public: static void c_vertex_buffer_resource::copy_data_from_raw_vertices(struct s_raw_vertex *, long, long)
//{
//    mangled_ppc("?copy_data_from_raw_vertices@c_vertex_buffer_resource@@SAXPAUs_raw_vertex@@JJ@Z");
//};

//public: static bool c_rasterizer_resource_factory::create_vertex_buffer_resource(class c_vertex_buffer_resource *, long, long)
//{
//    mangled_ppc("?create_vertex_buffer_resource@c_rasterizer_resource_factory@@SA_NPAVc_vertex_buffer_resource@@JJ@Z");
//};

//bool operator!=<unsigned char>(unsigned char const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9E@@YA_NABEABW4e_none_sentinel@@@Z");
//};

//bool operator==<unsigned char>(unsigned char const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8E@@YA_NABEABW4e_none_sentinel@@@Z");
//};

//D3DDevice_SetStreamSource_Inline
//{
//    mangled_ppc("D3DDevice_SetStreamSource_Inline");
//};

