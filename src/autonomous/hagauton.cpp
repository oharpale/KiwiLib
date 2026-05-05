#include "main.h"
#include "autonomous/autonomous.hpp"

void challenge() {
    chassis.turnToHeading(-90, 500);
    chassis.moveToPoint(-24, 24, 1000);
    intakeState = 1;
    chassis.turnToHeading(90, 500);
    chassis.moveToPoint(2.5,26.5,1000,{.maxSpeed=100,.earlyExitRange=10});
    chassis.moveToPoint(2.5,26.5,1000,{.maxSpeed=80});
    chassis.turnToHeading(0,500);
    chassis.moveToPoint(-8,68,3000,{.maxSpeed=0});

}