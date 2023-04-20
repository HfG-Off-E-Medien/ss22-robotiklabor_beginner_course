#include <Stepper.h>

// number of steps in one revolution of your motor
int steps =  2048;

// set the speed in rpm
int rpm = 4;

Stepper stepper(steps, 8, 10, 9, 11);

void setup()
{
}

void loop()
{
    stepper.setSpeed(rpm);
    stepper.step(steps);
    delay(1000);

    stepper.setSpeed(rpm);
    stepper.step(-steps);
}
