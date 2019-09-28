#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        int arr[3];
        memset(arr, 0, sizeof arr);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        printf("%d \n",arr[1]);
    }
}