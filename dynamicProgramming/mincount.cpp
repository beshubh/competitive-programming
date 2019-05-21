#include<iostream>
using namespace std;
int minCount(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }
    if(n == 3) return 3;=
    int temp1 = 1 + minCount(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = minCount(n);
    cout << ans << endl;
    return 0;
}