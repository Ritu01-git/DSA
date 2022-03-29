#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int end){
    
    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *firstarr = new int[len1];
    int *secondarr = new int[len2];
    int mainIndex = start;
    for (int i = 0; i < len1;i++){
        firstarr[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len2;i++){
        secondarr[i] = arr[mainIndex++];
    }
    //merge two sorted array concept will apply here
    int first = 0, second = 0;
    mainIndex = start;
    while(first<len1 && second<len2){
        if(firstarr[first]>secondarr[second]){
            arr[mainIndex] = secondarr[second];
            mainIndex++;
            second++;
        }else{
            arr[mainIndex] = firstarr[first];
            mainIndex++;
            first++;
        }
    }
    while(first<len1){
        arr[mainIndex] = firstarr[first];
        mainIndex++;
        first++;
    }
    while (second<len2)
    {
        arr[mainIndex] = secondarr[second];
        mainIndex++;
        second++;
    }
    delete[] firstarr;
    delete[] secondarr;
}
void mergeSort(int arr[], int start, int end){
    //base case
    if(start>=end){
        return;
    }

    int mid = start + (end - start) / 2;
    //left part sorting
    mergeSort(arr, start, mid);
    //last part sorting
    mergeSort(arr, mid + 1, end);
    //merge both array
    merge(arr, start, end);
} 
int main()
{
    int arr[6] = {1, 8, 0, 6, 7, 3};
    int n = 6;
    mergeSort(arr, 0, n - 1);
    for (int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}