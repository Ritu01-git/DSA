#include<bits/stdc++.h>
using namespace std;
int factorial(int n){

    // base case
    //if we don't provide this condition then we get segmentation fault
    if(n == 0){
        return 1;
    }
    //int small = factorial(n - 1);
    //int big = n * small;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}