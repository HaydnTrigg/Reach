/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: void ens::BInflate::return_status(int);
// public: void ens::BStateSwitcher::setReturnStatus(int);
// private: void ens::BInflate::error(int);
// private: void ens::BInflate::flushDict(void);
// void * ens::Utils::FastMemCpy(void *, void const *, unsigned long);
// private: void ens::BInflate::raw_block_buffered(void);
// private: unsigned int ens::BInflate::get_byte(void);
// private: void ens::BInflate::remove_bits(int);
// private: unsigned int ens::BInflate::get_bits(int);
// private: void ens::BInflate::raw_block_unbuffered(void);
// private: void ens::BInflate::raw_block(void);
// private: void ens::BInflate::decompress_block_buffered(void);
// void * ens::Utils::FastMemSet(void *, int, unsigned long);
// void const * ens::Utils::BeginPrefetchLargeStruct(void const *, unsigned int);
// void ens::Utils::TouchCacheLine(int, void const *);
// void const * ens::Utils::UpdatePrefetchLargeStruct(void const *, void const *, unsigned int);
// private: void ens::BInflate::decompress_block_unbuffered(void);
// private: void ens::BInflate::decompress_block(void);
// private: void ens::BInflate::static_block(void);
// private: void ens::BInflate::dynamic_block(void);
// private: int ens::BInflate::get_symbol(int *, int *);
// private: void ens::BInflate::inflate_block(void);
// private: void ens::BInflate::inflate_main(void);
// private: unsigned int ens::BInflate::get_dword(void);
// private: static void ens::BInflate::inflate_main_func(void *);
// public: ens::BInflate::BInflate(void);
// public: ens::BInflate::~BInflate(void);
// public: void ens::BInflate::deinit(void);
// public: void ens::BInflate::init(bool, bool);
// public: int ens::BInflate::decompress(unsigned char const *, int *, unsigned char *, int *, bool, bool, unsigned char *);
// public: void * ens::BStateSwitcher::getFiber(void) const;
// public: int ens::BInflate::decompressAll(struct ens::BInflate::BBufferRefiller &, int &, unsigned char *, int, int &);
// public: int ens::BInflate::decompressAll(unsigned char const *, int, unsigned char *, int, int &, int &);
// void const * ens::Utils::AlignDown<void const *>(void const *, unsigned int);
// bool ens::Math::IsPow2(unsigned int);
// unsigned int ens::Math::Min3<unsigned int>(unsigned int, unsigned int, unsigned int);
// unsigned int ens::Math::Min<unsigned int>(unsigned int, unsigned int);
// private: void ens::BInflate::build_huffman_decoder_tables<288>(signed char *, int (&)[256], int (&)[576]);
// private: void ens::BInflate::build_huffman_decoder_tables<32>(signed char *, int (&)[256], int (&)[64]);
// private: void ens::BInflate::build_huffman_decoder_tables<19>(signed char *, int (&)[256], int (&)[38]);
// z_inflateReset;
// z_inflateEnd;
// z_inflateInit2_;
// z_inflateInit_;
// z_inflate;
// z_inflateSetDictionary;
// z_inflateSync;
// z_inflateSyncPoint;

//private: void ens::BInflate::return_status(int)
//{
//    mangled_ppc("?return_status@BInflate@ens@@AAAXH@Z");
//};

//public: void ens::BStateSwitcher::setReturnStatus(int)
//{
//    mangled_ppc("?setReturnStatus@BStateSwitcher@ens@@QAAXH@Z");
//};

//private: void ens::BInflate::error(int)
//{
//    mangled_ppc("?error@BInflate@ens@@AAAXH@Z");
//};

//private: void ens::BInflate::flushDict(void)
//{
//    mangled_ppc("?flushDict@BInflate@ens@@AAAXXZ");
//};

//void * ens::Utils::FastMemCpy(void *, void const *, unsigned long)
//{
//    mangled_ppc("?FastMemCpy@Utils@ens@@YAPAXPAXPBXK@Z");
//};

//private: void ens::BInflate::raw_block_buffered(void)
//{
//    mangled_ppc("?raw_block_buffered@BInflate@ens@@AAAXXZ");
//};

//private: unsigned int ens::BInflate::get_byte(void)
//{
//    mangled_ppc("?get_byte@BInflate@ens@@AAAIXZ");
//};

//private: void ens::BInflate::remove_bits(int)
//{
//    mangled_ppc("?remove_bits@BInflate@ens@@AAAXH@Z");
//};

//private: unsigned int ens::BInflate::get_bits(int)
//{
//    mangled_ppc("?get_bits@BInflate@ens@@AAAIH@Z");
//};

//private: void ens::BInflate::raw_block_unbuffered(void)
//{
//    mangled_ppc("?raw_block_unbuffered@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::raw_block(void)
//{
//    mangled_ppc("?raw_block@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::decompress_block_buffered(void)
//{
//    mangled_ppc("?decompress_block_buffered@BInflate@ens@@AAAXXZ");
//};

//void * ens::Utils::FastMemSet(void *, int, unsigned long)
//{
//    mangled_ppc("?FastMemSet@Utils@ens@@YAPAXPAXHK@Z");
//};

//void const * ens::Utils::BeginPrefetchLargeStruct(void const *, unsigned int)
//{
//    mangled_ppc("?BeginPrefetchLargeStruct@Utils@ens@@YAPBXPBXI@Z");
//};

//void ens::Utils::TouchCacheLine(int, void const *)
//{
//    mangled_ppc("?TouchCacheLine@Utils@ens@@YAXHPBX@Z");
//};

//void const * ens::Utils::UpdatePrefetchLargeStruct(void const *, void const *, unsigned int)
//{
//    mangled_ppc("?UpdatePrefetchLargeStruct@Utils@ens@@YAPBXPBX0I@Z");
//};

//private: void ens::BInflate::decompress_block_unbuffered(void)
//{
//    mangled_ppc("?decompress_block_unbuffered@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::decompress_block(void)
//{
//    mangled_ppc("?decompress_block@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::static_block(void)
//{
//    mangled_ppc("?static_block@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::dynamic_block(void)
//{
//    mangled_ppc("?dynamic_block@BInflate@ens@@AAAXXZ");
//};

//private: int ens::BInflate::get_symbol(int *, int *)
//{
//    mangled_ppc("?get_symbol@BInflate@ens@@AAAHPAH0@Z");
//};

//private: void ens::BInflate::inflate_block(void)
//{
//    mangled_ppc("?inflate_block@BInflate@ens@@AAAXXZ");
//};

//private: void ens::BInflate::inflate_main(void)
//{
//    mangled_ppc("?inflate_main@BInflate@ens@@AAAXXZ");
//};

//private: unsigned int ens::BInflate::get_dword(void)
//{
//    mangled_ppc("?get_dword@BInflate@ens@@AAAIXZ");
//};

//private: static void ens::BInflate::inflate_main_func(void *)
//{
//    mangled_ppc("?inflate_main_func@BInflate@ens@@CAXPAX@Z");
//};

//public: ens::BInflate::BInflate(void)
//{
//    mangled_ppc("??0BInflate@ens@@QAA@XZ");
//};

//public: ens::BInflate::~BInflate(void)
//{
//    mangled_ppc("??1BInflate@ens@@QAA@XZ");
//};

//public: void ens::BInflate::deinit(void)
//{
//    mangled_ppc("?deinit@BInflate@ens@@QAAXXZ");
//};

//public: void ens::BInflate::init(bool, bool)
//{
//    mangled_ppc("?init@BInflate@ens@@QAAX_N0@Z");
//};

//public: int ens::BInflate::decompress(unsigned char const *, int *, unsigned char *, int *, bool, bool, unsigned char *)
//{
//    mangled_ppc("?decompress@BInflate@ens@@QAAHPBEPAHPAE1_N32@Z");
//};

//public: void * ens::BStateSwitcher::getFiber(void) const
//{
//    mangled_ppc("?getFiber@BStateSwitcher@ens@@QBAPAXXZ");
//};

//public: int ens::BInflate::decompressAll(struct ens::BInflate::BBufferRefiller &, int &, unsigned char *, int, int &)
//{
//    mangled_ppc("?decompressAll@BInflate@ens@@QAAHAAUBBufferRefiller@12@AAHPAEH1@Z");
//};

//public: int ens::BInflate::decompressAll(unsigned char const *, int, unsigned char *, int, int &, int &)
//{
//    mangled_ppc("?decompressAll@BInflate@ens@@QAAHPBEHPAEHAAH2@Z");
//};

//void const * ens::Utils::AlignDown<void const *>(void const *, unsigned int)
//{
//    mangled_ppc("??$AlignDown@PBX@Utils@ens@@YAPBXPBXI@Z");
//};

//bool ens::Math::IsPow2(unsigned int)
//{
//    mangled_ppc("?IsPow2@Math@ens@@YA_NI@Z");
//};

//unsigned int ens::Math::Min3<unsigned int>(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("??$Min3@I@Math@ens@@YAIIII@Z");
//};

//unsigned int ens::Math::Min<unsigned int>(unsigned int, unsigned int)
//{
//    mangled_ppc("??$Min@I@Math@ens@@YAIII@Z");
//};

//private: void ens::BInflate::build_huffman_decoder_tables<288>(signed char *, int (&)[256], int (&)[576])
//{
//    mangled_ppc("??$build_huffman_decoder_tables@$0BCA@@BInflate@ens@@AAAXPACAAY0BAA@HAAY0CEA@H@Z");
//};

//private: void ens::BInflate::build_huffman_decoder_tables<32>(signed char *, int (&)[256], int (&)[64])
//{
//    mangled_ppc("??$build_huffman_decoder_tables@$0CA@@BInflate@ens@@AAAXPACAAY0BAA@HAAY0EA@H@Z");
//};

//private: void ens::BInflate::build_huffman_decoder_tables<19>(signed char *, int (&)[256], int (&)[38])
//{
//    mangled_ppc("??$build_huffman_decoder_tables@$0BD@@BInflate@ens@@AAAXPACAAY0BAA@HAAY0CG@H@Z");
//};

//z_inflateReset
//{
//    mangled_ppc("z_inflateReset");
//};

//z_inflateEnd
//{
//    mangled_ppc("z_inflateEnd");
//};

//z_inflateInit2_
//{
//    mangled_ppc("z_inflateInit2_");
//};

//z_inflateInit_
//{
//    mangled_ppc("z_inflateInit_");
//};

//z_inflate
//{
//    mangled_ppc("z_inflate");
//};

//z_inflateSetDictionary
//{
//    mangled_ppc("z_inflateSetDictionary");
//};

//z_inflateSync
//{
//    mangled_ppc("z_inflateSync");
//};

//z_inflateSyncPoint
//{
//    mangled_ppc("z_inflateSyncPoint");
//};

