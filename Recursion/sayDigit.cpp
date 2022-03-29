#include<bits/stdc++.h>
using namespace std;
void printNumber(int n, string arr[]){
    //base conditon
    if(n==0){
        return;
    }
    //recursive relation
    int temp = n % 10;
    n = n / 10;
    printNumber(n, arr);
    cout << arr[temp] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    printNumber(n, arr);
    return 0;
}