#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 8;
    cout << "Value of a is: " << a << endl;
    //Address of a
    cout << "Address of a: " << &a << endl;
    int *p = &a;
    //a = a + 1;
    cout << "Value by pointer: " << *p << endl;
    cout << "Address by pointer: " << p << endl;
    //Size is
    cout << "Size of variable " << sizeof(a) << endl;
    cout << "Size of pointer " << sizeof(p) << endl;
    //bad practice
    int *ptr = 0;
    cout << "Size of pointer " << sizeof(ptr) << endl;
    //cout << *ptr;
    //we can declare pointer null and then point it tp an variable
    int n = 20;
    int *q = 0;
    q = &n;
    (*q)++;
    cout << "Value by pointer: " << *q << endl;
    cout << "Address by pointer: " << q << endl;
    int num = 5;
    int *point = &num;
    (*point)++;
    cout << "Increament: " << point << endl;
    cout << "Increament: " << *point << " " <<  num<<endl;
    //copy a pointer
    int *c = point;
    cout << "Copied pointer is : "<<*c<<endl;
    cout << "Copied pointer is : "<<c<<endl;
    //if we increament a pointer then it intremented with its data type
    //in case of int , it adds 4 bytes
    c++;
    cout<<"after increment: "<< c<<endl;
    return 0;
}