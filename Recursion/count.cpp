#include<bits/stdc++.h>
using namespace std;
void counting(int n){
    //base condition
    if(n==0){
        return;
    }
    //this is tail recursion. here it prints from n to 1
    //cout << n <<endl;
    //counting(n - 1);
    //this head recursion it prints 1 ot n
    counting(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    counting(n);
    return 0;
}