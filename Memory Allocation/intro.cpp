#include<bits/stdc++.h>
using namespace std;
void updateRef(int &n){  // pass by reference, same memory location but name of variable is different
    n++;
}
//bad practice
int& update(int n){
    int a = n;
    int &ans = a;
    return ans;
}
/*
void update(int n){ //pass by value, copy
    n++;
}
*/
int main()
{
    /*int i =5;
    //create refrence variable
    int &j = i;
    cout << i << endl;
    j++;
    cout << i << endl;
    i++;
    cout << j << endl;
    */
    int n = 5;
    cout <<"Before: "<< n << endl;
    updateRef(n);
    cout <<"After: "<< n << endl; //here it changes the value of n because we used reference variable
    int a = 1;
    cout << update(a) << endl; //here due to loacl reference variable passed so the memory cleared
    cout << a << endl; // here it will print 'a' value
    return 0;
}