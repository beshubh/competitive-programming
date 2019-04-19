#include<iostream>
using namespace std;
int getMinCount(int n)
{
    int * dp = new int[n + 1]();
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for(int i = 4; i <= n; i++)
    {
        dp[i] = 4;
        for(int x = 1; x <= i; x++)
        {
            int temp = x * x;
            if(temp > i) break;
            else{
                dp[i] = min(dp[i], 1 + dp[i - temp]);
            }
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    int ans = getMinCount(n);
    cout << ans << endl;
    return 0;
}