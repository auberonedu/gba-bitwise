#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>
#include "base_conv.h"

int main()
{
    bn::core::init();

    // int num = 86;
    // int bin_num = 0b10100010;
    // int mask = 0b10101101;

    // int anded = bin_num | mask;

    // BN_LOG(to_string_base(anded, 2));

    int blue = 10;
    int green = 6;
    int red = 25;

    BN_LOG(to_string_base(blue << 1, 2));
    BN_LOG(to_string_base(green << 2, 2));
    BN_LOG(to_string_base(red, 2));

    int color = 0b11000'11000'00000;

    bn::backdrop::set_color(bn::color(color));
    int color2 = 0b00000'00000'11000;
    while (true)
    {
        if (bn::keypad::a_held())
        {

            bn::backdrop::set_color(bn::color(color2));
        }
        else if (bn::keypad::b_held())
        {
            bn::backdrop::set_color(bn::color(color2 | color));
        }
        else
        {
            bn::backdrop::set_color(bn::color(color));
        }
        bn::core::update();
    }
}