/* ---------- headers */

#include "xdk\xecr\XCR.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static char const **XCR::ControlUnit::Core::s_initial_components; // "?s_initial_components@Core@ControlUnit@XCR@@1PAPBDA"
// class XCR::ControlUnit::Core *XCR::xcr; // "?xcr@XCR@@3PAVCore@ControlUnit@1@A"

// class XCR::ControlUnit::Core * XCR::XcrGet(void);
// protected: static class XCR::ControlUnit::IComponent * XCR::ControlUnit::Core::GetInitialComponent(char const *);
// public: XCR::DirectDiskLogger::DirectDiskLogger(void);
// public: virtual class XCR::Result XCR::ControlUnit::ILogger::Initialize(void);
// public: virtual enum XCR::ControlUnit::IComponent::ComponentType XCR::ControlUnit::ILogger::GetComponentType(void);
// public: virtual class XCR::Result XCR::StreamLogger::GetStatus(void);
// public: virtual char const * XCR::DirectDiskLogger::GetHelpString(void);
// public: virtual class XCR::Result XCR::DirectDiskLogger::SetDefault(void);
// merged_83E9B5E8;
// public: virtual XCR::DirectDiskLogger::~DirectDiskLogger(void);
// public: virtual XCR::StreamLogger::~StreamLogger(void);
// public: virtual XCR::ControlUnit::ILogger::~ILogger(void);
// public: virtual XCR::ControlUnit::IComponent::~IComponent(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::SelectComponent(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::SetStringProperty(char const *, char const *, char const *);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::SetDefault(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::Start(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::Stop(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::GetStatus(void);
// public: virtual char const * XCR::ControlUnit::IComponent::GetHelpString(void);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XCR::Result XCR::ControlUnit::IComponent::ResumeState(class XenonUtility::DirectDiskInputStream *);
// merged_83E9B970;
// public: XCR::BufferedAsynchronousDiskLogger::BufferedAsynchronousDiskLogger(void);
// public: virtual char const * XCR::BufferedAsynchronousDiskLogger::GetHelpString(void);
// public: virtual class XCR::Result XCR::BufferedAsynchronousDiskLogger::SetDefault(void);
// merged_83E9BB30;
// public: virtual XCR::BufferedAsynchronousDiskLogger::~BufferedAsynchronousDiskLogger(void);

//class XCR::ControlUnit::Core * XCR::XcrGet(void)
//{
//    mangled_ppc("?XcrGet@XCR@@YAPAVCore@ControlUnit@1@XZ");
//};

//protected: static class XCR::ControlUnit::IComponent * XCR::ControlUnit::Core::GetInitialComponent(char const *)
//{
//    mangled_ppc("?GetInitialComponent@Core@ControlUnit@XCR@@KAPAVIComponent@23@PBD@Z");
//};

//public: XCR::DirectDiskLogger::DirectDiskLogger(void)
//{
//    mangled_ppc("??0DirectDiskLogger@XCR@@QAA@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::ILogger::Initialize(void)
//{
//    mangled_ppc("?Initialize@ILogger@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual enum XCR::ControlUnit::IComponent::ComponentType XCR::ControlUnit::ILogger::GetComponentType(void)
//{
//    mangled_ppc("?GetComponentType@ILogger@ControlUnit@XCR@@UAA?AW4ComponentType@IComponent@23@XZ");
//};

//public: virtual class XCR::Result XCR::StreamLogger::GetStatus(void)
//{
//    mangled_ppc("?GetStatus@StreamLogger@XCR@@UAA?AVResult@2@XZ");
//};

//public: virtual char const * XCR::DirectDiskLogger::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@DirectDiskLogger@XCR@@UAAPBDXZ");
//};

//public: virtual class XCR::Result XCR::DirectDiskLogger::SetDefault(void)
//{
//    mangled_ppc("?SetDefault@DirectDiskLogger@XCR@@UAA?AVResult@2@XZ");
//};

//merged_83E9B5E8
//{
//    mangled_ppc("merged_83E9B5E8");
//};

//public: virtual XCR::DirectDiskLogger::~DirectDiskLogger(void)
//{
//    mangled_ppc("??1DirectDiskLogger@XCR@@UAA@XZ");
//};

//public: virtual XCR::StreamLogger::~StreamLogger(void)
//{
//    mangled_ppc("??1StreamLogger@XCR@@UAA@XZ");
//};

//public: virtual XCR::ControlUnit::ILogger::~ILogger(void)
//{
//    mangled_ppc("??1ILogger@ControlUnit@XCR@@UAA@XZ");
//};

//public: virtual XCR::ControlUnit::IComponent::~IComponent(void)
//{
//    mangled_ppc("??1IComponent@ControlUnit@XCR@@UAA@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::SelectComponent(void)
//{
//    mangled_ppc("?SelectComponent@IComponent@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::SetStringProperty(char const *, char const *, char const *)
//{
//    mangled_ppc("?SetStringProperty@IComponent@ControlUnit@XCR@@UAA?AVResult@3@PBD00@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::SetDefault(void)
//{
//    mangled_ppc("?SetDefault@IComponent@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::Start(void)
//{
//    mangled_ppc("?Start@IComponent@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::Stop(void)
//{
//    mangled_ppc("?Stop@IComponent@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::GetStatus(void)
//{
//    mangled_ppc("?GetStatus@IComponent@ControlUnit@XCR@@UAA?AVResult@3@XZ");
//};

//public: virtual char const * XCR::ControlUnit::IComponent::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@IComponent@ControlUnit@XCR@@UAAPBDXZ");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@IComponent@ControlUnit@XCR@@UAA?AVResult@3@PAVDirectDiskOutputStream@XenonUtility@@@Z");
//};

//public: virtual class XCR::Result XCR::ControlUnit::IComponent::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@IComponent@ControlUnit@XCR@@UAA?AVResult@3@PAVDirectDiskInputStream@XenonUtility@@@Z");
//};

//merged_83E9B970
//{
//    mangled_ppc("merged_83E9B970");
//};

//public: XCR::BufferedAsynchronousDiskLogger::BufferedAsynchronousDiskLogger(void)
//{
//    mangled_ppc("??0BufferedAsynchronousDiskLogger@XCR@@QAA@XZ");
//};

//public: virtual char const * XCR::BufferedAsynchronousDiskLogger::GetHelpString(void)
//{
//    mangled_ppc("?GetHelpString@BufferedAsynchronousDiskLogger@XCR@@UAAPBDXZ");
//};

//public: virtual class XCR::Result XCR::BufferedAsynchronousDiskLogger::SetDefault(void)
//{
//    mangled_ppc("?SetDefault@BufferedAsynchronousDiskLogger@XCR@@UAA?AVResult@2@XZ");
//};

//merged_83E9BB30
//{
//    mangled_ppc("merged_83E9BB30");
//};

//public: virtual XCR::BufferedAsynchronousDiskLogger::~BufferedAsynchronousDiskLogger(void)
//{
//    mangled_ppc("??1BufferedAsynchronousDiskLogger@XCR@@UAA@XZ");
//};

