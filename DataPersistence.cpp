// DataPersistence.cpp
#include <vector>
#include <string>
#include <fstream>
#include "Passenger.cpp"
#include "Plane.cpp"
#include "Gate.cpp"

// Functions for Passenger data persistence
void savePassengers(const std::vector<Passenger>& passengers, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& passenger : passengers) {
        file << passenger.toString() << std::endl;
    }
}

void loadPassengers(std::vector<Passenger>& passengers, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        passengers.push_back(Passenger::fromString(line));
    }
}

// Functions for Plane data persistence
void savePlanes(const std::vector<Plane>& planes, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& plane : planes) {
        file << plane.toString() << std::endl;
    }
}

void loadPlanes(std::vector<Plane>& planes, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        planes.push_back(Plane::fromString(line));
    }
}

// Functions for Gate data persistence
void saveGates(const std::vector<Gate>& gates, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& gate : gates) {
        file << gate.toString() << std::endl;
    }
}

void loadGates(std::vector<Gate>& gates, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        gates.push_back(Gate::fromString(line));
    }
}
