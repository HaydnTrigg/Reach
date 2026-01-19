/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int D3DX__Premultiply; // "?D3DX__Premultiply@@3HA"

// void D3DXSetDXT3DXT5(int);
// int D3DXGetDXT3DXT5(void);
// struct _D3DXFORMAT_INFO const * D3DXTex::GetFormatInfo(enum _D3DFORMAT);
// unsigned int D3DXTex::ScoreFormat(struct _D3DXFORMAT_INFO const *, struct _D3DXFORMAT_INFO const *);
// enum _D3DFORMAT D3DXTex::FindClosestFormat(enum _D3DFORMAT const *, struct tagPALETTEENTRY const *, struct _D3DXFORMAT_INFO const *);
// enum _D3DFORMAT D3DXTex::FindClosestExternalFormat(enum _D3DFORMAT);
// __lvx;
// D3DXGetImageInfoFromFileInMemory;
// void BlockSizeFromFormat(enum _D3DFORMAT, unsigned int *, unsigned int *);
// Direct3D_Release;
// public: static unsigned long Direct3D::Release(void);
// public: unsigned long D3DDevice::Release(void);
// public: long D3DDevice::CreateTexture(unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DTexture **, void **);
// public: long D3DDevice::CreateVolumeTexture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DVolumeTexture **, void **);
// public: long D3DDevice::CreateArrayTexture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DArrayTexture **, void **);
// public: long D3DDevice::CreateLineTexture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DLineTexture **, void **);
// void FXLVMFill2(struct D3DXVECTOR4*, struct D3DXVECTOR2const *, struct D3DXVECTOR2const *, void *);
// void FXLVMFill3(struct D3DXVECTOR4*, struct D3DXVECTOR3const *, struct D3DXVECTOR3const *, void *);
// float EvalColor(struct D3DXCOLOR *, unsigned long);
// public: long D3DResource::GetDevice(struct D3DDevice **);
// D3DTexture_LockTail;
// D3DTexture_UnlockTail;
// void RELEASE<struct Direct3D>(struct Direct3D *&);
// void RELEASE<struct D3DVolume>(struct D3DVolume *&);
// void RELEASE<struct D3DSurface>(struct D3DSurface *&);
// void RELEASE<struct D3DBaseTexture>(struct D3DBaseTexture *&);
// public: long D3DTexture::LockTail(struct _D3DLOCKED_TAIL *, unsigned long);
// public: long D3DTexture::UnlockTail(void);
// D3DVolumeTexture_LockTail;
// D3DVolumeTexture_UnlockTail;
// public: long D3DVolumeTexture::GetLevelDesc(unsigned int, struct _D3DVOLUME_DESC *);
// public: long D3DVolumeTexture::GetVolumeLevel(unsigned int, struct D3DVolume **);
// public: long D3DVolumeTexture::LockBox(unsigned int, struct _D3DLOCKED_BOX *, struct _D3DBOX const *, unsigned long);
// public: long D3DVolumeTexture::UnlockBox(unsigned int);
// public: long D3DVolumeTexture::LockTail(struct _D3DLOCKED_TAIL *, unsigned long);
// public: long D3DVolumeTexture::UnlockTail(void);
// D3DCubeTexture_LockTail;
// D3DCubeTexture_UnlockTail;
// public: long D3DCubeTexture::LockRect(enum _D3DCUBEMAP_FACES, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// public: long D3DCubeTexture::UnlockRect(enum _D3DCUBEMAP_FACES, unsigned int);
// public: long D3DCubeTexture::LockTail(enum _D3DCUBEMAP_FACES, struct _D3DLOCKED_TAIL *, unsigned long);
// public: long D3DCubeTexture::UnlockTail(enum _D3DCUBEMAP_FACES);
// public: long D3DArrayTexture::GetArraySurface(unsigned int, unsigned int, struct D3DSurface **);
// public: long D3DArrayTexture::LockRect(unsigned int, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// public: long D3DArrayTexture::UnlockRect(unsigned int, unsigned int);
// public: long D3DLineTexture::LockRect(unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// public: long D3DLineTexture::UnlockRect(unsigned int);
// public: long D3DSurface::GetContainer(struct _GUID const &, void **);
// public: long D3DVolume::GetContainer(struct _GUID const &, void **);
// public: D3DXVECTOR2::D3DXVECTOR2(void);
// public: D3DXVECTOR3::D3DXVECTOR3(void);
// struct __vector4 D3DX_LoadFloat3(struct _XMFLOAT3const *);
// void D3DXDebugAssertHelper(int, char const *, int, char const *);
// XGBitsPerPixelFromFormat;
// XGGetSurfaceDesc;
// XGGetVolumeDesc;
// void * D3DXMemAlloc(unsigned long);
// void D3DXMemFree(void *);
// public: static void * D3DXTex::CLockSurface::operator new[](unsigned int);
// public: static void D3DXTex::CLockSurface::operator delete(void *);
// public: static void D3DXTex::CLockSurface::operator delete[](void *);
// public: static void * D3DXTex::CLockVolume::operator new[](unsigned int);
// public: static void D3DXTex::CLockVolume::operator delete(void *);
// public: static void D3DXTex::CLockVolume::operator delete[](void *);
// public: static void * D3DXTex::CImage::operator new(unsigned int);
// enum _D3DFORMAT D3DXTex::FindClosestDeviceFormat(struct D3DDevice *, unsigned long, enum _D3DRESOURCETYPE, struct _D3DXFORMAT_INFO const *);
// long D3DXTex::CreateTextureFromTexture(struct D3DBaseTexture *, enum _D3DFORMAT, struct D3DBaseTexture **);
// D3DXGetImageInfoFromFileA;
// D3DXGetImageInfoFromFileW;
// unsigned long Log2Ceiling(unsigned long);
// D3DXLoadSurfaceFromMemory;
// long SaveSurfaceToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DSurface *, struct tagPALETTEENTRY const *, struct tagRECT const *, enum D3DXTex::_CIMAGE_SAVEMETHOD);
// D3DXSaveSurfaceToFileA;
// D3DXSaveSurfaceToFileW;
// D3DXSaveSurfaceToFileInMemory;
// D3DXLoadVolumeFromMemory;
// long SaveVolumeToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DVolume *, struct tagPALETTEENTRY const *, struct _D3DBOX const *, enum D3DXTex::_CIMAGE_SAVEMETHOD);
// D3DXSaveVolumeToFileA;
// D3DXSaveVolumeToFileW;
// D3DXSaveVolumeToFileInMemory;
// long CheckTextureRequirements(struct D3DDevice *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned long, enum _D3DFORMAT *, unsigned long, enum _D3DRESOURCETYPE);
// D3DXCheckTextureRequirements;
// D3DXCheckCubeTextureRequirements;
// D3DXCheckVolumeTextureRequirements;
// D3DXCreateTexture;
// D3DXCreateCubeTexture;
// D3DXCreateVolumeTexture;
// public: void * D3DXTex::CLockSurface::`vector deleting destructor'(unsigned int);
// public: void * D3DXTex::CLockVolume::`vector deleting destructor'(unsigned int);
// D3DXFillTexture;
// D3DXFillCubeTexture;
// D3DXFillVolumeTexture;
// D3DXFillTextureTX;
// D3DXFillCubeTextureTX;
// D3DXFillVolumeTextureTX;
// struct D3DXVECTOR3* D3DXVec3Cross(struct D3DXVECTOR3*, struct D3DXVECTOR3const *, struct D3DXVECTOR3const *);
// D3DXLoadSurfaceFromFileInMemory;
// D3DXLoadSurfaceFromSurface;
// D3DXLoadVolumeFromFileInMemory;
// D3DXLoadVolumeFromVolume;
// long SaveTextureToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DBaseTexture *, struct tagPALETTEENTRY const *, enum D3DXTex::_CIMAGE_SAVEMETHOD);
// D3DXSaveTextureToFileA;
// D3DXSaveTextureToFileW;
// D3DXSaveTextureToFileInMemory;
// D3DXFilterTexture;
// D3DXComputeNormalMap;
// D3DXLoadSurfaceFromFileA;
// D3DXLoadSurfaceFromFileW;
// D3DXLoadVolumeFromFileA;
// D3DXLoadVolumeFromFileW;
// long CreateTextureFromFileInMemoryEx(struct D3DDevice *, void const *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, unsigned long, unsigned long, struct _D3DXIMAGE_INFO *, struct tagPALETTEENTRY *, enum _D3DRESOURCETYPE, struct D3DBaseTexture **);
// D3DXCreateTextureFromFileInMemoryEx;
// D3DXCreateCubeTextureFromFileInMemoryEx;
// D3DXCreateVolumeTextureFromFileInMemoryEx;
// D3DXCreateTextureFromFileExA;
// D3DXCreateTextureFromFileExW;
// D3DXCreateTextureFromFileInMemory;
// D3DXCreateCubeTextureFromFileExA;
// D3DXCreateCubeTextureFromFileExW;
// D3DXCreateCubeTextureFromFileInMemory;
// D3DXCreateVolumeTextureFromFileExA;
// D3DXCreateVolumeTextureFromFileExW;
// D3DXCreateVolumeTextureFromFileInMemory;
// D3DXCreateTextureFromFileA;
// D3DXCreateTextureFromFileW;
// D3DXCreateCubeTextureFromFileA;
// D3DXCreateCubeTextureFromFileW;
// D3DXCreateVolumeTextureFromFileA;
// D3DXCreateVolumeTextureFromFileW;

//void D3DXSetDXT3DXT5(int)
//{
//    mangled_ppc("?D3DXSetDXT3DXT5@@YAXH@Z");
//};

//int D3DXGetDXT3DXT5(void)
//{
//    mangled_ppc("?D3DXGetDXT3DXT5@@YAHXZ");
//};

//struct _D3DXFORMAT_INFO const * D3DXTex::GetFormatInfo(enum _D3DFORMAT)
//{
//    mangled_ppc("?GetFormatInfo@D3DXTex@@YAPBU_D3DXFORMAT_INFO@@W4_D3DFORMAT@@@Z");
//};

//unsigned int D3DXTex::ScoreFormat(struct _D3DXFORMAT_INFO const *, struct _D3DXFORMAT_INFO const *)
//{
//    mangled_ppc("?ScoreFormat@D3DXTex@@YAIPBU_D3DXFORMAT_INFO@@0@Z");
//};

//enum _D3DFORMAT D3DXTex::FindClosestFormat(enum _D3DFORMAT const *, struct tagPALETTEENTRY const *, struct _D3DXFORMAT_INFO const *)
//{
//    mangled_ppc("?FindClosestFormat@D3DXTex@@YA?AW4_D3DFORMAT@@PBW42@PBUtagPALETTEENTRY@@PBU_D3DXFORMAT_INFO@@@Z");
//};

//enum _D3DFORMAT D3DXTex::FindClosestExternalFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?FindClosestExternalFormat@D3DXTex@@YA?AW4_D3DFORMAT@@W42@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//D3DXGetImageInfoFromFileInMemory
//{
//    mangled_ppc("D3DXGetImageInfoFromFileInMemory");
//};

//void BlockSizeFromFormat(enum _D3DFORMAT, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?BlockSizeFromFormat@@YAXW4_D3DFORMAT@@PAI1@Z");
//};

//Direct3D_Release
//{
//    mangled_ppc("Direct3D_Release");
//};

//public: static unsigned long Direct3D::Release(void)
//{
//    mangled_ppc("?Release@Direct3D@@SAKXZ");
//};

//public: unsigned long D3DDevice::Release(void)
//{
//    mangled_ppc("?Release@D3DDevice@@QAAKXZ");
//};

//public: long D3DDevice::CreateTexture(unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DTexture **, void **)
//{
//    mangled_ppc("?CreateTexture@D3DDevice@@QAAJIIIKW4_D3DFORMAT@@KPAPAUD3DTexture@@PAPAX@Z");
//};

//public: long D3DDevice::CreateVolumeTexture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DVolumeTexture **, void **)
//{
//    mangled_ppc("?CreateVolumeTexture@D3DDevice@@QAAJIIIIKW4_D3DFORMAT@@KPAPAUD3DVolumeTexture@@PAPAX@Z");
//};

//public: long D3DDevice::CreateArrayTexture(unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DArrayTexture **, void **)
//{
//    mangled_ppc("?CreateArrayTexture@D3DDevice@@QAAJIIIIKW4_D3DFORMAT@@KPAPAUD3DArrayTexture@@PAPAX@Z");
//};

//public: long D3DDevice::CreateLineTexture(unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, struct D3DLineTexture **, void **)
//{
//    mangled_ppc("?CreateLineTexture@D3DDevice@@QAAJIIKW4_D3DFORMAT@@KPAPAUD3DLineTexture@@PAPAX@Z");
//};

//void FXLVMFill2(struct D3DXVECTOR4*, struct D3DXVECTOR2const *, struct D3DXVECTOR2const *, void *)
//{
//    mangled_ppc("?FXLVMFill2@@YAXPAUD3DXVECTOR4@@PBUD3DXVECTOR2@@1PAX@Z");
//};

//void FXLVMFill3(struct D3DXVECTOR4*, struct D3DXVECTOR3const *, struct D3DXVECTOR3const *, void *)
//{
//    mangled_ppc("?FXLVMFill3@@YAXPAUD3DXVECTOR4@@PBUD3DXVECTOR3@@1PAX@Z");
//};

//float EvalColor(struct D3DXCOLOR *, unsigned long)
//{
//    mangled_ppc("?EvalColor@@YAMPAUD3DXCOLOR@@K@Z");
//};

//public: long D3DResource::GetDevice(struct D3DDevice **)
//{
//    mangled_ppc("?GetDevice@D3DResource@@QAAJPAPAUD3DDevice@@@Z");
//};

//D3DTexture_LockTail
//{
//    mangled_ppc("D3DTexture_LockTail");
//};

//D3DTexture_UnlockTail
//{
//    mangled_ppc("D3DTexture_UnlockTail");
//};

//void RELEASE<struct Direct3D>(struct Direct3D *&)
//{
//    mangled_ppc("??$RELEASE@UDirect3D@@@@YAXAAPAUDirect3D@@@Z");
//};

//void RELEASE<struct D3DVolume>(struct D3DVolume *&)
//{
//    mangled_ppc("??$RELEASE@UD3DVolume@@@@YAXAAPAUD3DVolume@@@Z");
//};

//void RELEASE<struct D3DSurface>(struct D3DSurface *&)
//{
//    mangled_ppc("??$RELEASE@UD3DSurface@@@@YAXAAPAUD3DSurface@@@Z");
//};

//void RELEASE<struct D3DBaseTexture>(struct D3DBaseTexture *&)
//{
//    mangled_ppc("??$RELEASE@UD3DBaseTexture@@@@YAXAAPAUD3DBaseTexture@@@Z");
//};

//public: long D3DTexture::LockTail(struct _D3DLOCKED_TAIL *, unsigned long)
//{
//    mangled_ppc("?LockTail@D3DTexture@@QAAJPAU_D3DLOCKED_TAIL@@K@Z");
//};

//public: long D3DTexture::UnlockTail(void)
//{
//    mangled_ppc("?UnlockTail@D3DTexture@@QAAJXZ");
//};

//D3DVolumeTexture_LockTail
//{
//    mangled_ppc("D3DVolumeTexture_LockTail");
//};

//D3DVolumeTexture_UnlockTail
//{
//    mangled_ppc("D3DVolumeTexture_UnlockTail");
//};

//public: long D3DVolumeTexture::GetLevelDesc(unsigned int, struct _D3DVOLUME_DESC *)
//{
//    mangled_ppc("?GetLevelDesc@D3DVolumeTexture@@QAAJIPAU_D3DVOLUME_DESC@@@Z");
//};

//public: long D3DVolumeTexture::GetVolumeLevel(unsigned int, struct D3DVolume **)
//{
//    mangled_ppc("?GetVolumeLevel@D3DVolumeTexture@@QAAJIPAPAUD3DVolume@@@Z");
//};

//public: long D3DVolumeTexture::LockBox(unsigned int, struct _D3DLOCKED_BOX *, struct _D3DBOX const *, unsigned long)
//{
//    mangled_ppc("?LockBox@D3DVolumeTexture@@QAAJIPAU_D3DLOCKED_BOX@@PBU_D3DBOX@@K@Z");
//};

//public: long D3DVolumeTexture::UnlockBox(unsigned int)
//{
//    mangled_ppc("?UnlockBox@D3DVolumeTexture@@QAAJI@Z");
//};

//public: long D3DVolumeTexture::LockTail(struct _D3DLOCKED_TAIL *, unsigned long)
//{
//    mangled_ppc("?LockTail@D3DVolumeTexture@@QAAJPAU_D3DLOCKED_TAIL@@K@Z");
//};

//public: long D3DVolumeTexture::UnlockTail(void)
//{
//    mangled_ppc("?UnlockTail@D3DVolumeTexture@@QAAJXZ");
//};

//D3DCubeTexture_LockTail
//{
//    mangled_ppc("D3DCubeTexture_LockTail");
//};

//D3DCubeTexture_UnlockTail
//{
//    mangled_ppc("D3DCubeTexture_UnlockTail");
//};

//public: long D3DCubeTexture::LockRect(enum _D3DCUBEMAP_FACES, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?LockRect@D3DCubeTexture@@QAAJW4_D3DCUBEMAP_FACES@@IPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//public: long D3DCubeTexture::UnlockRect(enum _D3DCUBEMAP_FACES, unsigned int)
//{
//    mangled_ppc("?UnlockRect@D3DCubeTexture@@QAAJW4_D3DCUBEMAP_FACES@@I@Z");
//};

//public: long D3DCubeTexture::LockTail(enum _D3DCUBEMAP_FACES, struct _D3DLOCKED_TAIL *, unsigned long)
//{
//    mangled_ppc("?LockTail@D3DCubeTexture@@QAAJW4_D3DCUBEMAP_FACES@@PAU_D3DLOCKED_TAIL@@K@Z");
//};

//public: long D3DCubeTexture::UnlockTail(enum _D3DCUBEMAP_FACES)
//{
//    mangled_ppc("?UnlockTail@D3DCubeTexture@@QAAJW4_D3DCUBEMAP_FACES@@@Z");
//};

//public: long D3DArrayTexture::GetArraySurface(unsigned int, unsigned int, struct D3DSurface **)
//{
//    mangled_ppc("?GetArraySurface@D3DArrayTexture@@QAAJIIPAPAUD3DSurface@@@Z");
//};

//public: long D3DArrayTexture::LockRect(unsigned int, unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?LockRect@D3DArrayTexture@@QAAJIIPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//public: long D3DArrayTexture::UnlockRect(unsigned int, unsigned int)
//{
//    mangled_ppc("?UnlockRect@D3DArrayTexture@@QAAJII@Z");
//};

//public: long D3DLineTexture::LockRect(unsigned int, struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?LockRect@D3DLineTexture@@QAAJIPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//public: long D3DLineTexture::UnlockRect(unsigned int)
//{
//    mangled_ppc("?UnlockRect@D3DLineTexture@@QAAJI@Z");
//};

//public: long D3DSurface::GetContainer(struct _GUID const &, void **)
//{
//    mangled_ppc("?GetContainer@D3DSurface@@QAAJABU_GUID@@PAPAX@Z");
//};

//public: long D3DVolume::GetContainer(struct _GUID const &, void **)
//{
//    mangled_ppc("?GetContainer@D3DVolume@@QAAJABU_GUID@@PAPAX@Z");
//};

//public: D3DXVECTOR2::D3DXVECTOR2(void)
//{
//    mangled_ppc("??0D3DXVECTOR2@@QAA@XZ");
//};

//public: D3DXVECTOR3::D3DXVECTOR3(void)
//{
//    mangled_ppc("??0D3DXVECTOR3@@QAA@XZ");
//};

//struct __vector4 D3DX_LoadFloat3(struct _XMFLOAT3const *)
//{
//    mangled_ppc("?D3DX_LoadFloat3@@YA?AU__vector4@@PBU_XMFLOAT3@@@Z");
//};

//void D3DXDebugAssertHelper(int, char const *, int, char const *)
//{
//    mangled_ppc("?D3DXDebugAssertHelper@@YAXHPBDH0@Z");
//};

//XGBitsPerPixelFromFormat
//{
//    mangled_ppc("XGBitsPerPixelFromFormat");
//};

//XGGetSurfaceDesc
//{
//    mangled_ppc("XGGetSurfaceDesc");
//};

//XGGetVolumeDesc
//{
//    mangled_ppc("XGGetVolumeDesc");
//};

//void * D3DXMemAlloc(unsigned long)
//{
//    mangled_ppc("?D3DXMemAlloc@@YAPAXK@Z");
//};

//void D3DXMemFree(void *)
//{
//    mangled_ppc("?D3DXMemFree@@YAXPAX@Z");
//};

//public: static void * D3DXTex::CLockSurface::operator new[](unsigned int)
//{
//    mangled_ppc("??_UCLockSurface@D3DXTex@@SAPAXI@Z");
//};

//public: static void D3DXTex::CLockSurface::operator delete(void *)
//{
//    mangled_ppc("??3CLockSurface@D3DXTex@@SAXPAX@Z");
//};

//public: static void D3DXTex::CLockSurface::operator delete[](void *)
//{
//    mangled_ppc("??_VCLockSurface@D3DXTex@@SAXPAX@Z");
//};

//public: static void * D3DXTex::CLockVolume::operator new[](unsigned int)
//{
//    mangled_ppc("??_UCLockVolume@D3DXTex@@SAPAXI@Z");
//};

//public: static void D3DXTex::CLockVolume::operator delete(void *)
//{
//    mangled_ppc("??3CLockVolume@D3DXTex@@SAXPAX@Z");
//};

//public: static void D3DXTex::CLockVolume::operator delete[](void *)
//{
//    mangled_ppc("??_VCLockVolume@D3DXTex@@SAXPAX@Z");
//};

//public: static void * D3DXTex::CImage::operator new(unsigned int)
//{
//    mangled_ppc("??2CImage@D3DXTex@@SAPAXI@Z");
//};

//enum _D3DFORMAT D3DXTex::FindClosestDeviceFormat(struct D3DDevice *, unsigned long, enum _D3DRESOURCETYPE, struct _D3DXFORMAT_INFO const *)
//{
//    mangled_ppc("?FindClosestDeviceFormat@D3DXTex@@YA?AW4_D3DFORMAT@@PAUD3DDevice@@KW4_D3DRESOURCETYPE@@PBU_D3DXFORMAT_INFO@@@Z");
//};

//long D3DXTex::CreateTextureFromTexture(struct D3DBaseTexture *, enum _D3DFORMAT, struct D3DBaseTexture **)
//{
//    mangled_ppc("?CreateTextureFromTexture@D3DXTex@@YAJPAUD3DBaseTexture@@W4_D3DFORMAT@@PAPAU2@@Z");
//};

//D3DXGetImageInfoFromFileA
//{
//    mangled_ppc("D3DXGetImageInfoFromFileA");
//};

//D3DXGetImageInfoFromFileW
//{
//    mangled_ppc("D3DXGetImageInfoFromFileW");
//};

//unsigned long Log2Ceiling(unsigned long)
//{
//    mangled_ppc("?Log2Ceiling@@YAKK@Z");
//};

//D3DXLoadSurfaceFromMemory
//{
//    mangled_ppc("D3DXLoadSurfaceFromMemory");
//};

//long SaveSurfaceToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DSurface *, struct tagPALETTEENTRY const *, struct tagRECT const *, enum D3DXTex::_CIMAGE_SAVEMETHOD)
//{
//    mangled_ppc("?SaveSurfaceToFile@@YAJPBXW4_D3DXIMAGE_FILEFORMAT@@PAUD3DSurface@@PBUtagPALETTEENTRY@@PBUtagRECT@@W4_CIMAGE_SAVEMETHOD@D3DXTex@@@Z");
//};

//D3DXSaveSurfaceToFileA
//{
//    mangled_ppc("D3DXSaveSurfaceToFileA");
//};

//D3DXSaveSurfaceToFileW
//{
//    mangled_ppc("D3DXSaveSurfaceToFileW");
//};

//D3DXSaveSurfaceToFileInMemory
//{
//    mangled_ppc("D3DXSaveSurfaceToFileInMemory");
//};

//D3DXLoadVolumeFromMemory
//{
//    mangled_ppc("D3DXLoadVolumeFromMemory");
//};

//long SaveVolumeToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DVolume *, struct tagPALETTEENTRY const *, struct _D3DBOX const *, enum D3DXTex::_CIMAGE_SAVEMETHOD)
//{
//    mangled_ppc("?SaveVolumeToFile@@YAJPBXW4_D3DXIMAGE_FILEFORMAT@@PAUD3DVolume@@PBUtagPALETTEENTRY@@PBU_D3DBOX@@W4_CIMAGE_SAVEMETHOD@D3DXTex@@@Z");
//};

//D3DXSaveVolumeToFileA
//{
//    mangled_ppc("D3DXSaveVolumeToFileA");
//};

//D3DXSaveVolumeToFileW
//{
//    mangled_ppc("D3DXSaveVolumeToFileW");
//};

//D3DXSaveVolumeToFileInMemory
//{
//    mangled_ppc("D3DXSaveVolumeToFileInMemory");
//};

//long CheckTextureRequirements(struct D3DDevice *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned long, enum _D3DFORMAT *, unsigned long, enum _D3DRESOURCETYPE)
//{
//    mangled_ppc("?CheckTextureRequirements@@YAJPAUD3DDevice@@PAI111KPAW4_D3DFORMAT@@KW4_D3DRESOURCETYPE@@@Z");
//};

//D3DXCheckTextureRequirements
//{
//    mangled_ppc("D3DXCheckTextureRequirements");
//};

//D3DXCheckCubeTextureRequirements
//{
//    mangled_ppc("D3DXCheckCubeTextureRequirements");
//};

//D3DXCheckVolumeTextureRequirements
//{
//    mangled_ppc("D3DXCheckVolumeTextureRequirements");
//};

//D3DXCreateTexture
//{
//    mangled_ppc("D3DXCreateTexture");
//};

//D3DXCreateCubeTexture
//{
//    mangled_ppc("D3DXCreateCubeTexture");
//};

//D3DXCreateVolumeTexture
//{
//    mangled_ppc("D3DXCreateVolumeTexture");
//};

//public: void * D3DXTex::CLockSurface::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECLockSurface@D3DXTex@@QAAPAXI@Z");
//};

//public: void * D3DXTex::CLockVolume::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECLockVolume@D3DXTex@@QAAPAXI@Z");
//};

//D3DXFillTexture
//{
//    mangled_ppc("D3DXFillTexture");
//};

//D3DXFillCubeTexture
//{
//    mangled_ppc("D3DXFillCubeTexture");
//};

//D3DXFillVolumeTexture
//{
//    mangled_ppc("D3DXFillVolumeTexture");
//};

//D3DXFillTextureTX
//{
//    mangled_ppc("D3DXFillTextureTX");
//};

//D3DXFillCubeTextureTX
//{
//    mangled_ppc("D3DXFillCubeTextureTX");
//};

//D3DXFillVolumeTextureTX
//{
//    mangled_ppc("D3DXFillVolumeTextureTX");
//};

//struct D3DXVECTOR3* D3DXVec3Cross(struct D3DXVECTOR3*, struct D3DXVECTOR3const *, struct D3DXVECTOR3const *)
//{
//    mangled_ppc("?D3DXVec3Cross@@YAPAUD3DXVECTOR3@@PAU1@PBU1@1@Z");
//};

//D3DXLoadSurfaceFromFileInMemory
//{
//    mangled_ppc("D3DXLoadSurfaceFromFileInMemory");
//};

//D3DXLoadSurfaceFromSurface
//{
//    mangled_ppc("D3DXLoadSurfaceFromSurface");
//};

//D3DXLoadVolumeFromFileInMemory
//{
//    mangled_ppc("D3DXLoadVolumeFromFileInMemory");
//};

//D3DXLoadVolumeFromVolume
//{
//    mangled_ppc("D3DXLoadVolumeFromVolume");
//};

//long SaveTextureToFile(void const *, enum _D3DXIMAGE_FILEFORMAT, struct D3DBaseTexture *, struct tagPALETTEENTRY const *, enum D3DXTex::_CIMAGE_SAVEMETHOD)
//{
//    mangled_ppc("?SaveTextureToFile@@YAJPBXW4_D3DXIMAGE_FILEFORMAT@@PAUD3DBaseTexture@@PBUtagPALETTEENTRY@@W4_CIMAGE_SAVEMETHOD@D3DXTex@@@Z");
//};

//D3DXSaveTextureToFileA
//{
//    mangled_ppc("D3DXSaveTextureToFileA");
//};

//D3DXSaveTextureToFileW
//{
//    mangled_ppc("D3DXSaveTextureToFileW");
//};

//D3DXSaveTextureToFileInMemory
//{
//    mangled_ppc("D3DXSaveTextureToFileInMemory");
//};

//D3DXFilterTexture
//{
//    mangled_ppc("D3DXFilterTexture");
//};

//D3DXComputeNormalMap
//{
//    mangled_ppc("D3DXComputeNormalMap");
//};

//D3DXLoadSurfaceFromFileA
//{
//    mangled_ppc("D3DXLoadSurfaceFromFileA");
//};

//D3DXLoadSurfaceFromFileW
//{
//    mangled_ppc("D3DXLoadSurfaceFromFileW");
//};

//D3DXLoadVolumeFromFileA
//{
//    mangled_ppc("D3DXLoadVolumeFromFileA");
//};

//D3DXLoadVolumeFromFileW
//{
//    mangled_ppc("D3DXLoadVolumeFromFileW");
//};

//long CreateTextureFromFileInMemoryEx(struct D3DDevice *, void const *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, unsigned long, unsigned long, struct _D3DXIMAGE_INFO *, struct tagPALETTEENTRY *, enum _D3DRESOURCETYPE, struct D3DBaseTexture **)
//{
//    mangled_ppc("?CreateTextureFromFileInMemoryEx@@YAJPAUD3DDevice@@PBXIIIIIKW4_D3DFORMAT@@KKKKPAU_D3DXIMAGE_INFO@@PAUtagPALETTEENTRY@@W4_D3DRESOURCETYPE@@PAPAUD3DBaseTexture@@@Z");
//};

//D3DXCreateTextureFromFileInMemoryEx
//{
//    mangled_ppc("D3DXCreateTextureFromFileInMemoryEx");
//};

//D3DXCreateCubeTextureFromFileInMemoryEx
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileInMemoryEx");
//};

//D3DXCreateVolumeTextureFromFileInMemoryEx
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileInMemoryEx");
//};

//D3DXCreateTextureFromFileExA
//{
//    mangled_ppc("D3DXCreateTextureFromFileExA");
//};

//D3DXCreateTextureFromFileExW
//{
//    mangled_ppc("D3DXCreateTextureFromFileExW");
//};

//D3DXCreateTextureFromFileInMemory
//{
//    mangled_ppc("D3DXCreateTextureFromFileInMemory");
//};

//D3DXCreateCubeTextureFromFileExA
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileExA");
//};

//D3DXCreateCubeTextureFromFileExW
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileExW");
//};

//D3DXCreateCubeTextureFromFileInMemory
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileInMemory");
//};

//D3DXCreateVolumeTextureFromFileExA
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileExA");
//};

//D3DXCreateVolumeTextureFromFileExW
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileExW");
//};

//D3DXCreateVolumeTextureFromFileInMemory
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileInMemory");
//};

//D3DXCreateTextureFromFileA
//{
//    mangled_ppc("D3DXCreateTextureFromFileA");
//};

//D3DXCreateTextureFromFileW
//{
//    mangled_ppc("D3DXCreateTextureFromFileW");
//};

//D3DXCreateCubeTextureFromFileA
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileA");
//};

//D3DXCreateCubeTextureFromFileW
//{
//    mangled_ppc("D3DXCreateCubeTextureFromFileW");
//};

//D3DXCreateVolumeTextureFromFileA
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileA");
//};

//D3DXCreateVolumeTextureFromFileW
//{
//    mangled_ppc("D3DXCreateVolumeTextureFromFileW");
//};

