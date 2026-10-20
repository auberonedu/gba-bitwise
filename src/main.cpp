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



    // int number = 7;
    // int other_number = 0b10110; //7 expressed in binary
    // int mask = 0b00010;

    // int result = other_number & mask;
    // result = result >> 1;

    // if(result == 1) {
    //     //other number has a 1 at position 1
    //     BN_LOG("Has a 1 at position 1");
    // } else {
    //     BN_LOG("Has a 0 at position 1");
    //     //other number has a 0 at position 1
    // }

    //take a number and convert to binary(base 2)
    // BN_LOG(to_string_base(result, 2));

    // if(number == other_number) {
    //     BN_LOG("equal");
    // } else {
    //     BN_LOG("not equal");
    // }

    int blue = 6; // 0b110 //00110
    int green = 15; //0b1111 //01111
    int red = 20; //0 //10100

    // 0 bbbbbgggggrrrrr
    int blue_bits = blue << 10;    // 00110 00000 00000
    int green_bits = green << 5;   // 00000 01111 00000
    int red_bits = red;            // 00000 00000 10100

    //addition also works here
    int color = blue_bits | green_bits | red_bits;
    

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}