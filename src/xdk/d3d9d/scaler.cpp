/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct __vector4const `struct __vector4 __cdecl XMVectorExp(struct __vector4)'::`2'::C1; // "?C1@?1??XMVectorExp@@YA?AU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMVectorExp(struct __vector4)'::`2'::C0; // "?C0@?1??XMVectorExp@@YA?AU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMVectorPow(struct __vector4, struct __vector4)'::`2'::EC0; // "?EC0@?1??XMVectorPow@@YA?AU__vector4@@U2@0@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMVectorPow(struct __vector4, struct __vector4)'::`2'::EC1; // "?EC1@?1??XMVectorPow@@YA?AU__vector4@@U2@0@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMVectorPow(struct __vector4, struct __vector4)'::`2'::LC1; // "?LC1@?1??XMVectorPow@@YA?AU__vector4@@U2@0@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMVectorPow(struct __vector4, struct __vector4)'::`2'::LC0; // "?LC0@?1??XMVectorPow@@YA?AU__vector4@@U2@0@Z@4U2@B"

// float D3D::Clamp(float, float, float);
// float D3D::CubicParameterRemap(float, float, float, float);
// void D3D::ValidateScalerParameters(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DRECT const *, unsigned long, unsigned long, int);
// void D3D::InitializeDefaultScalerParameters(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DPRIVATE_SCALER_PARAMETERS *, int);
// void D3D::ConvertScalerParametersInternal(class D3D::CDevice *, struct _D3DVIDEO_SCALER_PARAMETERS const *, struct _D3DPRIVATE_SCALER_PARAMETERS *);
// void D3D::SendScalerNotification(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *);
// struct __vector4 XMVectorExp(struct __vector4);
// struct __vector4 XMVectorPow(struct __vector4, struct __vector4);
// float XMScalarSin(float);
// float D3D::_exp(float);
// float D3D::_pow(float, float);
// float D3D::_sqrt(float);
// void D3D::coef_f2c(float *, unsigned int *, int, int);
// float D3D::Bessi0(float);
// float D3D::KaiserWindow(float, float, float);
// float D3D::sinc(float);
// float D3D::mitchell(float);
// float D3D::catmull(float);
// void D3D::GenerateFilterCoefficients(enum _D3DFILTER_TYPE, unsigned long, unsigned long, int, float, float, float *);
// void D3D::BuildFilter(struct _FILTER *, int, enum _D3DFILTER_TYPE, struct _D3DFILTER_PARAMETERS const *, float, unsigned int, int);
// int D3D::InternalScalerSetup(class D3D::CDevice *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, enum _D3DFILTER_TYPE &, struct _D3DFILTER_PARAMETERS const *, enum _D3DFILTER_TYPE &, struct _D3DFILTER_PARAMETERS const *, struct _HARDWARE_SCALER_PARAMETERS *);
// void D3D::SetupScaler(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, int);
// D3DDevice_SetScalerParametersInternal;
// D3DDevice_SetScalerParameters;

//float D3D::Clamp(float, float, float)
//{
//    mangled_ppc("?Clamp@D3D@@YAMMMM@Z");
//};

//float D3D::CubicParameterRemap(float, float, float, float)
//{
//    mangled_ppc("?CubicParameterRemap@D3D@@YAMMMMM@Z");
//};

//void D3D::ValidateScalerParameters(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DRECT const *, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?ValidateScalerParameters@D3D@@YAXPAVCDevice@1@KKPBU_D3DRECT@@KKH@Z");
//};

//void D3D::InitializeDefaultScalerParameters(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DPRIVATE_SCALER_PARAMETERS *, int)
//{
//    mangled_ppc("?InitializeDefaultScalerParameters@D3D@@YAXPAVCDevice@1@KKPBU_D3DPRIVATE_SCALER_PARAMETERS@@PAU3@H@Z");
//};

//void D3D::ConvertScalerParametersInternal(class D3D::CDevice *, struct _D3DVIDEO_SCALER_PARAMETERS const *, struct _D3DPRIVATE_SCALER_PARAMETERS *)
//{
//    mangled_ppc("?ConvertScalerParametersInternal@D3D@@YAXPAVCDevice@1@PBU_D3DVIDEO_SCALER_PARAMETERS@@PAU_D3DPRIVATE_SCALER_PARAMETERS@@@Z");
//};

//void D3D::SendScalerNotification(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *)
//{
//    mangled_ppc("?SendScalerNotification@D3D@@YAXPAVCDevice@1@KKPBU_D3DPRIVATE_SCALER_PARAMETERS@@@Z");
//};

//struct __vector4 XMVectorExp(struct __vector4)
//{
//    mangled_ppc("?XMVectorExp@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorPow(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorPow@@YA?AU__vector4@@U1@0@Z");
//};

//float XMScalarSin(float)
//{
//    mangled_ppc("?XMScalarSin@@YAMM@Z");
//};

//float D3D::_exp(float)
//{
//    mangled_ppc("?_exp@D3D@@YAMM@Z");
//};

//float D3D::_pow(float, float)
//{
//    mangled_ppc("?_pow@D3D@@YAMMM@Z");
//};

//float D3D::_sqrt(float)
//{
//    mangled_ppc("?_sqrt@D3D@@YAMM@Z");
//};

//void D3D::coef_f2c(float *, unsigned int *, int, int)
//{
//    mangled_ppc("?coef_f2c@D3D@@YAXPAMPAIHH@Z");
//};

//float D3D::Bessi0(float)
//{
//    mangled_ppc("?Bessi0@D3D@@YAMM@Z");
//};

//float D3D::KaiserWindow(float, float, float)
//{
//    mangled_ppc("?KaiserWindow@D3D@@YAMMMM@Z");
//};

//float D3D::sinc(float)
//{
//    mangled_ppc("?sinc@D3D@@YAMM@Z");
//};

//float D3D::mitchell(float)
//{
//    mangled_ppc("?mitchell@D3D@@YAMM@Z");
//};

//float D3D::catmull(float)
//{
//    mangled_ppc("?catmull@D3D@@YAMM@Z");
//};

//void D3D::GenerateFilterCoefficients(enum _D3DFILTER_TYPE, unsigned long, unsigned long, int, float, float, float *)
//{
//    mangled_ppc("?GenerateFilterCoefficients@D3D@@YAXW4_D3DFILTER_TYPE@@KKHMMPAM@Z");
//};

//void D3D::BuildFilter(struct _FILTER *, int, enum _D3DFILTER_TYPE, struct _D3DFILTER_PARAMETERS const *, float, unsigned int, int)
//{
//    mangled_ppc("?BuildFilter@D3D@@YAXPAU_FILTER@@HW4_D3DFILTER_TYPE@@PBU_D3DFILTER_PARAMETERS@@MIH@Z");
//};

//int D3D::InternalScalerSetup(class D3D::CDevice *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, enum _D3DFILTER_TYPE &, struct _D3DFILTER_PARAMETERS const *, enum _D3DFILTER_TYPE &, struct _D3DFILTER_PARAMETERS const *, struct _HARDWARE_SCALER_PARAMETERS *)
//{
//    mangled_ppc("?InternalScalerSetup@D3D@@YAHPAVCDevice@1@KKKKKAAW4_D3DFILTER_TYPE@@PBU_D3DFILTER_PARAMETERS@@12PAU_HARDWARE_SCALER_PARAMETERS@@@Z");
//};

//void D3D::SetupScaler(class D3D::CDevice *, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, int)
//{
//    mangled_ppc("?SetupScaler@D3D@@YAXPAVCDevice@1@KKPBU_D3DPRIVATE_SCALER_PARAMETERS@@H@Z");
//};

//D3DDevice_SetScalerParametersInternal
//{
//    mangled_ppc("D3DDevice_SetScalerParametersInternal");
//};

//D3DDevice_SetScalerParameters
//{
//    mangled_ppc("D3DDevice_SetScalerParameters");
//};

