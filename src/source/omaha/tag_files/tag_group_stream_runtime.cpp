/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_data_array *g_tag_stream_header_data; // "?g_tag_stream_header_data@@3PAUs_data_array@@A"
// class c_typed_data_array<struct s_tag_stream_datum> g_tag_stream_data; // "?g_tag_stream_data@@3V?$c_typed_data_array@Us_tag_stream_datum@@@@A"

// void tag_group_streams_initialize(void);
// void tag_group_streams_dispose(void);
// void tag_group_streams_reset(void);
// long create_tag_stream_list(class c_wrapped_array<struct s_tag_stream_definition const *> const &, class c_wrapped_array<struct s_tag_group_stream> &);
// void extract_tag_stream_list(long, class c_wrapped_array<struct s_tag_group_stream> &, long *);
// void dispose_tag_stream_list(long);
// long duplicate_tag_stream_list(long);
// struct s_tag_block * find_tag_stream(long, unsigned long);
// struct s_tag_block * find_or_create_tag_stream(long, unsigned long);
// public: c_tag_group_stream_iterator::c_tag_group_stream_iterator(struct s_tag_group_stream *, long);
// public: c_tag_alternate_stream_iterator::c_tag_alternate_stream_iterator(void);
// public: virtual bool c_tag_group_stream_iterator::next(void);
// public: virtual unsigned long c_tag_group_stream_iterator::get_stream_tag(void);
// public: virtual struct s_tag_block * c_tag_group_stream_iterator::get_stream_block(void);
// public: c_tag_group_stream_consumer::c_tag_group_stream_consumer(struct s_tag_group_stream *, long, unsigned long, unsigned long);
// public: c_tag_alternate_stream_consumer::c_tag_alternate_stream_consumer(void);
// public: virtual bool c_tag_group_stream_consumer::can_keep_consuming_streams(void);
// public: virtual struct s_tag_block * c_tag_group_stream_consumer::get_stream_block_destination(unsigned long, struct s_tag_block_definition const **);
// public: bool c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::valid(void) const;
// public: void c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::clear(void);
// public: void c_typed_data_array<struct s_tag_stream_datum>::initialize(char const *, long, class c_allocation_interface *);
// public: void c_typed_data_array<struct s_tag_stream_datum>::dispose(void);
// public: class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > c_typed_data_array<struct s_tag_stream_datum>::new_datum(void);
// public: void c_typed_data_array<struct s_tag_stream_datum>::delete_datum(class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > const &);
// public: struct s_tag_stream_datum * c_typed_data_array<struct s_tag_stream_datum>::get(class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > const &);
// public: struct s_data_array * c_typed_data_array<struct s_tag_stream_datum>::get_data(void) const;
// public: void c_data_iterator<struct s_tag_stream_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct s_tag_stream_datum>::next(void);
// public: struct s_tag_stream_datum * c_data_iterator<struct s_tag_stream_datum>::get_datum(void) const;
// public: long c_data_iterator<struct s_tag_stream_datum>::get_index(void) const;
// public: long c_wrapped_array_no_init<struct s_tag_stream_definition const *>::count(void) const;
// public: struct s_tag_stream_definition const *const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::operator[](long) const;
// private: c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >(long);
// public: struct s_tag_stream_definition const *const * c_wrapped_array_no_init<struct s_tag_stream_definition const *>::begin(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::valid_index(long) const;
// public: class c_wrapped_array_no_init<struct s_tag_stream_definition const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_stream_definition const *> >::get_super_class(void) const;
// public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::count(void) const;

//void tag_group_streams_initialize(void)
//{
//    mangled_ppc("?tag_group_streams_initialize@@YAXXZ");
//};

//void tag_group_streams_dispose(void)
//{
//    mangled_ppc("?tag_group_streams_dispose@@YAXXZ");
//};

//void tag_group_streams_reset(void)
//{
//    mangled_ppc("?tag_group_streams_reset@@YAXXZ");
//};

//long create_tag_stream_list(class c_wrapped_array<struct s_tag_stream_definition const *> const &, class c_wrapped_array<struct s_tag_group_stream> &)
//{
//    mangled_ppc("?create_tag_stream_list@@YAJABV?$c_wrapped_array@PBUs_tag_stream_definition@@@@AAV?$c_wrapped_array@Us_tag_group_stream@@@@@Z");
//};

//void extract_tag_stream_list(long, class c_wrapped_array<struct s_tag_group_stream> &, long *)
//{
//    mangled_ppc("?extract_tag_stream_list@@YAXJAAV?$c_wrapped_array@Us_tag_group_stream@@@@PAJ@Z");
//};

//void dispose_tag_stream_list(long)
//{
//    mangled_ppc("?dispose_tag_stream_list@@YAXJ@Z");
//};

//long duplicate_tag_stream_list(long)
//{
//    mangled_ppc("?duplicate_tag_stream_list@@YAJJ@Z");
//};

//struct s_tag_block * find_tag_stream(long, unsigned long)
//{
//    mangled_ppc("?find_tag_stream@@YAPAUs_tag_block@@JK@Z");
//};

//struct s_tag_block * find_or_create_tag_stream(long, unsigned long)
//{
//    mangled_ppc("?find_or_create_tag_stream@@YAPAUs_tag_block@@JK@Z");
//};

//public: c_tag_group_stream_iterator::c_tag_group_stream_iterator(struct s_tag_group_stream *, long)
//{
//    mangled_ppc("??0c_tag_group_stream_iterator@@QAA@PAUs_tag_group_stream@@J@Z");
//};

//public: c_tag_alternate_stream_iterator::c_tag_alternate_stream_iterator(void)
//{
//    mangled_ppc("??0c_tag_alternate_stream_iterator@@QAA@XZ");
//};

//public: virtual bool c_tag_group_stream_iterator::next(void)
//{
//    mangled_ppc("?next@c_tag_group_stream_iterator@@UAA_NXZ");
//};

//public: virtual unsigned long c_tag_group_stream_iterator::get_stream_tag(void)
//{
//    mangled_ppc("?get_stream_tag@c_tag_group_stream_iterator@@UAAKXZ");
//};

//public: virtual struct s_tag_block * c_tag_group_stream_iterator::get_stream_block(void)
//{
//    mangled_ppc("?get_stream_block@c_tag_group_stream_iterator@@UAAPAUs_tag_block@@XZ");
//};

//public: c_tag_group_stream_consumer::c_tag_group_stream_consumer(struct s_tag_group_stream *, long, unsigned long, unsigned long)
//{
//    mangled_ppc("??0c_tag_group_stream_consumer@@QAA@PAUs_tag_group_stream@@JKK@Z");
//};

//public: c_tag_alternate_stream_consumer::c_tag_alternate_stream_consumer(void)
//{
//    mangled_ppc("??0c_tag_alternate_stream_consumer@@QAA@XZ");
//};

//public: virtual bool c_tag_group_stream_consumer::can_keep_consuming_streams(void)
//{
//    mangled_ppc("?can_keep_consuming_streams@c_tag_group_stream_consumer@@UAA_NXZ");
//};

//public: virtual struct s_tag_block * c_tag_group_stream_consumer::get_stream_block_destination(unsigned long, struct s_tag_block_definition const **)
//{
//    mangled_ppc("?get_stream_block_destination@c_tag_group_stream_consumer@@UAAPAUs_tag_block@@KPAPBUs_tag_block_definition@@@Z");
//};

//public: bool c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::valid(void) const
//{
//    mangled_ppc("?valid@?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@QBA_NXZ");
//};

//public: void c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::clear(void)
//{
//    mangled_ppc("?clear@?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@QAAXXZ");
//};

//public: void c_typed_data_array<struct s_tag_stream_datum>::initialize(char const *, long, class c_allocation_interface *)
//{
//    mangled_ppc("?initialize@?$c_typed_data_array@Us_tag_stream_datum@@@@QAAXPBDJPAVc_allocation_interface@@@Z");
//};

//public: void c_typed_data_array<struct s_tag_stream_datum>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_typed_data_array@Us_tag_stream_datum@@@@QAAXXZ");
//};

//public: class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > c_typed_data_array<struct s_tag_stream_datum>::new_datum(void)
//{
//    mangled_ppc("?new_datum@?$c_typed_data_array@Us_tag_stream_datum@@@@QAA?AV?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@XZ");
//};

//public: void c_typed_data_array<struct s_tag_stream_datum>::delete_datum(class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > const &)
//{
//    mangled_ppc("?delete_datum@?$c_typed_data_array@Us_tag_stream_datum@@@@QAAXABV?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@@Z");
//};

//public: struct s_tag_stream_datum * c_typed_data_array<struct s_tag_stream_datum>::get(class c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> > const &)
//{
//    mangled_ppc("?get@?$c_typed_data_array@Us_tag_stream_datum@@@@QAAPAUs_tag_stream_datum@@ABV?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@@Z");
//};

//public: struct s_data_array * c_typed_data_array<struct s_tag_stream_datum>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_typed_data_array@Us_tag_stream_datum@@@@QBAPAUs_data_array@@XZ");
//};

//public: void c_data_iterator<struct s_tag_stream_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_tag_stream_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct s_tag_stream_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_tag_stream_datum@@@@QAA_NXZ");
//};

//public: struct s_tag_stream_datum * c_data_iterator<struct s_tag_stream_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_tag_stream_datum@@@@QBAPAUs_tag_stream_datum@@XZ");
//};

//public: long c_data_iterator<struct s_tag_stream_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Us_tag_stream_datum@@@@QBAJXZ");
//};

//public: long c_wrapped_array_no_init<struct s_tag_stream_definition const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@QBAJXZ");
//};

//public: struct s_tag_stream_definition const *const & c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@PBUs_tag_stream_definition@@@@QBAABQBUs_tag_stream_definition@@J@Z");
//};

//private: c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >::c_typed_datum_index<class c_typed_data_array<struct s_tag_stream_datum> >(long)
//{
//    mangled_ppc("??0?$c_typed_datum_index@V?$c_typed_data_array@Us_tag_stream_datum@@@@@@AAA@J@Z");
//};

//public: struct s_tag_stream_definition const *const * c_wrapped_array_no_init<struct s_tag_stream_definition const *>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@QBAPBQBUs_tag_stream_definition@@XZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@PBUs_tag_stream_definition@@@@QBA_NJ@Z");
//};

//public: class c_wrapped_array_no_init<struct s_tag_stream_definition const *> const * c_recursive_template_pattern<class c_wrapped_array_no_init<struct s_tag_stream_definition const *> >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@@@QBAPBV?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<struct s_tag_stream_definition const *>, struct s_tag_stream_definition const *>::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@PBUs_tag_stream_definition@@@@PBUs_tag_stream_definition@@@@QBAJXZ");
//};

