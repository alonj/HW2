//
// Created by annabel@staff.technion.ac.il on 5/3/17.
//

#ifndef CLASSIFICATION_KNNCLASSIFIER_H
#define CLASSIFICATION_KNNCLASSIFIER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "Distance.h"
#include

class Point;

class KNNClassifier
{
public:
    bool train(const std::vector<Point>& points);
    void predict(Point& newPoint) const;
    void reset(){_data.clear();}
    KNNClassifier(size_t k, Distance):_k(k){ }
    void printResults(const std::vector<Point>& points);
private:
    size_t maxDistIndex(const std::vector< std::pair<std::string, double> >& distances, double& max) const ;
    const std::string getMajorityClass( const std::vector< std::pair<std::string, double> >& distances) const ;
    double euclidianDistance(const Point& p1, const Point& p2) const;

private:
    std::vector<Point> _data;
    size_t _k;

};

#endif //CLASSIFICATION_KNNCLASSIFIER_H
