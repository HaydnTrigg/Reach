/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XenonUtility::DirectDiskOutputStream::DirectDiskOutputStream(void);
// public: virtual XenonUtility::DirectDiskOutputStream::~DirectDiskOutputStream(void);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Start(void);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Write(void const *, unsigned long);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Stop(void);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Continue(void);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: XenonUtility::BufferedAsynchronousDiskOutputStream::BufferedAsynchronousDiskOutputStream(void);
// public: virtual XenonUtility::BufferedAsynchronousDiskOutputStream::~BufferedAsynchronousDiskOutputStream(void);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Start(void);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Write(void const *, unsigned long);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Stop(void);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SetBufferSize(unsigned long);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SetAsynchronous(bool);
// protected: void XenonUtility::BufferedAsynchronousDiskOutputStream::cleanup_resources(void);
// protected: static unsigned long XenonUtility::BufferedAsynchronousDiskOutputStream::write_thread(void *);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Continue(void);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SaveState(class XenonUtility::DirectDiskOutputStream *);
// public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::ResumeState(class XenonUtility::DirectDiskInputStream *);
// public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XenonUtility::DiskOutputStream::GetFilename(void);
// merged_84C843E0;
// public: XenonUtility::DiskOutputStream::DiskOutputStream(void);
// merged_84C84498;
// public: virtual XenonUtility::DiskOutputStream::~DiskOutputStream(void);
// public: virtual XenonUtility::OutputStream::~OutputStream(void);
// merged_84C84570;
// public: XenonUtility::OutputStream::OutputStream(void);
// merged_84C84600;

//public: XenonUtility::DirectDiskOutputStream::DirectDiskOutputStream(void)
//{
//    mangled_ppc("??0DirectDiskOutputStream@XenonUtility@@QAA@XZ");
//};

//public: virtual XenonUtility::DirectDiskOutputStream::~DirectDiskOutputStream(void)
//{
//    mangled_ppc("??1DirectDiskOutputStream@XenonUtility@@UAA@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Start(void)
//{
//    mangled_ppc("?Start@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Write(void const *, unsigned long)
//{
//    mangled_ppc("?Write@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@PBXK@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Stop(void)
//{
//    mangled_ppc("?Stop@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::Continue(void)
//{
//    mangled_ppc("?Continue@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@PAV12@@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::DirectDiskOutputStream::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@DirectDiskOutputStream@XenonUtility@@UAA?AVResult@2@PAVDirectDiskInputStream@2@@Z");
//};

//public: XenonUtility::BufferedAsynchronousDiskOutputStream::BufferedAsynchronousDiskOutputStream(void)
//{
//    mangled_ppc("??0BufferedAsynchronousDiskOutputStream@XenonUtility@@QAA@XZ");
//};

//public: virtual XenonUtility::BufferedAsynchronousDiskOutputStream::~BufferedAsynchronousDiskOutputStream(void)
//{
//    mangled_ppc("??1BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Start(void)
//{
//    mangled_ppc("?Start@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Write(void const *, unsigned long)
//{
//    mangled_ppc("?Write@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@PBXK@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Stop(void)
//{
//    mangled_ppc("?Stop@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SetBufferSize(unsigned long)
//{
//    mangled_ppc("?SetBufferSize@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@K@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SetAsynchronous(bool)
//{
//    mangled_ppc("?SetAsynchronous@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@_N@Z");
//};

//protected: void XenonUtility::BufferedAsynchronousDiskOutputStream::cleanup_resources(void)
//{
//    mangled_ppc("?cleanup_resources@BufferedAsynchronousDiskOutputStream@XenonUtility@@IAAXXZ");
//};

//protected: static unsigned long XenonUtility::BufferedAsynchronousDiskOutputStream::write_thread(void *)
//{
//    mangled_ppc("?write_thread@BufferedAsynchronousDiskOutputStream@XenonUtility@@KAKPAX@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::Continue(void)
//{
//    mangled_ppc("?Continue@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@XZ");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::SaveState(class XenonUtility::DirectDiskOutputStream *)
//{
//    mangled_ppc("?SaveState@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@PAVDirectDiskOutputStream@2@@Z");
//};

//public: virtual class XenonUtility::Result XenonUtility::BufferedAsynchronousDiskOutputStream::ResumeState(class XenonUtility::DirectDiskInputStream *)
//{
//    mangled_ppc("?ResumeState@BufferedAsynchronousDiskOutputStream@XenonUtility@@UAA?AVResult@2@PAVDirectDiskInputStream@2@@Z");
//};

//public: virtual class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > XenonUtility::DiskOutputStream::GetFilename(void)
//{
//    mangled_ppc("?GetFilename@DiskOutputStream@XenonUtility@@UAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
//};

//merged_84C843E0
//{
//    mangled_ppc("merged_84C843E0");
//};

//public: XenonUtility::DiskOutputStream::DiskOutputStream(void)
//{
//    mangled_ppc("??0DiskOutputStream@XenonUtility@@QAA@XZ");
//};

//merged_84C84498
//{
//    mangled_ppc("merged_84C84498");
//};

//public: virtual XenonUtility::DiskOutputStream::~DiskOutputStream(void)
//{
//    mangled_ppc("??1DiskOutputStream@XenonUtility@@UAA@XZ");
//};

//public: virtual XenonUtility::OutputStream::~OutputStream(void)
//{
//    mangled_ppc("??1OutputStream@XenonUtility@@UAA@XZ");
//};

//merged_84C84570
//{
//    mangled_ppc("merged_84C84570");
//};

//public: XenonUtility::OutputStream::OutputStream(void)
//{
//    mangled_ppc("??0OutputStream@XenonUtility@@QAA@XZ");
//};

//merged_84C84600
//{
//    mangled_ppc("merged_84C84600");
//};

