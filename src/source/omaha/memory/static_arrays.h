#ifndef __STATIC_ARRAYS_H__
#define __STATIC_ARRAYS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct s_default_enum_string_resolver;

template<typename t_enum, typename t_storage, t_storage k_max, typename t_string_resolver = s_default_enum_string_resolver>
class c_flags_no_init
{
public:
    t_storage get_unsafe() const;
    void set_unsafe(t_storage value);
    t_storage todo;
    bool operator==(c_flags_no_init const & rsa) const;
    bool operator!=(c_flags_no_init const & rsa) const;

private:
	t_storage m_flags;
};

template<typename t_enum, typename t_storage, t_storage k_max, typename t_string_resolver = s_default_enum_string_resolver>
class c_flags :
    public c_flags_no_init<t_enum, t_storage, k_max, t_string_resolver>
{

};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

template<typename t_enum, typename t_storage, t_storage k_max, typename t_string_resolver>
bool c_flags_no_init<t_enum, t_storage, k_max, t_string_resolver>::operator==(c_flags_no_init const & rsa) const
{
    return m_flags == rsa.m_flags;
}

template<typename t_enum, typename t_storage, t_storage k_max, typename t_string_resolver>
bool c_flags_no_init<t_enum, t_storage, k_max, t_string_resolver>::operator!=(c_flags_no_init const & rsa) const
{
    return m_flags != rsa.m_flags;
}

#endif // __STATIC_ARRAYS_H__
