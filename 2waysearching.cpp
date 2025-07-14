#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
Node* head = nullptr;
void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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
bool search(int num) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == num) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The linked list is: ";
    display();
    int num;
    cout << "Enter a value to search: ";
    cin >> num;
    if (search(num)) {
        cout << num << " is found." << endl;
    } else {
        cout << num << " is not found." << endl;
    }
    return 0;
}
