/**
 * During the lesson small girl Alyona works with one famous spreadsheet computer program and learns how to edit tables.
Now she has a table filled with integers. The table consists of n rows and m columns. By ai, j we will denote the integer
 located at the i-th row and the j-th column. We say that the table is sorted in non-decreasing order in the column j
  if ai, j ≤ ai + 1, j for all i from 1 to n - 1.
Teacher gave Alyona k tasks. For each of the tasks two integers l and r are given and Alyona has to answer the following 
question: if one keeps the rows from l to r inclusive and deletes all others, will the table be sorted in non-decreasing 
order in at least one column? Formally, does there exist such j that ai, j ≤ ai + 1, j for all i from l to r - 1 inclusive.
Alyona is too small to deal with this task and asks you to help!
 * */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= m; i++)
    {
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(arr[i][j] >= arr[i - 1][j])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = i;
            }
            
        }
    }
    // code for debugging
    // cout << endl;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= m; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int *minL = new int[n + 1]();
    for(int i = 1; i <= n; i++)
    {
        int min = INT_MAX;
        for(int j = 1; j <= m; j++)
        {
            if(dp[i][j] < min){
                min = dp[i][j];
            }
        }
        minL[i] = min;
    }
    // debugging
    // for(int i = 1;i <= n; i++)
    // {
    //     cout << minL[i] <<" ";
    // }
    // cout << endl;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int l;
        int r;
        cin >> l >> r;
        if(minL[r] <= l)
        {
            cout <<"Yes" <<endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}