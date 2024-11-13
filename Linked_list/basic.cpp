#include<iostream>
using namespace std;

class node{
public:
     int data;
     node* next;

     node(int data){
        this->data = data;
        next = NULL;
     }
};
// ----------Linked List ----------------------//
void insertAtHead(node * &head, int data){ // here we pass the reference of head to maintain the uniqueness
    if(head==NULL){
        head = new node(data);
        return;
    }
    //otherwise
    node * n = new node(data);
    n->next = head;
    head = n;
}

void printLL(node * head){  //here copy of head is made which points to the node
    while(head!=NULL){
        cout << head->data <<"-->";
        head = head->next;
    }
    cout <<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    printLL(head);

    return 0;
}