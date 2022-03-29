#include<iostream>
using namespace std;
void printSum(int arr[][3], int n, int m){
    int s;
    for (int i = 0; i < 3;i++){
        s = 0;
        for (int j = 0; j < 3;j++){
            s += arr[i][j];
        }
        cout << s;
        cout << "\n";
    }
}
int main(){
    int arr1[3][3];
    //int arr2[4][3];
    //taking the input row wise
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }
    //taking the input column wise
    /*
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr2[j][i];
        }
    }
    cout << "Print row wise:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Print column wise:" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }*/
    printSum(arr1, 3, 3);
}