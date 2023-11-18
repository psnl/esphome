#include "esphome/core/log.h"
#include "word_clock_component.h"
#include "WordClock.h"

namespace esphome {
namespace word_clock_component {

static const char *TAG = "word_clock_component.component";
static WordClock wordClock;

void WordClockComponent::setup() {
  wordClock.Setup();
}

void WordClockComponent::loop() {
  wordClock.Loop();
}

void WordClockComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "WordClock component");
}


}  // namespace android_auto_unit_assist_component
}  // namespace esphome