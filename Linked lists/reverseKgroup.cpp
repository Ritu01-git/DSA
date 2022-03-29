#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

//Inserting at starting or head
void InsertAtHead(Node* &head, int d) {
    //new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}


//Inserting at last or tail
void InsertAtTail(Node* &tail, int d){
    //new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


Node* kReverse(Node* head, int k) {
    if(head == NULL){
        return head;
    }
    // Write your code here.
    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    while(count<k && curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //recursive call
    if(next != NULL){
        head->next = kReverse(next,k);
    }
    
    return prev;
}
void printLL(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head,5);
    InsertAtTail(tail, 8);
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 6);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 40);
    InsertAtTail(tail, 2);
    printLL(head);
    Node* ans = kReverse(head, 2);
    cout << "Answer is " << ans->data << endl;
    return 0;
}