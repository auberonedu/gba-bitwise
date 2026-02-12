#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    int num = 29;
    BN_LOG(to_string_base(num, 2));

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color());

    while(true) {
        bn::core::update();
    }
}