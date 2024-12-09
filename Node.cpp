// Node.cpp
#include "Passenger.cpp"

struct Node {
    Passenger data;
    Node* next;

    Node(const Passenger& passenger) : data(passenger), next(nullptr) {}
};
