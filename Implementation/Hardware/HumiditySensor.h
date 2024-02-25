//
// Created by steffen on 19.01.24.
//

#ifndef IMPLEMENTATION_HUMIDITYSENSOR_H
#define IMPLEMENTATION_HUMIDITYSENSOR_H

#include "ISensor.h"

class HumiditySensor : public ISensor {

public:
    explicit HumiditySensor(String name) : ISensor(std::move(name)) {}
    double getValue() override;
};


#endif //IMPLEMENTATION_HUMIDITYSENSOR_H
