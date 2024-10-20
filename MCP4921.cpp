#include "esphome/core/log.h"
#include "MCP4921.h"

namespace esphome {
namespace MCP4921 {

static const char *TAG = "empty_spi_sensor.sensor";

void EmptySPISensor::setup() {

}

void EmptySPISensor::update() {

}

void EmptySPISensor::loop() {

}

void EmptySPISensor::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI sensor");
}

}  // namespace MCP4921
}  // namespace esphome