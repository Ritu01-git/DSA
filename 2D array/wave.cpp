#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int col= 0;col<mCols;col++){
        if(col%2==0){
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }else{
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> v;
    cout << "Enter the elements: " << endl;
    for (int row = 0; row < 4;row++){
        for (int col = 0; col < 4;col++){
            cin >> v[row][col];
        }
    }
    vector<int> v1;
    v1 = wavePrint(v, 4, 4);
    for (int row = 0; row < 16;row++){
        
        cout << v1[row] << " ";
        
    }
}