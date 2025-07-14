#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node* head = NULL;
void insert(int new_data) {
    struct Node* new_node = new Node;
    new_node->data = new_data;
    if (head == NULL) {
        head = new_node;
        head->next = head;
        head->prev = head;
    } else {
        struct Node* tail = head->prev;
        tail->next = new_node;
        new_node->prev = tail;
        new_node->next = head;
        head->prev = new_node;
    }
}
void display() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    struct Node* ptr = head;
    do {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}
void deleteNode(int key) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    do {
        if (temp->data == key) {
            if (head->next == head) {
                head = NULL;
                delete temp;
                return;
            }
            if (temp == head) {
                head = head->next;
            }
            prev->next = temp->next;
            temp->next->prev = prev;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);
    cout << "Node with data " << key << " not found." << endl;
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "Original circular doubly linked list: ";
    display();
    cout << endl;
    deleteNode(7);
    cout << "Circular doubly linked list after deletion of node with data 7: ";
    display();
    return 0;
}
