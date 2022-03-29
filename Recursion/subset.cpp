#include<bits/stdc++.h>
using namespace std;
void printSubset(vector<int> v, vector<int> output, int index, vector<vector<int>>& ans){
    // base case
    if(index>=v.size()){
        ans.push_back(output);
        return;
    }
    //exclude part
    printSubset(v, output, index + 1, ans);

    //include part

    int element = v[index];
    output.push_back(element);
    printSubset(v, output, index + 1, ans);
}
int main()
{
    vector<int> v;
    vector<int> output;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<vector<int>> ans;

    printSubset(v, output, n, ans);
    for (int i = 0; i < 2*n; i++){
        for (int j = 0; j < 2;j++){
            cout << ans[i][j] << endl;
        }
            
    }
    return 0;
}