#include <iostream>
#include <vector>
#include "Plane.h"

void showPlanes(const std::vector<Plane>& planes) {
    std::cout << "Planes List:\n";
    for (const auto& plane : planes) {
        plane.display();
    }
}

void addPlane(std::vector<Plane>& planes) {
    std::string id, model;
    int capacity;

    std::cout << "Enter Plane ID: ";
    std::cin >> id;
    std::cout << "Enter Plane Model: ";
    std::cin >> model;
    std::cout << "Enter Plane Capacity: ";
    std::cin >> capacity;

    planes.emplace_back(id, model, capacity);
    std::cout << "Plane added successfully!\n";
}
