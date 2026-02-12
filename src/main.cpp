#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    int bin_num = 0b10101011110001;
    int mask =    0b01110001001010;

    int and_num = bin_num & mask;
    int or_num = bin_num | mask;

    BN_LOG(to_string_base(and_num, 2));
    BN_LOG(to_string_base(or_num, 2));
    //int num = 29;
    //BN_LOG(bin_num);
    //BN_LOG(to_string_base(num, 2));

    BN_LOG("Hey!");

    int color = 0; //0b0'00011'00110'01001;
    int blue = 6 << 10;
    int green = 15 << 5;
    int red = 20;

    color = blue | green | red;

    BN_LOG(to_string_base(blue, 2));
    BN_LOG(to_string_base(green, 2));
    BN_LOG(to_string_base(red, 2));

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}