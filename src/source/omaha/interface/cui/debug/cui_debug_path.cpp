/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool operator==(struct s_cui_debug_path const &, struct s_cui_debug_path const &);
// bool operator!=(struct s_cui_debug_path::s_element const &, struct s_cui_debug_path::s_element const &);
// bool operator==(struct s_cui_debug_path::s_element const &, struct s_cui_debug_path::s_element const &);
// public: bool c_cui_debug_path_scanner::get_next_token(struct c_cui_debug_path_token *);
// public: c_cui_debug_path_token::c_cui_debug_path_token(enum c_cui_debug_path_token::e_type);
// public: c_cui_debug_path_token::c_cui_debug_path_token(enum c_cui_debug_path_token::e_type, char const *, unsigned int);
// private: void c_cui_debug_path_scanner::consume(unsigned int);
// private: bool c_cui_debug_path_scanner::eat(char);
// private: bool c_cui_debug_path_scanner::match(char) const;
// public: bool c_cui_debug_path_parser::parse(void);
// private: bool c_cui_debug_path_parser::match(enum c_cui_debug_path_token::e_type);
// public: enum c_cui_debug_path_token::e_type c_cui_debug_path_token::get_type(void) const;
// private: bool c_cui_debug_path_parser::eat(enum c_cui_debug_path_token::e_type);
// private: bool c_cui_debug_path_parser::consume(void);
// public: c_cui_debug_path_token::c_cui_debug_path_token(void);
// private: bool c_cui_debug_path_parser::get_next_token(void);
// private: bool c_cui_debug_path_parser::parse_element(void);
// public: s_cui_debug_path::s_element::s_element(long);
// public: s_cui_debug_path::s_element::s_element(long, long);
// public: char const * c_cui_debug_path_token::get_text(void) const;
// public: unsigned int c_cui_debug_path_token::get_text_length(void) const;
// bool cui_debug_parse_path(char const *, struct s_cui_debug_path *);
// public: c_cui_debug_path_scanner::c_cui_debug_path_scanner(char const *, unsigned int);
// public: c_cui_debug_path_parser::c_cui_debug_path_parser(class c_cui_debug_path_scanner *, struct s_cui_debug_path *);
// class c_static_string<256> cui_debug_path_to_string(struct s_cui_debug_path const &);
// public: void s_static_string<128>::set_bounded(char const *, long);
// bool cui_static_vector_push_back<struct s_cui_debug_path::s_element, 8>(class c_cui_static_vector<struct s_cui_debug_path::s_element, 8> &, struct s_cui_debug_path::s_element const &);

//bool operator==(struct s_cui_debug_path const &, struct s_cui_debug_path const &)
//{
//    mangled_ppc("??8@YA_NABUs_cui_debug_path@@0@Z");
//};

//bool operator!=(struct s_cui_debug_path::s_element const &, struct s_cui_debug_path::s_element const &)
//{
//    mangled_ppc("??9@YA_NABUs_element@s_cui_debug_path@@0@Z");
//};

//bool operator==(struct s_cui_debug_path::s_element const &, struct s_cui_debug_path::s_element const &)
//{
//    mangled_ppc("??8@YA_NABUs_element@s_cui_debug_path@@0@Z");
//};

//public: bool c_cui_debug_path_scanner::get_next_token(struct c_cui_debug_path_token *)
//{
//    mangled_ppc("?get_next_token@c_cui_debug_path_scanner@@QAA_NPAUc_cui_debug_path_token@@@Z");
//};

//public: c_cui_debug_path_token::c_cui_debug_path_token(enum c_cui_debug_path_token::e_type)
//{
//    mangled_ppc("??0c_cui_debug_path_token@@QAA@W4e_type@0@@Z");
//};

//public: c_cui_debug_path_token::c_cui_debug_path_token(enum c_cui_debug_path_token::e_type, char const *, unsigned int)
//{
//    mangled_ppc("??0c_cui_debug_path_token@@QAA@W4e_type@0@PBDI@Z");
//};

//private: void c_cui_debug_path_scanner::consume(unsigned int)
//{
//    mangled_ppc("?consume@c_cui_debug_path_scanner@@AAAXI@Z");
//};

//private: bool c_cui_debug_path_scanner::eat(char)
//{
//    mangled_ppc("?eat@c_cui_debug_path_scanner@@AAA_ND@Z");
//};

//private: bool c_cui_debug_path_scanner::match(char) const
//{
//    mangled_ppc("?match@c_cui_debug_path_scanner@@ABA_ND@Z");
//};

//public: bool c_cui_debug_path_parser::parse(void)
//{
//    mangled_ppc("?parse@c_cui_debug_path_parser@@QAA_NXZ");
//};

//private: bool c_cui_debug_path_parser::match(enum c_cui_debug_path_token::e_type)
//{
//    mangled_ppc("?match@c_cui_debug_path_parser@@AAA_NW4e_type@c_cui_debug_path_token@@@Z");
//};

//public: enum c_cui_debug_path_token::e_type c_cui_debug_path_token::get_type(void) const
//{
//    mangled_ppc("?get_type@c_cui_debug_path_token@@QBA?AW4e_type@1@XZ");
//};

//private: bool c_cui_debug_path_parser::eat(enum c_cui_debug_path_token::e_type)
//{
//    mangled_ppc("?eat@c_cui_debug_path_parser@@AAA_NW4e_type@c_cui_debug_path_token@@@Z");
//};

//private: bool c_cui_debug_path_parser::consume(void)
//{
//    mangled_ppc("?consume@c_cui_debug_path_parser@@AAA_NXZ");
//};

//public: c_cui_debug_path_token::c_cui_debug_path_token(void)
//{
//    mangled_ppc("??0c_cui_debug_path_token@@QAA@XZ");
//};

//private: bool c_cui_debug_path_parser::get_next_token(void)
//{
//    mangled_ppc("?get_next_token@c_cui_debug_path_parser@@AAA_NXZ");
//};

//private: bool c_cui_debug_path_parser::parse_element(void)
//{
//    mangled_ppc("?parse_element@c_cui_debug_path_parser@@AAA_NXZ");
//};

//public: s_cui_debug_path::s_element::s_element(long)
//{
//    mangled_ppc("??0s_element@s_cui_debug_path@@QAA@J@Z");
//};

//public: s_cui_debug_path::s_element::s_element(long, long)
//{
//    mangled_ppc("??0s_element@s_cui_debug_path@@QAA@JJ@Z");
//};

//public: char const * c_cui_debug_path_token::get_text(void) const
//{
//    mangled_ppc("?get_text@c_cui_debug_path_token@@QBAPBDXZ");
//};

//public: unsigned int c_cui_debug_path_token::get_text_length(void) const
//{
//    mangled_ppc("?get_text_length@c_cui_debug_path_token@@QBAIXZ");
//};

//bool cui_debug_parse_path(char const *, struct s_cui_debug_path *)
//{
//    mangled_ppc("?cui_debug_parse_path@@YA_NPBDPAUs_cui_debug_path@@@Z");
//};

//public: c_cui_debug_path_scanner::c_cui_debug_path_scanner(char const *, unsigned int)
//{
//    mangled_ppc("??0c_cui_debug_path_scanner@@QAA@PBDI@Z");
//};

//public: c_cui_debug_path_parser::c_cui_debug_path_parser(class c_cui_debug_path_scanner *, struct s_cui_debug_path *)
//{
//    mangled_ppc("??0c_cui_debug_path_parser@@QAA@PAVc_cui_debug_path_scanner@@PAUs_cui_debug_path@@@Z");
//};

//class c_static_string<256> cui_debug_path_to_string(struct s_cui_debug_path const &)
//{
//    mangled_ppc("?cui_debug_path_to_string@@YA?AV?$c_static_string@$0BAA@@@ABUs_cui_debug_path@@@Z");
//};

//public: void s_static_string<128>::set_bounded(char const *, long)
//{
//    mangled_ppc("?set_bounded@?$s_static_string@$0IA@@@QAAXPBDJ@Z");
//};

//bool cui_static_vector_push_back<struct s_cui_debug_path::s_element, 8>(class c_cui_static_vector<struct s_cui_debug_path::s_element, 8> &, struct s_cui_debug_path::s_element const &)
//{
//    mangled_ppc("??$cui_static_vector_push_back@Us_element@s_cui_debug_path@@$07@@YA_NAAV?$c_cui_static_vector@Us_element@s_cui_debug_path@@$07@@ABUs_element@s_cui_debug_path@@@Z");
//};

