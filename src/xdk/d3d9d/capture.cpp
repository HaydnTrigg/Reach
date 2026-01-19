/* ---------- headers */

#include "xdk\d3d9d\capture.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// D3D__PIXChicken; // "D3D__PIXChicken"

// void D3D::FlushMemory(void *, void *);
// void D3D::FreeGpuCapture(void (*)(void *), class D3D::CCapture *);
// public: static void * D3D::CCapture::HashMap::HashMemAlloc(unsigned long);
// public: static void D3D::CCapture::HashMap::HashMemFree(void *);
// public: void D3D::CCapture::WriteData(enum RecordType, void const *, unsigned long, unsigned long, unsigned long, unsigned long);
// protected: virtual int D3D::CCapture::ParseRegisters(unsigned long, void *, unsigned long);
// public: virtual void D3D::CCapture::PostSubmit(void);
// public: virtual long D3D::CCapture::Start(void);
// void * D3D::CaptureAlloc(unsigned long);
// void D3D::CaptureFree(void *);
// int D3D::IsCoherentResourceType(enum RecordResourceType);
// protected: virtual void D3D::CFullCapture::ShadowShaderProgram(unsigned long *, unsigned long, unsigned long, unsigned long);
// DmTell;
// protected: int D3D::CFullCapture::SaveResetRanges(void);
// protected: void D3D::CFullCapture::MarkVertexFetch(union GPUVERTEX_FETCH_CONSTANT *);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_ADDRESS_64KB;
// GPU_CONVERT_GPU_TO_CPU_ADDRESS_16MB;
// GPU_CONVERT_GPU_TO_CPU_ADDRESS_4KB;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS;
// public: D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>(void);
// public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::clear(void);
// public: struct D3D::CCapture::HashMap::ENTRY * D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::begin(void) const;
// public: struct D3D::CCapture::HashMap::ENTRY * D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::end(void) const;
// public: unsigned long D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::size(void) const;
// public: unsigned long D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::capacity(void) const;
// public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::ensure2(unsigned long, long &);
// public: D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::~D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>(void);
// public: D3D::CCapture::HashMap::HashMap(void);
// public: void D3D::CCapture::HashMap::Clear(void);
// public: float D3D::CCapture::HashMap::GetAve(void);
// public: unsigned long D3D::CCapture::HashMap::GetMax(void);
// protected: virtual void D3D::CCapture::SavePages(void);
// protected: virtual int D3D::CCapture::HandleType3Opcode(unsigned long, unsigned long *, unsigned long, int);
// public: virtual int D3D::CCapture::PreSubmit(void const *, unsigned long, unsigned long);
// void D3D::CaptureWrite(void const *, unsigned long);
// public: virtual void D3D::CCapture::Initialize(struct D3DDevice *, unsigned long, void (*)(void const *, unsigned long), void * (*)(unsigned long), void (*)(void *));
// public: virtual long D3D::CCapture::End(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: void D3D::CFullCapture::MarkInvalidatedPages(unsigned long, unsigned long);
// protected: virtual void D3D::CFullCapture::SavePages(void);
// long D3D::ShaderInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *);
// protected: unsigned long D3D::CFullCapture::ComputeCRC(unsigned long);
// protected: void D3D::CFullCapture::ProcessXpsIndexBuffer(unsigned long, unsigned long);
// public: virtual void D3D::CFullCapture::PostSubmit(void);
// public: virtual void D3D::CFullCapture::Initialize(struct D3DDevice *, unsigned long, void (*)(void const *, unsigned long), void * (*)(unsigned long), void (*)(void *));
// D3D__GetTextureSizes;
// public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::ensure(unsigned long, long &);
// public: D3D::CCapture::HashMap::~HashMap(void);
// public: D3D::CCapture::CCapture(void);
// protected: virtual void D3D::CCapture::ShadowShaderProgram(unsigned long *, unsigned long, unsigned long, unsigned long);
// public: virtual void D3D::CFullCapture::MarkUsedPages(unsigned long, unsigned long, enum RecordResourceType);
// protected: void D3D::CFullCapture::ProcessXpsFetchConstant(union GPUFETCH_CONSTANT *);
// protected: void D3D::CFullCapture::MarkTextureFetch(union GPUTEXTURE_FETCH_CONSTANT *);
// protected: virtual int D3D::CFullCapture::ParseRegisters(unsigned long, void *, unsigned long);
// protected: void D3D::CFullCapture::HandleRender(void);
// protected: virtual int D3D::CFullCapture::HandleType3Opcode(unsigned long, unsigned long *, unsigned long, int);
// public: virtual long D3D::CFullCapture::End(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::push_back_empty(long &);
// public: virtual D3D::CCapture::~CCapture(void);
// merged_83AA6770;
// public: D3D::CFullCapture::CFullCapture(void);
// public: virtual D3D::CFullCapture::~CFullCapture(void);
// public: unsigned long * D3D::CCapture::HashMap::Create(unsigned long);
// public: virtual void D3D::CCapture::MarkUsedPages(unsigned long, unsigned long, enum RecordResourceType);
// class D3D::CCapture * D3D::AllocGpuCapture(void * (*)(unsigned long), int);
// merged_83AA6C20;

//void D3D::FlushMemory(void *, void *)
//{
//    mangled_ppc("?FlushMemory@D3D@@YAXPAX0@Z");
//};

//void D3D::FreeGpuCapture(void (*)(void *), class D3D::CCapture *)
//{
//    mangled_ppc("?FreeGpuCapture@D3D@@YAXP6AXPAX@ZPAVCCapture@1@@Z");
//};

//public: static void * D3D::CCapture::HashMap::HashMemAlloc(unsigned long)
//{
//    mangled_ppc("?HashMemAlloc@HashMap@CCapture@D3D@@SAPAXK@Z");
//};

//public: static void D3D::CCapture::HashMap::HashMemFree(void *)
//{
//    mangled_ppc("?HashMemFree@HashMap@CCapture@D3D@@SAXPAX@Z");
//};

//public: void D3D::CCapture::WriteData(enum RecordType, void const *, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?WriteData@CCapture@D3D@@QAAXW4RecordType@@PBXKKKK@Z");
//};

//protected: virtual int D3D::CCapture::ParseRegisters(unsigned long, void *, unsigned long)
//{
//    mangled_ppc("?ParseRegisters@CCapture@D3D@@MAAHKPAXK@Z");
//};

//public: virtual void D3D::CCapture::PostSubmit(void)
//{
//    mangled_ppc("?PostSubmit@CCapture@D3D@@UAAXXZ");
//};

//public: virtual long D3D::CCapture::Start(void)
//{
//    mangled_ppc("?Start@CCapture@D3D@@UAAJXZ");
//};

//void * D3D::CaptureAlloc(unsigned long)
//{
//    mangled_ppc("?CaptureAlloc@D3D@@YAPAXK@Z");
//};

//void D3D::CaptureFree(void *)
//{
//    mangled_ppc("?CaptureFree@D3D@@YAXPAX@Z");
//};

//int D3D::IsCoherentResourceType(enum RecordResourceType)
//{
//    mangled_ppc("?IsCoherentResourceType@D3D@@YAHW4RecordResourceType@@@Z");
//};

//protected: virtual void D3D::CFullCapture::ShadowShaderProgram(unsigned long *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ShadowShaderProgram@CFullCapture@D3D@@MAAXPAKKKK@Z");
//};

//DmTell
//{
//    mangled_ppc("DmTell");
//};

//protected: int D3D::CFullCapture::SaveResetRanges(void)
//{
//    mangled_ppc("?SaveResetRanges@CFullCapture@D3D@@IAAHXZ");
//};

//protected: void D3D::CFullCapture::MarkVertexFetch(union GPUVERTEX_FETCH_CONSTANT *)
//{
//    mangled_ppc("?MarkVertexFetch@CFullCapture@D3D@@IAAXPATGPUVERTEX_FETCH_CONSTANT@@@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_ADDRESS_64KB
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_ADDRESS_64KB");
//};

//GPU_CONVERT_GPU_TO_CPU_ADDRESS_16MB
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_ADDRESS_16MB");
//};

//GPU_CONVERT_GPU_TO_CPU_ADDRESS_4KB
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_ADDRESS_4KB");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS");
//};

//public: D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>(void)
//{
//    mangled_ppc("??0?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAA@XZ");
//};

//public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::clear(void)
//{
//    mangled_ppc("?clear@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::CCapture::HashMap::ENTRY * D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::begin(void) const
//{
//    mangled_ppc("?begin@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QBAPAUENTRY@HashMap@CCapture@2@XZ");
//};

//public: struct D3D::CCapture::HashMap::ENTRY * D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::end(void) const
//{
//    mangled_ppc("?end@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QBAPAUENTRY@HashMap@CCapture@2@XZ");
//};

//public: unsigned long D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::size(void) const
//{
//    mangled_ppc("?size@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QBAKXZ");
//};

//public: unsigned long D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::capacity(void) const
//{
//    mangled_ppc("?capacity@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QBAKXZ");
//};

//public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::ensure2(unsigned long, long &)
//{
//    mangled_ppc("?ensure2@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//public: D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::~D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>(void)
//{
//    mangled_ppc("??1?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAA@XZ");
//};

//public: D3D::CCapture::HashMap::HashMap(void)
//{
//    mangled_ppc("??0HashMap@CCapture@D3D@@QAA@XZ");
//};

//public: void D3D::CCapture::HashMap::Clear(void)
//{
//    mangled_ppc("?Clear@HashMap@CCapture@D3D@@QAAXXZ");
//};

//public: float D3D::CCapture::HashMap::GetAve(void)
//{
//    mangled_ppc("?GetAve@HashMap@CCapture@D3D@@QAAMXZ");
//};

//public: unsigned long D3D::CCapture::HashMap::GetMax(void)
//{
//    mangled_ppc("?GetMax@HashMap@CCapture@D3D@@QAAKXZ");
//};

//protected: virtual void D3D::CCapture::SavePages(void)
//{
//    mangled_ppc("?SavePages@CCapture@D3D@@MAAXXZ");
//};

//protected: virtual int D3D::CCapture::HandleType3Opcode(unsigned long, unsigned long *, unsigned long, int)
//{
//    mangled_ppc("?HandleType3Opcode@CCapture@D3D@@MAAHKPAKKH@Z");
//};

//public: virtual int D3D::CCapture::PreSubmit(void const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?PreSubmit@CCapture@D3D@@UAAHPBXKK@Z");
//};

//void D3D::CaptureWrite(void const *, unsigned long)
//{
//    mangled_ppc("?CaptureWrite@D3D@@YAXPBXK@Z");
//};

//public: virtual void D3D::CCapture::Initialize(struct D3DDevice *, unsigned long, void (*)(void const *, unsigned long), void * (*)(unsigned long), void (*)(void *))
//{
//    mangled_ppc("?Initialize@CCapture@D3D@@UAAXPAUD3DDevice@@KP6AXPBXK@ZP6APAXK@ZP6AXPAX@Z@Z");
//};

//public: virtual long D3D::CCapture::End(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?End@CCapture@D3D@@UAAJPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: void D3D::CFullCapture::MarkInvalidatedPages(unsigned long, unsigned long)
//{
//    mangled_ppc("?MarkInvalidatedPages@CFullCapture@D3D@@QAAXKK@Z");
//};

//protected: virtual void D3D::CFullCapture::SavePages(void)
//{
//    mangled_ppc("?SavePages@CFullCapture@D3D@@MAAXXZ");
//};

//long D3D::ShaderInstructionCallback(unsigned long, unsigned long, union GPUSHADER_INSTRUCTION *, void *)
//{
//    mangled_ppc("?ShaderInstructionCallback@D3D@@YAJKKPATGPUSHADER_INSTRUCTION@@PAX@Z");
//};

//protected: unsigned long D3D::CFullCapture::ComputeCRC(unsigned long)
//{
//    mangled_ppc("?ComputeCRC@CFullCapture@D3D@@IAAKK@Z");
//};

//protected: void D3D::CFullCapture::ProcessXpsIndexBuffer(unsigned long, unsigned long)
//{
//    mangled_ppc("?ProcessXpsIndexBuffer@CFullCapture@D3D@@IAAXKK@Z");
//};

//public: virtual void D3D::CFullCapture::PostSubmit(void)
//{
//    mangled_ppc("?PostSubmit@CFullCapture@D3D@@UAAXXZ");
//};

//public: virtual void D3D::CFullCapture::Initialize(struct D3DDevice *, unsigned long, void (*)(void const *, unsigned long), void * (*)(unsigned long), void (*)(void *))
//{
//    mangled_ppc("?Initialize@CFullCapture@D3D@@UAAXPAUD3DDevice@@KP6AXPBXK@ZP6APAXK@ZP6AXPAX@Z@Z");
//};

//D3D__GetTextureSizes
//{
//    mangled_ppc("D3D__GetTextureSizes");
//};

//public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::ensure(unsigned long, long &)
//{
//    mangled_ppc("?ensure@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAAXKAAJ@Z");
//};

//public: D3D::CCapture::HashMap::~HashMap(void)
//{
//    mangled_ppc("??1HashMap@CCapture@D3D@@QAA@XZ");
//};

//public: D3D::CCapture::CCapture(void)
//{
//    mangled_ppc("??0CCapture@D3D@@QAA@XZ");
//};

//protected: virtual void D3D::CCapture::ShadowShaderProgram(unsigned long *, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ShadowShaderProgram@CCapture@D3D@@MAAXPAKKKK@Z");
//};

//public: virtual void D3D::CFullCapture::MarkUsedPages(unsigned long, unsigned long, enum RecordResourceType)
//{
//    mangled_ppc("?MarkUsedPages@CFullCapture@D3D@@UAAXKKW4RecordResourceType@@@Z");
//};

//protected: void D3D::CFullCapture::ProcessXpsFetchConstant(union GPUFETCH_CONSTANT *)
//{
//    mangled_ppc("?ProcessXpsFetchConstant@CFullCapture@D3D@@IAAXPATGPUFETCH_CONSTANT@@@Z");
//};

//protected: void D3D::CFullCapture::MarkTextureFetch(union GPUTEXTURE_FETCH_CONSTANT *)
//{
//    mangled_ppc("?MarkTextureFetch@CFullCapture@D3D@@IAAXPATGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//protected: virtual int D3D::CFullCapture::ParseRegisters(unsigned long, void *, unsigned long)
//{
//    mangled_ppc("?ParseRegisters@CFullCapture@D3D@@MAAHKPAXK@Z");
//};

//protected: void D3D::CFullCapture::HandleRender(void)
//{
//    mangled_ppc("?HandleRender@CFullCapture@D3D@@IAAXXZ");
//};

//protected: virtual int D3D::CFullCapture::HandleType3Opcode(unsigned long, unsigned long *, unsigned long, int)
//{
//    mangled_ppc("?HandleType3Opcode@CFullCapture@D3D@@MAAHKPAKKH@Z");
//};

//public: virtual long D3D::CFullCapture::End(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?End@CFullCapture@D3D@@UAAJPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: void D3D::D3DFastVector<struct D3D::CCapture::HashMap::ENTRY, void * (D3D::CCapture::HashMap::HashMemAlloc::*)(unsigned long), void (D3D::CCapture::HashMap::HashMemFree::*)(void *)>::push_back_empty(long &)
//{
//    mangled_ppc("?push_back_empty@?$D3DFastVector@UENTRY@HashMap@CCapture@D3D@@$1?HashMemAlloc@234@SAPAXK@Z$1?HashMemFree@234@SAXPAX@Z@D3D@@QAAXAAJ@Z");
//};

//public: virtual D3D::CCapture::~CCapture(void)
//{
//    mangled_ppc("??1CCapture@D3D@@UAA@XZ");
//};

//merged_83AA6770
//{
//    mangled_ppc("merged_83AA6770");
//};

//public: D3D::CFullCapture::CFullCapture(void)
//{
//    mangled_ppc("??0CFullCapture@D3D@@QAA@XZ");
//};

//public: virtual D3D::CFullCapture::~CFullCapture(void)
//{
//    mangled_ppc("??1CFullCapture@D3D@@UAA@XZ");
//};

//public: unsigned long * D3D::CCapture::HashMap::Create(unsigned long)
//{
//    mangled_ppc("?Create@HashMap@CCapture@D3D@@QAAPAKK@Z");
//};

//public: virtual void D3D::CCapture::MarkUsedPages(unsigned long, unsigned long, enum RecordResourceType)
//{
//    mangled_ppc("?MarkUsedPages@CCapture@D3D@@UAAXKKW4RecordResourceType@@@Z");
//};

//class D3D::CCapture * D3D::AllocGpuCapture(void * (*)(unsigned long), int)
//{
//    mangled_ppc("?AllocGpuCapture@D3D@@YAPAVCCapture@1@P6APAXK@ZH@Z");
//};

//merged_83AA6C20
//{
//    mangled_ppc("merged_83AA6C20");
//};

