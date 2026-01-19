/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_single_tag_instance_reloader::c_single_tag_instance_reloader(void);
// public: c_single_tag_instance_reloader::~c_single_tag_instance_reloader(void);
// public: void c_single_tag_instance_reloader::initialize(char const *, enum e_tag_instance_loader_priority, enum e_tag_files_sync_source);
// public: void c_single_tag_instance_reloader::reset_quick_preview_tag_list(void);
// public: void c_single_tag_instance_reloader::dispose(void);
// public: struct s_tag_block * c_single_tag_instance_reloader::get_block(void);
// public: struct s_tag_block * c_single_tag_instance_reloader::get_block_ifp(void);
// public: void c_single_tag_instance_reloader::set_block_context(unsigned long, char const *);
// public: void c_single_tag_instance_reloader::set_block_context_ifp(unsigned long, char const *);
// public: bool c_single_tag_instance_reloader::check_block_context_ifp(unsigned long, char const *);
// public: bool c_single_tag_instance_reloader::set_block_delay_load_file(unsigned long, char const *, bool, struct s_file_reference *);
// public: void c_single_tag_instance_reloader::create_file_reference(char const *, unsigned long, bool, struct s_file_reference *);
// void generate_quick_preview_file_name(long, struct s_file_reference *);
// public: long c_single_tag_instance_reloader::get_file_reference(char const *, unsigned long, struct s_file_reference *);
// public: void c_single_tag_instance_reloader::clear_block(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::destruct(void);
// public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::destruct(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::destruct(void);
// public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::alive(void) const;
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>(void);
// public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>(void);
// public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::destruct(void);
// public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *);
// public: c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::c_instance_loader_redirector_thunk(class c_single_tag_instance_reloader *);
// public: virtual class c_tag_instance_loader * c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::lookup_instance_loader(struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>);
// public: virtual char const * c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::get_name(void);
// public: virtual void c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::release_instance_loader(class c_tag_instance_loader *);
// public: virtual void c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::reset_instance_loader(void);
// public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::alive(void) const;
// public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *);
// public: c_single_tag_instance_reloader::c_instance_loader_thunk::c_instance_loader_thunk(class c_single_tag_instance_reloader *);
// public: virtual bool c_single_tag_instance_reloader::c_instance_loader_thunk::load_into_block(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *);
// public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *);
// public: c_single_tag_instance_reloader::c_sync_source_thunk::c_sync_source_thunk(class c_single_tag_instance_reloader *);
// public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::idle(void);
// public: virtual bool c_single_tag_instance_reloader::c_sync_source_thunk::any_changes(void);
// public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::begin(void);
// public: static void c_quick_preview::begin(void);
// public: virtual class c_tag_file_difference_iterator * c_single_tag_instance_reloader::c_sync_source_thunk::get_difference_iterator(void);
// public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::dispose_difference_iterator(class c_tag_file_difference_iterator *);
// public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::end(void);
// public: static void c_quick_preview::end(void);
// public: virtual char const * c_single_tag_instance_reloader::c_sync_source_thunk::get_name(void);
// public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::get(void);
// public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::alive(void) const;
// public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *);
// public: c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::c_sync_difference_iterator_thunk(class c_single_tag_instance_reloader *);
// public: virtual void c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::reset(void);
// public: virtual bool c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::next(void);
// public: virtual bool c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::get_changed_tag_file(struct s_tag_files_sync_file *);
// public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::get(void);
// public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::get(void);
// public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::get(void);
// public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::get(void);

//public: c_single_tag_instance_reloader::c_single_tag_instance_reloader(void)
//{
//    mangled_ppc("??0c_single_tag_instance_reloader@@QAA@XZ");
//};

//public: c_single_tag_instance_reloader::~c_single_tag_instance_reloader(void)
//{
//    mangled_ppc("??1c_single_tag_instance_reloader@@QAA@XZ");
//};

//public: void c_single_tag_instance_reloader::initialize(char const *, enum e_tag_instance_loader_priority, enum e_tag_files_sync_source)
//{
//    mangled_ppc("?initialize@c_single_tag_instance_reloader@@QAAXPBDW4e_tag_instance_loader_priority@@W4e_tag_files_sync_source@@@Z");
//};

//public: void c_single_tag_instance_reloader::reset_quick_preview_tag_list(void)
//{
//    mangled_ppc("?reset_quick_preview_tag_list@c_single_tag_instance_reloader@@QAAXXZ");
//};

//public: void c_single_tag_instance_reloader::dispose(void)
//{
//    mangled_ppc("?dispose@c_single_tag_instance_reloader@@QAAXXZ");
//};

//public: struct s_tag_block * c_single_tag_instance_reloader::get_block(void)
//{
//    mangled_ppc("?get_block@c_single_tag_instance_reloader@@QAAPAUs_tag_block@@XZ");
//};

//public: struct s_tag_block * c_single_tag_instance_reloader::get_block_ifp(void)
//{
//    mangled_ppc("?get_block_ifp@c_single_tag_instance_reloader@@QAAPAUs_tag_block@@XZ");
//};

//public: void c_single_tag_instance_reloader::set_block_context(unsigned long, char const *)
//{
//    mangled_ppc("?set_block_context@c_single_tag_instance_reloader@@QAAXKPBD@Z");
//};

//public: void c_single_tag_instance_reloader::set_block_context_ifp(unsigned long, char const *)
//{
//    mangled_ppc("?set_block_context_ifp@c_single_tag_instance_reloader@@QAAXKPBD@Z");
//};

//public: bool c_single_tag_instance_reloader::check_block_context_ifp(unsigned long, char const *)
//{
//    mangled_ppc("?check_block_context_ifp@c_single_tag_instance_reloader@@QAA_NKPBD@Z");
//};

//public: bool c_single_tag_instance_reloader::set_block_delay_load_file(unsigned long, char const *, bool, struct s_file_reference *)
//{
//    mangled_ppc("?set_block_delay_load_file@c_single_tag_instance_reloader@@QAA_NKPBD_NPAUs_file_reference@@@Z");
//};

//public: void c_single_tag_instance_reloader::create_file_reference(char const *, unsigned long, bool, struct s_file_reference *)
//{
//    mangled_ppc("?create_file_reference@c_single_tag_instance_reloader@@QAAXPBDK_NPAUs_file_reference@@@Z");
//};

//void generate_quick_preview_file_name(long, struct s_file_reference *)
//{
//    mangled_ppc("?generate_quick_preview_file_name@@YAXJPAUs_file_reference@@@Z");
//};

//public: long c_single_tag_instance_reloader::get_file_reference(char const *, unsigned long, struct s_file_reference *)
//{
//    mangled_ppc("?get_file_reference@c_single_tag_instance_reloader@@QAAJPBDKPAUs_file_reference@@@Z");
//};

//public: void c_single_tag_instance_reloader::clear_block(void)
//{
//    mangled_ppc("?clear_block@c_single_tag_instance_reloader@@QAAXXZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAAXXZ");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAAXXZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAAXXZ");
//};

//public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_source_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QBA_NXZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::~c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAA@XZ");
//};

//public: void c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAAXXZ");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??$construct@PAVc_single_tag_instance_reloader@@@?$c_typed_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@PAV2@@Z");
//};

//public: c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::c_instance_loader_redirector_thunk(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??0c_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@QAA@PAV1@@Z");
//};

//public: virtual class c_tag_instance_loader * c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::lookup_instance_loader(struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?lookup_instance_loader@c_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@UAAPAVc_tag_instance_loader@@PBUs_tag_group@@PBDV?$c_flags@W4e_load_tag_flag@@G$09Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual char const * c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::get_name(void)
//{
//    mangled_ppc("?get_name@c_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@UAAPBDXZ");
//};

//public: virtual void c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::release_instance_loader(class c_tag_instance_loader *)
//{
//    mangled_ppc("?release_instance_loader@c_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@UAAXPAVc_tag_instance_loader@@@Z");
//};

//public: virtual void c_single_tag_instance_reloader::c_instance_loader_redirector_thunk::reset_instance_loader(void)
//{
//    mangled_ppc("?reset_instance_loader@c_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@UAAXXZ");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QBA_NXZ");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??$construct@PAVc_single_tag_instance_reloader@@@?$c_typed_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_thunk@c_single_tag_instance_reloader@@PAV2@@Z");
//};

//public: c_single_tag_instance_reloader::c_instance_loader_thunk::c_instance_loader_thunk(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??0c_instance_loader_thunk@c_single_tag_instance_reloader@@QAA@PAV1@@Z");
//};

//public: virtual bool c_single_tag_instance_reloader::c_instance_loader_thunk::load_into_block(struct s_tag_block *, struct s_tag_group const *, char const *, class c_flags<enum e_load_tag_flag, unsigned short, 10, struct s_default_enum_string_resolver>, enum e_tag_file_open_result *, bool *, unsigned long *, class c_tag_alternate_stream_consumer *)
//{
//    mangled_ppc("?load_into_block@c_instance_loader_thunk@c_single_tag_instance_reloader@@UAA_NPAUs_tag_block@@PBUs_tag_group@@PBDV?$c_flags@W4e_load_tag_flag@@G$09Us_default_enum_string_resolver@@@@PAW4e_tag_file_open_result@@PA_NPAKPAVc_tag_alternate_stream_consumer@@@Z");
//};

//public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??$construct@PAVc_single_tag_instance_reloader@@@?$c_typed_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_source_thunk@c_single_tag_instance_reloader@@PAV2@@Z");
//};

//public: c_single_tag_instance_reloader::c_sync_source_thunk::c_sync_source_thunk(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??0c_sync_source_thunk@c_single_tag_instance_reloader@@QAA@PAV1@@Z");
//};

//public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::idle(void)
//{
//    mangled_ppc("?idle@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAXXZ");
//};

//public: virtual bool c_single_tag_instance_reloader::c_sync_source_thunk::any_changes(void)
//{
//    mangled_ppc("?any_changes@c_sync_source_thunk@c_single_tag_instance_reloader@@UAA_NXZ");
//};

//public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::begin(void)
//{
//    mangled_ppc("?begin@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAXXZ");
//};

//public: static void c_quick_preview::begin(void)
//{
//    mangled_ppc("?begin@c_quick_preview@@SAXXZ");
//};

//public: virtual class c_tag_file_difference_iterator * c_single_tag_instance_reloader::c_sync_source_thunk::get_difference_iterator(void)
//{
//    mangled_ppc("?get_difference_iterator@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAPAVc_tag_file_difference_iterator@@XZ");
//};

//public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::dispose_difference_iterator(class c_tag_file_difference_iterator *)
//{
//    mangled_ppc("?dispose_difference_iterator@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAXPAVc_tag_file_difference_iterator@@@Z");
//};

//public: virtual void c_single_tag_instance_reloader::c_sync_source_thunk::end(void)
//{
//    mangled_ppc("?end@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAXXZ");
//};

//public: static void c_quick_preview::end(void)
//{
//    mangled_ppc("?end@c_quick_preview@@SAXXZ");
//};

//public: virtual char const * c_single_tag_instance_reloader::c_sync_source_thunk::get_name(void)
//{
//    mangled_ppc("?get_name@c_sync_source_thunk@c_single_tag_instance_reloader@@UAAPBDXZ");
//};

//public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: bool c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::alive(void) const
//{
//    mangled_ppc("?alive@?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QBA_NXZ");
//};

//public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_typed_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::construct<class c_single_tag_instance_reloader *>(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??$construct@PAVc_single_tag_instance_reloader@@@?$c_typed_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@PAV2@@Z");
//};

//public: c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::c_sync_difference_iterator_thunk(class c_single_tag_instance_reloader *)
//{
//    mangled_ppc("??0c_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@QAA@PAV1@@Z");
//};

//public: virtual void c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::reset(void)
//{
//    mangled_ppc("?reset@c_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@UAAXXZ");
//};

//public: virtual bool c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::next(void)
//{
//    mangled_ppc("?next@c_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@UAA_NXZ");
//};

//public: virtual bool c_single_tag_instance_reloader::c_sync_difference_iterator_thunk::get_changed_tag_file(struct s_tag_files_sync_file *)
//{
//    mangled_ppc("?get_changed_tag_file@c_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@UAA_NPAUs_tag_files_sync_file@@@Z");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_instance_loader_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_sync_difference_iterator_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_difference_iterator_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_instance_loader_redirector_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_instance_loader_redirector_thunk@c_single_tag_instance_reloader@@XZ");
//};

//public: class c_single_tag_instance_reloader::c_sync_source_thunk * c_opaque_data<class c_single_tag_instance_reloader::c_sync_source_thunk, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_sync_source_thunk@c_single_tag_instance_reloader@@$07$03@@QAAPAVc_sync_source_thunk@c_single_tag_instance_reloader@@XZ");
//};

