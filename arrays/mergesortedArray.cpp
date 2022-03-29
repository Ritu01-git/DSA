#include<iostream>
using namespace std;
void mergedArray(int arr1[], int arr2[], int n, int m, int arr3[]) {
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    cout << "Merged Array is: \n";
    for (int a = 0; a < k; a++){
        cout << arr3[a]<<" ";
    }
}
int main()
{
    int n;
    cout << "Enter the first array's size: ";
    cin >> n;
    int m;
    cout << "\nEnter the second array's size: ";
    cin >> m;
    int arr1[n];
    int arr2[m];
    cout << "\nEnter the first array's element: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "\nEnter the second array's element: ";
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    int arr3[n + m];
    mergedArray(arr1, arr2, n, m, arr3);
    return 0;
}