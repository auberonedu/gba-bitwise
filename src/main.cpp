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

    // int number = 7;
    // int otherNumber = 0b10110;
    // int mask = 0b00010;

    // int result = otherNumber & mask;

    // BN_LOG(to_string_base(result, 2));

    int blue = 6; // 0b00110
    int green = 15;
    int red = 20;

    // o bbbbbgggggrrrrr

    // multiple solutions!
    //  int color = (blue << 10) + (green << 5) + red;
    int color = (blue << 10) | (green << 5) | red;
    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}