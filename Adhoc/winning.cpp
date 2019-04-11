#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    bool notFound = false;
    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] == i + 1)
        {
            continue;
        }
        else if (A[i] != i + 1)
        {
            if (i - 1 >= 0 && A[i - 1] == i + 1)
            {
                swap(A[i - 1], A[i]);
                ans++;
            }
            else if (i - 1 >= 0 && A[i - 2] == i + 1)
            {
                swap(A[i - 2], A[i - 1]);
                swap(A[i - 1], A[i]);
                ans += 2;
            }
            else
            {
                notFound = true;
                break;
            }
        }
    }
    if (notFound)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << ans << endl;
    }
}