#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int *arr, int n,int key){
    //base case
    if(n==0){
        return 0;
    }
    //relaation
    if(arr[0]==key){
        return true;
    }else{
        bool ans = linearSearch(arr + 1, n - 1, key);
        return ans;
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
    bool ans = linearSearch(arr, n, key);
    cout << ans << endl;
    return 0;
}