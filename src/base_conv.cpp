#include "base_conv.h"

bn::string<32> to_string_base(int value, int base) {
    char buffer[32];
    auto [pointer, error] = std::to_chars(buffer, buffer+32, value, base);
    BN_ASSERT(error == std::errc(), "Error converting base");
    return bn::string<32>(buffer, pointer - buffer);
}