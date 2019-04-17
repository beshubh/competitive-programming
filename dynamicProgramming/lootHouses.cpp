#include<bits/stdc++.h>
using namespace std;
int getMaxMoney(int *arr, int n, int i)
{
    if(i == (n - 1) || i == n)
    {
        cout << "sk1" << endl;
        return arr[n-1];
    }
    int maxi = arr[i];
    cout << maxi << endl;
    int temp1 = maxi + getMaxMoney(arr,n, i + 2);
    int temp2 = getMaxMoney(arr,n, i + 1);
    cout << temp1 << " " << temp2 << endl;
    int ans = max(temp1,temp2);
    return ans;
}
int getLootIterative(int *arr, int n)
{
    int *dp = new int[n];
    dp[0] = arr[0];
    dp[1] = max(arr[1],dp[0]);
    for(int i = 2; i < n; i++)
    {
        dp[i] = max(arr[i] + dp[i - 2],dp[i - 1]);
    }
    return dp[n - 1];
}
int main()
{
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getLootIterative(arr,n);
    cout << ans << endl;
    return 0;
}