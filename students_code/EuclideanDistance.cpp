//
// Created by alonj on 6/5/17.
//

#include "EuclideanDistance.h"

double EuclideanDistance::calculate(Point &a, Point &b) {

    size_t dim = a.getDimension();
    double sum = 0.0;
    for(int i=0;i<dim;i++)
        sum += pow((a[i] - b[i]),2.0);
    return sqrt(sum);
}