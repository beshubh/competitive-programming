#include <bits/stdc++.h>
using namespace std;
#define W 1000
#define V 1000
int dp[W][V];

int knapsackValue(int *value, int *weight, int n, int capacity)
{
    if (capacity < weight[n])
    {
        return knapsackValue(value, weight, n - 1, capacity);
    }
    if (n == 0 || capacity == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return value[n];
    }
    if (dp[value[n]][weight[n]] > 0)
    {
        return dp[value[n]][weight[n]];
    }
    int temp1 = value[n] + knapsackValue(value, weight, n - 1, capacity - weight[n]);
    int temp2 = knapsackValue(value, weight, n - 1, capacity);
    int result = max(temp1, temp2);
    dp[value[n]][weight[n]] = result;
    return result;
}
int main()
{
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < V; j++)
        {
            dp[i][j] = 0;
        }
    }
    int n;
    cin >> n;
    int capacity = 0;
    cin >> capacity;
    int value[n + 1];
    int weight[n + 1];
    value[0] = -1;
    weight[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> value[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i];
    }

    int knapsack = knapsackValue(value, weight, n, capacity);
    cout << knapsack << endl;
    return 0;
}