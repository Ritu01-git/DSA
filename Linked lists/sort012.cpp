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


//Inserting at user given position 

void InsertAtPos(int d, int pos, Node* &head, Node* &tail){
    //new node create
    Node *temp = head;
    //if inserting at head or position 1
    if(pos == 1){
        InsertAtHead(head, d);
        return;
    }
    
    for (int i = 1; i < pos-1; i++){
        temp = temp->next;
    }

    //if inserting at tail
    if(temp-> next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    //creating node for d
    Node *insertingNode = new Node(d);
    insertingNode->next = temp->next;
    temp->next = insertingNode;
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
Node* sortLL(Node* &head){
    int zero = 0;
	int one = 0;
	int two = 0;
	Node* temp = head;
	while(temp != NULL){
		if(temp->data==0){
			zero++;
		}else if(temp->data==1){
			one++;
		}else{
			two++;
		}
		temp = temp->next;
	}
	Node* temp2 = head;
	while(temp2 != NULL){
		if(zero != 0){
			temp2->data = 0;
			zero--;
		}else if(one != 0){
			temp2->data = 1;
			one--;
		}else{
			temp2->data = 2;
			two--;
		}
		temp2 = temp2->next;
	}
	return head;

}
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    //printLL(head);
    InsertAtHead(head, 2);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);

    InsertAtPos(0, 1, head, tail);

    InsertAtPos(1, 6, head, tail);
    printLL(head);
    sortLL(head);
    cout << "After sorting" << endl;
    printLL(head);
    return 0;
}