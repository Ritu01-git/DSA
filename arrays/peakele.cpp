//finding the peak value if the array is like mountain by using binary search

#include<iostream>
using namespace std;
void peakElement(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid;
    int ans;
    while (start < end)
    {
        mid = start + ((start + end) / 2);
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }else if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    peakElement(arr, n);
}