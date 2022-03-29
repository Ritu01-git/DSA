#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
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
//Printing the linked list

void printLL(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
//another simple recursive solution for reversing LL
Node* solve(Node* &head){
    if(head==NULL || head->next==NULL){
        cout << head->data << endl;
        return head;
    }
    Node *smallHead = solve(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

//recursive solution for reversing LL
void solveReverse(Node* &head, Node* &curr, Node* &prev){
    //base case
    if(curr==NULL){
        head = prev;
        //cout << head->data << endl;
        return;
    }
        Node *forward = curr->next;
        solveReverse(head, forward, curr);
        curr->next = prev;
}
void reverseLL(Node* &head){
    Node *prev = NULL;
    Node *curr = head;
    //solveReverse(head, curr, prev);
    solve(head);
    /*while(curr!=NULL){
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }*/
    cout << head->data << endl;
}
int main()
{
    Node *node1 = new Node(45);
    Node *head = node1;
    Node *tail = node1;
    printLL(head);
    InsertAtHead(head, 50);
    InsertAtHead(head, 6);
    InsertAtTail(tail, 9);
    InsertAtTail(tail, 3);
    printLL(head);
    reverseLL(head);
    return 0;
}