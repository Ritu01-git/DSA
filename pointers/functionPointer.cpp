#include<bits/stdc++.h>
using namespace std;
void printPointer(int *ptr){
    cout << "Prints the address: " << ptr << endl;
    cout << "Prints the value: " << *ptr << endl;
}
void update(int *ptr){
    //ptr = ptr + 1;
    //return ptr;
    *ptr = *ptr + 1;
}
void getSum(int arr[], int n){//we can write *arr also
    //it doesn't give the size of array, it gives the size of the pointer
    cout << "\nSize of Array: " << sizeof(arr);
}
int main()
{
    int p = 4;
    int *ptr = &p;
    printPointer(ptr);
    update(ptr);
    cout << "after address " << ptr << endl;//nothing changed cause its address
    cout << "after value " << *ptr << endl;//changed , cause its value
    int n = 5;
    int arr[5];
    getSum(arr, n);
    return 0;
}