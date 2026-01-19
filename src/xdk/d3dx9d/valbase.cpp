/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void CShaderFlowBlockStack::SeenBreakInLocalLoopOrRep(void);
// public: void CShaderFlowBlockStack::SeenGradInLocalLoopOrRep(void);
// public: bool CShaderFlowBlockStack::WasBreakInLocalLoopOrRep(void);
// public: bool CShaderFlowBlockStack::WasGradInLocalLoopOrRep(void);
// public: void CShaderFlowBlockStack::DeleteCallList(unsigned int);
// public: void CShaderFlowBlockStack::TagLabelsCalledFromLoopWithBreak_And_DeleteCallList(unsigned int);
// public: void CShaderFlowBlockStack::EndSubroutineOrMain(void);
// public: void DSTPARAM::Clear(void);
// public: void SRCPARAM::Clear(void);
// public: void CBaseInstruction::Clear(class CBaseInstruction *);
// public: CAccessHistory::CAccessHistory(void);
// public: CBaseShaderValidator::CBaseShaderValidator(void);
// protected: long CBaseShaderValidator::Init(unsigned long const *, bool, void **);
// public: long CBaseShaderValidator::End(void);
// protected: void CBaseShaderValidator::SearchShaderForDebugInfo(unsigned long const *);
// public: IDirect3DShaderValidator9::IDirect3DShaderValidator9(void);
// public: virtual unsigned long D3DShaderValidator::AddRef(void);
// enum _D3DSHADER_PARAM_REGISTER_TYPE D3DSI_GETREGTYPE_RESOLVING_CONSTANTS(unsigned long);
// unsigned int D3DSI_GETREGNUM_RESOLVING_CONSTANTS(unsigned long);
// public: void CShaderValidatorDebugSpewer::SetInstructionLocatorTextForNextError(char *);
// public: DSTPARAM::DSTPARAM(void);
// public: SRCPARAM::SRCPARAM(void);
// public: static void CBaseInstruction::operator delete(void *);
// public: static void * CAccessHistoryNode::operator new(unsigned int);
// public: static void CAccessHistoryNode::operator delete(void *);
// public: static void CAccessHistory::operator delete(void *);
// public: static void * CAccessHistory::operator new[](unsigned int);
// public: static void CAccessHistory::operator delete[](void *);
// public: void CBaseShaderValidator::SetErrorFunction(long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *);
// public: static void * CBaseShaderValidator::operator new(unsigned int);
// public: static void CBaseShaderValidator::operator delete(void *);
// public: static void * D3DShaderValidator::operator new(unsigned int);
// public: static void D3DShaderValidator::operator delete(void *);
// public: void CShaderFlowBlockStack::Push(enum _FLOWTYPE);
// public: void CShaderFlowBlockStack::Pop(void);
// public: bool CShaderFlowBlockStack::CallSubroutine(unsigned int);
// public: void CShaderFlowBlockStack::BeginSubroutine(unsigned int);
// public: CBaseInstruction::CBaseInstruction(class CBaseInstruction *);
// public: CAccessHistoryNode::CAccessHistoryNode(class CAccessHistoryNode *, class CAccessHistoryNode *, class CAccessHistoryNode *, class CBaseInstruction *, bool);
// public: CAccessHistory::~CAccessHistory(void);
// public: bool CAccessHistory::NewAccess(class CBaseInstruction *, bool);
// public: bool CAccessHistory::InsertReadBeforeWrite(class CAccessHistoryNode *, class CBaseInstruction *);
// public: CRegisterFile::CRegisterFile(unsigned int, bool, unsigned int, bool);
// public: void * CAccessHistory::`vector deleting destructor'(unsigned int);
// public: CRegisterFile::~CRegisterFile(void);
// public: CBaseShaderValidator::~CBaseShaderValidator(void);
// protected: void CBaseShaderValidator::DecodeDstParam(class DSTPARAM *, unsigned long);
// protected: void CBaseShaderValidator::DecodeSrcParam(class SRCPARAM *, unsigned long);
// protected: bool CBaseShaderValidator::DecodeRelativeAddressToken(class SRCPARAM *, unsigned long);
// protected: bool CBaseShaderValidator::DecodeRelativeAddressToken(class DSTPARAM *, unsigned long);
// public: D3DShaderValidator::D3DShaderValidator(void);
// public: virtual long D3DShaderValidator::End(void);
// Direct3DShaderValidatorCreate9;
// public: void * CVShaderValidator10::`scalar deleting destructor'(unsigned int);
// public: void * CVShaderValidator20::`scalar deleting destructor'(unsigned int);
// public: void * CVShaderValidator30::`scalar deleting destructor'(unsigned int);
// public: void * CPShaderValidator10::`scalar deleting destructor'(unsigned int);
// public: void * CPShaderValidator14::`scalar deleting destructor'(unsigned int);
// public: void * CPShaderValidator20::`scalar deleting destructor'(unsigned int);
// public: void * CPShaderValidator30::`scalar deleting destructor'(unsigned int);
// void MakeVersionString(unsigned long, char *, unsigned int);
// public: char * CBaseInstruction::MakeInstructionLocatorString(struct _SHADER_DEBUGINFO const *);
// protected: void CBaseShaderValidator::Spew(unsigned long, enum _D3DSVERROR_ID, char const *, ...);
// void DeleteShaderValidator(class CBaseShaderValidator const *, unsigned long);
// long StringCchCatA(char *, unsigned int, char const *);
// public: long CBaseShaderValidator::Instruction(char const *, unsigned int, unsigned long const *, unsigned int);
// public: bool CBaseShaderValidator::ValidateShader(void);
// protected: char * CBaseShaderValidator::MakeAffectedComponentsText(unsigned long, bool, bool);
// public: D3DShaderValidator::~D3DShaderValidator(void);
// public: void * D3DShaderValidator::`scalar deleting destructor'(unsigned int);
// public: virtual long D3DShaderValidator::Begin(long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *, unsigned long);
// class CBasePShaderValidator * GetNewPSValidator(struct _PSVALIDATOR_PARAMS *, unsigned long, long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *);
// class CBaseVShaderValidator * GetNewVSValidator(struct _VSVALIDATOR_PARAMS *, unsigned long, long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *);
// public: virtual unsigned long D3DShaderValidator::Release(void);
// public: virtual long D3DShaderValidator::Instruction(char const *, unsigned int, unsigned long const *, unsigned int);

//public: void CShaderFlowBlockStack::SeenBreakInLocalLoopOrRep(void)
//{
//    mangled_ppc("?SeenBreakInLocalLoopOrRep@CShaderFlowBlockStack@@QAAXXZ");
//};

//public: void CShaderFlowBlockStack::SeenGradInLocalLoopOrRep(void)
//{
//    mangled_ppc("?SeenGradInLocalLoopOrRep@CShaderFlowBlockStack@@QAAXXZ");
//};

//public: bool CShaderFlowBlockStack::WasBreakInLocalLoopOrRep(void)
//{
//    mangled_ppc("?WasBreakInLocalLoopOrRep@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::WasGradInLocalLoopOrRep(void)
//{
//    mangled_ppc("?WasGradInLocalLoopOrRep@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: void CShaderFlowBlockStack::DeleteCallList(unsigned int)
//{
//    mangled_ppc("?DeleteCallList@CShaderFlowBlockStack@@QAAXI@Z");
//};

//public: void CShaderFlowBlockStack::TagLabelsCalledFromLoopWithBreak_And_DeleteCallList(unsigned int)
//{
//    mangled_ppc("?TagLabelsCalledFromLoopWithBreak_And_DeleteCallList@CShaderFlowBlockStack@@QAAXI@Z");
//};

//public: void CShaderFlowBlockStack::EndSubroutineOrMain(void)
//{
//    mangled_ppc("?EndSubroutineOrMain@CShaderFlowBlockStack@@QAAXXZ");
//};

//public: void DSTPARAM::Clear(void)
//{
//    mangled_ppc("?Clear@DSTPARAM@@QAAXXZ");
//};

//public: void SRCPARAM::Clear(void)
//{
//    mangled_ppc("?Clear@SRCPARAM@@QAAXXZ");
//};

//public: void CBaseInstruction::Clear(class CBaseInstruction *)
//{
//    mangled_ppc("?Clear@CBaseInstruction@@QAAXPAV1@@Z");
//};

//public: CAccessHistory::CAccessHistory(void)
//{
//    mangled_ppc("??0CAccessHistory@@QAA@XZ");
//};

//public: CBaseShaderValidator::CBaseShaderValidator(void)
//{
//    mangled_ppc("??0CBaseShaderValidator@@QAA@XZ");
//};

//protected: long CBaseShaderValidator::Init(unsigned long const *, bool, void **)
//{
//    mangled_ppc("?Init@CBaseShaderValidator@@IAAJPBK_NPAPAX@Z");
//};

//public: long CBaseShaderValidator::End(void)
//{
//    mangled_ppc("?End@CBaseShaderValidator@@QAAJXZ");
//};

//protected: void CBaseShaderValidator::SearchShaderForDebugInfo(unsigned long const *)
//{
//    mangled_ppc("?SearchShaderForDebugInfo@CBaseShaderValidator@@IAAXPBK@Z");
//};

//public: IDirect3DShaderValidator9::IDirect3DShaderValidator9(void)
//{
//    mangled_ppc("??0IDirect3DShaderValidator9@@QAA@XZ");
//};

//public: virtual unsigned long D3DShaderValidator::AddRef(void)
//{
//    mangled_ppc("?AddRef@D3DShaderValidator@@UAAKXZ");
//};

//enum _D3DSHADER_PARAM_REGISTER_TYPE D3DSI_GETREGTYPE_RESOLVING_CONSTANTS(unsigned long)
//{
//    mangled_ppc("?D3DSI_GETREGTYPE_RESOLVING_CONSTANTS@@YA?AW4_D3DSHADER_PARAM_REGISTER_TYPE@@K@Z");
//};

//unsigned int D3DSI_GETREGNUM_RESOLVING_CONSTANTS(unsigned long)
//{
//    mangled_ppc("?D3DSI_GETREGNUM_RESOLVING_CONSTANTS@@YAIK@Z");
//};

//public: void CShaderValidatorDebugSpewer::SetInstructionLocatorTextForNextError(char *)
//{
//    mangled_ppc("?SetInstructionLocatorTextForNextError@CShaderValidatorDebugSpewer@@QAAXPAD@Z");
//};

//public: DSTPARAM::DSTPARAM(void)
//{
//    mangled_ppc("??0DSTPARAM@@QAA@XZ");
//};

//public: SRCPARAM::SRCPARAM(void)
//{
//    mangled_ppc("??0SRCPARAM@@QAA@XZ");
//};

//public: static void CBaseInstruction::operator delete(void *)
//{
//    mangled_ppc("??3CBaseInstruction@@SAXPAX@Z");
//};

//public: static void * CAccessHistoryNode::operator new(unsigned int)
//{
//    mangled_ppc("??2CAccessHistoryNode@@SAPAXI@Z");
//};

//public: static void CAccessHistoryNode::operator delete(void *)
//{
//    mangled_ppc("??3CAccessHistoryNode@@SAXPAX@Z");
//};

//public: static void CAccessHistory::operator delete(void *)
//{
//    mangled_ppc("??3CAccessHistory@@SAXPAX@Z");
//};

//public: static void * CAccessHistory::operator new[](unsigned int)
//{
//    mangled_ppc("??_UCAccessHistory@@SAPAXI@Z");
//};

//public: static void CAccessHistory::operator delete[](void *)
//{
//    mangled_ppc("??_VCAccessHistory@@SAXPAX@Z");
//};

//public: void CBaseShaderValidator::SetErrorFunction(long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *)
//{
//    mangled_ppc("?SetErrorFunction@CBaseShaderValidator@@QAAXP6AJPBDIKI0PAX@Z1@Z");
//};

//public: static void * CBaseShaderValidator::operator new(unsigned int)
//{
//    mangled_ppc("??2CBaseShaderValidator@@SAPAXI@Z");
//};

//public: static void CBaseShaderValidator::operator delete(void *)
//{
//    mangled_ppc("??3CBaseShaderValidator@@SAXPAX@Z");
//};

//public: static void * D3DShaderValidator::operator new(unsigned int)
//{
//    mangled_ppc("??2D3DShaderValidator@@SAPAXI@Z");
//};

//public: static void D3DShaderValidator::operator delete(void *)
//{
//    mangled_ppc("??3D3DShaderValidator@@SAXPAX@Z");
//};

//public: void CShaderFlowBlockStack::Push(enum _FLOWTYPE)
//{
//    mangled_ppc("?Push@CShaderFlowBlockStack@@QAAXW4_FLOWTYPE@@@Z");
//};

//public: void CShaderFlowBlockStack::Pop(void)
//{
//    mangled_ppc("?Pop@CShaderFlowBlockStack@@QAAXXZ");
//};

//public: bool CShaderFlowBlockStack::CallSubroutine(unsigned int)
//{
//    mangled_ppc("?CallSubroutine@CShaderFlowBlockStack@@QAA_NI@Z");
//};

//public: void CShaderFlowBlockStack::BeginSubroutine(unsigned int)
//{
//    mangled_ppc("?BeginSubroutine@CShaderFlowBlockStack@@QAAXI@Z");
//};

//public: CBaseInstruction::CBaseInstruction(class CBaseInstruction *)
//{
//    mangled_ppc("??0CBaseInstruction@@QAA@PAV0@@Z");
//};

//public: CAccessHistoryNode::CAccessHistoryNode(class CAccessHistoryNode *, class CAccessHistoryNode *, class CAccessHistoryNode *, class CBaseInstruction *, bool)
//{
//    mangled_ppc("??0CAccessHistoryNode@@QAA@PAV0@00PAVCBaseInstruction@@_N@Z");
//};

//public: CAccessHistory::~CAccessHistory(void)
//{
//    mangled_ppc("??1CAccessHistory@@QAA@XZ");
//};

//public: bool CAccessHistory::NewAccess(class CBaseInstruction *, bool)
//{
//    mangled_ppc("?NewAccess@CAccessHistory@@QAA_NPAVCBaseInstruction@@_N@Z");
//};

//public: bool CAccessHistory::InsertReadBeforeWrite(class CAccessHistoryNode *, class CBaseInstruction *)
//{
//    mangled_ppc("?InsertReadBeforeWrite@CAccessHistory@@QAA_NPAVCAccessHistoryNode@@PAVCBaseInstruction@@@Z");
//};

//public: CRegisterFile::CRegisterFile(unsigned int, bool, unsigned int, bool)
//{
//    mangled_ppc("??0CRegisterFile@@QAA@I_NI0@Z");
//};

//public: void * CAccessHistory::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECAccessHistory@@QAAPAXI@Z");
//};

//public: CRegisterFile::~CRegisterFile(void)
//{
//    mangled_ppc("??1CRegisterFile@@QAA@XZ");
//};

//public: CBaseShaderValidator::~CBaseShaderValidator(void)
//{
//    mangled_ppc("??1CBaseShaderValidator@@QAA@XZ");
//};

//protected: void CBaseShaderValidator::DecodeDstParam(class DSTPARAM *, unsigned long)
//{
//    mangled_ppc("?DecodeDstParam@CBaseShaderValidator@@IAAXPAVDSTPARAM@@K@Z");
//};

//protected: void CBaseShaderValidator::DecodeSrcParam(class SRCPARAM *, unsigned long)
//{
//    mangled_ppc("?DecodeSrcParam@CBaseShaderValidator@@IAAXPAVSRCPARAM@@K@Z");
//};

//protected: bool CBaseShaderValidator::DecodeRelativeAddressToken(class SRCPARAM *, unsigned long)
//{
//    mangled_ppc("?DecodeRelativeAddressToken@CBaseShaderValidator@@IAA_NPAVSRCPARAM@@K@Z");
//};

//protected: bool CBaseShaderValidator::DecodeRelativeAddressToken(class DSTPARAM *, unsigned long)
//{
//    mangled_ppc("?DecodeRelativeAddressToken@CBaseShaderValidator@@IAA_NPAVDSTPARAM@@K@Z");
//};

//public: D3DShaderValidator::D3DShaderValidator(void)
//{
//    mangled_ppc("??0D3DShaderValidator@@QAA@XZ");
//};

//public: virtual long D3DShaderValidator::End(void)
//{
//    mangled_ppc("?End@D3DShaderValidator@@UAAJXZ");
//};

//Direct3DShaderValidatorCreate9
//{
//    mangled_ppc("Direct3DShaderValidatorCreate9");
//};

//public: void * CVShaderValidator10::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCVShaderValidator10@@QAAPAXI@Z");
//};

//public: void * CVShaderValidator20::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCVShaderValidator20@@QAAPAXI@Z");
//};

//public: void * CVShaderValidator30::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCVShaderValidator30@@QAAPAXI@Z");
//};

//public: void * CPShaderValidator10::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPShaderValidator10@@QAAPAXI@Z");
//};

//public: void * CPShaderValidator14::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPShaderValidator14@@QAAPAXI@Z");
//};

//public: void * CPShaderValidator20::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPShaderValidator20@@QAAPAXI@Z");
//};

//public: void * CPShaderValidator30::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCPShaderValidator30@@QAAPAXI@Z");
//};

//void MakeVersionString(unsigned long, char *, unsigned int)
//{
//    mangled_ppc("?MakeVersionString@@YAXKPADI@Z");
//};

//public: char * CBaseInstruction::MakeInstructionLocatorString(struct _SHADER_DEBUGINFO const *)
//{
//    mangled_ppc("?MakeInstructionLocatorString@CBaseInstruction@@QAAPADPBU_SHADER_DEBUGINFO@@@Z");
//};

//protected: void CBaseShaderValidator::Spew(unsigned long, enum _D3DSVERROR_ID, char const *, ...)
//{
//    mangled_ppc("?Spew@CBaseShaderValidator@@IAAXKW4_D3DSVERROR_ID@@PBDZZ");
//};

//void DeleteShaderValidator(class CBaseShaderValidator const *, unsigned long)
//{
//    mangled_ppc("?DeleteShaderValidator@@YAXPBVCBaseShaderValidator@@K@Z");
//};

//long StringCchCatA(char *, unsigned int, char const *)
//{
//    mangled_ppc("?StringCchCatA@@YAJPADIPBD@Z");
//};

//public: long CBaseShaderValidator::Instruction(char const *, unsigned int, unsigned long const *, unsigned int)
//{
//    mangled_ppc("?Instruction@CBaseShaderValidator@@QAAJPBDIPBKI@Z");
//};

//public: bool CBaseShaderValidator::ValidateShader(void)
//{
//    mangled_ppc("?ValidateShader@CBaseShaderValidator@@QAA_NXZ");
//};

//protected: char * CBaseShaderValidator::MakeAffectedComponentsText(unsigned long, bool, bool)
//{
//    mangled_ppc("?MakeAffectedComponentsText@CBaseShaderValidator@@IAAPADK_N0@Z");
//};

//public: D3DShaderValidator::~D3DShaderValidator(void)
//{
//    mangled_ppc("??1D3DShaderValidator@@QAA@XZ");
//};

//public: void * D3DShaderValidator::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GD3DShaderValidator@@QAAPAXI@Z");
//};

//public: virtual long D3DShaderValidator::Begin(long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *, unsigned long)
//{
//    mangled_ppc("?Begin@D3DShaderValidator@@UAAJP6AJPBDIKI0PAX@Z1K@Z");
//};

//class CBasePShaderValidator * GetNewPSValidator(struct _PSVALIDATOR_PARAMS *, unsigned long, long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *)
//{
//    mangled_ppc("?GetNewPSValidator@@YAPAVCBasePShaderValidator@@PAU_PSVALIDATOR_PARAMS@@KP6AJPBDIKI1PAX@Z2@Z");
//};

//class CBaseVShaderValidator * GetNewVSValidator(struct _VSVALIDATOR_PARAMS *, unsigned long, long (*)(char const *, unsigned int, unsigned long, unsigned int, char const *, void *), void *)
//{
//    mangled_ppc("?GetNewVSValidator@@YAPAVCBaseVShaderValidator@@PAU_VSVALIDATOR_PARAMS@@KP6AJPBDIKI1PAX@Z2@Z");
//};

//public: virtual unsigned long D3DShaderValidator::Release(void)
//{
//    mangled_ppc("?Release@D3DShaderValidator@@UAAKXZ");
//};

//public: virtual long D3DShaderValidator::Instruction(char const *, unsigned int, unsigned long const *, unsigned int)
//{
//    mangled_ppc("?Instruction@D3DShaderValidator@@UAAJPBDIPBKI@Z");
//};

