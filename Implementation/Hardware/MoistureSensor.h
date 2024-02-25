//
// Created by steffen on 19.01.24.
//

#ifndef IMPLEMENTATION_MOISTURESENSOR_H
#define IMPLEMENTATION_MOISTURESENSOR_H

#include <utility>

#include "ISensor.h"

class MoistureSensor : public ISensor{

public:
    explicit MoistureSensor(String name) : ISensor(std::move(name)) {}
    double getValue() override;
};


#endif //IMPLEMENTATION_MOISTURESENSOR_H
