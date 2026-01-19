/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// enum XGRAPHICS::ILImportComponent *XGRAPHICS::g_eDEFAULT_DIFFUSE; // "?g_eDEFAULT_DIFFUSE@XGRAPHICS@@3PAW4ILImportComponent@1@A"
// enum XGRAPHICS::ILImportComponent *XGRAPHICS::g_eDEFAULT_SPECULAR; // "?g_eDEFAULT_SPECULAR@XGRAPHICS@@3PAW4ILImportComponent@1@A"
// enum XGRAPHICS::ILImportComponent *XGRAPHICS::g_eDEFAULT_TEXCOORD; // "?g_eDEFAULT_TEXCOORD@XGRAPHICS@@3PAW4ILImportComponent@1@A"
// enum XGRAPHICS::ILImportComponent *XGRAPHICS::g_eDEFAULT_PS30Default; // "?g_eDEFAULT_PS30Default@XGRAPHICS@@3PAW4ILImportComponent@1@A"

// void XGRAPHICS::DEFConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// void XGRAPHICS::DEFIConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// void XGRAPHICS::DEFBConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// void XGRAPHICS::SetupRegDefault(unsigned long, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *);
// void XGRAPHICS::SetupDCLPT(unsigned long, enum _D3DSAMPLER_TEXTURE_TYPE, unsigned long **);
// void XGRAPHICS::SetupDCLPIN(unsigned long, enum _D3DDECLUSAGE, unsigned long, int, enum XGRAPHICS::ILImportComponent *, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// void XGRAPHICS::SetupDCLPI(unsigned long, enum _D3DDECLUSAGE, unsigned long, int, enum XGRAPHICS::ILImportComponent *, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// unsigned long XGRAPHICS::PSConvertDCLToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **, void *, void (*)(void *, int, unsigned long, char const *));
// void XGRAPHICS::ProcessFirstPassInfo(unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **);
// void XGRAPHICS::CollectPS1InstInfo(unsigned long, unsigned long **, struct XGRAPHICS::_R400PSIL *);
// unsigned long XGRAPHICS::FirstPassForPS1_XX(unsigned long *, unsigned long, struct XGRAPHICS::_R400PSIL *);
// void XGRAPHICS::InsertMovWithClamp(unsigned long, enum XGRAPHICS::ILRegType, unsigned long, unsigned long **);
// void XGRAPHICS::InsertColorClampToExportColor(struct XGRAPHICS::_R400IL_RECORDED_INFO *, unsigned long **);
// long XGRAPHICS::GrowILMemory(struct XGRAPHICS::_R400ILSTORE *);
// long XGRAPHICS::HasNeededILMem(unsigned long **, struct XGRAPHICS::_R400ILSTORE *);
// unsigned long XGRAPHICS::r400InsertEndMainILCode(unsigned long, unsigned long **, struct XGRAPHICS::_R400ILSTORE *, struct XGRAPHICS::_R400PSIL *);
// unsigned long XGRAPHICS::r400PS_TO_ILConversion(unsigned long *, unsigned long, struct XGRAPHICS::_R400PSIL *, struct XGRAPHICS::_R400ILSTORE *, enum XGRAPHICS::_E_CENTER_CENTROID, void *, void (*)(void *, int, unsigned long, char const *));

//void XGRAPHICS::DEFConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?DEFConvertToILFunc@XGRAPHICS@@YAXPAPAKKPAU_R400PSIL@1@0@Z");
//};

//void XGRAPHICS::DEFIConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?DEFIConvertToILFunc@XGRAPHICS@@YAXPAPAKKPAU_R400PSIL@1@0@Z");
//};

//void XGRAPHICS::DEFBConvertToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?DEFBConvertToILFunc@XGRAPHICS@@YAXPAPAKKPAU_R400PSIL@1@0@Z");
//};

//void XGRAPHICS::SetupRegDefault(unsigned long, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *, enum XGRAPHICS::ILImportComponent *)
//{
//    mangled_ppc("?SetupRegDefault@XGRAPHICS@@YAXKPAW4ILImportComponent@1@0000@Z");
//};

//void XGRAPHICS::SetupDCLPT(unsigned long, enum _D3DSAMPLER_TEXTURE_TYPE, unsigned long **)
//{
//    mangled_ppc("?SetupDCLPT@XGRAPHICS@@YAXKW4_D3DSAMPLER_TEXTURE_TYPE@@PAPAK@Z");
//};

//void XGRAPHICS::SetupDCLPIN(unsigned long, enum _D3DDECLUSAGE, unsigned long, int, enum XGRAPHICS::ILImportComponent *, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?SetupDCLPIN@XGRAPHICS@@YAXKW4_D3DDECLUSAGE@@KHPAW4ILImportComponent@1@KPAU_R400PSIL@1@PAPAK@Z");
//};

//void XGRAPHICS::SetupDCLPI(unsigned long, enum _D3DDECLUSAGE, unsigned long, int, enum XGRAPHICS::ILImportComponent *, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?SetupDCLPI@XGRAPHICS@@YAXKW4_D3DDECLUSAGE@@KHPAW4ILImportComponent@1@KPAU_R400PSIL@1@PAPAK@Z");
//};

//unsigned long XGRAPHICS::PSConvertDCLToILFunc(unsigned long **, unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **, void *, void (*)(void *, int, unsigned long, char const *))
//{
//    mangled_ppc("?PSConvertDCLToILFunc@XGRAPHICS@@YAKPAPAKKPAU_R400PSIL@1@0PAXP6AX2HKPBD@Z@Z");
//};

//void XGRAPHICS::ProcessFirstPassInfo(unsigned long, struct XGRAPHICS::_R400PSIL *, unsigned long **)
//{
//    mangled_ppc("?ProcessFirstPassInfo@XGRAPHICS@@YAXKPAU_R400PSIL@1@PAPAK@Z");
//};

//void XGRAPHICS::CollectPS1InstInfo(unsigned long, unsigned long **, struct XGRAPHICS::_R400PSIL *)
//{
//    mangled_ppc("?CollectPS1InstInfo@XGRAPHICS@@YAXKPAPAKPAU_R400PSIL@1@@Z");
//};

//unsigned long XGRAPHICS::FirstPassForPS1_XX(unsigned long *, unsigned long, struct XGRAPHICS::_R400PSIL *)
//{
//    mangled_ppc("?FirstPassForPS1_XX@XGRAPHICS@@YAKPAKKPAU_R400PSIL@1@@Z");
//};

//void XGRAPHICS::InsertMovWithClamp(unsigned long, enum XGRAPHICS::ILRegType, unsigned long, unsigned long **)
//{
//    mangled_ppc("?InsertMovWithClamp@XGRAPHICS@@YAXKW4ILRegType@1@KPAPAK@Z");
//};

//void XGRAPHICS::InsertColorClampToExportColor(struct XGRAPHICS::_R400IL_RECORDED_INFO *, unsigned long **)
//{
//    mangled_ppc("?InsertColorClampToExportColor@XGRAPHICS@@YAXPAU_R400IL_RECORDED_INFO@1@PAPAK@Z");
//};

//long XGRAPHICS::GrowILMemory(struct XGRAPHICS::_R400ILSTORE *)
//{
//    mangled_ppc("?GrowILMemory@XGRAPHICS@@YAJPAU_R400ILSTORE@1@@Z");
//};

//long XGRAPHICS::HasNeededILMem(unsigned long **, struct XGRAPHICS::_R400ILSTORE *)
//{
//    mangled_ppc("?HasNeededILMem@XGRAPHICS@@YAJPAPAKPAU_R400ILSTORE@1@@Z");
//};

//unsigned long XGRAPHICS::r400InsertEndMainILCode(unsigned long, unsigned long **, struct XGRAPHICS::_R400ILSTORE *, struct XGRAPHICS::_R400PSIL *)
//{
//    mangled_ppc("?r400InsertEndMainILCode@XGRAPHICS@@YAKKPAPAKPAU_R400ILSTORE@1@PAU_R400PSIL@1@@Z");
//};

//unsigned long XGRAPHICS::r400PS_TO_ILConversion(unsigned long *, unsigned long, struct XGRAPHICS::_R400PSIL *, struct XGRAPHICS::_R400ILSTORE *, enum XGRAPHICS::_E_CENTER_CENTROID, void *, void (*)(void *, int, unsigned long, char const *))
//{
//    mangled_ppc("?r400PS_TO_ILConversion@XGRAPHICS@@YAKPAKKPAU_R400PSIL@1@PAU_R400ILSTORE@1@W4_E_CENTER_CENTROID@1@PAXP6AX4HKPBD@Z@Z");
//};

