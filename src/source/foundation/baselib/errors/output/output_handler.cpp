/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static class c_static_stack<class c_output_handler *, 8> c_output_handler_registry::g_handlers; // "?g_handlers@c_output_handler_registry@@1V?$c_static_stack@PAVc_output_handler@@$07@@A"

// public: virtual void c_output_handler::handle_output_message(union argb_color const *, char const *, bool);
// public: virtual void c_output_handler::handle_output_message_block_begin(void);
// public: virtual void c_output_handler::handle_output_message_block_end(void);
// public: virtual void c_output_handler::handle_output_error(char const *);
// public: virtual void c_output_handler::handle_output_debug(char const *);
// public: virtual void c_output_handler::handle_output_event(enum e_event_level, char const *, char const *, union rgb_color const *);
// public: virtual bool c_output_handler::provides_console_window(void);
// public: virtual bool c_output_handler::handle_wait_for_keypress(void);
// public: virtual bool c_output_handler::handle_alert(char const *);
// public: virtual enum e_output_user_choice c_output_handler::handle_ask_user_with_timeout(char const *, char const *, enum e_output_user_query, long, enum e_output_user_choice);
// public: static void c_output_handler_registry::attach_handler(class c_output_handler *);
// public: static void c_output_handler_registry::detach_handler(class c_output_handler *);
// public: static bool c_output_handler_registry::active(void);
// public: c_output_handler_iterator::c_output_handler_iterator(void);
// public: class c_output_handler * c_output_handler_iterator::get_first(void);
// public: class c_output_handler * c_output_handler_iterator::get_next(void);
// public: bool c_static_stack<class c_output_handler *, 8>::valid(void) const;
// public: bool c_static_stack<class c_output_handler *, 8>::empty(void) const;
// public: long c_static_stack<class c_output_handler *, 8>::top(void) const;
// public: long c_static_stack<class c_output_handler *, 8>::count(void) const;
// public: void c_static_stack<class c_output_handler *, 8>::push_back(class c_output_handler *const &);
// public: void c_static_stack<class c_output_handler *, 8>::pop(void);
// public: class c_output_handler *& c_static_stack<class c_output_handler *, 8>::operator[](long);
// public: bool c_static_stack<class c_output_handler *, 8>::valid(long) const;
// public: long c_static_stack<class c_output_handler *, 8>::push(void);
// public: class c_output_handler ** c_static_stack<class c_output_handler *, 8>::get(long);
// public: bool c_static_stack<class c_output_handler *, 8>::full(void) const;
// public: c_static_stack<class c_output_handler *, 8>::c_static_stack<class c_output_handler *, 8>(void);

//public: virtual void c_output_handler::handle_output_message(union argb_color const *, char const *, bool)
//{
//    mangled_ppc("?handle_output_message@c_output_handler@@UAAXPBTargb_color@@PBD_N@Z");
//};

//public: virtual void c_output_handler::handle_output_message_block_begin(void)
//{
//    mangled_ppc("?handle_output_message_block_begin@c_output_handler@@UAAXXZ");
//};

//public: virtual void c_output_handler::handle_output_message_block_end(void)
//{
//    mangled_ppc("?handle_output_message_block_end@c_output_handler@@UAAXXZ");
//};

//public: virtual void c_output_handler::handle_output_error(char const *)
//{
//    mangled_ppc("?handle_output_error@c_output_handler@@UAAXPBD@Z");
//};

//public: virtual void c_output_handler::handle_output_debug(char const *)
//{
//    mangled_ppc("?handle_output_debug@c_output_handler@@UAAXPBD@Z");
//};

//public: virtual void c_output_handler::handle_output_event(enum e_event_level, char const *, char const *, union rgb_color const *)
//{
//    mangled_ppc("?handle_output_event@c_output_handler@@UAAXW4e_event_level@@PBD1PBTrgb_color@@@Z");
//};

//public: virtual bool c_output_handler::provides_console_window(void)
//{
//    mangled_ppc("?provides_console_window@c_output_handler@@UAA_NXZ");
//};

//public: virtual bool c_output_handler::handle_wait_for_keypress(void)
//{
//    mangled_ppc("?handle_wait_for_keypress@c_output_handler@@UAA_NXZ");
//};

//public: virtual bool c_output_handler::handle_alert(char const *)
//{
//    mangled_ppc("?handle_alert@c_output_handler@@UAA_NPBD@Z");
//};

//public: virtual enum e_output_user_choice c_output_handler::handle_ask_user_with_timeout(char const *, char const *, enum e_output_user_query, long, enum e_output_user_choice)
//{
//    mangled_ppc("?handle_ask_user_with_timeout@c_output_handler@@UAA?AW4e_output_user_choice@@PBD0W4e_output_user_query@@JW42@@Z");
//};

//public: static void c_output_handler_registry::attach_handler(class c_output_handler *)
//{
//    mangled_ppc("?attach_handler@c_output_handler_registry@@SAXPAVc_output_handler@@@Z");
//};

//public: static void c_output_handler_registry::detach_handler(class c_output_handler *)
//{
//    mangled_ppc("?detach_handler@c_output_handler_registry@@SAXPAVc_output_handler@@@Z");
//};

//public: static bool c_output_handler_registry::active(void)
//{
//    mangled_ppc("?active@c_output_handler_registry@@SA_NXZ");
//};

//public: c_output_handler_iterator::c_output_handler_iterator(void)
//{
//    mangled_ppc("??0c_output_handler_iterator@@QAA@XZ");
//};

//public: class c_output_handler * c_output_handler_iterator::get_first(void)
//{
//    mangled_ppc("?get_first@c_output_handler_iterator@@QAAPAVc_output_handler@@XZ");
//};

//public: class c_output_handler * c_output_handler_iterator::get_next(void)
//{
//    mangled_ppc("?get_next@c_output_handler_iterator@@QAAPAVc_output_handler@@XZ");
//};

//public: bool c_static_stack<class c_output_handler *, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVc_output_handler@@$07@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_output_handler *, 8>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@PAVc_output_handler@@$07@@QBA_NXZ");
//};

//public: long c_static_stack<class c_output_handler *, 8>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@PAVc_output_handler@@$07@@QBAJXZ");
//};

//public: long c_static_stack<class c_output_handler *, 8>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@PAVc_output_handler@@$07@@QBAJXZ");
//};

//public: void c_static_stack<class c_output_handler *, 8>::push_back(class c_output_handler *const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@PAVc_output_handler@@$07@@QAAXABQAVc_output_handler@@@Z");
//};

//public: void c_static_stack<class c_output_handler *, 8>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@PAVc_output_handler@@$07@@QAAXXZ");
//};

//public: class c_output_handler *& c_static_stack<class c_output_handler *, 8>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@PAVc_output_handler@@$07@@QAAAAPAVc_output_handler@@J@Z");
//};

//public: bool c_static_stack<class c_output_handler *, 8>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@PAVc_output_handler@@$07@@QBA_NJ@Z");
//};

//public: long c_static_stack<class c_output_handler *, 8>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@PAVc_output_handler@@$07@@QAAJXZ");
//};

//public: class c_output_handler ** c_static_stack<class c_output_handler *, 8>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@PAVc_output_handler@@$07@@QAAPAPAVc_output_handler@@J@Z");
//};

//public: bool c_static_stack<class c_output_handler *, 8>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@PAVc_output_handler@@$07@@QBA_NXZ");
//};

//public: c_static_stack<class c_output_handler *, 8>::c_static_stack<class c_output_handler *, 8>(void)
//{
//    mangled_ppc("??0?$c_static_stack@PAVc_output_handler@@$07@@QAA@XZ");
//};

