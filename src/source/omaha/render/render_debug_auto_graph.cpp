/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<7, 0, 0, void (__cdecl __tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)> g_render_debug_auto_graph_globals_allocator; // "?g_render_debug_auto_graph_globals_allocator@@3V?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@A"
// struct s_render_debug_auto_graph_globals *g_render_debug_auto_graph_globals; // "?g_render_debug_auto_graph_globals@@3PAUs_render_debug_auto_graph_globals@@A"

// void __tls_set_g_render_debug_auto_graph_globals_allocator(void *);
// void render_debug_auto_graph(char const *, float, enum e_auto_graph_domain);
// struct s_render_debug_auto_graph_globals * render_debug_auto_graph_globals_get(void);
// void render_debug_auto_graph_toggle_activation(char const *);
// void render_debug_auto_graph_deactivate_all(void);
// void render_debug_auto_graph_toggle_hidden(void);
// void render_debug_auto_graph_track_available_series(bool);
// void render_debug_auto_graph_filter_tracked_available_series(char const *);
// void render_debug_auto_graph_display_tracked_available_series(void);
// void render_debug_auto_graph_initialize(void);
// void render_debug_auto_graph_dispose(void);
// void render_debug_auto_graph_update(float);
// void render_debug_auto_graph_game_tick(void);
// void render_debug_auto_graph_draw(void);
// public: c_simple_font_screen_display::c_simple_font_screen_display(void);
// public: c_simple_font_screen_display::~c_simple_font_screen_display(void);
// public: long c_simple_font_screen_display::get_max_column(void) const;
// public: long c_simple_font_screen_display::get_max_row(void) const;
// public: c_auto_graph_iterator::c_auto_graph_iterator(void);
// public: virtual void c_render_debug_graph_iterator::begin_events(void);
// public: virtual bool c_render_debug_graph_iterator::next_event(float *, class c_static_string<256> *);
// public: s_render_debug_graph_config::s_render_debug_graph_config(void);
// public: c_render_debug_graph_iterator::c_render_debug_graph_iterator(void);
// long find_drawing_series(char const *);
// void add_value(char const *, float, enum e_auto_graph_domain);
// void track(char const *);
// void build_range(struct s_drawing_series const *, union real_bounds2d *);
// public: void c_auto_graph_iterator::initialize(struct s_drawing_series const *);
// public: virtual void c_auto_graph_iterator::begin_all_series(void);
// public: virtual bool c_auto_graph_iterator::next_series(class c_static_string<256> *);
// public: virtual bool c_auto_graph_iterator::next_data_point_in_series(union real_point2d *);
// public: struct s_series_data_point const & t_static_ring_buffer<struct s_series_data_point, 300>::get_element(long) const;
// public: struct s_series_data_point & t_static_ring_buffer<struct s_series_data_point, 300>::get_element(long);
// public: bool c_static_stack<struct s_drawing_series, 8>::empty(void) const;
// public: bool c_static_stack<struct s_drawing_series, 8>::full(void) const;
// public: long c_static_stack<struct s_drawing_series, 8>::count(void) const;
// public: void c_static_stack<struct s_drawing_series, 8>::clear(void);
// public: long c_static_stack<struct s_drawing_series, 8>::push(void);
// public: void c_static_stack<struct s_drawing_series, 8>::pop(void);
// public: struct s_drawing_series & c_static_stack<struct s_drawing_series, 8>::operator[](long);
// public: long c_static_stack<class s_static_string<32>, 100>::count(void) const;
// public: void c_static_stack<class s_static_string<32>, 100>::clear(void);
// public: void c_static_stack<class s_static_string<32>, 100>::push_back(class s_static_string<32> const &);
// public: class s_static_string<32> & c_static_stack<class s_static_string<32>, 100>::operator[](long);
// public: void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool c_static_stack<struct s_drawing_series, 8>::valid(void) const;
// public: bool c_static_stack<struct s_drawing_series, 8>::valid(long) const;
// public: bool c_static_stack<class s_static_string<32>, 100>::valid(long) const;
// public: long c_static_stack<class s_static_string<32>, 100>::push(void);
// public: class s_static_string<32> * c_static_stack<class s_static_string<32>, 100>::get(long);
// public: bool t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::valid(void) const;
// public: bool c_static_stack<class s_static_string<32>, 100>::valid(void) const;
// public: bool c_static_stack<class s_static_string<32>, 100>::full(void) const;
// public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::set_all(void);
// public: c_flags<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::c_flags<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>(void);
// void zero_and_reconstruct<struct s_drawing_series>(struct s_drawing_series *);
// public: void s_static_string<256>::set(char const *);
// public: bool s_static_string<256>::is_equal(char const *) const;
// public: void s_static_string<32>::set(char const *);
// public: long s_static_string<32>::index_of(char const *) const;
// public: long s_static_string<32>::length(void) const;
// public: char const * s_static_string<32>::operator char const *(void) const;
// void zero_and_reconstruct<struct s_render_debug_auto_graph_globals>(struct s_render_debug_auto_graph_globals *);
// public: void s_static_string<64>::set(char const *);
// public: c_static_string<64>::c_static_string<64>(void);
// public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static class c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver> c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_graph_column, enum e_graph_column);
// void reconstruct<struct s_drawing_series>(struct s_drawing_series *);
// public: long s_static_string<32>::next_index_of(char const *, long) const;
// void reconstruct<struct s_render_debug_auto_graph_globals>(struct s_render_debug_auto_graph_globals *);
// public: void s_static_string<64>::clear(void);
// public: s_drawing_series::s_drawing_series(void);
// public: s_render_debug_auto_graph_globals::s_render_debug_auto_graph_globals(void);
// public: t_static_ring_buffer<struct s_series_data_point, 300>::t_static_ring_buffer<struct s_series_data_point, 300>(void);
// public: c_ring_buffer::c_ring_buffer(long);
// public: c_static_stack<struct s_drawing_series, 8>::c_static_stack<struct s_drawing_series, 8>(void);
// public: c_static_stack<class s_static_string<32>, 100>::c_static_stack<class s_static_string<32>, 100>(void);
// public: static bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_graph_column);
// public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// private: static unsigned short c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_graph_column);
// private: static unsigned short c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::valid(void) const;
// public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>(void);
// void g_render_debug_auto_graph_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_render_debug_auto_graph_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z");
//};

//void render_debug_auto_graph(char const *, float, enum e_auto_graph_domain)
//{
//    mangled_ppc("?render_debug_auto_graph@@YAXPBDMW4e_auto_graph_domain@@@Z");
//};

//struct s_render_debug_auto_graph_globals * render_debug_auto_graph_globals_get(void)
//{
//    mangled_ppc("?render_debug_auto_graph_globals_get@@YAPAUs_render_debug_auto_graph_globals@@XZ");
//};

//void render_debug_auto_graph_toggle_activation(char const *)
//{
//    mangled_ppc("?render_debug_auto_graph_toggle_activation@@YAXPBD@Z");
//};

//void render_debug_auto_graph_deactivate_all(void)
//{
//    mangled_ppc("?render_debug_auto_graph_deactivate_all@@YAXXZ");
//};

//void render_debug_auto_graph_toggle_hidden(void)
//{
//    mangled_ppc("?render_debug_auto_graph_toggle_hidden@@YAXXZ");
//};

//void render_debug_auto_graph_track_available_series(bool)
//{
//    mangled_ppc("?render_debug_auto_graph_track_available_series@@YAX_N@Z");
//};

//void render_debug_auto_graph_filter_tracked_available_series(char const *)
//{
//    mangled_ppc("?render_debug_auto_graph_filter_tracked_available_series@@YAXPBD@Z");
//};

//void render_debug_auto_graph_display_tracked_available_series(void)
//{
//    mangled_ppc("?render_debug_auto_graph_display_tracked_available_series@@YAXXZ");
//};

//void render_debug_auto_graph_initialize(void)
//{
//    mangled_ppc("?render_debug_auto_graph_initialize@@YAXXZ");
//};

//void render_debug_auto_graph_dispose(void)
//{
//    mangled_ppc("?render_debug_auto_graph_dispose@@YAXXZ");
//};

//void render_debug_auto_graph_update(float)
//{
//    mangled_ppc("?render_debug_auto_graph_update@@YAXM@Z");
//};

//void render_debug_auto_graph_game_tick(void)
//{
//    mangled_ppc("?render_debug_auto_graph_game_tick@@YAXXZ");
//};

//void render_debug_auto_graph_draw(void)
//{
//    mangled_ppc("?render_debug_auto_graph_draw@@YAXXZ");
//};

//public: c_simple_font_screen_display::c_simple_font_screen_display(void)
//{
//    mangled_ppc("??0c_simple_font_screen_display@@QAA@XZ");
//};

//public: c_simple_font_screen_display::~c_simple_font_screen_display(void)
//{
//    mangled_ppc("??1c_simple_font_screen_display@@QAA@XZ");
//};

//public: long c_simple_font_screen_display::get_max_column(void) const
//{
//    mangled_ppc("?get_max_column@c_simple_font_screen_display@@QBAJXZ");
//};

//public: long c_simple_font_screen_display::get_max_row(void) const
//{
//    mangled_ppc("?get_max_row@c_simple_font_screen_display@@QBAJXZ");
//};

//public: c_auto_graph_iterator::c_auto_graph_iterator(void)
//{
//    mangled_ppc("??0c_auto_graph_iterator@@QAA@XZ");
//};

//public: virtual void c_render_debug_graph_iterator::begin_events(void)
//{
//    mangled_ppc("?begin_events@c_render_debug_graph_iterator@@UAAXXZ");
//};

//public: virtual bool c_render_debug_graph_iterator::next_event(float *, class c_static_string<256> *)
//{
//    mangled_ppc("?next_event@c_render_debug_graph_iterator@@UAA_NPAMPAV?$c_static_string@$0BAA@@@@Z");
//};

//public: s_render_debug_graph_config::s_render_debug_graph_config(void)
//{
//    mangled_ppc("??0s_render_debug_graph_config@@QAA@XZ");
//};

//public: c_render_debug_graph_iterator::c_render_debug_graph_iterator(void)
//{
//    mangled_ppc("??0c_render_debug_graph_iterator@@QAA@XZ");
//};

//long find_drawing_series(char const *)
//{
//    mangled_ppc("?find_drawing_series@@YAJPBD@Z");
//};

//void add_value(char const *, float, enum e_auto_graph_domain)
//{
//    mangled_ppc("?add_value@@YAXPBDMW4e_auto_graph_domain@@@Z");
//};

//void track(char const *)
//{
//    mangled_ppc("?track@@YAXPBD@Z");
//};

//void build_range(struct s_drawing_series const *, union real_bounds2d *)
//{
//    mangled_ppc("?build_range@@YAXPBUs_drawing_series@@PATreal_bounds2d@@@Z");
//};

//public: void c_auto_graph_iterator::initialize(struct s_drawing_series const *)
//{
//    mangled_ppc("?initialize@c_auto_graph_iterator@@QAAXPBUs_drawing_series@@@Z");
//};

//public: virtual void c_auto_graph_iterator::begin_all_series(void)
//{
//    mangled_ppc("?begin_all_series@c_auto_graph_iterator@@UAAXXZ");
//};

//public: virtual bool c_auto_graph_iterator::next_series(class c_static_string<256> *)
//{
//    mangled_ppc("?next_series@c_auto_graph_iterator@@UAA_NPAV?$c_static_string@$0BAA@@@@Z");
//};

//public: virtual bool c_auto_graph_iterator::next_data_point_in_series(union real_point2d *)
//{
//    mangled_ppc("?next_data_point_in_series@c_auto_graph_iterator@@UAA_NPATreal_point2d@@@Z");
//};

//public: struct s_series_data_point const & t_static_ring_buffer<struct s_series_data_point, 300>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_series_data_point@@$0BCM@@@QBAABUs_series_data_point@@J@Z");
//};

//public: struct s_series_data_point & t_static_ring_buffer<struct s_series_data_point, 300>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_series_data_point@@$0BCM@@@QAAAAUs_series_data_point@@J@Z");
//};

//public: bool c_static_stack<struct s_drawing_series, 8>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_drawing_series@@$07@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_drawing_series, 8>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_drawing_series@@$07@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_drawing_series, 8>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_drawing_series@@$07@@QBAJXZ");
//};

//public: void c_static_stack<struct s_drawing_series, 8>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_drawing_series@@$07@@QAAXXZ");
//};

//public: long c_static_stack<struct s_drawing_series, 8>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_drawing_series@@$07@@QAAJXZ");
//};

//public: void c_static_stack<struct s_drawing_series, 8>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_drawing_series@@$07@@QAAXXZ");
//};

//public: struct s_drawing_series & c_static_stack<struct s_drawing_series, 8>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_drawing_series@@$07@@QAAAAUs_drawing_series@@J@Z");
//};

//public: long c_static_stack<class s_static_string<32>, 100>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QBAJXZ");
//};

//public: void c_static_stack<class s_static_string<32>, 100>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAAXXZ");
//};

//public: void c_static_stack<class s_static_string<32>, 100>::push_back(class s_static_string<32> const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAAXABV?$s_static_string@$0CA@@@@Z");
//};

//public: class s_static_string<32> & c_static_stack<class s_static_string<32>, 100>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAAAAV?$s_static_string@$0CA@@@J@Z");
//};

//public: void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool c_static_stack<struct s_drawing_series, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_drawing_series@@$07@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_drawing_series, 8>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_drawing_series@@$07@@QBA_NJ@Z");
//};

//public: bool c_static_stack<class s_static_string<32>, 100>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QBA_NJ@Z");
//};

//public: long c_static_stack<class s_static_string<32>, 100>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAAJXZ");
//};

//public: class s_static_string<32> * c_static_stack<class s_static_string<32>, 100>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAAPAV?$s_static_string@$0CA@@@J@Z");
//};

//public: bool t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_static_stack<class s_static_string<32>, 100>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QBA_NXZ");
//};

//public: bool c_static_stack<class s_static_string<32>, 100>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: c_flags<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::c_flags<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void zero_and_reconstruct<struct s_drawing_series>(struct s_drawing_series *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_drawing_series@@@@YAXPAUs_drawing_series@@@Z");
//};

//public: void s_static_string<256>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0BAA@@@QAAXPBD@Z");
//};

//public: bool s_static_string<256>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0BAA@@@QBA_NPBD@Z");
//};

//public: void s_static_string<32>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0CA@@@QAAXPBD@Z");
//};

//public: long s_static_string<32>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0CA@@@QBAJPBD@Z");
//};

//public: long s_static_string<32>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0CA@@@QBAJXZ");
//};

//public: char const * s_static_string<32>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0CA@@@QBAPBDXZ");
//};

//void zero_and_reconstruct<struct s_render_debug_auto_graph_globals>(struct s_render_debug_auto_graph_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_render_debug_auto_graph_globals@@@@YAXPAUs_render_debug_auto_graph_globals@@@Z");
//};

//public: void s_static_string<64>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0EA@@@QAAXPBD@Z");
//};

//public: c_static_string<64>::c_static_string<64>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0EA@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static class c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver> c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_graph_column, enum e_graph_column)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@SA?AV1@W4e_graph_column@@0@Z");
//};

//void reconstruct<struct s_drawing_series>(struct s_drawing_series *)
//{
//    mangled_ppc("??$reconstruct@Us_drawing_series@@@@YAXPAUs_drawing_series@@@Z");
//};

//public: long s_static_string<32>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0CA@@@QBAJPBDJ@Z");
//};

//void reconstruct<struct s_render_debug_auto_graph_globals>(struct s_render_debug_auto_graph_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_render_debug_auto_graph_globals@@@@YAXPAUs_render_debug_auto_graph_globals@@@Z");
//};

//public: void s_static_string<64>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0EA@@@QAAXXZ");
//};

//public: s_drawing_series::s_drawing_series(void)
//{
//    mangled_ppc("??0s_drawing_series@@QAA@XZ");
//};

//public: s_render_debug_auto_graph_globals::s_render_debug_auto_graph_globals(void)
//{
//    mangled_ppc("??0s_render_debug_auto_graph_globals@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_series_data_point, 300>::t_static_ring_buffer<struct s_series_data_point, 300>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_series_data_point@@$0BCM@@@QAA@XZ");
//};

//public: c_ring_buffer::c_ring_buffer(long)
//{
//    mangled_ppc("??0c_ring_buffer@@QAA@J@Z");
//};

//public: c_static_stack<struct s_drawing_series, 8>::c_static_stack<struct s_drawing_series, 8>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_drawing_series@@$07@@QAA@XZ");
//};

//public: c_static_stack<class s_static_string<32>, 100>::c_static_stack<class s_static_string<32>, 100>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$s_static_string@$0CA@@@$0GE@@@QAA@XZ");
//};

//public: static bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_graph_column)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@SA_NW4e_graph_column@@@Z");
//};

//public: void c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_graph_column)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@CAGW4e_graph_column@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@CAGXZ");
//};

//public: bool c_flags_no_init<enum e_graph_column, unsigned short, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_graph_column@@G$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<7, 0, 0, void (__tls_set_g_render_debug_auto_graph_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$06$0A@$0A@$1?__tls_set_g_render_debug_auto_graph_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_render_debug_auto_graph_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_debug_auto_graph_globals_allocator@@YAXXZ");
//};

