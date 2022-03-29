#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive relation
    int smaller = fibonacci(n - 2);
    int bigger = fibonacci(n - 1) + smaller;
    return bigger;
}
int main()
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans << endl;
    return 0;
}