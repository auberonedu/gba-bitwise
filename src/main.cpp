#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

   int bin_num = 0101010;
   int mask = 173;//0010101101;
   int anded = bin_num & mask;
   int ored = bin_num | mask;
   int blue = 6 << 10;
   int green = 15<< 5;
   int red = 20 ;
   BN_LOG(to_string_base(blue, 2));
   BN_LOG(to_string_base(green, 2));
   BN_LOG(to_string_base(red, 2));
   //BN_LOG(to_string_base(anded, 2));
    //BN_LOG(to_string_base(ored, 2));
    //BN_LOG(bin_num);
    //BN_LOG(to_string_base(num, 2));
    //BN_LOG("Hey!");
    int color = blue | green | red;
    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}