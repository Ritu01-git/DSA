/*In this code, we used 3 pointer approach to sort a array which is 0,1,2*/

#include<iostream>
using namespace std;
void sorting(int a[], int n) {
    int i = 0, j = 0, k = n - 1;
    while(i<=k){
        if(a[i]==0){
            swap(a[i], a[j]);
            i++;
            j++;
        }
        else if (a[i] == 2){
            swap(a[i], a[k]);
            k--;
        }else{
            i++;
        }
    }
    cout << "After sorting: \n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sorting(a, n);
    return 0;
}