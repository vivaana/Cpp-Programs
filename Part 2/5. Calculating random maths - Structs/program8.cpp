#include <math.h>
#include "library8.h"
#include <iostream>

Vector::Vector(double x, double y, double z)
{
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

double Vector::magnitude()
{
    double xsqr = pow(this->x,2);
    double ysqr = pow(this->y,2);
    double zsqr = pow(this->z,2);
    double sqrs = xsqr+ysqr+zsqr;

    double Magnitude = sqrt(sqrs);
    std::cout << Magnitude <<"\n";
    return Magnitude;
}

void Vector::outputValues(){
    std::cout << "["<< this->x << "," << this->y<<","<<this->z<<"]\n";
}

int main(){
    std::cout << M_PI << "\n";
    Vector vector(10,10,10);
    vector.outputValues();
    vector.magnitude();
}