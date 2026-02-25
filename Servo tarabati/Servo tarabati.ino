// C++ code
//
#include <Servo.h>
int pinServo = 10;
Servo servo;

int start_angle = 45;
int end_angle = 135;

void setup()
{
    servo.attach(pinServo);
    pinMode(13, OUTPUT);
}

void loop()
{
    for (int pos = start_angle; pos < end_angle; pos++)
    {
        servo.write(pos);
        digitalWrite(3, LOW);
        digitalWrite(13, HIGH);

        delay(20);
    }

    delay(500);
    for (int pos = end_angle; pos >= start_angle; pos--)
    {
        servo.write(pos);
        digitalWrite(13, LOW);
        digitalWrite(3, HIGH);
        delay(20);
    }
}