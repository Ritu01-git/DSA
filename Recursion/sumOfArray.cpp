#include<bits/stdc++.h>
using namespace std;
int printSum(int arr[],int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    //relation
    int big = arr[0];
    big += printSum(arr + 1, n - 1);
    return big;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = printSum(arr, n);
    cout << ans << endl;
    return 0;
}