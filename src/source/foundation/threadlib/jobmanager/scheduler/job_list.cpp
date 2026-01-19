/* ---------- headers */

#include "foundation\threadlib\jobmanager\scheduler\job_list.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_job_list::initialize(struct s_critical_section, struct s_critical_section, struct s_critical_section, struct s_semaphore, unsigned long);
// public: void c_job_list::dispose(void);
// public: bool c_job_list::active_list_empty(void);
// public: bool c_job_list::free_list_full(void);
// public: bool c_job_list::is_done(class c_job_handle const &);
// protected: unsigned short c_job_handle_unsafe::get_index(void) const;
// protected: long c_job_handle_unsafe::get_usage(void) const;
// public: long c_job_handle_internal::get_usage(void) const;
// public: unsigned short const & c_job_handle_internal::get_index(void) const;
// public: class c_job_handle c_job_list::add(class c_job const &, unsigned long);
// public: void c_job_deps::increment_depcount(void);
// public: class c_job_deps & c_job::dependencies(void);
// public: void c_job_handle_internal::set_state(enum ejob_state);
// public: enum ejob_state c_job_handle_internal::get_state(void) const;
// public: void c_job_handle_internal::increment_usage(void);
// public: void c_job_list::lock_activelist(void);
// public: void c_job_list::unlock_activelist(void);
// public: void c_job_list::lock_freelist(void);
// public: void c_job_list::unlock_freelist(void);
// public: class c_job & c_job::operator=(class c_job const &);
// public: class c_job_deps & c_job_deps::operator=(class c_job_deps const &);
// public: class c_interlocked_int32& c_interlocked_int32::operator=(class c_interlocked_int32const &);
// public: void c_job_list::activate(class c_job_handle const &, bool);
// public: void c_job_deps::decrement_depcount(void);
// public: long c_job_deps::depcount(void) const;
// public: void c_job_list::activate_array(class c_job_handle *, unsigned long);
// public: void c_job_list::add_to_active(class c_job_handle *, unsigned long);
// public: void c_job_list::block_until_work_available(bool);
// public: void c_job_list::kick_semaphore(void);
// public: unsigned long c_job_list::get_executable_jobs(class c_job **, class c_job_handle *, unsigned long);
// public: void c_job_list::free_job_array(class c_job **, unsigned long);
// public: void c_job_list::return_to_free_list(class c_job **, unsigned long);
// public: unsigned short c_job_deps::get_deplist(void);
// public: void c_job_list::lock_deps(void);
// public: void c_job_list::unlock_deps(void);
// public: bool c_job_list::depends(class c_job_handle const &, class c_job_handle const &);
// public: unsigned short c_job_deps::set_dependant(unsigned short);
// public: bool c_job_list::allocate_inactive(unsigned long, class c_job_handle *, class c_job **);
// public: void c_job::clear(void);
// public: void c_job_deps::clear(void);
// public: class c_indexed_list<unsigned short, 4096>::iterator c_indexed_list<unsigned short, 4096>::begin(void);
// public: class c_indexed_list<unsigned short, 4096>::iterator c_indexed_list<unsigned short, 4096>::end(void);
// public: long c_indexed_list<unsigned short, 4096>::count(void) const;
// public: long c_indexed_list<unsigned short, 4096>::max_count(void) const;
// public: bool c_indexed_list<unsigned short, 4096>::empty(void) const;
// public: unsigned short & c_indexed_list<unsigned short, 4096>::iterator::operator*(void);
// public: class c_indexed_list<unsigned short, 4096>::iterator & c_indexed_list<unsigned short, 4096>::iterator::operator++(void);
// public: bool c_indexed_list<unsigned short, 4096>::iterator::operator!=(class c_indexed_list<unsigned short, 4096>::iterator const &) const;
// private: unsigned short c_indexed_list<unsigned short, 4096>::get_next(unsigned short) const;
// private: unsigned short c_indexed_list<unsigned short, 4096>::get_prev(unsigned short) const;
// private: unsigned short c_indexed_list<unsigned short, 4096>::get_head(void) const;
// private: unsigned short c_indexed_list<unsigned short, 4096>::get_tail(void) const;
// private: unsigned short & c_indexed_list<unsigned short, 4096>::get_data(unsigned short);
// public: c_indexed_list<unsigned short, 4096>::iterator::iterator(class c_indexed_list<unsigned short, 4096> *, unsigned short, unsigned short, unsigned short);
// public: bool c_indexed_list<unsigned short, 4096>::iterator::operator==(class c_indexed_list<unsigned short, 4096>::iterator const &) const;
// public: void c_indexed_list<unsigned short, 4096>::initialize(void);
// public: void c_indexed_list<unsigned short, 4096>::dispose(void);
// public: void c_indexed_list<unsigned short, 4096>::clear(void);
// public: bool c_indexed_list<unsigned short, 4096>::push_back(unsigned short const &);
// public: void c_indexed_list<unsigned short, 4096>::remove(class c_indexed_list<unsigned short, 4096>::iterator &);
// public: unsigned short c_indexed_list<unsigned short, 4096>::pop_head(void);
// public: void c_indexed_pool<struct s_il_node, 4096>::initialize(void);
// public: void c_indexed_pool<struct s_il_node, 4096>::dispose(void);
// public: unsigned short c_indexed_pool<struct s_il_node, 4096>::alloc_handle(void);
// public: void c_indexed_pool<struct s_il_node, 4096>::free_handle(unsigned short &);
// public: struct s_il_node * c_indexed_pool<struct s_il_node, 4096>::get_element(unsigned short const &);
// private: unsigned short c_indexed_list<unsigned short, 4096>::pop(void);
// private: void c_indexed_list<unsigned short, 4096>::push(struct s_il_node *);
// private: void c_indexed_list<unsigned short, 4096>::remove_indexed(unsigned short);

//public: void c_job_list::initialize(struct s_critical_section, struct s_critical_section, struct s_critical_section, struct s_semaphore, unsigned long)
//{
//    mangled_ppc("?initialize@c_job_list@@QAAXUs_critical_section@@00Us_semaphore@@K@Z");
//};

//public: void c_job_list::dispose(void)
//{
//    mangled_ppc("?dispose@c_job_list@@QAAXXZ");
//};

//public: bool c_job_list::active_list_empty(void)
//{
//    mangled_ppc("?active_list_empty@c_job_list@@QAA_NXZ");
//};

//public: bool c_job_list::free_list_full(void)
//{
//    mangled_ppc("?free_list_full@c_job_list@@QAA_NXZ");
//};

//public: bool c_job_list::is_done(class c_job_handle const &)
//{
//    mangled_ppc("?is_done@c_job_list@@QAA_NABVc_job_handle@@@Z");
//};

//protected: unsigned short c_job_handle_unsafe::get_index(void) const
//{
//    mangled_ppc("?get_index@c_job_handle_unsafe@@IBAGXZ");
//};

//protected: long c_job_handle_unsafe::get_usage(void) const
//{
//    mangled_ppc("?get_usage@c_job_handle_unsafe@@IBAJXZ");
//};

//public: long c_job_handle_internal::get_usage(void) const
//{
//    mangled_ppc("?get_usage@c_job_handle_internal@@QBAJXZ");
//};

//public: unsigned short const & c_job_handle_internal::get_index(void) const
//{
//    mangled_ppc("?get_index@c_job_handle_internal@@QBAABGXZ");
//};

//public: class c_job_handle c_job_list::add(class c_job const &, unsigned long)
//{
//    mangled_ppc("?add@c_job_list@@QAA?AVc_job_handle@@ABVc_job@@K@Z");
//};

//public: void c_job_deps::increment_depcount(void)
//{
//    mangled_ppc("?increment_depcount@c_job_deps@@QAAXXZ");
//};

//public: class c_job_deps & c_job::dependencies(void)
//{
//    mangled_ppc("?dependencies@c_job@@QAAAAVc_job_deps@@XZ");
//};

//public: void c_job_handle_internal::set_state(enum ejob_state)
//{
//    mangled_ppc("?set_state@c_job_handle_internal@@QAAXW4ejob_state@@@Z");
//};

//public: enum ejob_state c_job_handle_internal::get_state(void) const
//{
//    mangled_ppc("?get_state@c_job_handle_internal@@QBA?AW4ejob_state@@XZ");
//};

//public: void c_job_handle_internal::increment_usage(void)
//{
//    mangled_ppc("?increment_usage@c_job_handle_internal@@QAAXXZ");
//};

//public: void c_job_list::lock_activelist(void)
//{
//    mangled_ppc("?lock_activelist@c_job_list@@QAAXXZ");
//};

//public: void c_job_list::unlock_activelist(void)
//{
//    mangled_ppc("?unlock_activelist@c_job_list@@QAAXXZ");
//};

//public: void c_job_list::lock_freelist(void)
//{
//    mangled_ppc("?lock_freelist@c_job_list@@QAAXXZ");
//};

//public: void c_job_list::unlock_freelist(void)
//{
//    mangled_ppc("?unlock_freelist@c_job_list@@QAAXXZ");
//};

//public: class c_job & c_job::operator=(class c_job const &)
//{
//    mangled_ppc("??4c_job@@QAAAAV0@ABV0@@Z");
//};

//public: class c_job_deps & c_job_deps::operator=(class c_job_deps const &)
//{
//    mangled_ppc("??4c_job_deps@@QAAAAV0@ABV0@@Z");
//};

//public: class c_interlocked_int32& c_interlocked_int32::operator=(class c_interlocked_int32const &)
//{
//    mangled_ppc("??4c_interlocked_int32@@QAAAAV0@ABV0@@Z");
//};

//public: void c_job_list::activate(class c_job_handle const &, bool)
//{
//    mangled_ppc("?activate@c_job_list@@QAAXABVc_job_handle@@_N@Z");
//};

//public: void c_job_deps::decrement_depcount(void)
//{
//    mangled_ppc("?decrement_depcount@c_job_deps@@QAAXXZ");
//};

//public: long c_job_deps::depcount(void) const
//{
//    mangled_ppc("?depcount@c_job_deps@@QBAJXZ");
//};

//public: void c_job_list::activate_array(class c_job_handle *, unsigned long)
//{
//    mangled_ppc("?activate_array@c_job_list@@QAAXPAVc_job_handle@@K@Z");
//};

//public: void c_job_list::add_to_active(class c_job_handle *, unsigned long)
//{
//    mangled_ppc("?add_to_active@c_job_list@@QAAXPAVc_job_handle@@K@Z");
//};

//public: void c_job_list::block_until_work_available(bool)
//{
//    mangled_ppc("?block_until_work_available@c_job_list@@QAAX_N@Z");
//};

//public: void c_job_list::kick_semaphore(void)
//{
//    mangled_ppc("?kick_semaphore@c_job_list@@QAAXXZ");
//};

//public: unsigned long c_job_list::get_executable_jobs(class c_job **, class c_job_handle *, unsigned long)
//{
//    mangled_ppc("?get_executable_jobs@c_job_list@@QAAKPAPAVc_job@@PAVc_job_handle@@K@Z");
//};

//public: void c_job_list::free_job_array(class c_job **, unsigned long)
//{
//    mangled_ppc("?free_job_array@c_job_list@@QAAXPAPAVc_job@@K@Z");
//};

//public: void c_job_list::return_to_free_list(class c_job **, unsigned long)
//{
//    mangled_ppc("?return_to_free_list@c_job_list@@QAAXPAPAVc_job@@K@Z");
//};

//public: unsigned short c_job_deps::get_deplist(void)
//{
//    mangled_ppc("?get_deplist@c_job_deps@@QAAGXZ");
//};

//public: void c_job_list::lock_deps(void)
//{
//    mangled_ppc("?lock_deps@c_job_list@@QAAXXZ");
//};

//public: void c_job_list::unlock_deps(void)
//{
//    mangled_ppc("?unlock_deps@c_job_list@@QAAXXZ");
//};

//public: bool c_job_list::depends(class c_job_handle const &, class c_job_handle const &)
//{
//    mangled_ppc("?depends@c_job_list@@QAA_NABVc_job_handle@@0@Z");
//};

//public: unsigned short c_job_deps::set_dependant(unsigned short)
//{
//    mangled_ppc("?set_dependant@c_job_deps@@QAAGG@Z");
//};

//public: bool c_job_list::allocate_inactive(unsigned long, class c_job_handle *, class c_job **)
//{
//    mangled_ppc("?allocate_inactive@c_job_list@@QAA_NKPAVc_job_handle@@PAPAVc_job@@@Z");
//};

//public: void c_job::clear(void)
//{
//    mangled_ppc("?clear@c_job@@QAAXXZ");
//};

//public: void c_job_deps::clear(void)
//{
//    mangled_ppc("?clear@c_job_deps@@QAAXXZ");
//};

//public: class c_indexed_list<unsigned short, 4096>::iterator c_indexed_list<unsigned short, 4096>::begin(void)
//{
//    mangled_ppc("?begin@?$c_indexed_list@G$0BAAA@@@QAA?AViterator@1@XZ");
//};

//public: class c_indexed_list<unsigned short, 4096>::iterator c_indexed_list<unsigned short, 4096>::end(void)
//{
//    mangled_ppc("?end@?$c_indexed_list@G$0BAAA@@@QAA?AViterator@1@XZ");
//};

//public: long c_indexed_list<unsigned short, 4096>::count(void) const
//{
//    mangled_ppc("?count@?$c_indexed_list@G$0BAAA@@@QBAJXZ");
//};

//public: long c_indexed_list<unsigned short, 4096>::max_count(void) const
//{
//    mangled_ppc("?max_count@?$c_indexed_list@G$0BAAA@@@QBAJXZ");
//};

//public: bool c_indexed_list<unsigned short, 4096>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_indexed_list@G$0BAAA@@@QBA_NXZ");
//};

//public: unsigned short & c_indexed_list<unsigned short, 4096>::iterator::operator*(void)
//{
//    mangled_ppc("??Diterator@?$c_indexed_list@G$0BAAA@@@QAAAAGXZ");
//};

//public: class c_indexed_list<unsigned short, 4096>::iterator & c_indexed_list<unsigned short, 4096>::iterator::operator++(void)
//{
//    mangled_ppc("??Eiterator@?$c_indexed_list@G$0BAAA@@@QAAAAV01@XZ");
//};

//public: bool c_indexed_list<unsigned short, 4096>::iterator::operator!=(class c_indexed_list<unsigned short, 4096>::iterator const &) const
//{
//    mangled_ppc("??9iterator@?$c_indexed_list@G$0BAAA@@@QBA_NABV01@@Z");
//};

//private: unsigned short c_indexed_list<unsigned short, 4096>::get_next(unsigned short) const
//{
//    mangled_ppc("?get_next@?$c_indexed_list@G$0BAAA@@@ABAGG@Z");
//};

//private: unsigned short c_indexed_list<unsigned short, 4096>::get_prev(unsigned short) const
//{
//    mangled_ppc("?get_prev@?$c_indexed_list@G$0BAAA@@@ABAGG@Z");
//};

//private: unsigned short c_indexed_list<unsigned short, 4096>::get_head(void) const
//{
//    mangled_ppc("?get_head@?$c_indexed_list@G$0BAAA@@@ABAGXZ");
//};

//private: unsigned short c_indexed_list<unsigned short, 4096>::get_tail(void) const
//{
//    mangled_ppc("?get_tail@?$c_indexed_list@G$0BAAA@@@ABAGXZ");
//};

//private: unsigned short & c_indexed_list<unsigned short, 4096>::get_data(unsigned short)
//{
//    mangled_ppc("?get_data@?$c_indexed_list@G$0BAAA@@@AAAAAGG@Z");
//};

//public: c_indexed_list<unsigned short, 4096>::iterator::iterator(class c_indexed_list<unsigned short, 4096> *, unsigned short, unsigned short, unsigned short)
//{
//    mangled_ppc("??0iterator@?$c_indexed_list@G$0BAAA@@@QAA@PAV1@GGG@Z");
//};

//public: bool c_indexed_list<unsigned short, 4096>::iterator::operator==(class c_indexed_list<unsigned short, 4096>::iterator const &) const
//{
//    mangled_ppc("??8iterator@?$c_indexed_list@G$0BAAA@@@QBA_NABV01@@Z");
//};

//public: void c_indexed_list<unsigned short, 4096>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_indexed_list@G$0BAAA@@@QAAXXZ");
//};

//public: void c_indexed_list<unsigned short, 4096>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_indexed_list@G$0BAAA@@@QAAXXZ");
//};

//public: void c_indexed_list<unsigned short, 4096>::clear(void)
//{
//    mangled_ppc("?clear@?$c_indexed_list@G$0BAAA@@@QAAXXZ");
//};

//public: bool c_indexed_list<unsigned short, 4096>::push_back(unsigned short const &)
//{
//    mangled_ppc("?push_back@?$c_indexed_list@G$0BAAA@@@QAA_NABG@Z");
//};

//public: void c_indexed_list<unsigned short, 4096>::remove(class c_indexed_list<unsigned short, 4096>::iterator &)
//{
//    mangled_ppc("?remove@?$c_indexed_list@G$0BAAA@@@QAAXAAViterator@1@@Z");
//};

//public: unsigned short c_indexed_list<unsigned short, 4096>::pop_head(void)
//{
//    mangled_ppc("?pop_head@?$c_indexed_list@G$0BAAA@@@QAAGXZ");
//};

//public: void c_indexed_pool<struct s_il_node, 4096>::initialize(void)
//{
//    mangled_ppc("?initialize@?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAAXXZ");
//};

//public: void c_indexed_pool<struct s_il_node, 4096>::dispose(void)
//{
//    mangled_ppc("?dispose@?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAAXXZ");
//};

//public: unsigned short c_indexed_pool<struct s_il_node, 4096>::alloc_handle(void)
//{
//    mangled_ppc("?alloc_handle@?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAAGXZ");
//};

//public: void c_indexed_pool<struct s_il_node, 4096>::free_handle(unsigned short &)
//{
//    mangled_ppc("?free_handle@?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAAXAAG@Z");
//};

//public: struct s_il_node * c_indexed_pool<struct s_il_node, 4096>::get_element(unsigned short const &)
//{
//    mangled_ppc("?get_element@?$c_indexed_pool@Us_il_node@@$0BAAA@@@QAAPAUs_il_node@@ABG@Z");
//};

//private: unsigned short c_indexed_list<unsigned short, 4096>::pop(void)
//{
//    mangled_ppc("?pop@?$c_indexed_list@G$0BAAA@@@AAAGXZ");
//};

//private: void c_indexed_list<unsigned short, 4096>::push(struct s_il_node *)
//{
//    mangled_ppc("?push@?$c_indexed_list@G$0BAAA@@@AAAXPAUs_il_node@@@Z");
//};

//private: void c_indexed_list<unsigned short, 4096>::remove_indexed(unsigned short)
//{
//    mangled_ppc("?remove_indexed@?$c_indexed_list@G$0BAAA@@@AAAXG@Z");
//};

