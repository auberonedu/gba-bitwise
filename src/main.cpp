#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main()
{
    bn::core::init();

    int bin_num = 0b10010100;
    int mask = 0b10110011;

    int anded = bin_num & mask;
    int ored = bin_num | mask;

    BN_LOG(to_string_base(anded, 2));
    BN_LOG(to_string_base(ored, 2));

    // int num = 86;

    // BN_LOG(to_string_base(num, 2));

    int color = 0; // 0b0'11111'11111'11111;
    int b = 8;
    int g = 21;
    int r = 17;
    int bgr = (b << 10) | (g << 5) | r;

    color = bgr;

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}