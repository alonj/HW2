//
// Created by alonj on 6/5/17.
//

#include "ManhattanDistance.h"

double ManhattanDistance::calculate(Point &a, Point &b) {

    size_t dim = a.getDimension();
    double sum = 0.0;
    for(int i=0;i<dim;i++)
        sum += abs(a[i] - b[i]);
    return sum;
}