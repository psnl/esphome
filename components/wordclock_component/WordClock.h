#include <NeoPixelBus.h>

class WordClock {
public:
  void Setup();
  void Loop();

private:
  NeoPixelBus<NeoGrbwFeature, NeoEsp32Rmt0Sk6812Method>* ledStrip;
};