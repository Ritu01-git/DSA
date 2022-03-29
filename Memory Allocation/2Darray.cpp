#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n]; //here creating number of columns
    //creating the number of rows
    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
    }
    //taking input
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //releasing memory
    for (int i = 0; i < n; i++){
        delete[] arr;
    }
    delete[] arr;
    return 0;
}