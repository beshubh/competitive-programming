#include<bits/stdc++.h>
using namespace std;
int nBst(int n)
{
    int *dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for(int k = 3; k <= n; k++)
    {
        int c = 0;
        for(int j = k; j >= 1; j--)
        {
            c += dp[j -1] + dp[k - j];
        }
        
        dp[k] = c;
    }
    return dp[n];
}
int numberOfBst(int n)
{
    int dp[n + 1];
    for(int i = 0; i <= n; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            dp[i] += (dp[j] * dp[i - j - 1]);
        }
    }
    int ans = dp[n] % (1000000007);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int bsts = numberOfBst(n);
    cout << bsts << endl;
    return 0;
}