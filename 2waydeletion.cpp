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
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL)
        head->prev = new_node;
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
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
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
