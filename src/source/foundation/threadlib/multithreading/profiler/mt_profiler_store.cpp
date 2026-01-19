/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long *g_mtp_profiler_colors; // "?g_mtp_profiler_colors@@3PAKA"
// bool g_capture_allowed; // "?g_capture_allowed@@3_NA"
// class c_indexed_list<long, 240> g_alloc_list; // "?g_alloc_list@@3V?$c_indexed_list@J$0PA@@@A"
// unsigned char *profiler_backing_memory; // "?profiler_backing_memory@@3PAEA"
// struct s_global_def *g_mtp_global_defs; // "?g_mtp_global_defs@@3PAUs_global_def@@A"
// char const **g_mtp_name_defs; // "?g_mtp_name_defs@@3PAPBDA"
// long g_cur_offset; // "?g_cur_offset@@3JA"
// enum e_mt_profiler_mode g_mt_profiler_mode; // "?g_mt_profiler_mode@@3W4e_mt_profiler_mode@@A"
// class c_synchronized_int32g_mtp_used_global_defs; // "?g_mtp_used_global_defs@@3Vc_synchronized_int32@@A"
// class c_synchronized_int32g_mtp_used_name_defs; // "?g_mtp_used_name_defs@@3Vc_synchronized_int32@@A"

// unsigned long mt_profiler_get_color_from_index(long);
// float smoothstep(float, float, float);
// unsigned long mt_profiler_get_color_from_user(float, float);
// char const * mt_profiler_get_name_from_index(long);
// unsigned short get_color_index(enum e_mt_color);
// unsigned short get_name_index(char const *);
// unsigned short get_global_index(unsigned short, unsigned short, unsigned short);
// public: void s_global_def::set(unsigned short, unsigned short, unsigned short);
// unsigned short profiler_get_index(char const *, char const *, enum e_mt_color);
// struct s_mt_context_detail mt_profiler_get_context_detail(unsigned short);
// void initialize_history(void);
// long enough_free(long);
// unsigned char * allocate_frame(long);
// struct s_profiler_frame_header * get_frame(long);
// struct s_profiler_frame_header * profiler_storage_request(unsigned long, unsigned long);
// struct s_profiler_frame_header * mt_profiler_get_frame(long);
// void mt_profiler_toggle_capture(void);
// void profiler_publish_frame(struct s_profiler_frame_header *);
// void mt_profiler_initialize(void);
// void mt_profiler_dispose(void);
// void mt_profiler_set_mode(enum e_mt_profiler_mode);
// enum e_mt_profiler_mode mt_profiler_get_mode(void);
// public: class c_indexed_list<long, 240>::iterator c_indexed_list<long, 240>::begin(void);
// public: class c_indexed_list<long, 240>::iterator c_indexed_list<long, 240>::end(void);
// public: long c_indexed_list<long, 240>::count(void) const;
// public: bool c_indexed_list<long, 240>::full(void) const;
// public: c_indexed_list<long, 240>::const_iterator::const_iterator(class c_indexed_list<long, 240>::iterator const &);
// public: long const & c_indexed_list<long, 240>::const_iterator::operator*(void) const;
// public: long & c_indexed_list<long, 240>::iterator::operator*(void);
// public: class c_indexed_list<long, 240>::iterator & c_indexed_list<long, 240>::iterator::operator--(void);
// private: unsigned short c_indexed_list<long, 240>::get_next(unsigned short) const;
// private: unsigned short c_indexed_list<long, 240>::get_prev(unsigned short) const;
// private: unsigned short c_indexed_list<long, 240>::get_head(void) const;
// private: unsigned short c_indexed_list<long, 240>::get_tail(void) const;
// private: long & c_indexed_list<long, 240>::get_data(unsigned short);
// private: long const & c_indexed_list<long, 240>::get_data(unsigned short) const;
// public: c_indexed_list<long, 240>::iterator::iterator(class c_indexed_list<long, 240> *, unsigned short, unsigned short, unsigned short);
// public: void c_indexed_list<long, 240>::initialize(void);
// public: bool c_indexed_list<long, 240>::push_back(long const &);
// public: long c_indexed_list<long, 240>::pop_head(void);
// private: unsigned short c_indexed_list<long, 240>::pop(void);
// private: void c_indexed_list<long, 240>::push(struct s_il_node *);
// public: void c_indexed_list<long, 240>::clear(void);
// void g_mtp_used_global_defs::`dynamic atexit destructor'(void);
// void g_mtp_used_name_defs::`dynamic atexit destructor'(void);

//unsigned long mt_profiler_get_color_from_index(long)
//{
//    mangled_ppc("?mt_profiler_get_color_from_index@@YAKJ@Z");
//};

//float smoothstep(float, float, float)
//{
//    mangled_ppc("?smoothstep@@YAMMMM@Z");
//};

//unsigned long mt_profiler_get_color_from_user(float, float)
//{
//    mangled_ppc("?mt_profiler_get_color_from_user@@YAKMM@Z");
//};

//char const * mt_profiler_get_name_from_index(long)
//{
//    mangled_ppc("?mt_profiler_get_name_from_index@@YAPBDJ@Z");
//};

//unsigned short get_color_index(enum e_mt_color)
//{
//    mangled_ppc("?get_color_index@@YAGW4e_mt_color@@@Z");
//};

//unsigned short get_name_index(char const *)
//{
//    mangled_ppc("?get_name_index@@YAGPBD@Z");
//};

//unsigned short get_global_index(unsigned short, unsigned short, unsigned short)
//{
//    mangled_ppc("?get_global_index@@YAGGGG@Z");
//};

//public: void s_global_def::set(unsigned short, unsigned short, unsigned short)
//{
//    mangled_ppc("?set@s_global_def@@QAAXGGG@Z");
//};

//unsigned short profiler_get_index(char const *, char const *, enum e_mt_color)
//{
//    mangled_ppc("?profiler_get_index@@YAGPBD0W4e_mt_color@@@Z");
//};

//struct s_mt_context_detail mt_profiler_get_context_detail(unsigned short)
//{
//    mangled_ppc("?mt_profiler_get_context_detail@@YA?AUs_mt_context_detail@@G@Z");
//};

//void initialize_history(void)
//{
//    mangled_ppc("?initialize_history@@YAXXZ");
//};

//long enough_free(long)
//{
//    mangled_ppc("?enough_free@@YAJJ@Z");
//};

//unsigned char * allocate_frame(long)
//{
//    mangled_ppc("?allocate_frame@@YAPAEJ@Z");
//};

//struct s_profiler_frame_header * get_frame(long)
//{
//    mangled_ppc("?get_frame@@YAPAUs_profiler_frame_header@@J@Z");
//};

//struct s_profiler_frame_header * profiler_storage_request(unsigned long, unsigned long)
//{
//    mangled_ppc("?profiler_storage_request@@YAPAUs_profiler_frame_header@@KK@Z");
//};

//struct s_profiler_frame_header * mt_profiler_get_frame(long)
//{
//    mangled_ppc("?mt_profiler_get_frame@@YAPAUs_profiler_frame_header@@J@Z");
//};

//void mt_profiler_toggle_capture(void)
//{
//    mangled_ppc("?mt_profiler_toggle_capture@@YAXXZ");
//};

//void profiler_publish_frame(struct s_profiler_frame_header *)
//{
//    mangled_ppc("?profiler_publish_frame@@YAXPAUs_profiler_frame_header@@@Z");
//};

//void mt_profiler_initialize(void)
//{
//    mangled_ppc("?mt_profiler_initialize@@YAXXZ");
//};

//void mt_profiler_dispose(void)
//{
//    mangled_ppc("?mt_profiler_dispose@@YAXXZ");
//};

//void mt_profiler_set_mode(enum e_mt_profiler_mode)
//{
//    mangled_ppc("?mt_profiler_set_mode@@YAXW4e_mt_profiler_mode@@@Z");
//};

//enum e_mt_profiler_mode mt_profiler_get_mode(void)
//{
//    mangled_ppc("?mt_profiler_get_mode@@YA?AW4e_mt_profiler_mode@@XZ");
//};

//public: class c_indexed_list<long, 240>::iterator c_indexed_list<long, 240>::begin(void)
//{
//    mangled_ppc("?begin@?$c_indexed_list@J$0PA@@@QAA?AViterator@1@XZ");
//};

//public: class c_indexed_list<long, 240>::iterator c_indexed_list<long, 240>::end(void)
//{
//    mangled_ppc("?end@?$c_indexed_list@J$0PA@@@QAA?AViterator@1@XZ");
//};

//public: long c_indexed_list<long, 240>::count(void) const
//{
//    mangled_ppc("?count@?$c_indexed_list@J$0PA@@@QBAJXZ");
//};

//public: bool c_indexed_list<long, 240>::full(void) const
//{
//    mangled_ppc("?full@?$c_indexed_list@J$0PA@@@QBA_NXZ");
//};

//public: c_indexed_list<long, 240>::const_iterator::const_iterator(class c_indexed_list<long, 240>::iterator const &)
//{
//    mangled_ppc("??0const_iterator@?$c_indexed_list@J$0PA@@@QAA@ABViterator@1@@Z");
//};

//public: long const & c_indexed_list<long, 240>::const_iterator::operator*(void) const
//{
//    mangled_ppc("??Dconst_iterator@?$c_indexed_list@J$0PA@@@QBAABJXZ");
//};

//public: long & c_indexed_list<long, 240>::iterator::operator*(void)
//{
//    mangled_ppc("??Diterator@?$c_indexed_list@J$0PA@@@QAAAAJXZ");
//};

//public: class c_indexed_list<long, 240>::iterator & c_indexed_list<long, 240>::iterator::operator--(void)
//{
//    mangled_ppc("??Fiterator@?$c_indexed_list@J$0PA@@@QAAAAV01@XZ");
//};

//private: unsigned short c_indexed_list<long, 240>::get_next(unsigned short) const
//{
//    mangled_ppc("?get_next@?$c_indexed_list@J$0PA@@@ABAGG@Z");
//};

//private: unsigned short c_indexed_list<long, 240>::get_prev(unsigned short) const
//{
//    mangled_ppc("?get_prev@?$c_indexed_list@J$0PA@@@ABAGG@Z");
//};

//private: unsigned short c_indexed_list<long, 240>::get_head(void) const
//{
//    mangled_ppc("?get_head@?$c_indexed_list@J$0PA@@@ABAGXZ");
//};

//private: unsigned short c_indexed_list<long, 240>::get_tail(void) const
//{
//    mangled_ppc("?get_tail@?$c_indexed_list@J$0PA@@@ABAGXZ");
//};

//private: long & c_indexed_list<long, 240>::get_data(unsigned short)
//{
//    mangled_ppc("?get_data@?$c_indexed_list@J$0PA@@@AAAAAJG@Z");
//};

//private: long const & c_indexed_list<long, 240>::get_data(unsigned short) const
//{
//    mangled_ppc("?get_data@?$c_indexed_list@J$0PA@@@ABAABJG@Z");
//};

//public: c_indexed_list<long, 240>::iterator::iterator(class c_indexed_list<long, 240> *, unsigned short, unsigned short, unsigned short)
//{
//    mangled_ppc("??0iterator@?$c_indexed_list@J$0PA@@@QAA@PAV1@GGG@Z");
//};

//public: void c_indexed_list<long, 240>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_indexed_list@J$0PA@@@QAAXXZ");
//};

//public: bool c_indexed_list<long, 240>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_indexed_list@J$0PA@@@QAA_NABJ@Z");
//};

//public: long c_indexed_list<long, 240>::pop_head(void)
//{
//    mangled_ppc("?pop_head@?$c_indexed_list@J$0PA@@@QAAJXZ");
//};

//private: unsigned short c_indexed_list<long, 240>::pop(void)
//{
//    mangled_ppc("?pop@?$c_indexed_list@J$0PA@@@AAAGXZ");
//};

//private: void c_indexed_list<long, 240>::push(struct s_il_node *)
//{
//    mangled_ppc("?push@?$c_indexed_list@J$0PA@@@AAAXPAUs_il_node@@@Z");
//};

//public: void c_indexed_list<long, 240>::clear(void)
//{
//    mangled_ppc("?clear@?$c_indexed_list@J$0PA@@@QAAXXZ");
//};

//void g_mtp_used_global_defs::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_mtp_used_global_defs@@YAXXZ");
//};

//void g_mtp_used_name_defs::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_mtp_used_name_defs@@YAXXZ");
//};

