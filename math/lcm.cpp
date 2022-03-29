#include<bits/stdc++.h>
using namespace std;
int calculateGCD(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a<b){
            b = b - a;
        }else{
            a = a - b;
        }
    }
}
int calculateLCM(int m, int n){
    int gcd = calculateGCD(m, n);
    int mul = m * n;
    int lcm = mul / gcd;
    return lcm;
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The GCD is: ";
    cout << calculateGCD(a, b);
    cout << "\nThe LCM is: ";
    cout << calculateLCM(a, b);
    return 0;
}