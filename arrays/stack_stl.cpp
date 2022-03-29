#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ritu");
    s.push("Mahato");
    s.push("is");
    s.push("good");
    s.push("girl");
    cout << "Top element: " << s.top();
    s.pop();
    cout << "After pop: " << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}