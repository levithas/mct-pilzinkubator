//
// Created by steffen on 19.01.24.
//

#include "MinMaxController.h"

bool MinMaxController::control(double processValue) {
    if(controlValue && processValue > maxValue) {
        controlValue = false;
    }
    else if(!controlValue && processValue < minValue) {
        controlValue = true;
    }
    return controlValue;
}
