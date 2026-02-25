// C++ code
//
void setup()
{
    pinMode(12, OUTPUT);
    pinMode(2, INPUT);
}

void loop()
{
    if (digitalRead(2) == HIGH)
    {
        digitalWrite(12, LOW);
    }
    else
    {
        digitalWrite(12, HIGH);
    }
}