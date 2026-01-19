#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\core\\corelib\\cseries\\cseries_memory.cpp"
/* ---------- headers */

#include "core\corelib\cseries\cseries_memory.h"
#include "core\corelib\cseries\cseries_asserts.h"

#include "decomp.h"
#include <xtl.h>

/* ---------- constants */

const size_t k_maximum_memcmp_size = 0x20000000;
const size_t k_maximum_memcpy_size = 0x20000000;
const size_t k_maximum_memmove_size = 0x20000000;
const size_t k_maximum_memset_size = 0x20000000;

/* ---------- definitions */

struct s_memcmp_context
{
    unsigned char const* position;
    size_t remaining;
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

bool memory_is_filled_with(void const * source, size_t size, unsigned char c)
{
    mangled_ppc("?memory_is_filled_with@@YA_NPBXIE@Z");

    unsigned char const* VAR_PREFIX(1, position) = reinterpret_cast<unsigned char const*>(source);
    size_t VAR_PREFIX(0, remaining_size) = size;

    while(VAR_PREFIX(0, remaining_size) && *VAR_PREFIX(1, position) == c)
    {
        VAR_PREFIX(1, position)++;
        VAR_PREFIX(0, remaining_size)--;
    }
    return VAR_PREFIX(0, remaining_size) == 0;
};

bool memory_is_zeroed(const void* source, size_t size)
{
    mangled_ppc("?memory_is_zeroed@@YA_NPBXI@Z");

    unsigned char const* VAR_PREFIX(1, position) = reinterpret_cast<unsigned char const*>(source);
    size_t VAR_PREFIX(0, remaining_size) = size;
    
    bool result = true;
    while(result && VAR_PREFIX(0, remaining_size) >= sizeof(unsigned long long))
    {
        if(*reinterpret_cast<unsigned long long const*>(VAR_PREFIX(1, position)))
        {
            result = false;
            break;
        }
        VAR_PREFIX(1, position) += sizeof(unsigned long long);
        VAR_PREFIX(0, remaining_size) -= sizeof(unsigned long long);
    }

    if(result && VAR_PREFIX(0, remaining_size) >= sizeof(unsigned long))
    {
        if(*reinterpret_cast<unsigned long const*>(VAR_PREFIX(1, position)))
        {
            result = false;
        }
        VAR_PREFIX(1, position) += sizeof(unsigned long);
        VAR_PREFIX(0, remaining_size) -= sizeof(unsigned long);
    }

    while(result && VAR_PREFIX(0, remaining_size) > 0)
    {
        if(*VAR_PREFIX(1, position))
        {
            result = false;
            break;
        }
        VAR_PREFIX(1, position)++;
        VAR_PREFIX(0, remaining_size)--;
    }

    return result;
};

void* csmemcpy(void* destination, const void* source, size_t size)
{
    mangled_ppc("csmemcpy");
    
    assert_tag_debug_untracked_jul_11_2011(110, size==0 || (destination && source));
    assert_tag_debug_untracked_jul_11_2011(111, size>=0 && size<k_maximum_memcpy_size);
    assert_tag_debug_untracked_jul_11_2011(112, offset_pointer(source, size)<=destination || offset_pointer(destination, size)<=source);

    return memcpy(destination, source, size);
};

void* csmemmove(void* destination, const void* source, size_t size)
{
    mangled_ppc("csmemmove");
    
    assert_tag_debug_untracked_jul_11_2011(122, size==0 || (destination && source));
    assert_tag_debug_untracked_jul_11_2011(123, size>=0 && size<=k_maximum_memmove_size);

    return memmove(destination, source, size);
};

void memmove_guarded(void* destination, const void* source, size_t size, const void* bounds_start, size_t bounds_size)
{
    mangled_ppc("?memmove_guarded@@YAXPAXPBXI1I@Z");

    assert_tag_debug_untracked_jul_11_2011(135, size>=0 && size<=k_maximum_memmove_size);
    assert_tag_debug_untracked_jul_11_2011(136, bounds_size>=0); // $note this always evaluates to true because an unsigned value is always >= 0
    if (size > 0)
    {
        // $note Yes this is toxic. It was still a 32bit cast even in the 64bit build.

        unsigned long write_start = (unsigned long)(static_cast<char const*>(destination));
        unsigned long write_end = (unsigned long)(write_start + size - 1);
        unsigned long bounds_lower = (unsigned long)(static_cast<char const*>(bounds_start));
        unsigned long bounds_upper = (unsigned long)(bounds_lower + bounds_size - 1);

        assert_tag_debug_untracked_jul_11_2011(146, bounds_upper>=bounds_lower);
        assert_tag_debug_untracked_jul_11_2011(147, bounds_size>0);
        assert_tag_debug_untracked_jul_11_2011(148, write_start>=bounds_lower && write_start<=bounds_upper);
        assert_tag_debug_untracked_jul_11_2011(149, write_end>=bounds_lower && write_end<=bounds_upper);

        memmove(destination, source, size);
    }
};

void* csmemset(void* buffer, int c, size_t size)
{
    mangled_ppc("csmemset");
    
    assert_tag_debug_untracked_jul_11_2011(160, size==0 || buffer);
    assert_tag_debug_untracked_jul_11_2011(161, size>=0 && size<=k_maximum_memset_size);

    return memset(buffer, c, size);
};

int csmemcmp(const void* p1, const void* p2, size_t size)
{
    mangled_ppc("csmemcmp");
    
    assert_tag_debug_untracked_jul_11_2011(171, size==0 || (p1 && p2));
    assert_tag_debug_untracked_jul_11_2011(172, size>=0 && size<=k_maximum_memcmp_size);

    return memcmp(p1, p2, size);
};

void * memcpy_big_crossplatform_internal(void * destination, void const * source, size_t size)
{
    mangled_ppc("?memcpy_big_crossplatform_internal@@YAPAXPAXPBXI@Z");

    return XMemCpy(destination, source, size);
};

void * memset_big_crossplatform_internal(void * destination, int c, size_t size)
{
    mangled_ppc("?memset_big_crossplatform_internal@@YAPAXPAXHI@Z");

    return XMemSet(destination, c, size);
};

/* ---------- private code */

/* ---------- reverse engineering */
