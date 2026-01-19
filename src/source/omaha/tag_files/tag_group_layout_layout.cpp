/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool traverse_tag_persist_layout(class c_persist_archiver_visitor *, enum e_tag_persist_layout_traversal_type, enum e_tag_persist_layout_version);
// public: c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>(class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder> const &);
// public: c_persist_archiver::c_persist_archiver(class c_persist_archiver const &);
// public: c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>(char const *, unsigned long, long, bool (c_tag_layout_builder::*)(class c_persist_stream *), bool (c_tag_layout_rebuilder::*)(class c_persist_stream *), bool (c_tag_layout_rebuilder::*)(void));
// public: virtual char const * c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_description(void) const;
// public: virtual unsigned long c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_chunk_tag(void) const;
// public: virtual long c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_chunk_version(void) const;
// public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::can_handle_chunk(unsigned long, long) const;
// public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const;
// public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::visit(class c_typed_pointer_holder &) const;
// bool (c_tag_layout_rebuilder::* select_traversal<bool (c_tag_layout_rebuilder::*)(void)>(enum e_tag_persist_layout_traversal_type, bool (c_tag_layout_rebuilder::*)(void), bool (c_tag_layout_rebuilder::*)(void), bool (c_tag_layout_rebuilder::*)(void)))(void);
// public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder> >(class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>);
// public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<9>(struct s_persist_archiver_holder (&)[9]);
// public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<11>(struct s_persist_archiver_holder (&)[11]);
// public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<12>(struct s_persist_archiver_holder (&)[12]);
// public: class c_tag_layout_builder * c_typed_pointer_holder::operatorcast<class c_tag_layout_builder>(void);
// public: class c_tag_layout_rebuilder * c_typed_pointer_holder::operatorcast<class c_tag_layout_rebuilder>(void);

//bool traverse_tag_persist_layout(class c_persist_archiver_visitor *, enum e_tag_persist_layout_traversal_type, enum e_tag_persist_layout_version)
//{
//    mangled_ppc("?traverse_tag_persist_layout@@YA_NPAVc_persist_archiver_visitor@@W4e_tag_persist_layout_traversal_type@@W4e_tag_persist_layout_version@@@Z");
//};

//public: c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>(class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder> const &)
//{
//    mangled_ppc("??0?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@QAA@ABV0@@Z");
//};

//public: c_persist_archiver::c_persist_archiver(class c_persist_archiver const &)
//{
//    mangled_ppc("??0c_persist_archiver@@QAA@ABV0@@Z");
//};

//public: c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>(char const *, unsigned long, long, bool (c_tag_layout_builder::*)(class c_persist_stream *), bool (c_tag_layout_rebuilder::*)(class c_persist_stream *), bool (c_tag_layout_rebuilder::*)(void))
//{
//    mangled_ppc("??0?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@QAA@PBDKJP8c_tag_layout_builder@@AA_NPAVc_persist_stream@@@ZP8c_tag_layout_rebuilder@@AA_N1@ZP83@AA_NXZ@Z");
//};

//public: virtual char const * c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_description(void) const
//{
//    mangled_ppc("?get_description@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBAPBDXZ");
//};

//public: virtual unsigned long c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_chunk_tag(void) const
//{
//    mangled_ppc("?get_chunk_tag@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBAKXZ");
//};

//public: virtual long c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::get_chunk_version(void) const
//{
//    mangled_ppc("?get_chunk_version@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBAJXZ");
//};

//public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::can_handle_chunk(unsigned long, long) const
//{
//    mangled_ppc("?can_handle_chunk@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBA_NKJ@Z");
//};

//public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::persist(class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?persist@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBA_NAAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::restore(struct s_persist_chunk_header const *, class c_typed_pointer_holder &, class c_persist_stream *) const
//{
//    mangled_ppc("?restore@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBA_NPBUs_persist_chunk_header@@AAVc_typed_pointer_holder@@PAVc_persist_stream@@@Z");
//};

//public: virtual bool c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>::visit(class c_typed_pointer_holder &) const
//{
//    mangled_ppc("?visit@?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@UBA_NAAVc_typed_pointer_holder@@@Z");
//};

//bool (c_tag_layout_rebuilder::* select_traversal<bool (c_tag_layout_rebuilder::*)(void)>(enum e_tag_persist_layout_traversal_type, bool (c_tag_layout_rebuilder::*)(void), bool (c_tag_layout_rebuilder::*)(void), bool (c_tag_layout_rebuilder::*)(void)))(void)
//{
//    mangled_ppc("??$select_traversal@P8c_tag_layout_rebuilder@@AA_NXZ@@YAP8c_tag_layout_rebuilder@@AA_NXZW4e_tag_persist_layout_traversal_type@@P80@AA_NXZ11@Z");
//};

//public: static struct s_persist_archiver_holder s_persist_archiver_holder::make<class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder> >(class c_load_or_save_chunk_section_archiver<class c_tag_layout_builder, class c_tag_layout_rebuilder, class c_tag_layout_rebuilder>)
//{
//    mangled_ppc("??$make@V?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@@s_persist_archiver_holder@@SA?AU0@V?$c_load_or_save_chunk_section_archiver@Vc_tag_layout_builder@@Vc_tag_layout_rebuilder@@V2@@@@Z");
//};

//public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<9>(struct s_persist_archiver_holder (&)[9])
//{
//    mangled_ppc("??$?0$08@?$c_wrapped_array@Us_persist_archiver_holder@@@@QAA@AAY08Us_persist_archiver_holder@@@Z");
//};

//public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<11>(struct s_persist_archiver_holder (&)[11])
//{
//    mangled_ppc("??$?0$0L@@?$c_wrapped_array@Us_persist_archiver_holder@@@@QAA@AAY0L@Us_persist_archiver_holder@@@Z");
//};

//public: c_wrapped_array<struct s_persist_archiver_holder>::ctor<12>(struct s_persist_archiver_holder (&)[12])
//{
//    mangled_ppc("??$?0$0M@@?$c_wrapped_array@Us_persist_archiver_holder@@@@QAA@AAY0M@Us_persist_archiver_holder@@@Z");
//};

//public: class c_tag_layout_builder * c_typed_pointer_holder::operatorcast<class c_tag_layout_builder>(void)
//{
//    mangled_ppc("??$?BVc_tag_layout_builder@@@c_typed_pointer_holder@@QAAPAVc_tag_layout_builder@@XZ");
//};

//public: class c_tag_layout_rebuilder * c_typed_pointer_holder::operatorcast<class c_tag_layout_rebuilder>(void)
//{
//    mangled_ppc("??$?BVc_tag_layout_rebuilder@@@c_typed_pointer_holder@@QAAPAVc_tag_layout_rebuilder@@XZ");
//};

