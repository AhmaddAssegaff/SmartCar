#include "./motor_control.h"

void setupMotorDriver(MotorDriver& motor) {
    // Setup logic for motor driver if needed
}

void executeMotorTasks(MotorDriver& motor) {
    motor.moveForward(150);
    delay(2000);

    motor.stopMotors();
    delay(1000);

    motor.moveBackward(150);
    delay(2000);

    motor.stopMotors();
    delay(1000);
}
