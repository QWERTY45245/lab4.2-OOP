#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double length, double width, double height)
    : Shape("Parallelepiped"), length(length), width(width), height(height) {}

double Parallelepiped::surface_area() const {
    return 2 * (length * width + width * height + height * length);
}

std::string Parallelepiped::getName() const {
    return "Parallelepiped";
}
