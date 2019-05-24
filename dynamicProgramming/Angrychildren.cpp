#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    long long *arr = new long long[n]();
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long unfairness = 0;
    long long * dp = new long long[k]();
    dp[0] = 0;
    dp[1] = abs(arr[0] - arr[1]);
    long long sumsof_array_elems = (arr[0] % MOD + arr[1] % MOD) % MOD;
    for(int i = 2; i< k; i++)
    {
        dp[i] = (dp[i - 1] +(((i * arr[i])) - (sumsof_array_elems)));
        sumsof_array_elems = (sumsof_array_elems + arr[i]);
    }
    unfairness = dp[k-1];
    long long temp = arr[0];
    long long min_cost = INT_MAX;
    long long temp_cost = 0;
    for(int i = 1; i < n - k; i++)
    {
        long long sum = 0;
        sum = sumsof_array_elems - temp;
        temp_cost = (unfairness - (2 * sum) + (k -1)*(temp) + ((k- 1)*(arr[i + k])))%MOD;
        min_cost = min(unfairness,min(min_cost,temp_cost));
        temp = arr[i];
    }
    // for(int i = 0; i < k; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    // cout << endl;
    cout  << unfairness << endl;
}

