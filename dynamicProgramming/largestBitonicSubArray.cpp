// Problem :Largest Bitonic Subarray
// You are given an array of positive integers as input. Write a code to return the length of the largest such sub-array in which the values are arranged first in strictly ascending order and then in strictly descending order.
// Such a sub-array is known as bitonic sub-array. A purely increasing or purely decreasing subsequence will also be considered as a bitonic sequence with the other part empty.
// Note that the elements in bitonic sub-array need not be consecutive in the given array but the order should remain same.
// Input Format:
// Line 1 : A positive Integer N, i.e., the size of array
// Line 2 : N space-separated integers as elements of the array
#include <iostream>
using namespace std;

int lbs(int *arr, int n)
{
    int *dp = new int[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
    }
    int *dp1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        dp1[i] = 1;
    }
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] >= arr[j])
            {
                if (dp[i] < (dp[j] + 1))
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        int index = i;
        for (int k = i + 1; k < n; k++)
        {
            if (arr[index] >= arr[k])
            {
                if (dp1[k] < dp[index] + 1)
                {
                    cout << dp[k] << " " << dp[index] << " at i :" << i << endl;
                    dp1[k] = dp1[index] + 1;
                    index = k;
                }
            }
        }
    }
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        if (best < dp1[i])
        {
            best = dp1[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dp1[i] << endl;
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
    int ans = lbs(arr, n);
    cout << ans << endl;
    return 0;
}