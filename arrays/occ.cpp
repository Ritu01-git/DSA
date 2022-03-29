//here any specific number's first and last occurence and the total number of occurence

#include<iostream>
using namespace std;
int firstoccurance(int arr[], int n, int ele){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid;
    while (start <= end){
        mid = start + ((end - start) / 2);
        if (arr[mid] == ele){
            ans = mid;
            end = mid - 1;
        }else if (ele > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int lastocc(int arr[], int n, int ele){
    int start = 0;
    int end = n - 1;
    int mid;
    int ans = -1;
    while (start <= end){
        mid = start + ((end - start) / 2);
        if (arr[mid] == ele){
            ans = mid;
            start = mid + 1;
        }else if (ele > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
void totalocc(int arr[], int n, int ele){
    int f = firstoccurance(arr, n, ele);
    int s = lastocc(arr, n, ele);
    int total = 0;
    total = (f + s) + 1;
    cout << total;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ele;
    cin >> ele;
    cout << firstoccurance(arr, n, ele) <<endl;
    cout << lastocc(arr, n, ele) << endl;
    totalocc(arr, n, ele);
    return 0;
}