#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>

#include "base_conv.h"

#include "bn_sprite_items_face.h"

int main() {
    bn::core::init();

    bn::sprite_ptr face = bn::sprite_items::face.create_sprite();

    int blue = 6; // 0b 00110
    int green = 15; // 0b 01111
    int red = 20; // // 0b 10100
    // 0b bbbbbgggggrrrrr
    int blue_bits = blue << 10;  // 001100000000000
    int green_bits = green << 5; // 000000111100000
    int red_bits = red;          // 000000000010000

    int color = blue_bits | green_bits | red_bits;

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}