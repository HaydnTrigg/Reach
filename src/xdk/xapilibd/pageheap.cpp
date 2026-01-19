/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned short (__cdecl *PageHeap::s_pfnStackCapture)(unsigned long, unsigned long, void **, unsigned long *); // "?s_pfnStackCapture@PageHeap@@0P6AGKKPAPAXPAK@ZA"

// private: static unsigned long PageHeap::AlignDown(unsigned long, unsigned long);
// private: static unsigned long PageHeap::AlignUp(unsigned long, unsigned long);
// private: static unsigned long PageHeap::PageAlignDown(unsigned long);
// private: static unsigned long PageHeap::PageAlignUp(unsigned long);
// private: static void * PageHeap::PageAlignDown(void *);
// private: static unsigned long PageHeap::IndexToOffset(unsigned long);
// private: void * PageHeap::OffsetToMemory(unsigned long) const;
// private: void * PageHeap::IndexToMemory(unsigned long) const;
// private: unsigned long PageHeap::MemoryToIndex(void *) const;
// private: bool PageHeap::IsConserveMemory(void) const;
// private: PageHeap::PageHeap(enum _MEMORY_REGION_TYPE, unsigned long, unsigned long);
// private: PageHeap::~PageHeap(void);
// private: static void * PageHeap::operator new(unsigned int, void *);
// private: static void PageHeap::operator delete(void *);
// public: static void * PageHeap::Create(unsigned long, unsigned long);
// private: void * PageHeap::`scalar deleting destructor'(unsigned int);
// private: void PageHeap::LockAcquire(void);
// private: void PageHeap::LockRelease(void);
// private: unsigned long PageHeap::MapAllocate(unsigned long);
// private: void PageHeap::MapFree(unsigned long, unsigned long);
// private: static bool PageHeap::InfoValidate(struct PageHeap::_INFO const *);
// private: static unsigned short (* PageHeap::GetStackCaptureFunction(void))(unsigned long, unsigned long, void **, unsigned long *);
// private: static struct PageHeap::_INFO * PageHeap::BlockToInfo(void *);
// public: void * PageHeap::Destroy(void);
// public: static class PageHeap * PageHeap::Get(void *);
// public: void * PageHeap::Allocate(unsigned long);
// public: unsigned long PageHeap::Size(void *);
// public: unsigned long PageHeap::GetAttributes(void *);
// public: void PageHeap::SetAttributes(void *, unsigned long);
// private: static bool PageHeap::BlockValidate(void *);
// public: bool PageHeap::Free(void *);
// public: bool PageHeap::Validate(void *);
// public: void * PageHeap::Reallocate(void *, unsigned long);

//private: static unsigned long PageHeap::AlignDown(unsigned long, unsigned long)
//{
//    mangled_ppc("?AlignDown@PageHeap@@CAKKK@Z");
//};

//private: static unsigned long PageHeap::AlignUp(unsigned long, unsigned long)
//{
//    mangled_ppc("?AlignUp@PageHeap@@CAKKK@Z");
//};

//private: static unsigned long PageHeap::PageAlignDown(unsigned long)
//{
//    mangled_ppc("?PageAlignDown@PageHeap@@CAKK@Z");
//};

//private: static unsigned long PageHeap::PageAlignUp(unsigned long)
//{
//    mangled_ppc("?PageAlignUp@PageHeap@@CAKK@Z");
//};

//private: static void * PageHeap::PageAlignDown(void *)
//{
//    mangled_ppc("?PageAlignDown@PageHeap@@CAPAXPAX@Z");
//};

//private: static unsigned long PageHeap::IndexToOffset(unsigned long)
//{
//    mangled_ppc("?IndexToOffset@PageHeap@@CAKK@Z");
//};

//private: void * PageHeap::OffsetToMemory(unsigned long) const
//{
//    mangled_ppc("?OffsetToMemory@PageHeap@@ABAPAXK@Z");
//};

//private: void * PageHeap::IndexToMemory(unsigned long) const
//{
//    mangled_ppc("?IndexToMemory@PageHeap@@ABAPAXK@Z");
//};

//private: unsigned long PageHeap::MemoryToIndex(void *) const
//{
//    mangled_ppc("?MemoryToIndex@PageHeap@@ABAKPAX@Z");
//};

//private: bool PageHeap::IsConserveMemory(void) const
//{
//    mangled_ppc("?IsConserveMemory@PageHeap@@ABA_NXZ");
//};

//private: PageHeap::PageHeap(enum _MEMORY_REGION_TYPE, unsigned long, unsigned long)
//{
//    mangled_ppc("??0PageHeap@@AAA@W4_MEMORY_REGION_TYPE@@KK@Z");
//};

//private: PageHeap::~PageHeap(void)
//{
//    mangled_ppc("??1PageHeap@@AAA@XZ");
//};

//private: static void * PageHeap::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2PageHeap@@CAPAXIPAX@Z");
//};

//private: static void PageHeap::operator delete(void *)
//{
//    mangled_ppc("??3PageHeap@@CAXPAX@Z");
//};

//public: static void * PageHeap::Create(unsigned long, unsigned long)
//{
//    mangled_ppc("?Create@PageHeap@@SAPAXKK@Z");
//};

//private: void * PageHeap::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GPageHeap@@AAAPAXI@Z");
//};

//private: void PageHeap::LockAcquire(void)
//{
//    mangled_ppc("?LockAcquire@PageHeap@@AAAXXZ");
//};

//private: void PageHeap::LockRelease(void)
//{
//    mangled_ppc("?LockRelease@PageHeap@@AAAXXZ");
//};

//private: unsigned long PageHeap::MapAllocate(unsigned long)
//{
//    mangled_ppc("?MapAllocate@PageHeap@@AAAKK@Z");
//};

//private: void PageHeap::MapFree(unsigned long, unsigned long)
//{
//    mangled_ppc("?MapFree@PageHeap@@AAAXKK@Z");
//};

//private: static bool PageHeap::InfoValidate(struct PageHeap::_INFO const *)
//{
//    mangled_ppc("?InfoValidate@PageHeap@@CA_NPBU_INFO@1@@Z");
//};

//private: static unsigned short (* PageHeap::GetStackCaptureFunction(void))(unsigned long, unsigned long, void **, unsigned long *)
//{
//    mangled_ppc("?GetStackCaptureFunction@PageHeap@@CAP6AGKKPAPAXPAK@ZXZ");
//};

//private: static struct PageHeap::_INFO * PageHeap::BlockToInfo(void *)
//{
//    mangled_ppc("?BlockToInfo@PageHeap@@CAPAU_INFO@1@PAX@Z");
//};

//public: void * PageHeap::Destroy(void)
//{
//    mangled_ppc("?Destroy@PageHeap@@QAAPAXXZ");
//};

//public: static class PageHeap * PageHeap::Get(void *)
//{
//    mangled_ppc("?Get@PageHeap@@SAPAV1@PAX@Z");
//};

//public: void * PageHeap::Allocate(unsigned long)
//{
//    mangled_ppc("?Allocate@PageHeap@@QAAPAXK@Z");
//};

//public: unsigned long PageHeap::Size(void *)
//{
//    mangled_ppc("?Size@PageHeap@@QAAKPAX@Z");
//};

//public: unsigned long PageHeap::GetAttributes(void *)
//{
//    mangled_ppc("?GetAttributes@PageHeap@@QAAKPAX@Z");
//};

//public: void PageHeap::SetAttributes(void *, unsigned long)
//{
//    mangled_ppc("?SetAttributes@PageHeap@@QAAXPAXK@Z");
//};

//private: static bool PageHeap::BlockValidate(void *)
//{
//    mangled_ppc("?BlockValidate@PageHeap@@CA_NPAX@Z");
//};

//public: bool PageHeap::Free(void *)
//{
//    mangled_ppc("?Free@PageHeap@@QAA_NPAX@Z");
//};

//public: bool PageHeap::Validate(void *)
//{
//    mangled_ppc("?Validate@PageHeap@@QAA_NPAX@Z");
//};

//public: void * PageHeap::Reallocate(void *, unsigned long)
//{
//    mangled_ppc("?Reallocate@PageHeap@@QAAPAXPAXK@Z");
//};

