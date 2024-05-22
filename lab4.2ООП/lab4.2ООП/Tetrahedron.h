#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "Shape.h"

class Tetrahedron : public Shape {
public:
    Tetrahedron(double edge);
    virtual double surface_area() const override;
    virtual std::string getName() const override;
private:
    double edge;
};

#endif 
