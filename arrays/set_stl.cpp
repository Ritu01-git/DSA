#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(0);
    s.insert(9);
    for (auto i : s){
        cout << i << endl;
    }
    cout << endl;
    set<int>::iterator ir = s.begin();
    ir++;
    ir++;
    s.erase(ir);
    for (auto i : s){
        cout << i << endl;
    }
    cout << endl;
    cout << "Element present or not: " << s.count(5) << endl;
    set<int>::iterator it = s.find(5);
    for (auto j = it; j != s.end();j++){
        cout << *j << " ";
    }
    cout << endl;
    return 0;
}