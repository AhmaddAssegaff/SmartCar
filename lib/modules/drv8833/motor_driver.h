#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

#include <Arduino.h>

class MotorDriver {
public:
    MotorDriver(uint8_t ain1, uint8_t ain2, uint8_t bin1, uint8_t bin2);
    
    void moveForward(uint8_t speed);
    void moveBackward(uint8_t speed);
    void stopMotors();

private:
    int _ain1, _ain2, _bin1, _bin2;
};

#endif
