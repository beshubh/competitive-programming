// Problem : Given a sequence of numbers you have to find the longest increasing subsequence
#include <iostream>
using namespace std;
int lis(int *arr, int n)
{
    int *dp = new int[n];
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
            {
                if (dp[i] < (dp[j] + 1))
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        if (best < dp[i])
        {
            best = dp[i];
        }
    }
    delete[] dp;
    return best;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = lis(arr, n);
    cout << ans << endl;
    return 0;
}