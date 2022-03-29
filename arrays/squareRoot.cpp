#include<iostream>
using namespace std;
int binarySearch(int key){
    int start = 0;
    int end = key - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    
    while (start<=end)
    {
        if((mid*mid)==key){
            return mid;
        }
        if((mid*mid)<key){
            ans = mid;
        }else if((mid*mid)>key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int main(){
    int key;
    cin >> key;
    cout << binarySearch(key);
    return 0;
}