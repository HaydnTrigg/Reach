/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_sound_playback_controller *g_default_playback_controller; // "?g_default_playback_controller@@3PAVc_sound_playback_controller@@A"
// class t_restricted_allocation_manager<8, 0, 0, void (__cdecl __tls_set_g_sound_playback_controller_data_allocator::*)(void *)> g_sound_playback_controller_data_allocator; // "?g_sound_playback_controller_data_allocator@@3V?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_sound_playback_controller_data; // "?g_sound_playback_controller_data@@3PAUs_data_array@@A"

// void __tls_set_g_sound_playback_controller_data_allocator(void *);
// class c_sound_playback_controller * sound_playback_controller_get(long);
// class c_sound_playback_controller * sound_playback_controller_try_and_get(long);
// long sound_playback_controller_find_add_reference(long);
// long sound_playback_controller_find_existing(long);
// long sound_playback_controller_find_or_create(long);
// long sound_playback_controller_get_identifier(long);
// bool sound_playback_controllers_initialize(void);
// void sound_playback_controllers_dispose_from_old_map(void);
// void sound_playback_controllers_dispose(void);
// void sound_playback_controller_refresh(long, struct s_sound_source const *);
// void sound_playback_controller_release_reference(long);
// void sound_playback_controllers_update(void);
// void sound_playback_controllers_synch_playback(bool);
// void render_debug_sound_playback_controllers(void);
// public: unsigned long c_sound_playback_controller::get_random_seed(void);
// public: void c_sound_playback_controller::update(void);
// public: long c_sound_playback_controller::get_identifier(void) const;
// public: bool c_sound_playback_controller::matches_identifier(long) const;
// private: char c_sound_playback_controller::add_reference(void);
// private: char c_sound_playback_controller::release_reference(void);
// private: void c_sound_playback_controller::initialize(long, unsigned long, bool);
// public: void c_sound_playback_controller::update_controller_source(struct s_sound_source const *, bool);
// public: float c_sound_playback_controller::get_doppler_shift(enum e_output_user_index) const;
// public: bool c_sound_playback_controller::started_synchronized_sounds(void) const;
// public: bool c_sound_playback_controller::ever_started_synchronized_sounds(void) const;
// public: bool c_sound_playback_controller::can_start_synchronized_sounds(void) const;
// public: bool c_sound_playback_controller::can_restart_synchronized_sound(void) const;
// public: char c_sound_playback_controller::synchronized_sound_ready(char);
// public: void c_sound_playback_controller::add_synch_count(long);
// public: void c_sound_playback_controller::on_synch_playback(void);
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>(void);
// void g_sound_playback_controller_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_sound_playback_controller_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z");
//};

//class c_sound_playback_controller * sound_playback_controller_get(long)
//{
//    mangled_ppc("?sound_playback_controller_get@@YAPAVc_sound_playback_controller@@J@Z");
//};

//class c_sound_playback_controller * sound_playback_controller_try_and_get(long)
//{
//    mangled_ppc("?sound_playback_controller_try_and_get@@YAPAVc_sound_playback_controller@@J@Z");
//};

//long sound_playback_controller_find_add_reference(long)
//{
//    mangled_ppc("?sound_playback_controller_find_add_reference@@YAJJ@Z");
//};

//long sound_playback_controller_find_existing(long)
//{
//    mangled_ppc("?sound_playback_controller_find_existing@@YAJJ@Z");
//};

//long sound_playback_controller_find_or_create(long)
//{
//    mangled_ppc("?sound_playback_controller_find_or_create@@YAJJ@Z");
//};

//long sound_playback_controller_get_identifier(long)
//{
//    mangled_ppc("?sound_playback_controller_get_identifier@@YAJJ@Z");
//};

//bool sound_playback_controllers_initialize(void)
//{
//    mangled_ppc("?sound_playback_controllers_initialize@@YA_NXZ");
//};

//void sound_playback_controllers_dispose_from_old_map(void)
//{
//    mangled_ppc("?sound_playback_controllers_dispose_from_old_map@@YAXXZ");
//};

//void sound_playback_controllers_dispose(void)
//{
//    mangled_ppc("?sound_playback_controllers_dispose@@YAXXZ");
//};

//void sound_playback_controller_refresh(long, struct s_sound_source const *)
//{
//    mangled_ppc("?sound_playback_controller_refresh@@YAXJPBUs_sound_source@@@Z");
//};

//void sound_playback_controller_release_reference(long)
//{
//    mangled_ppc("?sound_playback_controller_release_reference@@YAXJ@Z");
//};

//void sound_playback_controllers_update(void)
//{
//    mangled_ppc("?sound_playback_controllers_update@@YAXXZ");
//};

//void sound_playback_controllers_synch_playback(bool)
//{
//    mangled_ppc("?sound_playback_controllers_synch_playback@@YAX_N@Z");
//};

//void render_debug_sound_playback_controllers(void)
//{
//    mangled_ppc("?render_debug_sound_playback_controllers@@YAXXZ");
//};

//public: unsigned long c_sound_playback_controller::get_random_seed(void)
//{
//    mangled_ppc("?get_random_seed@c_sound_playback_controller@@QAAKXZ");
//};

//public: void c_sound_playback_controller::update(void)
//{
//    mangled_ppc("?update@c_sound_playback_controller@@QAAXXZ");
//};

//public: long c_sound_playback_controller::get_identifier(void) const
//{
//    mangled_ppc("?get_identifier@c_sound_playback_controller@@QBAJXZ");
//};

//public: bool c_sound_playback_controller::matches_identifier(long) const
//{
//    mangled_ppc("?matches_identifier@c_sound_playback_controller@@QBA_NJ@Z");
//};

//private: char c_sound_playback_controller::add_reference(void)
//{
//    mangled_ppc("?add_reference@c_sound_playback_controller@@AAADXZ");
//};

//private: char c_sound_playback_controller::release_reference(void)
//{
//    mangled_ppc("?release_reference@c_sound_playback_controller@@AAADXZ");
//};

//private: void c_sound_playback_controller::initialize(long, unsigned long, bool)
//{
//    mangled_ppc("?initialize@c_sound_playback_controller@@AAAXJK_N@Z");
//};

//public: void c_sound_playback_controller::update_controller_source(struct s_sound_source const *, bool)
//{
//    mangled_ppc("?update_controller_source@c_sound_playback_controller@@QAAXPBUs_sound_source@@_N@Z");
//};

//public: float c_sound_playback_controller::get_doppler_shift(enum e_output_user_index) const
//{
//    mangled_ppc("?get_doppler_shift@c_sound_playback_controller@@QBAMW4e_output_user_index@@@Z");
//};

//public: bool c_sound_playback_controller::started_synchronized_sounds(void) const
//{
//    mangled_ppc("?started_synchronized_sounds@c_sound_playback_controller@@QBA_NXZ");
//};

//public: bool c_sound_playback_controller::ever_started_synchronized_sounds(void) const
//{
//    mangled_ppc("?ever_started_synchronized_sounds@c_sound_playback_controller@@QBA_NXZ");
//};

//public: bool c_sound_playback_controller::can_start_synchronized_sounds(void) const
//{
//    mangled_ppc("?can_start_synchronized_sounds@c_sound_playback_controller@@QBA_NXZ");
//};

//public: bool c_sound_playback_controller::can_restart_synchronized_sound(void) const
//{
//    mangled_ppc("?can_restart_synchronized_sound@c_sound_playback_controller@@QBA_NXZ");
//};

//public: char c_sound_playback_controller::synchronized_sound_ready(char)
//{
//    mangled_ppc("?synchronized_sound_ready@c_sound_playback_controller@@QAADD@Z");
//};

//public: void c_sound_playback_controller::add_synch_count(long)
//{
//    mangled_ppc("?add_synch_count@c_sound_playback_controller@@QAAXJ@Z");
//};

//public: void c_sound_playback_controller::on_synch_playback(void)
//{
//    mangled_ppc("?on_synch_playback@c_sound_playback_controller@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>::~t_restricted_allocation_manager<8, 0, 0, void (__tls_set_g_sound_playback_controller_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$07$0A@$0A@$1?__tls_set_g_sound_playback_controller_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_sound_playback_controller_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_sound_playback_controller_data_allocator@@YAXXZ");
//};

