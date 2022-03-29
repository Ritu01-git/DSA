#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> ll;
    list<int> n(6,3);
    cout << "printing n: " << endl;
    for(int i:n){
        cout << i<< " ";
    }
    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(5);
    ll.push_front(6);
    cout << endl;
    cout << "printing ll: " << endl;
    for(int i:ll){
        cout << i<< " ";
    }
    return 0;
}