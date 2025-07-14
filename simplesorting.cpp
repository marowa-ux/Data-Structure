#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;
void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertionSort() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    Node* sorted = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        if (sorted == nullptr || current->data < sorted->data) {
            current->next = sorted;
            sorted = current;
        } else {
            Node* temp = sorted;
            while (temp->next != nullptr && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = nextNode;
    }
    head = sorted;
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "Original linked list: ";
    display();
    insertionSort();
    cout << "Sorted linked list: ";
    display();
    return 0;
}
