#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Shape.h"

class Parallelepiped : public Shape {
public:
    Parallelepiped(double length, double width, double height);
    virtual double surface_area() const override;
    virtual std::string getName() const override;
private:
    double length;
    double width;
    double height;
};

#endif 
