#include "esphome/core/log.h"
#include "MCP4921_spi.h"

namespace esphome {
namespace mcp4921_spi {

static const char *TAG = "mcp4921_spi";

void MCP4921SPI::setup() {

}

void MCP4921SPI::update() {

}

void MCP4921SPI::loop() {

}

void MCP4921SPI::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI sensor");
}

}  // namespace mcp4921_spi
}  // namespace esphome