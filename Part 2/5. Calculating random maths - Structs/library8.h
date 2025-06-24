#pragma once
#include <string>
#include <math.h>

struct Vector
{
    public:
        Vector(double x, double y, double z);
        double x;
        double y;
        double z;

        double magnitude();
        void outputValues();
};