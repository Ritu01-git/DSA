#include<bits/stdc++.h>
using namespace std;
inline int getMax(int a, int b){
    return (a > b) ? a : b;
}
int main()
{
    int a = 5, b = 9;
    cout << getMax(a, b);
    return 0;
}