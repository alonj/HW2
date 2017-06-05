cmake_minimum_required(VERSION 3.7)
project(HW2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        data/outputs/and.out
        data/outputs/diabetes_KNN_E
        data/outputs/diabetes_KNN_M
        data/outputs/diabetes_Perceptron
        data/outputs/heart_KNN_E
        data/outputs/heart_KNN_M
        data/outputs/heart_Perceptron
        data/outputs/xor.out
        data/and.data
        data/heart.dat.mm
        data/heart.doc
        data/pima-indians-diabetes.mm
        data/pima-indians-diabetes.names
        data/xor.data
        students_code/Classifier.cpp
        students_code/Classifier.h
        students_code/DataReader.cpp
        students_code/DataReader.h
        students_code/KNNClassifier.cpp
        students_code/KNNClassifier.h
        students_code/main.cpp
        students_code/Perceptron.cpp
        students_code/Perceptron.h
        students_code/Point.cpp
        students_code/Point.h
        students_code/Tests.cpp
        students_code/Tests.h
        HW2.pdf students_code/EuclideanDistance.h students_code/ManhattanDistance.h students_code/Distance.h students_code/ManhattanDistance.cpp students_code/EuclideanDistance.cpp students_code/MetaClassifier.h)

add_executable(HW2 ${SOURCE_FILES})