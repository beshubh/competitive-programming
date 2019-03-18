#include <bits/stdc++.h>
using namespace std;
int minimizedDiff(int *arr, int n, int k)
{
    int maxi = *(max_element(arr, arr + n));
    int mini = *(min_element(arr, arr + n));
    if (maxi - mini <= k)
    {
        return maxi - mini;
    }
    int avg = (maxi + mini) / 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < avg)
        {
            arr[i] = arr[i] + k;
        }
        else if (arr[i] >= avg)
        {
            arr[i] = arr[i] - k;
        }
    }
    maxi = *(max_element(arr, arr + n));
    mini = *(min_element(arr, arr + n));
    return maxi - mini;
}
int main()
{
    int n = 0;
    int k = 0;
    cin >> n;
    cin >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = minimizedDiff(arr, n, k);
    cout << ans << endl;
    return 0;
}