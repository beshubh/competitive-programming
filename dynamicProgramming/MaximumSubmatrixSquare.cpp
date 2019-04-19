// Problem : Given a matrix with 0's and 1's you have to find the size of maximum square submatrix with all 0's 
/**eg
 * 3 3
 * 1 1 0
 * 1 1 1 
 * 1 1 1
 * output = 1
 * 
 * 3 4
 * 1 0 0 1
 * 1 0 0 1 
 * 1 1 1 1 
 * output = 2
 * 
 **/
#include <bits/stdc++.h>
using namespace std;
int findMaxSquareWithAllZeros(int **arr, int row, int col)
{
    int dp[row][col];
    int maximum_square = 0;
    for (int i = 0; i < col; i++)
    {
        if (arr[0][i] == 0)
        {
            dp[0][i] = 1;
            if(maximum_square < dp[0][i])
            {
                maximum_square = dp[0][i];
            }
        }
        else
        {
            dp[0][i] = 0;
        }
        
    }
    for(int i = 0; i < row; i++)
    {
        if(arr[i][0] == 0)
        {
            dp[i][0] = 1;
            if(maximum_square < dp[i][0])
            {
                maximum_square = dp[i][0];
            }
        }
        else
        {
            dp[i][0] = 0;
        }
        
    }
    for(int i = 1; i < row; i++)
    {
        for(int j = 1; j < col; j++)
        {
            if(arr[i][j] == 0)
            {
                dp[i][j] = min( min(dp[i - 1][j - 1],dp[i][j - 1]),dp[i - 1][j]) + 1;
                if(maximum_square < dp[i][j])
                {
                    maximum_square = dp[i][j];
                }
            }
            else
            {
                dp[i][j] = 0;
            }
            
        }
    }
    return maximum_square;
}
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = findMaxSquareWithAllZeros(arr, n, m);
    cout << ans << endl;
    return 0;
}