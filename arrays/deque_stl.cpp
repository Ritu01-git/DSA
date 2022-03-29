#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_front(2);
    d.push_front(3);
    d.push_front(3);
    d.push_front(3);
    for(int i:d){
        cout << i << " ";
    }
    d.pop_back();
    d.pop_front();
    cout << "\nAfter popping: " << endl;
    for(int i:d){
        cout << i << " ";
    }
    cout << "Element at 2nd index is: " << d.at(2);
    cout << "front" << d.front()<<endl;
    cout << "back" << d.back()<<endl;
    d.erase(d.begin(), d.begin() + 2);
    for(int i:d){
        cout << i << " ";
    }
    return 0;
}