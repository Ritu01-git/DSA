#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node *next;
    Node *prev;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
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

//inserting at head

void insertAtHead(Node* &head,Node* &tail, int data){
    //in case of empty list
    if(head == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

//inserting at tail

void insertAtTail(Node* &tail,Node* &head, int data){
    if( tail == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        //creating a new node
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        temp->next = NULL;
        tail = temp;
    }
}

//inserting at any position
void insertAtPos(Node* &head, Node* &tail, int pos, int data){
    Node* temp = head;

    if (pos == 1){
        //inserting at head
        insertAtHead(head,tail, data);
        return;
    }
    //creating a node
    int count = 1;
    Node *newNode = new Node(data);
    while(count < pos - 1){
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head, data);
        return;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

//deleting the node
void deleteNode(Node* &head, int pos){
    //deleting the first node
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        //deleting thelast or middle node
        Node* current = head;
        Node* pre = NULL;
        for (int i = 1; i < pos; i++){
            pre = current;
            current = current->next;
        }
        pre->next = current->next;
        //current->next->prev = pre;
        current->prev = NULL;
        current->next = NULL;
        delete current;
    }
    
}

//printing the doubly linked list

void printLL(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//length of the LL
int length(Node* &head){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    //Node *node1 = new Node(10);

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head,tail, 12);
    insertAtHead(head,tail, 2);
    insertAtHead(head,tail, 23);
    insertAtTail(tail,head, 5);
    insertAtPos(head, tail, 3, 45);
    insertAtPos(head, tail, 1, 85);
    insertAtPos(head, tail, 7, 20);
    
    deleteNode(head, 3);
    deleteNode(head, 1);
    deleteNode(head, 5);
    printLL(head);
    cout << "Length is: "<< length(head);
    return 0;
}