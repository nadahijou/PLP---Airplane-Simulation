// LinkedList.cpp
#include <iostream>
#include "Node.cpp"

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        clear();
    }

    void addPassenger(const Passenger& passenger) {
        Node* newNode = new Node(passenger);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void showPassengers() const {
        Node* current = head;
        while (current) {
            current->data.display(); // Ensure Passenger has a display method
            current = current->next;
        }
    }

    void clear() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

private:
    Node* head;
};
