#include "Tetrahedron.h"
#include <cmath>

Tetrahedron::Tetrahedron(double edge)
    : Shape("Tetrahedron"), edge(edge) {}

double Tetrahedron::surface_area() const {
    return std::sqrt(3) * edge * edge;
}

std::string Tetrahedron::getName() const {
    return "Tetrahedron";
}
