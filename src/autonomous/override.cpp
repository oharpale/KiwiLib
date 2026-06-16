#include "autonomous/autonomous.hpp"
#include "lemlib/chassis/chassis.hpp"

void override() {
    // beginning turn
    // intakeState = 1;

    chassis.setPose(1, -1, 90);
    chassis.distanceReset('R', 'F');

    // get the first pin
    chassis.moveToPoint(94, -64, 1000, {.minSpeed = 100, .earlyExitRange= 0.5});
    chassis.moveToPoint(103, -52, 1000, {.minSpeed = 70, .earlyExitRange= 0.5});

    // turn to the next pin and get it
    chassis.turnToHeading(-42, 1000);
    chassis.moveToPoint(90, -28, 1000, {.minSpeed = 70, .earlyExitRange= 0.5});

    //go to the quart
    chassis.turnToHeading(-97, 1000);
    chassis.moveDistance(20, 1500, {.minSpeed = 85, .earlyExitRange= 2});
    chassis.moveDistance(22.5, 1500, {.maxSpeed = 80, .minSpeed = 50, .earlyExitRange= 1});

    chassis.moveDistance(7, 1000, {.earlyExitRange= 0.5});
    chassis.moveDistance(-10, 1000, {.forwards = false, .earlyExitRange=1.0});

    // wait a bit to calibrate
    // pros::delay(350);
    chassis.moveToPoint(12, -7, 1500);
    chassis.turnToHeading(0, 1000);

    // reset distance sensor 
    chassis.distanceReset('L','B');

    // get pin near wall
    chassis.turnToHeading(-18.5,1000, {.earlyExitRange= 0.5});
    chassis.moveDistance(23, 1000, {.minSpeed = 12.5, .earlyExitRange= 0.5});
    chassis.turnToHeading(26, 500,{.earlyExitRange= 0.25});

    // align to diagonal
    chassis.moveDistance(29,1000, {.minSpeed = 12.5, .earlyExitRange= 0.5});
    chassis.turnToHeading(135, 1000, {.earlyExitRange= 0.5});

    // get first pin, then second
    chassis.moveDistance(28, 1000, {.minSpeed = 80, .earlyExitRange= 1});
    chassis.moveDistance(32, 1000, {.earlyExitRange= 1});
}