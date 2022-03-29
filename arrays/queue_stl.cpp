#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Ritu");
    q.push("Mahato");
    q.pop();
    cout << "First element is " << q.front() << endl;
    return 0;
}