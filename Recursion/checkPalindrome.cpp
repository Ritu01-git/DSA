#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string& s, int start, int end){
    //base cazse
    if(start>end){
        return false;
    }
    //relation
    if(s[start]==s[end]){
        return true;
    }else{
        start++;
        end--;
        checkpalindrome(s, start, end);
    }
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool ans = checkpalindrome(s, 0, s.length() - 1);
    cout << ans << endl;
    return 0;
}