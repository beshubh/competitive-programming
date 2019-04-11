#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    int l;
    cin >> n >> k >> l;
    int *arr = new int[n];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < mini){
            mini = arr[i];
        }
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    
    int cost = INT_MAX;
    int cost_temp = INT_MAX;
    int inc = 0;
    int dec = 0;
    for (int i = mini; i <= maxi; i++)
    {
        inc = 0;
        dec = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] < i){
                inc += i - arr[j];
            }
            else
            {
                dec += arr[j] - i;
            }
            
        }
        if (inc >= dec)
        {
            cost_temp = dec * k;
            cost_temp += (inc - dec) * l;

            if (cost_temp < cost)
            {
                cost = cost_temp;
            }
        }
        inc = 0;
        dec = 0;
    }
    if( cost == INT_MAX){
        cost = 0;
    }
    cout << cost << endl;
}