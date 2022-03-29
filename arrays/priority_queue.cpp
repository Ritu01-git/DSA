#include<iostream>
#include<queue>
using namespace std;
int main(){
    //in this the maximum element will be fetched
    priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(2);
    maxi.push(10);
    maxi.push(11);
    maxi.push(3);
    int n = maxi.size();
    cout << "Elements of maxi is: ";
    for (int i = 0; i < n;i++){
        cout << maxi.top() << endl; // alaways gretest element will be printed
        maxi.pop();
    }
    // in this the minimum element will be fetched
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(2);
    mini.push(6);
    mini.push(1);
    mini.push(0);
    mini.push(5);
    int f = mini.size();
    cout << "Elements of mini is: ";
    for (int i = 0; i < n;i++){
        cout << mini.top() << endl; // alaways smallest element will be printed
        mini.pop();
    }
    cout << "Empty or not: " << mini.empty();
    return 0;
}