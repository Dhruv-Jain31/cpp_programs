#include <iostream>
#include <string>

using namespace std; // Allows using 'string' without 'std::'

template<typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

// ----------Linked List ----------------------//
template<typename T>
void insertAtHead(Node<T>* &head, T data) {
    if (head == NULL) {
        head = new Node<T>(data);
        return;
    }
    Node<T>* n = new Node<T>(data);
    n->next = head;
    head = n;
}

template<typename T>
void printLL(Node<T>* head) {
    while (head != NULL) {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node<int>* head = NULL;  // Integer linked list
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    printLL(head);

    Node<string>* strHead = NULL;  // String linked list, now we can use string literals directly
    insertAtHead(strHead, std::string("apple"));// std::string is added to convert const char* to string
    insertAtHead(strHead, std::string("banana"));//in c++ both are considered different
    insertAtHead(strHead, std::string("cherry"));
    printLL(strHead);

    return 0;
}
