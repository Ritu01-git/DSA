#include<iostream>
using namespace std;
void dish(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0, j = 1;
    while(i<n && j<n){
        if(arr[i]==arr[j]){
            j++;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        dish();
    }
}