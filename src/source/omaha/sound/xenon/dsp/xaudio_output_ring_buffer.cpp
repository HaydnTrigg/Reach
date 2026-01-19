/* ---------- headers */

#include "omaha\sound\xenon\dsp\xaudio_output_ring_buffer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_xaudio_output_ring_buffer::initialize(char const *, long);
// public: long c_xaudio_output_ring_buffer::get_ring_count(void) const;
// public: float const * c_xaudio_output_ring_buffer::get_last_frame_output(long) const;
// public: void c_xaudio_output_ring_buffer::accumulate_current_frame_output(long, class c_wrapped_array<float const>) const;
// public: void c_xaudio_output_ring_buffer::update_on_frame_start(void);
// public: void c_xaudio_output_ring_buffer::reset(void);
// public: void c_xaudio_output_ring_buffer::register_engine_callbacks(void);
// private: static void c_xaudio_output_ring_buffer::xaudio_frame_start_callback(void *);
// public: static long s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::get_count(void);
// public: class s_static_array<float, 256> & c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::operator[](long);
// public: class s_static_array<float, 256> const & c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::operator[](long) const;
// public: class s_static_array<float, 256> * c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::get_elements(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::get_total_element_size(void) const;
// public: bool c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::valid_index(long) const;
// public: float const * s_static_array<float, 256>::get_elements(void) const;
// public: float const * c_wrapped_array_no_init<float const>::begin(void);
// public: long c_wrapped_array_no_init<float const>::count(void) const;
// public: class s_static_array<float, 256> * c_wrapped_array_no_init<class s_static_array<float, 256> >::begin(void);
// public: class s_static_array<float, 256> const * c_wrapped_array_no_init<class s_static_array<float, 256> >::begin(void) const;
// public: class s_static_array<float, 256> * c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::begin(void);
// public: long c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::count(void) const;
// public: class c_wrapped_array_no_init<class s_static_array<float, 256> > * c_recursive_template_pattern<class c_wrapped_array_no_init<class s_static_array<float, 256> > >::get_super_class(void);
// public: class c_wrapped_array_no_init<class s_static_array<float, 256> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<class s_static_array<float, 256> > >::get_super_class(void) const;
// public: long c_wrapped_array_no_init<class s_static_array<float, 256> >::count(void) const;
// public: class c_wrapped_array<class s_static_array<float, 256> > & s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::operator[]<long>(long);
// class c_wrapped_array<class s_static_array<float, 256> > make_wrapped_array<class s_static_array<float, 256> >(class s_static_array<float, 256> *, long);
// public: c_wrapped_array<class s_static_array<float, 256> >::c_wrapped_array<class s_static_array<float, 256> >(class s_static_array<float, 256> *, long);
// public: static bool s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::valid<long>(long);

//public: void c_xaudio_output_ring_buffer::initialize(char const *, long)
//{
//    mangled_ppc("?initialize@c_xaudio_output_ring_buffer@@QAAXPBDJ@Z");
//};

//public: long c_xaudio_output_ring_buffer::get_ring_count(void) const
//{
//    mangled_ppc("?get_ring_count@c_xaudio_output_ring_buffer@@QBAJXZ");
//};

//public: float const * c_xaudio_output_ring_buffer::get_last_frame_output(long) const
//{
//    mangled_ppc("?get_last_frame_output@c_xaudio_output_ring_buffer@@QBAPBMJ@Z");
//};

//public: void c_xaudio_output_ring_buffer::accumulate_current_frame_output(long, class c_wrapped_array<float const>) const
//{
//    mangled_ppc("?accumulate_current_frame_output@c_xaudio_output_ring_buffer@@QBAXJV?$c_wrapped_array@$$CBM@@@Z");
//};

//public: void c_xaudio_output_ring_buffer::update_on_frame_start(void)
//{
//    mangled_ppc("?update_on_frame_start@c_xaudio_output_ring_buffer@@QAAXXZ");
//};

//public: void c_xaudio_output_ring_buffer::reset(void)
//{
//    mangled_ppc("?reset@c_xaudio_output_ring_buffer@@QAAXXZ");
//};

//public: void c_xaudio_output_ring_buffer::register_engine_callbacks(void)
//{
//    mangled_ppc("?register_engine_callbacks@c_xaudio_output_ring_buffer@@QAAXXZ");
//};

//private: static void c_xaudio_output_ring_buffer::xaudio_frame_start_callback(void *)
//{
//    mangled_ppc("?xaudio_frame_start_callback@c_xaudio_output_ring_buffer@@CAXPAX@Z");
//};

//public: static long s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@$01@@SAJXZ");
//};

//public: class s_static_array<float, 256> & c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::operator[](long)
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QAAAAV?$s_static_array@M$0BAA@@@J@Z");
//};

//public: class s_static_array<float, 256> const & c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QBAABV?$s_static_array@M$0BAA@@@J@Z");
//};

//public: class s_static_array<float, 256> * c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QAAPAV?$s_static_array@M$0BAA@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QBAJXZ");
//};

//public: bool c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::valid_index(long) const
//{
//    mangled_ppc("?valid_index@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QBA_NJ@Z");
//};

//public: float const * s_static_array<float, 256>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@M$0BAA@@@QBAPBMXZ");
//};

//public: float const * c_wrapped_array_no_init<float const>::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@$$CBM@@QAAPBMXZ");
//};

//public: long c_wrapped_array_no_init<float const>::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@$$CBM@@QBAJXZ");
//};

//public: class s_static_array<float, 256> * c_wrapped_array_no_init<class s_static_array<float, 256> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@QAAPAV?$s_static_array@M$0BAA@@@XZ");
//};

//public: class s_static_array<float, 256> const * c_wrapped_array_no_init<class s_static_array<float, 256> >::begin(void) const
//{
//    mangled_ppc("?begin@?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@QBAPBV?$s_static_array@M$0BAA@@@XZ");
//};

//public: class s_static_array<float, 256> * c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::begin(void)
//{
//    mangled_ppc("?begin@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QAAPAV?$s_static_array@M$0BAA@@@XZ");
//};

//public: long c_array_operator_interface<class c_wrapped_array_no_init<class s_static_array<float, 256> >, class s_static_array<float, 256> >::count(void) const
//{
//    mangled_ppc("?count@?$c_array_operator_interface@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@V?$s_static_array@M$0BAA@@@@@QBAJXZ");
//};

//public: class c_wrapped_array_no_init<class s_static_array<float, 256> > * c_recursive_template_pattern<class c_wrapped_array_no_init<class s_static_array<float, 256> > >::get_super_class(void)
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@@@QAAPAV?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@XZ");
//};

//public: class c_wrapped_array_no_init<class s_static_array<float, 256> > const * c_recursive_template_pattern<class c_wrapped_array_no_init<class s_static_array<float, 256> > >::get_super_class(void) const
//{
//    mangled_ppc("?get_super_class@?$c_recursive_template_pattern@V?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@@@QBAPBV?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@XZ");
//};

//public: long c_wrapped_array_no_init<class s_static_array<float, 256> >::count(void) const
//{
//    mangled_ppc("?count@?$c_wrapped_array_no_init@V?$s_static_array@M$0BAA@@@@@QBAJXZ");
//};

//public: class c_wrapped_array<class s_static_array<float, 256> > & s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@$01@@QAAAAV?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@J@Z");
//};

//class c_wrapped_array<class s_static_array<float, 256> > make_wrapped_array<class s_static_array<float, 256> >(class s_static_array<float, 256> *, long)
//{
//    mangled_ppc("??$make_wrapped_array@V?$s_static_array@M$0BAA@@@@@YA?AV?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@PAV?$s_static_array@M$0BAA@@@J@Z");
//};

//public: c_wrapped_array<class s_static_array<float, 256> >::c_wrapped_array<class s_static_array<float, 256> >(class s_static_array<float, 256> *, long)
//{
//    mangled_ppc("??0?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@QAA@PAV?$s_static_array@M$0BAA@@@J@Z");
//};

//public: static bool s_static_array<class c_wrapped_array<class s_static_array<float, 256> >, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_wrapped_array@V?$s_static_array@M$0BAA@@@@@$01@@SA_NJ@Z");
//};

