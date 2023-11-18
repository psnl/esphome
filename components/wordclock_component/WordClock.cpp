#include "WordClock.h"

void WordClock::Setup() {
    ledStrip = new NeoPixelBus<NeoGrbwFeature, NeoEsp32Rmt0Sk6812Method>(156, 48);
    ledStrip->Begin();
    ledStrip->ClearTo(RgbwColor(0,0,0,0));
    ledStrip->Show();

}

void WordClock::Loop() {
  ledStrip->ClearTo(RgbwColor(0,0,0,0));
  ledStrip->SetPixelColor(rand()%156, RgbwColor(0,0,0,63));
  ledStrip->Show();
  delay(100);
}

