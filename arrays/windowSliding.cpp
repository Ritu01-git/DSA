#include<iostream>
using namespace std;
int max_sum(int a[], int n, int k){
    if(n<k){
        return -1;
    }
    int maxi = 0;
    for (int i = 0; i < k; i++){
        maxi += a[i];
    }
    int current = maxi;
    for (int i = k; i < n; i++){
        current += a[i] - a[i - k];
        maxi = max(current, maxi);
    }
    return maxi;
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
    int k;
    cin >> k;
    cout << max_sum(a, n, k);
    return 0;
}