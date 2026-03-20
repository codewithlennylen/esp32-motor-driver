#include <Arduino.h>

int RPWM = 32;
int LPWM = 33;

void setup()
{
    pinMode(RPWM, OUTPUT);
    pinMode(LPWM, OUTPUT);
}

void loop()
{

        // forward
    analogWrite(RPWM, 0);
    analogWrite(LPWM, 255);
    delay(3000);

    // reverse
    analogWrite(LPWM, 0);
    analogWrite(RPWM, 255);
    delay(3000);

}