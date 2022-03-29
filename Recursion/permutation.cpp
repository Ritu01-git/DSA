#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums, vector<vector<int>>& ans, int index){
        
    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    
    for(int i = index; i < nums.size(); i++){
        swap(nums[index], nums[i]);
        solve(nums, ans, index+1);
        //backtrack
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<vector<int>> ans;
    ans = permute(v);
    for (int i = 0; i < ans.size();i++){
        for (int j = 0; j < n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}