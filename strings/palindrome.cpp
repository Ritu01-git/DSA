#include<iostream>
using namespace std;
void checkPalindrome(string s, int n){
    char temp;
    for(int j=0;j<s.size();j++){
        if(s[j]==32){
            cout << s[j] << " ";
            s.erase(j);
        }
        else if(s[j]!=32 || s[j]>='a' || s[j]<='z' || s[j]>='A' || s[j]<='Z'){
            cout << s[j] << " ";
            s.erase(j);
        }else{
            continue;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z' && s[i]>=0 && s[i]<=9){
            continue;
        }else{
            temp=s[i]-'A'+'a';
            s[i] = temp;
            cout << s[i];
        }
    }
    for (int i = 0; i < n;i++){
        cout << s[i] << " ";
    }
    /*    
    int st = 0;
    int e = s.size()-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;*/
}
int main(){
    string s;
    s = "A1b22Ba";
    checkPalindrome(s, 7);
    return 0;
}