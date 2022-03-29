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
int getLen(Node* head){
    int len = 0;
    while(head!= NULL){
        len++;
        head = head->next;
    }
    return len;

}
Node* getMid(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node *fast = head->next;
    Node *slow = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
void getMiddle(Node* head){
    Node *temp = getMid(head);
    /*
    Node *temp = head;
    int len = getLen(head);
    int ans = len / 2;
    while(ans--){
        temp = temp->next;
    }*/
    cout << "Middle is: " << temp->data << endl;
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
int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head,6);
    InsertAtHead(head,9);
    InsertAtTail(tail, 21);
    //InsertAtTail(tail, 14);
    printLL(head);
    //getMiddle(head);
    getMiddle(head);
    return 0;
}