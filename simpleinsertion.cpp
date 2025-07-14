#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void display() {
    struct Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    cout << "The linked list is: ";
    display();

    return 0;
}
