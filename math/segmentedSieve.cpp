#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
bool sieve[N + 1];
void createSieve() {
    for (int i = 0; i < N;i++){
        sieve[i] = true;
    }
    for (int i = 2; i * i <= N;i++){
        if(sieve[i]==true){
            for (int j = i * i; j <= N; j++){
                sieve[j] = false;
            }
        }
    }
}
vector<int> generatePrime(int N){
    vector<int> ds;
    for (int i = 2; i <= N;i++){
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }
    return ds;
}
int main(){
    createSieve();
    int l, r;
    cout << "Enter the two numbers: ";
    cin >> l >> r;
    vector<int> prime;
    prime = generatePrime(sqrt(r));
    //step 2
    int dummy[r - l + 1];
    for (int i = 0; i < r - l + 1;i++){
        dummy[i] = 1;
    }
    //step 3
    for(auto pr: prime){
        int firstMul = (r / pr) * pr;
        if (firstMul < l){
            firstMul += pr;
        }
            for (int j = max(firstMul, pr * pr); j <= r; j += pr)
            {
                dummy[j - l] = 0;
            }
    }
    for (int i = l; i <= r;i++){
        if (dummy[i - l] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}