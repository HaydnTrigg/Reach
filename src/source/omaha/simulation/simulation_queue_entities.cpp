/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_simulation_entity_type const c_enum_no_init<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@2W4e_simulation_entity_type@@B"

// bool simulation_queue_entity_creation_allocate(struct s_simulation_queue_entity_data *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, class c_simulation_queue_element **, long *);
// void simulation_queue_entity_creation_insert(class c_simulation_queue_element *);
// void simulation_queue_entity_creation_apply(class c_simulation_queue_element const *);
// public: s_simulation_queue_decoded_creation_data::s_simulation_queue_decoded_creation_data(void);
// bool simulation_queue_entity_update_allocate(struct s_simulation_queue_entity_data *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, bool, class c_simulation_queue_element **);
// void simulation_queue_entity_update_insert(class c_simulation_queue_element *);
// void simulation_queue_entity_update_apply(class c_simulation_queue_element const *);
// public: s_simulation_queue_decoded_update_data::s_simulation_queue_decoded_update_data(void);
// void simulation_queue_entity_deletion_insert(struct s_simulation_entity const *, bool);
// void simulation_queue_entity_deletion_apply(class c_simulation_queue_element const *);
// void simulation_queue_entity_promotion_insert(struct s_simulation_entity const *);
// void simulation_queue_entity_promotion_apply(class c_simulation_queue_element const *);
// void simulation_queue_entity_encode_header(class c_bitstream *, enum e_simulation_entity_type, long);
// bool simulation_queue_entity_decode_header(class c_bitstream *, class c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver> *, long *);
// bool encode_simulation_queue_creation_to_buffer(unsigned char *, long, long, struct s_simulation_queue_entity_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long *);
// bool decode_simulation_queue_creation_from_buffer(unsigned char *, long, struct s_simulation_queue_decoded_creation_data *);
// bool encode_simulation_queue_update_to_buffer(unsigned char *, long, struct s_simulation_queue_entity_data const *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, bool, long *);
// bool decode_simulation_queue_update_from_buffer(unsigned char *, long, struct s_simulation_queue_decoded_update_data *);
// public: c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>(enum e_simulation_entity_type);
// public: enum e_simulation_entity_type c_enum_no_init<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::operator enum e_simulation_entity_type(void) const;

//bool simulation_queue_entity_creation_allocate(struct s_simulation_queue_entity_data *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, class c_simulation_queue_element **, long *)
//{
//    mangled_ppc("?simulation_queue_entity_creation_allocate@@YA_NPAUs_simulation_queue_entity_data@@V?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAPAVc_simulation_queue_element@@PAJ@Z");
//};

//void simulation_queue_entity_creation_insert(class c_simulation_queue_element *)
//{
//    mangled_ppc("?simulation_queue_entity_creation_insert@@YAXPAVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_entity_creation_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_entity_creation_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//public: s_simulation_queue_decoded_creation_data::s_simulation_queue_decoded_creation_data(void)
//{
//    mangled_ppc("??0s_simulation_queue_decoded_creation_data@@QAA@XZ");
//};

//bool simulation_queue_entity_update_allocate(struct s_simulation_queue_entity_data *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, bool, class c_simulation_queue_element **)
//{
//    mangled_ppc("?simulation_queue_entity_update_allocate@@YA_NPAUs_simulation_queue_entity_data@@JV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@_NPAPAVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_entity_update_insert(class c_simulation_queue_element *)
//{
//    mangled_ppc("?simulation_queue_entity_update_insert@@YAXPAVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_entity_update_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_entity_update_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//public: s_simulation_queue_decoded_update_data::s_simulation_queue_decoded_update_data(void)
//{
//    mangled_ppc("??0s_simulation_queue_decoded_update_data@@QAA@XZ");
//};

//void simulation_queue_entity_deletion_insert(struct s_simulation_entity const *, bool)
//{
//    mangled_ppc("?simulation_queue_entity_deletion_insert@@YAXPBUs_simulation_entity@@_N@Z");
//};

//void simulation_queue_entity_deletion_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_entity_deletion_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_entity_promotion_insert(struct s_simulation_entity const *)
//{
//    mangled_ppc("?simulation_queue_entity_promotion_insert@@YAXPBUs_simulation_entity@@@Z");
//};

//void simulation_queue_entity_promotion_apply(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?simulation_queue_entity_promotion_apply@@YAXPBVc_simulation_queue_element@@@Z");
//};

//void simulation_queue_entity_encode_header(class c_bitstream *, enum e_simulation_entity_type, long)
//{
//    mangled_ppc("?simulation_queue_entity_encode_header@@YAXPAVc_bitstream@@W4e_simulation_entity_type@@J@Z");
//};

//bool simulation_queue_entity_decode_header(class c_bitstream *, class c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver> *, long *)
//{
//    mangled_ppc("?simulation_queue_entity_decode_header@@YA_NPAVc_bitstream@@PAV?$c_enum@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@PAJ@Z");
//};

//bool encode_simulation_queue_creation_to_buffer(unsigned char *, long, long, struct s_simulation_queue_entity_data const *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long *)
//{
//    mangled_ppc("?encode_simulation_queue_creation_to_buffer@@YA_NPAEJJPBUs_simulation_queue_entity_data@@V?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PAJ@Z");
//};

//bool decode_simulation_queue_creation_from_buffer(unsigned char *, long, struct s_simulation_queue_decoded_creation_data *)
//{
//    mangled_ppc("?decode_simulation_queue_creation_from_buffer@@YA_NPAEJPAUs_simulation_queue_decoded_creation_data@@@Z");
//};

//bool encode_simulation_queue_update_to_buffer(unsigned char *, long, struct s_simulation_queue_entity_data const *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, bool, long *)
//{
//    mangled_ppc("?encode_simulation_queue_update_to_buffer@@YA_NPAEJPBUs_simulation_queue_entity_data@@JV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@_NPAJ@Z");
//};

//bool decode_simulation_queue_update_from_buffer(unsigned char *, long, struct s_simulation_queue_decoded_update_data *)
//{
//    mangled_ppc("?decode_simulation_queue_update_from_buffer@@YA_NPAEJPAUs_simulation_queue_decoded_update_data@@@Z");
//};

//public: c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::c_enum<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>(enum e_simulation_entity_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@QAA@W4e_simulation_entity_type@@@Z");
//};

//public: enum e_simulation_entity_type c_enum_no_init<enum e_simulation_entity_type, char, -1, 16, struct s_default_enum_string_resolver>::operator enum e_simulation_entity_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_simulation_entity_type@@D$0?0$0BA@Us_default_enum_string_resolver@@@@QBA?AW4e_simulation_entity_type@@XZ");
//};

