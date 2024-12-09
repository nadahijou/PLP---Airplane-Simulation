#include <iostream>
#include <vector>
#include "Gate.h"

void showGates(const std::vector<Gate>& gates) {
    std::cout << "Gates List:\n";
    for (const auto& gate : gates) {
        gate.display();
    }
}

void addGate(std::vector<Gate>& gates) {
    std::string id, assignedFlight;

    std::cout << "Enter Gate ID: ";
    std::cin >> id;
    std::cout << "Enter Assigned Flight ID: ";
    std::cin >> assignedFlight;

    gates.emplace_back(id, assignedFlight);
    std::cout << "Gate added successfully!\n";
}
