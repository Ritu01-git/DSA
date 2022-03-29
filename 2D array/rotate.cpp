/*in this question we have to rotate the matrix by 90 degree
Algorithm
1. first swap the elements by using row and column
2. then just reverse it row wise
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>> v){
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row;i++){
        for (int j = 0; j < i;j++){
            swap(v[i][j], v[j][i]);
        }
    }
    for (int i = 0; i < row;i++){
        reverse(v[i].begin(), v[i].end());
    }
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cout << v[i][j]<< " ";
        }
    }
}
int main(){
    vector<vector<int>> v;
    cout << "Enter the elements: " << endl;
    int element;
    for (int row = 0; row < 3;row++){
        vector<int> temp;
        for (int col = 0; col < 3;col++){
            cin >> element;
            temp.push_back(element);
        }
        v.push_back(temp);
    }
    rotate(v);
    return 0;
}