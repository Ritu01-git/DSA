#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n, int start =1){ //here we make start as default
    //disclaimer: we cannot make default suddenly the middle argumemnt
    //we have to start with right most side
    for (int i = start; i < n;i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    int n = 5;
    int arr[n] = {5, 9, 4, 3, 1};
    printArray(arr, n); //giving no error cause we make start as default
    return 0;
}