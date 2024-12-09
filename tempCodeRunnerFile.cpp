#include <iostream>
#include <vector>
#include "Passenger.cpp"  // Include the Passenger implementation
#include "Plane.cpp"      // Include the Plane implementation
#include "Gate.cpp"       // Include the Gate implementation
#include "DisplayMenu.cpp" 



int main() {
    std::vector<Passenger> passengers;
    std::vector<Plane> planes;
    std::vector<Gate> gates;

    // Load data from files
    loadPassengers(passengers, "passengers.txt");
    loadPlanes(planes, "planes.txt");
    loadGates(gates, "gates.txt");

    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                showPassengers(passengers);
                break;
            case 2:
                addPassenger(passengers);
                break;
            case 3:
                showPlanes(planes);
                break;
            case 4:
                addPlane(planes);
                break;
            case 5:
                showGates(gates);
                break;
            case 6:
                addGate(gates);
                break;
            case 7:
                std::cout << "Exiting...\n";
                // Save data to files
                savePassengers(passengers, "passengers.txt");
                savePlanes(planes, "planes.txt");
                saveGates(gates, "gates.txt");
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
