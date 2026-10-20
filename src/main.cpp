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

    int number = 7;
    int other_number = 0b10110;

    int mask = 0b00010;

    int result = other_number & mask;

    BN_LOG(to_string_base(result, 2));

    if (result == 1)
    {
        // Other number has a 1 at position 1
        BN_LOG("Has a 1 at position 1");
    }
    else
    {
        // Other number has 0 at position 1
    };

    // BN_LOG(to_string_base(number, 2));

    // if (number == other_number) {
    //     BN_LOG("equal");
    // } else {
    //     BN_LOG("not-equal");
    // };

    // BN_LOG("Hey!");

    int blue = 6;   // 00110
    int green = 15; // 01111
    int red = 20;

    // 0 bbbbbgggggrrrrr
    int blue_bits = blue << 10;  // Shift blue's bits over to the left by ten places
    int green_bits = green << 5; // Shift green's bits over to the left by ten places
    int red_bits = red << 0;     // Shift red's bis by 0.

    int color = blue_bits | green_bits | red_bits;

    bn::backdrop::set_color(bn::color(color));

    while (true)
    {
        bn::core::update();
    }
}