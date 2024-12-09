// Terminal.cpp
#include <iostream>
#include <vector>

void showFlightTerminalInfo(const std::vector<Plane>& planes, const std::vector<Gate>& gates) {
    for (const auto& plane : planes) {
        std::cout << "Flight: " << plane.getFlightNumber() << "\n";
        std::cout << "Destination: " << plane.getDestination() << "\n";
        
        // Find the gate associated with the plane
        for (const auto& gate : gates) {
            if (gate.getAssignedPlane() == plane.getFlightNumber()) {
                std::cout << "Terminal: " << gate.getTerminal() << "\n";
                std::cout << "Gate: " << gate.getGateNumber() << "\n";
                std::cout << "Departure Time: " << gate.getDepartureTime() << "\n";
                break;
            }
        }
        std::cout << "-------------------------\n";
    }
}
