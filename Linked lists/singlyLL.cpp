

/*In singly LL every operations is done in this code with proper notes*/


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

//deleting the node with postion

void deleteNode(Node* &head, int pos){
    //deleting the first node
    if(pos == 1){
        Node* temp = head;
        head = head->next;
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
        current->next = NULL;
        delete current;
    }
    
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

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        //cycle is present
        if(visited[temp]){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
Node* floydCycleDetection(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && slow != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    //printLL(head);
    InsertAtTail(tail, 15);

    //printLL(head);


    InsertAtTail(tail, 18);
    //printLL(head);


    InsertAtTail(tail, 20);
    //printLL(head);


    InsertAtPos(50, 1, head, tail);
    //printLL(head);


    InsertAtPos(70, 6, head, tail);
    //printLL(head);

    //cout << "Head is "<< head->data <<endl;
    //cout << "tail is "<< tail->data <<endl;

    deleteNode(head, 2);
    printLL(head);
    if(floydCycleDetection(head) != NULL){
        cout << "loop persent" << endl;
    }else{
        cout << "loop is not persent" << endl;
    }
    return 0;
}