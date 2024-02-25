//
// Created by steffen on 19.01.24.
//

#ifndef IMPLEMENTATION_MINMAXCONTROLLER_H
#define IMPLEMENTATION_MINMAXCONTROLLER_H


class MinMaxController {
    double minValue, maxValue;
    bool controlValue = false;

public:
    explicit MinMaxController(double minValue, double maxValue) : minValue(minValue), maxValue(maxValue) {}
    void setMinValue(double val) {minValue = val;}
    void setMaxValue(double val) {maxValue = val;}
    double getMinValue() const {return minValue;}
    double getMaxValue() const {return maxValue;}

    bool control(double processValue);
};


#endif //IMPLEMENTATION_MINMAXCONTROLLER_H
