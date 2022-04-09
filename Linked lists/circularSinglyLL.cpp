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
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data){
    if(tail == NULL){
        //empty list
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }else{
        //non-empty list
        Node *current = tail;
        while (current->data != element){
            current = current->next;
        }
        Node *temp = new Node(data);
        temp->next = current->next;
        current->next = temp;
    }
}
void printLL(Node* &tail){
    Node* temp = tail;
    if(tail==NULL){
        cout << "list is empty"<<endl;
    }
    do{
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        //in case of empty list
        cout << "List is empty" << endl;
    }else{
        //in case of non empty list
        //assume the value is present in list
        Node *prev = tail;
        Node *current = prev->next;
        while(current->data!=value){
            prev = current;
            current = current->next;
            
        }
        prev->next = current->next;
        //1 node LL
        if(current==prev){
            tail = NULL;
        }
        if(tail == current){
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
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
Node* getStarting(Node* head){
    if( head == NULL){
        return NULL;
    }
    Node *intersection = floydCycleDetection(head);
    Node *slow = head;
    while(slow != intersection && intersection != NULL){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void deleteLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node *startOfLoop = getStarting(head);
    Node *temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    //Node *node1 = new Node(10);
    //cout << node1->data << " ";
    //cout << node1->next << " ";

    Node *tail = NULL;
    deleteNode(tail, 50);
    insertNode(tail, 5, 3);
    printLL(tail);
    //deleteNode(tail, 5);
    insertNode(tail, 3, 30);
    printLL(tail);
    insertNode(tail, 30, 0);
    printLL(tail);
    insertNode(tail, 3, 6);
    deleteNode(tail, 30);
    printLL(tail);
    /*if(isCircular(tail)){
        cout << "Circular" << endl;
    }else{
        cout << "Not Circular" << endl;
    }*/
    if(floydCycleDetection(tail)){
        cout << "Loop is present" << endl;
    }
    Node *start = getStarting(tail);
    cout << "Loop starting from " << start->data << endl;
    deleteLoop(tail);
    printLL(tail);
    return 0;
}