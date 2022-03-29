#include<bits/stdc++.h>
using namespace std;
void solve(string str, int index, string output, vector<string> &ans){
    
    //base case
    if(index>=str.length()){
        //if(output.length()>0)
        	ans.push_back(output);
        return;
    }
    //exclude
    solve(str, index+1, output, ans);
    
    //include part
    char ch = str[index];
    output.push_back(ch);
    solve(str, index+1, output, ans);
}
vector<string> subsequences(string str){
	
	// Write your code here
    vector<string> ans;
    int index = 0;
    string output = "";
    solve(str, index, output, ans);
    return ans;
	
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    vector<string> ans;
    ans = subsequences(str);
    for(int i = 0;i < pow(2, str.length()); i++){
        cout << ans[i] <<" ";
    }cout << endl;

    return 0;
}