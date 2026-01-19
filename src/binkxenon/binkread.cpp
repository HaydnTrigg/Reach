/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// async_wait; // "async_wait"
// LogoData; // "LogoData"

// bpopmalloc;
// BinkSetError;
// BinkGetError;
// BinkSetSoundSystem;
// conv16to8;
// dosilence;
// checksound;
// inittimer;
// GotoFrame;
// BinkSetFrameRate;
// BinkSetIOSize;
// BinkSetIO;
// BinkSetSimulate;
// BinkSetSoundTrack;
// high1secrate;
// bink_get_priority_IO;
// bink_IO_callback;
// bink_suspend_io;
// bink_try_suspend_io;
// bink_resume_io;
// bink_idle_on_io;
// bink_get_priority_sound;
// bink_sound_callback;
// BinkGetFrameBuffersInfo;
// BinkRegisterFrameBuffers;
// BinkOpen;
// shouldskip;
// BinkCopyToBufferRect;
// timeblitframe;
// end_do_frame;
// decompress_sound;
// LowBinkDoFrameAsync;
// BinkShouldSkip;
// BinkGetKeyFrame;
// BinkWait;
// BinkPause;
// BinkGetSummary;
// BinkGetRealtime;
// smallestrect;
// trysplit;
// BinkGetRects;
// BinkService;
// idtoindex;
// BinkSetVolume;
// BinkSetMixBins;
// BinkSetMixBinVolumes;
// BinkSetPan;
// BinkLogoAddress;
// BinkGetTrackType;
// BinkGetTrackMaxSize;
// BinkGetTrackID;
// BinkOpenTrack;
// BinkCloseTrack;
// BinkGetTrackData;
// BinkSetVideoOnOff;
// BinkSetSoundOnOff;
// BinkSetMemory;
// BinkControlBackgroundIO;
// BinkCopyToBuffer;
// start_do_frame;
// BinkDoFrame;
// BinkNextFrame;
// BinkGoto;
// BinkClose;

//bpopmalloc
//{
//    mangled_ppc("bpopmalloc");
//};

//BinkSetError
//{
//    mangled_ppc("BinkSetError");
//};

//BinkGetError
//{
//    mangled_ppc("BinkGetError");
//};

//BinkSetSoundSystem
//{
//    mangled_ppc("BinkSetSoundSystem");
//};

//conv16to8
//{
//    mangled_ppc("conv16to8");
//};

//dosilence
//{
//    mangled_ppc("dosilence");
//};

//checksound
//{
//    mangled_ppc("checksound");
//};

//inittimer
//{
//    mangled_ppc("inittimer");
//};

//GotoFrame
//{
//    mangled_ppc("GotoFrame");
//};

//BinkSetFrameRate
//{
//    mangled_ppc("BinkSetFrameRate");
//};

//BinkSetIOSize
//{
//    mangled_ppc("BinkSetIOSize");
//};

//BinkSetIO
//{
//    mangled_ppc("BinkSetIO");
//};

//BinkSetSimulate
//{
//    mangled_ppc("BinkSetSimulate");
//};

//BinkSetSoundTrack
//{
//    mangled_ppc("BinkSetSoundTrack");
//};

//high1secrate
//{
//    mangled_ppc("high1secrate");
//};

//bink_get_priority_IO
//{
//    mangled_ppc("bink_get_priority_IO");
//};

//bink_IO_callback
//{
//    mangled_ppc("bink_IO_callback");
//};

//bink_suspend_io
//{
//    mangled_ppc("bink_suspend_io");
//};

//bink_try_suspend_io
//{
//    mangled_ppc("bink_try_suspend_io");
//};

//bink_resume_io
//{
//    mangled_ppc("bink_resume_io");
//};

//bink_idle_on_io
//{
//    mangled_ppc("bink_idle_on_io");
//};

//bink_get_priority_sound
//{
//    mangled_ppc("bink_get_priority_sound");
//};

//bink_sound_callback
//{
//    mangled_ppc("bink_sound_callback");
//};

//BinkGetFrameBuffersInfo
//{
//    mangled_ppc("BinkGetFrameBuffersInfo");
//};

//BinkRegisterFrameBuffers
//{
//    mangled_ppc("BinkRegisterFrameBuffers");
//};

//BinkOpen
//{
//    mangled_ppc("BinkOpen");
//};

//shouldskip
//{
//    mangled_ppc("shouldskip");
//};

//BinkCopyToBufferRect
//{
//    mangled_ppc("BinkCopyToBufferRect");
//};

//timeblitframe
//{
//    mangled_ppc("timeblitframe");
//};

//end_do_frame
//{
//    mangled_ppc("end_do_frame");
//};

//decompress_sound
//{
//    mangled_ppc("decompress_sound");
//};

//LowBinkDoFrameAsync
//{
//    mangled_ppc("LowBinkDoFrameAsync");
//};

//BinkShouldSkip
//{
//    mangled_ppc("BinkShouldSkip");
//};

//BinkGetKeyFrame
//{
//    mangled_ppc("BinkGetKeyFrame");
//};

//BinkWait
//{
//    mangled_ppc("BinkWait");
//};

//BinkPause
//{
//    mangled_ppc("BinkPause");
//};

//BinkGetSummary
//{
//    mangled_ppc("BinkGetSummary");
//};

//BinkGetRealtime
//{
//    mangled_ppc("BinkGetRealtime");
//};

//smallestrect
//{
//    mangled_ppc("smallestrect");
//};

//trysplit
//{
//    mangled_ppc("trysplit");
//};

//BinkGetRects
//{
//    mangled_ppc("BinkGetRects");
//};

//BinkService
//{
//    mangled_ppc("BinkService");
//};

//idtoindex
//{
//    mangled_ppc("idtoindex");
//};

//BinkSetVolume
//{
//    mangled_ppc("BinkSetVolume");
//};

//BinkSetMixBins
//{
//    mangled_ppc("BinkSetMixBins");
//};

//BinkSetMixBinVolumes
//{
//    mangled_ppc("BinkSetMixBinVolumes");
//};

//BinkSetPan
//{
//    mangled_ppc("BinkSetPan");
//};

//BinkLogoAddress
//{
//    mangled_ppc("BinkLogoAddress");
//};

//BinkGetTrackType
//{
//    mangled_ppc("BinkGetTrackType");
//};

//BinkGetTrackMaxSize
//{
//    mangled_ppc("BinkGetTrackMaxSize");
//};

//BinkGetTrackID
//{
//    mangled_ppc("BinkGetTrackID");
//};

//BinkOpenTrack
//{
//    mangled_ppc("BinkOpenTrack");
//};

//BinkCloseTrack
//{
//    mangled_ppc("BinkCloseTrack");
//};

//BinkGetTrackData
//{
//    mangled_ppc("BinkGetTrackData");
//};

//BinkSetVideoOnOff
//{
//    mangled_ppc("BinkSetVideoOnOff");
//};

//BinkSetSoundOnOff
//{
//    mangled_ppc("BinkSetSoundOnOff");
//};

//BinkSetMemory
//{
//    mangled_ppc("BinkSetMemory");
//};

//BinkControlBackgroundIO
//{
//    mangled_ppc("BinkControlBackgroundIO");
//};

//BinkCopyToBuffer
//{
//    mangled_ppc("BinkCopyToBuffer");
//};

//start_do_frame
//{
//    mangled_ppc("start_do_frame");
//};

//BinkDoFrame
//{
//    mangled_ppc("BinkDoFrame");
//};

//BinkNextFrame
//{
//    mangled_ppc("BinkNextFrame");
//};

//BinkGoto
//{
//    mangled_ppc("BinkGoto");
//};

//BinkClose
//{
//    mangled_ppc("BinkClose");
//};

