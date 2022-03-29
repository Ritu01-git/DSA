#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end){

    int count = 0;

    int pivot = arr[start];

    for (int i = start+1; i <= end; i++){
        if(pivot>=arr[i]){
            count++;
        }
    }

    //pivot correct

    int pivotindex = start + count;

    swap(arr[start], arr[pivotindex]);

    int i = start, j = end;
    while (i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j++;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++], arr[j++]);
        }
    }

    return pivotindex;
}
void quickSort(int arr[],int start, int end ){
    //base case
    if(start>=end){
        return;
    }
    //partition

    int pivot = partition(arr, start, end);
    //recursive call
    //left part sorting
    quickSort(arr, start, pivot - 1);
    //right part sorting
    quickSort(arr, pivot + 1, end);
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
    quickSort(arr, 0, n - 1);
    for (int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}