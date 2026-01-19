/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_persistent_identifier const k_xor_codec_identifier; // "?k_xor_codec_identifier@@3Us_tag_persistent_identifier@@B"
// class c_xor_cache_file_builder_codec g_xor_cache_file_builder_codec; // "?g_xor_cache_file_builder_codec@@3Vc_xor_cache_file_builder_codec@@A"
// class c_xor_cache_file_decompressor_service g_xor_cache_file_runtime_decompressor_service; // "?g_xor_cache_file_runtime_decompressor_service@@3Vc_xor_cache_file_decompressor_service@@A"

// void * memxor(void *, int, unsigned int);
// class c_cache_file_builder_codec * get_xor_cache_file_builder_codec(void);
// class c_cache_file_decompressor_service * get_xor_cache_file_runtime_decompressor_service(void);
// public: c_xor_cache_file_builder_codec::c_xor_cache_file_builder_codec(struct s_tag_persistent_identifier const &);
// public: c_xor_cache_file_decompressor_service::c_xor_cache_file_decompressor_service(char);
// protected: virtual void c_xor_cache_file_decompressor_service::initialize_decompressor(class c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8> *);
// public: c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>(void);
// public: c_xor_cache_file_compressor_service::c_xor_cache_file_compressor_service(char);
// protected: virtual void c_xor_cache_file_compressor_service::initialize_compressor(class c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8> *, class c_persist_stream *);
// public: c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>(void);
// public: virtual char const * c_xor_cache_file_builder_codec::get_name(void);
// public: virtual struct s_tag_persistent_identifier c_xor_cache_file_builder_codec::get_identifier(void);
// public: virtual class c_cache_file_decompressor_service * c_xor_cache_file_builder_codec::get_decompressor_service(void);
// public: virtual class c_cache_file_compressor_service * c_xor_cache_file_builder_codec::get_compressor_service(void);
// public: virtual bool c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::decompressor_available(void);
// public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::create_decompressor(void);
// public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::begin_decompression(class c_basic_buffer<void>);
// public: virtual void c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::dispose_decompressor(class c_cache_file_decompressor *);
// public: c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>(void);
// public: virtual class c_cache_file_compressor * c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::begin_compression(class c_persist_stream *);
// public: virtual void c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::dispose_compressor(class c_cache_file_compressor *);
// public: c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>(void);
// public: void c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::destruct(void);
// public: class c_xor_cache_file_decompressor * c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::get(void);
// public: bool c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::alive(void) const;
// public: void c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::destruct(void);
// public: class c_xor_cache_file_compressor * c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::get(void);
// public: bool c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::alive(void) const;
// public: void * c_xor_cache_file_compressor::`scalar deleting destructor'(unsigned int);
// public: c_xor_cache_file_compressor::~c_xor_cache_file_compressor(void);
// public: class c_xor_cache_file_decompressor * c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::construct<char>(char);
// public: c_xor_cache_file_decompressor::c_xor_cache_file_decompressor(char);
// public: virtual bool c_xor_cache_file_decompressor::begin(class c_basic_buffer<void>);
// public: virtual bool c_xor_cache_file_decompressor::decompress_buffer(class c_basic_buffer<void const>, class c_basic_buffer<void const> *);
// public: virtual bool c_xor_cache_file_decompressor::finish(class c_basic_buffer<void const> *);
// public: class c_xor_cache_file_compressor * c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::construct<class c_persist_stream *, char>(class c_persist_stream *, char);
// public: c_xor_cache_file_compressor::c_xor_cache_file_compressor(class c_persist_stream *, char);
// public: virtual bool c_xor_cache_file_compressor::compress_buffer(class c_basic_buffer<void const>);
// public: virtual bool c_xor_cache_file_compressor::finish(void);
// public: class c_xor_cache_file_decompressor * c_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::get(void);
// public: class c_xor_cache_file_compressor * c_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::get(void);
// public: c_xor_cache_file_builder_codec::~c_xor_cache_file_builder_codec(void);
// public: c_xor_cache_file_decompressor_service::~c_xor_cache_file_decompressor_service(void);
// public: c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::~c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>(void);
// public: c_xor_cache_file_compressor_service::~c_xor_cache_file_compressor_service(void);
// public: c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::~c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>(void);
// public: c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::~c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>(void);
// public: c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::~c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>(void);
// void g_xor_cache_file_builder_codec::`dynamic atexit destructor'(void);
// void g_xor_cache_file_runtime_decompressor_service::`dynamic atexit destructor'(void);

//void * memxor(void *, int, unsigned int)
//{
//    mangled_ppc("?memxor@@YAPAXPAXHI@Z");
//};

//class c_cache_file_builder_codec * get_xor_cache_file_builder_codec(void)
//{
//    mangled_ppc("?get_xor_cache_file_builder_codec@@YAPAVc_cache_file_builder_codec@@XZ");
//};

//class c_cache_file_decompressor_service * get_xor_cache_file_runtime_decompressor_service(void)
//{
//    mangled_ppc("?get_xor_cache_file_runtime_decompressor_service@@YAPAVc_cache_file_decompressor_service@@XZ");
//};

//public: c_xor_cache_file_builder_codec::c_xor_cache_file_builder_codec(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("??0c_xor_cache_file_builder_codec@@QAA@ABUs_tag_persistent_identifier@@@Z");
//};

//public: c_xor_cache_file_decompressor_service::c_xor_cache_file_decompressor_service(char)
//{
//    mangled_ppc("??0c_xor_cache_file_decompressor_service@@QAA@D@Z");
//};

//protected: virtual void c_xor_cache_file_decompressor_service::initialize_decompressor(class c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8> *)
//{
//    mangled_ppc("?initialize_decompressor@c_xor_cache_file_decompressor_service@@MAAXPAV?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@@Z");
//};

//public: c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>(void)
//{
//    mangled_ppc("??0?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@QAA@XZ");
//};

//public: c_xor_cache_file_compressor_service::c_xor_cache_file_compressor_service(char)
//{
//    mangled_ppc("??0c_xor_cache_file_compressor_service@@QAA@D@Z");
//};

//protected: virtual void c_xor_cache_file_compressor_service::initialize_compressor(class c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8> *, class c_persist_stream *)
//{
//    mangled_ppc("?initialize_compressor@c_xor_cache_file_compressor_service@@MAAXPAV?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@PAVc_persist_stream@@@Z");
//};

//public: c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>(void)
//{
//    mangled_ppc("??0?$c_single_instance_cache_file_compressor_service@Vc_xor_cache_file_compressor@@@@QAA@XZ");
//};

//public: virtual char const * c_xor_cache_file_builder_codec::get_name(void)
//{
//    mangled_ppc("?get_name@c_xor_cache_file_builder_codec@@UAAPBDXZ");
//};

//public: virtual struct s_tag_persistent_identifier c_xor_cache_file_builder_codec::get_identifier(void)
//{
//    mangled_ppc("?get_identifier@c_xor_cache_file_builder_codec@@UAA?AUs_tag_persistent_identifier@@XZ");
//};

//public: virtual class c_cache_file_decompressor_service * c_xor_cache_file_builder_codec::get_decompressor_service(void)
//{
//    mangled_ppc("?get_decompressor_service@c_xor_cache_file_builder_codec@@UAAPAVc_cache_file_decompressor_service@@XZ");
//};

//public: virtual class c_cache_file_compressor_service * c_xor_cache_file_builder_codec::get_compressor_service(void)
//{
//    mangled_ppc("?get_compressor_service@c_xor_cache_file_builder_codec@@UAAPAVc_cache_file_compressor_service@@XZ");
//};

//public: virtual bool c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::decompressor_available(void)
//{
//    mangled_ppc("?decompressor_available@?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@UAA_NXZ");
//};

//public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::create_decompressor(void)
//{
//    mangled_ppc("?create_decompressor@?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@UAAPAVc_cache_file_decompressor@@XZ");
//};

//public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::begin_decompression(class c_basic_buffer<void>)
//{
//    mangled_ppc("?begin_decompression@?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@UAAPAVc_cache_file_decompressor@@V?$c_basic_buffer@X@@@Z");
//};

//public: virtual void c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::dispose_decompressor(class c_cache_file_decompressor *)
//{
//    mangled_ppc("?dispose_decompressor@?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@UAAXPAVc_cache_file_decompressor@@@Z");
//};

//public: c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAA@XZ");
//};

//public: virtual class c_cache_file_compressor * c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::begin_compression(class c_persist_stream *)
//{
//    mangled_ppc("?begin_compression@?$c_single_instance_cache_file_compressor_service@Vc_xor_cache_file_compressor@@@@UAAPAVc_cache_file_compressor@@PAVc_persist_stream@@@Z");
//};

//public: virtual void c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::dispose_compressor(class c_cache_file_compressor *)
//{
//    mangled_ppc("?dispose_compressor@?$c_single_instance_cache_file_compressor_service@Vc_xor_cache_file_compressor@@@@UAAXPAVc_cache_file_compressor@@@Z");
//};

//public: c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAAXXZ");
//};

//public: class c_xor_cache_file_decompressor * c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAAPAVc_xor_cache_file_decompressor@@XZ");
//};

//public: bool c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QBA_NXZ");
//};

//public: void c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAAXXZ");
//};

//public: class c_xor_cache_file_compressor * c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAAPAVc_xor_cache_file_compressor@@XZ");
//};

//public: bool c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QBA_NXZ");
//};

//public: void * c_xor_cache_file_compressor::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_xor_cache_file_compressor@@QAAPAXI@Z");
//};

//public: c_xor_cache_file_compressor::~c_xor_cache_file_compressor(void)
//{
//    mangled_ppc("??1c_xor_cache_file_compressor@@QAA@XZ");
//};

//public: class c_xor_cache_file_decompressor * c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::construct<char>(char)
//{
//    mangled_ppc("??$construct@D@?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAAPAVc_xor_cache_file_decompressor@@D@Z");
//};

//public: c_xor_cache_file_decompressor::c_xor_cache_file_decompressor(char)
//{
//    mangled_ppc("??0c_xor_cache_file_decompressor@@QAA@D@Z");
//};

//public: virtual bool c_xor_cache_file_decompressor::begin(class c_basic_buffer<void>)
//{
//    mangled_ppc("?begin@c_xor_cache_file_decompressor@@UAA_NV?$c_basic_buffer@X@@@Z");
//};

//public: virtual bool c_xor_cache_file_decompressor::decompress_buffer(class c_basic_buffer<void const>, class c_basic_buffer<void const> *)
//{
//    mangled_ppc("?decompress_buffer@c_xor_cache_file_decompressor@@UAA_NV?$c_basic_buffer@$$CBX@@PAV2@@Z");
//};

//public: virtual bool c_xor_cache_file_decompressor::finish(class c_basic_buffer<void const> *)
//{
//    mangled_ppc("?finish@c_xor_cache_file_decompressor@@UAA_NPAV?$c_basic_buffer@$$CBX@@@Z");
//};

//public: class c_xor_cache_file_compressor * c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::construct<class c_persist_stream *, char>(class c_persist_stream *, char)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@D@?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAAPAVc_xor_cache_file_compressor@@PAVc_persist_stream@@D@Z");
//};

//public: c_xor_cache_file_compressor::c_xor_cache_file_compressor(class c_persist_stream *, char)
//{
//    mangled_ppc("??0c_xor_cache_file_compressor@@QAA@PAVc_persist_stream@@D@Z");
//};

//public: virtual bool c_xor_cache_file_compressor::compress_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?compress_buffer@c_xor_cache_file_compressor@@UAA_NV?$c_basic_buffer@$$CBX@@@Z");
//};

//public: virtual bool c_xor_cache_file_compressor::finish(void)
//{
//    mangled_ppc("?finish@c_xor_cache_file_compressor@@UAA_NXZ");
//};

//public: class c_xor_cache_file_decompressor * c_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAAPAVc_xor_cache_file_decompressor@@XZ");
//};

//public: class c_xor_cache_file_compressor * c_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAAPAVc_xor_cache_file_compressor@@XZ");
//};

//public: c_xor_cache_file_builder_codec::~c_xor_cache_file_builder_codec(void)
//{
//    mangled_ppc("??1c_xor_cache_file_builder_codec@@QAA@XZ");
//};

//public: c_xor_cache_file_decompressor_service::~c_xor_cache_file_decompressor_service(void)
//{
//    mangled_ppc("??1c_xor_cache_file_decompressor_service@@QAA@XZ");
//};

//public: c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>::~c_single_instance_cache_file_decompressor_service<class c_xor_cache_file_decompressor>(void)
//{
//    mangled_ppc("??1?$c_single_instance_cache_file_decompressor_service@Vc_xor_cache_file_decompressor@@@@QAA@XZ");
//};

//public: c_xor_cache_file_compressor_service::~c_xor_cache_file_compressor_service(void)
//{
//    mangled_ppc("??1c_xor_cache_file_compressor_service@@QAA@XZ");
//};

//public: c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>::~c_single_instance_cache_file_compressor_service<class c_xor_cache_file_compressor>(void)
//{
//    mangled_ppc("??1?$c_single_instance_cache_file_compressor_service@Vc_xor_cache_file_compressor@@@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>::~c_typed_opaque_data<class c_xor_cache_file_decompressor, 24, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_xor_cache_file_decompressor@@$0BI@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>::~c_typed_opaque_data<class c_xor_cache_file_compressor, 16416, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_xor_cache_file_compressor@@$0EACA@$07@@QAA@XZ");
//};

//void g_xor_cache_file_builder_codec::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_xor_cache_file_builder_codec@@YAXXZ");
//};

//void g_xor_cache_file_runtime_decompressor_service::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_xor_cache_file_runtime_decompressor_service@@YAXXZ");
//};

