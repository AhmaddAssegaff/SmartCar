#include "motor_driver.h"

MotorDriver::MotorDriver(uint8_t ain1, uint8_t ain2, uint8_t bin1, uint8_t bin2) {
    _ain1 = ain1;
    _ain2 = ain2;
    _bin1 = bin1;
    _bin2 = bin2;

    pinMode(_ain1, OUTPUT);
    pinMode(_ain2, OUTPUT);
    pinMode(_bin1, OUTPUT);
    pinMode(_bin2, OUTPUT);
}

void MotorDriver::moveForward(uint8_t speed) {
    analogWrite(_ain1, speed);
    analogWrite(_ain2, 0);
    analogWrite(_bin1, speed);
    analogWrite(_bin2, 0);
}

void MotorDriver::moveBackward(uint8_t speed) {
    analogWrite(_ain1, 0);
    analogWrite(_ain2, speed);
    analogWrite(_bin1, 0);
    analogWrite(_bin2, speed);
}

void MotorDriver::stopMotors() {
    analogWrite(_ain1, 0);
    analogWrite(_ain2, 0);
    analogWrite(_bin1, 0);
    analogWrite(_bin2, 0);
}
