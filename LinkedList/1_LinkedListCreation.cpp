#include <iostream>
using namespace std;

// Definition of the Node class
class Node {
public:
    int data;  // Stores the value of the node
    Node* next; // Pointer to the next node in the linked list

    // Default constructor: initializes data to 0 and next to NULL
    Node() {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor: initializes node with given data
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {  // Traverse the list until reaching NULL
        cout << temp->data << "->";  // Print current node's data
        temp = temp->next;  // Move to the next node
    }
    cout<<"NULL"<<endl;
    cout << endl; // Print a newline for better readability
}

int main() {
    // Creating individual nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Linking nodes to form a linked list
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print the linked list
    printLinkedList(first);

    return 0;
}
