/*the matrix is row wise sorted then if we think in the linear form then it will give us a sorted 1d array, in this we 
can easily write binary search*/

#include<iostream>
#include<vector>
using namespace std;
pair<int, int> isPresent(vector<vector<int>> &v, int target){
    int row = v.size();
    int col = v[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    pair<int, int> p;
    while(start<=end){
        int element = v[mid / col][mid % col];
        if(element==target){
            p.first = mid / col;
            p.second = mid % col;
            break;
        }
        else if(element>target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
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