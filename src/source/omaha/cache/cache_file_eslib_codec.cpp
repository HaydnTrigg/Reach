/* ---------- headers */

#include "omaha\cache\cache_file_eslib_codec.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_tag_persistent_identifier const k_eslib_codec_identifier; // "?k_eslib_codec_identifier@@3Us_tag_persistent_identifier@@B"
// long volatile `public: virtual bool __cdecl c_eslib_cache_file_decompressor::decompress_buffer(class c_basic_buffer<void const>, class c_basic_buffer<void const> *)'::`14'::x_event_category_index; // "?x_event_category_index@?O@??decompress_buffer@c_eslib_cache_file_decompressor@@UAA_NV?$c_basic_buffer@$$CBX@@PAV3@@Z@4JC"
// long volatile `public: virtual bool __cdecl c_eslib_cache_file_decompressor::finish(class c_basic_buffer<void const> *)'::`11'::x_event_category_index; // "?x_event_category_index@?L@??finish@c_eslib_cache_file_decompressor@@UAA_NPAV?$c_basic_buffer@$$CBX@@@Z@4JC"
// class c_eslib_cache_file_builder_codec g_eslib_cache_file_builder_codec; // "?g_eslib_cache_file_builder_codec@@3Vc_eslib_cache_file_builder_codec@@A"
// class c_eslib_cache_file_decompressor_service g_eslib_cache_file_runtime_decompressor_service; // "?g_eslib_cache_file_runtime_decompressor_service@@3Vc_eslib_cache_file_decompressor_service@@A"

// class c_cache_file_builder_codec * get_eslib_cache_file_builder_codec(void);
// class c_cache_file_decompressor_service * get_eslib_cache_file_runtime_decompressor_service(void);
// public: c_eslib_cache_file_builder_codec::c_eslib_cache_file_builder_codec(struct s_tag_persistent_identifier const &);
// public: c_eslib_cache_file_decompressor_service::c_eslib_cache_file_decompressor_service(void);
// protected: virtual void c_eslib_cache_file_decompressor_service::initialize_decompressor(class c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8> *);
// public: c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>(void);
// public: c_eslib_cache_file_compressor_service::c_eslib_cache_file_compressor_service(void);
// protected: virtual void c_eslib_cache_file_compressor_service::initialize_compressor(class c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8> *, class c_persist_stream *);
// public: c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>(void);
// public: virtual char const * c_eslib_cache_file_builder_codec::get_name(void);
// public: virtual struct s_tag_persistent_identifier c_eslib_cache_file_builder_codec::get_identifier(void);
// public: virtual class c_cache_file_decompressor_service * c_eslib_cache_file_builder_codec::get_decompressor_service(void);
// public: virtual class c_cache_file_compressor_service * c_eslib_cache_file_builder_codec::get_compressor_service(void);
// public: virtual bool c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::decompressor_available(void);
// public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::create_decompressor(void);
// public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::begin_decompression(class c_basic_buffer<void>);
// public: virtual void c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::dispose_decompressor(class c_cache_file_decompressor *);
// public: c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>(void);
// public: class c_eslib_cache_file_decompressor * c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::construct(void);
// public: c_eslib_cache_file_decompressor::c_eslib_cache_file_decompressor(void);
// public: virtual bool c_eslib_cache_file_decompressor::begin(class c_basic_buffer<void>);
// public: virtual bool c_eslib_cache_file_decompressor::decompress_buffer(class c_basic_buffer<void const>, class c_basic_buffer<void const> *);
// public: virtual bool c_eslib_cache_file_decompressor::finish(class c_basic_buffer<void const> *);
// public: void c_basic_buffer<void const>::set_buffer(void const *, void const *);
// public: virtual class c_cache_file_compressor * c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::begin_compression(class c_persist_stream *);
// public: virtual void c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::dispose_compressor(class c_cache_file_compressor *);
// public: c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>(void);
// public: void c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::destruct(void);
// public: class c_eslib_cache_file_decompressor * c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::get(void);
// public: bool c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::alive(void) const;
// public: void c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::destruct(void);
// public: class c_eslib_cache_file_compressor * c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::get(void);
// public: bool c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::alive(void) const;
// public: void * c_eslib_cache_file_decompressor::`scalar deleting destructor'(unsigned int);
// public: void * c_eslib_cache_file_compressor::`scalar deleting destructor'(unsigned int);
// public: c_eslib_cache_file_decompressor::~c_eslib_cache_file_decompressor(void);
// public: c_eslib_cache_file_compressor::~c_eslib_cache_file_compressor(void);
// public: class c_eslib_cache_file_decompressor * c_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::get(void);
// public: class c_eslib_cache_file_compressor * c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::construct<class c_persist_stream *>(class c_persist_stream *);
// public: c_eslib_cache_file_compressor::c_eslib_cache_file_compressor(class c_persist_stream *);
// public: virtual bool c_eslib_cache_file_compressor::compress_buffer(class c_basic_buffer<void const>);
// public: virtual bool c_eslib_cache_file_compressor::finish(void);
// public: class c_eslib_cache_file_compressor * c_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::get(void);
// public: c_eslib_cache_file_builder_codec::~c_eslib_cache_file_builder_codec(void);
// public: c_eslib_cache_file_decompressor_service::~c_eslib_cache_file_decompressor_service(void);
// public: c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::~c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>(void);
// public: c_eslib_cache_file_compressor_service::~c_eslib_cache_file_compressor_service(void);
// public: c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::~c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>(void);
// public: c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::~c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>(void);
// public: c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::~c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>(void);
// void g_eslib_cache_file_builder_codec::`dynamic atexit destructor'(void);
// void g_eslib_cache_file_runtime_decompressor_service::`dynamic atexit destructor'(void);

//class c_cache_file_builder_codec * get_eslib_cache_file_builder_codec(void)
//{
//    mangled_ppc("?get_eslib_cache_file_builder_codec@@YAPAVc_cache_file_builder_codec@@XZ");
//};

//class c_cache_file_decompressor_service * get_eslib_cache_file_runtime_decompressor_service(void)
//{
//    mangled_ppc("?get_eslib_cache_file_runtime_decompressor_service@@YAPAVc_cache_file_decompressor_service@@XZ");
//};

//public: c_eslib_cache_file_builder_codec::c_eslib_cache_file_builder_codec(struct s_tag_persistent_identifier const &)
//{
//    mangled_ppc("??0c_eslib_cache_file_builder_codec@@QAA@ABUs_tag_persistent_identifier@@@Z");
//};

//public: c_eslib_cache_file_decompressor_service::c_eslib_cache_file_decompressor_service(void)
//{
//    mangled_ppc("??0c_eslib_cache_file_decompressor_service@@QAA@XZ");
//};

//protected: virtual void c_eslib_cache_file_decompressor_service::initialize_decompressor(class c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8> *)
//{
//    mangled_ppc("?initialize_decompressor@c_eslib_cache_file_decompressor_service@@MAAXPAV?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@@Z");
//};

//public: c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>(void)
//{
//    mangled_ppc("??0?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@QAA@XZ");
//};

//public: c_eslib_cache_file_compressor_service::c_eslib_cache_file_compressor_service(void)
//{
//    mangled_ppc("??0c_eslib_cache_file_compressor_service@@QAA@XZ");
//};

//protected: virtual void c_eslib_cache_file_compressor_service::initialize_compressor(class c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8> *, class c_persist_stream *)
//{
//    mangled_ppc("?initialize_compressor@c_eslib_cache_file_compressor_service@@MAAXPAV?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@PAVc_persist_stream@@@Z");
//};

//public: c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>(void)
//{
//    mangled_ppc("??0?$c_single_instance_cache_file_compressor_service@Vc_eslib_cache_file_compressor@@@@QAA@XZ");
//};

//public: virtual char const * c_eslib_cache_file_builder_codec::get_name(void)
//{
//    mangled_ppc("?get_name@c_eslib_cache_file_builder_codec@@UAAPBDXZ");
//};

//public: virtual struct s_tag_persistent_identifier c_eslib_cache_file_builder_codec::get_identifier(void)
//{
//    mangled_ppc("?get_identifier@c_eslib_cache_file_builder_codec@@UAA?AUs_tag_persistent_identifier@@XZ");
//};

//public: virtual class c_cache_file_decompressor_service * c_eslib_cache_file_builder_codec::get_decompressor_service(void)
//{
//    mangled_ppc("?get_decompressor_service@c_eslib_cache_file_builder_codec@@UAAPAVc_cache_file_decompressor_service@@XZ");
//};

//public: virtual class c_cache_file_compressor_service * c_eslib_cache_file_builder_codec::get_compressor_service(void)
//{
//    mangled_ppc("?get_compressor_service@c_eslib_cache_file_builder_codec@@UAAPAVc_cache_file_compressor_service@@XZ");
//};

//public: virtual bool c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::decompressor_available(void)
//{
//    mangled_ppc("?decompressor_available@?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@UAA_NXZ");
//};

//public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::create_decompressor(void)
//{
//    mangled_ppc("?create_decompressor@?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@UAAPAVc_cache_file_decompressor@@XZ");
//};

//public: virtual class c_cache_file_decompressor * c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::begin_decompression(class c_basic_buffer<void>)
//{
//    mangled_ppc("?begin_decompression@?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@UAAPAVc_cache_file_decompressor@@V?$c_basic_buffer@X@@@Z");
//};

//public: virtual void c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::dispose_decompressor(class c_cache_file_decompressor *)
//{
//    mangled_ppc("?dispose_decompressor@?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@UAAXPAVc_cache_file_decompressor@@@Z");
//};

//public: c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAA@XZ");
//};

//public: class c_eslib_cache_file_decompressor * c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAAPAVc_eslib_cache_file_decompressor@@XZ");
//};

//public: c_eslib_cache_file_decompressor::c_eslib_cache_file_decompressor(void)
//{
//    mangled_ppc("??0c_eslib_cache_file_decompressor@@QAA@XZ");
//};

//public: virtual bool c_eslib_cache_file_decompressor::begin(class c_basic_buffer<void>)
//{
//    mangled_ppc("?begin@c_eslib_cache_file_decompressor@@UAA_NV?$c_basic_buffer@X@@@Z");
//};

//public: virtual bool c_eslib_cache_file_decompressor::decompress_buffer(class c_basic_buffer<void const>, class c_basic_buffer<void const> *)
//{
//    mangled_ppc("?decompress_buffer@c_eslib_cache_file_decompressor@@UAA_NV?$c_basic_buffer@$$CBX@@PAV2@@Z");
//};

//public: virtual bool c_eslib_cache_file_decompressor::finish(class c_basic_buffer<void const> *)
//{
//    mangled_ppc("?finish@c_eslib_cache_file_decompressor@@UAA_NPAV?$c_basic_buffer@$$CBX@@@Z");
//};

//public: void c_basic_buffer<void const>::set_buffer(void const *, void const *)
//{
//    mangled_ppc("?set_buffer@?$c_basic_buffer@$$CBX@@QAAXPBX0@Z");
//};

//public: virtual class c_cache_file_compressor * c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::begin_compression(class c_persist_stream *)
//{
//    mangled_ppc("?begin_compression@?$c_single_instance_cache_file_compressor_service@Vc_eslib_cache_file_compressor@@@@UAAPAVc_cache_file_compressor@@PAVc_persist_stream@@@Z");
//};

//public: virtual void c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::dispose_compressor(class c_cache_file_compressor *)
//{
//    mangled_ppc("?dispose_compressor@?$c_single_instance_cache_file_compressor_service@Vc_eslib_cache_file_compressor@@@@UAAXPAVc_cache_file_compressor@@@Z");
//};

//public: c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAAXXZ");
//};

//public: class c_eslib_cache_file_decompressor * c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAAPAVc_eslib_cache_file_decompressor@@XZ");
//};

//public: bool c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QBA_NXZ");
//};

//public: void c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAAXXZ");
//};

//public: class c_eslib_cache_file_compressor * c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAAPAVc_eslib_cache_file_compressor@@XZ");
//};

//public: bool c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QBA_NXZ");
//};

//public: void * c_eslib_cache_file_decompressor::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_eslib_cache_file_decompressor@@QAAPAXI@Z");
//};

//public: void * c_eslib_cache_file_compressor::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_eslib_cache_file_compressor@@QAAPAXI@Z");
//};

//public: c_eslib_cache_file_decompressor::~c_eslib_cache_file_decompressor(void)
//{
//    mangled_ppc("??1c_eslib_cache_file_decompressor@@QAA@XZ");
//};

//public: c_eslib_cache_file_compressor::~c_eslib_cache_file_compressor(void)
//{
//    mangled_ppc("??1c_eslib_cache_file_compressor@@QAA@XZ");
//};

//public: class c_eslib_cache_file_decompressor * c_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAAPAVc_eslib_cache_file_decompressor@@XZ");
//};

//public: class c_eslib_cache_file_compressor * c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::construct<class c_persist_stream *>(class c_persist_stream *)
//{
//    mangled_ppc("??$construct@PAVc_persist_stream@@@?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAAPAVc_eslib_cache_file_compressor@@PAVc_persist_stream@@@Z");
//};

//public: c_eslib_cache_file_compressor::c_eslib_cache_file_compressor(class c_persist_stream *)
//{
//    mangled_ppc("??0c_eslib_cache_file_compressor@@QAA@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_eslib_cache_file_compressor::compress_buffer(class c_basic_buffer<void const>)
//{
//    mangled_ppc("?compress_buffer@c_eslib_cache_file_compressor@@UAA_NV?$c_basic_buffer@$$CBX@@@Z");
//};

//public: virtual bool c_eslib_cache_file_compressor::finish(void)
//{
//    mangled_ppc("?finish@c_eslib_cache_file_compressor@@UAA_NXZ");
//};

//public: class c_eslib_cache_file_compressor * c_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAAPAVc_eslib_cache_file_compressor@@XZ");
//};

//public: c_eslib_cache_file_builder_codec::~c_eslib_cache_file_builder_codec(void)
//{
//    mangled_ppc("??1c_eslib_cache_file_builder_codec@@QAA@XZ");
//};

//public: c_eslib_cache_file_decompressor_service::~c_eslib_cache_file_decompressor_service(void)
//{
//    mangled_ppc("??1c_eslib_cache_file_decompressor_service@@QAA@XZ");
//};

//public: c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>::~c_single_instance_cache_file_decompressor_service<class c_eslib_cache_file_decompressor>(void)
//{
//    mangled_ppc("??1?$c_single_instance_cache_file_decompressor_service@Vc_eslib_cache_file_decompressor@@@@QAA@XZ");
//};

//public: c_eslib_cache_file_compressor_service::~c_eslib_cache_file_compressor_service(void)
//{
//    mangled_ppc("??1c_eslib_cache_file_compressor_service@@QAA@XZ");
//};

//public: c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>::~c_single_instance_cache_file_compressor_service<class c_eslib_cache_file_compressor>(void)
//{
//    mangled_ppc("??1?$c_single_instance_cache_file_compressor_service@Vc_eslib_cache_file_compressor@@@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>::~c_typed_opaque_data<class c_eslib_cache_file_decompressor, 38992, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_eslib_cache_file_decompressor@@$0JIFA@$07@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>::~c_typed_opaque_data<class c_eslib_cache_file_compressor, 251072, 8>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_eslib_cache_file_compressor@@$0DNEMA@$07@@QAA@XZ");
//};

//void g_eslib_cache_file_builder_codec::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_eslib_cache_file_builder_codec@@YAXXZ");
//};

//void g_eslib_cache_file_runtime_decompressor_service::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_eslib_cache_file_runtime_decompressor_service@@YAXXZ");
//};

