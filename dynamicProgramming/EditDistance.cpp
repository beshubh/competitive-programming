#include <bits/stdc++.h>
using namespace std;
int edit_distance(string a, string b)
{
    int m = a.length();
    int n = b.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[m - i] == b[n - j])
            {
                dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
            else
            {
                dp[i][j] = min(1 + dp[i - 1][j], min(1 + dp[i][j - 1], 1 + dp[i - 1][j - 1]));
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[m][n];
}
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int ans = edit_distance(s1, s2);
    cout << ans << endl;
}