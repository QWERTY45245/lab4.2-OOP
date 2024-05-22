#define _USE_MATH_DEFINES
#include "Sphere.h"
#include <cmath>

Sphere::Sphere(double radius)
    : Shape("Sphere"), radius(radius) {}

double Sphere::surface_area() const {
    return 4 * M_PI * radius * radius;
}

std::string Sphere::getName() const {
    return "Sphere";
}
