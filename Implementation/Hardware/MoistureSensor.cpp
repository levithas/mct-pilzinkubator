//
// Created by steffen on 19.01.24.
//

#include "MoistureSensor.h"

double MoistureSensor::getValue() {
    uint16_t raw = sensorpin.adcReadRaw(); // Value between 0..4095
    return (raw / 4095.0) * 100.0; // Output in %
}