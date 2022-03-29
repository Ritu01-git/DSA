#include<iostream>
using namespace std;
void reverseAlternative(int arr[], int n){
    int start = 0;
    int end = 1;
    for (int i = 0; i < n / 2; i++){
        swap(arr[start], arr[end]);
        start +=2;
        end += 2;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseAlternative(arr, n);
    return 0;
}