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
        head->next = head; // Make it circular
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

void deleteNode(int key) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    struct Node* current = head;
    struct Node* prev = NULL;

    do {
        if (current->data == key) {
            if (head->next == head) {
                head = NULL;
                delete current;
                return;
            }
            if (current == head) {
                while (prev->next != head) {
                    prev = prev->next;
                }
                head = head->next;
                prev->next = head;
                delete current;
                return;
            }
            if (current->next == head) {
                prev->next = head;
                delete current;
                return;
            }
            prev->next = current->next;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    } while (current != head);

    cout << "Node with data " << key << " not found." << endl;
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "Original circular linked list: ";
    display();
    cout << endl;
    deleteNode(7);
    cout << "Circular linked list after deletion of node with data 7: ";
    display();
    return 0;
}
