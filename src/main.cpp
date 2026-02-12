#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main()
{
    bn::core::init();

    int bin_num = 0b10100010;
    int mask = 0b00001111;

    int anded = bin_num & mask;
    int ored = bin_num | mask;

    BN_LOG(to_string_base(anded, 2));
    BN_LOG(to_string_base(ored, 2));

    BN_LOG("Hey!");

    int color = 0;
    int blue = 6 << 10;
    int green = 15 << 5;
    int red = 20;
    //  0b0'00000'000000'00000'11111;

    color = blue | green | red;

    BN_LOG(to_string_base(blue, 2));
    BN_LOG(to_string_base(green, 2));
    BN_LOG(to_string_base(red, 2));

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}