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
    if (head == NULL) {
        head = new_node;
        new_node->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
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
    cout << "The circular linked list is: ";
    display();

    return 0;
}
