#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
        head->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
    }
}

void traverse() {
    if (head == nullptr) {
        cout << "Circular linked list is empty." << endl;
        return;
    }

    struct Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    cout << "The circular linked list is: ";
    traverse();

    return 0;
}
