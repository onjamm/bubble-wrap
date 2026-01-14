#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();

    bn::backdrop::set_color(bn::color(20, 0, 20));

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