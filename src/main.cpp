#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main()
{
    bn::core::init();

    int bin_num = 0b101101;
    int mask = 0b101011;
    int anded = bin_num & mask;
    int ored = bin_num | mask;

    // 15 bit colors represented in 5 bits for each color (Blue, Green, Red)
    int color = 0b0'00011'00011'01001;
    int blue = 6 << 10;  // moves the blue component to the correct position
    int green = 15 << 5; // moves the green component to the correct position
    int red = 20;        // moves the red component to the correct position

    color = blue | green | red;

    BN_LOG(to_string_base(ored, 2));
    BN_LOG(to_string_base(anded, 2));
    BN_LOG(bin_num);
    BN_LOG("Hey!");
    BN_LOG(to_string_base(blue, 2));
    BN_LOG(to_string_base(green, 2));
    BN_LOG(to_string_base(red, 2));

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}