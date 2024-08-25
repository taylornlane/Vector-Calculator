/*vectorClass.cpp
// Taylor Lane
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Vector {
public:
    //reads numerical input from user given two sets of three points and sets the two vectors based on these numbers.
    //if they are two points, calculate the resulting vector
    Vector(double num1A, double num1B, double num1C, double num2A,
    double num2B, double num2C, bool bothVectors); 

    //intializes given values of one vector
    Vector(double num1A, double num1B, double num1C, double num2A, bool isVector);

    //initializes given values of one vector and a scalar
    Vector(double num1A, double num1B, double num1C, double num2A, double ScalarValueIn, bool isVector);

    //finds the value of the angle between two vectors in radians
    double findAngle();

    //multiplies each coordinate in the vector by the scalar multiple
    vector<double> scalarMultiple();

    //adds the scalar to each coordinate in the vector
    vector<double> scalarAddition();

    //finds the magnitude of the given vector
    double findMagnitude(vector<double> vector1) const;

    //finds the dot product given two vectors
    double dotProduct();

    //finds the unit vector
    vector<double> unitVector();

    //finds the scalar projection of vector b onto vector a
    double scalarProjection();

    //finds the vector projection of vector b onto vector a
    vector<double> vectorProjection();

    //finds the cross product of two vectors
    vector<double> crossProduct();

    //finds the triple product of three vectors
    double tripleProduct();
    
    //finds the volume of the parallelepiped given three vectors
    double volOfParallelepiped();

    //finds the area of the parallelogram given two vectors
    double areaOfParallelogram();

    double operator*(const vector<double> other) const;

private:
    vector<double> vector1;
    vector<double> vector2;
    int scalarVal;




};

ostream & operator<<(ostream &os, const vector<double> &resultingVector);
*/ 