/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83982558; // "except_record_83982558"
// except_record_83982E10; // "except_record_83982E10"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_joint_data_allocator::*)(void *)> g_joint_data_allocator; // "?g_joint_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_joint_data; // "?g_joint_data@@3PAUs_data_array@@A"

// void __tls_set_g_joint_data_allocator(void *);
// public: Joint_primitive_behavior::Joint_primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, bool (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(class c_behavior_state *));
// public: Joint_primitive_behavior::Joint_primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, bool (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(class c_behavior_state *));
// public: Joint_mutex_group::Joint_mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, short (*)(long, short, class c_behavior_state *, struct joint_state_datum *), short, struct child_entry *, enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(class c_behavior_state *));
// public: Joint_mutex_group::Joint_mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, short (*)(long, short, class c_behavior_state *, struct joint_state_datum *), short, struct child_entry *, enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(class c_behavior_state *));
// void joint_behavior_initialize(void);
// void joint_behavior_initialize_for_new_map(void);
// void joint_behavior_create_for_new_map(void);
// void joint_behavior_dispose(void);
// void joint_behavior_dispose_from_old_map(void);
// void invitation_clear(struct invitation_data *);
// void actor_invitations_update(long);
// void joint_behaviors_update(void);
// void joint_state_update(long);
// bool joint_primitive_behavior_activate(long, class c_behavior_state *);
// bool joint_post_invitation(long, class c_joint_behavior_data *, long, enum e_joint_type, short, float, short (*)(long, long, class c_behavior_state *));
// void joint_primitive_behavior_deactivate(long, class c_behavior_state *);
// bool joint_primitive_behavior_perform(long, class c_behavior_state *);
// bool actor_joint_state_update(long, class c_joint_behavior_data *, long, short, short);
// void joint_primitive_behavior_control(long, class c_behavior_state *);
// void joint_primitive_behavior_debug(long, class c_behavior_state *);
// bool joint_mutex_group_activate(long, class c_behavior_state *);
// void joint_mutex_group_deactivate(long, class c_behavior_state *);
// short joint_mutex_group_decide(long, short, class c_behavior_state *);
// void joint_mutex_group_debug(long, class c_behavior_state *);
// bool invitation_valid(struct invitation_data const *);
// short find_invitation_index(long, long);
// short actor_find_empty_invitation_index(long, short);
// bool invite_actor(long, long, long, short, float);
// void clump_post_joint_invitation(long, struct invitation_data const *);
// void joint_submit_invitation_all(long, struct invitation_data const *);
// long joint_new(long, short, class c_joint_behavior_data *);
// long clump_new_joint_behavior(long, short);
// long joint_accept(long, struct invitation_data *, class c_joint_behavior_data *);
// bool joint_decline(long, struct invitation_data *);
// void joint_reject(long, short);
// void joint_withdraw(long, class c_joint_behavior_data const *);
// void clump_remove_joint_behavior(long, long);
// short joint_num_undecided(struct joint_state_datum const *);
// void choose_participants(long, short, short);
// bool joint_behavior_get_participant_limits(short, short *, short *);
// struct invitation_data * actor_get_invitation(long, short);
// bool actor_invited(long, short);
// void joint_state_iterator_new(struct joint_state_iterator *);
// struct joint_state_datum * joint_state_iterator_next(struct joint_state_iterator *);
// void joint_invitation_iterator_new(long, short, struct joint_invitation_iterator *);
// struct invitation_data * joint_invitation_iterator_next(struct joint_invitation_iterator *);
// public: struct joint_state_datum * c_data_iterator<struct joint_state_datum>::get_datum(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>(void);
// void g_joint_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_joint_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_joint_data_allocator@@YAXPAX@Z");
//};

//public: Joint_primitive_behavior::Joint_primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, bool (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Joint_primitive_behavior@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6AJJ3@ZP6AXJ3PAUjoint_state_datum@@@ZFP6A_NJ36@Z7W4e_joint_type@@P6AFJJ3@ZFFMP6AX3@Z@Z");
//};

//public: Joint_primitive_behavior::Joint_primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, bool (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Joint_primitive_behavior@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6AJJ3@ZP6AXJ3PAUjoint_state_datum@@@ZFP6A_NJ36@Z7W4e_joint_type@@P6AFJJ3@ZFFMP6AXJ3J@ZP6AXJ3J@ZP6AXJ3J@ZP6AXJ3@ZP6AXJ3_N@Z7P6AX3@Z@Z");
//};

//public: Joint_mutex_group::Joint_mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, short (*)(long, short, class c_behavior_state *, struct joint_state_datum *), short, struct child_entry *, enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Joint_mutex_group@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6AJJ3@ZP6AXJ3PAUjoint_state_datum@@@ZFP6AFJF36@ZFPAUchild_entry@@W4e_joint_type@@P6AFJJ3@ZFFMP6AX3@Z@Z");
//};

//public: Joint_mutex_group::Joint_mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), long (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, struct joint_state_datum *), short, short (*)(long, short, class c_behavior_state *, struct joint_state_datum *), short, struct child_entry *, enum e_joint_type, short (*)(long, long, class c_behavior_state *), short, short, float, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *, struct joint_state_datum *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Joint_mutex_group@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6AJJ3@ZP6AXJ3PAUjoint_state_datum@@@ZFP6AFJF36@ZFPAUchild_entry@@W4e_joint_type@@P6AFJJ3@ZFFMP6AXJ3J@ZP6AXJ3J@ZP6AXJ3J@ZP6AXJ3@ZP6AXJ3_N@Z7P6AX3@Z@Z");
//};

//void joint_behavior_initialize(void)
//{
//    mangled_ppc("?joint_behavior_initialize@@YAXXZ");
//};

//void joint_behavior_initialize_for_new_map(void)
//{
//    mangled_ppc("?joint_behavior_initialize_for_new_map@@YAXXZ");
//};

//void joint_behavior_create_for_new_map(void)
//{
//    mangled_ppc("?joint_behavior_create_for_new_map@@YAXXZ");
//};

//void joint_behavior_dispose(void)
//{
//    mangled_ppc("?joint_behavior_dispose@@YAXXZ");
//};

//void joint_behavior_dispose_from_old_map(void)
//{
//    mangled_ppc("?joint_behavior_dispose_from_old_map@@YAXXZ");
//};

//void invitation_clear(struct invitation_data *)
//{
//    mangled_ppc("?invitation_clear@@YAXPAUinvitation_data@@@Z");
//};

//void actor_invitations_update(long)
//{
//    mangled_ppc("?actor_invitations_update@@YAXJ@Z");
//};

//void joint_behaviors_update(void)
//{
//    mangled_ppc("?joint_behaviors_update@@YAXXZ");
//};

//void joint_state_update(long)
//{
//    mangled_ppc("?joint_state_update@@YAXJ@Z");
//};

//bool joint_primitive_behavior_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_primitive_behavior_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool joint_post_invitation(long, class c_joint_behavior_data *, long, enum e_joint_type, short, float, short (*)(long, long, class c_behavior_state *))
//{
//    mangled_ppc("?joint_post_invitation@@YA_NJPAVc_joint_behavior_data@@JW4e_joint_type@@FMP6AFJJPAVc_behavior_state@@@Z@Z");
//};

//void joint_primitive_behavior_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_primitive_behavior_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool joint_primitive_behavior_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_primitive_behavior_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool actor_joint_state_update(long, class c_joint_behavior_data *, long, short, short)
//{
//    mangled_ppc("?actor_joint_state_update@@YA_NJPAVc_joint_behavior_data@@JFF@Z");
//};

//void joint_primitive_behavior_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_primitive_behavior_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void joint_primitive_behavior_debug(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_primitive_behavior_debug@@YAXJPAVc_behavior_state@@@Z");
//};

//bool joint_mutex_group_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_mutex_group_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void joint_mutex_group_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_mutex_group_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short joint_mutex_group_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?joint_mutex_group_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//void joint_mutex_group_debug(long, class c_behavior_state *)
//{
//    mangled_ppc("?joint_mutex_group_debug@@YAXJPAVc_behavior_state@@@Z");
//};

//bool invitation_valid(struct invitation_data const *)
//{
//    mangled_ppc("?invitation_valid@@YA_NPBUinvitation_data@@@Z");
//};

//short find_invitation_index(long, long)
//{
//    mangled_ppc("?find_invitation_index@@YAFJJ@Z");
//};

//short actor_find_empty_invitation_index(long, short)
//{
//    mangled_ppc("?actor_find_empty_invitation_index@@YAFJF@Z");
//};

//bool invite_actor(long, long, long, short, float)
//{
//    mangled_ppc("?invite_actor@@YA_NJJJFM@Z");
//};

//void clump_post_joint_invitation(long, struct invitation_data const *)
//{
//    mangled_ppc("?clump_post_joint_invitation@@YAXJPBUinvitation_data@@@Z");
//};

//void joint_submit_invitation_all(long, struct invitation_data const *)
//{
//    mangled_ppc("?joint_submit_invitation_all@@YAXJPBUinvitation_data@@@Z");
//};

//long joint_new(long, short, class c_joint_behavior_data *)
//{
//    mangled_ppc("?joint_new@@YAJJFPAVc_joint_behavior_data@@@Z");
//};

//long clump_new_joint_behavior(long, short)
//{
//    mangled_ppc("?clump_new_joint_behavior@@YAJJF@Z");
//};

//long joint_accept(long, struct invitation_data *, class c_joint_behavior_data *)
//{
//    mangled_ppc("?joint_accept@@YAJJPAUinvitation_data@@PAVc_joint_behavior_data@@@Z");
//};

//bool joint_decline(long, struct invitation_data *)
//{
//    mangled_ppc("?joint_decline@@YA_NJPAUinvitation_data@@@Z");
//};

//void joint_reject(long, short)
//{
//    mangled_ppc("?joint_reject@@YAXJF@Z");
//};

//void joint_withdraw(long, class c_joint_behavior_data const *)
//{
//    mangled_ppc("?joint_withdraw@@YAXJPBVc_joint_behavior_data@@@Z");
//};

//void clump_remove_joint_behavior(long, long)
//{
//    mangled_ppc("?clump_remove_joint_behavior@@YAXJJ@Z");
//};

//short joint_num_undecided(struct joint_state_datum const *)
//{
//    mangled_ppc("?joint_num_undecided@@YAFPBUjoint_state_datum@@@Z");
//};

//void choose_participants(long, short, short)
//{
//    mangled_ppc("?choose_participants@@YAXJFF@Z");
//};

//bool joint_behavior_get_participant_limits(short, short *, short *)
//{
//    mangled_ppc("?joint_behavior_get_participant_limits@@YA_NFPAF0@Z");
//};

//struct invitation_data * actor_get_invitation(long, short)
//{
//    mangled_ppc("?actor_get_invitation@@YAPAUinvitation_data@@JF@Z");
//};

//bool actor_invited(long, short)
//{
//    mangled_ppc("?actor_invited@@YA_NJF@Z");
//};

//void joint_state_iterator_new(struct joint_state_iterator *)
//{
//    mangled_ppc("?joint_state_iterator_new@@YAXPAUjoint_state_iterator@@@Z");
//};

//struct joint_state_datum * joint_state_iterator_next(struct joint_state_iterator *)
//{
//    mangled_ppc("?joint_state_iterator_next@@YAPAUjoint_state_datum@@PAUjoint_state_iterator@@@Z");
//};

//void joint_invitation_iterator_new(long, short, struct joint_invitation_iterator *)
//{
//    mangled_ppc("?joint_invitation_iterator_new@@YAXJFPAUjoint_invitation_iterator@@@Z");
//};

//struct invitation_data * joint_invitation_iterator_next(struct joint_invitation_iterator *)
//{
//    mangled_ppc("?joint_invitation_iterator_next@@YAPAUinvitation_data@@PAUjoint_invitation_iterator@@@Z");
//};

//public: struct joint_state_datum * c_data_iterator<struct joint_state_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Ujoint_state_datum@@@@QBAPAUjoint_state_datum@@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_joint_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_joint_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_joint_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_joint_data_allocator@@YAXXZ");
//};

