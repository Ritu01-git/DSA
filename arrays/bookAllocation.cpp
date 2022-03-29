/*very important question*/

#include<iostream>
using namespace std;
bool ifPossible(int arr[], int n, int mid, int m){
    int s = 0;
    for (int i = 0; i < n; i++){
        s += arr[i];
    }
    int pageCount = 0;
    int studentCount = 1;
    for (int i = 0; i < n;i++){
        if(pageCount+arr[i]<=mid){
            pageCount += arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}
int binarySearch(int arr[], int n, int s, int k){
    int start = 0;
    int end = s;
    int mid = start + (end - start) / 2;
    int ans =-1;
    while(start<=end){
        if(ifPossible(arr, n, mid, k)){
            end = mid - 1;
            ans = mid;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++){
        s += arr[i];
    }
    int m;
    cin >> m;
    cout << binarySearch(arr, n, s, m);
    return 0;
}