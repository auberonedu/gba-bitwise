#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main()
{
    bn::core::init();

    int bin_num = 0b1010010;
    int mask = 0b10101101;

    // int num = 86;

    // int anded = bin_num & mask;
    // int ored = bin_num | mask;

    // BN_LOG(to_string_base(ored, 2));
    // BN_LOG(to_string_base(anded, 2));

    // BN_LOG(bin_num);
    // BN_LOG(to_string_base(num, 2));

    // Like the sout in java
    BN_LOG("Hey!");

    int color = 0; // 0b0'00000'00000'11111;
    int blue = 6 << 10;
    int green = 15 << 5;
    int red = 20;

    color = blue | green | red;
    bn::backdrop::set_color(bn::color(color));

    BN_LOG(to_string_base(blue, 2));
    BN_LOG(to_string_base(green, 2));
    BN_LOG(to_string_base(red, 2));

    while (true)
    {
        bn::core::update();
    }
}