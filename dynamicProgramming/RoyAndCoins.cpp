#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    int l;
    int r;
    int q;
    int x;
    cin >> n;
    cin >> m;
    int ans = 0;

    int arr[n + 1];
    int start[n + 1];
    int end[n + 1];
    memset(start, 0, sizeof(arr));
    memset(end, 0, sizeof(end));
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        start[l]++;
        end[r]++;
    }
    arr[1] = start[1];
    for (int i = 2; i <= n; i++)
    {
        arr[i] = start[i] - end[i - 1] + arr[i - 1];
    }
    int dp[1000001];
    int resdp[1000001];
    memset(dp, 0, sizeof(dp));
    memset(resdp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        dp[arr[i]]++;
    }
    resdp[1000000] = dp[1000000];
    for (int i = 1000000 - 1; i > 0; i--)
    {
        resdp[i] = dp[i] + resdp[i + 1];
    }
    cin >> q;
    for (int k = 0; k < q; k++)
    {
        cin >> x;
        cout << resdp[x] << endl;
    }
    return 0;
}
