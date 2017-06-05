//
// Created by alonj on 6/5/17.
//

#ifndef HW2_DISTANCE_H
#define HW2_DISTANCE_H

#include "Point.h"
#include "math.h"

class Distance
{
public:
    virtual double calculate(Point& a, Point& b) = 0;
};

#endif //HW2_DISTANCE_H
