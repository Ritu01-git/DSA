
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //NULL Pointer
    int *n;
    n = nullptr;
    cout << "Value of null pointer is "<< n << endl;

    //Double Pointers
    int a = 10;
    int *first = &a;
    int **second = &first;
    cout << "Value of a: " << a << endl;
    cout << "Value of address of first pointer: " << *first << endl;
    cout << "Value of second pointer " << **second << endl;

    //void pointers
    void *ptr;
    int b = 2;
    ptr = &b;
    cout << "Address of b: " << ptr;
    cout << "Value of b: " << &b;
    return 0;
}
