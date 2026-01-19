/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: long XShaderPDBBuilder::AddSourceFile(char const *, char const *, unsigned long);
// public: D3DXShader::CPPDefine::CPPDefine(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *);
// public: D3DXShader::CPPConditional::CPPConditional(int, int);
// public: D3DXShader::CPPConditional::~CPPConditional(void);
// public: D3DXShader::CPPInclude::CPPInclude(void);
// public: long D3DXShader::CPPInclude::InitializePathFromFileName(class D3DXCore::CAlloc *, char const *);
// public: long D3DXShader::CPPInclude::InitializeFromFile(void const *, int, class D3DXCore::CAlloc *, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CTErrors *, struct ID3DXInclude *, enum _D3DXINCLUDE_TYPE, void const *);
// public: long D3DXShader::CPPInclude::InitializeFromMemory(char const *, void const *, unsigned int, class D3DXCore::CAlloc *, class D3DXShader::CTErrors *);
// public: D3DXShader::CPPBlock::CPPBlock(unsigned int);
// public: D3DXShader::CPPBlock::~CPPBlock(void);
// public: D3DXShader::CPPPragmaDef::CPPPragmaDef(void);
// public: D3DXShader::CPPPragmaDef::~CPPPragmaDef(void);
// public: D3DXShader::CPPPragmaRule::CPPPragmaRule(unsigned int, class D3DXShader::CPPPragmaRule *);
// public: D3DXShader::CPPPragmaRule::~CPPPragmaRule(void);
// public: void D3DXShader::CPreProcessor::RtlLeaveCriticalSection(void);
// public: long D3DXShader::CPreProcessor::GetFileLine(char const **, unsigned int *);
// public: long D3DXShader::CPreProcessor::GetBufferPointer(char const **, unsigned int *);
// protected: long D3DXShader::CPreProcessor::DoLine(unsigned int, char const *);
// protected: long D3DXShader::CPreProcessor::DoError(void);
// protected: long D3DXShader::CPreProcessor::DoElif(int);
// protected: long D3DXShader::CPreProcessor::DoElse(void);
// protected: long D3DXShader::CPreProcessor::DoPragmaPackMatrix(void);
// protected: long D3DXShader::CPreProcessor::DoPragmaWarning(void);
// protected: unsigned int D3DXShader::CPreProcessor::Hash(char const *);
// public: void D3DXShader::CPreProcessor::SetTreatDigitsAsLetters(int);
// protected: int D3DXShader::CPreProcessor::IsDefineRecursive(char const *);
// protected: int D3DXShader::CPreProcessor::FindDefine(char const *, class D3DXShader::CNode **, class D3DXShader::CNode **);
// protected: unsigned int D3DXShader::CPreProcessor::Escape(char const *, unsigned int, char *, unsigned int);
// protected: class D3DXShader::CNode * D3DXShader::CPreProcessor::NonNull(class D3DXShader::CNode *);
// public: static void D3DXShader::CNode::operator delete(void *);
// public: static void * D3DXShader::CPPDefine::operator new(unsigned int);
// public: static void D3DXShader::CPPDefine::operator delete(void *);
// public: static void * D3DXShader::CPPConditional::operator new(unsigned int);
// public: static void D3DXShader::CPPConditional::operator delete(void *);
// public: static void * D3DXShader::CPPInclude::operator new(unsigned int);
// public: static void D3DXShader::CPPInclude::operator delete(void *);
// public: static void * D3DXShader::CPPBlock::operator new(unsigned int);
// public: static void D3DXShader::CPPBlock::operator delete(void *);
// public: static void * D3DXShader::CPPPragmaDef::operator new(unsigned int);
// public: static void D3DXShader::CPPPragmaDef::operator delete(void *);
// public: static void * D3DXShader::CPPPragmaRule::operator new(unsigned int);
// public: static void D3DXShader::CPPPragmaRule::operator delete(void *);
// public: D3DXShader::CPPDefine::~CPPDefine(void);
// public: void * D3DXShader::CPPDefine::`scalar deleting destructor'(unsigned int);
// public: void * D3DXShader::CPPConditional::`scalar deleting destructor'(unsigned int);
// public: D3DXShader::CPPInclude::~CPPInclude(void);
// public: void * D3DXShader::CPPInclude::`scalar deleting destructor'(unsigned int);
// public: void * D3DXShader::CPPBlock::`scalar deleting destructor'(unsigned int);
// public: void * D3DXShader::CPPPragmaDef::`scalar deleting destructor'(unsigned int);
// public: void * D3DXShader::CPPPragmaRule::`scalar deleting destructor'(unsigned int);
// public: D3DXShader::CPreProcessor::~CPreProcessor(void);
// public: void D3DXShader::CPreProcessor::RtlEnterCriticalSection(void);
// public: long D3DXShader::CPreProcessor::Begin(unsigned int);
// protected: int D3DXShader::CPreProcessor::Token(void);
// protected: long D3DXShader::CPreProcessor::DoUndef(char const *);
// protected: long D3DXShader::CPreProcessor::DoIf(int);
// protected: long D3DXShader::CPreProcessor::DoEndif(void);
// protected: long D3DXShader::CPreProcessor::DoPragmaRuleDisable(void);
// protected: long D3DXShader::CPreProcessor::DoPragmaDef(void);
// protected: int D3DXShader::CPreProcessor::AreDefinesIdentical(class D3DXShader::CPPDefine *, class D3DXShader::CPPDefine *);
// protected: long D3DXShader::CPreProcessor::AddDefine(class D3DXShader::CPPDefine *);
// public: long D3DXShader::CPreProcessor::AddDefine(char const *);
// public: long D3DXShader::CPreProcessor::AddDefine(char const *, unsigned int);
// protected: unsigned int D3DXShader::CPreProcessor::UintDefine(char const *);
// long StringCchVPrintfA(char *, unsigned int, char const *, char *);
// public: static int D3DXShader::CPreProcessor::Static_Token(void *);
// public: D3DXShader::CPreProcessor::CPreProcessor(void);
// protected: void D3DXShader::CPreProcessor::VError(char const *, char *);
// protected: long D3DXShader::CPreProcessor::DoDefine(char const *, int);
// protected: long D3DXShader::CPreProcessor::DoPragma(void);
// public: static void D3DXShader::CPreProcessor::Static_Error(void *, char const *, ...);
// protected: long D3DXShader::CPreProcessor::InitializeDefines(struct _D3DXMACRO const *);
// protected: void D3DXShader::CPreProcessor::Error(char const *, ...);
// protected: long D3DXShader::CPreProcessor::DoInclude(void);
// public: long D3DXShader::CPreProcessor::InitializeFromFile(void const *, int, struct _D3DXMACRO const *, struct ID3DXInclude *);
// public: long D3DXShader::CPreProcessor::InitializeFromMemory(char const *, void const *, unsigned int, struct _D3DXMACRO const *, struct ID3DXInclude *);
// protected: void D3DXShader::CPreProcessor::Production(unsigned int, unsigned int);
// public: static void D3DXShader::CPreProcessor::Static_Production(void *, unsigned int, unsigned int);
// public: int D3DXShader::CPreProcessorYaccStruct::d3d10tok_parse(void);
// public: long D3DXShader::CPreProcessor::GetToken(struct D3DXShader::D3DXTOKEN *);
// public: long D3DXShader::CPreProcessor::End(void);
// protected: enum D3DXShader::CPreProcessor::CallDefineDisposition D3DXShader::CPreProcessor::CallDefine(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *);

//public: long XShaderPDBBuilder::AddSourceFile(char const *, char const *, unsigned long)
//{
//    mangled_ppc("?AddSourceFile@XShaderPDBBuilder@@QAAJPBD0K@Z");
//};

//public: D3DXShader::CPPDefine::CPPDefine(char const *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("??0CPPDefine@D3DXShader@@QAA@PBDPAVCNode@1@1@Z");
//};

//public: D3DXShader::CPPConditional::CPPConditional(int, int)
//{
//    mangled_ppc("??0CPPConditional@D3DXShader@@QAA@HH@Z");
//};

//public: D3DXShader::CPPConditional::~CPPConditional(void)
//{
//    mangled_ppc("??1CPPConditional@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CPPInclude::CPPInclude(void)
//{
//    mangled_ppc("??0CPPInclude@D3DXShader@@QAA@XZ");
//};

//public: long D3DXShader::CPPInclude::InitializePathFromFileName(class D3DXCore::CAlloc *, char const *)
//{
//    mangled_ppc("?InitializePathFromFileName@CPPInclude@D3DXShader@@QAAJPAVCAlloc@D3DXCore@@PBD@Z");
//};

//public: long D3DXShader::CPPInclude::InitializeFromFile(void const *, int, class D3DXCore::CAlloc *, struct D3DXShader::D3DXTOKEN *, class D3DXShader::CTErrors *, struct ID3DXInclude *, enum _D3DXINCLUDE_TYPE, void const *)
//{
//    mangled_ppc("?InitializeFromFile@CPPInclude@D3DXShader@@QAAJPBXHPAVCAlloc@D3DXCore@@PAUD3DXTOKEN@2@PAVCTErrors@2@PAUID3DXInclude@@W4_D3DXINCLUDE_TYPE@@0@Z");
//};

//public: long D3DXShader::CPPInclude::InitializeFromMemory(char const *, void const *, unsigned int, class D3DXCore::CAlloc *, class D3DXShader::CTErrors *)
//{
//    mangled_ppc("?InitializeFromMemory@CPPInclude@D3DXShader@@QAAJPBDPBXIPAVCAlloc@D3DXCore@@PAVCTErrors@2@@Z");
//};

//public: D3DXShader::CPPBlock::CPPBlock(unsigned int)
//{
//    mangled_ppc("??0CPPBlock@D3DXShader@@QAA@I@Z");
//};

//public: D3DXShader::CPPBlock::~CPPBlock(void)
//{
//    mangled_ppc("??1CPPBlock@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CPPPragmaDef::CPPPragmaDef(void)
//{
//    mangled_ppc("??0CPPPragmaDef@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CPPPragmaDef::~CPPPragmaDef(void)
//{
//    mangled_ppc("??1CPPPragmaDef@D3DXShader@@QAA@XZ");
//};

//public: D3DXShader::CPPPragmaRule::CPPPragmaRule(unsigned int, class D3DXShader::CPPPragmaRule *)
//{
//    mangled_ppc("??0CPPPragmaRule@D3DXShader@@QAA@IPAV01@@Z");
//};

//public: D3DXShader::CPPPragmaRule::~CPPPragmaRule(void)
//{
//    mangled_ppc("??1CPPPragmaRule@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::CPreProcessor::RtlLeaveCriticalSection(void)
//{
//    mangled_ppc("?RtlLeaveCriticalSection@CPreProcessor@D3DXShader@@QAAXXZ");
//};

//public: long D3DXShader::CPreProcessor::GetFileLine(char const **, unsigned int *)
//{
//    mangled_ppc("?GetFileLine@CPreProcessor@D3DXShader@@QAAJPAPBDPAI@Z");
//};

//public: long D3DXShader::CPreProcessor::GetBufferPointer(char const **, unsigned int *)
//{
//    mangled_ppc("?GetBufferPointer@CPreProcessor@D3DXShader@@QAAJPAPBDPAI@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoLine(unsigned int, char const *)
//{
//    mangled_ppc("?DoLine@CPreProcessor@D3DXShader@@IAAJIPBD@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoError(void)
//{
//    mangled_ppc("?DoError@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoElif(int)
//{
//    mangled_ppc("?DoElif@CPreProcessor@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoElse(void)
//{
//    mangled_ppc("?DoElse@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoPragmaPackMatrix(void)
//{
//    mangled_ppc("?DoPragmaPackMatrix@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoPragmaWarning(void)
//{
//    mangled_ppc("?DoPragmaWarning@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: unsigned int D3DXShader::CPreProcessor::Hash(char const *)
//{
//    mangled_ppc("?Hash@CPreProcessor@D3DXShader@@IAAIPBD@Z");
//};

//public: void D3DXShader::CPreProcessor::SetTreatDigitsAsLetters(int)
//{
//    mangled_ppc("?SetTreatDigitsAsLetters@CPreProcessor@D3DXShader@@QAAXH@Z");
//};

//protected: int D3DXShader::CPreProcessor::IsDefineRecursive(char const *)
//{
//    mangled_ppc("?IsDefineRecursive@CPreProcessor@D3DXShader@@IAAHPBD@Z");
//};

//protected: int D3DXShader::CPreProcessor::FindDefine(char const *, class D3DXShader::CNode **, class D3DXShader::CNode **)
//{
//    mangled_ppc("?FindDefine@CPreProcessor@D3DXShader@@IAAHPBDPAPAVCNode@2@1@Z");
//};

//protected: unsigned int D3DXShader::CPreProcessor::Escape(char const *, unsigned int, char *, unsigned int)
//{
//    mangled_ppc("?Escape@CPreProcessor@D3DXShader@@IAAIPBDIPADI@Z");
//};

//protected: class D3DXShader::CNode * D3DXShader::CPreProcessor::NonNull(class D3DXShader::CNode *)
//{
//    mangled_ppc("?NonNull@CPreProcessor@D3DXShader@@IAAPAVCNode@2@PAV32@@Z");
//};

//public: static void D3DXShader::CNode::operator delete(void *)
//{
//    mangled_ppc("??3CNode@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPDefine::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPDefine@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPDefine::operator delete(void *)
//{
//    mangled_ppc("??3CPPDefine@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPConditional::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPConditional@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPConditional::operator delete(void *)
//{
//    mangled_ppc("??3CPPConditional@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPInclude::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPInclude@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPInclude::operator delete(void *)
//{
//    mangled_ppc("??3CPPInclude@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPBlock::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPBlock@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPBlock::operator delete(void *)
//{
//    mangled_ppc("??3CPPBlock@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPPragmaDef::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPPragmaDef@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPPragmaDef::operator delete(void *)
//{
//    mangled_ppc("??3CPPPragmaDef@D3DXShader@@SAXPAX@Z");
//};

//public: static void * D3DXShader::CPPPragmaRule::operator new(unsigned int)
//{
//    mangled_ppc("??2CPPPragmaRule@D3DXShader@@SAPAXI@Z");
//};

//public: static void D3DXShader::CPPPragmaRule::operator delete(void *)
//{
//    mangled_ppc("??3CPPPragmaRule@D3DXShader@@SAXPAX@Z");
//};

//public: D3DXShader::CPPDefine::~CPPDefine(void)
//{
//    mangled_ppc("??1CPPDefine@D3DXShader@@QAA@XZ");
//};

//public: void * D3DXShader::CPPDefine::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPDefine@D3DXShader@@QAAPAXI@Z");
//};

//public: void * D3DXShader::CPPConditional::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPConditional@D3DXShader@@QAAPAXI@Z");
//};

//public: D3DXShader::CPPInclude::~CPPInclude(void)
//{
//    mangled_ppc("??1CPPInclude@D3DXShader@@QAA@XZ");
//};

//public: void * D3DXShader::CPPInclude::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPInclude@D3DXShader@@QAAPAXI@Z");
//};

//public: void * D3DXShader::CPPBlock::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPBlock@D3DXShader@@QAAPAXI@Z");
//};

//public: void * D3DXShader::CPPPragmaDef::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPPragmaDef@D3DXShader@@QAAPAXI@Z");
//};

//public: void * D3DXShader::CPPPragmaRule::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPPPragmaRule@D3DXShader@@QAAPAXI@Z");
//};

//public: D3DXShader::CPreProcessor::~CPreProcessor(void)
//{
//    mangled_ppc("??1CPreProcessor@D3DXShader@@QAA@XZ");
//};

//public: void D3DXShader::CPreProcessor::RtlEnterCriticalSection(void)
//{
//    mangled_ppc("?RtlEnterCriticalSection@CPreProcessor@D3DXShader@@QAAXXZ");
//};

//public: long D3DXShader::CPreProcessor::Begin(unsigned int)
//{
//    mangled_ppc("?Begin@CPreProcessor@D3DXShader@@QAAJI@Z");
//};

//protected: int D3DXShader::CPreProcessor::Token(void)
//{
//    mangled_ppc("?Token@CPreProcessor@D3DXShader@@IAAHXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoUndef(char const *)
//{
//    mangled_ppc("?DoUndef@CPreProcessor@D3DXShader@@IAAJPBD@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoIf(int)
//{
//    mangled_ppc("?DoIf@CPreProcessor@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoEndif(void)
//{
//    mangled_ppc("?DoEndif@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoPragmaRuleDisable(void)
//{
//    mangled_ppc("?DoPragmaRuleDisable@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPreProcessor::DoPragmaDef(void)
//{
//    mangled_ppc("?DoPragmaDef@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//protected: int D3DXShader::CPreProcessor::AreDefinesIdentical(class D3DXShader::CPPDefine *, class D3DXShader::CPPDefine *)
//{
//    mangled_ppc("?AreDefinesIdentical@CPreProcessor@D3DXShader@@IAAHPAVCPPDefine@2@0@Z");
//};

//protected: long D3DXShader::CPreProcessor::AddDefine(class D3DXShader::CPPDefine *)
//{
//    mangled_ppc("?AddDefine@CPreProcessor@D3DXShader@@IAAJPAVCPPDefine@2@@Z");
//};

//public: long D3DXShader::CPreProcessor::AddDefine(char const *)
//{
//    mangled_ppc("?AddDefine@CPreProcessor@D3DXShader@@QAAJPBD@Z");
//};

//public: long D3DXShader::CPreProcessor::AddDefine(char const *, unsigned int)
//{
//    mangled_ppc("?AddDefine@CPreProcessor@D3DXShader@@QAAJPBDI@Z");
//};

//protected: unsigned int D3DXShader::CPreProcessor::UintDefine(char const *)
//{
//    mangled_ppc("?UintDefine@CPreProcessor@D3DXShader@@IAAIPBD@Z");
//};

//long StringCchVPrintfA(char *, unsigned int, char const *, char *)
//{
//    mangled_ppc("?StringCchVPrintfA@@YAJPADIPBD0@Z");
//};

//public: static int D3DXShader::CPreProcessor::Static_Token(void *)
//{
//    mangled_ppc("?Static_Token@CPreProcessor@D3DXShader@@SAHPAX@Z");
//};

//public: D3DXShader::CPreProcessor::CPreProcessor(void)
//{
//    mangled_ppc("??0CPreProcessor@D3DXShader@@QAA@XZ");
//};

//protected: void D3DXShader::CPreProcessor::VError(char const *, char *)
//{
//    mangled_ppc("?VError@CPreProcessor@D3DXShader@@IAAXPBDPAD@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoDefine(char const *, int)
//{
//    mangled_ppc("?DoDefine@CPreProcessor@D3DXShader@@IAAJPBDH@Z");
//};

//protected: long D3DXShader::CPreProcessor::DoPragma(void)
//{
//    mangled_ppc("?DoPragma@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//public: static void D3DXShader::CPreProcessor::Static_Error(void *, char const *, ...)
//{
//    mangled_ppc("?Static_Error@CPreProcessor@D3DXShader@@SAXPAXPBDZZ");
//};

//protected: long D3DXShader::CPreProcessor::InitializeDefines(struct _D3DXMACRO const *)
//{
//    mangled_ppc("?InitializeDefines@CPreProcessor@D3DXShader@@IAAJPBU_D3DXMACRO@@@Z");
//};

//protected: void D3DXShader::CPreProcessor::Error(char const *, ...)
//{
//    mangled_ppc("?Error@CPreProcessor@D3DXShader@@IAAXPBDZZ");
//};

//protected: long D3DXShader::CPreProcessor::DoInclude(void)
//{
//    mangled_ppc("?DoInclude@CPreProcessor@D3DXShader@@IAAJXZ");
//};

//public: long D3DXShader::CPreProcessor::InitializeFromFile(void const *, int, struct _D3DXMACRO const *, struct ID3DXInclude *)
//{
//    mangled_ppc("?InitializeFromFile@CPreProcessor@D3DXShader@@QAAJPBXHPBU_D3DXMACRO@@PAUID3DXInclude@@@Z");
//};

//public: long D3DXShader::CPreProcessor::InitializeFromMemory(char const *, void const *, unsigned int, struct _D3DXMACRO const *, struct ID3DXInclude *)
//{
//    mangled_ppc("?InitializeFromMemory@CPreProcessor@D3DXShader@@QAAJPBDPBXIPBU_D3DXMACRO@@PAUID3DXInclude@@@Z");
//};

//protected: void D3DXShader::CPreProcessor::Production(unsigned int, unsigned int)
//{
//    mangled_ppc("?Production@CPreProcessor@D3DXShader@@IAAXII@Z");
//};

//public: static void D3DXShader::CPreProcessor::Static_Production(void *, unsigned int, unsigned int)
//{
//    mangled_ppc("?Static_Production@CPreProcessor@D3DXShader@@SAXPAXII@Z");
//};

//public: int D3DXShader::CPreProcessorYaccStruct::d3d10tok_parse(void)
//{
//    mangled_ppc("?d3d10tok_parse@CPreProcessorYaccStruct@D3DXShader@@QAAHXZ");
//};

//public: long D3DXShader::CPreProcessor::GetToken(struct D3DXShader::D3DXTOKEN *)
//{
//    mangled_ppc("?GetToken@CPreProcessor@D3DXShader@@QAAJPAUD3DXTOKEN@2@@Z");
//};

//public: long D3DXShader::CPreProcessor::End(void)
//{
//    mangled_ppc("?End@CPreProcessor@D3DXShader@@QAAJXZ");
//};

//protected: enum D3DXShader::CPreProcessor::CallDefineDisposition D3DXShader::CPreProcessor::CallDefine(struct D3DXShader::D3DXTOKEN *, class D3DXShader::CNode *, class D3DXShader::CNode *)
//{
//    mangled_ppc("?CallDefine@CPreProcessor@D3DXShader@@IAA?AW4CallDefineDisposition@12@PAUD3DXTOKEN@2@PAVCNode@2@1@Z");
//};

