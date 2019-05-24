#include <bits/stdc++.h>
using namespace std;
// recursive naive solution
int lcs(char *s1, char *s2)
{
    if (s1[0] == '\0' || s2[0] == '\0')
    {
        return 0;
    }
    if (s1[0] == s2[0])
    {
        return 1 + lcs(1 + s1, 1 + s2);
    }
    else
    {
        int temp1 = lcs(s1, 1 + s2);
        int temp2 = lcs(1 + s1, s2);
        return max(temp1, temp2);
    }
}
// naive solution end
// recursive dynamic programming solution
int lcshelper(char *s1, char *s2, int m, int n, int **dp)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (dp[m][n] > -1)
    {
        return dp[m][n];
    }
    int ans;
    if (s1[0] == s2[0])
    {
        ans = 1 + lcshelper(1 + s1, 1 + s2, m - 1, n - 1, dp);
    }
    else
    {
        int temp1 = lcshelper(s1, 1 + s2, m, n - 1, dp);
        int temp2 = lcshelper(1 + s1, s2, m - 1, n, dp);
        ans = max(temp1, temp2);
    }
    dp[m][n] = ans;
    return ans;
}
int lcs2(char *s1, char *s2)
{
    int m = strlen(s1);
    int n = strlen(s2);
    int **dp = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        dp[i] = new int[n + 1];
        for (int j = 0; j < n + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    int ans = lcshelper(s1, s2, m, n, dp);
    return ans;
}
// dynamic solution end
// iterative solutioin
int lcs(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
    int **dp = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        dp[i] = new int[n + 1];
    }
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (str1[m - i] == str2[n - j])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
int main()
{
    int ans = 0;
    string a = "shubham";
    string b = "shub";
    ans = lcsiterative(a, b);
    cout << ans << endl;
    return 0;
}