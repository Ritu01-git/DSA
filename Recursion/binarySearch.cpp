#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int *arr, int n, int start, int end, int key){
    //base case
    //for element found
    if(start>end){
        return false;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid]==key){
        return true;
    }
    
    //relation
    if(arr[mid]<key){
        return binarySearch(arr, n, mid + 1, end, key);
    }else{
        return binarySearch(arr, n, 0, mid - 1, key);
    }
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
    int key;
    cout << "Enter key: ";
    cin >> key;
    bool ans = binarySearch(arr, n, 0, n-1, key);
    cout << ans << endl;
    return 0;
}