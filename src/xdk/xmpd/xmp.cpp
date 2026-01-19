/* ---------- headers */

#include "xdk\xmpd\xmp.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class CCriticalSection g_csOverrideRestore; // "?g_csOverrideRestore@@3VCCriticalSection@@A"
// int g_fOverriding; // "?g_fOverriding@@3HA"
// int g_fSetGameControllerOnRestore; // "?g_fSetGameControllerOnRestore@@3HA"

// public: CCriticalSection::CCriticalSection(void);
// public: virtual CCriticalSection::~CCriticalSection(void);
// public: void CCriticalSection::Enter(void);
// public: void CCriticalSection::Leave(void);
// unsigned long XMPCreateEnumeratorHandle(enum XMP_CLIENT, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void **);
// long XMPStartIORequest(enum XMP_CLIENT, unsigned long, struct _XOVERLAPPED *, void *, unsigned long);
// long XMPTransportControlHelper(enum XMP_CLIENT, unsigned long, struct _XOVERLAPPED *);
// unsigned long GetAllocationAttributes(enum XMP_CLIENT);
// int IsRtmFlash(void);
// XMPPlayTitlePlaylist;
// XMPPlayUserPlaylist;
// XMPContinue;
// XMPPause;
// XMPNext;
// XMPPrevious;
// XMPCreateUserPlaylistEnumerator;
// XMPCaptureOutput;
// unsigned long XMPCreateTitlePlaylistEx(enum XMP_CLIENT, struct XMP_SONGDESCRIPTOR *const, unsigned long, unsigned long, wchar_t const *, void **, void **);
// unsigned long XMPDeleteTitlePlaylistEx(enum XMP_CLIENT, void *);
// unsigned long XMPGetNowPlaying(enum XMP_CLIENT, struct XMP_NOWPLAYINGCONTENTINFO *, struct XMP_SONGINFOINTERNAL *, struct _XOVERLAPPED *);
// void XMPPlayTitlePlaylistEx(enum XMP_CLIENT, void *, void *);
// void XMPRestartTitlePlaylist(enum XMP_CLIENT, void *, void *, int);
// void XMPContinueEx(enum XMP_CLIENT);
// void XMPStopEx(enum XMP_CLIENT, int);
// void XMPPauseEx(enum XMP_CLIENT);
// void XMPNextEx(enum XMP_CLIENT);
// void XMPPreviousEx(enum XMP_CLIENT);
// unsigned long XMPSetPlaybackBehaviorEx(enum XMP_CLIENT, enum XMP_PLAYBACKMODE, enum XMP_REPEATMODE, unsigned long, struct _XOVERLAPPED *);
// unsigned long XMPGetPlaybackBehaviorEx(enum XMP_CLIENT, enum XMP_PLAYBACKMODE *, enum XMP_REPEATMODE *, unsigned long *);
// unsigned long XMPGetStatusEx(enum XMP_CLIENT, enum XMP_STATE *);
// unsigned long XMPGetVolumeEx(enum XMP_CLIENT, float *);
// unsigned long XMPSetVolumeEx(enum XMP_CLIENT, float, struct _XOVERLAPPED *);
// unsigned long XMPSetPlaybackController(enum XMP_CLIENT, enum XMP_SETPLAYBACKCONTROLLERREQUEST, int);
// unsigned long XMPSetPlaybackControllerEx(enum XMP_CLIENT, enum XMP_SETPLAYBACKCONTROLLERREQUEST, unsigned long);
// unsigned long XMPGetPlaybackController(enum XMP_CLIENT, enum XMP_PLAYBACKCONTROLLER *, int *);
// unsigned long XMPStopAndWaitForIdle(enum XMP_CLIENT, int, struct _XOVERLAPPED *);
// merged_848C0478;
// XMPCreateTitlePlaylist;
// XMPDeleteTitlePlaylist;
// XMPGetCurrentSong;
// XMPStop;
// XMPSetPlaybackBehavior;
// XMPGetPlaybackBehavior;
// XMPGetStatus;
// XMPTitleHasPlaybackControl;
// XMPGetVolume;
// XMPSetVolume;
// XMPOverrideBackgroundMusic;
// XMPRestoreBackgroundMusic;
// void g_csOverrideRestore::`dynamic atexit destructor'(void);

//public: CCriticalSection::CCriticalSection(void)
//{
//    mangled_ppc("??0CCriticalSection@@QAA@XZ");
//};

//public: virtual CCriticalSection::~CCriticalSection(void)
//{
//    mangled_ppc("??1CCriticalSection@@UAA@XZ");
//};

//public: void CCriticalSection::Enter(void)
//{
//    mangled_ppc("?Enter@CCriticalSection@@QAAXXZ");
//};

//public: void CCriticalSection::Leave(void)
//{
//    mangled_ppc("?Leave@CCriticalSection@@QAAXXZ");
//};

//unsigned long XMPCreateEnumeratorHandle(enum XMP_CLIENT, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void **)
//{
//    mangled_ppc("?XMPCreateEnumeratorHandle@@YAKW4XMP_CLIENT@@KKKKKPAPAX@Z");
//};

//long XMPStartIORequest(enum XMP_CLIENT, unsigned long, struct _XOVERLAPPED *, void *, unsigned long)
//{
//    mangled_ppc("?XMPStartIORequest@@YAJW4XMP_CLIENT@@KPAU_XOVERLAPPED@@PAXK@Z");
//};

//long XMPTransportControlHelper(enum XMP_CLIENT, unsigned long, struct _XOVERLAPPED *)
//{
//    mangled_ppc("?XMPTransportControlHelper@@YAJW4XMP_CLIENT@@KPAU_XOVERLAPPED@@@Z");
//};

//unsigned long GetAllocationAttributes(enum XMP_CLIENT)
//{
//    mangled_ppc("?GetAllocationAttributes@@YAKW4XMP_CLIENT@@@Z");
//};

//int IsRtmFlash(void)
//{
//    mangled_ppc("?IsRtmFlash@@YAHXZ");
//};

//XMPPlayTitlePlaylist
//{
//    mangled_ppc("XMPPlayTitlePlaylist");
//};

//XMPPlayUserPlaylist
//{
//    mangled_ppc("XMPPlayUserPlaylist");
//};

//XMPContinue
//{
//    mangled_ppc("XMPContinue");
//};

//XMPPause
//{
//    mangled_ppc("XMPPause");
//};

//XMPNext
//{
//    mangled_ppc("XMPNext");
//};

//XMPPrevious
//{
//    mangled_ppc("XMPPrevious");
//};

//XMPCreateUserPlaylistEnumerator
//{
//    mangled_ppc("XMPCreateUserPlaylistEnumerator");
//};

//XMPCaptureOutput
//{
//    mangled_ppc("XMPCaptureOutput");
//};

//unsigned long XMPCreateTitlePlaylistEx(enum XMP_CLIENT, struct XMP_SONGDESCRIPTOR *const, unsigned long, unsigned long, wchar_t const *, void **, void **)
//{
//    mangled_ppc("?XMPCreateTitlePlaylistEx@@YAKW4XMP_CLIENT@@QAUXMP_SONGDESCRIPTOR@@KKPB_WPAPAX3@Z");
//};

//unsigned long XMPDeleteTitlePlaylistEx(enum XMP_CLIENT, void *)
//{
//    mangled_ppc("?XMPDeleteTitlePlaylistEx@@YAKW4XMP_CLIENT@@PAX@Z");
//};

//unsigned long XMPGetNowPlaying(enum XMP_CLIENT, struct XMP_NOWPLAYINGCONTENTINFO *, struct XMP_SONGINFOINTERNAL *, struct _XOVERLAPPED *)
//{
//    mangled_ppc("?XMPGetNowPlaying@@YAKW4XMP_CLIENT@@PAUXMP_NOWPLAYINGCONTENTINFO@@PAUXMP_SONGINFOINTERNAL@@PAU_XOVERLAPPED@@@Z");
//};

//void XMPPlayTitlePlaylistEx(enum XMP_CLIENT, void *, void *)
//{
//    mangled_ppc("?XMPPlayTitlePlaylistEx@@YAXW4XMP_CLIENT@@PAX1@Z");
//};

//void XMPRestartTitlePlaylist(enum XMP_CLIENT, void *, void *, int)
//{
//    mangled_ppc("?XMPRestartTitlePlaylist@@YAXW4XMP_CLIENT@@PAX1H@Z");
//};

//void XMPContinueEx(enum XMP_CLIENT)
//{
//    mangled_ppc("?XMPContinueEx@@YAXW4XMP_CLIENT@@@Z");
//};

//void XMPStopEx(enum XMP_CLIENT, int)
//{
//    mangled_ppc("?XMPStopEx@@YAXW4XMP_CLIENT@@H@Z");
//};

//void XMPPauseEx(enum XMP_CLIENT)
//{
//    mangled_ppc("?XMPPauseEx@@YAXW4XMP_CLIENT@@@Z");
//};

//void XMPNextEx(enum XMP_CLIENT)
//{
//    mangled_ppc("?XMPNextEx@@YAXW4XMP_CLIENT@@@Z");
//};

//void XMPPreviousEx(enum XMP_CLIENT)
//{
//    mangled_ppc("?XMPPreviousEx@@YAXW4XMP_CLIENT@@@Z");
//};

//unsigned long XMPSetPlaybackBehaviorEx(enum XMP_CLIENT, enum XMP_PLAYBACKMODE, enum XMP_REPEATMODE, unsigned long, struct _XOVERLAPPED *)
//{
//    mangled_ppc("?XMPSetPlaybackBehaviorEx@@YAKW4XMP_CLIENT@@W4XMP_PLAYBACKMODE@@W4XMP_REPEATMODE@@KPAU_XOVERLAPPED@@@Z");
//};

//unsigned long XMPGetPlaybackBehaviorEx(enum XMP_CLIENT, enum XMP_PLAYBACKMODE *, enum XMP_REPEATMODE *, unsigned long *)
//{
//    mangled_ppc("?XMPGetPlaybackBehaviorEx@@YAKW4XMP_CLIENT@@PAW4XMP_PLAYBACKMODE@@PAW4XMP_REPEATMODE@@PAK@Z");
//};

//unsigned long XMPGetStatusEx(enum XMP_CLIENT, enum XMP_STATE *)
//{
//    mangled_ppc("?XMPGetStatusEx@@YAKW4XMP_CLIENT@@PAW4XMP_STATE@@@Z");
//};

//unsigned long XMPGetVolumeEx(enum XMP_CLIENT, float *)
//{
//    mangled_ppc("?XMPGetVolumeEx@@YAKW4XMP_CLIENT@@PAM@Z");
//};

//unsigned long XMPSetVolumeEx(enum XMP_CLIENT, float, struct _XOVERLAPPED *)
//{
//    mangled_ppc("?XMPSetVolumeEx@@YAKW4XMP_CLIENT@@MPAU_XOVERLAPPED@@@Z");
//};

//unsigned long XMPSetPlaybackController(enum XMP_CLIENT, enum XMP_SETPLAYBACKCONTROLLERREQUEST, int)
//{
//    mangled_ppc("?XMPSetPlaybackController@@YAKW4XMP_CLIENT@@W4XMP_SETPLAYBACKCONTROLLERREQUEST@@H@Z");
//};

//unsigned long XMPSetPlaybackControllerEx(enum XMP_CLIENT, enum XMP_SETPLAYBACKCONTROLLERREQUEST, unsigned long)
//{
//    mangled_ppc("?XMPSetPlaybackControllerEx@@YAKW4XMP_CLIENT@@W4XMP_SETPLAYBACKCONTROLLERREQUEST@@K@Z");
//};

//unsigned long XMPGetPlaybackController(enum XMP_CLIENT, enum XMP_PLAYBACKCONTROLLER *, int *)
//{
//    mangled_ppc("?XMPGetPlaybackController@@YAKW4XMP_CLIENT@@PAW4XMP_PLAYBACKCONTROLLER@@PAH@Z");
//};

//unsigned long XMPStopAndWaitForIdle(enum XMP_CLIENT, int, struct _XOVERLAPPED *)
//{
//    mangled_ppc("?XMPStopAndWaitForIdle@@YAKW4XMP_CLIENT@@HPAU_XOVERLAPPED@@@Z");
//};

//merged_848C0478
//{
//    mangled_ppc("merged_848C0478");
//};

//XMPCreateTitlePlaylist
//{
//    mangled_ppc("XMPCreateTitlePlaylist");
//};

//XMPDeleteTitlePlaylist
//{
//    mangled_ppc("XMPDeleteTitlePlaylist");
//};

//XMPGetCurrentSong
//{
//    mangled_ppc("XMPGetCurrentSong");
//};

//XMPStop
//{
//    mangled_ppc("XMPStop");
//};

//XMPSetPlaybackBehavior
//{
//    mangled_ppc("XMPSetPlaybackBehavior");
//};

//XMPGetPlaybackBehavior
//{
//    mangled_ppc("XMPGetPlaybackBehavior");
//};

//XMPGetStatus
//{
//    mangled_ppc("XMPGetStatus");
//};

//XMPTitleHasPlaybackControl
//{
//    mangled_ppc("XMPTitleHasPlaybackControl");
//};

//XMPGetVolume
//{
//    mangled_ppc("XMPGetVolume");
//};

//XMPSetVolume
//{
//    mangled_ppc("XMPSetVolume");
//};

//XMPOverrideBackgroundMusic
//{
//    mangled_ppc("XMPOverrideBackgroundMusic");
//};

//XMPRestoreBackgroundMusic
//{
//    mangled_ppc("XMPRestoreBackgroundMusic");
//};

//void g_csOverrideRestore::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_csOverrideRestore@@YAXXZ");
//};

