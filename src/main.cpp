#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>

#include "base_conv.h"

#include "bn_sprite_items_face.h"

int main()
{
    bn::core::init();

    bn::sprite_ptr face = bn::sprite_items::face.create_sprite();

    int blue = 6;   // 0b00110
    int green = 15; // 0b01111
    int red = 20;   // 0b10100

    int blue_bits = blue << 10;
    int green_bits = green << 5;
    int red_bits = red;

    int color = blue_bits | green_bits | red_bits;

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}