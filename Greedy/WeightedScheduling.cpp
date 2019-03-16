#include <bits/stdc++.h>
using namespace std;
struct item
{
    int s;
    int f;
    int p;
};
bool compare(item a, item b)
{
    return a.f < b.f;
}
int findProfit(item arr[], int n)
{
    int *dp = new int[n];
    dp[0] = arr[0].p;
    for (int i = 1; i < n; i++)
    {
    
        int including = arr[i].p;
        int latestNonConflictingActivityIndex = -1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j].f <= arr[i].s)
            {
                latestNonConflictingActivityIndex = j;
                break;
            }
        }
        if(latestNonConflictingActivityIndex != -1){
            including += dp[latestNonConflictingActivityIndex];
        }
        dp[i] = max(including, dp[i - 1]);
    }
    int ans = dp[n - 1];
    delete [] dp;
    return ans;
}
int main()
{
    int n = 0;
    cin >> n;
    item arr[n];
    int maxs[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].s >> arr[i].f >> arr[i].p;
    }

    sort(arr, arr + n, compare);
    int profit = findProfit(arr, n);
    cout << profit << endl;
}