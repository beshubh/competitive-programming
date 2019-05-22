#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int *arr  = new int[n]();
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    sort(arr, arr + n);
    int un1 = 0;
    int un2 = 0;
    for(int i = 0; i< k; i++)
    {
        for(int j = i; j < k; j++)
        {
            un1 += abs(arr[i] - arr[j]);
        }
    }
    int * dp = new int[k]();
    dp[0] = 0;
    dp[1] = abs(arr[0] - arr[1]);
    int sum = arr[0] + arr[1];
    for(int i = 2; i<k; i++)
    {
        dp[i] = dp[i - 1] + i * arr[i] - sum;
        sum += arr[i];
    }
    un2 = dp[k - 1];
    cout << un1 << " " << un2 << endl;
}