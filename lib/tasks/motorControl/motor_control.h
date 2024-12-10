#ifndef MOTOR_TASKS_H
#define MOTOR_TASKS_H

#include "../../lib/modules/drv8833/motor_driver.h"

void setupMotorDriver(MotorDriver& motor);
void executeMotorTasks(MotorDriver& motor);

#endif
