/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_widget_data_allocator::*)(void *)> g_widget_data_allocator; // "?g_widget_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *widget_data; // "?widget_data@@3PAUs_data_array@@A"

// void __tls_set_g_widget_data_allocator(void *);
// void widgets_initialize(void);
// struct widget_type_definition * widget_type_definition_get(short);
// void widgets_initialize_for_new_map(void);
// void widgets_dispose_from_old_map(void);
// void widgets_initialize_for_new_structure_bsp(unsigned long);
// void widgets_dispose_from_old_structure_bsp(unsigned long);
// void widgets_dispose(void);
// void widgets_new(long);
// short tag_group_to_widget_type(unsigned long);
// void widget_type_new_on_object(long, short, long);
// void widget_transfer_objects(long, long, long);
// void widgets_delete(long);
// void widget_delete_type_datum(long, long, bool);
// void widgets_object_submit_transparents(long);
// void widget_submit_transparent(long);
// void widgets_render_opaque(long, long);
// void widgets_render_debug(long);
// void widgets_render_unattached(long);
// void widgets_update(float);
// long widget_type_flags(short);
// long object_get_first_widget(long);
// long widget_get_next_widget(long);
// void widget_get_type_data(long, long *, long *);
// public: void c_data_iterator<struct widget_datum>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct widget_datum>::next(void);
// public: struct widget_datum * c_data_iterator<struct widget_datum>::get_datum(void) const;
// public: long c_data_iterator<struct widget_datum>::get_index(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>(void);
// void g_widget_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_widget_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_widget_data_allocator@@YAXPAX@Z");
//};

//void widgets_initialize(void)
//{
//    mangled_ppc("?widgets_initialize@@YAXXZ");
//};

//struct widget_type_definition * widget_type_definition_get(short)
//{
//    mangled_ppc("?widget_type_definition_get@@YAPAUwidget_type_definition@@F@Z");
//};

//void widgets_initialize_for_new_map(void)
//{
//    mangled_ppc("?widgets_initialize_for_new_map@@YAXXZ");
//};

//void widgets_dispose_from_old_map(void)
//{
//    mangled_ppc("?widgets_dispose_from_old_map@@YAXXZ");
//};

//void widgets_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?widgets_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void widgets_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?widgets_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void widgets_dispose(void)
//{
//    mangled_ppc("?widgets_dispose@@YAXXZ");
//};

//void widgets_new(long)
//{
//    mangled_ppc("?widgets_new@@YAXJ@Z");
//};

//short tag_group_to_widget_type(unsigned long)
//{
//    mangled_ppc("?tag_group_to_widget_type@@YAFK@Z");
//};

//void widget_type_new_on_object(long, short, long)
//{
//    mangled_ppc("?widget_type_new_on_object@@YAXJFJ@Z");
//};

//void widget_transfer_objects(long, long, long)
//{
//    mangled_ppc("?widget_transfer_objects@@YAXJJJ@Z");
//};

//void widgets_delete(long)
//{
//    mangled_ppc("?widgets_delete@@YAXJ@Z");
//};

//void widget_delete_type_datum(long, long, bool)
//{
//    mangled_ppc("?widget_delete_type_datum@@YAXJJ_N@Z");
//};

//void widgets_object_submit_transparents(long)
//{
//    mangled_ppc("?widgets_object_submit_transparents@@YAXJ@Z");
//};

//void widget_submit_transparent(long)
//{
//    mangled_ppc("?widget_submit_transparent@@YAXJ@Z");
//};

//void widgets_render_opaque(long, long)
//{
//    mangled_ppc("?widgets_render_opaque@@YAXJJ@Z");
//};

//void widgets_render_debug(long)
//{
//    mangled_ppc("?widgets_render_debug@@YAXJ@Z");
//};

//void widgets_render_unattached(long)
//{
//    mangled_ppc("?widgets_render_unattached@@YAXJ@Z");
//};

//void widgets_update(float)
//{
//    mangled_ppc("?widgets_update@@YAXM@Z");
//};

//long widget_type_flags(short)
//{
//    mangled_ppc("?widget_type_flags@@YAJF@Z");
//};

//long object_get_first_widget(long)
//{
//    mangled_ppc("?object_get_first_widget@@YAJJ@Z");
//};

//long widget_get_next_widget(long)
//{
//    mangled_ppc("?widget_get_next_widget@@YAJJ@Z");
//};

//void widget_get_type_data(long, long *, long *)
//{
//    mangled_ppc("?widget_get_type_data@@YAXJPAJ0@Z");
//};

//public: void c_data_iterator<struct widget_datum>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Uwidget_datum@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct widget_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Uwidget_datum@@@@QAA_NXZ");
//};

//public: struct widget_datum * c_data_iterator<struct widget_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uwidget_datum@@@@QBAPAUwidget_datum@@XZ");
//};

//public: long c_data_iterator<struct widget_datum>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Uwidget_datum@@@@QBAJXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_widget_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_widget_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_widget_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_widget_data_allocator@@YAXXZ");
//};

