/* ---------- headers */

#include "xdk\xecr\DebugChannelControl.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static struct XCR::DebugChannelControl::Command const *const const XCR::DebugChannelControl::s_commands; // "?s_commands@DebugChannelControl@XCR@@1QBUCommand@12@B"
// char const *const `public: virtual char const * __cdecl XCR::DebugChannelControl::GetHelpString(void)'::`2'::helpstring; // "?helpstring@?1??GetHelpString@DebugChannelControl@XCR@@UAAPBDXZ@4PBDB"
// protected: static struct _RTL_CRITICAL_SECTION XCR::DebugChannelControl::s_XCR_debug_channel_critical_section; // "?s_XCR_debug_channel_critical_section@DebugChannelControl@XCR@@1U_RTL_CRITICAL_SECTION@@A"
// protected: static bool XCR::DebugChannelControl::s_XCR_debug_channel_critical_section_initialized; // "?s_XCR_debug_channel_critical_section_initialized@DebugChannelControl@XCR@@1_NA"
// protected: static class XCR::DebugChannelControl *XCR::DebugChannelControl::s_XCR_debug_channel_control; // "?s_XCR_debug_channel_control@DebugChannelControl@XCR@@1PAV12@A"

// public: XCR::DebugChannelControl::DebugChannelControl(void);
// public: virtual XCR::DebugChannelControl::~DebugChannelControl(void);
// public: virtual class XCR::Result XCR::DebugChannelControl::SetStringProperty(char const *, char const *, char const *);
// public: virtual class XCR::Result XCR::DebugChannelControl::Start(void);
// public: virtual class XCR::Result XCR::DebugChannelControl::Stop(void);
// public: virtual class XCR::Result XCR::DebugChannelControl::Initialize(class XCR::ControlUnit::IControllerInterface *);
// public: virtual void XCR::DebugChannelControl::DoWork(unsigned long, unsigned long);
// protected: void XCR::DebugChannelControl::execute_command(char *, class XCR::Result &, bool &);
// public: virtual void XCR::DebugChannelControl::NotifyState(char const *);
// protected: void XCR::DebugChannelControl::register_debug_channel(void);
// protected: static long XCR::DebugChannelControl::XCR_debug_channel_cmd_proc(char const *, char *, unsigned long, struct _DM_CMDCONT *);
// protected: long XCR::DebugChannelControl::process_command(char const *, char *, unsigned long);
// protected: bool XCR::DebugChannelControl::parse_command(char *, char **, unsigned long *);
// protected: class XCR::Result XCR::DebugChannelControl::check_arg_count(unsigned long, unsigned long);
// protected: unsigned int XCR::DebugChannelControl::copy_string(char *, char const *, unsigned int);
// protected: struct XCR::DebugChannelControl::Command const * XCR::DebugChannelControl::find_command(char const *, struct XCR::DebugChannelControl::Command const *);
// protected: class XCR::Result XCR::DebugChannelControl::self_test(void);
// protected: void XCR::DebugChannelControl::build_signal_message(char *, int, char **, int, int);
// public: virtual char const * XCR::DebugChannelControl::GetHelpString(void);
// merged_83EA8E68;
// public: XCR::Dumper::EventDumper::~EventDumper(void);
// public: std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void);
// public: std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::~vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void);
// public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const * std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::operator->(void) const;
// public: class std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > > std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::operator++(int);
// public: std::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::~_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void);
// public: std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >(void);
// protected: bool std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Buy(unsigned int);
// protected: void std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Tidy(void);
// protected: std::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >);
// public: std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >(class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > const &);

//public: XCR::DebugChannelControl::DebugChannelControl(void)
//{
//    mangled_ppc("??0DebugChannelControl@XCR@@QAA@XZ");
//};

//public: virtual XCR::DebugChannelControl::~DebugChannelControl(void)
//{
//    mangled_ppc("??1DebugChannelControl@XCR@@UAA@XZ");
//};

//public: virtual class XCR::Result XCR::DebugChannelControl::SetStringProperty(char const *, char const *, char const *)
//{
//    mangled_ppc("?SetStringProperty@DebugChannelControl@XCR@@UAA?AVResult@2@PBD00@Z");
//};

//public: virtual class XCR::Result XCR::DebugChannelControl::Start(void)
//{
//    mangled_ppc("?Start@DebugChannelControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::DebugChannelControl::Stop(void)
//{
//    mangled_ppc("?Stop@DebugChannelControl@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual class XCR::Result XCR::DebugChannelControl::Initialize(class XCR::ControlUnit::IControllerInterface *)
//{
//    mangled_ppc("?Initialize@DebugChannelControl@XCR@@UAA?AVResult@2@PAVIControllerInterface@ControlUnit@2@@Z");
//};

//public: virtual void XCR::DebugChannelControl::DoWork(unsigned long, unsigned long)
//{
//    mangled_ppc("?DoWork@DebugChannelControl@XCR@@UAAXKK@Z");
//};

//protected: void XCR::DebugChannelControl::execute_command(char *, class XCR::Result &, bool &)
//{
//    mangled_ppc("?execute_command@DebugChannelControl@XCR@@IAAXPADAAVResult@2@AA_N@Z");
//};

//public: virtual void XCR::DebugChannelControl::NotifyState(char const *)
//{
//    mangled_ppc("?NotifyState@DebugChannelControl@XCR@@UAAXPBD@Z");
//};

//protected: void XCR::DebugChannelControl::register_debug_channel(void)
//{
//    mangled_ppc("?register_debug_channel@DebugChannelControl@XCR@@IAAXXZ");
//};

//protected: static long XCR::DebugChannelControl::XCR_debug_channel_cmd_proc(char const *, char *, unsigned long, struct _DM_CMDCONT *)
//{
//    mangled_ppc("?XCR_debug_channel_cmd_proc@DebugChannelControl@XCR@@KAJPBDPADKPAU_DM_CMDCONT@@@Z");
//};

//protected: long XCR::DebugChannelControl::process_command(char const *, char *, unsigned long)
//{
//    mangled_ppc("?process_command@DebugChannelControl@XCR@@IAAJPBDPADK@Z");
//};

//protected: bool XCR::DebugChannelControl::parse_command(char *, char **, unsigned long *)
//{
//    mangled_ppc("?parse_command@DebugChannelControl@XCR@@IAA_NPADPAPADPAK@Z");
//};

//protected: class XCR::Result XCR::DebugChannelControl::check_arg_count(unsigned long, unsigned long)
//{
//    mangled_ppc("?check_arg_count@DebugChannelControl@XCR@@IAA?AVResult@2@KK@Z");
//};

//protected: unsigned int XCR::DebugChannelControl::copy_string(char *, char const *, unsigned int)
//{
//    mangled_ppc("?copy_string@DebugChannelControl@XCR@@IAAIPADPBDI@Z");
//};

//protected: struct XCR::DebugChannelControl::Command const * XCR::DebugChannelControl::find_command(char const *, struct XCR::DebugChannelControl::Command const *)
//{
//    mangled_ppc("?find_command@DebugChannelControl@XCR@@IAAPBUCommand@12@PBDPBU312@@Z");
//};

//protected: class XCR::Result XCR::DebugChannelControl::self_test(void)
//{
//    mangled_ppc("?self_test@DebugChannelControl@XCR@@IAA?AVResult@2@XZ");
//};

//protected: void XCR::DebugChannelControl::build_signal_message(char *, int, char **, int, int)
//{
//    mangled_ppc("?build_signal_message@DebugChannelControl@XCR@@IAAXPADHPAPADHH@Z");
//};

//public: virtual char const * XCR::DebugChannelControl::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@DebugChannelControl@XCR@@UAAPBDXZ");
//};

//merged_83EA8E68
//{
//    mangled_ppc("merged_83EA8E68");
//};

//public: XCR::Dumper::EventDumper::~EventDumper(void)
//{
//    mangled_ppc("??1EventDumper@Dumper@XCR@@QAA@XZ");
//};

//public: std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void)
//{
//    mangled_ppc("??0?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAA@XZ");
//};

//public: std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::~vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void)
//{
//    mangled_ppc("??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAA@XZ");
//};

//public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const * std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::operator->(void) const
//{
//    mangled_ppc("??C?$_Vector_const_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QBAPBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@XZ");
//};

//public: class std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > > std::_Vector_const_iterator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::operator++(int)
//{
//    mangled_ppc("??E?$_Vector_const_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAA?AV01@H@Z");
//};

//public: std::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::~_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(void)
//{
//    mangled_ppc("??1?$_Vector_val@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAA@XZ");
//};

//public: std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >(void)
//{
//    mangled_ppc("??0?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAA@XZ");
//};

//protected: bool std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Buy(unsigned int)
//{
//    mangled_ppc("?_Buy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAA_NI@Z");
//};

//protected: void std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Tidy(void)
//{
//    mangled_ppc("?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAAXXZ");
//};

//protected: std::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >::_Vector_val<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> >, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > >(class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >)
//{
//    mangled_ppc("??0?$_Vector_val@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAA@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z");
//};

//public: std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > >(class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > > const &)
//{
//    mangled_ppc("??0?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAA@ABV01@@Z");
//};

