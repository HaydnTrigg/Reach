/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: long c_ring_buffer::size(void) const;
// public: long c_ring_buffer::count(void) const;
// public: long c_ring_buffer::available(void) const;
// public: bool c_ring_buffer::empty(void) const;
// public: bool c_ring_buffer::full(void) const;
// public: long c_ring_buffer::first_element(void) const;
// public: long c_ring_buffer::next_element(long) const;
// public: long c_ring_buffer::last_element(void) const;
// public: long c_ring_buffer::current_element(void) const;
// public: long c_ring_buffer::previous_element(long) const;
// public: long c_ring_buffer::nth_element(long) const;
// public: void c_ring_buffer::clear(void);
// public: long c_ring_buffer::add_element(void);
// public: long c_ring_buffer::remove_element(void);
// public: long c_ring_buffer::add_elements(long);
// public: long c_ring_buffer::remove_elements(long);
// public: void c_ring_stream::attach(long, unsigned char *);
// public: void c_ring_stream::detach(void);
// public: void c_ring_stream::set_enforcement(bool);
// public: bool c_ring_stream::attached(void) const;
// public: long c_ring_stream::size(void) const;
// public: long c_ring_stream::current_size(void) const;
// public: bool c_ring_stream::empty(void) const;
// public: bool c_ring_stream::can_add_block(long) const;
// public: void c_ring_stream::clear(void);
// public: long c_ring_stream::add_block(long, void const *);
// public: void c_ring_stream::retrieve_block(long, long, void *);
// public: long c_ring_stream::remove_block(long, void *);
// private: void c_ring_stream::write_data_internal(long, long, void const *);
// private: void c_ring_stream::read_data_internal(long, long, void *);
// private: void c_ring_stream::write_garbage_internal(long, long);
// public: c_coherent_ring_buffer::c_coherent_ring_buffer(void);
// public: c_coherent_ring_buffer::~c_coherent_ring_buffer(void);
// public: void c_coherent_ring_buffer::clear(void);
// public: void c_coherent_ring_buffer::attach(long, unsigned char *);
// public: void c_coherent_ring_buffer::detach(void);
// public: bool c_coherent_ring_buffer::allocate_block(long, long, void **, unsigned int *);
// long next_multiple(unsigned int, unsigned int);
// public: void c_coherent_ring_buffer::release_block(long);
// public: bool c_coherent_ring_buffer::can_allocate_block(long, long) const;

//public: long c_ring_buffer::size(void) const
//{
//    mangled_ppc("?size@c_ring_buffer@@QBAJXZ");
//};

//public: long c_ring_buffer::count(void) const
//{
//    mangled_ppc("?count@c_ring_buffer@@QBAJXZ");
//};

//public: long c_ring_buffer::available(void) const
//{
//    mangled_ppc("?available@c_ring_buffer@@QBAJXZ");
//};

//public: bool c_ring_buffer::empty(void) const
//{
//    mangled_ppc("?empty@c_ring_buffer@@QBA_NXZ");
//};

//public: bool c_ring_buffer::full(void) const
//{
//    mangled_ppc("?full@c_ring_buffer@@QBA_NXZ");
//};

//public: long c_ring_buffer::first_element(void) const
//{
//    mangled_ppc("?first_element@c_ring_buffer@@QBAJXZ");
//};

//public: long c_ring_buffer::next_element(long) const
//{
//    mangled_ppc("?next_element@c_ring_buffer@@QBAJJ@Z");
//};

//public: long c_ring_buffer::last_element(void) const
//{
//    mangled_ppc("?last_element@c_ring_buffer@@QBAJXZ");
//};

//public: long c_ring_buffer::current_element(void) const
//{
//    mangled_ppc("?current_element@c_ring_buffer@@QBAJXZ");
//};

//public: long c_ring_buffer::previous_element(long) const
//{
//    mangled_ppc("?previous_element@c_ring_buffer@@QBAJJ@Z");
//};

//public: long c_ring_buffer::nth_element(long) const
//{
//    mangled_ppc("?nth_element@c_ring_buffer@@QBAJJ@Z");
//};

//public: void c_ring_buffer::clear(void)
//{
//    mangled_ppc("?clear@c_ring_buffer@@QAAXXZ");
//};

//public: long c_ring_buffer::add_element(void)
//{
//    mangled_ppc("?add_element@c_ring_buffer@@QAAJXZ");
//};

//public: long c_ring_buffer::remove_element(void)
//{
//    mangled_ppc("?remove_element@c_ring_buffer@@QAAJXZ");
//};

//public: long c_ring_buffer::add_elements(long)
//{
//    mangled_ppc("?add_elements@c_ring_buffer@@QAAJJ@Z");
//};

//public: long c_ring_buffer::remove_elements(long)
//{
//    mangled_ppc("?remove_elements@c_ring_buffer@@QAAJJ@Z");
//};

//public: void c_ring_stream::attach(long, unsigned char *)
//{
//    mangled_ppc("?attach@c_ring_stream@@QAAXJPAE@Z");
//};

//public: void c_ring_stream::detach(void)
//{
//    mangled_ppc("?detach@c_ring_stream@@QAAXXZ");
//};

//public: void c_ring_stream::set_enforcement(bool)
//{
//    mangled_ppc("?set_enforcement@c_ring_stream@@QAAX_N@Z");
//};

//public: bool c_ring_stream::attached(void) const
//{
//    mangled_ppc("?attached@c_ring_stream@@QBA_NXZ");
//};

//public: long c_ring_stream::size(void) const
//{
//    mangled_ppc("?size@c_ring_stream@@QBAJXZ");
//};

//public: long c_ring_stream::current_size(void) const
//{
//    mangled_ppc("?current_size@c_ring_stream@@QBAJXZ");
//};

//public: bool c_ring_stream::empty(void) const
//{
//    mangled_ppc("?empty@c_ring_stream@@QBA_NXZ");
//};

//public: bool c_ring_stream::can_add_block(long) const
//{
//    mangled_ppc("?can_add_block@c_ring_stream@@QBA_NJ@Z");
//};

//public: void c_ring_stream::clear(void)
//{
//    mangled_ppc("?clear@c_ring_stream@@QAAXXZ");
//};

//public: long c_ring_stream::add_block(long, void const *)
//{
//    mangled_ppc("?add_block@c_ring_stream@@QAAJJPBX@Z");
//};

//public: void c_ring_stream::retrieve_block(long, long, void *)
//{
//    mangled_ppc("?retrieve_block@c_ring_stream@@QAAXJJPAX@Z");
//};

//public: long c_ring_stream::remove_block(long, void *)
//{
//    mangled_ppc("?remove_block@c_ring_stream@@QAAJJPAX@Z");
//};

//private: void c_ring_stream::write_data_internal(long, long, void const *)
//{
//    mangled_ppc("?write_data_internal@c_ring_stream@@AAAXJJPBX@Z");
//};

//private: void c_ring_stream::read_data_internal(long, long, void *)
//{
//    mangled_ppc("?read_data_internal@c_ring_stream@@AAAXJJPAX@Z");
//};

//private: void c_ring_stream::write_garbage_internal(long, long)
//{
//    mangled_ppc("?write_garbage_internal@c_ring_stream@@AAAXJJ@Z");
//};

//public: c_coherent_ring_buffer::c_coherent_ring_buffer(void)
//{
//    mangled_ppc("??0c_coherent_ring_buffer@@QAA@XZ");
//};

//public: c_coherent_ring_buffer::~c_coherent_ring_buffer(void)
//{
//    mangled_ppc("??1c_coherent_ring_buffer@@QAA@XZ");
//};

//public: void c_coherent_ring_buffer::clear(void)
//{
//    mangled_ppc("?clear@c_coherent_ring_buffer@@QAAXXZ");
//};

//public: void c_coherent_ring_buffer::attach(long, unsigned char *)
//{
//    mangled_ppc("?attach@c_coherent_ring_buffer@@QAAXJPAE@Z");
//};

//public: void c_coherent_ring_buffer::detach(void)
//{
//    mangled_ppc("?detach@c_coherent_ring_buffer@@QAAXXZ");
//};

//public: bool c_coherent_ring_buffer::allocate_block(long, long, void **, unsigned int *)
//{
//    mangled_ppc("?allocate_block@c_coherent_ring_buffer@@QAA_NJJPAPAXPAI@Z");
//};

//long next_multiple(unsigned int, unsigned int)
//{
//    mangled_ppc("?next_multiple@@YAJII@Z");
//};

//public: void c_coherent_ring_buffer::release_block(long)
//{
//    mangled_ppc("?release_block@c_coherent_ring_buffer@@QAAXJ@Z");
//};

//public: bool c_coherent_ring_buffer::can_allocate_block(long, long) const
//{
//    mangled_ppc("?can_allocate_block@c_coherent_ring_buffer@@QBA_NJJ@Z");
//};

