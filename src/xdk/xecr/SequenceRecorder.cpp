/* ---------- headers */

#include "xdk\xecr\SequenceRecorder.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XCR::Sequence::Recorder::Recorder(class XCR::Sequence::IEventOutput *);
// public: virtual XCR::Sequence::Recorder::~Recorder(void);
// public: virtual class XCR::Result XCR::Sequence::Recorder::SelectComponent(void);
// public: virtual class XCR::Result XCR::Sequence::Recorder::SetStringProperty(char const *, char const *, char const *);
// public: virtual class XCR::Result XCR::Sequence::Recorder::Start(void);
// public: virtual class XCR::Result XCR::Sequence::Recorder::Stop(void);
// public: virtual class XCR::Result XCR::Sequence::Recorder::GetStatus(void);
// public: virtual class XCR::Result XCR::Sequence::Recorder::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::Sequence::Recorder::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: virtual class XCR::Result XCR::Sequence::Recorder::Initialize(class XCR::ControlUnit::IRecorderInterface *);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordDeviceDisconnect(unsigned long);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordToggleHud(unsigned long);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordGamepadConnect(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordInputGetState(unsigned long, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordKeyboardConnect(unsigned long, struct _XINPUT_KEYSTROKE const &);
// public: virtual class XCR::Result XCR::Sequence::Recorder::RecordInputGetKeystroke(unsigned long, struct _XINPUT_KEYSTROKE *const);
// public: virtual class XCR::Result XCR::Sequence::Recorder::FrameAdvance(void);
// protected: class XCR::Result XCR::Sequence::Recorder::update_all_ports(void);
// protected: class XCR::Result XCR::Sequence::Recorder::update_time(void);
// public: virtual char const * XCR::Sequence::Recorder::GetHelpString(void);
// merged_83EAFEB8;
// public: XCR::ControlUnit::IRecorder::IRecorder(void);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::Initialize(class XCR::ControlUnit::IRecorderInterface *);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordDeviceDisconnect(unsigned long);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordToggleHud(unsigned long);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordGamepadConnect(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordInputGetState(unsigned long, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordKeyboardConnect(unsigned long, struct _XINPUT_KEYSTROKE const &);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordInputGetKeystroke(unsigned long, struct _XINPUT_KEYSTROKE *const);
// public: virtual class XCR::Result XCR::ControlUnit::IRecorder::FrameAdvance(void);
// public: virtual char const * XCR::ControlUnit::IRecorder::GetHelpString(void);
// merged_83EB01A8;
// public: virtual XCR::ControlUnit::IRecorder::~IRecorder(void);

//public: XCR::Sequence::Recorder::Recorder(class XCR::Sequence::IEventOutput *)
//{
//    mangled_ppc("??0Recorder@Sequence@XCR@@QAA@PAVIEventOutput@12@@Z");
//};

//public: virtual XCR::Sequence::Recorder::~Recorder(void)
//{
//    mangled_ppc("??1Recorder@Sequence@XCR@@UAA@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::SelectComponent(void)
//{
//    mangled_ppc("?SelectComponent@Recorder@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::SetStringProperty(char const *, char const *, char const *)
//{
//    mangled_ppc("?SetStringProperty@Recorder@Sequence@XCR@@UAA?AVResult@3@PBD00@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::Start(void)
//{
//    mangled_ppc("?Start@Recorder@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::Stop(void)
//{
//    mangled_ppc("?Stop@Recorder@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::GetStatus(void)
//{
//    mangled_ppc("?GetStatus@Recorder@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@Recorder@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@Recorder@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::Initialize(class XCR::ControlUnit::IRecorderInterface *)
//{
//    mangled_ppc("?Initialize@Recorder@Sequence@XCR@@UAA?AVResult@3@PAVIRecorderInterface@ControlUnit@3@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordDeviceDisconnect(unsigned long)
//{
//    mangled_ppc("?RecordDeviceDisconnect@Recorder@Sequence@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordToggleHud(unsigned long)
//{
//    mangled_ppc("?RecordToggleHud@Recorder@Sequence@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordGamepadConnect(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?RecordGamepadConnect@Recorder@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_CAPABILITIES@@ABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordInputGetState(unsigned long, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?RecordInputGetState@Recorder@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordKeyboardConnect(unsigned long, struct _XINPUT_KEYSTROKE const &)
//{
//    mangled_ppc("?RecordKeyboardConnect@Recorder@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::RecordInputGetKeystroke(unsigned long, struct _XINPUT_KEYSTROKE *const)
//{
//    mangled_ppc("?RecordInputGetKeystroke@Recorder@Sequence@XCR@@UAA?AVResult@3@KQAU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::Recorder::FrameAdvance(void)
//{
//    mangled_ppc("?FrameAdvance@Recorder@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//protected: class XCR::Result XCR::Sequence::Recorder::update_all_ports(void)
//{
//    mangled_ppc("?update_all_ports@Recorder@Sequence@XCR@@IAA?AVResult@3@XZ");
//};

//protected: class XCR::Result XCR::Sequence::Recorder::update_time(void)
//{
//    mangled_ppc("?update_time@Recorder@Sequence@XCR@@IAA?AVResult@3@XZ");
//};

//public: virtual char const * XCR::Sequence::Recorder::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@Recorder@Sequence@XCR@@UAAPBDXZ");
//};

//merged_83EAFEB8
//{
//    mangled_ppc("merged_83EAFEB8");
//};

//public: XCR::ControlUnit::IRecorder::IRecorder(void)
//{
//    mangled_ppc("??0IRecorder@ControlUnit@XCR@@QAA@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::Initialize(class XCR::ControlUnit::IRecorderInterface *)
//{
//    mangled_ppc("?Initialize@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@PAVIRecorderInterface@23@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordDeviceDisconnect(unsigned long)
//{
//    mangled_ppc("?RecordDeviceDisconnect@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordToggleHud(unsigned long)
//{
//    mangled_ppc("?RecordToggleHud@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordGamepadConnect(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?RecordGamepadConnect@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@KABU_XINPUT_CAPABILITIES@@ABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordInputGetState(unsigned long, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?RecordInputGetState@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@KABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordKeyboardConnect(unsigned long, struct _XINPUT_KEYSTROKE const &)
//{
//    mangled_ppc("?RecordKeyboardConnect@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@KABU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::RecordInputGetKeystroke(unsigned long, struct _XINPUT_KEYSTROKE *const)
//{
//    mangled_ppc("?RecordInputGetKeystroke@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@KQAU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IRecorder::FrameAdvance(void)
//{
//    mangled_ppc("?FrameAdvance@IRecorder@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual char const * XCR::ControlUnit::IRecorder::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@IRecorder@ControlUnit@XCR@@UAAPBDXZ");
//};

//merged_83EB01A8
//{
//    mangled_ppc("merged_83EB01A8");
//};

//public: virtual XCR::ControlUnit::IRecorder::~IRecorder(void)
//{
//    mangled_ppc("??1IRecorder@ControlUnit@XCR@@UAA@XZ");
//};

