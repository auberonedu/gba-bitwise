#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    int bin_num = 0b100010;
    int mask =    0b011100;

    int anded = bin_num & mask;
    int ored = bin_num | mask;

    BN_LOG(to_string_base(anded, 2));
    BN_LOG(to_string_base(ored, 2));

    // int num = 86;


   // BN_LOG(to_string_base(num, 2));

    BN_LOG("Hey!");
                //  blue  green  red
    int color = 0;// 0b1'00011'00011'00111;
    int blue = 6 << 10;
    int green = 15 << 5;
    int red = 20;

    BN_LOG(to_string_base(blue, 2));
    BN_LOG(to_string_base(green, 2));
    BN_LOG(to_string_base(red, 2));

    color = blue | green | red;

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}