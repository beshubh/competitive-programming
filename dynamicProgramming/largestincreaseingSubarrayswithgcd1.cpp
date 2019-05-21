#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[501][101];
int arr[501];
// buggy solution   
int main()
{
    int n;
    cin >> n;
    int m = 0;
    for(int i = 0; i < 501; i++)
    {
        for(int j= 0; j< 101; j++){
            dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(m < arr[i]) m = arr[i];
        dp[i][arr[i]] = 1;
    }
    for(int i = 2; i < n; i++)
    {
        for(int j = 1; j <i; j++)
        {
            if(arr[i] > arr[j])
            {
                for(int k = 1; k <= m; k++)
                {
                    int gcd = __gcd(k,arr[i]);
                    dp[i][gcd] = dp[i][gcd] + dp[j][k];
                } 
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans =((ans) +  dp[i][1]);
    }
    cout << ans << endl;
    return 0;
}