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
    new_node->next = head;
    head = new_node;
}
void display() {
    struct Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void deleteNode(int key) {
    struct Node* temp = head;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    delete temp;
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "The linked list is: ";
    display();
    cout << endl;
    deleteNode(7);
    cout << "After deletion of node with data 7: ";
    display();
    cout << endl;
    deleteNode(3);
    cout << "After deletion of node with data 3: ";
    display();
    cout << endl;
    return 0;
}
