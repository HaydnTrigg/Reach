/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int *D3DXShader::g_LegacySwizzle; // "?g_LegacySwizzle@D3DXShader@@3PAIA"
// unsigned int *D3DXShader::g_SwizzleL; // "?g_SwizzleL@D3DXShader@@3PAIA"

// int D3DXShader::IsTextureInst(unsigned int);
// public: D3DXShader::CPSLegacyProgram::CPSLegacyProgram(int);
// protected: virtual long D3DXShader::CPSLegacyProgram::InitCaps(void);
// protected: virtual long D3DXShader::CPSLegacyProgram::Reschedule(void);
// protected: long D3DXShader::CPSLegacyProgram::ValidateTexSat(void);
// protected: long D3DXShader::CPSLegacyProgram::CleanUpClip(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchClip(void);
// protected: long D3DXShader::CPSLegacyProgram::FixSatTex(void);
// protected: long D3DXShader::CPSLegacyProgram::FixNeg(void);
// protected: long D3DXShader::CPSLegacyProgram::PackOutput(void);
// protected: long D3DXShader::CPSLegacyProgram::MovConsts(void);
// protected: int D3DXShader::CPSLegacyProgram::ValidSwizzle(unsigned int *, unsigned int *);
// int D3DXShader::IsValidWriteMask(unsigned int *, unsigned long);
// int D3DXShader::IsValidDotWriteMask(unsigned int *, unsigned long);
// int D3DXShader::IsValidSwizzle(unsigned int *, unsigned int *, unsigned int);
// protected: int D3DXShader::CPSLegacyProgram::HasWriteMask(class D3DXShader::CInstruction *);
// protected: long D3DXShader::CPSLegacyProgram::EmmulateReplicate(void);
// protected: long D3DXShader::CPSLegacyProgram::FixPortConstraintsAndFixCMP(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchTexReflect(int);
// protected: long D3DXShader::CPSLegacyProgram::ValidateInstructions(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchCMP(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchComplexAdd(void);
// long D3DXShader::AddChild(class D3DXShader::CInstruction *, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::LegacyChildParentInfo(class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::RemapInput(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
// protected: long D3DXShader::CPSLegacyProgram::RemapInputTex(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
// protected: long D3DXShader::CPSLegacyProgram::PullOut(unsigned int *, unsigned int, class D3DXShader::CInstruction **, unsigned int *);
// protected: unsigned int D3DXShader::CPSLegacyProgram::RegReassign(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, class D3DXShader::CArgument *, int &);
// protected: long D3DXShader::CPSLegacyProgram::Restore(void);
// protected: long D3DXShader::CPSLegacyProgram::CreateTexLoads(void);
// protected: long D3DXShader::CPSLegacyProgram::SetupDependency(void);
// protected: unsigned int D3DXShader::CPSLegacyProgram::EnumerateCombos(void);
// protected: int D3DXShader::CPSLegacyProgram::CheckDependents(class D3DXShader::CInstruction *, unsigned int);
// protected: int D3DXShader::CPSLegacyProgram::TrivialReject(void);
// protected: long D3DXShader::CPSLegacyProgram::FetchInstructions(class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int *);
// protected: int D3DXShader::CPSLegacyProgram::ViolatesPhaseLinkage(void);
// protected: int D3DXShader::CPSLegacyProgram::IsDependentOnPhase2(class D3DXShader::CInstruction *);
// protected: long D3DXShader::CPSLegacyProgram::FindConsumerWriters(class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int *);
// protected: long D3DXShader::CPSLegacyProgram::FindConsumers(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *, unsigned int, unsigned int *, unsigned int &);
// protected: long D3DXShader::CPSLegacyProgram::FixUpOrigins(void);
// protected: long D3DXShader::CPSLegacyProgram::AnalizeArgUse(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *, unsigned int, unsigned int &, int &, int &);
// protected: long D3DXShader::CPSLegacyProgram::NoTexClobber(unsigned int, class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::FindPackPlaces(unsigned int *, int *, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::UpPropZ(class D3DXShader::CInstruction **, unsigned int, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::InitZs(void);
// protected: class D3DXShader::CInstruction * D3DXShader::CPSLegacyProgram::InstSearch(class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int, int);
// protected: virtual long D3DXShader::CPSLegacyProgram::ValidateOutput(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitDP4(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDPR(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDPT(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDD(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitTEXCRD(void);
// protected: virtual unsigned long D3DXShader::CPSLegacyProgram::CoIssue(unsigned long);
// protected: virtual long D3DXShader::CPSLegacyProgram::EmitSize(void);
// protected: virtual long D3DXShader::CPSLegacyProgram::EmitVersion(void);
// protected: virtual long D3DXShader::CPSLegacyProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *);
// protected: virtual long D3DXShader::CPSLegacyProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &);
// protected: virtual long D3DXShader::CPSLegacyProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *);
// protected: long D3DXShader::CPSLegacyProgram::MarkCoIssues(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *);
// protected: virtual long D3DXShader::CPSLegacyProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *);
// public: virtual D3DXShader::CPSLegacyProgram::~CPSLegacyProgram(void);
// public: virtual long D3DXShader::CPSLegacyProgram::GenerateCode(struct ID3DXBuffer **);
// protected: virtual long D3DXShader::CPSLegacyProgram::Translate(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchTexldPR(void);
// protected: long D3DXShader::CPSLegacyProgram::CheckDegenShader(void);
// protected: long D3DXShader::CPSLegacyProgram::EmmulateWriteMasksX(void);
// protected: long D3DXShader::CPSLegacyProgram::DeSwizzle(void);
// protected: long D3DXShader::CPSLegacyProgram::MatchOutputModifier(void);
// protected: long D3DXShader::CPSLegacyProgram::TexturePullOut(class D3DXShader::CInstruction **, unsigned int *, class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::GroupTexLoads(void);
// protected: long D3DXShader::CPSLegacyProgram::Save(void);
// protected: int D3DXShader::CPSLegacyProgram::AssignSampler(class D3DXShader::CInstruction **, unsigned int *, class D3DXShader::CInstruction **, unsigned int, unsigned int);
// protected: int D3DXShader::CPSLegacyProgram::InitialCluster(unsigned long, int);
// protected: long D3DXShader::CPSLegacyProgram::AddPhaseLinkage(unsigned int *);
// protected: long D3DXShader::CPSLegacyProgram::GreedyPullUp(void);
// protected: long D3DXShader::CPSLegacyProgram::RemapConstants(void);
// protected: long D3DXShader::CPSLegacyProgram::AllocateRegisters(int, int);
// protected: long D3DXShader::CPSLegacyProgram::PSMatchMUL(void);
// protected: long D3DXShader::CPSLegacyProgram::FindTex(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction *, unsigned int *, unsigned int *, class D3DXShader::CInstruction **, int, int);
// protected: long D3DXShader::CPSLegacyProgram::MatchDep(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **);
// protected: long D3DXShader::CPSLegacyProgram::Match3xM(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **, unsigned int);
// protected: long D3DXShader::CPSLegacyProgram::EmitSpecialTex(unsigned long);
// protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int);
// protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *);
// protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesPortConstraintsCoIssue(class D3DXShader::CInstruction *, class D3DXShader::CInstruction *);
// merged_83BAF388;
// protected: long D3DXShader::CPSLegacyProgram::MatchPhase1(void);
// protected: long D3DXShader::CPSLegacyProgram::EmitPhase(class D3DXShader::CInstruction **, unsigned int);
// protected: virtual long D3DXShader::CPSLegacyProgram::EmitInstructions(void);
// public: virtual long D3DXShader::CPSLegacyProgram::IndexSemantic(class D3DXShader::CArgument *, int);
// protected: virtual long D3DXShader::CPSLegacyProgram::PatternMatch(void);

//int D3DXShader::IsTextureInst(unsigned int)
//{
//    mangled_ppc("?IsTextureInst@D3DXShader@@YAHI@Z");
//};

//public: D3DXShader::CPSLegacyProgram::CPSLegacyProgram(int)
//{
//    mangled_ppc("??0CPSLegacyProgram@D3DXShader@@QAA@H@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::InitCaps(void)
//{
//    mangled_ppc("?InitCaps@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::Reschedule(void)
//{
//    mangled_ppc("?Reschedule@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::ValidateTexSat(void)
//{
//    mangled_ppc("?ValidateTexSat@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::CleanUpClip(void)
//{
//    mangled_ppc("?CleanUpClip@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchClip(void)
//{
//    mangled_ppc("?MatchClip@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::FixSatTex(void)
//{
//    mangled_ppc("?FixSatTex@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::FixNeg(void)
//{
//    mangled_ppc("?FixNeg@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::PackOutput(void)
//{
//    mangled_ppc("?PackOutput@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MovConsts(void)
//{
//    mangled_ppc("?MovConsts@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: int D3DXShader::CPSLegacyProgram::ValidSwizzle(unsigned int *, unsigned int *)
//{
//    mangled_ppc("?ValidSwizzle@CPSLegacyProgram@D3DXShader@@IAAHPAI0@Z");
//};

//int D3DXShader::IsValidWriteMask(unsigned int *, unsigned long)
//{
//    mangled_ppc("?IsValidWriteMask@D3DXShader@@YAHPAIK@Z");
//};

//int D3DXShader::IsValidDotWriteMask(unsigned int *, unsigned long)
//{
//    mangled_ppc("?IsValidDotWriteMask@D3DXShader@@YAHPAIK@Z");
//};

//int D3DXShader::IsValidSwizzle(unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?IsValidSwizzle@D3DXShader@@YAHPAI0I@Z");
//};

//protected: int D3DXShader::CPSLegacyProgram::HasWriteMask(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?HasWriteMask@CPSLegacyProgram@D3DXShader@@IAAHPAVCInstruction@2@@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmmulateReplicate(void)
//{
//    mangled_ppc("?EmmulateReplicate@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::FixPortConstraintsAndFixCMP(void)
//{
//    mangled_ppc("?FixPortConstraintsAndFixCMP@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchTexReflect(int)
//{
//    mangled_ppc("?MatchTexReflect@CPSLegacyProgram@D3DXShader@@IAAJH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::ValidateInstructions(void)
//{
//    mangled_ppc("?ValidateInstructions@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchCMP(void)
//{
//    mangled_ppc("?MatchCMP@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchComplexAdd(void)
//{
//    mangled_ppc("?MatchComplexAdd@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//long D3DXShader::AddChild(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?AddChild@D3DXShader@@YAJPAVCInstruction@1@I@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::LegacyChildParentInfo(class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?LegacyChildParentInfo@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@I@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::RemapInput(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?RemapInput@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IIIIPAI@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::RemapInputTex(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?RemapInputTex@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IIIIPAI@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::PullOut(unsigned int *, unsigned int, class D3DXShader::CInstruction **, unsigned int *)
//{
//    mangled_ppc("?PullOut@CPSLegacyProgram@D3DXShader@@IAAJPAIIPAPAVCInstruction@2@0@Z");
//};

//protected: unsigned int D3DXShader::CPSLegacyProgram::RegReassign(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int, class D3DXShader::CArgument *, int &)
//{
//    mangled_ppc("?RegReassign@CPSLegacyProgram@D3DXShader@@IAAIPAPAVCInstruction@2@IIIPAVCArgument@2@AAH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::Restore(void)
//{
//    mangled_ppc("?Restore@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::CreateTexLoads(void)
//{
//    mangled_ppc("?CreateTexLoads@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::SetupDependency(void)
//{
//    mangled_ppc("?SetupDependency@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: unsigned int D3DXShader::CPSLegacyProgram::EnumerateCombos(void)
//{
//    mangled_ppc("?EnumerateCombos@CPSLegacyProgram@D3DXShader@@IAAIXZ");
//};

//protected: int D3DXShader::CPSLegacyProgram::CheckDependents(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?CheckDependents@CPSLegacyProgram@D3DXShader@@IAAHPAVCInstruction@2@I@Z");
//};

//protected: int D3DXShader::CPSLegacyProgram::TrivialReject(void)
//{
//    mangled_ppc("?TrivialReject@CPSLegacyProgram@D3DXShader@@IAAHXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::FetchInstructions(class D3DXShader::CInstruction *, class D3DXShader::CInstruction **, unsigned int *)
//{
//    mangled_ppc("?FetchInstructions@CPSLegacyProgram@D3DXShader@@IAAJPAVCInstruction@2@PAPAV32@PAI@Z");
//};

//protected: int D3DXShader::CPSLegacyProgram::ViolatesPhaseLinkage(void)
//{
//    mangled_ppc("?ViolatesPhaseLinkage@CPSLegacyProgram@D3DXShader@@IAAHXZ");
//};

//protected: int D3DXShader::CPSLegacyProgram::IsDependentOnPhase2(class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?IsDependentOnPhase2@CPSLegacyProgram@D3DXShader@@IAAHPAVCInstruction@2@@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::FindConsumerWriters(class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?FindConsumerWriters@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IPAI1@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::FindConsumers(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *, unsigned int, unsigned int *, unsigned int &)
//{
//    mangled_ppc("?FindConsumers@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IIPAII1AAI@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::FixUpOrigins(void)
//{
//    mangled_ppc("?FixUpOrigins@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::AnalizeArgUse(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *, unsigned int, unsigned int &, int &, int &)
//{
//    mangled_ppc("?AnalizeArgUse@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IIPAIIAAIAAH3@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::NoTexClobber(unsigned int, class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int)
//{
//    mangled_ppc("?NoTexClobber@CPSLegacyProgram@D3DXShader@@IAAJIPAPAVCInstruction@2@IPAII@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::FindPackPlaces(unsigned int *, int *, unsigned int)
//{
//    mangled_ppc("?FindPackPlaces@CPSLegacyProgram@D3DXShader@@IAAJPAIPAHI@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::UpPropZ(class D3DXShader::CInstruction **, unsigned int, unsigned int)
//{
//    mangled_ppc("?UpPropZ@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@II@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::InitZs(void)
//{
//    mangled_ppc("?InitZs@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: class D3DXShader::CInstruction * D3DXShader::CPSLegacyProgram::InstSearch(class D3DXShader::CInstruction **, unsigned int, unsigned int *, unsigned int, int)
//{
//    mangled_ppc("?InstSearch@CPSLegacyProgram@D3DXShader@@IAAPAVCInstruction@2@PAPAV32@IPAIIH@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::ValidateOutput(void)
//{
//    mangled_ppc("?ValidateOutput@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitDP4(void)
//{
//    mangled_ppc("?EmitDP4@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDPR(void)
//{
//    mangled_ppc("?EmitTEXLDPR@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDPT(void)
//{
//    mangled_ppc("?EmitTEXLDPT@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitTEXLDD(void)
//{
//    mangled_ppc("?EmitTEXLDD@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitTEXCRD(void)
//{
//    mangled_ppc("?EmitTEXCRD@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: virtual unsigned long D3DXShader::CPSLegacyProgram::CoIssue(unsigned long)
//{
//    mangled_ppc("?CoIssue@CPSLegacyProgram@D3DXShader@@MAAKK@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::EmitSize(void)
//{
//    mangled_ppc("?EmitSize@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::EmitVersion(void)
//{
//    mangled_ppc("?EmitVersion@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::EmitDCL(class D3DXShader::CArgument *, unsigned long *)
//{
//    mangled_ppc("?EmitDCL@CPSLegacyProgram@D3DXShader@@MAAJPAVCArgument@2@PAK@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::FindInput(class D3DXShader::CArgument *, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?FindInput@CPSLegacyProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::FindOutput(class D3DXShader::CArgument *, unsigned long &, unsigned long &, int *)
//{
//    mangled_ppc("?FindOutput@CPSLegacyProgram@D3DXShader@@MAAJPAVCArgument@2@AAK1PAH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::MarkCoIssues(class D3DXShader::CInstruction **, unsigned int, unsigned int, unsigned int *)
//{
//    mangled_ppc("?MarkCoIssues@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IIPAI@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::SrcSwizzle(unsigned int *, unsigned int, unsigned long, unsigned long *)
//{
//    mangled_ppc("?SrcSwizzle@CPSLegacyProgram@D3DXShader@@MAAJPAIIKPAK@Z");
//};

//public: virtual D3DXShader::CPSLegacyProgram::~CPSLegacyProgram(void)
//{
//    mangled_ppc("??1CPSLegacyProgram@D3DXShader@@UAA@XZ");
//};

//public: virtual long D3DXShader::CPSLegacyProgram::GenerateCode(struct ID3DXBuffer **)
//{
//    mangled_ppc("?GenerateCode@CPSLegacyProgram@D3DXShader@@UAAJPAPAUID3DXBuffer@@@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::Translate(void)
//{
//    mangled_ppc("?Translate@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchTexldPR(void)
//{
//    mangled_ppc("?MatchTexldPR@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::CheckDegenShader(void)
//{
//    mangled_ppc("?CheckDegenShader@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmmulateWriteMasksX(void)
//{
//    mangled_ppc("?EmmulateWriteMasksX@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::DeSwizzle(void)
//{
//    mangled_ppc("?DeSwizzle@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchOutputModifier(void)
//{
//    mangled_ppc("?MatchOutputModifier@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::TexturePullOut(class D3DXShader::CInstruction **, unsigned int *, class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?TexturePullOut@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@PAI0I0I@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::GroupTexLoads(void)
//{
//    mangled_ppc("?GroupTexLoads@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::Save(void)
//{
//    mangled_ppc("?Save@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: int D3DXShader::CPSLegacyProgram::AssignSampler(class D3DXShader::CInstruction **, unsigned int *, class D3DXShader::CInstruction **, unsigned int, unsigned int)
//{
//    mangled_ppc("?AssignSampler@CPSLegacyProgram@D3DXShader@@IAAHPAPAVCInstruction@2@PAI0II@Z");
//};

//protected: int D3DXShader::CPSLegacyProgram::InitialCluster(unsigned long, int)
//{
//    mangled_ppc("?InitialCluster@CPSLegacyProgram@D3DXShader@@IAAHKH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::AddPhaseLinkage(unsigned int *)
//{
//    mangled_ppc("?AddPhaseLinkage@CPSLegacyProgram@D3DXShader@@IAAJPAI@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::GreedyPullUp(void)
//{
//    mangled_ppc("?GreedyPullUp@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::RemapConstants(void)
//{
//    mangled_ppc("?RemapConstants@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::AllocateRegisters(int, int)
//{
//    mangled_ppc("?AllocateRegisters@CPSLegacyProgram@D3DXShader@@IAAJHH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::PSMatchMUL(void)
//{
//    mangled_ppc("?PSMatchMUL@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::FindTex(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction *, unsigned int *, unsigned int *, class D3DXShader::CInstruction **, int, int)
//{
//    mangled_ppc("?FindTex@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@IPAV32@PAI20HH@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchDep(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **)
//{
//    mangled_ppc("?MatchDep@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@I0@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::Match3xM(class D3DXShader::CInstruction **, unsigned int, class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?Match3xM@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@I0I@Z");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitSpecialTex(unsigned long)
//{
//    mangled_ppc("?EmitSpecialTex@CPSLegacyProgram@D3DXShader@@IAAJK@Z");
//};

//protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesWriteLim(class D3DXShader::CInstruction *, unsigned int)
//{
//    mangled_ppc("?ViolatesWriteLim@CPSLegacyProgram@D3DXShader@@MAAHPAVCInstruction@2@I@Z");
//};

//protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesPortConstraints(class D3DXShader::CInstruction *, unsigned int *)
//{
//    mangled_ppc("?ViolatesPortConstraints@CPSLegacyProgram@D3DXShader@@MAAHPAVCInstruction@2@PAI@Z");
//};

//protected: virtual int D3DXShader::CPSLegacyProgram::ViolatesPortConstraintsCoIssue(class D3DXShader::CInstruction *, class D3DXShader::CInstruction *)
//{
//    mangled_ppc("?ViolatesPortConstraintsCoIssue@CPSLegacyProgram@D3DXShader@@MAAHPAVCInstruction@2@0@Z");
//};

//merged_83BAF388
//{
//    mangled_ppc("merged_83BAF388");
//};

//protected: long D3DXShader::CPSLegacyProgram::MatchPhase1(void)
//{
//    mangled_ppc("?MatchPhase1@CPSLegacyProgram@D3DXShader@@IAAJXZ");
//};

//protected: long D3DXShader::CPSLegacyProgram::EmitPhase(class D3DXShader::CInstruction **, unsigned int)
//{
//    mangled_ppc("?EmitPhase@CPSLegacyProgram@D3DXShader@@IAAJPAPAVCInstruction@2@I@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::EmitInstructions(void)
//{
//    mangled_ppc("?EmitInstructions@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

//public: virtual long D3DXShader::CPSLegacyProgram::IndexSemantic(class D3DXShader::CArgument *, int)
//{
//    mangled_ppc("?IndexSemantic@CPSLegacyProgram@D3DXShader@@UAAJPAVCArgument@2@H@Z");
//};

//protected: virtual long D3DXShader::CPSLegacyProgram::PatternMatch(void)
//{
//    mangled_ppc("?PatternMatch@CPSLegacyProgram@D3DXShader@@MAAJXZ");
//};

