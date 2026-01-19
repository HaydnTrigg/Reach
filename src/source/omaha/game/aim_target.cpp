/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: c_aim_target_base::c_aim_target_base(void);
// public: bool c_aim_target_base::is_object(void) const;
// public: bool c_aim_target_base::is_laser_designation(void) const;
// public: bool c_aim_target_base::has_model(void) const;
// public: long c_aim_target_base::get_object_model(void) const;
// public: void c_aim_target_base::set_object_model(long);
// public: c_aim_target_object::c_aim_target_object(void);
// public: void c_aim_target_object::reset(void);
// public: bool c_aim_target_object::is_valid_for_encoding(void) const;
// private: long c_aim_target_object::get(enum c_aim_target_base::e_aim_target_type) const;
// public: long c_aim_target_object::get_object_index(void) const;
// public: long c_aim_target_object::get_laser_designation(void) const;
// public: bool c_aim_target_object::equals(long) const;
// public: bool c_aim_target_object::equals(class c_aim_target_object const *) const;
// private: void c_aim_target_object::set(long, enum c_aim_target_base::e_aim_target_type);
// public: void c_aim_target_object::set_object_index(long);
// public: void c_aim_target_object::set_laser_designation(long);
// public: bool c_aim_target_object::is_valid(void) const;
// public: bool c_aim_target_object::is_trackable(void) const;
// public: struct s_model_target const * c_aim_target_object::get_model_target(void) const;
// public: void c_aim_target_object::get_target_point(union real_point3d *) const;
// public: void c_aim_target_object::encode(class c_bitstream *) const;
// public: bool c_aim_target_object::decode(class c_bitstream *);
// public: bool c_aim_target_object::setup(class c_aim_target_predicted *) const;
// public: bool c_aim_target_object::setup(class c_aim_target_simulation_entity *) const;
// public: char const * c_aim_target_object::object_describe(void) const;
// public: c_aim_target_predicted::c_aim_target_predicted(void);
// public: void c_aim_target_predicted::reset(void);
// public: bool c_aim_target_predicted::is_valid(void) const;
// private: long c_aim_target_predicted::get(enum c_aim_target_base::e_aim_target_type) const;
// public: long c_aim_target_predicted::get_entity_index(void) const;
// public: long c_aim_target_predicted::get_laser_designation(void) const;
// private: void c_aim_target_predicted::set(long, enum c_aim_target_base::e_aim_target_type);
// public: void c_aim_target_predicted::set_entity_index(long);
// public: void c_aim_target_predicted::set_laser_designation(long);
// public: void c_aim_target_predicted::encode(class c_bitstream *) const;
// public: bool c_aim_target_predicted::decode(class c_bitstream *);
// public: bool c_aim_target_predicted::setup(class c_aim_target_object *) const;
// public: c_aim_target_simulation_entity::c_aim_target_simulation_entity(void);
// public: bool c_aim_target_simulation_entity::is_valid(void) const;
// public: bool c_aim_target_simulation_entity::is_active(struct s_simulation_view_telemetry_data const *) const;
// public: void c_aim_target_simulation_entity::reset(void);
// private: long c_aim_target_simulation_entity::get(enum c_aim_target_base::e_aim_target_type) const;
// public: long c_aim_target_simulation_entity::get_entity_index(void) const;
// public: long c_aim_target_simulation_entity::get_laser_designation(void) const;
// private: void c_aim_target_simulation_entity::set(long, enum c_aim_target_base::e_aim_target_type);
// public: void c_aim_target_simulation_entity::set_entity_index(long);
// public: void c_aim_target_simulation_entity::set_laser_designation(long);
// public: bool c_aim_target_simulation_entity::prepare_for_gameworld(void);
// public: void c_aim_target_simulation_entity::rotate_entity_index(void);
// public: bool c_aim_target_simulation_entity::setup(class c_aim_target_object *) const;
// public: void c_aim_target_simulation_entity::encode(class c_bitstream *, bool) const;
// public: void c_aim_target_simulation_entity::decode(class c_bitstream *, bool);
// void aim_target_find_hud_aim_target(class c_aim_target_object const *, class c_aim_target_object *);
// public: c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_aim_target_base::e_aim_target_type);
// public: enum c_aim_target_base::e_aim_target_type c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_aim_target_base::e_aim_target_type(void) const;
// public: bool c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum c_aim_target_base::e_aim_target_type) const;
// public: void c_bitstream::write_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum c_aim_target_base::e_aim_target_type c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);

//protected: c_aim_target_base::c_aim_target_base(void)
//{
//    mangled_ppc("??0c_aim_target_base@@IAA@XZ");
//};

//public: bool c_aim_target_base::is_object(void) const
//{
//    mangled_ppc("?is_object@c_aim_target_base@@QBA_NXZ");
//};

//public: bool c_aim_target_base::is_laser_designation(void) const
//{
//    mangled_ppc("?is_laser_designation@c_aim_target_base@@QBA_NXZ");
//};

//public: bool c_aim_target_base::has_model(void) const
//{
//    mangled_ppc("?has_model@c_aim_target_base@@QBA_NXZ");
//};

//public: long c_aim_target_base::get_object_model(void) const
//{
//    mangled_ppc("?get_object_model@c_aim_target_base@@QBAJXZ");
//};

//public: void c_aim_target_base::set_object_model(long)
//{
//    mangled_ppc("?set_object_model@c_aim_target_base@@QAAXJ@Z");
//};

//public: c_aim_target_object::c_aim_target_object(void)
//{
//    mangled_ppc("??0c_aim_target_object@@QAA@XZ");
//};

//public: void c_aim_target_object::reset(void)
//{
//    mangled_ppc("?reset@c_aim_target_object@@QAAXXZ");
//};

//public: bool c_aim_target_object::is_valid_for_encoding(void) const
//{
//    mangled_ppc("?is_valid_for_encoding@c_aim_target_object@@QBA_NXZ");
//};

//private: long c_aim_target_object::get(enum c_aim_target_base::e_aim_target_type) const
//{
//    mangled_ppc("?get@c_aim_target_object@@ABAJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: long c_aim_target_object::get_object_index(void) const
//{
//    mangled_ppc("?get_object_index@c_aim_target_object@@QBAJXZ");
//};

//public: long c_aim_target_object::get_laser_designation(void) const
//{
//    mangled_ppc("?get_laser_designation@c_aim_target_object@@QBAJXZ");
//};

//public: bool c_aim_target_object::equals(long) const
//{
//    mangled_ppc("?equals@c_aim_target_object@@QBA_NJ@Z");
//};

//public: bool c_aim_target_object::equals(class c_aim_target_object const *) const
//{
//    mangled_ppc("?equals@c_aim_target_object@@QBA_NPBV1@@Z");
//};

//private: void c_aim_target_object::set(long, enum c_aim_target_base::e_aim_target_type)
//{
//    mangled_ppc("?set@c_aim_target_object@@AAAXJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: void c_aim_target_object::set_object_index(long)
//{
//    mangled_ppc("?set_object_index@c_aim_target_object@@QAAXJ@Z");
//};

//public: void c_aim_target_object::set_laser_designation(long)
//{
//    mangled_ppc("?set_laser_designation@c_aim_target_object@@QAAXJ@Z");
//};

//public: bool c_aim_target_object::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_aim_target_object@@QBA_NXZ");
//};

//public: bool c_aim_target_object::is_trackable(void) const
//{
//    mangled_ppc("?is_trackable@c_aim_target_object@@QBA_NXZ");
//};

//public: struct s_model_target const * c_aim_target_object::get_model_target(void) const
//{
//    mangled_ppc("?get_model_target@c_aim_target_object@@QBAPBUs_model_target@@XZ");
//};

//public: void c_aim_target_object::get_target_point(union real_point3d *) const
//{
//    mangled_ppc("?get_target_point@c_aim_target_object@@QBAXPATreal_point3d@@@Z");
//};

//public: void c_aim_target_object::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_aim_target_object@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_aim_target_object::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_aim_target_object@@QAA_NPAVc_bitstream@@@Z");
//};

//public: bool c_aim_target_object::setup(class c_aim_target_predicted *) const
//{
//    mangled_ppc("?setup@c_aim_target_object@@QBA_NPAVc_aim_target_predicted@@@Z");
//};

//public: bool c_aim_target_object::setup(class c_aim_target_simulation_entity *) const
//{
//    mangled_ppc("?setup@c_aim_target_object@@QBA_NPAVc_aim_target_simulation_entity@@@Z");
//};

//public: char const * c_aim_target_object::object_describe(void) const
//{
//    mangled_ppc("?object_describe@c_aim_target_object@@QBAPBDXZ");
//};

//public: c_aim_target_predicted::c_aim_target_predicted(void)
//{
//    mangled_ppc("??0c_aim_target_predicted@@QAA@XZ");
//};

//public: void c_aim_target_predicted::reset(void)
//{
//    mangled_ppc("?reset@c_aim_target_predicted@@QAAXXZ");
//};

//public: bool c_aim_target_predicted::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_aim_target_predicted@@QBA_NXZ");
//};

//private: long c_aim_target_predicted::get(enum c_aim_target_base::e_aim_target_type) const
//{
//    mangled_ppc("?get@c_aim_target_predicted@@ABAJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: long c_aim_target_predicted::get_entity_index(void) const
//{
//    mangled_ppc("?get_entity_index@c_aim_target_predicted@@QBAJXZ");
//};

//public: long c_aim_target_predicted::get_laser_designation(void) const
//{
//    mangled_ppc("?get_laser_designation@c_aim_target_predicted@@QBAJXZ");
//};

//private: void c_aim_target_predicted::set(long, enum c_aim_target_base::e_aim_target_type)
//{
//    mangled_ppc("?set@c_aim_target_predicted@@AAAXJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: void c_aim_target_predicted::set_entity_index(long)
//{
//    mangled_ppc("?set_entity_index@c_aim_target_predicted@@QAAXJ@Z");
//};

//public: void c_aim_target_predicted::set_laser_designation(long)
//{
//    mangled_ppc("?set_laser_designation@c_aim_target_predicted@@QAAXJ@Z");
//};

//public: void c_aim_target_predicted::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_aim_target_predicted@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_aim_target_predicted::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_aim_target_predicted@@QAA_NPAVc_bitstream@@@Z");
//};

//public: bool c_aim_target_predicted::setup(class c_aim_target_object *) const
//{
//    mangled_ppc("?setup@c_aim_target_predicted@@QBA_NPAVc_aim_target_object@@@Z");
//};

//public: c_aim_target_simulation_entity::c_aim_target_simulation_entity(void)
//{
//    mangled_ppc("??0c_aim_target_simulation_entity@@QAA@XZ");
//};

//public: bool c_aim_target_simulation_entity::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_aim_target_simulation_entity@@QBA_NXZ");
//};

//public: bool c_aim_target_simulation_entity::is_active(struct s_simulation_view_telemetry_data const *) const
//{
//    mangled_ppc("?is_active@c_aim_target_simulation_entity@@QBA_NPBUs_simulation_view_telemetry_data@@@Z");
//};

//public: void c_aim_target_simulation_entity::reset(void)
//{
//    mangled_ppc("?reset@c_aim_target_simulation_entity@@QAAXXZ");
//};

//private: long c_aim_target_simulation_entity::get(enum c_aim_target_base::e_aim_target_type) const
//{
//    mangled_ppc("?get@c_aim_target_simulation_entity@@ABAJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: long c_aim_target_simulation_entity::get_entity_index(void) const
//{
//    mangled_ppc("?get_entity_index@c_aim_target_simulation_entity@@QBAJXZ");
//};

//public: long c_aim_target_simulation_entity::get_laser_designation(void) const
//{
//    mangled_ppc("?get_laser_designation@c_aim_target_simulation_entity@@QBAJXZ");
//};

//private: void c_aim_target_simulation_entity::set(long, enum c_aim_target_base::e_aim_target_type)
//{
//    mangled_ppc("?set@c_aim_target_simulation_entity@@AAAXJW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: void c_aim_target_simulation_entity::set_entity_index(long)
//{
//    mangled_ppc("?set_entity_index@c_aim_target_simulation_entity@@QAAXJ@Z");
//};

//public: void c_aim_target_simulation_entity::set_laser_designation(long)
//{
//    mangled_ppc("?set_laser_designation@c_aim_target_simulation_entity@@QAAXJ@Z");
//};

//public: bool c_aim_target_simulation_entity::prepare_for_gameworld(void)
//{
//    mangled_ppc("?prepare_for_gameworld@c_aim_target_simulation_entity@@QAA_NXZ");
//};

//public: void c_aim_target_simulation_entity::rotate_entity_index(void)
//{
//    mangled_ppc("?rotate_entity_index@c_aim_target_simulation_entity@@QAAXXZ");
//};

//public: bool c_aim_target_simulation_entity::setup(class c_aim_target_object *) const
//{
//    mangled_ppc("?setup@c_aim_target_simulation_entity@@QBA_NPAVc_aim_target_object@@@Z");
//};

//public: void c_aim_target_simulation_entity::encode(class c_bitstream *, bool) const
//{
//    mangled_ppc("?encode@c_aim_target_simulation_entity@@QBAXPAVc_bitstream@@_N@Z");
//};

//public: void c_aim_target_simulation_entity::decode(class c_bitstream *, bool)
//{
//    mangled_ppc("?decode@c_aim_target_simulation_entity@@QAAXPAVc_bitstream@@_N@Z");
//};

//void aim_target_find_hud_aim_target(class c_aim_target_object const *, class c_aim_target_object *)
//{
//    mangled_ppc("?aim_target_find_hud_aim_target@@YAXPBVc_aim_target_object@@PAV1@@Z");
//};

//public: c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(enum c_aim_target_base::e_aim_target_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: enum c_aim_target_base::e_aim_target_type c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_aim_target_base::e_aim_target_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_aim_target_type@c_aim_target_base@@XZ");
//};

//public: bool c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum c_aim_target_base::e_aim_target_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_aim_target_type@c_aim_target_base@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum c_aim_target_base::e_aim_target_type c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_aim_target_type@c_aim_target_base@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum c_aim_target_base::e_aim_target_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_aim_target_type@c_aim_target_base@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

