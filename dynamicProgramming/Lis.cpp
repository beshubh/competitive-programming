// Problem : Given a sequence of numbers you have to find the longest increasing subsequence
#include <iostream>
using namespace std;
int lis(int *arr, int n)
{
    int * dp = new int[n];
    dp[0] = 1;
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
}