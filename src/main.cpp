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

    /*int number = 7;
    int other_number = 0b10110;
    int mask = 0b00010;

    int result = other_number & mask;

    if(result == 1){
        BN_LOG("has a 1 at position one");
    }else{
        BN_LOG("has a 0 at position one");
    }

    BN_LOG(to_string_base(result, 2));

    if(number == other_number){
        BN_LOG("equal");
    }else {
        BN_LOG("not equal");
    }

    BN_LOG("Hey!");*/

    int blue =6; //00110
    int green =15; //01111
    int red =20; //10100

    // 0 bbbbbgggggrrrrr
    int blue_bits = blue << 10; 
    int green_bits = green << 5;
    int red_bits = red;

    int color = blue_bits | green_bits | red_bits;

    bn::backdrop::set_color(bn::color(color));

    while(true) {
        bn::core::update();
    }
}