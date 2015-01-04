#if ARDUINO >= 100
#include "Arduino.h"
#else
    #include "WProgram.h"
#endif

void setup()
{
    pinMode(9, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int lightness = analogRead(A1),
            threshold = analogRead(A0);
    bool tooDark = lightness < threshold;

    Serial.println(lightness);
    Serial.println(threshold);
    Serial.println(tooDark);

    digitalWrite(13, tooDark ? HIGH : LOW);
}