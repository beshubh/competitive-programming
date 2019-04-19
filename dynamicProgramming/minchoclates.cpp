#include <iostream>
using namespace std;
int getMin(int *arr, int n)
{
    int *dp = new int[n]();
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }
    for (int j = n - 2; j >= 0; j--)
    {
        if(arr[j] > arr[j + 1] && dp[j] <= dp[j + 1])
        {
            dp[j] = dp[j+ 1] + 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    int choclates = 0;
    for(int i= 0; i < n; i++)
    {
        choclates += dp[i];
    }
    return choclates;
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
    int choclates = getMin(arr, n);
    cout << choclates << endl;
}