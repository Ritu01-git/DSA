#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1] = "Ritu";      /*Here 1 is the key and the string is the element which is pointed by the key*/
    m[2] = "Mahato";
    m[10]= "error";
    m.insert({5, "exception"});
    cout << "Before erase: " << endl;
    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding 10: " << m.count(10) << endl;
    m.erase(2);
    cout << "after erase: " << endl;
    for (auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }
    return 0;
}