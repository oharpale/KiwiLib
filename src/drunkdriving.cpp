#include "main.h"
#include "autonomous/autonomous.hpp"

void drunkDrivin() { 
    chassis.setPose(0, 0, 0);
    chassis.turnToHeading(-50,250); //first we are turning to face the left, allowing us to prepare to curve around the first green block
    chassis.moveToPoint(-15,12,400); // moves us forward so that the middle of the bot is around the green block
    chassis.swingToHeading(31, DriveSide::RIGHT, 500); // swings a little to be a little more aligned with the blue block
    intakeState = 1;
    // chassis.moveToPose(-8,24,38.8,500);
    // chassis.moveToPose(-4,27.7,90,500);
    // chassis.setPose(0, 0, 0); // resets our position
    // chassis.moveDistance(15,100)÷; // moves forward, having the middle of the bot be aligned with the blue block
    // chassis.swingToHeading(30,DriveSide::RIGHT, 200); // moves to be aligned with the blue block
    // chassis.moveDistance(10,200); // intakes the blue block

    chassis.setPose(0, 0, 0);
    chassis.moveToPose(-5, 0, 0, 200);
    chassis.swingToHeading(90, DriveSide::RIGHT, 700);
}