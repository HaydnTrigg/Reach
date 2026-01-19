/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct _RTL_CRITICAL_SECTION XGRAPHICS::ValidatorCriticalSectionGuard::g_CriticalSection; // "?g_CriticalSection@ValidatorCriticalSectionGuard@XGRAPHICS@@2U_RTL_CRITICAL_SECTION@@A"
// public: static long volatile XGRAPHICS::ValidatorCriticalSectionGuard::g_NumContenders; // "?g_NumContenders@ValidatorCriticalSectionGuard@XGRAPHICS@@2JC"
// public: static long volatile XGRAPHICS::ValidatorCriticalSectionGuard::g_SpinLock; // "?g_SpinLock@ValidatorCriticalSectionGuard@XGRAPHICS@@2JC"
// class XGRAPHICS::OutStream *XGRAPHICS::g_pOut; // "?g_pOut@XGRAPHICS@@3PAVOutStream@1@A"
// int XGRAPHICS::g_PrintValErrors; // "?g_PrintValErrors@XGRAPHICS@@3HA"

// void XGRAPHICS::VALNOLINE(char const *, ...);
// void XGRAPHICS::VALERROR(char const *, ...);
// void XGRAPHICS::VALINTERNALERROR(char const *, ...);
// int XGRAPHICS::StandardUninitChecker(class XGRAPHICS::VerNode *, int);
// int XGRAPHICS::UninitOutChecker(class XGRAPHICS::VerNode *, int);
// public: XGRAPHICS::CONDSTACK::CONDSTACK(void);
// public: bool XGRAPHICS::CONDSTACK::push(class XGRAPHICS::VerOp *, bool);
// public: void XGRAPHICS::CONDSTACK::pop(void);
// public: void * XGRAPHICS::CONDSTACK::`scalar deleting destructor'(unsigned int);
// int XGRAPHICS::NotGoingToHappen(class XGRAPHICS::CONDSTACK *);
// void XGRAPHICS::CleanupAfterUninitCheck(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::CheckForProperPadding(struct XGRAPHICS::InstructionUsage const *);
// bool XGRAPHICS::CheckForDeadCode(struct XGRAPHICS::InstructionUsage const *);
// public: XGRAPHICS::ValidatorCriticalSectionGuard::ValidatorCriticalSectionGuard(void);
// public: XGRAPHICS::ValidatorCriticalSectionGuard::~ValidatorCriticalSectionGuard(void);
// NativeToUCodeDWORD;
// int XGRAPHICS::DONOTHING(char const *, ...);
// public: XGRAPHICS::VerNode::VerNode(int);
// public: XGRAPHICS::VerNode::VerNode(double);
// public: XGRAPHICS::VerNode::~VerNode(void);
// bool XGRAPHICS::OpIsCnd(unsigned char);
// bool XGRAPHICS::OpIsAssociative(unsigned char);
// int XGRAPHICS::BadP0MovaChecker(class XGRAPHICS::VerNode *, int);
// int XGRAPHICS::PSMustEndWithALUChecker(class XGRAPHICS::VerNode *, int);
// int XGRAPHICS::MemExportChecker(class XGRAPHICS::VerNode *, int);
// int XGRAPHICS::MustBeZeroChecker(class XGRAPHICS::VerNode *, int);
// public: XGRAPHICS::CONDSTACK::~CONDSTACK(void);
// int XGRAPHICS::CheckForUninitializedRegs(class XGRAPHICS::VerNode *, int, class XGRAPHICS::CONDSTACK *, int (*)(class XGRAPHICS::VerNode *, int), bool);
// bool XGRAPHICS::PropagateUninitCheck(class XGRAPHICS::VerTable *, int (*)(class XGRAPHICS::VerNode *, int), int, int, char const *, bool, bool);
// bool XGRAPHICS::CheckOutput(class XGRAPHICS::VerTable *, struct XGRAPHICS::R500Stuff *, unsigned short *, bool, bool);
// XGValidateMicrocode_imp;
// XGValidateMicrocodeRaw_imp;

//void XGRAPHICS::VALNOLINE(char const *, ...)
//{
//    mangled_ppc("?VALNOLINE@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VALERROR(char const *, ...)
//{
//    mangled_ppc("?VALERROR@XGRAPHICS@@YAXPBDZZ");
//};

//void XGRAPHICS::VALINTERNALERROR(char const *, ...)
//{
//    mangled_ppc("?VALINTERNALERROR@XGRAPHICS@@YAXPBDZZ");
//};

//int XGRAPHICS::StandardUninitChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?StandardUninitChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//int XGRAPHICS::UninitOutChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?UninitOutChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//public: XGRAPHICS::CONDSTACK::CONDSTACK(void)
//{
//    mangled_ppc("??0CONDSTACK@XGRAPHICS@@QAA@XZ");
//};

//public: bool XGRAPHICS::CONDSTACK::push(class XGRAPHICS::VerOp *, bool)
//{
//    mangled_ppc("?push@CONDSTACK@XGRAPHICS@@QAA_NPAVVerOp@2@_N@Z");
//};

//public: void XGRAPHICS::CONDSTACK::pop(void)
//{
//    mangled_ppc("?pop@CONDSTACK@XGRAPHICS@@QAAXXZ");
//};

//public: void * XGRAPHICS::CONDSTACK::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GCONDSTACK@XGRAPHICS@@QAAPAXI@Z");
//};

//int XGRAPHICS::NotGoingToHappen(class XGRAPHICS::CONDSTACK *)
//{
//    mangled_ppc("?NotGoingToHappen@XGRAPHICS@@YAHPAVCONDSTACK@1@@Z");
//};

//void XGRAPHICS::CleanupAfterUninitCheck(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?CleanupAfterUninitCheck@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::CheckForProperPadding(struct XGRAPHICS::InstructionUsage const *)
//{
//    mangled_ppc("?CheckForProperPadding@XGRAPHICS@@YA_NPBUInstructionUsage@1@@Z");
//};

//bool XGRAPHICS::CheckForDeadCode(struct XGRAPHICS::InstructionUsage const *)
//{
//    mangled_ppc("?CheckForDeadCode@XGRAPHICS@@YA_NPBUInstructionUsage@1@@Z");
//};

//public: XGRAPHICS::ValidatorCriticalSectionGuard::ValidatorCriticalSectionGuard(void)
//{
//    mangled_ppc("??0ValidatorCriticalSectionGuard@XGRAPHICS@@QAA@XZ");
//};

//public: XGRAPHICS::ValidatorCriticalSectionGuard::~ValidatorCriticalSectionGuard(void)
//{
//    mangled_ppc("??1ValidatorCriticalSectionGuard@XGRAPHICS@@QAA@XZ");
//};

//NativeToUCodeDWORD
//{
//    mangled_ppc("NativeToUCodeDWORD");
//};

//int XGRAPHICS::DONOTHING(char const *, ...)
//{
//    mangled_ppc("?DONOTHING@XGRAPHICS@@YAHPBDZZ");
//};

//public: XGRAPHICS::VerNode::VerNode(int)
//{
//    mangled_ppc("??0VerNode@XGRAPHICS@@QAA@H@Z");
//};

//public: XGRAPHICS::VerNode::VerNode(double)
//{
//    mangled_ppc("??0VerNode@XGRAPHICS@@QAA@N@Z");
//};

//public: XGRAPHICS::VerNode::~VerNode(void)
//{
//    mangled_ppc("??1VerNode@XGRAPHICS@@QAA@XZ");
//};

//bool XGRAPHICS::OpIsCnd(unsigned char)
//{
//    mangled_ppc("?OpIsCnd@XGRAPHICS@@YA_NE@Z");
//};

//bool XGRAPHICS::OpIsAssociative(unsigned char)
//{
//    mangled_ppc("?OpIsAssociative@XGRAPHICS@@YA_NE@Z");
//};

//int XGRAPHICS::BadP0MovaChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?BadP0MovaChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//int XGRAPHICS::PSMustEndWithALUChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?PSMustEndWithALUChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//int XGRAPHICS::MemExportChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?MemExportChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//int XGRAPHICS::MustBeZeroChecker(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?MustBeZeroChecker@XGRAPHICS@@YAHPAVVerNode@1@H@Z");
//};

//public: XGRAPHICS::CONDSTACK::~CONDSTACK(void)
//{
//    mangled_ppc("??1CONDSTACK@XGRAPHICS@@QAA@XZ");
//};

//int XGRAPHICS::CheckForUninitializedRegs(class XGRAPHICS::VerNode *, int, class XGRAPHICS::CONDSTACK *, int (*)(class XGRAPHICS::VerNode *, int), bool)
//{
//    mangled_ppc("?CheckForUninitializedRegs@XGRAPHICS@@YAHPAVVerNode@1@HPAVCONDSTACK@1@P6AH0H@Z_N@Z");
//};

//bool XGRAPHICS::PropagateUninitCheck(class XGRAPHICS::VerTable *, int (*)(class XGRAPHICS::VerNode *, int), int, int, char const *, bool, bool)
//{
//    mangled_ppc("?PropagateUninitCheck@XGRAPHICS@@YA_NPAVVerTable@1@P6AHPAVVerNode@1@H@ZHHPBD_N4@Z");
//};

//bool XGRAPHICS::CheckOutput(class XGRAPHICS::VerTable *, struct XGRAPHICS::R500Stuff *, unsigned short *, bool, bool)
//{
//    mangled_ppc("?CheckOutput@XGRAPHICS@@YA_NPAVVerTable@1@PAUR500Stuff@1@PAG_N3@Z");
//};

//XGValidateMicrocode_imp
//{
//    mangled_ppc("XGValidateMicrocode_imp");
//};

//XGValidateMicrocodeRaw_imp
//{
//    mangled_ppc("XGValidateMicrocodeRaw_imp");
//};

