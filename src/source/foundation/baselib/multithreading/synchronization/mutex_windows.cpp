/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_mutex mutex_declare(long, struct s_mutex_definition const *);
// void mutex_dependency(struct s_mutex, struct s_mutex);
// void mutex_critical_section_dependency(struct s_mutex, unsigned long);
// void mutex_create(class c_synchronization_handle *, unsigned long, long, struct s_mutex_definition const *);
// public: void c_synchronization_object::set_lock_count(long, long);
// void mutex_destroy(class c_synchronization_handle *);
// void mutex_take_internal(struct s_mutex, enum e_mutex_recursive);
// bool mutex_take_timeout_internal(struct s_mutex, long);
// void mutex_release_internal(struct s_mutex, enum e_mutex_recursive);
// void mutex_force_release_if_owned_by_thread(class c_synchronization_handle *, long);
// public: long c_synchronization_object::get_lock_count(void) const;

//struct s_mutex mutex_declare(long, struct s_mutex_definition const *)
//{
//    mangled_ppc("?mutex_declare@@YA?AUs_mutex@@JPBUs_mutex_definition@@@Z");
//};

//void mutex_dependency(struct s_mutex, struct s_mutex)
//{
//    mangled_ppc("?mutex_dependency@@YAXUs_mutex@@0@Z");
//};

//void mutex_critical_section_dependency(struct s_mutex, unsigned long)
//{
//    mangled_ppc("?mutex_critical_section_dependency@@YAXUs_mutex@@K@Z");
//};

//void mutex_create(class c_synchronization_handle *, unsigned long, long, struct s_mutex_definition const *)
//{
//    mangled_ppc("?mutex_create@@YAXPAVc_synchronization_handle@@KJPBUs_mutex_definition@@@Z");
//};

//public: void c_synchronization_object::set_lock_count(long, long)
//{
//    mangled_ppc("?set_lock_count@c_synchronization_object@@QAAXJJ@Z");
//};

//void mutex_destroy(class c_synchronization_handle *)
//{
//    mangled_ppc("?mutex_destroy@@YAXPAVc_synchronization_handle@@@Z");
//};

//void mutex_take_internal(struct s_mutex, enum e_mutex_recursive)
//{
//    mangled_ppc("?mutex_take_internal@@YAXUs_mutex@@W4e_mutex_recursive@@@Z");
//};

//bool mutex_take_timeout_internal(struct s_mutex, long)
//{
//    mangled_ppc("?mutex_take_timeout_internal@@YA_NUs_mutex@@J@Z");
//};

//void mutex_release_internal(struct s_mutex, enum e_mutex_recursive)
//{
//    mangled_ppc("?mutex_release_internal@@YAXUs_mutex@@W4e_mutex_recursive@@@Z");
//};

//void mutex_force_release_if_owned_by_thread(class c_synchronization_handle *, long)
//{
//    mangled_ppc("?mutex_force_release_if_owned_by_thread@@YAXPAVc_synchronization_handle@@J@Z");
//};

//public: long c_synchronization_object::get_lock_count(void) const
//{
//    mangled_ppc("?get_lock_count@c_synchronization_object@@QBAJXZ");
//};

