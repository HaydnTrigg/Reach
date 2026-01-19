/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: bool CVShaderValidator20::Rule_InstructionSupportedByVersion(void);
// private: bool CVShaderValidator20::Rule_ValidParamCount(void);
// private: bool CVShaderValidator20::Rule_ValidAddressRegWrite(void);
// private: bool CVShaderValidator20::Rule_ValidNRMInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidCRSInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidPOWInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidLRPInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidSGNInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidSINCOSInstruction(void);
// public: CPackedBitArray::CPackedBitArray(void);
// public: CPackedBitArray::~CPackedBitArray(void);
// public: long CPackedBitArray::Init(unsigned int);
// public: unsigned int CPackedBitArray::GetSize(void);
// public: void CPackedBitArray::SetBit(unsigned long);
// public: int CPackedBitArray::IsBitSet(unsigned long);
// public: int CPackedBitArray::IsSupersetOf(class CPackedBitArray *);
// public: CShaderFlowBlock::CShaderFlowBlock(void);
// public: CShaderFlowBlockStack::~CShaderFlowBlockStack(void);
// public: bool CShaderFlowBlockStack::SeenElse(void);
// public: void CShaderFlowBlockStack::PredicateInitialized(unsigned long);
// public: unsigned long CShaderFlowBlockStack::GetUninitializedPredicateMask(unsigned long);
// public: bool CShaderFlowBlockStack::IsInsideStaticOrDynamicIf(void);
// public: bool CShaderFlowBlockStack::IsCurrentNestingLevelStaticIf(void);
// public: bool CShaderFlowBlockStack::IsInsideLoop(void);
// public: bool CShaderFlowBlockStack::IsInsideRep(void);
// public: bool CShaderFlowBlockStack::IsInsideLocalLoopOrRep(void);
// public: bool CShaderFlowBlockStack::IsInsideLocalLoop(void);
// public: bool CShaderFlowBlockStack::IsInSubroutineCalledFromNotInLoop(void);
// public: bool CShaderFlowBlockStack::IsInSubroutine(void);
// public: enum _FLOWTYPE CShaderFlowBlockStack::GetCurrentFlowType(void);
// public: unsigned int CShaderFlowBlockStack::GetLoopAndRepNestingLevel(void);
// public: unsigned int CShaderFlowBlockStack::GetStaticIfNestingLevel(void);
// public: unsigned int CShaderFlowBlockStack::GetDynamicIfNestingLevel(void);
// public: unsigned int CShaderFlowBlockStack::GetCallNestingLevel(void);
// private: virtual long CVShaderValidator20::InitValidation(struct _VSVALIDATOR_PARAMS *);
// private: bool CVShaderValidator20::Rule_ValidSrcPredicate(void);
// private: bool CVShaderValidator20::Rule_ValidSrcParams(void);
// private: bool CVShaderValidator20::Rule_SrcInitialized(void);
// private: bool CVShaderValidator20::Rule_ValidDstParam(void);
// private: bool CVShaderValidator20::Rule_ValidDEFInstruction(void);
// private: bool CVShaderValidator20::Rule_ValidRegisterPortUsage(void);
// private: bool CVShaderValidator20::Rule_ValidFlowControl(void);
// private: bool CVShaderValidator20::Rule_ValidInstructionCount(void);
// private: bool CVShaderValidator20::Rule_LogVSOutputs(void);
// public: CShaderFlowBlockStack::CShaderFlowBlockStack(void);
// public: CVShaderValidator20::CVShaderValidator20(void);
// public: CVShaderValidator20::~CVShaderValidator20(void);
// private: virtual bool CVShaderValidator20::ApplyPerInstructionRules(void);
// private: virtual void CVShaderValidator20::ApplyPostInstructionsRules(void);

//private: bool CVShaderValidator20::Rule_InstructionSupportedByVersion(void)
//{
//    mangled_ppc("?Rule_InstructionSupportedByVersion@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidParamCount(void)
//{
//    mangled_ppc("?Rule_ValidParamCount@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidAddressRegWrite(void)
//{
//    mangled_ppc("?Rule_ValidAddressRegWrite@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidNRMInstruction(void)
//{
//    mangled_ppc("?Rule_ValidNRMInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidCRSInstruction(void)
//{
//    mangled_ppc("?Rule_ValidCRSInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidPOWInstruction(void)
//{
//    mangled_ppc("?Rule_ValidPOWInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidLRPInstruction(void)
//{
//    mangled_ppc("?Rule_ValidLRPInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidSGNInstruction(void)
//{
//    mangled_ppc("?Rule_ValidSGNInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidSINCOSInstruction(void)
//{
//    mangled_ppc("?Rule_ValidSINCOSInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//public: CPackedBitArray::CPackedBitArray(void)
//{
//    mangled_ppc("??0CPackedBitArray@@QAA@XZ");
//};

//public: CPackedBitArray::~CPackedBitArray(void)
//{
//    mangled_ppc("??1CPackedBitArray@@QAA@XZ");
//};

//public: long CPackedBitArray::Init(unsigned int)
//{
//    mangled_ppc("?Init@CPackedBitArray@@QAAJI@Z");
//};

//public: unsigned int CPackedBitArray::GetSize(void)
//{
//    mangled_ppc("?GetSize@CPackedBitArray@@QAAIXZ");
//};

//public: void CPackedBitArray::SetBit(unsigned long)
//{
//    mangled_ppc("?SetBit@CPackedBitArray@@QAAXK@Z");
//};

//public: int CPackedBitArray::IsBitSet(unsigned long)
//{
//    mangled_ppc("?IsBitSet@CPackedBitArray@@QAAHK@Z");
//};

//public: int CPackedBitArray::IsSupersetOf(class CPackedBitArray *)
//{
//    mangled_ppc("?IsSupersetOf@CPackedBitArray@@QAAHPAV1@@Z");
//};

//public: CShaderFlowBlock::CShaderFlowBlock(void)
//{
//    mangled_ppc("??0CShaderFlowBlock@@QAA@XZ");
//};

//public: CShaderFlowBlockStack::~CShaderFlowBlockStack(void)
//{
//    mangled_ppc("??1CShaderFlowBlockStack@@QAA@XZ");
//};

//public: bool CShaderFlowBlockStack::SeenElse(void)
//{
//    mangled_ppc("?SeenElse@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: void CShaderFlowBlockStack::PredicateInitialized(unsigned long)
//{
//    mangled_ppc("?PredicateInitialized@CShaderFlowBlockStack@@QAAXK@Z");
//};

//public: unsigned long CShaderFlowBlockStack::GetUninitializedPredicateMask(unsigned long)
//{
//    mangled_ppc("?GetUninitializedPredicateMask@CShaderFlowBlockStack@@QAAKK@Z");
//};

//public: bool CShaderFlowBlockStack::IsInsideStaticOrDynamicIf(void)
//{
//    mangled_ppc("?IsInsideStaticOrDynamicIf@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsCurrentNestingLevelStaticIf(void)
//{
//    mangled_ppc("?IsCurrentNestingLevelStaticIf@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInsideLoop(void)
//{
//    mangled_ppc("?IsInsideLoop@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInsideRep(void)
//{
//    mangled_ppc("?IsInsideRep@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInsideLocalLoopOrRep(void)
//{
//    mangled_ppc("?IsInsideLocalLoopOrRep@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInsideLocalLoop(void)
//{
//    mangled_ppc("?IsInsideLocalLoop@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInSubroutineCalledFromNotInLoop(void)
//{
//    mangled_ppc("?IsInSubroutineCalledFromNotInLoop@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: bool CShaderFlowBlockStack::IsInSubroutine(void)
//{
//    mangled_ppc("?IsInSubroutine@CShaderFlowBlockStack@@QAA_NXZ");
//};

//public: enum _FLOWTYPE CShaderFlowBlockStack::GetCurrentFlowType(void)
//{
//    mangled_ppc("?GetCurrentFlowType@CShaderFlowBlockStack@@QAA?AW4_FLOWTYPE@@XZ");
//};

//public: unsigned int CShaderFlowBlockStack::GetLoopAndRepNestingLevel(void)
//{
//    mangled_ppc("?GetLoopAndRepNestingLevel@CShaderFlowBlockStack@@QAAIXZ");
//};

//public: unsigned int CShaderFlowBlockStack::GetStaticIfNestingLevel(void)
//{
//    mangled_ppc("?GetStaticIfNestingLevel@CShaderFlowBlockStack@@QAAIXZ");
//};

//public: unsigned int CShaderFlowBlockStack::GetDynamicIfNestingLevel(void)
//{
//    mangled_ppc("?GetDynamicIfNestingLevel@CShaderFlowBlockStack@@QAAIXZ");
//};

//public: unsigned int CShaderFlowBlockStack::GetCallNestingLevel(void)
//{
//    mangled_ppc("?GetCallNestingLevel@CShaderFlowBlockStack@@QAAIXZ");
//};

//private: virtual long CVShaderValidator20::InitValidation(struct _VSVALIDATOR_PARAMS *)
//{
//    mangled_ppc("?InitValidation@CVShaderValidator20@@EAAJPAU_VSVALIDATOR_PARAMS@@@Z");
//};

//private: bool CVShaderValidator20::Rule_ValidSrcPredicate(void)
//{
//    mangled_ppc("?Rule_ValidSrcPredicate@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidSrcParams(void)
//{
//    mangled_ppc("?Rule_ValidSrcParams@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_SrcInitialized(void)
//{
//    mangled_ppc("?Rule_SrcInitialized@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidDstParam(void)
//{
//    mangled_ppc("?Rule_ValidDstParam@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidDEFInstruction(void)
//{
//    mangled_ppc("?Rule_ValidDEFInstruction@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidRegisterPortUsage(void)
//{
//    mangled_ppc("?Rule_ValidRegisterPortUsage@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidFlowControl(void)
//{
//    mangled_ppc("?Rule_ValidFlowControl@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_ValidInstructionCount(void)
//{
//    mangled_ppc("?Rule_ValidInstructionCount@CVShaderValidator20@@AAA_NXZ");
//};

//private: bool CVShaderValidator20::Rule_LogVSOutputs(void)
//{
//    mangled_ppc("?Rule_LogVSOutputs@CVShaderValidator20@@AAA_NXZ");
//};

//public: CShaderFlowBlockStack::CShaderFlowBlockStack(void)
//{
//    mangled_ppc("??0CShaderFlowBlockStack@@QAA@XZ");
//};

//public: CVShaderValidator20::CVShaderValidator20(void)
//{
//    mangled_ppc("??0CVShaderValidator20@@QAA@XZ");
//};

//public: CVShaderValidator20::~CVShaderValidator20(void)
//{
//    mangled_ppc("??1CVShaderValidator20@@QAA@XZ");
//};

//private: virtual bool CVShaderValidator20::ApplyPerInstructionRules(void)
//{
//    mangled_ppc("?ApplyPerInstructionRules@CVShaderValidator20@@EAA_NXZ");
//};

//private: virtual void CVShaderValidator20::ApplyPostInstructionsRules(void)
//{
//    mangled_ppc("?ApplyPostInstructionsRules@CVShaderValidator20@@EAAXXZ");
//};

