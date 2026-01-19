/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const c_entity_listener::`vftable'{for `hkpCollisionListener'}; // "??_7c_entity_listener@@6BhkpCollisionListener@@@"
// const c_entity_listener::`vftable'{for `hkpEntityActivationListener'}; // "??_7c_entity_listener@@6BhkpEntityActivationListener@@@"
// const c_broad_phase_border::`vftable'{for `hkpWorldPostSimulationListener'}; // "??_7c_broad_phase_border@@6BhkpWorldPostSimulationListener@@@"
// const c_broad_phase_border::`vftable'{for `hkpPhantomOverlapListener'}; // "??_7c_broad_phase_border@@6BhkpPhantomOverlapListener@@@"
// const c_broad_phase_border::`vftable'{for `hkpWorldDeletionListener'}; // "??_7c_broad_phase_border@@6BhkpWorldDeletionListener@@@"
// const c_broad_phase_border::`vftable'{for `hkReferencedObject'}; // "??_7c_broad_phase_border@@6BhkReferencedObject@@@"
// long volatile `public: virtual int __cdecl c_havok_error::message(enum hkError::Message, int, char const *, char const *, int)'::`41'::x_event_category_index; // "?x_event_category_index@?CJ@??message@c_havok_error@@UAAHW4Message@hkError@@HPBD1H@Z@4JC"
// long volatile `public: virtual int __cdecl c_havok_error::message(enum hkError::Message, int, char const *, char const *, int)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@??message@c_havok_error@@UAAHW4Message@hkError@@HPBD1H@Z@4JC"
// long volatile `public: virtual int __cdecl c_havok_error::message(enum hkError::Message, int, char const *, char const *, int)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??message@c_havok_error@@UAAHW4Message@hkError@@HPBD1H@Z@4JC"
// long volatile `public: virtual int __cdecl c_havok_error::message(enum hkError::Message, int, char const *, char const *, int)'::`8'::x_event_category_index; // "?x_event_category_index@?7??message@c_havok_error@@UAAHW4Message@hkError@@HPBD1H@Z@4JC"
// long *g_world_entity_listener_buffer; // "?g_world_entity_listener_buffer@@3PAJA"
// long *g_entity_listener_buffer; // "?g_entity_listener_buffer@@3PAJA"
// private: static class c_entity_listener *c_entity_listener::g_entity_listener; // "?g_entity_listener@c_entity_listener@@0PAV1@A"
// private: static class c_world_entity_listener *c_world_entity_listener::g_entity_listener; // "?g_entity_listener@c_world_entity_listener@@0PAV1@A"
// class c_havok_error g_havok_error; // "?g_havok_error@@3Vc_havok_error@@A"

// public: c_entity_listener::c_entity_listener(void);
// public: virtual void hkpContactListener::collisionAddedCallback(class hkpCollisionEvent const &);
// public: virtual void hkpContactListener::collisionRemovedCallback(class hkpCollisionEvent const &);
// public: virtual void c_entity_listener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &);
// merged_8346E560;
// public: hkpEntityActivationListener::hkpEntityActivationListener(void);
// merged_8346E5C8;
// public: virtual hkpEntityActivationListener::~hkpEntityActivationListener(void);
// public: hkpCollisionListener::hkpCollisionListener(void);
// public: virtual void hkpCollisionListener::contactPointAddedCallback(struct hkpContactPointAddedEvent &);
// public: virtual void hkpCollisionListener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &);
// public: virtual void hkpCollisionListener::contactProcessCallback(struct hkpContactProcessEvent &);
// public: virtual void hkpCollisionListener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &);
// merged_8346E6A8;
// public: virtual hkpCollisionListener::~hkpCollisionListener(void);
// public: virtual hkpContactListener::~hkpContactListener(void);
// public: virtual void hkpContactListener::contactPointCallback(class hkpContactPointEvent const &);
// public: virtual void hkpContactListener::contactPointAddedCallback(struct hkpContactPointAddedEvent &);
// public: virtual void hkpContactListener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &);
// public: virtual void hkpContactListener::contactProcessCallback(struct hkpContactProcessEvent &);
// merged_8346E780;
// public: virtual c_entity_listener::~c_entity_listener(void);
// public: hkpContactListener::hkpContactListener(void);
// public: virtual void c_entity_listener::entityDeactivatedCallback(class hkpEntity *);
// public: virtual void c_entity_listener::entityActivatedCallback(class hkpEntity *);
// public: virtual void c_entity_listener::contactPointAddedCallback(struct hkpContactPointAddedEvent &);
// public: struct hkpManifoldPointAddedEvent & hkpContactPointAddedEvent::asManifoldEvent(void);
// private: void c_entity_listener::add_contact_point_to_havok_component(bool, class hkpDynamicsContactMgr *, unsigned short, class hkpCdBody const *, class hkpCdBody const *, class hkpRigidBody *, class hkpRigidBody *, class hkpCdBody const *);
// private: static void c_entity_listener::calculate_contact_point_properties(float *, float *, bool *, class c_global_material_type *, class c_global_material_type *, class hkpCdBody const *, class hkpCdBody const *, long, long, class hkpRigidBody const *, class hkpRigidBody const *, unsigned int, unsigned int, union real_point3d const *);
// public: virtual void c_entity_listener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &);
// public: virtual void c_entity_listener::contactProcessCallback(struct hkpContactProcessEvent &);
// public: void c_entity_listener::clear_deactivated_entity_queue(void);
// public: class hkpEntity * c_entity_listener::dequeue_deactivated_entity(void);
// private: void c_entity_listener::queue_deactivated_entity(class hkpEntity *);
// public: void c_entity_listener::activate_deactivated_entity_queue(void);
// public: void c_entity_listener::deactivate_deactivated_entity_queue(void);
// public: bool c_entity_listener::is_deactivated_entity_queue_empty(void) const;
// public: static class c_entity_listener * c_entity_listener::get_global_entity_listener(void);
// public: static void c_entity_listener::intialize_for_new_map(void);
// public: static void c_entity_listener::dispose_from_old_map(void);
// public: static void c_entity_listener::dispose_from_old_map_fast(void);
// public: virtual void c_world_entity_listener::contactPointAddedCallback(struct hkpContactPointAddedEvent &);
// public: virtual void c_world_entity_listener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &);
// public: virtual void c_world_entity_listener::contactProcessCallback(struct hkpContactProcessEvent &);
// public: static class c_world_entity_listener * c_world_entity_listener::get_global_entity_listener(void);
// public: static void c_world_entity_listener::intialize_for_new_map(void);
// public: c_world_entity_listener::c_world_entity_listener(void);
// public: virtual void c_world_entity_listener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &);
// merged_8346FC70;
// public: virtual c_world_entity_listener::~c_world_entity_listener(void);
// public: static void c_world_entity_listener::dispose_from_old_map(void);
// public: static void c_world_entity_listener::dispose_from_old_map_fast(void);
// public: c_broad_phase_border::c_broad_phase_border(class hkpWorld *);
// public: virtual void hkpWorldDeletionListener::worldRemoveAllCallback(class hkpWorld *);
// public: virtual void hkpWorldPostSimulationListener::inactiveEntityMovedCallback(class hkpEntity *);
// merged_8346FEA8;
// public: static void hkpBroadPhaseBorder::operator delete(void *);
// public: virtual c_broad_phase_border::~c_broad_phase_border(void);
// public: virtual void c_broad_phase_border::maxPositionExceededCallback(class hkpEntity *);
// public: virtual void c_broad_phase_border::collidableAddedCallback(struct hkpCollidableAddedEvent const &);
// public: virtual void c_broad_phase_border::collidableRemovedCallback(struct hkpCollidableRemovedEvent const &);
// class hkError * get_havok_error_handler(void);
// public: class hkBool hkEnum<enum hkpContactPointAddedEvent::Type, int>::operator==(enum hkpContactPointAddedEvent::Type) const;
// [thunk]: public: virtual void * c_entity_listener::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int);
// public: void hkCriticalSection::enter(void);
// public: void hkCriticalSection::leave(void);
// public: static float hkpMaterial::getCombinedFriction(float, float);
// public: static float hkpMaterial::getCombinedRestitution(float, float);
// public: c_havok_error::c_havok_error(void);
// public: virtual void c_havok_error::setEnabled(int, class hkBool);
// public: virtual class hkBool c_havok_error::isEnabled(int);
// public: virtual void c_havok_error::enableAll(void);
// public: virtual int c_havok_error::message(enum hkError::Message, int, char const *, char const *, int);
// merged_83470B28;
// public: virtual c_havok_error::~c_havok_error(void);
// public: hkError::hkError(void);
// public: virtual hkError::~hkError(void);
// merged_83470C08;
// protected: hkSingleton<class hkError>::hkSingleton<class hkError>(void);
// public: virtual void hkError::sectionBegin(int, char const *);
// public: virtual void hkError::sectionEnd(void);
// void g_havok_error::`dynamic atexit destructor'(void);

//public: c_entity_listener::c_entity_listener(void)
//{
//    mangled_ppc("??0c_entity_listener@@QAA@XZ");
//};

//public: virtual void hkpContactListener::collisionAddedCallback(class hkpCollisionEvent const &)
//{
//    mangled_ppc("?collisionAddedCallback@hkpContactListener@@UAAXABVhkpCollisionEvent@@@Z");
//};

//public: virtual void hkpContactListener::collisionRemovedCallback(class hkpCollisionEvent const &)
//{
//    mangled_ppc("?collisionRemovedCallback@hkpContactListener@@UAAXABVhkpCollisionEvent@@@Z");
//};

//public: virtual void c_entity_listener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &)
//{
//    mangled_ppc("?contactPointConfirmedCallback@c_entity_listener@@UAAXAAUhkpContactPointConfirmedEvent@@@Z");
//};

//merged_8346E560
//{
//    mangled_ppc("merged_8346E560");
//};

//public: hkpEntityActivationListener::hkpEntityActivationListener(void)
//{
//    mangled_ppc("??0hkpEntityActivationListener@@QAA@XZ");
//};

//merged_8346E5C8
//{
//    mangled_ppc("merged_8346E5C8");
//};

//public: virtual hkpEntityActivationListener::~hkpEntityActivationListener(void)
//{
//    mangled_ppc("??1hkpEntityActivationListener@@UAA@XZ");
//};

//public: hkpCollisionListener::hkpCollisionListener(void)
//{
//    mangled_ppc("??0hkpCollisionListener@@QAA@XZ");
//};

//public: virtual void hkpCollisionListener::contactPointAddedCallback(struct hkpContactPointAddedEvent &)
//{
//    mangled_ppc("?contactPointAddedCallback@hkpCollisionListener@@UAAXAAUhkpContactPointAddedEvent@@@Z");
//};

//public: virtual void hkpCollisionListener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?contactPointRemovedCallback@hkpCollisionListener@@UAAXAAUhkpContactPointRemovedEvent@@@Z");
//};

//public: virtual void hkpCollisionListener::contactProcessCallback(struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?contactProcessCallback@hkpCollisionListener@@UAAXAAUhkpContactProcessEvent@@@Z");
//};

//public: virtual void hkpCollisionListener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &)
//{
//    mangled_ppc("?contactPointConfirmedCallback@hkpCollisionListener@@UAAXAAUhkpContactPointConfirmedEvent@@@Z");
//};

//merged_8346E6A8
//{
//    mangled_ppc("merged_8346E6A8");
//};

//public: virtual hkpCollisionListener::~hkpCollisionListener(void)
//{
//    mangled_ppc("??1hkpCollisionListener@@UAA@XZ");
//};

//public: virtual hkpContactListener::~hkpContactListener(void)
//{
//    mangled_ppc("??1hkpContactListener@@UAA@XZ");
//};

//public: virtual void hkpContactListener::contactPointCallback(class hkpContactPointEvent const &)
//{
//    mangled_ppc("?contactPointCallback@hkpContactListener@@UAAXABVhkpContactPointEvent@@@Z");
//};

//public: virtual void hkpContactListener::contactPointAddedCallback(struct hkpContactPointAddedEvent &)
//{
//    mangled_ppc("?contactPointAddedCallback@hkpContactListener@@UAAXAAUhkpContactPointAddedEvent@@@Z");
//};

//public: virtual void hkpContactListener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?contactPointRemovedCallback@hkpContactListener@@UAAXAAUhkpContactPointRemovedEvent@@@Z");
//};

//public: virtual void hkpContactListener::contactProcessCallback(struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?contactProcessCallback@hkpContactListener@@UAAXAAUhkpContactProcessEvent@@@Z");
//};

//merged_8346E780
//{
//    mangled_ppc("merged_8346E780");
//};

//public: virtual c_entity_listener::~c_entity_listener(void)
//{
//    mangled_ppc("??1c_entity_listener@@UAA@XZ");
//};

//public: hkpContactListener::hkpContactListener(void)
//{
//    mangled_ppc("??0hkpContactListener@@QAA@XZ");
//};

//public: virtual void c_entity_listener::entityDeactivatedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityDeactivatedCallback@c_entity_listener@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void c_entity_listener::entityActivatedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityActivatedCallback@c_entity_listener@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void c_entity_listener::contactPointAddedCallback(struct hkpContactPointAddedEvent &)
//{
//    mangled_ppc("?contactPointAddedCallback@c_entity_listener@@UAAXAAUhkpContactPointAddedEvent@@@Z");
//};

//public: struct hkpManifoldPointAddedEvent & hkpContactPointAddedEvent::asManifoldEvent(void)
//{
//    mangled_ppc("?asManifoldEvent@hkpContactPointAddedEvent@@QAAAAUhkpManifoldPointAddedEvent@@XZ");
//};

//private: void c_entity_listener::add_contact_point_to_havok_component(bool, class hkpDynamicsContactMgr *, unsigned short, class hkpCdBody const *, class hkpCdBody const *, class hkpRigidBody *, class hkpRigidBody *, class hkpCdBody const *)
//{
//    mangled_ppc("?add_contact_point_to_havok_component@c_entity_listener@@AAAX_NPAVhkpDynamicsContactMgr@@GPBVhkpCdBody@@2PAVhkpRigidBody@@32@Z");
//};

//private: static void c_entity_listener::calculate_contact_point_properties(float *, float *, bool *, class c_global_material_type *, class c_global_material_type *, class hkpCdBody const *, class hkpCdBody const *, long, long, class hkpRigidBody const *, class hkpRigidBody const *, unsigned int, unsigned int, union real_point3d const *)
//{
//    mangled_ppc("?calculate_contact_point_properties@c_entity_listener@@CAXPAM0PA_NPAVc_global_material_type@@2PBVhkpCdBody@@3JJPBVhkpRigidBody@@4IIPBTreal_point3d@@@Z");
//};

//public: virtual void c_entity_listener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?contactPointRemovedCallback@c_entity_listener@@UAAXAAUhkpContactPointRemovedEvent@@@Z");
//};

//public: virtual void c_entity_listener::contactProcessCallback(struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?contactProcessCallback@c_entity_listener@@UAAXAAUhkpContactProcessEvent@@@Z");
//};

//public: void c_entity_listener::clear_deactivated_entity_queue(void)
//{
//    mangled_ppc("?clear_deactivated_entity_queue@c_entity_listener@@QAAXXZ");
//};

//public: class hkpEntity * c_entity_listener::dequeue_deactivated_entity(void)
//{
//    mangled_ppc("?dequeue_deactivated_entity@c_entity_listener@@QAAPAVhkpEntity@@XZ");
//};

//private: void c_entity_listener::queue_deactivated_entity(class hkpEntity *)
//{
//    mangled_ppc("?queue_deactivated_entity@c_entity_listener@@AAAXPAVhkpEntity@@@Z");
//};

//public: void c_entity_listener::activate_deactivated_entity_queue(void)
//{
//    mangled_ppc("?activate_deactivated_entity_queue@c_entity_listener@@QAAXXZ");
//};

//public: void c_entity_listener::deactivate_deactivated_entity_queue(void)
//{
//    mangled_ppc("?deactivate_deactivated_entity_queue@c_entity_listener@@QAAXXZ");
//};

//public: bool c_entity_listener::is_deactivated_entity_queue_empty(void) const
//{
//    mangled_ppc("?is_deactivated_entity_queue_empty@c_entity_listener@@QBA_NXZ");
//};

//public: static class c_entity_listener * c_entity_listener::get_global_entity_listener(void)
//{
//    mangled_ppc("?get_global_entity_listener@c_entity_listener@@SAPAV1@XZ");
//};

//public: static void c_entity_listener::intialize_for_new_map(void)
//{
//    mangled_ppc("?intialize_for_new_map@c_entity_listener@@SAXXZ");
//};

//public: static void c_entity_listener::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_entity_listener@@SAXXZ");
//};

//public: static void c_entity_listener::dispose_from_old_map_fast(void)
//{
//    mangled_ppc("?dispose_from_old_map_fast@c_entity_listener@@SAXXZ");
//};

//public: virtual void c_world_entity_listener::contactPointAddedCallback(struct hkpContactPointAddedEvent &)
//{
//    mangled_ppc("?contactPointAddedCallback@c_world_entity_listener@@UAAXAAUhkpContactPointAddedEvent@@@Z");
//};

//public: virtual void c_world_entity_listener::contactPointRemovedCallback(struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?contactPointRemovedCallback@c_world_entity_listener@@UAAXAAUhkpContactPointRemovedEvent@@@Z");
//};

//public: virtual void c_world_entity_listener::contactProcessCallback(struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?contactProcessCallback@c_world_entity_listener@@UAAXAAUhkpContactProcessEvent@@@Z");
//};

//public: static class c_world_entity_listener * c_world_entity_listener::get_global_entity_listener(void)
//{
//    mangled_ppc("?get_global_entity_listener@c_world_entity_listener@@SAPAV1@XZ");
//};

//public: static void c_world_entity_listener::intialize_for_new_map(void)
//{
//    mangled_ppc("?intialize_for_new_map@c_world_entity_listener@@SAXXZ");
//};

//public: c_world_entity_listener::c_world_entity_listener(void)
//{
//    mangled_ppc("??0c_world_entity_listener@@QAA@XZ");
//};

//public: virtual void c_world_entity_listener::contactPointConfirmedCallback(struct hkpContactPointConfirmedEvent &)
//{
//    mangled_ppc("?contactPointConfirmedCallback@c_world_entity_listener@@UAAXAAUhkpContactPointConfirmedEvent@@@Z");
//};

//merged_8346FC70
//{
//    mangled_ppc("merged_8346FC70");
//};

//public: virtual c_world_entity_listener::~c_world_entity_listener(void)
//{
//    mangled_ppc("??1c_world_entity_listener@@UAA@XZ");
//};

//public: static void c_world_entity_listener::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_world_entity_listener@@SAXXZ");
//};

//public: static void c_world_entity_listener::dispose_from_old_map_fast(void)
//{
//    mangled_ppc("?dispose_from_old_map_fast@c_world_entity_listener@@SAXXZ");
//};

//public: c_broad_phase_border::c_broad_phase_border(class hkpWorld *)
//{
//    mangled_ppc("??0c_broad_phase_border@@QAA@PAVhkpWorld@@@Z");
//};

//public: virtual void hkpWorldDeletionListener::worldRemoveAllCallback(class hkpWorld *)
//{
//    mangled_ppc("?worldRemoveAllCallback@hkpWorldDeletionListener@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpWorldPostSimulationListener::inactiveEntityMovedCallback(class hkpEntity *)
//{
//    mangled_ppc("?inactiveEntityMovedCallback@hkpWorldPostSimulationListener@@UAAXPAVhkpEntity@@@Z");
//};

//merged_8346FEA8
//{
//    mangled_ppc("merged_8346FEA8");
//};

//public: static void hkpBroadPhaseBorder::operator delete(void *)
//{
//    mangled_ppc("??3hkpBroadPhaseBorder@@SAXPAX@Z");
//};

//public: virtual c_broad_phase_border::~c_broad_phase_border(void)
//{
//    mangled_ppc("??1c_broad_phase_border@@UAA@XZ");
//};

//public: virtual void c_broad_phase_border::maxPositionExceededCallback(class hkpEntity *)
//{
//    mangled_ppc("?maxPositionExceededCallback@c_broad_phase_border@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void c_broad_phase_border::collidableAddedCallback(struct hkpCollidableAddedEvent const &)
//{
//    mangled_ppc("?collidableAddedCallback@c_broad_phase_border@@UAAXABUhkpCollidableAddedEvent@@@Z");
//};

//public: virtual void c_broad_phase_border::collidableRemovedCallback(struct hkpCollidableRemovedEvent const &)
//{
//    mangled_ppc("?collidableRemovedCallback@c_broad_phase_border@@UAAXABUhkpCollidableRemovedEvent@@@Z");
//};

//class hkError * get_havok_error_handler(void)
//{
//    mangled_ppc("?get_havok_error_handler@@YAPAVhkError@@XZ");
//};

//public: class hkBool hkEnum<enum hkpContactPointAddedEvent::Type, int>::operator==(enum hkpContactPointAddedEvent::Type) const
//{
//    mangled_ppc("??8?$hkEnum@W4Type@hkpContactPointAddedEvent@@H@@QBA?AVhkBool@@W4Type@hkpContactPointAddedEvent@@@Z");
//};

//[thunk]: public: virtual void * c_entity_listener::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_entity_listener@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_broad_phase_border@@W7AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_broad_phase_border@@WM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * c_broad_phase_border::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Ec_broad_phase_border@@WBA@AAPAXI@Z");
//};

//public: void hkCriticalSection::enter(void)
//{
//    mangled_ppc("?enter@hkCriticalSection@@QAAXXZ");
//};

//public: void hkCriticalSection::leave(void)
//{
//    mangled_ppc("?leave@hkCriticalSection@@QAAXXZ");
//};

//public: static float hkpMaterial::getCombinedFriction(float, float)
//{
//    mangled_ppc("?getCombinedFriction@hkpMaterial@@SAMMM@Z");
//};

//public: static float hkpMaterial::getCombinedRestitution(float, float)
//{
//    mangled_ppc("?getCombinedRestitution@hkpMaterial@@SAMMM@Z");
//};

//public: c_havok_error::c_havok_error(void)
//{
//    mangled_ppc("??0c_havok_error@@QAA@XZ");
//};

//public: virtual void c_havok_error::setEnabled(int, class hkBool)
//{
//    mangled_ppc("?setEnabled@c_havok_error@@UAAXHVhkBool@@@Z");
//};

//public: virtual class hkBool c_havok_error::isEnabled(int)
//{
//    mangled_ppc("?isEnabled@c_havok_error@@UAA?AVhkBool@@H@Z");
//};

//public: virtual void c_havok_error::enableAll(void)
//{
//    mangled_ppc("?enableAll@c_havok_error@@UAAXXZ");
//};

//public: virtual int c_havok_error::message(enum hkError::Message, int, char const *, char const *, int)
//{
//    mangled_ppc("?message@c_havok_error@@UAAHW4Message@hkError@@HPBD1H@Z");
//};

//merged_83470B28
//{
//    mangled_ppc("merged_83470B28");
//};

//public: virtual c_havok_error::~c_havok_error(void)
//{
//    mangled_ppc("??1c_havok_error@@UAA@XZ");
//};

//public: hkError::hkError(void)
//{
//    mangled_ppc("??0hkError@@QAA@XZ");
//};

//public: virtual hkError::~hkError(void)
//{
//    mangled_ppc("??1hkError@@UAA@XZ");
//};

//merged_83470C08
//{
//    mangled_ppc("merged_83470C08");
//};

//protected: hkSingleton<class hkError>::hkSingleton<class hkError>(void)
//{
//    mangled_ppc("??0?$hkSingleton@VhkError@@@@IAA@XZ");
//};

//public: virtual void hkError::sectionBegin(int, char const *)
//{
//    mangled_ppc("?sectionBegin@hkError@@UAAXHPBD@Z");
//};

//public: virtual void hkError::sectionEnd(void)
//{
//    mangled_ppc("?sectionEnd@hkError@@UAAXXZ");
//};

//void g_havok_error::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_havok_error@@YAXXZ");
//};

