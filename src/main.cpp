#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>

int main() {
    bn::core::init();

    bn::backdrop::set_color(bn::color(20, 0, 20));

    //personal placement (a bug like smiley face)
    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-20, -10);

    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(20, -10);

    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(15, 30);

    //  bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(0, 45);

    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(10, 40);

    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-15, 30);

    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(-10, 40);
   
    //Manual placement in a line
    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
    // bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);

    bn::vector<bn::sprite_ptr, 10> circles = {};

    for (int x = -40; x <= 40; x += 15) {
        BN_LOG("x value: ", x);
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
        circles.push_back(myCircle);
    }
    circles[0].set_scale(1.8);
    circles[1].set_scale(0.5);
    circles[2].set_scale(2.0);
    circles[3].set_scale(0.01);
    circles[4].set_scale(2);
    circles[4].set_horizontal_scale(0.5);
    circles[5].set_vertical_scale(1.1);
    circles[5].set_shear(0.2);
    

    //Vector with more than 32 items, when I ran it said no more affine sprites 
    // bn::vector<bn::sprite_ptr, 33> circles2 = {};
    // for (int i = 0; i < 33; ++i) {
    //     bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(i, -20);
    //     myCircle2.set_scale(0.5);
    //     circles2.push_back(myCircle2);
    // }

    //interstingly if scale values are "too much" the circles become squares / or rectangles

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

        //creative change for Sprite Transformation assignment if you press up or down the first sprite circle[0] will move up or down respectively
        if(bn::keypad::up_pressed()) {
            circles[0].set_y(circles[0].y() - bn::fixed(1.2));
        }
        if(bn::keypad::down_pressed()) {
            circles[0].set_y(circles[0].y() + bn::fixed(1.2));
        }
    }
}