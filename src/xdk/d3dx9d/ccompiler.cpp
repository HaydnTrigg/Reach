/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: int D3DXShader::CInstruction::IsCLIP(void);
// public: int D3DXShader::CInstruction::IsUnary(void);
// public: int D3DXShader::CInstruction::IsBinary(void);
// public: int D3DXShader::CInstruction::IsTexture(void);
// public: unsigned int D3DXShader::CBaseProgram::GetNumArguments(void);
// public: class D3DXShader::CPool * D3DXShader::CBaseProgram::GetPool(unsigned int);
// public: class D3DXShader::CArgument * D3DXShader::CBaseProgram::GetArgument(unsigned int);
// public: class D3DXShader::CInstruction * D3DXShader::CBaseProgram::GetInstruction(unsigned int);
// public: D3DXShader::C30SWProgramCI::C30SWProgramCI(int, int, char const *);
// protected: virtual int D3DXShader::CShaderProgram::IsDPNoSwizzle(class D3DXShader::CInstruction *);
// public: virtual D3DXShader::C30SWProgramCI::~C30SWProgramCI(void);
// public: D3DXShader::C30SWProgramML::C30SWProgramML(int, int, char const *);
// public: virtual D3DXShader::C30SWProgramML::~C30SWProgramML(void);
// public: D3DXShader::CCompiler::CCompiler(int);
// protected: static void D3DXShader::CCompiler::SwapEndian32BitArray(void *, unsigned long);
// long D3DXShader::LookForA0Callback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// public: void * D3DXShader::CInstruction::`scalar deleting destructor'(unsigned int);
// protected: long D3DXShader::CCompiler::EmitTemp(unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::VectorizeBase(enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int, unsigned long, unsigned int *, unsigned int, unsigned int *, class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::VectorizeDefaults(class D3DXShader::CNode *);
// protected: void D3DXShader::CCompiler::EvalRange_Mul(struct D3DXShader::_D3DXRANGE *, struct D3DXShader::_D3DXRANGE *, struct D3DXShader::_D3DXRANGE *, unsigned long);
// protected: long D3DXShader::CCompiler::EvalRangeNoRecurse(unsigned int, struct D3DXShader::_D3DXRANGE *);
// protected: long D3DXShader::CCompiler::EvalValueNoRecurse(unsigned int, double *);
// protected: long D3DXShader::CCompiler::EvalRange(unsigned int, struct D3DXShader::_D3DXRANGE *);
// protected: int D3DXShader::CCompiler::IsFullySemantic(unsigned int *, unsigned int);
// protected: int D3DXShader::CCompiler::IsRowMajor(unsigned int *, enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int);
// protected: int D3DXShader::CCompiler::IsColumnMajor(unsigned int *, enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int);
// protected: class D3DXShader::CNode * D3DXShader::CCompiler::FindFunction(char const *);
// protected: class D3DXShader::CNode * D3DXShader::CCompiler::FindFunction(class D3DXShader::CNode *, char const **);
// public: void * D3DXShader::CArgument::`scalar deleting destructor'(unsigned int);
// protected: long D3DXShader::CCompiler::PragmaDef(void);
// public: static struct D3DXShader::D3DXTOKEN * D3DXShader::CCompiler::GetToken(class D3DXShader::CNode *);
// D3DX_CCompiler_GetToken;
// protected: static int D3DXShader::CCompiler::CompareSemantic(unsigned int, unsigned int, void const *);
// UCodeToNativeDWORD;
// UCodeGetUCodeHeader;
// UCodeGetShaderType;
// UCodeGetMicrocodePassHeader;
// UCodeGetMicrocodeHeader;
// UCodeGetPhysicalOffsetAndSizeOfMicrocodePass;
// public: static void * D3DXShader::CBaseProgram::operator new(unsigned int);
// public: static void D3DXShader::CBaseProgram::operator delete(void *);
// protected: virtual long D3DXShader::C30SWProgram::EmitCMP(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitCND(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitCLIP(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitDSX(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitDSY(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitSINCOS(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitTEX(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitTEXProj(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitTEXBias(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitTEXLOD(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitTEXDD(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitDP2ADD(void);
// protected: virtual long D3DXShader::C30SWProgram::EmitInstScalar(unsigned long, unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned long, int);
// public: virtual long D3DXShader::C30SWProgram::EmitNEGFunction(char const *, char const *, char const *, char const *);
// public: virtual long D3DXShader::C30SWProgram::EmitRCPFunction(char const *, char const *, char const *, char const *);
// public: virtual long D3DXShader::C30SWProgram::EmitRSQFunction(char const *, char const *, char const *, char const *);
// public: virtual long D3DXShader::C30SWProgram::EmitABSFunction(char const *, char const *, char const *, char const *);
// public: virtual long D3DXShader::C30SWProgram::EmitNRMFunction(char const *, char const *, char const *, char const *);
// merged_83B12748;
// merged_83B127B0;
// public: D3DXShader::CCompiler::~CCompiler(void);
// int D3DXShader::CheckForNewBackEndExtensions(struct ID3DXBuffer *);
// public: void D3DXShader::CCompiler::ErrorMessageCallback(int, class D3DXShader::CNode *, unsigned long, char const *);
// protected: unsigned int * D3DXShader::CCompiler::Scratch(unsigned int);
// protected: unsigned int * D3DXShader::CCompiler::StackAlloc(unsigned int);
// protected: void D3DXShader::CCompiler::StackFree(unsigned int *);
// protected: long D3DXShader::CCompiler::EvalValue(unsigned int, double *);
// protected: long D3DXShader::CCompiler::Reset(unsigned int, unsigned int, unsigned int *);
// void D3DXShader::StaticCompilerErrorMessageCallback(void *, int, unsigned long, char const *);
// void D3DXShader::StaticCompilerErrorMessageCallbackWithNode(void *, int, class D3DXShader::CNode *, unsigned long, char const *);
// protected: long D3DXShader::CCompiler::Error(class D3DXShader::CNode *, unsigned int, char const *, ...);
// protected: long D3DXShader::CCompiler::Warning(class D3DXShader::CNode *, unsigned int, char const *, ...);
// protected: long D3DXShader::CCompiler::EmitInst(class D3DXShader::CNode *, unsigned long, unsigned int *, unsigned int *, unsigned int *, unsigned long);
// protected: unsigned int D3DXShader::CCompiler::GetTypeFlags(class D3DXShader::CNode *, unsigned long *);
// protected: long D3DXShader::CCompiler::VectorizeType(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, unsigned int *, unsigned int *);
// protected: int D3DXShader::CCompiler::IsNumeric(class D3DXShader::CNode *);
// protected: long D3DXShader::CCompiler::EmitSinCos(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitASinACos(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitATan2(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitLerp(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitPow(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitClip(class D3DXShader::CNode *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitPositive(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::ApplyType(class D3DXShader::CNode *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::VectorizeVar(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, unsigned int *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::Vectorize(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CCompiler::Unalias(class D3DXShader::CNode *, unsigned int *, unsigned int);
// protected: int D3DXShader::CCompiler::IsLimited(unsigned int, unsigned int, unsigned int *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitIf(class D3DXShader::CNode *, unsigned int, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitForLoop(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitForUnrolled(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitIntrinsic(class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitArray(class D3DXShader::CNode *, unsigned int *, unsigned int, unsigned int *, unsigned int, class D3DXShader::CNode *, unsigned int *, int);
// protected: long D3DXShader::CCompiler::EmitFor(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// protected: long D3DXShader::CCompiler::EmitStatement(class D3DXShader::CNode *, unsigned int *);
// protected: long D3DXShader::CCompiler::EmitFunction(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *, int, int);
// protected: long D3DXShader::CCompiler::EmitProgram(void);
// protected: long D3DXShader::CCompiler::EmitExpression(class D3DXShader::CNode *, unsigned int *, int);
// protected: long D3DXShader::CCompiler::EmitArgs(class D3DXShader::CNode *, unsigned int *, unsigned int);
// protected: long D3DXShader::CCompiler::EmitEval(class D3DXShader::CNode *);
// protected: long D3DXShader::CCompiler::CompileInternal(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: long D3DXShader::CCompiler::Compile(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, char const *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: long D3DXShader::CCompiler::CompileFunction(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);
// public: long D3DXShader::CCompiler::CompileExpression(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, class D3DXShader::CNode *, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *);

//public: int D3DXShader::CInstruction::IsCLIP(void)
//{
//    mangled_ppc("?IsCLIP@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsUnary(void)
//{
//    mangled_ppc("?IsUnary@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsBinary(void)
//{
//    mangled_ppc("?IsBinary@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsTexture(void)
//{
//    mangled_ppc("?IsTexture@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: unsigned int D3DXShader::CBaseProgram::GetNumArguments(void)
//{
//    mangled_ppc("?GetNumArguments@CBaseProgram@D3DXShader@@QAAIXZ");
//};

//public: class D3DXShader::CPool * D3DXShader::CBaseProgram::GetPool(unsigned int)
//{
//    mangled_ppc("?GetPool@CBaseProgram@D3DXShader@@QAAPAVCPool@2@I@Z");
//};

//public: class D3DXShader::CArgument * D3DXShader::CBaseProgram::GetArgument(unsigned int)
//{
//    mangled_ppc("?GetArgument@CBaseProgram@D3DXShader@@QAAPAVCArgument@2@I@Z");
//};

//public: class D3DXShader::CInstruction * D3DXShader::CBaseProgram::GetInstruction(unsigned int)
//{
//    mangled_ppc("?GetInstruction@CBaseProgram@D3DXShader@@QAAPAVCInstruction@2@I@Z");
//};

//public: D3DXShader::C30SWProgramCI::C30SWProgramCI(int, int, char const *)
//{
//    mangled_ppc("??0C30SWProgramCI@D3DXShader@@QAA@HHPBD@Z");
//};

//protected: virtual int D3DXShader::CShaderProgram::IsDPNoSwizzle(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?IsDPNoSwizzle@CShaderProgram@D3DXShader@@MAAHPAVCInstruction@2@@Z");
//};

//public: virtual D3DXShader::C30SWProgramCI::~C30SWProgramCI(void)
//{
//    mangled_ppc("??1C30SWProgramCI@D3DXShader@@UAA@XZ");
//};

//public: D3DXShader::C30SWProgramML::C30SWProgramML(int, int, char const *)
//{
//    mangled_ppc("??0C30SWProgramML@D3DXShader@@QAA@HHPBD@Z");
//};

//public: virtual D3DXShader::C30SWProgramML::~C30SWProgramML(void)
//{
//    mangled_ppc("??1C30SWProgramML@D3DXShader@@UAA@XZ");
//};

//public: D3DXShader::CCompiler::CCompiler(int)
//{
//    mangled_ppc("??0CCompiler@D3DXShader@@QAA@H@Z");
//};

//protected: static void D3DXShader::CCompiler::SwapEndian32BitArray(void *, unsigned long)
//{
//    mangled_ppc("?SwapEndian32BitArray@CCompiler@D3DXShader@@KAXPAXK@Z");
//};

//long D3DXShader::LookForA0Callback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?LookForA0Callback@D3DXShader@@YAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//public: void * D3DXShader::CInstruction::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCInstruction@D3DXShader@@QAAPAXI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitTemp(unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitTemp@CCompiler@D3DXShader@@IAAJPAII@Z");
//};

//protected: long D3DXShader::CCompiler::VectorizeBase(enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int, unsigned long, unsigned int *, unsigned int, unsigned int *, class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?VectorizeBase@CCompiler@D3DXShader@@IAAJW4_D3DTYPE_TEMPLATE@2@IIKPAII1PAVCNode@2@1@Z");
//};

//protected: long D3DXShader::CCompiler::VectorizeDefaults(class D3DXShader::CNode *)
//{
//    mangled_ppc("?VectorizeDefaults@CCompiler@D3DXShader@@IAAJPAVCNode@2@@Z");
//};

//protected: void D3DXShader::CCompiler::EvalRange_Mul(struct D3DXShader::_D3DXRANGE *, struct D3DXShader::_D3DXRANGE *, struct D3DXShader::_D3DXRANGE *, unsigned long)
//{
//    mangled_ppc("?EvalRange_Mul@CCompiler@D3DXShader@@IAAXPAU_D3DXRANGE@2@00K@Z");
//};

//protected: long D3DXShader::CCompiler::EvalRangeNoRecurse(unsigned int, struct D3DXShader::_D3DXRANGE *)
//{
//    mangled_ppc("?EvalRangeNoRecurse@CCompiler@D3DXShader@@IAAJIPAU_D3DXRANGE@2@@Z");
//};

//protected: long D3DXShader::CCompiler::EvalValueNoRecurse(unsigned int, double *)
//{
//    mangled_ppc("?EvalValueNoRecurse@CCompiler@D3DXShader@@IAAJIPAN@Z");
//};

//protected: long D3DXShader::CCompiler::EvalRange(unsigned int, struct D3DXShader::_D3DXRANGE *)
//{
//    mangled_ppc("?EvalRange@CCompiler@D3DXShader@@IAAJIPAU_D3DXRANGE@2@@Z");
//};

//protected: int D3DXShader::CCompiler::IsFullySemantic(unsigned int *, unsigned int)
//{
//    mangled_ppc("?IsFullySemantic@CCompiler@D3DXShader@@IAAHPAII@Z");
//};

//protected: int D3DXShader::CCompiler::IsRowMajor(unsigned int *, enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int)
//{
//    mangled_ppc("?IsRowMajor@CCompiler@D3DXShader@@IAAHPAIW4_D3DTYPE_TEMPLATE@2@II@Z");
//};

//protected: int D3DXShader::CCompiler::IsColumnMajor(unsigned int *, enum D3DXShader::_D3DTYPE_TEMPLATE, unsigned int, unsigned int)
//{
//    mangled_ppc("?IsColumnMajor@CCompiler@D3DXShader@@IAAHPAIW4_D3DTYPE_TEMPLATE@2@II@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CCompiler::FindFunction(char const *)
//{
//    mangled_ppc("?FindFunction@CCompiler@D3DXShader@@IAAPAVCNode@2@PBD@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CCompiler::FindFunction(class D3DXShader::CNode *, char const **)
//{
//    mangled_ppc("?FindFunction@CCompiler@D3DXShader@@IAAPAVCNode@2@PAV32@PAPBD@Z");
//};

//public: void * D3DXShader::CArgument::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCArgument@D3DXShader@@QAAPAXI@Z");
//};

//protected: long D3DXShader::CCompiler::PragmaDef(void)
//{
//    mangled_ppc("?PragmaDef@CCompiler@D3DXShader@@IAAJXZ");
//};

//public: static struct D3DXShader::D3DXTOKEN * D3DXShader::CCompiler::GetToken(class D3DXShader::CNode *)
//{
//    mangled_ppc("?GetToken@CCompiler@D3DXShader@@SAPAUD3DXTOKEN@2@PAVCNode@2@@Z");
//};

//D3DX_CCompiler_GetToken
//{
//    mangled_ppc("D3DX_CCompiler_GetToken");
//};

//protected: static int D3DXShader::CCompiler::CompareSemantic(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareSemantic@CCompiler@D3DXShader@@KAHIIPBX@Z");
//};

//UCodeToNativeDWORD
//{
//    mangled_ppc("UCodeToNativeDWORD");
//};

//UCodeGetUCodeHeader
//{
//    mangled_ppc("UCodeGetUCodeHeader");
//};

//UCodeGetShaderType
//{
//    mangled_ppc("UCodeGetShaderType");
//};

//UCodeGetMicrocodePassHeader
//{
//    mangled_ppc("UCodeGetMicrocodePassHeader");
//};

//UCodeGetMicrocodeHeader
//{
//    mangled_ppc("UCodeGetMicrocodeHeader");
//};

//UCodeGetPhysicalOffsetAndSizeOfMicrocodePass
//{
//    mangled_ppc("UCodeGetPhysicalOffsetAndSizeOfMicrocodePass");
//};

//public: static void * D3DXShader::CBaseProgram::operator new(unsigned int)
//{
//    mangled_ppc("??2CBaseProgram@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CBaseProgram::operator delete(void *)
//{
//    mangled_ppc("??3CBaseProgram@D3DXShader@@SAXPAX@Z");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitCMP(void)
//{
//    mangled_ppc("?EmitCMP@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitCND(void)
//{
//    mangled_ppc("?EmitCND@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitCLIP(void)
//{
//    mangled_ppc("?EmitCLIP@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitDSX(void)
//{
//    mangled_ppc("?EmitDSX@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitDSY(void)
//{
//    mangled_ppc("?EmitDSY@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitSINCOS(void)
//{
//    mangled_ppc("?EmitSINCOS@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitTEX(void)
//{
//    mangled_ppc("?EmitTEX@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitTEXProj(void)
//{
//    mangled_ppc("?EmitTEXProj@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitTEXBias(void)
//{
//    mangled_ppc("?EmitTEXBias@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitTEXLOD(void)
//{
//    mangled_ppc("?EmitTEXLOD@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitTEXDD(void)
//{
//    mangled_ppc("?EmitTEXDD@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitDP2ADD(void)
//{
//    mangled_ppc("?EmitDP2ADD@C30SWProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::C30SWProgram::EmitInstScalar(unsigned long, unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned long, int)
//{
//    mangled_ppc("?EmitInstScalar@C30SWProgram@D3DXShader@@MAAJKPAI0IIKH@Z");
//};

//public: virtual long D3DXShader::C30SWProgram::EmitNEGFunction(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?EmitNEGFunction@C30SWProgram@D3DXShader@@UAAJPBD000@Z");
//};

//public: virtual long D3DXShader::C30SWProgram::EmitRCPFunction(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?EmitRCPFunction@C30SWProgram@D3DXShader@@UAAJPBD000@Z");
//};

//public: virtual long D3DXShader::C30SWProgram::EmitRSQFunction(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?EmitRSQFunction@C30SWProgram@D3DXShader@@UAAJPBD000@Z");
//};

//public: virtual long D3DXShader::C30SWProgram::EmitABSFunction(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?EmitABSFunction@C30SWProgram@D3DXShader@@UAAJPBD000@Z");
//};

//public: virtual long D3DXShader::C30SWProgram::EmitNRMFunction(char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?EmitNRMFunction@C30SWProgram@D3DXShader@@UAAJPBD000@Z");
//};

//merged_83B12748
//{
//    mangled_ppc("merged_83B12748");
//};

//merged_83B127B0
//{
//    mangled_ppc("merged_83B127B0");
//};

//public: D3DXShader::CCompiler::~CCompiler(void)
//{
//    mangled_ppc("??1CCompiler@D3DXShader@@QAA@XZ");
//};

//int D3DXShader::CheckForNewBackEndExtensions(struct ID3DXBuffer *)
//{
//    mangled_ppc("?CheckForNewBackEndExtensions@D3DXShader@@YAHPAUID3DXBuffer@@@Z");
//};

//public: void D3DXShader::CCompiler::ErrorMessageCallback(int, class D3DXShader::CNode *, unsigned long, char const *)
//{
//    mangled_ppc("?ErrorMessageCallback@CCompiler@D3DXShader@@QAAXHPAVCNode@2@KPBD@Z");
//};

//protected: unsigned int * D3DXShader::CCompiler::Scratch(unsigned int)
//{
//    mangled_ppc("?Scratch@CCompiler@D3DXShader@@IAAPAII@Z");
//};

//protected: unsigned int * D3DXShader::CCompiler::StackAlloc(unsigned int)
//{
//    mangled_ppc("?StackAlloc@CCompiler@D3DXShader@@IAAPAII@Z");
//};

//protected: void D3DXShader::CCompiler::StackFree(unsigned int *)
//{
//    mangled_ppc("?StackFree@CCompiler@D3DXShader@@IAAXPAI@Z");
//};

//protected: long D3DXShader::CCompiler::EvalValue(unsigned int, double *)
//{
//    mangled_ppc("?EvalValue@CCompiler@D3DXShader@@IAAJIPAN@Z");
//};

//protected: long D3DXShader::CCompiler::Reset(unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?Reset@CCompiler@D3DXShader@@IAAJIIPAI@Z");
//};

//void D3DXShader::StaticCompilerErrorMessageCallback(void *, int, unsigned long, char const *)
//{
//    mangled_ppc("?StaticCompilerErrorMessageCallback@D3DXShader@@YAXPAXHKPBD@Z");
//};

//void D3DXShader::StaticCompilerErrorMessageCallbackWithNode(void *, int, class D3DXShader::CNode *, unsigned long, char const *)
//{
//    mangled_ppc("?StaticCompilerErrorMessageCallbackWithNode@D3DXShader@@YAXPAXHPAVCNode@1@KPBD@Z");
//};

//protected: long D3DXShader::CCompiler::Error(class D3DXShader::CNode *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Error@CCompiler@D3DXShader@@IAAJPAVCNode@2@IPBDZZ");
//};

//protected: long D3DXShader::CCompiler::Warning(class D3DXShader::CNode *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Warning@CCompiler@D3DXShader@@IAAJPAVCNode@2@IPBDZZ");
//};

//protected: long D3DXShader::CCompiler::EmitInst(class D3DXShader::CNode *, unsigned long, unsigned int *, unsigned int *, unsigned int *, unsigned long)
//{
//    mangled_ppc("?EmitInst@CCompiler@D3DXShader@@IAAJPAVCNode@2@KPAI11K@Z");
//};

//protected: unsigned int D3DXShader::CCompiler::GetTypeFlags(class D3DXShader::CNode *, unsigned long *)
//{
//    mangled_ppc("?GetTypeFlags@CCompiler@D3DXShader@@IAAIPAVCNode@2@PAK@Z");
//};

//protected: long D3DXShader::CCompiler::VectorizeType(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?VectorizeType@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAIIHH011@Z");
//};

//protected: int D3DXShader::CCompiler::IsNumeric(class D3DXShader::CNode *)
//{
//    mangled_ppc("?IsNumeric@CCompiler@D3DXShader@@IAAHPAVCNode@2@@Z");
//};

//protected: long D3DXShader::CCompiler::EmitSinCos(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitSinCos@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI11I@Z");
//};

//protected: long D3DXShader::CCompiler::EmitASinACos(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitASinACos@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI11I@Z");
//};

//protected: long D3DXShader::CCompiler::EmitATan2(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitATan2@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI11I@Z");
//};

//protected: long D3DXShader::CCompiler::EmitLerp(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitLerp@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI111I@Z");
//};

//protected: long D3DXShader::CCompiler::EmitPow(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitPow@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI11I@Z");
//};

//protected: long D3DXShader::CCompiler::EmitClip(class D3DXShader::CNode *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitClip@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAII@Z");
//};

//protected: long D3DXShader::CCompiler::EmitPositive(class D3DXShader::CNode *, unsigned int *, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitPositive@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI11I@Z");
//};

//protected: long D3DXShader::CCompiler::ApplyType(class D3DXShader::CNode *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?ApplyType@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAII@Z");
//};

//protected: long D3DXShader::CCompiler::VectorizeVar(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, unsigned int *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?VectorizeVar@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAIIHH01001@Z");
//};

//protected: long D3DXShader::CCompiler::Vectorize(class D3DXShader::CNode *, unsigned int *, unsigned int, int, int, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?Vectorize@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAIIHH00@Z");
//};

//protected: long D3DXShader::CCompiler::Unalias(class D3DXShader::CNode *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?Unalias@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAII@Z");
//};

//protected: int D3DXShader::CCompiler::IsLimited(unsigned int, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?IsLimited@CCompiler@D3DXShader@@IAAHIIPAI0@Z");
//};

//protected: long D3DXShader::CCompiler::EmitIf(class D3DXShader::CNode *, unsigned int, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EmitIf@CCompiler@D3DXShader@@IAAJPAVCNode@2@I00PAI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitForLoop(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EmitForLoop@CCompiler@D3DXShader@@IAAJPAVCNode@2@000PAI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitForUnrolled(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EmitForUnrolled@CCompiler@D3DXShader@@IAAJPAVCNode@2@000PAI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitIntrinsic(class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EmitIntrinsic@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitArray(class D3DXShader::CNode *, unsigned int *, unsigned int, unsigned int *, unsigned int, class D3DXShader::CNode *, unsigned int *, int)
//{
//    mangled_ppc("?EmitArray@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAII1I01H@Z");
//};

//protected: long D3DXShader::CCompiler::EmitFor(class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?EmitFor@CCompiler@D3DXShader@@IAAJPAVCNode@2@000@Z");
//};

//protected: long D3DXShader::CCompiler::EmitStatement(class D3DXShader::CNode *, unsigned int *)
//{
//    mangled_ppc("?EmitStatement@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAI@Z");
//};

//protected: long D3DXShader::CCompiler::EmitFunction(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, unsigned int *, int, int)
//{
//    mangled_ppc("?EmitFunction@CCompiler@D3DXShader@@IAAJPBDPAVCNode@2@1PAIHH@Z");
//};

//protected: long D3DXShader::CCompiler::EmitProgram(void)
//{
//    mangled_ppc("?EmitProgram@CCompiler@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CCompiler::EmitExpression(class D3DXShader::CNode *, unsigned int *, int)
//{
//    mangled_ppc("?EmitExpression@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAIH@Z");
//};

//protected: long D3DXShader::CCompiler::EmitArgs(class D3DXShader::CNode *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?EmitArgs@CCompiler@D3DXShader@@IAAJPAVCNode@2@PAII@Z");
//};

//protected: long D3DXShader::CCompiler::EmitEval(class D3DXShader::CNode *)
//{
//    mangled_ppc("?EmitEval@CCompiler@D3DXShader@@IAAJPAVCNode@2@@Z");
//};

//protected: long D3DXShader::CCompiler::CompileInternal(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, char const *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileInternal@CCompiler@D3DXShader@@IAAJPAVCPreProcessor@2@PAVCNode@2@PBD111H2KPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: long D3DXShader::CCompiler::Compile(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, char const *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?Compile@CCompiler@D3DXShader@@QAAJPAVCPreProcessor@2@PAVCNode@2@PBDH2KPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: long D3DXShader::CCompiler::CompileFunction(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, class D3DXShader::CNode *, class D3DXShader::CNode *, int, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileFunction@CCompiler@D3DXShader@@QAAJPAVCPreProcessor@2@PAVCNode@2@11HPBDKPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

//public: long D3DXShader::CCompiler::CompileExpression(class D3DXShader::CPreProcessor *, class D3DXShader::CNode *, class D3DXShader::CNode *, char const *, unsigned long, struct ID3DXBuffer **, struct ID3DXConstantTable **, struct _D3DXSHADER_COMPILE_PARAMETERSA *)
//{
//    mangled_ppc("?CompileExpression@CCompiler@D3DXShader@@QAAJPAVCPreProcessor@2@PAVCNode@2@1PBDKPAPAUID3DXBuffer@@PAPAUID3DXConstantTable@@PAU_D3DXSHADER_COMPILE_PARAMETERSA@@@Z");
//};

