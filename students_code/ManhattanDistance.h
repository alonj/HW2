//
// Created by alonj on 6/5/17.
//

#ifndef HW2_MANHATTANDISTANCE_H
#define HW2_MANHATTANDISTANCE_H

#include "Distance.h"


class ManhattanDistance: public Distance
{
public:
    double calculate(Point& a, Point& b);
};

#endif //HW2_MANHATTANDISTANCE_H
