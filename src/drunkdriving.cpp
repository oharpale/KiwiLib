#include "main.h"
#include "autonomous/autonomous.hpp"
#include "drivecode/pistons.hpp"

void drunkDrivin() { 
    intakeState = 1;
    scraperState = 0;
    chassis.setPose(0, 0, 0);
    chassis.turnToHeading(-50,1000); //first we are turning to face the left, allowing us to prepare to curve around the first green block
    
    chassis.moveToPoint(-15,12,1000); // moves us forward so that the middle of the bot is around the green block
    chassis.swingToHeading(31, DriveSide::RIGHT, 1000); // swings a little to be a little more aligned with the blue block
    // chassis.turnToHeading(31, 1000);

    chassis.moveToPose(-10, 29, 70, 1000);
    chassis.swingToHeading(90, DriveSide::RIGHT, 1000);

    chassis.moveDistance(19, 1000);
    chassis.moveToPose(10, 29, 0, 1000);

    chassis.moveToPose(-12, 69.5, -60, 1200);
    scraperState = 1;
    chassis.moveToPose(-16, 69.5, -60, 1500);
}