#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"

class Sphere : public Shape {
public:
    Sphere(double radius);
    virtual double surface_area() const override;
    virtual std::string getName() const override;
private:
    double radius;
};

#endif 
