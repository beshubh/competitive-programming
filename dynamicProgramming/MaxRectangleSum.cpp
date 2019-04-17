#include<bits/stdc++.h>
using namespace std;
int kadane_subarray_sum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
int maxSumRectangle(int arr[100][100], int R, int C)
{
    int dp[R];
    
    int max_current = INT_MIN;
    int max_global = INT_MIN;
    int l = 0; 
    int r = 0;
    for( l = 0; l < C; l++)
    {
        r = l;
        for(int i = 0; i < R; i++)
        {
            dp[i] = arr[i][r];
        }
        int t1 = kadane_subarray_sum(dp,R);
        if(max_current < t1) max_current =t1;
        if(max_global < max_current) max_global = max_current;
        for(r = l + 1; r < C; r++)
        {
            for(int i = 0; i < R; i++){
                dp[i] += arr[i][r];
            } 
            for(int i = 0; i < R; i++){
                cout << dp[i] <<" ";
            } 
            cout << endl;
            int temp = kadane_subarray_sum(dp,R);
            if(max_current < temp){
                max_current = temp;
            }
            if(max_global < max_current){
                max_global = max_current;
            }
            cout << max_global <<endl;
        }
    }
    return max_global;
}
int main()
{
    int r;
    int c;
    cin >> r;
    cin >> c;
    int arr[100][100];
    for(int i= 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = maxSumRectangle(arr,r,c);
    cout << ans << endl;
}