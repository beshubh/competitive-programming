#include <bits/stdc++.h>
using namespace std;
int findTheLetter(int s, int d)
{
    if (s == 0)
    {
        if (d == 1)
        {
            cout << 0;
        }
        else
        {
            cout << -1;
        }
    }
    if (s > 9 * d)
    {
        cout << -1;
    }
    int res[d];
    s = s - 1;
    for (int i = d - 1; i > 0; i--)
    {
        if (s > 9)
        {
            res[i] = 9;
            s = s - 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    for (int i : res)
    {
        cout << i;
    }
    cout << endl;
}
int main()
{
    int s = 0;
    int d = 0;
    cin >> s >> d;
    findTheLetter(s, d);
}