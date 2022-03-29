#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(3);
    v.push_back(1);
    v.push_back(0);

    sort(v.begin(), v.end());
    cout << "Searching for 6" << binary_search(v.begin(), v.end(), 6);
    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "upper bound: " << upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    int a = 3;
    int b = 5;
    cout << "max is: " << max(a, b)<<endl;
    cout << "min is: " << min(a, b)<<endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b<<endl;
    string s = "aunty";
    reverse(s.begin(), s.end());
    cout << "string is : " << s << endl;
    rotate(v.begin(),v.begin()+2, v.end());
    for(auto i:v){
        cout << i << " ";
    }
    return 0;
}