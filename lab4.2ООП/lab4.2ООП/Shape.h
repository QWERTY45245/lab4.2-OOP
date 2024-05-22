#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape(const std::string& name) : name(name) {}
    virtual double surface_area() const = 0; 
    virtual std::string getName() const = 0; 
    virtual ~Shape() {} 

protected:
    std::string name;
};

#endif 
