#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    int bin_num = 0b101'0010;
    int mask =    0b1101010;
    int anded = bin_num & mask;
    int ored = bin_num | mask;

    BN_LOG(to_string_base(anded, 2));
    BN_LOG(to_string_base(ored, 2));

    // BN_LOG(to_string_base(num, 2));

    int color = 0; // b0'00000'00000'11111;
    int blue = 6 << 10;
    int green = 15 << 5;
    int red = 20;

    color = blue | green | red;

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}