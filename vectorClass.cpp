/*#include <iostream>
#include <cmath>
#include <vector>
#include "vectorClass.hpp"
using namespace std;
    //REQUIRES: num1 and num2 are either both vectors or both points
    //reads numerical input from user given two sets of three points and sets the two vectors based on these numbers.
    //if they are two points, calculate the resulting vector
    Vector::Vector(double num1A, double num1B, double num1C, double num2A,
    double num2B, double num2C, bool bothVectors){
        if (bothVectors) {
            vector1 = {num1A, num1B, num1C};
            vector2 = {num2A, num2B, num2C};
        } else {
            vector1 = {num2A-num1A, num2B-num1B, num2C-num1C};
        }
    }

    //intializes given values of one vector
    Vector::Vector(double num1A, double num1B, double num1C, double num2A, bool isVector){
        if(isVector) {
            vector1 = {num1A, num1B, num1C};
        } else {
            throw; //fix to make it show error message
        }
    }

    //initializes given values of one vector and a scalar
    Vector::Vector(double num1A, double num1B, double num1C, double num2A, double ScalarValueIn, bool isVector){
        if(isVector) {
            vector1 = {num1A, num1B, num1C};
            scalarVal = ScalarValueIn;
        } else {
            throw; //fix to make it show error message
        }
    }

    //MIGHT NEED TO DELETE DUE TO DIFFICULTY
    //finds the value of the angle between two vectors in radians
    double Vector::findAngle(){
        double dotProduct = Vector::dotProduct();
        double magnitude1 = Vector::findMagnitude(vector1);
        double magnitude2 = Vector::findMagnitude(vector2);
        return acos(dotProduct/(magnitude1*magnitude2));
    }

    //multiplies each coordinate in the vector by the scalar multiple
    vector<double> Vector::scalarMultiple(){
        vector<double> newVector;
        for (int i = 0; i < vector1.size(); i++) {
            newVector.push_back(vector1[i]*scalarVal);
        }
        return newVector;
    }

    //adds the scalar to each coordinate in the vector
    vector<double> Vector::scalarAddition(){
        vector<double> newVector;
        for (int i = 0; i < vector1.size(); i++) {
            newVector.push_back(vector1[i]+scalarVal);
        }
        return newVector;
    }

    //finds the magnitude of the given vector
    double Vector::findMagnitude(vector<double> vector1) const{
        return sqrt(pow(vector1[0], 2) + pow(vector1[1], 2) + pow(vector1[2],2));
    }

    //finds the dot product given two vectors
    double Vector::dotProduct(){
        return *this * vector2;
    }

    //finds the unit vector
    vector<double> Vector::unitVector(){

    }

    //finds the scalar projection of vector b onto vector a
    double Vector::scalarProjection(){
        return dotProduct()/Vector::findMagnitude(vector1);
    }

    //finds the vector projection of vector b onto vector a
    vector<double> Vector::vectorProjection(){
        return vector1 * ((*this*vector2)/pow(Vector::findMagnitude(vector1),2));
    }

    //finds the cross product of two vectors
    vector<double> Vector::crossProduct(){
        vector<double> newVector = {(vector1[2]*vector2[3]) - (vector1[3]*vector2[2]), (vector1[3]*vector2[1])-(vector1[1]*vector2[3]), 
        (vector1[1]*vector2[2])-(vector1[2]*vector2[1])};
        return newVector;
    }

    //finds the triple product of three vectors
    double Vector::tripleProduct(){}
    
    //finds the volume of the parallelepiped given three vectors
    double Vector::volOfParallelepiped(){}

    //finds the area of the parallelogram given two vectors
    double Vector::areaOfParallelogram(){
        Vector::findMagnitude(Vector::crossProduct());
    }
    double Vector::operator*(const vector<double> other) const{
        return (vector1[0]*other[0]) + (vector1[1]*other[1]) +(vector1[2]*other[2]);
    }
    ostream & operator<<(ostream &os, const vector<double> &resultingVector){} */