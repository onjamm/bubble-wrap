#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>

int main() {
    bn::core::init();

    bn::backdrop::set_color(bn::color(20, 0, 20));

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-20, -10);

    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(20, -10);

    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(15, 30);

    //  bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(0, 45);

    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(10, 40);

    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-15, 30);

    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(-10, 40);
   
    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
    bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
    bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
    bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
    bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
    bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
    bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
    bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);

    while(true) {
        bn::core::update();

        if (bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(31, 21, 22));
    }

        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(0, 0, 30));
        }

        if(bn::keypad::a_pressed() & bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(20, 0, 20));
        } 
    }
}