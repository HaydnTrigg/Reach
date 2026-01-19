/* ---------- headers */

#include "xdk\xaudiod\sourcestream.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static unsigned short const XAUDIO::CSourceStream::m_VolumeFadeFrameCount; // "?m_VolumeFadeFrameCount@CSourceStream@XAUDIO@@1GB"
// protected: static float const XAUDIO::CSourceStream::m_VolumeFadeAmount; // "?m_VolumeFadeAmount@CSourceStream@XAUDIO@@1MB"

// public: XAUDIO::CSourceStream::CSourceStream(void);
// public: virtual XAUDIO::CSourceStream::~CSourceStream(void);
// public: virtual void XAUDIO::CSourceStream::Initialize(struct XAUDIOSOURCEFORMAT const *, unsigned char, unsigned char, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CSourceStream::FlushPackets(void);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// void operator delete(void *);
// protected: int XAUDIO::CSourceStream::IsValidAlignment(unsigned long);
// merged_84884C00;
// public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::Remove(struct XAUDIO::XAUDIOPACKETCTX *);
// public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::PopNextEntry(struct XAUDIO::XAUDIOPACKETCTX *, int);
// public: int XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::EntryInList(struct XAUDIO::XAUDIOPACKETCTX *);
// public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::CreateBefore(struct XAUDIO::XAUDIOPACKETCTX *, struct XAUDIO::XAUDIOPACKETCTX *);
// public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::GetNextFreePacket(struct XAUDIO::XAUDIOPACKETCTX *);
// public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::CreateTail(struct XAUDIO::XAUDIOPACKETCTX *);
// protected: long XAUDIO::CSourceStream::FinishSubmit(struct XAUDIO::XAUDIOPACKETCTX *, unsigned char);
// public: virtual long XAUDIO::CSourceStream::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char);
// public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::AllocPacket(void);
// public: void XAUDIO::CPacketQueue::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *);
// public: virtual long XAUDIO::CSourceStream::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// public: virtual long XAUDIO::CSourceStream::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CSourceStream::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long);

//public: XAUDIO::CSourceStream::CSourceStream(void)
//{
//    mangled_ppc("??0CSourceStream@XAUDIO@@QAA@XZ");
//};

//public: virtual XAUDIO::CSourceStream::~CSourceStream(void)
//{
//    mangled_ppc("??1CSourceStream@XAUDIO@@UAA@XZ");
//};

//public: virtual void XAUDIO::CSourceStream::Initialize(struct XAUDIOSOURCEFORMAT const *, unsigned char, unsigned char, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?Initialize@CSourceStream@XAUDIO@@UAAXPBUXAUDIOSOURCEFORMAT@@EEPAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CSourceStream::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CSourceStream@XAUDIO@@UAAJXZ");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//protected: int XAUDIO::CSourceStream::IsValidAlignment(unsigned long)
//{
//    mangled_ppc("?IsValidAlignment@CSourceStream@XAUDIO@@IAAHK@Z");
//};

//merged_84884C00
//{
//    mangled_ppc("merged_84884C00");
//};

//public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::Remove(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?Remove@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAXPAUXAUDIOPACKETCTX@2@@Z");
//};

//public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::PopNextEntry(struct XAUDIO::XAUDIOPACKETCTX *, int)
//{
//    mangled_ppc("?PopNextEntry@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAPAUXAUDIOPACKETCTX@2@PAU32@H@Z");
//};

//public: int XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::EntryInList(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?EntryInList@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAHPAUXAUDIOPACKETCTX@2@@Z");
//};

//public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::CreateBefore(struct XAUDIO::XAUDIOPACKETCTX *, struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?CreateBefore@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAXPAUXAUDIOPACKETCTX@2@0@Z");
//};

//public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::GetNextFreePacket(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?GetNextFreePacket@CPacketQueue@XAUDIO@@QAAPAUXAUDIOPACKETCTX@2@PAU32@@Z");
//};

//public: void XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::CreateTail(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?CreateTail@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAXPAUXAUDIOPACKETCTX@2@@Z");
//};

//protected: long XAUDIO::CSourceStream::FinishSubmit(struct XAUDIO::XAUDIOPACKETCTX *, unsigned char)
//{
//    mangled_ppc("?FinishSubmit@CSourceStream@XAUDIO@@IAAJPAUXAUDIOPACKETCTX@2@E@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char)
//{
//    mangled_ppc("?SetFormat@CSourceStream@XAUDIO@@UAAJPBUXAUDIOSOURCEFORMAT@@E@Z");
//};

//public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::AllocPacket(void)
//{
//    mangled_ppc("?AllocPacket@CPacketQueue@XAUDIO@@QAAPAUXAUDIOPACKETCTX@2@XZ");
//};

//public: void XAUDIO::CPacketQueue::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?CompletePacket@CPacketQueue@XAUDIO@@QAAXPAUXAUDIOPACKETCTX@2@@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CSourceStream@XAUDIO@@UAAJPBUXAUDIOPACKET@@E@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CSourceStream@XAUDIO@@UAAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CSourceStream::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long)
//{
//    mangled_ppc("?CompletePacket@CSourceStream@XAUDIO@@MAAPAUXAUDIOPACKETCTX@2@PAU32@J@Z");
//};

