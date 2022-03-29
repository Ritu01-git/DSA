//very important question for amazon

#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(int v[3][3]){
    vector<int> ans;
    int row = 3;
    int col = 3;
    int total = row*col;
    int count = 0;
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;
    while(count<total){
        //printing the first row
        for (int i = startingCol; i <= endingCol && count<total;i++){
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;
        //printing last column
        for (int i = startingRow; i <= endingRow && count<total;i++){
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;
        //printing last row
        for (int i = endingCol; i >= startingCol && count<total;i--){
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;
        //prrinting first column
        for (int i = endingRow; i >= startingRow && count<total;i--){
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    for (int i = 0; i < 9;i++){
        cout << ans[i]<< " ";
    }
}
int main(){
    int v[3][3];
    cout << "Enter the elements: " << endl;
    for (int row = 0; row < 3;row++){
        for (int col = 0; col < 3;col++){
            cin >> v[row][col];
        }
    }
    int v1[9];
    spiralPrint(v);
}