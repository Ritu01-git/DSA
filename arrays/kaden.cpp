#include<iostream>
using namespace std;
int maxSum(int a[], int n){
    int maxsum = 0;
    int current = 0;
    for (int i = 0; i < n;i++){
        current += a[i];
        if(current>maxsum){
            maxsum = current;
        }
        if(current<0){
            current = 0;
        }
    }
    return maxsum;
}
int main(){
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << "The maximum sum of subarray is: "<<maxSum(a, n);
}