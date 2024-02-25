//
// Created by steffen on 19.01.24.
//


#include "ISensor.h"

String ISensor::ToString() {
    double value = getValue();
    int nachkomma =(int)(value * 1000) % 1000;
    int vorkomma = (int)(value);
    std::stringstream ss;
    ss << getName().c_str() << ": " << std::to_string(vorkomma) << "." << nachkomma;
    return { ss.str().c_str() };
}
