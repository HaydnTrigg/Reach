/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3DXShader::D3DX_SEMANTIC *D3DXShader::g_20InputOutput; // "?g_20InputOutput@D3DXShader@@3PAUD3DX_SEMANTIC@1@A"
// struct D3DXShader::D3DX_SEMANTIC *D3DXShader::g_20PSOutput; // "?g_20PSOutput@D3DXShader@@3PAUD3DX_SEMANTIC@1@A"
// unsigned int *D3DXShader::g_Swizzle; // "?g_Swizzle@D3DXShader@@3PAIA"

// public: D3DXShader::CPSProgram::CPSProgram(int, int);
// public: virtual D3DXShader::CPSProgram::~CPSProgram(void);
// public: virtual long D3DXShader::CPSProgram::GenerateCode(struct ID3DXBuffer **);
// protected: virtual long D3DXShader::CPSProgram::InitCaps(void);
// protected: virtual long D3DXShader::CPSProgram::Translate(void);
// protected: virtual long D3DXShader::CPSProgram::PatternMatch(void);
// protected: virtual long D3DXShader::CPSProgram::DestMask(unsigned int *, unsigned int, unsigned long *, int);
// protected: long D3DXShader::CPSProgram::PSEmitGE(void);
// protected: long D3DXShader::CPSProgram::PSEmitLT(void);
// protected: long D3DXShader::CPSProgram::PSEmitMax(void);
// protected: long D3DXShader::CPSProgram::PSEmitMin(void);
// protected: virtual long D3DXShader::CPSProgram::EmitSize(void);
// protected: virtual long D3DXShader::CPSProgram::EmitVersion(void);
// protected: virtual long D3DXShader::CPSProgram::EmitObjectDCL(class D3DXShader::CArgument *);
// protected: virtual long D3DXShader::CPSProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *);
// protected: virtual long D3DXShader::CPSProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &);
// protected: virtual long D3DXShader::CPSProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *);
// protected: int D3DXShader::CPSProgram::ValidSwizzle(unsigned int *, unsigned int *);
// int D3DXShader::IsValidSwizzle(unsigned int *, unsigned int *);
// protected: long D3DXShader::CPSProgram::RemapInput(class D3DXShader::CInstruction *&, unsigned int, unsigned int);
// protected: long D3DXShader::CPSProgram::RemapOutputMov(class D3DXShader::CInstruction *&, unsigned int);
// protected: virtual long D3DXShader::CPSProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *);
// merged_83B9E530;
// protected: virtual int D3DXShader::CPSProgram::IsDPNoSwizzle(class D3DXShader::CInstruction *);
// protected: virtual long D3DXShader::CPSProgram::ValidateOutput(void);
// protected: virtual long D3DXShader::CPSProgram::EmitInstructions(void);
// protected: virtual int D3DXShader::CPSProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int);
// protected: virtual int D3DXShader::CPSProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *);
// protected: long D3DXShader::CPSProgram::Unswizzle(void);
// protected: virtual long D3DXShader::CPSProgram::Constrain(void);

//public: D3DXShader::CPSProgram::CPSProgram(int, int)
//{
//    mangled_ppc("??0CPSProgram@D3DXShader@@QAA@HH@Z");
//};

//public: virtual D3DXShader::CPSProgram::~CPSProgram(void)
//{
//    mangled_ppc("??1CPSProgram@D3DXShader@@UAA@XZ");
//};

//public: virtual long D3DXShader::CPSProgram::GenerateCode(struct ID3DXBuffer **)
//{
//    mangled_ppc("?GenerateCode@CPSProgram@D3DXShader@@UAAJPAPAUID3DXBuffer@@@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::InitCaps(void)
//{
//    mangled_ppc("?InitCaps@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::Translate(void)
//{
//    mangled_ppc("?Translate@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::PatternMatch(void)
//{
//    mangled_ppc("?PatternMatch@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::DestMask(unsigned int *, unsigned int, unsigned long *, int)
//{
//    mangled_ppc("?DestMask@CPSProgram@D3DXShader@@MAAJPAIIPAKH@Z");
//};

//protected: long D3DXShader::CPSProgram::PSEmitGE(void)
//{
//    mangled_ppc("?PSEmitGE@CPSProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSProgram::PSEmitLT(void)
//{
//    mangled_ppc("?PSEmitLT@CPSProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSProgram::PSEmitMax(void)
//{
//    mangled_ppc("?PSEmitMax@CPSProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSProgram::PSEmitMin(void)
//{
//    mangled_ppc("?PSEmitMin@CPSProgram@D3DXShader@@IAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::EmitSize(void)
//{
//    mangled_ppc("?EmitSize@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::EmitVersion(void)
//{
//    mangled_ppc("?EmitVersion@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::EmitObjectDCL(class D3DXShader::CArgument *)
//{
//    mangled_ppc("?EmitObjectDCL@CPSProgram@D3DXShader@@MAAJPAVCArgument@2@@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *)
//{
//    mangled_ppc("?EmitDCL@CPSProgram@D3DXShader@@MAAJPAVCArgument@2@PAK@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?FindInput@CPSProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *)
//{
//    mangled_ppc("?FindOutput@CPSProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1PAH@Z");
//};

//protected: int D3DXShader::CPSProgram::ValidSwizzle(unsigned int *, unsigned int *)
//{
//    mangled_ppc("?ValidSwizzle@CPSProgram@D3DXShader@@IAAHPAI0@Z");
//};

//int D3DXShader::IsValidSwizzle(unsigned int *, unsigned int *)
//{
//    mangled_ppc("?IsValidSwizzle@D3DXShader@@YAHPAI0@Z");
//};

//protected: long D3DXShader::CPSProgram::RemapInput(class D3DXShader::CInstruction *&, unsigned int, unsigned int)
//{
//    mangled_ppc("?RemapInput@CPSProgram@D3DXShader@@IAAJAAPAVCInstruction@2@II@Z");
//};

//protected: long D3DXShader::CPSProgram::RemapOutputMov(class D3DXShader::CInstruction *&, unsigned int)
//{
//    mangled_ppc("?RemapOutputMov@CPSProgram@D3DXShader@@IAAJAAPAVCInstruction@2@I@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *)
//{
//    mangled_ppc("?SrcSwizzle@CPSProgram@D3DXShader@@MAAJPAIIKPAK@Z");
//};

//merged_83B9E530
//{
//    mangled_ppc("merged_83B9E530");
//};

//protected: virtual int D3DXShader::CPSProgram::IsDPNoSwizzle(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?IsDPNoSwizzle@CPSProgram@D3DXShader@@MAAHPAVCInstruction@2@@Z");
//};

//protected: virtual long D3DXShader::CPSProgram::ValidateOutput(void)
//{
//    mangled_ppc("?ValidateOutput@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::EmitInstructions(void)
//{
//    mangled_ppc("?EmitInstructions@CPSProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual int D3DXShader::CPSProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ViolatesWriteLim@CPSProgram@D3DXShader@@MAAHPAVCInstruction@2@I@Z");
//};

//protected: virtual int D3DXShader::CPSProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *)
//{
//    mangled_ppc("?ViolatesPortConstraints@CPSProgram@D3DXShader@@MAAHPAVCInstruction@2@PAI@Z");
//};

//protected: long D3DXShader::CPSProgram::Unswizzle(void)
//{
//    mangled_ppc("?Unswizzle@CPSProgram@D3DXShader@@IAAJXZ");
//};

//protected: virtual long D3DXShader::CPSProgram::Constrain(void)
//{
//    mangled_ppc("?Constrain@CPSProgram@D3DXShader@@MAAJXZ");
//};

