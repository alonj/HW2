//
// Created by alonj on 6/5/17.
//

#ifndef HW2_EUCLIDEANDISTANCE_H
#define HW2_EUCLIDEANDISTANCE_H

#include "Distance.h"

class EuclideanDistance: public Distance
{
public:
    double calculate(Point& a, Point& b);
};

#endif //HW2_EUCLIDEANDISTANCE_H
