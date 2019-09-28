#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    long long fact = 1;
    for(int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
    return 0;
}