//very important question for maths

#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < n; i++){
        if(prime[i]){
            count++;
        }
        for (int j = i * 2; j < n;j+=i){
            prime[j] = false;
        }
    }
    return count;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans;
    ans = countPrime(n);
    cout << "The number is: " << ans;
    return 0;
}