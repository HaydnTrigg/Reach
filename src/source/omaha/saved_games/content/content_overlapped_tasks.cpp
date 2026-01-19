/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: c_content_overlapped_task::c_content_overlapped_task(void);
// merged_835C44E8;
// public: c_content_overlapped_task::c_content_overlapped_task(char const *, long);
// protected: void c_content_overlapped_task::clear(void);
// public: virtual void c_content_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const);
// public: virtual void c_content_single_item_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const);
// public: void c_content_single_item_overlapped_task::initialize_create(struct _XCONTENT_DATA const *const, class c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>, long, class s_static_string<256> const *const);
// public: void c_content_single_item_overlapped_task::initialize_cross_title_create(struct _XCONTENT_CROSS_TITLE_DATA const *const, class s_static_string<256> const *const);
// public: void c_content_single_item_overlapped_task::initialize_delete(struct _XCONTENT_DATA const *const);
// public: void c_content_single_item_overlapped_task::initialize_flush(class s_static_string<256> const *const);
// public: void c_content_single_item_overlapped_task::initialize_close(class s_static_string<256> const *const);
// public: virtual char const * c_content_single_item_overlapped_task::get_context_string(void) const;
// public: virtual unsigned long c_content_single_item_overlapped_task::start(void *);
// public: virtual void c_content_single_item_overlapped_task::success(unsigned long);
// public: virtual void c_content_single_item_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_content_single_item_overlapped_task::complete(void);
// public: virtual void c_content_single_item_overlapped_task::post_complete(enum e_overlapped_task_state);
// private: unsigned long c_content_single_item_overlapped_task::start_content_create(void *);
// private: unsigned long c_content_single_item_overlapped_task::start_content_create_cross_title(void *);
// private: unsigned long c_content_single_item_overlapped_task::start_content_delete(void *);
// private: unsigned long c_content_single_item_overlapped_task::start_content_flush(void *);
// private: unsigned long c_content_single_item_overlapped_task::start_content_close(void *);
// public: virtual void c_content_enumerate_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const, unsigned long, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, struct s_content_enumeration_result *const, long, void *const, enum e_content_origin);
// enum e_content_origin operator++(enum e_content_origin &, int);
// public: virtual unsigned long c_content_enumerate_overlapped_task::start(void *);
// public: virtual void c_content_enumerate_overlapped_task::success(unsigned long);
// public: virtual void c_content_enumerate_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_content_enumerate_overlapped_task::complete(void);
// public: virtual void c_content_enumerate_overlapped_task::post_complete(enum e_overlapped_task_state);
// public: virtual bool c_content_enumerate_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long);
// public: virtual void c_content_enumerate_cross_title_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const, unsigned long, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, struct s_content_cross_title_enumeration_result *const, long, void *const, enum e_content_origin);
// public: virtual unsigned long c_content_enumerate_cross_title_overlapped_task::start(void *);
// public: virtual void c_content_enumerate_cross_title_overlapped_task::success(unsigned long);
// public: virtual void c_content_enumerate_cross_title_overlapped_task::failure(unsigned long, unsigned long, unsigned long);
// public: virtual void c_content_enumerate_cross_title_overlapped_task::complete(void);
// public: virtual void c_content_enumerate_cross_title_overlapped_task::post_complete(enum e_overlapped_task_state);
// public: virtual bool c_content_enumerate_cross_title_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long);
// unsigned long xcontent_flags_from_content_creation_flags(class c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>);
// public: c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>);
// public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_content_creation_flag) const;
// public: long c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::count_set(void) const;
// public: class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::get_flagged_inside_range(enum e_content_creation_flag, enum e_content_creation_flag) const;
// public: unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_content_origin) const;
// public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_content_item_type) const;
// public: class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_content_creation_flag, enum e_content_creation_flag);
// public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const;

//public: c_content_overlapped_task::c_content_overlapped_task(void)
//{
//    mangled_ppc("??0c_content_overlapped_task@@QAA@XZ");
//};

//merged_835C44E8
//{
//    mangled_ppc("merged_835C44E8");
//};

//public: c_content_overlapped_task::c_content_overlapped_task(char const *, long)
//{
//    mangled_ppc("??0c_content_overlapped_task@@QAA@PBDJ@Z");
//};

//protected: void c_content_overlapped_task::clear(void)
//{
//    mangled_ppc("?clear@c_content_overlapped_task@@IAAXXZ");
//};

//public: virtual void c_content_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const)
//{
//    mangled_ppc("?initialize@c_content_overlapped_task@@UAAXW4e_controller_index@@QAVc_content_overlapped_task_callback_interface@@QAX@Z");
//};

//public: virtual void c_content_single_item_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const)
//{
//    mangled_ppc("?initialize@c_content_single_item_overlapped_task@@UAAXW4e_controller_index@@QAVc_content_overlapped_task_callback_interface@@QAX@Z");
//};

//public: void c_content_single_item_overlapped_task::initialize_create(struct _XCONTENT_DATA const *const, class c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>, long, class s_static_string<256> const *const)
//{
//    mangled_ppc("?initialize_create@c_content_single_item_overlapped_task@@QAAXQBU_XCONTENT_DATA@@V?$c_flags@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@JQBV?$s_static_string@$0BAA@@@@Z");
//};

//public: void c_content_single_item_overlapped_task::initialize_cross_title_create(struct _XCONTENT_CROSS_TITLE_DATA const *const, class s_static_string<256> const *const)
//{
//    mangled_ppc("?initialize_cross_title_create@c_content_single_item_overlapped_task@@QAAXQBU_XCONTENT_CROSS_TITLE_DATA@@QBV?$s_static_string@$0BAA@@@@Z");
//};

//public: void c_content_single_item_overlapped_task::initialize_delete(struct _XCONTENT_DATA const *const)
//{
//    mangled_ppc("?initialize_delete@c_content_single_item_overlapped_task@@QAAXQBU_XCONTENT_DATA@@@Z");
//};

//public: void c_content_single_item_overlapped_task::initialize_flush(class s_static_string<256> const *const)
//{
//    mangled_ppc("?initialize_flush@c_content_single_item_overlapped_task@@QAAXQBV?$s_static_string@$0BAA@@@@Z");
//};

//public: void c_content_single_item_overlapped_task::initialize_close(class s_static_string<256> const *const)
//{
//    mangled_ppc("?initialize_close@c_content_single_item_overlapped_task@@QAAXQBV?$s_static_string@$0BAA@@@@Z");
//};

//public: virtual char const * c_content_single_item_overlapped_task::get_context_string(void) const
//{
//    mangled_ppc("?get_context_string@c_content_single_item_overlapped_task@@UBAPBDXZ");
//};

//public: virtual unsigned long c_content_single_item_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_content_single_item_overlapped_task@@UAAKPAX@Z");
//};

//public: virtual void c_content_single_item_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_content_single_item_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_content_single_item_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_content_single_item_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_content_single_item_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_content_single_item_overlapped_task@@UAAXXZ");
//};

//public: virtual void c_content_single_item_overlapped_task::post_complete(enum e_overlapped_task_state)
//{
//    mangled_ppc("?post_complete@c_content_single_item_overlapped_task@@UAAXW4e_overlapped_task_state@@@Z");
//};

//private: unsigned long c_content_single_item_overlapped_task::start_content_create(void *)
//{
//    mangled_ppc("?start_content_create@c_content_single_item_overlapped_task@@AAAKPAX@Z");
//};

//private: unsigned long c_content_single_item_overlapped_task::start_content_create_cross_title(void *)
//{
//    mangled_ppc("?start_content_create_cross_title@c_content_single_item_overlapped_task@@AAAKPAX@Z");
//};

//private: unsigned long c_content_single_item_overlapped_task::start_content_delete(void *)
//{
//    mangled_ppc("?start_content_delete@c_content_single_item_overlapped_task@@AAAKPAX@Z");
//};

//private: unsigned long c_content_single_item_overlapped_task::start_content_flush(void *)
//{
//    mangled_ppc("?start_content_flush@c_content_single_item_overlapped_task@@AAAKPAX@Z");
//};

//private: unsigned long c_content_single_item_overlapped_task::start_content_close(void *)
//{
//    mangled_ppc("?start_content_close@c_content_single_item_overlapped_task@@AAAKPAX@Z");
//};

//public: virtual void c_content_enumerate_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const, unsigned long, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, class c_flags<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>, struct s_content_enumeration_result *const, long, void *const, enum e_content_origin)
//{
//    mangled_ppc("?initialize@c_content_enumerate_overlapped_task@@UAAXW4e_controller_index@@QAVc_content_overlapped_task_callback_interface@@QAXKV?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QAUs_content_enumeration_result@@J2W4e_content_origin@@@Z");
//};

//enum e_content_origin operator++(enum e_content_origin &, int)
//{
//    mangled_ppc("??E@YA?AW4e_content_origin@@AAW40@H@Z");
//};

//public: virtual unsigned long c_content_enumerate_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_content_enumerate_overlapped_task@@UAAKPAX@Z");
//};

//public: virtual void c_content_enumerate_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_content_enumerate_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_content_enumerate_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_content_enumerate_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_content_enumerate_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_content_enumerate_overlapped_task@@UAAXXZ");
//};

//public: virtual void c_content_enumerate_overlapped_task::post_complete(enum e_overlapped_task_state)
//{
//    mangled_ppc("?post_complete@c_content_enumerate_overlapped_task@@UAAXW4e_overlapped_task_state@@@Z");
//};

//public: virtual bool c_content_enumerate_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?is_result_successful@c_content_enumerate_overlapped_task@@UAA_NKKK@Z");
//};

//public: virtual void c_content_enumerate_cross_title_overlapped_task::initialize(enum e_controller_index, class c_content_overlapped_task_callback_interface *const, void *const, unsigned long, class c_flags<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>, struct s_content_cross_title_enumeration_result *const, long, void *const, enum e_content_origin)
//{
//    mangled_ppc("?initialize@c_content_enumerate_cross_title_overlapped_task@@UAAXW4e_controller_index@@QAVc_content_overlapped_task_callback_interface@@QAXKV?$c_flags@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QAUs_content_cross_title_enumeration_result@@J2W4e_content_origin@@@Z");
//};

//public: virtual unsigned long c_content_enumerate_cross_title_overlapped_task::start(void *)
//{
//    mangled_ppc("?start@c_content_enumerate_cross_title_overlapped_task@@UAAKPAX@Z");
//};

//public: virtual void c_content_enumerate_cross_title_overlapped_task::success(unsigned long)
//{
//    mangled_ppc("?success@c_content_enumerate_cross_title_overlapped_task@@UAAXK@Z");
//};

//public: virtual void c_content_enumerate_cross_title_overlapped_task::failure(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?failure@c_content_enumerate_cross_title_overlapped_task@@UAAXKKK@Z");
//};

//public: virtual void c_content_enumerate_cross_title_overlapped_task::complete(void)
//{
//    mangled_ppc("?complete@c_content_enumerate_cross_title_overlapped_task@@UAAXXZ");
//};

//public: virtual void c_content_enumerate_cross_title_overlapped_task::post_complete(enum e_overlapped_task_state)
//{
//    mangled_ppc("?post_complete@c_content_enumerate_cross_title_overlapped_task@@UAAXW4e_overlapped_task_state@@@Z");
//};

//public: virtual bool c_content_enumerate_cross_title_overlapped_task::is_result_successful(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?is_result_successful@c_content_enumerate_cross_title_overlapped_task@@UAA_NKKK@Z");
//};

//unsigned long xcontent_flags_from_content_creation_flags(class c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?xcontent_flags_from_content_creation_flags@@YAKV?$c_flags@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_content_creation_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_content_creation_flag@@@Z");
//};

//public: long c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::get_flagged_inside_range(enum e_content_creation_flag, enum e_content_creation_flag) const
//{
//    mangled_ppc("?get_flagged_inside_range@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBA?AV1@W4e_content_creation_flag@@0@Z");
//};

//public: unsigned char c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_content_origin, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_content_origin) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_content_origin@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_content_origin@@@Z");
//};

//public: bool c_flags_no_init<enum e_content_item_type, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_content_item_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_content_item_type@@G$07Us_default_enum_string_resolver@@@@QBA_NW4e_content_item_type@@@Z");
//};

//public: class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver> c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_content_creation_flag, enum e_content_creation_flag)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@SA?AV1@W4e_content_creation_flag@@0@Z");
//};

//public: bool c_flags_no_init<enum e_content_creation_flag, unsigned char, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_content_creation_flag@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

