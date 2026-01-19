/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XCR::Sequence::BinaryEventInput::BinaryEventInput(class XenonUtility::InputStream *);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::Start(void);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::Stop(void);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::AdvanceToNextEvent(void);
// public: virtual void XCR::Sequence::BinaryEventInput::GetGamepadState(struct _XINPUT_GAMEPAD &) const;
// public: virtual void XCR::Sequence::BinaryEventInput::GetKeyboardState(struct _XINPUT_KEYSTROKE &) const;
// protected: class XCR::Result XCR::Sequence::BinaryEventInput::get_next_event(void);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: virtual enum XCR::Sequence::IEventInput::EventType XCR::Sequence::BinaryEventInput::GetEventType(void) const;
// public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetTime(void) const;
// public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetFrame(void) const;
// public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetPort(void) const;
// public: virtual struct _XINPUT_CAPABILITIES const & XCR::Sequence::BinaryEventInput::GetCapabilities(void) const;
// public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::BinaryEventInput::GetErrorMessage(void) const;
// public: XCR::Sequence::IFileFormat::FileHeader::FileHeader(bool);
// public: bool XCR::Sequence::IFileFormat::FileHeader::IsValid(void) const;
// public: XCR::Sequence::IFileFormat::InputEvent::InputEvent(enum XCR::Sequence::IFileFormat::InputEvent::Type);
// public: XCR::Sequence::IFileFormat::WaitEvent::WaitEvent(void);
// public: XCR::Sequence::IFileFormat::DeviceInputEvent::DeviceInputEvent(enum XCR::Sequence::IFileFormat::InputEvent::Type);
// public: XCR::Sequence::IFileFormat::GamepadConnectEvent::GamepadConnectEvent(void);
// public: XCR::Sequence::IFileFormat::GamepadStateEvent::GamepadStateEvent(void);
// public: XCR::Sequence::IFileFormat::KeyboardConnectEvent::KeyboardConnectEvent(void);
// public: XCR::Sequence::IFileFormat::KeyboardStateEvent::KeyboardStateEvent(void);
// public: XCR::Sequence::IFileFormat::AnyDeviceDisconnectEvent::AnyDeviceDisconnectEvent(void);

//public: XCR::Sequence::BinaryEventInput::BinaryEventInput(class XenonUtility::InputStream *)
//{
//    mangled_ppc("??0BinaryEventInput@Sequence@XCR@@QAA@PAVInputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::Start(void)
//{
//    mangled_ppc("?Start@BinaryEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::Stop(void)
//{
//    mangled_ppc("?Stop@BinaryEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::AdvanceToNextEvent(void)
//{
//    mangled_ppc("?AdvanceToNextEvent@BinaryEventInput@Sequence@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual void XCR::Sequence::BinaryEventInput::GetGamepadState(struct _XINPUT_GAMEPAD &) const
//{
//    mangled_ppc("?GetGamepadState@BinaryEventInput@Sequence@XCR@@UBAXAAU_XINPUT_GAMEPAD@@@Z");
//};

//public: virtual void XCR::Sequence::BinaryEventInput::GetKeyboardState(struct _XINPUT_KEYSTROKE &) const
//{
//    mangled_ppc("?GetKeyboardState@BinaryEventInput@Sequence@XCR@@UBAXAAU_XINPUT_KEYSTROKE@@@Z");
//};

//protected: class XCR::Result XCR::Sequence::BinaryEventInput::get_next_event(void)
//{
//    mangled_ppc("?get_next_event@BinaryEventInput@Sequence@XCR@@IAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@BinaryEventInput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::Sequence::BinaryEventInput::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@BinaryEventInput@Sequence@XCR@@UAA?AVResult@3@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//public: virtual enum XCR::Sequence::IEventInput::EventType XCR::Sequence::BinaryEventInput::GetEventType(void) const
//{
//    mangled_ppc("?GetEventType@BinaryEventInput@Sequence@XCR@@UBA?AW4EventType@IEventInput@23@XZ");
//};

//public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetTime(void) const
//{
//    mangled_ppc("?GetTime@BinaryEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetFrame(void) const
//{
//    mangled_ppc("?GetFrame@BinaryEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual unsigned long XCR::Sequence::BinaryEventInput::GetPort(void) const
//{
//    mangled_ppc("?GetPort@BinaryEventInput@Sequence@XCR@@UBAKXZ");
//};

//public: virtual struct _XINPUT_CAPABILITIES const & XCR::Sequence::BinaryEventInput::GetCapabilities(void) const
//{
//    mangled_ppc("?GetCapabilities@BinaryEventInput@Sequence@XCR@@UBAABU_XINPUT_CAPABILITIES@@XZ");
//};

//public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XCR::Sequence::BinaryEventInput::GetErrorMessage(void) const
//{
//    mangled_ppc("?GetErrorMessage@BinaryEventInput@Sequence@XCR@@UBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
//};

//public: XCR::Sequence::IFileFormat::FileHeader::FileHeader(bool)
//{
//    mangled_ppc("??0FileHeader@IFileFormat@Sequence@XCR@@QAA@_N@Z");
//};

//public: bool XCR::Sequence::IFileFormat::FileHeader::IsValid(void) const
//{
//    mangled_ppc("?IsValid@FileHeader@IFileFormat@Sequence@XCR@@QBA_NXZ");
//};

//public: XCR::Sequence::IFileFormat::InputEvent::InputEvent(enum XCR::Sequence::IFileFormat::InputEvent::Type)
//{
//    mangled_ppc("??0InputEvent@IFileFormat@Sequence@XCR@@QAA@W4Type@0123@@Z");
//};

//public: XCR::Sequence::IFileFormat::WaitEvent::WaitEvent(void)
//{
//    mangled_ppc("??0WaitEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::DeviceInputEvent::DeviceInputEvent(enum XCR::Sequence::IFileFormat::InputEvent::Type)
//{
//    mangled_ppc("??0DeviceInputEvent@IFileFormat@Sequence@XCR@@QAA@W4Type@InputEvent@123@@Z");
//};

//public: XCR::Sequence::IFileFormat::GamepadConnectEvent::GamepadConnectEvent(void)
//{
//    mangled_ppc("??0GamepadConnectEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::GamepadStateEvent::GamepadStateEvent(void)
//{
//    mangled_ppc("??0GamepadStateEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::KeyboardConnectEvent::KeyboardConnectEvent(void)
//{
//    mangled_ppc("??0KeyboardConnectEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::KeyboardStateEvent::KeyboardStateEvent(void)
//{
//    mangled_ppc("??0KeyboardStateEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

//public: XCR::Sequence::IFileFormat::AnyDeviceDisconnectEvent::AnyDeviceDisconnectEvent(void)
//{
//    mangled_ppc("??0AnyDeviceDisconnectEvent@IFileFormat@Sequence@XCR@@QAA@XZ");
//};

