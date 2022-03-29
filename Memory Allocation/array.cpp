#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans += arr[i];
    }
    return ans;
}
int main()
{
    int *n = new int;
    delete n; //to delete dynamic variable
    cout << n << endl; //address
    //to create array
    int *arr = new int[5]; //total memory 20(4*5) and pointer 8
    cout << arr << endl;

    //to create user defined array
    int a;
    cin >> a;
    int *ar = new int[a]; //dynamic memory allocation
    for (int i = 0; i < a;i++){
        cin >> ar[i];
    }
    cout << getSum(ar, a);
    delete[] arr; //to delete dynamic array
    return 0;
}