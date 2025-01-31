// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data)
// {
//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }


// void insertAtTail(Node* &tail, int data)
// {
//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

// void printLinkedList(Node* &head)
// {
//     Node* temp = head;
//     while(temp!= NULL)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main()
// {
//     Node* head;
//     Node* tail = new Node(300);
//     head = tail;
//     insertAtTail(tail,10);
//     insertAtTail(tail,20);
//     insertAtTail(tail,30);
//     insertAtTail(tail,40);
//     insertAtTail(tail,50);
//     insertAtTail(tail,60);
//     printLinkedList(head);
//     return 0;
// }


#include <iostream>
using namespace std;

// Definition of the Node class
class Node {
public:
    int data;  // Stores the value of the node
    Node* next; // Pointer to the next node in the linked list

    // Parameterized constructor: initializes node with given data
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node* &head, Node* &tail, int data) {
    // If the list is empty, initialize head and tail
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Create a new node and set it as the new head
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the tail of the linked list
void insertAtTail(Node* &head, Node* &tail, int data) {
    // If the list is empty, initialize head and tail
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Create a new node and attach it to the current tail
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode; // Update the tail pointer
}

// Function to print the linked list
void printLinkedList(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {  // Traverse the list until reaching NULL
        cout << temp->data << " -> ";  // Print current node's data
        temp = temp->next;  // Move to the next node
    }
    cout << "NULL" << endl;  // Indicate the end of the linked list
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    // Insert elements at the tail
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);

    // Insert an element at the head
    insertAtHead(head, tail, 1);

    // Print the linked list
    printLinkedList(head);

    return 0;
}
