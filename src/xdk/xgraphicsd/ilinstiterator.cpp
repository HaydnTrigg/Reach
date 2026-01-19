/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void XGRAPHICS::InitTargets(int *);
// void XGRAPHICS::AddTarget(int *, int);
// int XGRAPHICS::GetMerge(int *);
// void XGRAPHICS::SubtractTarget(int *, int);
// private: enum XGRAPHICS::ILInstIterator::BOOL_VAL XGRAPHICS::ILInstIterator::GetBool(int);
// public: static void * XGRAPHICS::stack<unsigned int *>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<unsigned int *>::operator delete(void *);
// public: static void * XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::operator new(unsigned int, class XGRAPHICS::Arena const *);
// public: static void XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::operator delete(void *);
// public: void XGRAPHICS::Compiler::SetEnableMultipassExport(int);
// public: static union XGRAPHICS::IL_Lang * XGRAPHICS::ILFormatDecode::AsLanguage(unsigned int const *);
// public: static union XGRAPHICS::IL_Dst * XGRAPHICS::ILFormatDecode::AsDest(unsigned int const *);
// private: static bool XGRAPHICS::ILFormatDecode::Validate(enum XGRAPHICS::ILOpCode);
// public: static void XGRAPHICS::ILFormatDecode::SetLanguage(unsigned int const *);
// public: static void XGRAPHICS::ILFormatDecode::SetVersion(unsigned int const *, class XGRAPHICS::Compiler *);
// public: static bool XGRAPHICS::ILFormatDecode::IsPixelShader(unsigned int const *);
// public: static union XGRAPHICS::IL_Label * XGRAPHICS::ILFormatDecode::AsLabel(unsigned int const *);
// public: static union XGRAPHICS::IL_Comment_Descriptor * XGRAPHICS::ILFormatDecode::AsComment(unsigned int const *);
// public: static union XGRAPHICS::IL_Precomp_Descriptor * XGRAPHICS::ILFormatDecode::AsPrecomp(unsigned int const *);
// public: static union XGRAPHICS::IL_Src * XGRAPHICS::ILFormatDecode::AsSource(unsigned int const *);
// public: static enum XGRAPHICS::ILOpCode XGRAPHICS::ILFormatDecode::GetOp(unsigned int const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetLabel(union XGRAPHICS::IL_Label const *);
// public: static short XGRAPHICS::ILFormatDecode::RegisterNumber(union XGRAPHICS::IL_Src const *);
// public: static int XGRAPHICS::ILFormatDecode::NumTokens(union XGRAPHICS::IL_Comment_Descriptor const *);
// public: static unsigned int XGRAPHICS::ILFormatDecode::GetTarget(unsigned int const *);
// public: static void XGRAPHICS::ILFormatEncode::Op(unsigned int *, enum XGRAPHICS::ILOpCode);
// public: static void XGRAPHICS::ILFormatEncode::Copy(unsigned int *, unsigned int *);
// public: static bool XGRAPHICS::ILFormatDecode::IsIf(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsElse(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsEndIf(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsDefB(unsigned int const *);
// private: void XGRAPHICS::ILInstIterator::SkipComments(void);
// private: void XGRAPHICS::ILInstIterator::NextStatement(void);
// private: void XGRAPHICS::ILInstIterator::SetBool(int, bool);
// public: XGRAPHICS::stack<unsigned int *>::stack<unsigned int *>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<unsigned int *>::~stack<unsigned int *>(void);
// public: XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::stack<enum XGRAPHICS::ILBranchDirection>(class XGRAPHICS::Arena const *);
// public: XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::~stack<enum XGRAPHICS::ILBranchDirection>(void);
// public: int XGRAPHICS::stack<unsigned int *>::Size(void) const;
// public: int XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Size(void) const;
// public: static union XGRAPHICS::IL_Version * XGRAPHICS::ILFormatDecode::AsVersion(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsCall(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsJmp(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsFunc(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsTarget(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsRet(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsEndMain(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsCloseScope(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsOpenScope(unsigned int const *);
// public: static bool XGRAPHICS::ILFormatDecode::IsEnd(unsigned int const *);
// public: XGRAPHICS::ILInstIterator::ILInstIterator(unsigned int *, class XGRAPHICS::Compiler *);
// public: void * XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::`scalar deleting destructor'(unsigned int);
// public: void * XGRAPHICS::stack<unsigned int *>::`scalar deleting destructor'(unsigned int);
// public: bool XGRAPHICS::stack<unsigned int *>::Empty(void) const;
// public: void XGRAPHICS::stack<unsigned int *>::Push(unsigned int *);
// public: unsigned int * XGRAPHICS::stack<unsigned int *>::Pop(void);
// public: enum XGRAPHICS::ILBranchDirection & XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Top(void);
// public: void XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Push(enum XGRAPHICS::ILBranchDirection);
// public: enum XGRAPHICS::ILBranchDirection XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Pop(void);
// public: XGRAPHICS::ILInstIterator::~ILInstIterator(void);
// public: bool XGRAPHICS::ILInstIterator::Step(void);

//void XGRAPHICS::InitTargets(int *)
//{
//    mangled_ppc("?InitTargets@XGRAPHICS@@YAXPAH@Z");
//};

//void XGRAPHICS::AddTarget(int *, int)
//{
//    mangled_ppc("?AddTarget@XGRAPHICS@@YAXPAHH@Z");
//};

//int XGRAPHICS::GetMerge(int *)
//{
//    mangled_ppc("?GetMerge@XGRAPHICS@@YAHPAH@Z");
//};

//void XGRAPHICS::SubtractTarget(int *, int)
//{
//    mangled_ppc("?SubtractTarget@XGRAPHICS@@YAXPAHH@Z");
//};

//private: enum XGRAPHICS::ILInstIterator::BOOL_VAL XGRAPHICS::ILInstIterator::GetBool(int)
//{
//    mangled_ppc("?GetBool@ILInstIterator@XGRAPHICS@@AAA?AW4BOOL_VAL@12@H@Z");
//};

//public: static void * XGRAPHICS::stack<unsigned int *>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@PAI@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<unsigned int *>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@PAI@XGRAPHICS@@SAXPAX@Z");
//};

//public: static void * XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::operator new(unsigned int, class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??2?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@SAPAXIPBVArena@1@@Z");
//};

//public: static void XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::operator delete(void *)
//{
//    mangled_ppc("??3?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@SAXPAX@Z");
//};

//public: void XGRAPHICS::Compiler::SetEnableMultipassExport(int)
//{
//    mangled_ppc("?SetEnableMultipassExport@Compiler@XGRAPHICS@@QAAXH@Z");
//};

//public: static union XGRAPHICS::IL_Lang * XGRAPHICS::ILFormatDecode::AsLanguage(unsigned int const *)
//{
//    mangled_ppc("?AsLanguage@ILFormatDecode@XGRAPHICS@@SAPATIL_Lang@2@PBI@Z");
//};

//public: static union XGRAPHICS::IL_Dst * XGRAPHICS::ILFormatDecode::AsDest(unsigned int const *)
//{
//    mangled_ppc("?AsDest@ILFormatDecode@XGRAPHICS@@SAPATIL_Dst@2@PBI@Z");
//};

//private: static bool XGRAPHICS::ILFormatDecode::Validate(enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?Validate@ILFormatDecode@XGRAPHICS@@CA_NW4ILOpCode@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::SetLanguage(unsigned int const *)
//{
//    mangled_ppc("?SetLanguage@ILFormatDecode@XGRAPHICS@@SAXPBI@Z");
//};

//public: static void XGRAPHICS::ILFormatDecode::SetVersion(unsigned int const *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("?SetVersion@ILFormatDecode@XGRAPHICS@@SAXPBIPAVCompiler@2@@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsPixelShader(unsigned int const *)
//{
//    mangled_ppc("?IsPixelShader@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static union XGRAPHICS::IL_Label * XGRAPHICS::ILFormatDecode::AsLabel(unsigned int const *)
//{
//    mangled_ppc("?AsLabel@ILFormatDecode@XGRAPHICS@@SAPATIL_Label@2@PBI@Z");
//};

//public: static union XGRAPHICS::IL_Comment_Descriptor * XGRAPHICS::ILFormatDecode::AsComment(unsigned int const *)
//{
//    mangled_ppc("?AsComment@ILFormatDecode@XGRAPHICS@@SAPATIL_Comment_Descriptor@2@PBI@Z");
//};

//public: static union XGRAPHICS::IL_Precomp_Descriptor * XGRAPHICS::ILFormatDecode::AsPrecomp(unsigned int const *)
//{
//    mangled_ppc("?AsPrecomp@ILFormatDecode@XGRAPHICS@@SAPATIL_Precomp_Descriptor@2@PBI@Z");
//};

//public: static union XGRAPHICS::IL_Src * XGRAPHICS::ILFormatDecode::AsSource(unsigned int const *)
//{
//    mangled_ppc("?AsSource@ILFormatDecode@XGRAPHICS@@SAPATIL_Src@2@PBI@Z");
//};

//public: static enum XGRAPHICS::ILOpCode XGRAPHICS::ILFormatDecode::GetOp(unsigned int const *)
//{
//    mangled_ppc("?GetOp@ILFormatDecode@XGRAPHICS@@SA?AW4ILOpCode@2@PBI@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetLabel(union XGRAPHICS::IL_Label const *)
//{
//    mangled_ppc("?GetLabel@ILFormatDecode@XGRAPHICS@@SAIPBTIL_Label@2@@Z");
//};

//public: static short XGRAPHICS::ILFormatDecode::RegisterNumber(union XGRAPHICS::IL_Src const *)
//{
//    mangled_ppc("?RegisterNumber@ILFormatDecode@XGRAPHICS@@SAFPBTIL_Src@2@@Z");
//};

//public: static int XGRAPHICS::ILFormatDecode::NumTokens(union XGRAPHICS::IL_Comment_Descriptor const *)
//{
//    mangled_ppc("?NumTokens@ILFormatDecode@XGRAPHICS@@SAHPBTIL_Comment_Descriptor@2@@Z");
//};

//public: static unsigned int XGRAPHICS::ILFormatDecode::GetTarget(unsigned int const *)
//{
//    mangled_ppc("?GetTarget@ILFormatDecode@XGRAPHICS@@SAIPBI@Z");
//};

//public: static void XGRAPHICS::ILFormatEncode::Op(unsigned int *, enum XGRAPHICS::ILOpCode)
//{
//    mangled_ppc("?Op@ILFormatEncode@XGRAPHICS@@SAXPAIW4ILOpCode@2@@Z");
//};

//public: static void XGRAPHICS::ILFormatEncode::Copy(unsigned int *, unsigned int *)
//{
//    mangled_ppc("?Copy@ILFormatEncode@XGRAPHICS@@SAXPAI0@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsIf(unsigned int const *)
//{
//    mangled_ppc("?IsIf@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsElse(unsigned int const *)
//{
//    mangled_ppc("?IsElse@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsEndIf(unsigned int const *)
//{
//    mangled_ppc("?IsEndIf@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsDefB(unsigned int const *)
//{
//    mangled_ppc("?IsDefB@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//private: void XGRAPHICS::ILInstIterator::SkipComments(void)
//{
//    mangled_ppc("?SkipComments@ILInstIterator@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::ILInstIterator::NextStatement(void)
//{
//    mangled_ppc("?NextStatement@ILInstIterator@XGRAPHICS@@AAAXXZ");
//};

//private: void XGRAPHICS::ILInstIterator::SetBool(int, bool)
//{
//    mangled_ppc("?SetBool@ILInstIterator@XGRAPHICS@@AAAXH_N@Z");
//};

//public: XGRAPHICS::stack<unsigned int *>::stack<unsigned int *>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@PAI@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<unsigned int *>::~stack<unsigned int *>(void)
//{
//    mangled_ppc("??1?$stack@PAI@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::stack<enum XGRAPHICS::ILBranchDirection>(class XGRAPHICS::Arena const *)
//{
//    mangled_ppc("??0?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAA@PBVArena@1@@Z");
//};

//public: XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::~stack<enum XGRAPHICS::ILBranchDirection>(void)
//{
//    mangled_ppc("??1?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAA@XZ");
//};

//public: int XGRAPHICS::stack<unsigned int *>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@PAI@XGRAPHICS@@QBAHXZ");
//};

//public: int XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Size(void) const
//{
//    mangled_ppc("?Size@?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QBAHXZ");
//};

//public: static union XGRAPHICS::IL_Version * XGRAPHICS::ILFormatDecode::AsVersion(unsigned int const *)
//{
//    mangled_ppc("?AsVersion@ILFormatDecode@XGRAPHICS@@SAPATIL_Version@2@PBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsCall(unsigned int const *)
//{
//    mangled_ppc("?IsCall@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsJmp(unsigned int const *)
//{
//    mangled_ppc("?IsJmp@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsFunc(unsigned int const *)
//{
//    mangled_ppc("?IsFunc@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsTarget(unsigned int const *)
//{
//    mangled_ppc("?IsTarget@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsRet(unsigned int const *)
//{
//    mangled_ppc("?IsRet@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsEndMain(unsigned int const *)
//{
//    mangled_ppc("?IsEndMain@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsCloseScope(unsigned int const *)
//{
//    mangled_ppc("?IsCloseScope@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsOpenScope(unsigned int const *)
//{
//    mangled_ppc("?IsOpenScope@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: static bool XGRAPHICS::ILFormatDecode::IsEnd(unsigned int const *)
//{
//    mangled_ppc("?IsEnd@ILFormatDecode@XGRAPHICS@@SA_NPBI@Z");
//};

//public: XGRAPHICS::ILInstIterator::ILInstIterator(unsigned int *, class XGRAPHICS::Compiler *)
//{
//    mangled_ppc("??0ILInstIterator@XGRAPHICS@@QAA@PAIPAVCompiler@1@@Z");
//};

//public: void * XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAAPAXI@Z");
//};

//public: void * XGRAPHICS::stack<unsigned int *>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$stack@PAI@XGRAPHICS@@QAAPAXI@Z");
//};

//public: bool XGRAPHICS::stack<unsigned int *>::Empty(void) const
//{
//    mangled_ppc("?Empty@?$stack@PAI@XGRAPHICS@@QBA_NXZ");
//};

//public: void XGRAPHICS::stack<unsigned int *>::Push(unsigned int *)
//{
//    mangled_ppc("?Push@?$stack@PAI@XGRAPHICS@@QAAXPAI@Z");
//};

//public: unsigned int * XGRAPHICS::stack<unsigned int *>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@PAI@XGRAPHICS@@QAAPAIXZ");
//};

//public: enum XGRAPHICS::ILBranchDirection & XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Top(void)
//{
//    mangled_ppc("?Top@?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAAAAW4ILBranchDirection@2@XZ");
//};

//public: void XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Push(enum XGRAPHICS::ILBranchDirection)
//{
//    mangled_ppc("?Push@?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAAXW4ILBranchDirection@2@@Z");
//};

//public: enum XGRAPHICS::ILBranchDirection XGRAPHICS::stack<enum XGRAPHICS::ILBranchDirection>::Pop(void)
//{
//    mangled_ppc("?Pop@?$stack@W4ILBranchDirection@XGRAPHICS@@@XGRAPHICS@@QAA?AW4ILBranchDirection@2@XZ");
//};

//public: XGRAPHICS::ILInstIterator::~ILInstIterator(void)
//{
//    mangled_ppc("??1ILInstIterator@XGRAPHICS@@QAA@XZ");
//};

//public: bool XGRAPHICS::ILInstIterator::Step(void)
//{
//    mangled_ppc("?Step@ILInstIterator@XGRAPHICS@@QAA_NXZ");
//};

