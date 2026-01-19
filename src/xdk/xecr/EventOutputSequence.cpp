/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XCR::Sequence::BinaryEventOutput::BinaryEventOutput(class XenonUtility::OutputStream *);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::Start(void);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::Stop(void);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::SetTime(unsigned long, unsigned long);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteConnectGamepadEvent(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteDisconnectAnyDeviceEvent(unsigned long);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteGamepadState(unsigned long, struct _XINPUT_GAMEPAD const &);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteConnectKeyboardEvent(unsigned long, struct _XINPUT_KEYSTROKE const &);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteKeyboardState(unsigned long, struct _XINPUT_KEYSTROKE const &);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteToggleHudEvent(unsigned long);
// public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::BinaryEventOutput::GetErrorMessage(void) const;
// public: XCR::Sequence::IEventOutput::IEventOutput(void);
// public: XCR::Sequence::IFileFormat::EndEvent::EndEvent(void);
// protected: class XCR::Result XCR::Sequence::BinaryEventOutput::init_event_entry(struct XCR::Sequence::IFileFormat::InputEvent &);
// protected: class XCR::Result XCR::Sequence::BinaryEventOutput::init_device_event_entry(struct XCR::Sequence::IFileFormat::DeviceInputEvent &, unsigned long);

//public: XCR::Sequence::BinaryEventOutput::BinaryEventOutput(class XenonUtility::OutputStream *)
//{
//    mangled_ppc("??0BinaryEventOutput@Sequence@XCR@@QAA@PAVOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::Start(void)
//{
//    mangled_ppc("?Start@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::Stop(void)
//{
//    mangled_ppc("?Stop@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::SetTime(unsigned long, unsigned long)
//{
//    mangled_ppc("?SetTime@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@KK@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteConnectGamepadEvent(unsigned long, struct _XINPUT_CAPABILITIES const &, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?WriteConnectGamepadEvent@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_CAPABILITIES@@ABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteDisconnectAnyDeviceEvent(unsigned long)
//{
//    mangled_ppc("?WriteDisconnectAnyDeviceEvent@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteGamepadState(unsigned long, struct _XINPUT_GAMEPAD const &)
//{
//    mangled_ppc("?WriteGamepadState@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteConnectKeyboardEvent(unsigned long, struct _XINPUT_KEYSTROKE const &)
//{
//    mangled_ppc("?WriteConnectKeyboardEvent@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteKeyboardState(unsigned long, struct _XINPUT_KEYSTROKE const &)
//{
//    mangled_ppc("?WriteKeyboardState@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@KABU_XINPUT_KEYSTROKE@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventOutput::WriteToggleHudEvent(unsigned long)
//{
//    mangled_ppc("?WriteToggleHudEvent@BinaryEventOutput@Sequence@XCR@@UAA?AVResult@3@K@Z");
//};

//public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::BinaryEventOutput::GetErrorMessage(void) const
//{
//    mangled_ppc("?GetErrorMessage@BinaryEventOutput@Sequence@XCR@@UBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
//};

//public: XCR::Sequence::IEventOutput::IEventOutput(void)
//{
//    mangled_ppc("??0IEventOutput@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::EndEvent::EndEvent(void)
//{
//    mangled_ppc("??0EndEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//protected: class XCR::Result XCR::Sequence::BinaryEventOutput::init_event_entry(struct XCR::Sequence::IFileFormat::InputEvent &)
//{
//    mangled_ppc("?init_event_entry@BinaryEventOutput@Sequence@XCR@@IAA?AVResult@3@AAUInputEvent@IFileFormat@23@@Z");
//};

//protected: class XCR::Result XCR::Sequence::BinaryEventOutput::init_device_event_entry(struct XCR::Sequence::IFileFormat::DeviceInputEvent &, unsigned long)
//{
//    mangled_ppc("?init_device_event_entry@BinaryEventOutput@Sequence@XCR@@IAA?AVResult@3@AAUDeviceInputEvent@IFileFormat@23@K@Z");
//};

