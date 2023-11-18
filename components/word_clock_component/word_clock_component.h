#pragma once

#ifndef BUILD_DEBUG_WORD_CLOCK 

#include "esphome/core/component.h"

namespace esphome {
namespace word_clock_component {

class WordClockComponent : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace word_clock_component
}  // namespace esphome

#endif