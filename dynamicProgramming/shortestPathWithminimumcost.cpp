// you are given an 2d array and you have to find the shortest path with minimum cost b/w the given starting and ending index the
// value at the index is the cost
#include <bits/stdc++.h>
using namespace std;
int minimum_cost(int **input, int s1, int s2, int e1, int e2,int ** dp)
{
    if (s1 == e1 && s2 == e2)
    {
        return input[e1][e2];
    }
    if (s1 > e1 || s2 > e2)
    {
        return INT_MAX;
    }
    if(dp[s1][s2] > -1){
        cout << "sk1" << endl;
        return dp[s1][s2];
    }
    int option1 = minimum_cost(input, s1 + 1, s2, e1, e2,dp);     //below
    int option2 = minimum_cost(input, s1 + 1, s2 + 1, e1, e2,dp); //diagonal
    int option3 = minimum_cost(input, s1, s2 + 1, e1, e2,dp);     // next column
    int output =  input[s1][s2] + min(option1,min(option2 , option3));
    dp[s1][s2] = output;
    return output;
}
int main()
{
    int n;
    cin >> n;
    int** array = new int*[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n];
    }
    int** dp = new int*[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    int cost  = minimum_cost(array,0,0,2,2,dp);
    cout << cost;
    return 0;
}