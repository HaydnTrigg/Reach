/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int D3DXShader::CompareValue(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareRegister(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareIndex(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareDependency(unsigned int, unsigned int, void const *);
// int D3DXShader::ComparePredicate(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareRead(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareReadIndex(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareReadStable(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareHash(unsigned int, unsigned int, void const *);
// void D3DXShader::HeapSort(int (*)(unsigned int, unsigned int, void const *), unsigned int *, unsigned int, void const *);
// public: D3DXShader::CProgram::CProgram(int);
// protected: virtual long D3DXShader::CProgram::InitCaps(void);
// protected: virtual long D3DXShader::CProgram::Translate(void);
// protected: virtual long D3DXShader::CProgram::Reschedule(void);
// protected: virtual long D3DXShader::CProgram::Constrain(void);
// private: unsigned int D3DXShader::CProgram::MergeInstructions_Input(class D3DXShader::CInstruction *, unsigned int, unsigned int, int);
// private: void D3DXShader::CProgram::PropagatePredicates_Depth(unsigned int, unsigned int *);
// private: int D3DXShader::CProgram::IsVarying(unsigned int);
// private: long D3DXShader::CProgram::MergePredicates(unsigned int *, int *, unsigned int, int);
// private: int D3DXShader::CProgram::MulSequence(unsigned int, unsigned int);
// private: long D3DXShader::CProgram::AddSequence(unsigned int, unsigned int *, double *);
// private: long D3DXShader::CProgram::RangeSequence(unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
// private: int D3DXShader::CProgram::VectorizeLeft_IsSameRegister(unsigned int, unsigned int);
// private: int D3DXShader::CProgram::VectorizeLeft_IsUsedTogether(unsigned int, unsigned int);
// private: long D3DXShader::CProgram::VectorizeLeft_DotProduct(class D3DXShader::CInstruction *);
// private: long D3DXShader::CProgram::PropagateSwizzles_Unswizzle(unsigned int, unsigned int *, unsigned int, unsigned int *);
// private: unsigned int D3DXShader::CProgram::SeparatePhases_Phases(void);
// private: int D3DXShader::CProgram::SeparatePhases_MoveTex(unsigned int);
// private: void D3DXShader::CProgram::ReorderInstructions_MarkParents(class D3DXShader::CInstruction *, unsigned int *, unsigned int);
// private: void D3DXShader::CProgram::ReorderInstructions_ComputeDependency(class D3DXShader::CInstruction *, unsigned int *, int *, unsigned int);
// private: long D3DXShader::CProgram::ReorderInstructions(unsigned int, unsigned int *, unsigned int *);
// private: double D3DXShader::CProgram::CompactLiterals_GetValue(unsigned int);
// private: unsigned int D3DXShader::CProgram::CompactLiterals_Negate(unsigned int, unsigned int, unsigned int);
// private: unsigned int D3DXShader::CProgram::CompactLiterals_Allocate(unsigned int *, unsigned int, unsigned int, unsigned int, int);
// private: long D3DXShader::CProgram::CompactLiterals_Remap(unsigned int *, unsigned int *, unsigned int);
// private: int D3DXShader::CProgram::CanVectorize_CanRead(unsigned int, class D3DXShader::CInstruction *, unsigned int, unsigned int);
// private: int D3DXShader::CProgram::CanVectorize_IsSameRegister(unsigned int, unsigned int);
// private: unsigned int D3DXShader::CProgram::CanVectorize_TraceMulAdd(unsigned int, double *, double *);
// private: long D3DXShader::CProgram::CombinePools(unsigned int, unsigned long, unsigned long);
// private: int D3DXShader::CProgram::MutuallyExclusive(unsigned int, int, unsigned int, int);
// private: unsigned int D3DXShader::CProgram::CompactPool_Map(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::SwizzleParameter(unsigned int *, unsigned int *, unsigned int, int);
// private: void D3DXShader::CProgram::ReadWriteInfo_ReadInfo(unsigned int, unsigned int);
// private: void D3DXShader::CProgram::ReadWriteInfo_WriteInfo(unsigned int, unsigned int);
// private: long D3DXShader::CProgram::ReadWriteInfo_CommitOrigin(void);
// private: void D3DXShader::CProgram::ParentChildInfo_ParentInfo(unsigned int, unsigned int, int);
// protected: long D3DXShader::CProgram::IdentityRemap(void);
// public: long D3DXShader::CProgram::ChangeAttrib(unsigned short);
// public: long D3DXShader::CProgram::Print(class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CProgram::ApplyTransform(long, char const *);
// private: long D3DXShader::CProgram::Print_Register(unsigned int *, unsigned int, int, unsigned short);
// public: unsigned int D3DXShader::CInstruction::GetSize(void);
// public: int D3DXShader::CInstruction::IsMOV(void);
// public: int D3DXShader::CInstruction::IsNEG(void);
// public: int D3DXShader::CInstruction::IsDOT(void);
// public: int D3DXShader::CInstruction::IsREPEAT(void);
// public: int D3DXShader::CInstruction::IsTernary(void);
// public: int D3DXShader::CInstruction::IsPerComponent(void);
// public: int D3DXShader::CInstruction::IsCombine(void);
// protected: unsigned int D3DXShader::CProgram::Remap(unsigned int);
// protected: unsigned int D3DXShader::CProgram::Origin(unsigned int);
// public: D3DXShader::CTransform::CTransform(class D3DXShader::CProgram *);
// public: virtual D3DXShader::CTransform::~CTransform(void);
// public: virtual long D3DXShader::CTransform::Apply(void);
// merged_83B6F0E0;
// public: D3DXShader::CTReorderInstructions::CTReorderInstructions(class D3DXShader::CProgram *);
// public: virtual D3DXShader::CTReorderInstructions::~CTReorderInstructions(void);
// int D3DXShader::CompareDuplicateInstructions(unsigned int, unsigned int, void const *);
// int D3DXShader::InstructionIsSubset(unsigned int, unsigned int, void const *);
// int D3DXShader::CompareDuplicateInstructionsStable(unsigned int, unsigned int, void const *);
// public: virtual D3DXShader::CProgram::~CProgram(void);
// public: virtual long D3DXShader::CProgram::IndexSemantic(class D3DXShader::CArgument *, int);
// public: long D3DXShader::CProgram::SetName(char const *);
// private: void D3DXShader::CProgram::RemoveDeadCode_Reference(unsigned int, unsigned int);
// private: int D3DXShader::CProgram::SimplifyPredicates_IsEqual(unsigned int, unsigned int);
// protected: long D3DXShader::CProgram::CompactInstructions(void);
// private: long D3DXShader::CProgram::StripVarying(void);
// private: long D3DXShader::CProgram::StripUniform(void);
// public: int D3DXShader::CProgram::InputsAreVRegisters(class D3DXShader::CInstruction *);
// private: long D3DXShader::CProgram::MergePredicates(class D3DXShader::CArgument *, class D3DXShader::CArgument *);
// private: long D3DXShader::CProgram::MergeArguments(unsigned int, unsigned int);
// private: long D3DXShader::CProgram::SimplifyBinary(class D3DXShader::CInstruction *, unsigned int, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::SimplifyTernary(class D3DXShader::CInstruction *, unsigned int, unsigned int, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::SimplifyDotProduct(class D3DXShader::CInstruction *, int);
// private: int D3DXShader::CProgram::VectorizeLeft_IsConflicting(class D3DXShader::CInstruction *, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::VectorizeLeft_PerComponent(class D3DXShader::CInstruction *);
// private: long D3DXShader::CProgram::VectorizeLeft_Special(class D3DXShader::CInstruction *);
// private: long D3DXShader::CProgram::VectorizeLeft_UpdateLinks(class D3DXShader::CInstruction *);
// protected: long D3DXShader::CProgram::PropagateMovs(void);
// private: long D3DXShader::CProgram::CompactLiterals(unsigned int *, unsigned int *, unsigned int *);
// private: unsigned int D3DXShader::CProgram::CompactPool_Score(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int, int, unsigned int *, unsigned int);
// private: void D3DXShader::CProgram::CompactPool_ReadCount(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int);
// private: void D3DXShader::CProgram::CompactPool_WriteCount(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int);
// protected: long D3DXShader::CProgram::CompactPool_End(struct D3DXShader::_D3DXCP_DATA *);
// protected: long D3DXShader::CProgram::ReadWriteInfo(void);
// protected: long D3DXShader::CProgram::ParentChildInfo(void);
// protected: long D3DXShader::CProgram::RemapArguments(void);
// merged_83B74A98;
// merged_83B74AF8;
// public: long D3DXShader::CProgram::Initialize(class D3DXShader::CNode *, class D3DXShader::CTErrors *, unsigned long, unsigned long);
// public: long D3DXShader::CProgram::Initialize(class D3DXShader::CProgram *, unsigned long, unsigned long);
// private: long D3DXShader::CProgram::DeadLinkRemove(void);
// protected: long D3DXShader::CProgram::DelayOutputs(void);
// protected: long D3DXShader::CProgram::RemoveDeadCode(void);
// protected: long D3DXShader::CProgram::RemoveDuplicateArguments(void);
// protected: long D3DXShader::CProgram::SquishInstructions(void);
// protected: long D3DXShader::CProgram::RemoveDuplicateInstructions(int);
// protected: long D3DXShader::CProgram::MergeInstructions(void);
// protected: long D3DXShader::CProgram::SimplifyPredicates(void);
// protected: long D3DXShader::CProgram::PropagatePredicates(void);
// protected: long D3DXShader::CProgram::CompactOutputs(void);
// protected: long D3DXShader::CProgram::CompactArguments(void);
// private: long D3DXShader::CProgram::MarkVarying(void);
// protected: long D3DXShader::CProgram::VectorizeLeft(void);
// protected: long D3DXShader::CProgram::PropagateSwizzles(void);
// protected: long D3DXShader::CProgram::SplitRegisters(int);
// protected: long D3DXShader::CProgram::VectorizeLiterals(void);
// protected: long D3DXShader::CProgram::ReorderInstructions(void);
// protected: long D3DXShader::CProgram::SwizzleRegisters(void);
// protected: long D3DXShader::CProgram::CompactPool_Begin(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int);
// protected: virtual void D3DXShader::CProgram::GetArgumentName(class D3DXShader::CArgument *, char *, unsigned int);
// protected: long D3DXShader::CProgram::Error(class D3DXShader::CNode *, unsigned int, char const *, ...);
// protected: long D3DXShader::CProgram::Warning(class D3DXShader::CNode *, unsigned int, char const *, ...);
// protected: long D3DXShader::CProgram::Validate(void);
// protected: long D3DXShader::CProgram::Split(void);
// protected: long D3DXShader::CProgram::Link(void);
// protected: long D3DXShader::CProgram::ReorderBinary(void);
// protected: long D3DXShader::CProgram::SimplifyAddresses(void);
// private: long D3DXShader::CProgram::SimplifyUnary(class D3DXShader::CInstruction *, unsigned int, unsigned int);
// private: int D3DXShader::CProgram::CanVectorize(unsigned int *, unsigned int, unsigned int *, unsigned int *, class D3DXShader::CInstruction *, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::CompactPool_Read(struct D3DXShader::_D3DXCP_DATA *, unsigned int, int, unsigned int, unsigned int);
// private: long D3DXShader::CProgram::CompactPool_Write(struct D3DXShader::_D3DXCP_DATA *, unsigned int);
// protected: long D3DXShader::CProgram::CompactPool_Process(struct D3DXShader::_D3DXCP_DATA *, int);
// protected: long D3DXShader::CProgram::SimplifyInstructions(void);
// protected: long D3DXShader::CProgram::VectorizeRight(void);
// protected: long D3DXShader::CProgram::CombineInstructions(void);
// protected: long D3DXShader::CProgram::SeparatePhases(void);
// protected: long D3DXShader::CProgram::CompactRegisters(void);
// protected: long D3DXShader::CProgram::Optimize(void);
// protected: long D3DXShader::CProgram::Vectorize(void);
// public: virtual long D3DXShader::CProgram::GenerateCode(struct ID3DXBuffer **);

//int D3DXShader::CompareValue(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareValue@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareRegister(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareRegister@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareIndex(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareIndex@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareDependency(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareDependency@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::ComparePredicate(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?ComparePredicate@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareRead(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareRead@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareReadIndex(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareReadIndex@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareReadStable(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareReadStable@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareHash(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareHash@D3DXShader@@YAHIIPBX@Z");
//};

//void D3DXShader::HeapSort(int (*)(unsigned int, unsigned int, void const *), unsigned int *, unsigned int, void const *)
//{
//    mangled_ppc("?HeapSort@D3DXShader@@YAXP6AHIIPBX@ZPAII0@Z");
//};

//public: D3DXShader::CProgram::CProgram(int)
//{
//    mangled_ppc("??0CProgram@D3DXShader@@QAA@H@Z");
//};

//protected: virtual long D3DXShader::CProgram::InitCaps(void)
//{
//    mangled_ppc("?InitCaps@CProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CProgram::Translate(void)
//{
//    mangled_ppc("?Translate@CProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CProgram::Reschedule(void)
//{
//    mangled_ppc("?Reschedule@CProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CProgram::Constrain(void)
//{
//    mangled_ppc("?Constrain@CProgram@D3DXShader@@MAAJXZ");
//};

//private: unsigned int D3DXShader::CProgram::MergeInstructions_Input(class D3DXShader::CInstruction *, unsigned int, unsigned int, int)
//{
//    mangled_ppc("?MergeInstructions_Input@CProgram@D3DXShader@@AAAIPAVCInstruction@2@IIH@Z");
//};

//private: void D3DXShader::CProgram::PropagatePredicates_Depth(unsigned int, unsigned int *)
//{
//    mangled_ppc("?PropagatePredicates_Depth@CProgram@D3DXShader@@AAAXIPAI@Z");
//};

//private: int D3DXShader::CProgram::IsVarying(unsigned int)
//{
//    mangled_ppc("?IsVarying@CProgram@D3DXShader@@AAAHI@Z");
//};

//private: long D3DXShader::CProgram::MergePredicates(unsigned int *, int *, unsigned int, int)
//{
//    mangled_ppc("?MergePredicates@CProgram@D3DXShader@@AAAJPAIPAHIH@Z");
//};

//private: int D3DXShader::CProgram::MulSequence(unsigned int, unsigned int)
//{
//    mangled_ppc("?MulSequence@CProgram@D3DXShader@@AAAHII@Z");
//};

//private: long D3DXShader::CProgram::AddSequence(unsigned int, unsigned int *, double *)
//{
//    mangled_ppc("?AddSequence@CProgram@D3DXShader@@AAAJIPAIPAN@Z");
//};

//private: long D3DXShader::CProgram::RangeSequence(unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?RangeSequence@CProgram@D3DXShader@@AAAJIPAI0000@Z");
//};

//private: int D3DXShader::CProgram::VectorizeLeft_IsSameRegister(unsigned int, unsigned int)
//{
//    mangled_ppc("?VectorizeLeft_IsSameRegister@CProgram@D3DXShader@@AAAHII@Z");
//};

//private: int D3DXShader::CProgram::VectorizeLeft_IsUsedTogether(unsigned int, unsigned int)
//{
//    mangled_ppc("?VectorizeLeft_IsUsedTogether@CProgram@D3DXShader@@AAAHII@Z");
//};

//private: long D3DXShader::CProgram::VectorizeLeft_DotProduct(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?VectorizeLeft_DotProduct@CProgram@D3DXShader@@AAAJPAVCInstruction@2@@Z");
//};

//private: long D3DXShader::CProgram::PropagateSwizzles_Unswizzle(unsigned int, unsigned int *, unsigned int, unsigned int *)
//{
//    mangled_ppc("?PropagateSwizzles_Unswizzle@CProgram@D3DXShader@@AAAJIPAII0@Z");
//};

//private: unsigned int D3DXShader::CProgram::SeparatePhases_Phases(void)
//{
//    mangled_ppc("?SeparatePhases_Phases@CProgram@D3DXShader@@AAAIXZ");
//};

//private: int D3DXShader::CProgram::SeparatePhases_MoveTex(unsigned int)
//{
//    mangled_ppc("?SeparatePhases_MoveTex@CProgram@D3DXShader@@AAAHI@Z");
//};

//private: void D3DXShader::CProgram::ReorderInstructions_MarkParents(class D3DXShader::CInstruction *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?ReorderInstructions_MarkParents@CProgram@D3DXShader@@AAAXPAVCInstruction@2@PAII@Z");
//};

//private: void D3DXShader::CProgram::ReorderInstructions_ComputeDependency(class D3DXShader::CInstruction *, unsigned int *, int *, unsigned int)
//{
//    mangled_ppc("?ReorderInstructions_ComputeDependency@CProgram@D3DXShader@@AAAXPAVCInstruction@2@PAIPAHI@Z");
//};

//private: long D3DXShader::CProgram::ReorderInstructions(unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?ReorderInstructions@CProgram@D3DXShader@@AAAJIPAI0@Z");
//};

//private: double D3DXShader::CProgram::CompactLiterals_GetValue(unsigned int)
//{
//    mangled_ppc("?CompactLiterals_GetValue@CProgram@D3DXShader@@AAANI@Z");
//};

//private: unsigned int D3DXShader::CProgram::CompactLiterals_Negate(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactLiterals_Negate@CProgram@D3DXShader@@AAAIIII@Z");
//};

//private: unsigned int D3DXShader::CProgram::CompactLiterals_Allocate(unsigned int *, unsigned int, unsigned int, unsigned int, int)
//{
//    mangled_ppc("?CompactLiterals_Allocate@CProgram@D3DXShader@@AAAIPAIIIIH@Z");
//};

//private: long D3DXShader::CProgram::CompactLiterals_Remap(unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?CompactLiterals_Remap@CProgram@D3DXShader@@AAAJPAI0I@Z");
//};

//private: int D3DXShader::CProgram::CanVectorize_CanRead(unsigned int, class D3DXShader::CInstruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CanVectorize_CanRead@CProgram@D3DXShader@@AAAHIPAVCInstruction@2@II@Z");
//};

//private: int D3DXShader::CProgram::CanVectorize_IsSameRegister(unsigned int, unsigned int)
//{
//    mangled_ppc("?CanVectorize_IsSameRegister@CProgram@D3DXShader@@AAAHII@Z");
//};

//private: unsigned int D3DXShader::CProgram::CanVectorize_TraceMulAdd(unsigned int, double *, double *)
//{
//    mangled_ppc("?CanVectorize_TraceMulAdd@CProgram@D3DXShader@@AAAIIPAN0@Z");
//};

//private: long D3DXShader::CProgram::CombinePools(unsigned int, unsigned long, unsigned long)
//{
//    mangled_ppc("?CombinePools@CProgram@D3DXShader@@AAAJIKK@Z");
//};

//private: int D3DXShader::CProgram::MutuallyExclusive(unsigned int, int, unsigned int, int)
//{
//    mangled_ppc("?MutuallyExclusive@CProgram@D3DXShader@@AAAHIHIH@Z");
//};

//private: unsigned int D3DXShader::CProgram::CompactPool_Map(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactPool_Map@CProgram@D3DXShader@@AAAIPAU_D3DXCP_DATA@2@III@Z");
//};

//private: long D3DXShader::CProgram::SwizzleParameter(unsigned int *, unsigned int *, unsigned int, int)
//{
//    mangled_ppc("?SwizzleParameter@CProgram@D3DXShader@@AAAJPAI0IH@Z");
//};

//private: void D3DXShader::CProgram::ReadWriteInfo_ReadInfo(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReadWriteInfo_ReadInfo@CProgram@D3DXShader@@AAAXII@Z");
//};

//private: void D3DXShader::CProgram::ReadWriteInfo_WriteInfo(unsigned int, unsigned int)
//{
//    mangled_ppc("?ReadWriteInfo_WriteInfo@CProgram@D3DXShader@@AAAXII@Z");
//};

//private: long D3DXShader::CProgram::ReadWriteInfo_CommitOrigin(void)
//{
//    mangled_ppc("?ReadWriteInfo_CommitOrigin@CProgram@D3DXShader@@AAAJXZ");
//};

//private: void D3DXShader::CProgram::ParentChildInfo_ParentInfo(unsigned int, unsigned int, int)
//{
//    mangled_ppc("?ParentChildInfo_ParentInfo@CProgram@D3DXShader@@AAAXIIH@Z");
//};

//protected: long D3DXShader::CProgram::IdentityRemap(void)
//{
//    mangled_ppc("?IdentityRemap@CProgram@D3DXShader@@IAAJXZ");
//};

//public: long D3DXShader::CProgram::ChangeAttrib(unsigned short)
//{
//    mangled_ppc("?ChangeAttrib@CProgram@D3DXShader@@QAAJG@Z");
//};

//public: long D3DXShader::CProgram::Print(class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?Print@CProgram@D3DXShader@@QAAJPAPAVCInstruction@2@I@Z");
//};

//protected: long D3DXShader::CProgram::ApplyTransform(long, char const *)
//{
//    mangled_ppc("?ApplyTransform@CProgram@D3DXShader@@IAAJJPBD@Z");
//};

//private: long D3DXShader::CProgram::Print_Register(unsigned int *, unsigned int, int, unsigned short)
//{
//    mangled_ppc("?Print_Register@CProgram@D3DXShader@@AAAJPAIIHG@Z");
//};

//public: unsigned int D3DXShader::CInstruction::GetSize(void)
//{
//    mangled_ppc("?GetSize@CInstruction@D3DXShader@@QAAIXZ");
//};

//public: int D3DXShader::CInstruction::IsMOV(void)
//{
//    mangled_ppc("?IsMOV@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsNEG(void)
//{
//    mangled_ppc("?IsNEG@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsDOT(void)
//{
//    mangled_ppc("?IsDOT@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsREPEAT(void)
//{
//    mangled_ppc("?IsREPEAT@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsTernary(void)
//{
//    mangled_ppc("?IsTernary@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsPerComponent(void)
//{
//    mangled_ppc("?IsPerComponent@CInstruction@D3DXShader@@QAAHXZ");
//};

//public: int D3DXShader::CInstruction::IsCombine(void)
//{
//    mangled_ppc("?IsCombine@CInstruction@D3DXShader@@QAAHXZ");
//};

//protected: unsigned int D3DXShader::CProgram::Remap(unsigned int)
//{
//    mangled_ppc("?Remap@CProgram@D3DXShader@@IAAII@Z");
//};

//protected: unsigned int D3DXShader::CProgram::Origin(unsigned int)
//{
//    mangled_ppc("?Origin@CProgram@D3DXShader@@IAAII@Z");
//};

//public: D3DXShader::CTransform::CTransform(class D3DXShader::CProgram *)
//{
//    mangled_ppc("??0CTransform@D3DXShader@@QAA@PAVCProgram@1@@Z");
//};

//public: virtual D3DXShader::CTransform::~CTransform(void)
//{
//    mangled_ppc("??1CTransform@D3DXShader@@UAA@XZ");
//};

//public: virtual long D3DXShader::CTransform::Apply(void)
//{
//    mangled_ppc("?Apply@CTransform@D3DXShader@@UAAJXZ");
//};

//merged_83B6F0E0
//{
//    mangled_ppc("merged_83B6F0E0");
//};

//public: D3DXShader::CTReorderInstructions::CTReorderInstructions(class D3DXShader::CProgram *)
//{
//    mangled_ppc("??0CTReorderInstructions@D3DXShader@@QAA@PAVCProgram@1@@Z");
//};

//public: virtual D3DXShader::CTReorderInstructions::~CTReorderInstructions(void)
//{
//    mangled_ppc("??1CTReorderInstructions@D3DXShader@@UAA@XZ");
//};

//int D3DXShader::CompareDuplicateInstructions(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareDuplicateInstructions@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::InstructionIsSubset(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?InstructionIsSubset@D3DXShader@@YAHIIPBX@Z");
//};

//int D3DXShader::CompareDuplicateInstructionsStable(unsigned int, unsigned int, void const *)
//{
//    mangled_ppc("?CompareDuplicateInstructionsStable@D3DXShader@@YAHIIPBX@Z");
//};

//public: virtual D3DXShader::CProgram::~CProgram(void)
//{
//    mangled_ppc("??1CProgram@D3DXShader@@UAA@XZ");
//};

//public: virtual long D3DXShader::CProgram::IndexSemantic(class D3DXShader::CArgument *, int)
//{
//    mangled_ppc("?IndexSemantic@CProgram@D3DXShader@@UAAJPAVCArgument@2@H@Z");
//};

//public: long D3DXShader::CProgram::SetName(char const *)
//{
//    mangled_ppc("?SetName@CProgram@D3DXShader@@QAAJPBD@Z");
//};

//private: void D3DXShader::CProgram::RemoveDeadCode_Reference(unsigned int, unsigned int)
//{
//    mangled_ppc("?RemoveDeadCode_Reference@CProgram@D3DXShader@@AAAXII@Z");
//};

//private: int D3DXShader::CProgram::SimplifyPredicates_IsEqual(unsigned int, unsigned int)
//{
//    mangled_ppc("?SimplifyPredicates_IsEqual@CProgram@D3DXShader@@AAAHII@Z");
//};

//protected: long D3DXShader::CProgram::CompactInstructions(void)
//{
//    mangled_ppc("?CompactInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//private: long D3DXShader::CProgram::StripVarying(void)
//{
//    mangled_ppc("?StripVarying@CProgram@D3DXShader@@AAAJXZ");
//};

//private: long D3DXShader::CProgram::StripUniform(void)
//{
//    mangled_ppc("?StripUniform@CProgram@D3DXShader@@AAAJXZ");
//};

//public: int D3DXShader::CProgram::InputsAreVRegisters(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?InputsAreVRegisters@CProgram@D3DXShader@@QAAHPAVCInstruction@2@@Z");
//};

//private: long D3DXShader::CProgram::MergePredicates(class D3DXShader::CArgument *, class D3DXShader::CArgument *)
//{
//    mangled_ppc("?MergePredicates@CProgram@D3DXShader@@AAAJPAVCArgument@2@0@Z");
//};

//private: long D3DXShader::CProgram::MergeArguments(unsigned int, unsigned int)
//{
//    mangled_ppc("?MergeArguments@CProgram@D3DXShader@@AAAJII@Z");
//};

//private: long D3DXShader::CProgram::SimplifyBinary(class D3DXShader::CInstruction *, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SimplifyBinary@CProgram@D3DXShader@@AAAJPAVCInstruction@2@III@Z");
//};

//private: long D3DXShader::CProgram::SimplifyTernary(class D3DXShader::CInstruction *, unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?SimplifyTernary@CProgram@D3DXShader@@AAAJPAVCInstruction@2@IIII@Z");
//};

//private: long D3DXShader::CProgram::SimplifyDotProduct(class D3DXShader::CInstruction *, int)
//{
//    mangled_ppc("?SimplifyDotProduct@CProgram@D3DXShader@@AAAJPAVCInstruction@2@H@Z");
//};

//private: int D3DXShader::CProgram::VectorizeLeft_IsConflicting(class D3DXShader::CInstruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?VectorizeLeft_IsConflicting@CProgram@D3DXShader@@AAAHPAVCInstruction@2@II@Z");
//};

//private: long D3DXShader::CProgram::VectorizeLeft_PerComponent(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?VectorizeLeft_PerComponent@CProgram@D3DXShader@@AAAJPAVCInstruction@2@@Z");
//};

//private: long D3DXShader::CProgram::VectorizeLeft_Special(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?VectorizeLeft_Special@CProgram@D3DXShader@@AAAJPAVCInstruction@2@@Z");
//};

//private: long D3DXShader::CProgram::VectorizeLeft_UpdateLinks(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?VectorizeLeft_UpdateLinks@CProgram@D3DXShader@@AAAJPAVCInstruction@2@@Z");
//};

//protected: long D3DXShader::CProgram::PropagateMovs(void)
//{
//    mangled_ppc("?PropagateMovs@CProgram@D3DXShader@@IAAJXZ");
//};

//private: long D3DXShader::CProgram::CompactLiterals(unsigned int *, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?CompactLiterals@CProgram@D3DXShader@@AAAJPAI00@Z");
//};

//private: unsigned int D3DXShader::CProgram::CompactPool_Score(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int, int, unsigned int *, unsigned int)
//{
//    mangled_ppc("?CompactPool_Score@CProgram@D3DXShader@@AAAIPAU_D3DXCP_DATA@2@IIHPAII@Z");
//};

//private: void D3DXShader::CProgram::CompactPool_ReadCount(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactPool_ReadCount@CProgram@D3DXShader@@AAAXPAU_D3DXCP_DATA@2@II@Z");
//};

//private: void D3DXShader::CProgram::CompactPool_WriteCount(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactPool_WriteCount@CProgram@D3DXShader@@AAAXPAU_D3DXCP_DATA@2@II@Z");
//};

//protected: long D3DXShader::CProgram::CompactPool_End(struct D3DXShader::_D3DXCP_DATA *)
//{
//    mangled_ppc("?CompactPool_End@CProgram@D3DXShader@@IAAJPAU_D3DXCP_DATA@2@@Z");
//};

//protected: long D3DXShader::CProgram::ReadWriteInfo(void)
//{
//    mangled_ppc("?ReadWriteInfo@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::ParentChildInfo(void)
//{
//    mangled_ppc("?ParentChildInfo@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::RemapArguments(void)
//{
//    mangled_ppc("?RemapArguments@CProgram@D3DXShader@@IAAJXZ");
//};

//merged_83B74A98
//{
//    mangled_ppc("merged_83B74A98");
//};

//merged_83B74AF8
//{
//    mangled_ppc("merged_83B74AF8");
//};

//public: long D3DXShader::CProgram::Initialize(class D3DXShader::CNode *, class D3DXShader::CTErrors *, unsigned long, unsigned long)
//{
//    mangled_ppc("?Initialize@CProgram@D3DXShader@@QAAJPAVCNode@2@PAVCTErrors@2@KK@Z");
//};

//public: long D3DXShader::CProgram::Initialize(class D3DXShader::CProgram *, unsigned long, unsigned long)
//{
//    mangled_ppc("?Initialize@CProgram@D3DXShader@@QAAJPAV12@KK@Z");
//};

//private: long D3DXShader::CProgram::DeadLinkRemove(void)
//{
//    mangled_ppc("?DeadLinkRemove@CProgram@D3DXShader@@AAAJXZ");
//};

//protected: long D3DXShader::CProgram::DelayOutputs(void)
//{
//    mangled_ppc("?DelayOutputs@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::RemoveDeadCode(void)
//{
//    mangled_ppc("?RemoveDeadCode@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::RemoveDuplicateArguments(void)
//{
//    mangled_ppc("?RemoveDuplicateArguments@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SquishInstructions(void)
//{
//    mangled_ppc("?SquishInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::RemoveDuplicateInstructions(int)
//{
//    mangled_ppc("?RemoveDuplicateInstructions@CProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CProgram::MergeInstructions(void)
//{
//    mangled_ppc("?MergeInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SimplifyPredicates(void)
//{
//    mangled_ppc("?SimplifyPredicates@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::PropagatePredicates(void)
//{
//    mangled_ppc("?PropagatePredicates@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::CompactOutputs(void)
//{
//    mangled_ppc("?CompactOutputs@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::CompactArguments(void)
//{
//    mangled_ppc("?CompactArguments@CProgram@D3DXShader@@IAAJXZ");
//};

//private: long D3DXShader::CProgram::MarkVarying(void)
//{
//    mangled_ppc("?MarkVarying@CProgram@D3DXShader@@AAAJXZ");
//};

//protected: long D3DXShader::CProgram::VectorizeLeft(void)
//{
//    mangled_ppc("?VectorizeLeft@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::PropagateSwizzles(void)
//{
//    mangled_ppc("?PropagateSwizzles@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SplitRegisters(int)
//{
//    mangled_ppc("?SplitRegisters@CProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CProgram::VectorizeLiterals(void)
//{
//    mangled_ppc("?VectorizeLiterals@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::ReorderInstructions(void)
//{
//    mangled_ppc("?ReorderInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SwizzleRegisters(void)
//{
//    mangled_ppc("?SwizzleRegisters@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::CompactPool_Begin(struct D3DXShader::_D3DXCP_DATA *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactPool_Begin@CProgram@D3DXShader@@IAAJPAU_D3DXCP_DATA@2@II@Z");
//};

//protected: virtual void D3DXShader::CProgram::GetArgumentName(class D3DXShader::CArgument *, char *, unsigned int)
//{
//    mangled_ppc("?GetArgumentName@CProgram@D3DXShader@@MAAXPAVCArgument@2@PADI@Z");
//};

//protected: long D3DXShader::CProgram::Error(class D3DXShader::CNode *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Error@CProgram@D3DXShader@@IAAJPAVCNode@2@IPBDZZ");
//};

//protected: long D3DXShader::CProgram::Warning(class D3DXShader::CNode *, unsigned int, char const *, ...)
//{
//    mangled_ppc("?Warning@CProgram@D3DXShader@@IAAJPAVCNode@2@IPBDZZ");
//};

//protected: long D3DXShader::CProgram::Validate(void)
//{
//    mangled_ppc("?Validate@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::Split(void)
//{
//    mangled_ppc("?Split@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::Link(void)
//{
//    mangled_ppc("?Link@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::ReorderBinary(void)
//{
//    mangled_ppc("?ReorderBinary@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SimplifyAddresses(void)
//{
//    mangled_ppc("?SimplifyAddresses@CProgram@D3DXShader@@IAAJXZ");
//};

//private: long D3DXShader::CProgram::SimplifyUnary(class D3DXShader::CInstruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SimplifyUnary@CProgram@D3DXShader@@AAAJPAVCInstruction@2@II@Z");
//};

//private: int D3DXShader::CProgram::CanVectorize(unsigned int *, unsigned int, unsigned int *, unsigned int *, class D3DXShader::CInstruction *, unsigned int, unsigned int)
//{
//    mangled_ppc("?CanVectorize@CProgram@D3DXShader@@AAAHPAII00PAVCInstruction@2@II@Z");
//};

//private: long D3DXShader::CProgram::CompactPool_Read(struct D3DXShader::_D3DXCP_DATA *, unsigned int, int, unsigned int, unsigned int)
//{
//    mangled_ppc("?CompactPool_Read@CProgram@D3DXShader@@AAAJPAU_D3DXCP_DATA@2@IHII@Z");
//};

//private: long D3DXShader::CProgram::CompactPool_Write(struct D3DXShader::_D3DXCP_DATA *, unsigned int)
//{
//    mangled_ppc("?CompactPool_Write@CProgram@D3DXShader@@AAAJPAU_D3DXCP_DATA@2@I@Z");
//};

//protected: long D3DXShader::CProgram::CompactPool_Process(struct D3DXShader::_D3DXCP_DATA *, int)
//{
//    mangled_ppc("?CompactPool_Process@CProgram@D3DXShader@@IAAJPAU_D3DXCP_DATA@2@H@Z");
//};

//protected: long D3DXShader::CProgram::SimplifyInstructions(void)
//{
//    mangled_ppc("?SimplifyInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::VectorizeRight(void)
//{
//    mangled_ppc("?VectorizeRight@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::CombineInstructions(void)
//{
//    mangled_ppc("?CombineInstructions@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::SeparatePhases(void)
//{
//    mangled_ppc("?SeparatePhases@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::CompactRegisters(void)
//{
//    mangled_ppc("?CompactRegisters@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::Optimize(void)
//{
//    mangled_ppc("?Optimize@CProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CProgram::Vectorize(void)
//{
//    mangled_ppc("?Vectorize@CProgram@D3DXShader@@IAAJXZ");
//};

//public: virtual long D3DXShader::CProgram::GenerateCode(struct ID3DXBuffer **)
//{
//    mangled_ppc("?GenerateCode@CProgram@D3DXShader@@UAAJPAPAUID3DXBuffer@@@Z");
//};

