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
        head->next = head;
        head->prev = head;
    } else {
        tail->next = new_node;
        new_node->prev = tail;
        new_node->next = head;
        head->prev = new_node;
        tail = new_node;
    }
}
void display() {
    struct Node* ptr = head;
    if (head != NULL) {
        do {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != head);
    }
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The circular doubly linked list is: ";
    display();
    return 0;
}
