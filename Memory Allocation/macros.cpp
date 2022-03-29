#include<iostream>
//object like macros
#define PI 3.14
//chain macros
#define Insta followers
#define followers 130
//function like macros
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))
using namespace std;
int main()
{
    int r = 7;
    double area = PI * r * r;
    cout << area << endl;
    cout << "Followers: " << followers << endl;
    int p = 5, q = 9;

    cout << "Minimum is: " << min(p, q) << endl;
    cout << "Maximum is: " << max(p, q) << endl;
    return 0;
}