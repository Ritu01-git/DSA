#include<bits/stdc++.h>
using namespace std;
void solve(string digits, int index, string output, vector<string>& ans, string mapping[]){
    
    //base case 
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    
    //recursive call
    int val = digits[index] - '0';
    string map = mapping[val];
    for(int i = 0; i< map.length(); i++){
        output.push_back(map[i]);
        solve(digits, index+1, output, ans, mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
        int index = 0;
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        solve(digits, index, output, ans, mapping);
        return ans;
    }

int main()
{
    
    string str;
    cout << "Enter the string: ";
    cin >> str;
    vector<string> ans;
    ans = letterCombinations(str);
    for(int i = 0;i < ans.size(); i++){
        cout << ans[i] <<" ";
    }cout << endl;

    return 0;
}