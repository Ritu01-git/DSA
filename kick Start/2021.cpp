#include<bits/stdc++.h>
using namespace std;
int countPalindrome(string s, int n){
    int start = 0;
    int end = n - 1;
    int count = 0;
    while(start<=end){
        if(s[start]!=s[end]){
            count++;
        }
        start++;
        end--;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = countPalindrome(s,n);
        if(ans<k){
            cout << k-ans << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}