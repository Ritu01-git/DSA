#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "Array's size" << arr.size() << endl;
    cout << "Element at 3rd index: " << arr.at(3) << endl;
    cout << "First element is: " << arr.front() << endl;
    cout << "Last element is: " << arr.back() << endl;
    cout << arr.begin() << endl;
    cout << arr.cbegin() << endl;
    cout << arr.cend() << endl;
}