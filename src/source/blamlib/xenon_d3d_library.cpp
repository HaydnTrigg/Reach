/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long xenon_d3d::GetTemporaryRegisterUsage(void const *);
// long xenon_d3d::SaveUPDBFile(struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// bool xenon_d3d::xenon_d3dx_shader_microcode_equal(void const *, void const *);
// long xenon_d3d::xenon_d3dx_compile_shader(void *, unsigned long, struct xenon_d3d::D3DXMACRO const *, struct ID3DXInclude *, char const *, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXBuffer **, struct ID3DXConstantTable **, bool *, unsigned long *, struct xenon_d3d::s_shader_compile_params_ex const *, char const *);
// void xenon_d3d::estimate_ideal_shader_cost(void const *, unsigned long, struct xenon_d3d::s_ideal_shader_cost *);
// void xenon_d3d::create_constant_table(unsigned long const *, struct xenon_d3d::ID3DXConstantTable **);
// void xenon_d3d::release_constant_table(struct xenon_d3d::ID3DXConstantTable *);
// long xenon_d3d::copy_surface(void *, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct tagPOINT const *, void const *, unsigned int, enum _D3DFORMAT, struct tagRECT const *, unsigned long, float);
// long xenon_d3d::compress_surface(void *, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct tagPOINT const *, void const *, unsigned int, enum _D3DFORMAT, struct tagRECT const *, unsigned long, float);
// long xenon_d3d::compress_volume(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct _XGPOINT3D const *, void const *, unsigned int, unsigned int, enum _D3DFORMAT, struct _D3DBOX const *, unsigned long, float);
// unsigned long xenon_d3d::query_2d_texture_layout(unsigned long, unsigned long, unsigned long, enum _D3DFORMAT, unsigned long *, unsigned long *);
// void xenon_d3d::get_texture_mipmap_info(void *, long, bool *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
// unsigned int xenon_d3d::get_mipmap_offset(void *, int, int);
// void * xenon_d3d::get_mipmap_buffer(void *, int, int);
// bool xenon_d3d::for_every_block(void *, long, long, void (*)(void *, unsigned long, void *, unsigned long, unsigned long), void *);
// void * xenon_d3d::create_2d_texture(unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int);
// void * xenon_d3d::create_cube_texture(unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int);
// void * xenon_d3d::create_3d_texture(unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int);
// void * xenon_d3d::create_array_texture(unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int);
// void * xenon_d3d::create_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int);
// void xenon_d3d::release_texture(void *, bool);
// bool xenon_d3d::fixup_source_texture_for_xg_compression(void *&, int, int, int &, enum _D3DFORMAT &, struct _XGTEXTURE_DESC &);
// float xenon_d3d::byteswap_xenon_float(float);
// void xenon_d3d::copy_to_2d_texture(void *, int, unsigned int, void *, int, int, int, enum _D3DFORMAT);
// XGIsCompressedFormat;
// XGBytesPerPixelFromFormat;
// XGBitsPerPixelFromGpuFormat;
// void xenon_d3d::copy_to_array_texture(void *, int, int, unsigned int, void *, int, int, int, enum _D3DFORMAT, unsigned long);
// void xenon_d3d::copy_to_cube_texture(void *, int, int, unsigned int, void const *, int, int, enum _D3DFORMAT);
// void xenon_d3d::copy_to_3d_texture(void *, int, unsigned int, void const *, int, int, int, int, int, enum _D3DFORMAT);
// void xenon_d3d::tile_2d_texture(void *, unsigned long, void *, unsigned long);
// void xenon_d3d::tile_cube_or_array_texture(void *, unsigned long, void *, unsigned long, long);
// void xenon_d3d::tile_3d_texture(void *, unsigned long, void *, unsigned long);

//unsigned long xenon_d3d::GetTemporaryRegisterUsage(void const *)
//{
//    mangled_ppc("?GetTemporaryRegisterUsage@xenon_d3d@@YAKPBX@Z");
//};

//long xenon_d3d::SaveUPDBFile(struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?SaveUPDBFile@xenon_d3d@@YAJPAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//bool xenon_d3d::xenon_d3dx_shader_microcode_equal(void const *, void const *)
//{
//    mangled_ppc("?xenon_d3dx_shader_microcode_equal@xenon_d3d@@YA_NPBX0@Z");
//};

//long xenon_d3d::xenon_d3dx_compile_shader(void *, unsigned long, struct xenon_d3d::D3DXMACRO const *, struct ID3DXInclude *, char const *, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXBuffer **, struct ID3DXConstantTable **, bool *, unsigned long *, struct xenon_d3d::s_shader_compile_params_ex const *, char const *)
//{
//    mangled_ppc("?xenon_d3dx_compile_shader@xenon_d3d@@YAJPAXKPBUD3DXMACRO@1@PAUID3DXInclude@@PBD3KPAPAUID3DXBuffer@@4PAPAUID3DXConstantTable@@PA_NPAKPBUs_shader_compile_params_ex@1@3@Z");
//};

//void xenon_d3d::estimate_ideal_shader_cost(void const *, unsigned long, struct xenon_d3d::s_ideal_shader_cost *)
//{
//    mangled_ppc("?estimate_ideal_shader_cost@xenon_d3d@@YAXPBXKPAUs_ideal_shader_cost@1@@Z");
//};

//void xenon_d3d::create_constant_table(unsigned long const *, struct xenon_d3d::ID3DXConstantTable **)
//{
//    mangled_ppc("?create_constant_table@xenon_d3d@@YAXPBKPAPAUID3DXConstantTable@1@@Z");
//};

//void xenon_d3d::release_constant_table(struct xenon_d3d::ID3DXConstantTable *)
//{
//    mangled_ppc("?release_constant_table@xenon_d3d@@YAXPAUID3DXConstantTable@1@@Z");
//};

//long xenon_d3d::copy_surface(void *, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct tagPOINT const *, void const *, unsigned int, enum _D3DFORMAT, struct tagRECT const *, unsigned long, float)
//{
//    mangled_ppc("?copy_surface@xenon_d3d@@YAJPAXIIIW4_D3DFORMAT@@PBUtagPOINT@@PBXI1PBUtagRECT@@KM@Z");
//};

//long xenon_d3d::compress_surface(void *, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct tagPOINT const *, void const *, unsigned int, enum _D3DFORMAT, struct tagRECT const *, unsigned long, float)
//{
//    mangled_ppc("?compress_surface@xenon_d3d@@YAJPAXIIIW4_D3DFORMAT@@PBUtagPOINT@@PBXI1PBUtagRECT@@KM@Z");
//};

//long xenon_d3d::compress_volume(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, struct _XGPOINT3D const *, void const *, unsigned int, unsigned int, enum _D3DFORMAT, struct _D3DBOX const *, unsigned long, float)
//{
//    mangled_ppc("?compress_volume@xenon_d3d@@YAJPAXIIIIIW4_D3DFORMAT@@PBU_XGPOINT3D@@PBXII1PBU_D3DBOX@@KM@Z");
//};

//unsigned long xenon_d3d::query_2d_texture_layout(unsigned long, unsigned long, unsigned long, enum _D3DFORMAT, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?query_2d_texture_layout@xenon_d3d@@YAKKKKW4_D3DFORMAT@@PAK1@Z");
//};

//void xenon_d3d::get_texture_mipmap_info(void *, long, bool *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?get_texture_mipmap_info@xenon_d3d@@YAXPAXJPA_NPAI222222@Z");
//};

//unsigned int xenon_d3d::get_mipmap_offset(void *, int, int)
//{
//    mangled_ppc("?get_mipmap_offset@xenon_d3d@@YAIPAXHH@Z");
//};

//void * xenon_d3d::get_mipmap_buffer(void *, int, int)
//{
//    mangled_ppc("?get_mipmap_buffer@xenon_d3d@@YAPAXPAXHH@Z");
//};

//bool xenon_d3d::for_every_block(void *, long, long, void (*)(void *, unsigned long, void *, unsigned long, unsigned long), void *)
//{
//    mangled_ppc("?for_every_block@xenon_d3d@@YA_NPAXJJP6AX0K0KK@Z0@Z");
//};

//void * xenon_d3d::create_2d_texture(unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int)
//{
//    mangled_ppc("?create_2d_texture@xenon_d3d@@YAPAXIIIW4_D3DFORMAT@@PAIPAXI@Z");
//};

//void * xenon_d3d::create_cube_texture(unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int)
//{
//    mangled_ppc("?create_cube_texture@xenon_d3d@@YAPAXIIW4_D3DFORMAT@@PAIPAXI@Z");
//};

//void * xenon_d3d::create_3d_texture(unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int)
//{
//    mangled_ppc("?create_3d_texture@xenon_d3d@@YAPAXIIIIW4_D3DFORMAT@@PAIPAXI@Z");
//};

//void * xenon_d3d::create_array_texture(unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int)
//{
//    mangled_ppc("?create_array_texture@xenon_d3d@@YAPAXIIIIW4_D3DFORMAT@@PAIPAXI@Z");
//};

//void * xenon_d3d::create_texture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, enum _D3DFORMAT, unsigned int *, void *, unsigned int)
//{
//    mangled_ppc("?create_texture@xenon_d3d@@YAPAXIIIIIW4_D3DFORMAT@@PAIPAXI@Z");
//};

//void xenon_d3d::release_texture(void *, bool)
//{
//    mangled_ppc("?release_texture@xenon_d3d@@YAXPAX_N@Z");
//};

//bool xenon_d3d::fixup_source_texture_for_xg_compression(void *&, int, int, int &, enum _D3DFORMAT &, struct _XGTEXTURE_DESC &)
//{
//    mangled_ppc("?fixup_source_texture_for_xg_compression@xenon_d3d@@YA_NAAPAXHHAAHAAW4_D3DFORMAT@@AAU_XGTEXTURE_DESC@@@Z");
//};

//float xenon_d3d::byteswap_xenon_float(float)
//{
//    mangled_ppc("?byteswap_xenon_float@xenon_d3d@@YAMM@Z");
//};

//void xenon_d3d::copy_to_2d_texture(void *, int, unsigned int, void *, int, int, int, enum _D3DFORMAT)
//{
//    mangled_ppc("?copy_to_2d_texture@xenon_d3d@@YAXPAXHI0HHHW4_D3DFORMAT@@@Z");
//};

//XGIsCompressedFormat
//{
//    mangled_ppc("XGIsCompressedFormat");
//};

//XGBytesPerPixelFromFormat
//{
//    mangled_ppc("XGBytesPerPixelFromFormat");
//};

//XGBitsPerPixelFromGpuFormat
//{
//    mangled_ppc("XGBitsPerPixelFromGpuFormat");
//};

//void xenon_d3d::copy_to_array_texture(void *, int, int, unsigned int, void *, int, int, int, enum _D3DFORMAT, unsigned long)
//{
//    mangled_ppc("?copy_to_array_texture@xenon_d3d@@YAXPAXHHI0HHHW4_D3DFORMAT@@K@Z");
//};

//void xenon_d3d::copy_to_cube_texture(void *, int, int, unsigned int, void const *, int, int, enum _D3DFORMAT)
//{
//    mangled_ppc("?copy_to_cube_texture@xenon_d3d@@YAXPAXHHIPBXHHW4_D3DFORMAT@@@Z");
//};

//void xenon_d3d::copy_to_3d_texture(void *, int, unsigned int, void const *, int, int, int, int, int, enum _D3DFORMAT)
//{
//    mangled_ppc("?copy_to_3d_texture@xenon_d3d@@YAXPAXHIPBXHHHHHW4_D3DFORMAT@@@Z");
//};

//void xenon_d3d::tile_2d_texture(void *, unsigned long, void *, unsigned long)
//{
//    mangled_ppc("?tile_2d_texture@xenon_d3d@@YAXPAXK0K@Z");
//};

//void xenon_d3d::tile_cube_or_array_texture(void *, unsigned long, void *, unsigned long, long)
//{
//    mangled_ppc("?tile_cube_or_array_texture@xenon_d3d@@YAXPAXK0KJ@Z");
//};

//void xenon_d3d::tile_3d_texture(void *, unsigned long, void *, unsigned long)
//{
//    mangled_ppc("?tile_3d_texture@xenon_d3d@@YAXPAXK0K@Z");
//};

