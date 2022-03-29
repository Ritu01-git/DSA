#include<bits/stdc++.h>
using namespace std;
void reverseString(string& s, int start, int end){
    //base case
    if(start>end){
        return;
    }
    //relation
    swap(s[start], s[end]);
    start++;
    end--;
    reverseString(s, start, end);
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    reverseString(s, 0, n - 1);
    cout << s << endl;
    return 0;
}