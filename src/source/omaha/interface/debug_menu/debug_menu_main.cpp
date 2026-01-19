/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const k_debug_menu_reserved_size; // "?k_debug_menu_reserved_size@@3JB"
// union argb_color const *const debug_real_argb_grey; // "?debug_real_argb_grey@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_white; // "?debug_real_argb_white@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_tv_white; // "?debug_real_argb_tv_white@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_tv_blue; // "?debug_real_argb_tv_blue@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_tv_magenta; // "?debug_real_argb_tv_magenta@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_tv_orange; // "?debug_real_argb_tv_orange@@3PBTargb_color@@B"
// union argb_color const *const debug_real_argb_tv_green; // "?debug_real_argb_tv_green@@3PBTargb_color@@B"
// bool debug_menu_enabled; // "?debug_menu_enabled@@3_NA"
// struct s_debug_menu_globals g_debug_menu_globals; // "?g_debug_menu_globals@@3Us_debug_menu_globals@@A"
// class c_static_stack<long, 76800> g_debug_menu_stack; // "?g_debug_menu_stack@@3V?$c_static_stack@J$0BCMAA@@@A"

// void debug_menu_draw_rect(short, short, short, short, float, union argb_color const *);
// bool debug_menu_get_active(void);
// void debug_menu_initialize(void);
// void debug_menu_dispose(void);
// enum e_async_completion debug_menu_initialize_for_new_map_parse_task(void *);
// public: c_main_menu::c_main_menu(void);
// public: virtual void c_debug_menu::game_render(void);
// public: virtual void c_debug_menu::notify_closed(void);
// public: virtual void c_debug_menu::notify_activated(void);
// protected: virtual short c_debug_menu::get_value_width(void);
// protected: virtual void c_debug_menu::notify_selection_closed(void);
// protected: virtual void c_debug_menu::notify_selection_exited(void);
// protected: virtual void c_debug_menu::notify_left(void);
// protected: virtual void c_debug_menu::notify_right(void);
// protected: virtual short c_debug_menu_scroll::get_num_items_to_render(void);
// void debug_menu_initialize_for_new_map(void);
// void debug_menu_dispose_from_old_map(void);
// void debug_menu_update(void);
// void debug_menu_open(void);
// void debug_menu_close(void);
// void debug_menu_seek_to_menu(char const *);
// void render_debug_debug_menu_game(void);
// void render_debug_debug_menu(void);
// void debug_menu_update_current_gamepad_state(void);
// void xor_buffers(void *, void const *, long);
// struct gamepad_state const & debug_menu_get_gamepad_state(void);
// struct gamepad_state const & debug_menu_get_last_gamepad_state(void);
// class c_debug_menu * debug_menu_get_active_menu(void);
// void debug_menu_set_active_menu(class c_debug_menu *, bool);
// public: class c_debug_menu * c_debug_menu::get_parent(void);
// void debug_menu_set_caption(short, char const *);
// char const * debug_menu_get_caption(short);
// long debug_menu_get_time(void);
// class c_debug_menu * debug_menu_get_main_menu(void);
// void * debug_menu_malloc(long);
// long debug_menu_memory_available(void);
// bool is_debug_menu_address(void *);
// public: long c_static_stack<long, 76800>::count(void) const;
// public: void c_static_stack<long, 76800>::resize(long);
// public: long * c_static_stack<long, 76800>::get(long);
// public: long * c_static_stack<long, 76800>::begin(void);
// public: long * c_static_stack<long, 76800>::end(void);
// public: bool c_static_stack<long, 76800>::valid(void) const;
// public: bool c_static_stack<long, 76800>::valid(long) const;
// public: c_static_stack<long, 76800>::c_static_stack<long, 76800>(void);

//void debug_menu_draw_rect(short, short, short, short, float, union argb_color const *)
//{
//    mangled_ppc("?debug_menu_draw_rect@@YAXFFFFMPBTargb_color@@@Z");
//};

//bool debug_menu_get_active(void)
//{
//    mangled_ppc("?debug_menu_get_active@@YA_NXZ");
//};

//void debug_menu_initialize(void)
//{
//    mangled_ppc("?debug_menu_initialize@@YAXXZ");
//};

//void debug_menu_dispose(void)
//{
//    mangled_ppc("?debug_menu_dispose@@YAXXZ");
//};

//enum e_async_completion debug_menu_initialize_for_new_map_parse_task(void *)
//{
//    mangled_ppc("?debug_menu_initialize_for_new_map_parse_task@@YA?AW4e_async_completion@@PAX@Z");
//};

//public: c_main_menu::c_main_menu(void)
//{
//    mangled_ppc("??0c_main_menu@@QAA@XZ");
//};

//public: virtual void c_debug_menu::game_render(void)
//{
//    mangled_ppc("?game_render@c_debug_menu@@UAAXXZ");
//};

//public: virtual void c_debug_menu::notify_closed(void)
//{
//    mangled_ppc("?notify_closed@c_debug_menu@@UAAXXZ");
//};

//public: virtual void c_debug_menu::notify_activated(void)
//{
//    mangled_ppc("?notify_activated@c_debug_menu@@UAAXXZ");
//};

//protected: virtual short c_debug_menu::get_value_width(void)
//{
//    mangled_ppc("?get_value_width@c_debug_menu@@MAAFXZ");
//};

//protected: virtual void c_debug_menu::notify_selection_closed(void)
//{
//    mangled_ppc("?notify_selection_closed@c_debug_menu@@MAAXXZ");
//};

//protected: virtual void c_debug_menu::notify_selection_exited(void)
//{
//    mangled_ppc("?notify_selection_exited@c_debug_menu@@MAAXXZ");
//};

//protected: virtual void c_debug_menu::notify_left(void)
//{
//    mangled_ppc("?notify_left@c_debug_menu@@MAAXXZ");
//};

//protected: virtual void c_debug_menu::notify_right(void)
//{
//    mangled_ppc("?notify_right@c_debug_menu@@MAAXXZ");
//};

//protected: virtual short c_debug_menu_scroll::get_num_items_to_render(void)
//{
//    mangled_ppc("?get_num_items_to_render@c_debug_menu_scroll@@MAAFXZ");
//};

//void debug_menu_initialize_for_new_map(void)
//{
//    mangled_ppc("?debug_menu_initialize_for_new_map@@YAXXZ");
//};

//void debug_menu_dispose_from_old_map(void)
//{
//    mangled_ppc("?debug_menu_dispose_from_old_map@@YAXXZ");
//};

//void debug_menu_update(void)
//{
//    mangled_ppc("?debug_menu_update@@YAXXZ");
//};

//void debug_menu_open(void)
//{
//    mangled_ppc("?debug_menu_open@@YAXXZ");
//};

//void debug_menu_close(void)
//{
//    mangled_ppc("?debug_menu_close@@YAXXZ");
//};

//void debug_menu_seek_to_menu(char const *)
//{
//    mangled_ppc("?debug_menu_seek_to_menu@@YAXPBD@Z");
//};

//void render_debug_debug_menu_game(void)
//{
//    mangled_ppc("?render_debug_debug_menu_game@@YAXXZ");
//};

//void render_debug_debug_menu(void)
//{
//    mangled_ppc("?render_debug_debug_menu@@YAXXZ");
//};

//void debug_menu_update_current_gamepad_state(void)
//{
//    mangled_ppc("?debug_menu_update_current_gamepad_state@@YAXXZ");
//};

//void xor_buffers(void *, void const *, long)
//{
//    mangled_ppc("?xor_buffers@@YAXPAXPBXJ@Z");
//};

//struct gamepad_state const & debug_menu_get_gamepad_state(void)
//{
//    mangled_ppc("?debug_menu_get_gamepad_state@@YAABUgamepad_state@@XZ");
//};

//struct gamepad_state const & debug_menu_get_last_gamepad_state(void)
//{
//    mangled_ppc("?debug_menu_get_last_gamepad_state@@YAABUgamepad_state@@XZ");
//};

//class c_debug_menu * debug_menu_get_active_menu(void)
//{
//    mangled_ppc("?debug_menu_get_active_menu@@YAPAVc_debug_menu@@XZ");
//};

//void debug_menu_set_active_menu(class c_debug_menu *, bool)
//{
//    mangled_ppc("?debug_menu_set_active_menu@@YAXPAVc_debug_menu@@_N@Z");
//};

//public: class c_debug_menu * c_debug_menu::get_parent(void)
//{
//    mangled_ppc("?get_parent@c_debug_menu@@QAAPAV1@XZ");
//};

//void debug_menu_set_caption(short, char const *)
//{
//    mangled_ppc("?debug_menu_set_caption@@YAXFPBD@Z");
//};

//char const * debug_menu_get_caption(short)
//{
//    mangled_ppc("?debug_menu_get_caption@@YAPBDF@Z");
//};

//long debug_menu_get_time(void)
//{
//    mangled_ppc("?debug_menu_get_time@@YAJXZ");
//};

//class c_debug_menu * debug_menu_get_main_menu(void)
//{
//    mangled_ppc("?debug_menu_get_main_menu@@YAPAVc_debug_menu@@XZ");
//};

//void * debug_menu_malloc(long)
//{
//    mangled_ppc("?debug_menu_malloc@@YAPAXJ@Z");
//};

//long debug_menu_memory_available(void)
//{
//    mangled_ppc("?debug_menu_memory_available@@YAJXZ");
//};

//bool is_debug_menu_address(void *)
//{
//    mangled_ppc("?is_debug_menu_address@@YA_NPAX@Z");
//};

//public: long c_static_stack<long, 76800>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$0BCMAA@@@QBAJXZ");
//};

//public: void c_static_stack<long, 76800>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@J$0BCMAA@@@QAAXJ@Z");
//};

//public: long * c_static_stack<long, 76800>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0BCMAA@@@QAAPAJJ@Z");
//};

//public: long * c_static_stack<long, 76800>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@J$0BCMAA@@@QAAPAJXZ");
//};

//public: long * c_static_stack<long, 76800>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@J$0BCMAA@@@QAAPAJXZ");
//};

//public: bool c_static_stack<long, 76800>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BCMAA@@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 76800>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BCMAA@@@QBA_NJ@Z");
//};

//public: c_static_stack<long, 76800>::c_static_stack<long, 76800>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$0BCMAA@@@QAA@XZ");
//};

