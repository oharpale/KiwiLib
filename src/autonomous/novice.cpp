#include "autonomous/autonomous.hpp"

void novice() {
    
    chassis.moveDistance(16, 1000);
    intakeState=1;
    chassis.moveToPoint(34,41.35,2000);
    chassis.turnToHeading(180,1000);
    chassis.moveDistance(30,1000);
    
    // chassis.moveToPose(30,16,-90,1000,{.forwards = false});
    // chassis.moveDistance(15,1000);
    // chassis.turnToHeading(90,1000);
    // intakeState = 1; // starting the intake
    // chassis.moveDistance(36,1000);
    // chassis.turnToHeading(180,1000);
    // chassis.moveDistance(25, 1000);
    // chassis.moveToPoint(11, -36, 1000);
    // pros::delay(400);
    // intakeState = 0;
    // chassis.turnToHeading(90,1000);
    // chassis.moveToPose()
}