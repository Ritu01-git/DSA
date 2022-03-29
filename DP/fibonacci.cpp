//memoization

//time complexity: O(n)
//space complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int fibbo(vector<int> &v, int n){
    if(n<=1){
        return n;
    }
    if (v[n] != -1){
        return v[n];
    }
    return v[n] = fibbo(v, n - 1) + fibbo(v, n - 2);
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fibbo(dp,n) <<endl;
    return 0;
}


