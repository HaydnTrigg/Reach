/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const `public: virtual char const * __cdecl XCR::RandomStateControl::GetHelpString(void)'::`2'::helpstring; // "?helpstring@?1??GetHelpString@RandomStateControl@XCR@@UAAPBDXZ@4PBDB"

// public: XCR::RandomStateControl::RandomStateControl(void);
// public: virtual XCR::RandomStateControl::~RandomStateControl(void);
// public: virtual class XCR::Result XCR::RandomStateControl::SelectComponent(void);
// public: virtual class XCR::Result XCR::RandomStateControl::SetStringProperty(char const *, char const *, char const *);
// public: virtual class XCR::Result XCR::RandomStateControl::Start(void);
// public: virtual class XCR::Result XCR::RandomStateControl::Stop(void);
// public: virtual class XCR::Result XCR::RandomStateControl::GetStatus(void);
// public: virtual class XCR::Result XCR::RandomStateControl::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::RandomStateControl::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: virtual class XCR::Result XCR::RandomStateControl::Initialize(class XCR::ControlUnit::IControllerInterface *);
// public: virtual void XCR::RandomStateControl::DoWork(unsigned long, unsigned long);
// public: virtual void XCR::RandomStateControl::NotifyState(char const *);
// protected: long XCR::RandomStateControl::random_choice(long);
// protected: class XCR::RandomStateControl::ActionExecutor * XCR::RandomStateControl::get_action_executor(class XCR::RandomStateSystem::Action &);
// protected: long XCR::RandomStateControl::get_notify_state(char const *);
// public: virtual enum XCR::ControlUnit::IComponent::ComponentType XCR::ControlUnit::IController::GetComponentType(void);
// public: XCR::RandomStateSystem::Action::Action(long, unsigned long);
// public: virtual char const * XCR::RandomStateControl::GetHelpString(void);
// merged_83E9ED00;
// public: XCR::ControlUnit::IController::IController(void);
// public: virtual class XCR::Result XCR::ControlUnit::IController::Initialize(class XCR::ControlUnit::IControllerInterface *);
// public: virtual void XCR::ControlUnit::IController::DoWork(unsigned long, unsigned long);
// public: virtual void XCR::ControlUnit::IController::NotifyState(char const *);
// public: virtual char const * XCR::ControlUnit::IController::GetHelpString(void);
// merged_83E9EE70;
// public: virtual XCR::ControlUnit::IController::~IController(void);
// public: bool XCR::RandomStateSystem::XRSFileHeader::IsValid(void) const;
// public: XCR::RandomStateControl::PlaybackExecutor::PlaybackExecutor(void);
// public: virtual void XCR::RandomStateControl::PlaybackExecutor::Initialize(char *);
// public: virtual bool XCR::RandomStateControl::PlaybackExecutor::DoWork(class XCR::ControlUnit::IControllerInterface *, bool);
// public: XCR::RandomStateControl::DiskPlaybackExecutor::DiskPlaybackExecutor(void);
// public: XCR::RandomStateControl::TextPlaybackExecutor::TextPlaybackExecutor(void);
// public: XCR::RandomStateControl::ActionExecutor::ActionExecutor(void);
// public: XCR::RandomStateControl::PlaybackExecutor::~PlaybackExecutor(void);
// public: XCR::RandomStateControl::DiskPlaybackExecutor::~DiskPlaybackExecutor(void);
// public: XCR::RandomStateControl::TextPlaybackExecutor::~TextPlaybackExecutor(void);
// public: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::data(void) const;
// public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::length(void) const;
// bool std::operator!=<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, char const *);
// bool std::operator==<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, char const *);
// public: int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::compare(char const *) const;
// void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::text::`dynamic atexit destructor'(void);
// void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::disk::`dynamic atexit destructor'(void);
// void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::playback::`dynamic atexit destructor'(void);

//public: XCR::RandomStateControl::RandomStateControl(void)
//{
//    mangled_ppc("??0RandomStateControl@XCR@@QAA@XZ");
//};

//public: virtual XCR::RandomStateControl::~RandomStateControl(void)
//{
//    mangled_ppc("??1RandomStateControl@XCR@@UAA@XZ");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::SelectComponent(void)
//{
//    mangled_ppc("?SelectComponent@RandomStateControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::SetStringProperty(char const *, char const *, char const *)
//{
//    mangled_ppc("?SetStringProperty@RandomStateControl@XCR@@UAA?AVResult@2@PBD00@Z");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::Start(void)
//{
//    mangled_ppc("?Start@RandomStateControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::Stop(void)
//{
//    mangled_ppc("?Stop@RandomStateControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::GetStatus(void)
//{
//    mangled_ppc("?GetStatus@RandomStateControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@RandomStateControl@XCR@@UAA?AVResult@2@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@RandomStateControl@XCR@@UAA?AVResult@2@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::RandomStateControl::Initialize(class XCR::ControlUnit::IControllerInterface *)
//{
//    mangled_ppc("?Initialize@RandomStateControl@XCR@@UAA?AVResult@2@PAVIControllerInterface@ControlUnit@2@@Z");
//};

//public: virtual void XCR::RandomStateControl::DoWork(unsigned long, unsigned long)
//{
//    mangled_ppc("?DoWork@RandomStateControl@XCR@@UAAXKK@Z");
//};

//public: virtual void XCR::RandomStateControl::NotifyState(char const *)
//{
//    mangled_ppc("?NotifyState@RandomStateControl@XCR@@UAAXPBD@Z");
//};

//protected: long XCR::RandomStateControl::random_choice(long)
//{
//    mangled_ppc("?random_choice@RandomStateControl@XCR@@IAAJJ@Z");
//};

//protected: class XCR::RandomStateControl::ActionExecutor * XCR::RandomStateControl::get_action_executor(class XCR::RandomStateSystem::Action &)
//{
//    mangled_ppc("?get_action_executor@RandomStateControl@XCR@@IAAPAVActionExecutor@12@AAVAction@RandomStateSystem@2@@Z");
//};

//protected: long XCR::RandomStateControl::get_notify_state(char const *)
//{
//    mangled_ppc("?get_notify_state@RandomStateControl@XCR@@IAAJPBD@Z");
//};

//public: virtual enum XCR::ControlUnit::IComponent::ComponentType XCR::ControlUnit::IController::GetComponentType(void)
//{
//    mangled_ppc("?GetComponentType@IController@ControlUnit@XCR@@UAA?AW4ComponentType@IComponent@23@XZ");
//};

//public: XCR::RandomStateSystem::Action::Action(long, unsigned long)
//{
//    mangled_ppc("??0Action@RandomStateSystem@XCR@@QAA@JK@Z");
//};

//public: virtual char const * XCR::RandomStateControl::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@RandomStateControl@XCR@@UAAPBDXZ");
//};

//merged_83E9ED00
//{
//    mangled_ppc("merged_83E9ED00");
//};

//public: XCR::ControlUnit::IController::IController(void)
//{
//    mangled_ppc("??0IController@ControlUnit@XCR@@QAA@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IController::Initialize(class XCR::ControlUnit::IControllerInterface *)
//{
//    mangled_ppc("?Initialize@IController@ControlUnit@XCR@@UAA?AVResult@3@PAVIControllerInterface@23@@Z");
//};

//public: virtual void XCR::ControlUnit::IController::DoWork(unsigned long, unsigned long)
//{
//    mangled_ppc("?DoWork@IController@ControlUnit@XCR@@UAAXKK@Z");
//};

//public: virtual void XCR::ControlUnit::IController::NotifyState(char const *)
//{
//    mangled_ppc("?NotifyState@IController@ControlUnit@XCR@@UAAXPBD@Z");
//};

//public: virtual char const * XCR::ControlUnit::IController::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@IController@ControlUnit@XCR@@UAAPBDXZ");
//};

//merged_83E9EE70
//{
//    mangled_ppc("merged_83E9EE70");
//};

//public: virtual XCR::ControlUnit::IController::~IController(void)
//{
//    mangled_ppc("??1IController@ControlUnit@XCR@@UAA@XZ");
//};

//public: bool XCR::RandomStateSystem::XRSFileHeader::IsValid(void) const
//{
//    mangled_ppc("?IsValid@XRSFileHeader@RandomStateSystem@XCR@@QBA_NXZ");
//};

//public: XCR::RandomStateControl::PlaybackExecutor::PlaybackExecutor(void)
//{
//    mangled_ppc("??0PlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: virtual void XCR::RandomStateControl::PlaybackExecutor::Initialize(char *)
//{
//    mangled_ppc("?Initialize@PlaybackExecutor@RandomStateControl@XCR@@UAAXPAD@Z");
//};

//public: virtual bool XCR::RandomStateControl::PlaybackExecutor::DoWork(class XCR::ControlUnit::IControllerInterface *, bool)
//{
//    mangled_ppc("?DoWork@PlaybackExecutor@RandomStateControl@XCR@@UAA_NPAVIControllerInterface@ControlUnit@3@_N@Z");
//};

//public: XCR::RandomStateControl::DiskPlaybackExecutor::DiskPlaybackExecutor(void)
//{
//    mangled_ppc("??0DiskPlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: XCR::RandomStateControl::TextPlaybackExecutor::TextPlaybackExecutor(void)
//{
//    mangled_ppc("??0TextPlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: XCR::RandomStateControl::ActionExecutor::ActionExecutor(void)
//{
//    mangled_ppc("??0ActionExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: XCR::RandomStateControl::PlaybackExecutor::~PlaybackExecutor(void)
//{
//    mangled_ppc("??1PlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: XCR::RandomStateControl::DiskPlaybackExecutor::~DiskPlaybackExecutor(void)
//{
//    mangled_ppc("??1DiskPlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: XCR::RandomStateControl::TextPlaybackExecutor::~TextPlaybackExecutor(void)
//{
//    mangled_ppc("??1TextPlaybackExecutor@RandomStateControl@XCR@@QAA@XZ");
//};

//public: char const * std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::data(void) const
//{
//    mangled_ppc("?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAPBDXZ");
//};

//public: unsigned int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::length(void) const
//{
//    mangled_ppc("?length@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAIXZ");
//};

//bool std::operator!=<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, char const *)
//{
//    mangled_ppc("??$?9DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBD@Z");
//};

//bool std::operator==<char, struct std::char_traits<char>, class std::allocator<char> >(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, char const *)
//{
//    mangled_ppc("??$?8DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBD@Z");
//};

//public: int std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::compare(char const *) const
//{
//    mangled_ppc("?compare@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBAHPBD@Z");
//};

//void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::text::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Ftext@?1??get_action_executor@RandomStateControl@XCR@@IAAPAVActionExecutor@12@AAVAction@RandomStateSystem@2@@Z@YAXXZ");
//};

//void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::disk::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fdisk@?1??get_action_executor@RandomStateControl@XCR@@IAAPAVActionExecutor@12@AAVAction@RandomStateSystem@2@@Z@YAXXZ");
//};

//void `protected: class RandomStateControl::get_action_executor::ActionExecutor * XCR::RandomStateControl::get_action_executor(class RandomStateControl::RandomStateSystem::Action &)'::`2'::playback::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fplayback@?1??get_action_executor@RandomStateControl@XCR@@IAAPAVActionExecutor@12@AAVAction@RandomStateSystem@2@@Z@YAXXZ");
//};

