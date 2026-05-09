#include "main.h"
#include "autonomous/autonomous.hpp"

void challenge() {
    chassis.turnToHeading(-90, 500);
    chassis.moveToPoint(-24, 24, 1000);
    intakeState = 1;
    chassis.turnToHeading(90, 500);
    chassis.moveToPoint(9,26.5,1000,{.maxSpeed=100,.earlyExitRange=10});
    chassis.moveToPoint(9,26.5,1000,{.maxSpeed=80});
    chassis.turnToHeading(0,1000);
    chassis.moveDistance(12, 1000);
    chassis.moveToPoint(-8,69,3000, {.maxSpeed=100}, true);
    chassis.waitUntil(11);
    scraperState = 1;
    chassis.waitUntilDone();
    
//wchassis.moveToPoint(-8,64,3000,{.maxSpeed=60});
}