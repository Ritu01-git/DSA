#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl;
    char *c = &ch[0];
    cout << "prints the entire string: " << c << endl; //prints the entire string
    cout << "prints the first character " << *c << endl;
    cout << "prints the addition of ascii value " << *c + 1 << endl;
    int i = 3;
    cout << "prints the ith character " << *(c + i) << endl;
    //null character
    char temp = 'p';
    char *ptr = &temp;
    cout << *ptr << endl;
    // A good question
    /*int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
  return 0;
}
answer : ABCDEFGHIJ*/
    return 0;
}