/*You are given a binary string $S$ and an integer $K$. In one operati
on, you can pick any bit and flip it, i.e turn $0$ to $1$ or $1$ to $0$. Can you make the string $S$
 a palindrome using exactly $K$ operations?*/

#include <iostream>
using namespace std;
bool checkPalindrome(string s, int n, int k){
    int st = 0;
    int e = n-1;
    while(st<=e){
        if(s[st]!=s[e]){
            k--;
        }
        st++;
        e--;
    }
    if(k<0){
        return false;
    }else{
        if(n%2!=0){
            return true;
        }else if(k%2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
}
int main() {
	// your code goes here
	int t;
	cin >> t;
    while(t--){
    int n, k;
    cin >> n>> k;
    string s;
    cin>>s;
    if(checkPalindrome(s,n,k)){
        cout<<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
}
	return 0;
}