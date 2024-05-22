#include <iostream>
#include "Shape.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"
#include "Sphere.h"

int main() {
    Shape* shapes[3];

    shapes[0] = new Parallelepiped(2.0, 3.0, 4.0);
    shapes[1] = new Tetrahedron(3.0);
    shapes[2] = new Sphere(5.0);

    for (int i = 0; i < 3; ++i) {
        std::cout << "Object type: " << shapes[i]->getName() << std::endl;
        std::cout << "Surface area = " << shapes[i]->surface_area() << std::endl;
        delete shapes[i];
    }

    return 0;
}
