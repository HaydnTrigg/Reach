/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static unsigned short const XCR::ControlUnit::InputDeviceData::KEYSTROKE_BUFFER; // "?KEYSTROKE_BUFFER@InputDeviceData@ControlUnit@XCR@@1GB"
// short const *const const virtual_to_key_table; // "?virtual_to_key_table@@3QBFB"
// short const *const const ascii_to_key_table; // "?ascii_to_key_table@@3QBFB"
// bool g_display_rumble_status_lines; // "?g_display_rumble_status_lines@@3_NA"
// struct c_status_line *g_rumble_status_lines; // "?g_rumble_status_lines@@3PAUc_status_line@@A"

// bool input_initialize(void);
// void input_dispose(void);
// void input_activate(void);
// void input_deactivate(void);
// bool input_is_active(void);
// void input_kick(void);
// void input_update(void);
// void input_flush(void);
// unsigned char input_key_frames_down(short);
// unsigned short input_key_msec_down(short);
// bool input_peek_key(struct key_stroke *);
// bool input_get_key(struct key_stroke *);
// bool input_mouse_should_be_active(void);
// struct mouse_state const * input_get_mouse_state(void);
// void input_suppress(void);
// void input_feedback_suppress(bool);
// unsigned char input_mouse_button_ticks_down(short);
// unsigned short input_mouse_button_msec_down(short);
// bool input_has_gamepad(short);
// struct gamepad_state const * input_get_gamepad_state(short);
// enum e_gamepad_type input_get_gamepad_type(short);
// bool input_gamepad_has_memory_unit(enum e_memory_unit, char *);
// void input_clear_all_rumblers(void);
// void input_set_gamepad_rumbler_state(short, unsigned short, unsigned short);
// void input_vertical_blank_interrupt(void);
// long input_get_memory_units_last_change_time(void);
// void input_update_device_connections(void);
// void input_update_gamepads(long);
// void input_update_gamepads_rumble(void);
// void input_update_keyboard(long);
// void update_button(unsigned char *, unsigned short *, bool, long);
// void input_get_raw_data_string(char *, short);

//bool input_initialize(void)
//{
//    mangled_ppc("?input_initialize@@YA_NXZ");
//};

//void input_dispose(void)
//{
//    mangled_ppc("?input_dispose@@YAXXZ");
//};

//void input_activate(void)
//{
//    mangled_ppc("?input_activate@@YAXXZ");
//};

//void input_deactivate(void)
//{
//    mangled_ppc("?input_deactivate@@YAXXZ");
//};

//bool input_is_active(void)
//{
//    mangled_ppc("?input_is_active@@YA_NXZ");
//};

//void input_kick(void)
//{
//    mangled_ppc("?input_kick@@YAXXZ");
//};

//void input_update(void)
//{
//    mangled_ppc("?input_update@@YAXXZ");
//};

//void input_flush(void)
//{
//    mangled_ppc("?input_flush@@YAXXZ");
//};

//unsigned char input_key_frames_down(short)
//{
//    mangled_ppc("?input_key_frames_down@@YAEF@Z");
//};

//unsigned short input_key_msec_down(short)
//{
//    mangled_ppc("?input_key_msec_down@@YAGF@Z");
//};

//bool input_peek_key(struct key_stroke *)
//{
//    mangled_ppc("?input_peek_key@@YA_NPAUkey_stroke@@@Z");
//};

//bool input_get_key(struct key_stroke *)
//{
//    mangled_ppc("?input_get_key@@YA_NPAUkey_stroke@@@Z");
//};

//bool input_mouse_should_be_active(void)
//{
//    mangled_ppc("?input_mouse_should_be_active@@YA_NXZ");
//};

//struct mouse_state const * input_get_mouse_state(void)
//{
//    mangled_ppc("?input_get_mouse_state@@YAPBUmouse_state@@XZ");
//};

//void input_suppress(void)
//{
//    mangled_ppc("?input_suppress@@YAXXZ");
//};

//void input_feedback_suppress(bool)
//{
//    mangled_ppc("?input_feedback_suppress@@YAX_N@Z");
//};

//unsigned char input_mouse_button_ticks_down(short)
//{
//    mangled_ppc("?input_mouse_button_ticks_down@@YAEF@Z");
//};

//unsigned short input_mouse_button_msec_down(short)
//{
//    mangled_ppc("?input_mouse_button_msec_down@@YAGF@Z");
//};

//bool input_has_gamepad(short)
//{
//    mangled_ppc("?input_has_gamepad@@YA_NF@Z");
//};

//struct gamepad_state const * input_get_gamepad_state(short)
//{
//    mangled_ppc("?input_get_gamepad_state@@YAPBUgamepad_state@@F@Z");
//};

//enum e_gamepad_type input_get_gamepad_type(short)
//{
//    mangled_ppc("?input_get_gamepad_type@@YA?AW4e_gamepad_type@@F@Z");
//};

//bool input_gamepad_has_memory_unit(enum e_memory_unit, char *)
//{
//    mangled_ppc("?input_gamepad_has_memory_unit@@YA_NW4e_memory_unit@@PAD@Z");
//};

//void input_clear_all_rumblers(void)
//{
//    mangled_ppc("?input_clear_all_rumblers@@YAXXZ");
//};

//void input_set_gamepad_rumbler_state(short, unsigned short, unsigned short)
//{
//    mangled_ppc("?input_set_gamepad_rumbler_state@@YAXFGG@Z");
//};

//void input_vertical_blank_interrupt(void)
//{
//    mangled_ppc("?input_vertical_blank_interrupt@@YAXXZ");
//};

//long input_get_memory_units_last_change_time(void)
//{
//    mangled_ppc("?input_get_memory_units_last_change_time@@YAJXZ");
//};

//void input_update_device_connections(void)
//{
//    mangled_ppc("?input_update_device_connections@@YAXXZ");
//};

//void input_update_gamepads(long)
//{
//    mangled_ppc("?input_update_gamepads@@YAXJ@Z");
//};

//void input_update_gamepads_rumble(void)
//{
//    mangled_ppc("?input_update_gamepads_rumble@@YAXXZ");
//};

//void input_update_keyboard(long)
//{
//    mangled_ppc("?input_update_keyboard@@YAXJ@Z");
//};

//void update_button(unsigned char *, unsigned short *, bool, long)
//{
//    mangled_ppc("?update_button@@YAXPAEPAG_NJ@Z");
//};

//void input_get_raw_data_string(char *, short)
//{
//    mangled_ppc("?input_get_raw_data_string@@YAXPADF@Z");
//};

