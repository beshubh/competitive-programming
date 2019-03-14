#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long *arr = new long long[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + n,greater<int>());
    long res = 0;
    for(int i = 0; i < n; i++)
    {
        res += arr[i] * (1<<i);
    }
    cout << res << endl;
    return 0;
}