/*In vector when we add any element the capacity will increase
like if we add 4 elements then capacity will 8 and so on*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int> v1(5, 0);  /*here 5 is the number of elemts and 0 is the elemnt which is assigned to every index of the vector*/
    for(int i:v1){
        cout << i << " ";
    }
    vector<int> v2(v);  /*here v1 is copied into v2*/
    for(int i:v2){
        cout << i << " ";
    }
    cout << "After push back:" << endl;
    for(int i:v){
        cout << i << " ";
    }
    v.pop_back();
    cout << "After pop back:" << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    cout << "Element at index 3" << v.at(2) << endl;
    cout << "Front " << v.front() <<endl;
    cout << "back: " << v.back() << endl;
    cout << "Size of the vector: " << v.size() << endl;
    cout << "Capacity of the vector: " << v.capacity() <<endl;
    v.clear();
    cout << "After clear: " << endl;
    cout << "Size of the vector: " << v.size() << endl;
    cout << "Capacity of the vector: " << v.capacity();
    return 0;
}