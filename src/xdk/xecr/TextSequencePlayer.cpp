/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XCR::Sequence::TextEventInput::TextEventInput(void);
// public: virtual class XCR::Result XCR::Sequence::TextEventInput::Start(void);
// public: virtual class XCR::Result XCR::Sequence::TextEventInput::Stop(void);
// public: virtual void XCR::Sequence::TextEventInput::SetData(char const *);
// protected: bool XCR::Sequence::TextEventInput::get_next_char(void);
// protected: bool XCR::Sequence::TextEventInput::put_char_back(void);
// public: virtual class XCR::Result XCR::Sequence::TextEventInput::AdvanceToNextEvent(void);
// public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::TextEventInput::GetErrorMessage(void) const;
// public: virtual class XCR::Result XCR::Sequence::TextEventInput::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::Sequence::TextEventInput::ResumeState(class XenonUtility::DirectDiskInputStream *);
// protected: bool XCR::Sequence::TextEventInput::parse_event(void);
// protected: bool XCR::Sequence::TextEventInput::parse_control_action_group(void);
// protected: bool XCR::Sequence::TextEventInput::parse_control_action(void);
// protected: bool XCR::Sequence::TextEventInput::parse_duration(unsigned long &, unsigned long &);
// protected: bool XCR::Sequence::TextEventInput::parse_ulong(unsigned long &);
// public: virtual void XCR::Sequence::TextEventInput::GetGamepadState(struct _XINPUT_GAMEPAD &) const;
// public: virtual void XCR::Sequence::TextEventInput::GetKeyboardState(struct _XINPUT_KEYSTROKE &) const;
// protected: bool XCR::Sequence::TextEventInput::must_open_port(void);
// protected: bool XCR::Sequence::TextEventInput::must_open_port(unsigned long);
// public: XCR::Sequence::TextSequencePlayer::TextSequencePlayer(void);
// public: virtual XCR::Sequence::TextSequencePlayer::~TextSequencePlayer(void);
// public: virtual class XCR::Result XCR::Sequence::TextSequencePlayer::SetStringProperty(char const *, char const *, char const *);
// public: virtual class XCR::Result XCR::Sequence::TextSequencePlayer::SetDefault(void);
// public: virtual enum XCR::Sequence::IEventInput::EventType XCR::Sequence::TextEventInput::GetEventType(void) const;
// public: virtual unsigned long XCR::Sequence::TextEventInput::GetTime(void) const;
// public: virtual unsigned long XCR::Sequence::TextEventInput::GetFrame(void) const;
// public: virtual unsigned long XCR::Sequence::TextEventInput::GetPort(void) const;
// public: virtual unsigned long XCR::Sequence::TextEventInput::GetCombinedPort(void) const;
// public: virtual struct _XINPUT_CAPABILITIES const & XCR::Sequence::TextEventInput::GetCapabilities(void) const;
// public: virtual void XCR::Sequence::TextEventInput::SetFps(unsigned long);
// public: XCR::Sequence::IEventInput::IEventInput(void);
// public: virtual unsigned long XCR::Sequence::IEventInput::GetCombinedPort(void) const;
// protected: void XCR::Sequence::TextEventInput::add_error_message(char const *);
// protected: void XCR::Sequence::TextEventInput::reset_error_message(void);
// public: virtual char const * XCR::Sequence::TextSequencePlayer::GetHelpString(void);
// merged_83EA58D8;
// public: XCR::Sequence::TextEventInput::~TextEventInput(void);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(char const *);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(char);
// public: char & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator[](unsigned int);
// public: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::empty(void) const;
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(char const *);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(unsigned int, char);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(char const *, unsigned int);
// protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Chassign(unsigned int, unsigned int, char);
// public: static char * std::char_traits<char>::assign(char *, unsigned int, char);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, unsigned int, unsigned int);
// class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > std::operator+<char, struct std::char_traits<char>, class std::allocator<char> >(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &);

//public: XCR::Sequence::TextEventInput::TextEventInput(void)
//{
//    mangled_ppc("??0TextEventInput@Sequence@XCR@@QAA@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::TextEventInput::Start(void)
//{
//    mangled_ppc("?Start@TextEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::TextEventInput::Stop(void)
//{
//    mangled_ppc("?Stop@TextEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual void XCR::Sequence::TextEventInput::SetData(char const *)
//{
//    mangled_ppc("?SetData@TextEventInput@Sequence@XCR@@UAAXPBD@Z");
//};

//protected: bool XCR::Sequence::TextEventInput::get_next_char(void)
//{
//    mangled_ppc("?get_next_char@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//protected: bool XCR::Sequence::TextEventInput::put_char_back(void)
//{
//    mangled_ppc("?put_char_back@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//public: virtual class XCR::Result XCR::Sequence::TextEventInput::AdvanceToNextEvent(void)
//{
//    mangled_ppc("?AdvanceToNextEvent@TextEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::TextEventInput::GetErrorMessage(void) const
//{
//    mangled_ppc("?GetErrorMessage@TextEventInput@Sequence@XCR@@UBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::TextEventInput::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@TextEventInput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::TextEventInput::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@TextEventInput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//protected: bool XCR::Sequence::TextEventInput::parse_event(void)
//{
//    mangled_ppc("?parse_event@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//protected: bool XCR::Sequence::TextEventInput::parse_control_action_group(void)
//{
//    mangled_ppc("?parse_control_action_group@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//protected: bool XCR::Sequence::TextEventInput::parse_control_action(void)
//{
//    mangled_ppc("?parse_control_action@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//protected: bool XCR::Sequence::TextEventInput::parse_duration(unsigned long &, unsigned long &)
//{
//    mangled_ppc("?parse_duration@TextEventInput@Sequence@XCR@@IAA_NAAK0@Z");
//};

//protected: bool XCR::Sequence::TextEventInput::parse_ulong(unsigned long &)
//{
//    mangled_ppc("?parse_ulong@TextEventInput@Sequence@XCR@@IAA_NAAK@Z");
//};

//public: virtual void XCR::Sequence::TextEventInput::GetGamepadState(struct _XINPUT_GAMEPAD &) const
//{
//    mangled_ppc("?GetGamepadState@TextEventInput@Sequence@XCR@@UBAXAAU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual void XCR::Sequence::TextEventInput::GetKeyboardState(struct _XINPUT_KEYSTROKE &) const
//{
//    mangled_ppc("?GetKeyboardState@TextEventInput@Sequence@XCR@@UBAXAAU_XINPUT_KEYSTROKE@@@Z");
//};

//protected: bool XCR::Sequence::TextEventInput::must_open_port(void)
//{
//    mangled_ppc("?must_open_port@TextEventInput@Sequence@XCR@@IAA_NXZ");
//};

//protected: bool XCR::Sequence::TextEventInput::must_open_port(unsigned long)
//{
//    mangled_ppc("?must_open_port@TextEventInput@Sequence@XCR@@IAA_NK@Z");
//};

//public: XCR::Sequence::TextSequencePlayer::TextSequencePlayer(void)
//{
//    mangled_ppc("??0TextSequencePlayer@Sequence@XCR@@QAA@XZ");
//};

//public: virtual XCR::Sequence::TextSequencePlayer::~TextSequencePlayer(void)
//{
//    mangled_ppc("??1TextSequencePlayer@Sequence@XCR@@UAA@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::TextSequencePlayer::SetStringProperty(char const *, char const *, char const *)
//{
//    mangled_ppc("?SetStringProperty@TextSequencePlayer@Sequence@XCR@@UAA?AVResult@3@PBD00@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::TextSequencePlayer::SetDefault(void)
//{
//    mangled_ppc("?SetDefault@TextSequencePlayer@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual enum XCR::Sequence::IEventInput::EventType XCR::Sequence::TextEventInput::GetEventType(void) const
//{
//    mangled_ppc("?GetEventType@TextEventInput@Sequence@XCR@@UBA?AW4EventType@IEventInput@23@XZ");
//};

//public: virtual unsigned long XCR::Sequence::TextEventInput::GetTime(void) const
//{
//    mangled_ppc("?GetTime@TextEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual unsigned long XCR::Sequence::TextEventInput::GetFrame(void) const
//{
//    mangled_ppc("?GetFrame@TextEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual unsigned long XCR::Sequence::TextEventInput::GetPort(void) const
//{
//    mangled_ppc("?GetPort@TextEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual unsigned long XCR::Sequence::TextEventInput::GetCombinedPort(void) const
//{
//    mangled_ppc("?GetCombinedPort@TextEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual struct _XINPUT_CAPABILITIES const & XCR::Sequence::TextEventInput::GetCapabilities(void) const
//{
//    mangled_ppc("?GetCapabilities@TextEventInput@Sequence@XCR@@UBAABU_XINPUT_CAPABILITIES@@XZ");
//};

//public: virtual void XCR::Sequence::TextEventInput::SetFps(unsigned long)
//{
//    mangled_ppc("?SetFps@TextEventInput@Sequence@XCR@@UAAXK@Z");
//};

//public: XCR::Sequence::IEventInput::IEventInput(void)
//{
//    mangled_ppc("??0IEventInput@Sequence@XCR@@QAA@XZ");
//};

//public: virtual unsigned long XCR::Sequence::IEventInput::GetCombinedPort(void) const
//{
//    mangled_ppc("?GetCombinedPort@IEventInput@Sequence@XCR@@UBAKXZ");
//};

//protected: void XCR::Sequence::TextEventInput::add_error_message(char const *)
//{
//    mangled_ppc("?add_error_message@TextEventInput@Sequence@XCR@@IAAXPBD@Z");
//};

//protected: void XCR::Sequence::TextEventInput::reset_error_message(void)
//{
//    mangled_ppc("?reset_error_message@TextEventInput@Sequence@XCR@@IAAXXZ");
//};

//public: virtual char const * XCR::Sequence::TextSequencePlayer::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@TextSequencePlayer@Sequence@XCR@@UAAPBDXZ");
//};

//merged_83EA58D8
//{
//    mangled_ppc("merged_83EA58D8");
//};

//public: XCR::Sequence::TextEventInput::~TextEventInput(void)
//{
//    mangled_ppc("??1TextEventInput@Sequence@XCR@@QAA@XZ");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(char const *)
//{
//    mangled_ppc("??Y?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV01@PBD@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(char)
//{
//    mangled_ppc("??Y?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV01@D@Z");
//};

//public: char & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator[](unsigned int)
//{
//    mangled_ppc("??A?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAADI@Z");
//};

//public: bool std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::empty(void) const
//{
//    mangled_ppc("?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBA_NXZ");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(char const *)
//{
//    mangled_ppc("?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@PBD@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(unsigned int, char)
//{
//    mangled_ppc("?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@ID@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(char const *, unsigned int)
//{
//    mangled_ppc("?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@PBDI@Z");
//};

//protected: void std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::_Chassign(unsigned int, unsigned int, char)
//{
//    mangled_ppc("?_Chassign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAAXIID@Z");
//};

//public: static char * std::char_traits<char>::assign(char *, unsigned int, char)
//{
//    mangled_ppc("?assign@?$char_traits@D@std@@SAPADPADID@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &, unsigned int, unsigned int)
//{
//    mangled_ppc("?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@ABV12@II@Z");
//};

//class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > std::operator+<char, struct std::char_traits<char>, class std::allocator<char> >(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBDABV10@@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::operator+=(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("??Y?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV01@ABV01@@Z");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > & std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >::append(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const &)
//{
//    mangled_ppc("?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAAAAV12@ABV12@@Z");
//};

