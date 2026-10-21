#include <charconv>
#include <bn_string.h>
#include <bn_assert.h>

#ifndef BASE_CONV
#define BASE_CONV


bn::string<32> to_string_base(int value, int base);

#endif