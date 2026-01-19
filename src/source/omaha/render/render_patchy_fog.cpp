/* ---------- headers */

#include "omaha\render\render_patchy_fog.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static float c_patchy_fog::ms_dt; // "?ms_dt@c_patchy_fog@@1MA"

// union vector4d * XMVECTOR_to_real_vector4d(struct __vector4, union vector4d *);
// void find_euler_angles(union vector3d const *, union vector3d const *, union euler_angles3d *);
// public: static void c_patchy_fog::frame_advance_all(float);
// public: c_patchy_fog::c_patchy_fog(void);
// public: void c_patchy_fog::clear(void);
// protected: void c_patchy_fog::get_relative_movement(union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d *, union euler_angles3d *);
// protected: struct __vector4 c_patchy_fog::get_patchy_fog_sheet_offset(unsigned int);
// public: bool c_patchy_fog::evaluate_shader_constants(struct c_patchy_fog::s_patchy_fog_parameters const *, union real_point3d const *, union vector3d const *, union vector3d const *, union short_rectangle2d const *, union short_rectangle2d const *, struct real_matrix4x3const *, float, float const (*const)[4], struct c_patchy_fog::s_patchy_fog_shader_constants *);
// public: void c_patchy_fog::render_patchy_fog(union real_point3d const *, union vector3d const *, union vector3d const *, union short_rectangle2d const *, union short_rectangle2d const *, struct real_matrix4x3const *, float, float const (*const)[4], enum e_surface);
// public: bool s_atmosphere_parameters::patchy_fog_active(void) const;
// public: static struct s_atmosphere_parameters const * c_atmosphere_fog_interface::get_default_atmosphere(void);
// D3DDevice_SetPixelShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetPixelShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// atanf;
// struct __vector4& operator+=(struct __vector4&, struct __vector4);
// struct __vector4 XMVectorAdd(struct __vector4, struct __vector4);
// struct __vector4 operator*(float, struct __vector4);

//union vector4d * XMVECTOR_to_real_vector4d(struct __vector4, union vector4d *)
//{
//    mangled_ppc("?XMVECTOR_to_real_vector4d@@YAPATvector4d@@U__vector4@@PAT1@@Z");
//};

//void find_euler_angles(union vector3d const *, union vector3d const *, union euler_angles3d *)
//{
//    mangled_ppc("?find_euler_angles@@YAXPBTvector3d@@0PATeuler_angles3d@@@Z");
//};

//public: static void c_patchy_fog::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_patchy_fog@@SAXM@Z");
//};

//public: c_patchy_fog::c_patchy_fog(void)
//{
//    mangled_ppc("??0c_patchy_fog@@QAA@XZ");
//};

//public: void c_patchy_fog::clear(void)
//{
//    mangled_ppc("?clear@c_patchy_fog@@QAAXXZ");
//};

//protected: void c_patchy_fog::get_relative_movement(union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d *, union euler_angles3d *)
//{
//    mangled_ppc("?get_relative_movement@c_patchy_fog@@IAAXPBTreal_point3d@@PBTvector3d@@1PAT3@PATeuler_angles3d@@@Z");
//};

//protected: struct __vector4 c_patchy_fog::get_patchy_fog_sheet_offset(unsigned int)
//{
//    mangled_ppc("?get_patchy_fog_sheet_offset@c_patchy_fog@@IAA?AU__vector4@@I@Z");
//};

//public: bool c_patchy_fog::evaluate_shader_constants(struct c_patchy_fog::s_patchy_fog_parameters const *, union real_point3d const *, union vector3d const *, union vector3d const *, union short_rectangle2d const *, union short_rectangle2d const *, struct real_matrix4x3const *, float, float const (*const)[4], struct c_patchy_fog::s_patchy_fog_shader_constants *)
//{
//    mangled_ppc("?evaluate_shader_constants@c_patchy_fog@@QAA_NPBUs_patchy_fog_parameters@1@PBTreal_point3d@@PBTvector3d@@2PBTshort_rectangle2d@@3PBUreal_matrix4x3@@MQAY03$$CBMPAUs_patchy_fog_shader_constants@1@@Z");
//};

//public: void c_patchy_fog::render_patchy_fog(union real_point3d const *, union vector3d const *, union vector3d const *, union short_rectangle2d const *, union short_rectangle2d const *, struct real_matrix4x3const *, float, float const (*const)[4], enum e_surface)
//{
//    mangled_ppc("?render_patchy_fog@c_patchy_fog@@QAAXPBTreal_point3d@@PBTvector3d@@1PBTshort_rectangle2d@@2PBUreal_matrix4x3@@MQAY03$$CBMW4e_surface@@@Z");
//};

//public: bool s_atmosphere_parameters::patchy_fog_active(void) const
//{
//    mangled_ppc("?patchy_fog_active@s_atmosphere_parameters@@QBA_NXZ");
//};

//public: static struct s_atmosphere_parameters const * c_atmosphere_fog_interface::get_default_atmosphere(void)
//{
//    mangled_ppc("?get_default_atmosphere@c_atmosphere_fog_interface@@SAPBUs_atmosphere_parameters@@XZ");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetPixelShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF1");
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

//atanf
//{
//    mangled_ppc("atanf");
//};

//struct __vector4& operator+=(struct __vector4&, struct __vector4)
//{
//    mangled_ppc("??Y@YAAAU__vector4@@AAU0@U0@@Z");
//};

//struct __vector4 XMVectorAdd(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorAdd@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 operator*(float, struct __vector4)
//{
//    mangled_ppc("??D@YA?AU__vector4@@MU0@@Z");
//};

