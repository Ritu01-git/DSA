#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 0, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Address of first block in array: " << arr << endl;
    cout << "Address of first block in array: " << &arr[1] << endl;
    cout << *arr << endl; //prints the first value or 0th index
    cout << (*arr) + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *arr + 1 << endl;
    int i = 5;
    cout << "5th element is: " << *(arr + i) << endl;
    cout << "5th element is: " << i[arr] << endl; //it is also executed with the index number
    cout << "Size of array " << sizeof(arr) << endl;
    int *p = &arr[0];
    cout << "Size of pointer " << sizeof(p) << endl;
    cout << "Size of pointer " << sizeof(*p) << endl;
    cout << "Size of pointer " << sizeof(&p) << endl;
    cout << p << endl;
    int a[20] = {4, 2, 8, 6};
    int *ptr = &a[0];
    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    
    return 0;
    /*int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}
answer : 10 30 20 40 50*/
}