#include<iostream>
#include<vector>
using namespace std;
pair<int, int> isPresent(vector<vector<int>> &v, int target){
    int row = v.size();
    int col = v[0].size();
    int start = 0;
    int end = row * col - 1;
    int rowIndex = 0;
    int colIndex = col - 1;
    pair<int, int> p;
    while(rowIndex<row && colIndex>=0){
        int element = v[rowIndex][colIndex];
        if (element == target){
            p.first = rowIndex;
            p.second = colIndex;
            break;
        }else if(element>target){
            colIndex--;
        }else{
            rowIndex++;
        }
    }
    return p;
}
int main(){
    vector<vector<int>> v;
    cout << "Enter the elements: " << endl;
    int element;
    for (int row = 0; row < 3;row++){
        vector<int> temp;
        for (int col = 0; col < 4;col++){
            cin >> element;
            temp.push_back(element);
        }
        v.push_back(temp);
    }
    int target;
    cout << "Enter the element which you want to search: ";
    cin >> target;
    pair<int, int> p;
    p = isPresent(v, target);
    cout << p.first << " " << p.second;
    return 0;
}