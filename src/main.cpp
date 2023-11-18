#include <Arduino.h>
#include <NeoPixelBus.h>
#include "WordClock.h"

WordClock wordClock;

void setup()  
{
    wordClock.Setup();
}

void loop()  
{
    wordClock.Loop();
}
