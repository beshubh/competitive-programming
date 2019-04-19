#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a ;
    cin >> a;
    int * arr = new int [n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> arr[i];
    }
    int * dp = new int[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = new int[n];
    }
}