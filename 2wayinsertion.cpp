#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node* head = NULL;
struct Node* tail = NULL;
void insert(int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (head == NULL) {
        head = new_node;
        tail = new_node;
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
    cout << "The doubly linked list is: ";
    display();
    return 0;
}
