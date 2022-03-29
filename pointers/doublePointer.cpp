#include<bits/stdc++.h>
using namespace std;
void update(int **ptr2){
    ptr2 = ptr2 + 1; //no cahnge
}
void update1(int **ptr2){
    *ptr2 = *ptr2 + 1; //pointer one will incremented by 4 bytes
}
void update2(int **ptr2){
    **ptr2 = **ptr2 + 1; // pointer 2 value (a value) will increamented by 1
}
int main()
{
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << "Printing the address of a using ptr: " << ptr << endl;
    cout << "Printing the content of ptr using ptr2: " << *ptr2 << endl;
    cout << "Printing the value of a using ptr " << *ptr << endl;
    cout << "Printing the value of a using ptr2 " << **ptr2 << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    /*cout << "Before: " << a << endl;
    cout << "Before: " << ptr << endl;
    cout << "Before: " << ptr2 << endl;
    update(ptr2);
    cout << "After: " << a << endl;
    cout << "After: " << ptr << endl;
    cout << "After: " << ptr2 << endl;
    cout << "Before: " << a << endl;
    cout << "Before: " << ptr << endl;
    cout << "Before: " << ptr2 << endl;
    update1(ptr2);
    cout << "After: " << a << endl;
    cout << "After: " << ptr << endl;
    cout << "After: " << ptr2 << endl*/;
    cout << "Before: " << a << endl;
    cout << "Before: " << ptr << endl;
    cout << "Before: " << ptr2 << endl;
    update2(ptr2);
    cout << "After: " << a << endl;
    cout << "After: " << ptr << endl;
    cout << "After: " << ptr2 << endl;
    return 0;
}