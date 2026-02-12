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
    // int anded = bin_num & mask;
    int ored = bin_num | mask;

    // int num = 86;

    BN_LOG(to_string_base(ored, 2));
    BN_LOG(bin_num);
    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color());

    while (true)
    {
        bn::core::update();
    }
}