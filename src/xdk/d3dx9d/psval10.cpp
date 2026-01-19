/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: CPShaderValidator10::CPShaderValidator10(void);
// private: bool CPShaderValidator10::Rule_InstructionSupportedByVersion(void);
// private: bool CPShaderValidator10::Rule_ValidParamCount(void);
// private: bool CPShaderValidator10::Rule_MultipleDependentTextureReads(void);
// private: bool CPShaderValidator10::Rule_TexOpAfterNonTexOp(void);
// private: bool CPShaderValidator10::Rule_ValidTEXM3xSequence(void);
// private: bool CPShaderValidator10::Rule_ValidTEXM3xRegisterNumbers(void);
// private: bool CPShaderValidator10::Rule_ValidCNDInstruction(void);
// private: bool CPShaderValidator10::Rule_ValidCMPInstruction(void);
// private: bool CPShaderValidator10::Rule_ValidDP3Instruction(void);
// private: bool CPShaderValidator10::Rule_ValidDP4Instruction(void);
// protected: CBaseInstruction::CBaseInstruction(void);
// public: static void * CBaseInstruction::operator new(unsigned int);
// protected: CBasePSInstruction::CBasePSInstruction(void);
// public: void CBasePSInstruction::Clear(class CBasePSInstruction *);
// public: void CPS1xInstruction::Clear(class CPS1xInstruction *);
// public: CPS1xInstruction::CPS1xInstruction(class CPS1xInstruction *);
// private: virtual class CBaseInstruction * CPShaderValidator10::AllocateNewInstruction(class CBaseInstruction *);
// private: virtual void CPShaderValidator10::ClearInstruction(class CBaseInstruction *);
// private: virtual void CPShaderValidator10::IsCurrInstTexOp(void);
// private: virtual long CPShaderValidator10::InitValidation(struct _PSVALIDATOR_PARAMS *);
// private: bool CPShaderValidator10::Rule_ValidSrcParams(void);
// private: bool CPShaderValidator10::Rule_NegateAfterSat(void);
// private: bool CPShaderValidator10::Rule_SatBeforeBiasOrComplement(void);
// private: bool CPShaderValidator10::Rule_SrcNoLongerAvailable(void);
// private: bool CPShaderValidator10::Rule_SrcInitialized(void);
// private: bool CPShaderValidator10::Rule_ValidDstParam(void);
// private: bool CPShaderValidator10::Rule_ValidRegisterPortUsage(void);
// private: bool CPShaderValidator10::Rule_TexRegsDeclaredInOrder(void);
// private: bool CPShaderValidator10::Rule_ValidLRPInstruction(void);
// private: bool CPShaderValidator10::Rule_ValidDEFInstruction(void);
// private: bool CPShaderValidator10::Rule_ValidInstructionPairing(void);
// private: bool CPShaderValidator10::Rule_ValidInstructionCount(void);
// private: bool CPShaderValidator10::Rule_R0Written(void);
// private: bool CPShaderValidator10::Rule_LogTextureAndTexcoordUsage(void);
// public: CPShaderValidator10::~CPShaderValidator10(void);
// private: virtual bool CPShaderValidator10::ApplyPerInstructionRules(void);
// private: virtual void CPShaderValidator10::ApplyPostInstructionsRules(void);

//public: CPShaderValidator10::CPShaderValidator10(void)
//{
//    mangled_ppc("??0CPShaderValidator10@@QAA@XZ");
//};

//private: bool CPShaderValidator10::Rule_InstructionSupportedByVersion(void)
//{
//    mangled_ppc("?Rule_InstructionSupportedByVersion@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidParamCount(void)
//{
//    mangled_ppc("?Rule_ValidParamCount@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_MultipleDependentTextureReads(void)
//{
//    mangled_ppc("?Rule_MultipleDependentTextureReads@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_TexOpAfterNonTexOp(void)
//{
//    mangled_ppc("?Rule_TexOpAfterNonTexOp@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidTEXM3xSequence(void)
//{
//    mangled_ppc("?Rule_ValidTEXM3xSequence@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidTEXM3xRegisterNumbers(void)
//{
//    mangled_ppc("?Rule_ValidTEXM3xRegisterNumbers@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidCNDInstruction(void)
//{
//    mangled_ppc("?Rule_ValidCNDInstruction@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidCMPInstruction(void)
//{
//    mangled_ppc("?Rule_ValidCMPInstruction@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidDP3Instruction(void)
//{
//    mangled_ppc("?Rule_ValidDP3Instruction@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidDP4Instruction(void)
//{
//    mangled_ppc("?Rule_ValidDP4Instruction@CPShaderValidator10@@AAA_NXZ");
//};

//protected: CBaseInstruction::CBaseInstruction(void)
//{
//    mangled_ppc("??0CBaseInstruction@@IAA@XZ");
//};

//public: static void * CBaseInstruction::operator new(unsigned int)
//{
//    mangled_ppc("??2CBaseInstruction@@SAPAXI@Z");
//};

//protected: CBasePSInstruction::CBasePSInstruction(void)
//{
//    mangled_ppc("??0CBasePSInstruction@@IAA@XZ");
//};

//public: void CBasePSInstruction::Clear(class CBasePSInstruction *)
//{
//    mangled_ppc("?Clear@CBasePSInstruction@@QAAXPAV1@@Z");
//};

//public: void CPS1xInstruction::Clear(class CPS1xInstruction *)
//{
//    mangled_ppc("?Clear@CPS1xInstruction@@QAAXPAV1@@Z");
//};

//public: CPS1xInstruction::CPS1xInstruction(class CPS1xInstruction *)
//{
//    mangled_ppc("??0CPS1xInstruction@@QAA@PAV0@@Z");
//};

//private: virtual class CBaseInstruction * CPShaderValidator10::AllocateNewInstruction(class CBaseInstruction *)
//{
//    mangled_ppc("?AllocateNewInstruction@CPShaderValidator10@@EAAPAVCBaseInstruction@@PAV2@@Z");
//};

//private: virtual void CPShaderValidator10::ClearInstruction(class CBaseInstruction *)
//{
//    mangled_ppc("?ClearInstruction@CPShaderValidator10@@EAAXPAVCBaseInstruction@@@Z");
//};

//private: virtual void CPShaderValidator10::IsCurrInstTexOp(void)
//{
//    mangled_ppc("?IsCurrInstTexOp@CPShaderValidator10@@EAAXXZ");
//};

//private: virtual long CPShaderValidator10::InitValidation(struct _PSVALIDATOR_PARAMS *)
//{
//    mangled_ppc("?InitValidation@CPShaderValidator10@@EAAJPAU_PSVALIDATOR_PARAMS@@@Z");
//};

//private: bool CPShaderValidator10::Rule_ValidSrcParams(void)
//{
//    mangled_ppc("?Rule_ValidSrcParams@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_NegateAfterSat(void)
//{
//    mangled_ppc("?Rule_NegateAfterSat@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_SatBeforeBiasOrComplement(void)
//{
//    mangled_ppc("?Rule_SatBeforeBiasOrComplement@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_SrcNoLongerAvailable(void)
//{
//    mangled_ppc("?Rule_SrcNoLongerAvailable@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_SrcInitialized(void)
//{
//    mangled_ppc("?Rule_SrcInitialized@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidDstParam(void)
//{
//    mangled_ppc("?Rule_ValidDstParam@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidRegisterPortUsage(void)
//{
//    mangled_ppc("?Rule_ValidRegisterPortUsage@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_TexRegsDeclaredInOrder(void)
//{
//    mangled_ppc("?Rule_TexRegsDeclaredInOrder@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidLRPInstruction(void)
//{
//    mangled_ppc("?Rule_ValidLRPInstruction@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidDEFInstruction(void)
//{
//    mangled_ppc("?Rule_ValidDEFInstruction@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidInstructionPairing(void)
//{
//    mangled_ppc("?Rule_ValidInstructionPairing@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_ValidInstructionCount(void)
//{
//    mangled_ppc("?Rule_ValidInstructionCount@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_R0Written(void)
//{
//    mangled_ppc("?Rule_R0Written@CPShaderValidator10@@AAA_NXZ");
//};

//private: bool CPShaderValidator10::Rule_LogTextureAndTexcoordUsage(void)
//{
//    mangled_ppc("?Rule_LogTextureAndTexcoordUsage@CPShaderValidator10@@AAA_NXZ");
//};

//public: CPShaderValidator10::~CPShaderValidator10(void)
//{
//    mangled_ppc("??1CPShaderValidator10@@QAA@XZ");
//};

//private: virtual bool CPShaderValidator10::ApplyPerInstructionRules(void)
//{
//    mangled_ppc("?ApplyPerInstructionRules@CPShaderValidator10@@EAA_NXZ");
//};

//private: virtual void CPShaderValidator10::ApplyPostInstructionsRules(void)
//{
//    mangled_ppc("?ApplyPostInstructionsRules@CPShaderValidator10@@EAAXXZ");
//};

