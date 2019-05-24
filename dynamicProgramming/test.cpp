#include<iostream>
using namespace std;
#define MOD 1000000007
int main()
{
    int  x = 10000000000000;
    int  y = 10000000000000;
    int  res = ((x % MOD) +(y % MOD))% MOD;
    cout << res << endl;
    res = x + y;
    cout << res << endl;
    return 0;
}