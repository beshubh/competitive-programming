#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, budget, hotels, weeks;
    scanf("%d %d %d %d", &n, &budget, &hotels, &weeks);
    int prices[hotels];
    int rooms[3][3];
    for (int i = 0; i < hotels; i++)
    {
        scanf("%d", &prices[i]);
        for (int j = 0; j < weeks; j++)
        {
            scanf("%d", &rooms[i][j]);
        }
    }
    int cost = INT_MAX;
    int temp_cost = INT_MAX;
    for (int i = 0; i < hotels; i++)
    {
        if(prices[i]*n <= budget)
        {
            bool flag = true;
            for (int j = 0; j < weeks; j++)
            {
               if(rooms[i][j] < n){
                   flag = false;
                   break;
               } 
            }
            if(flag){
                temp_cost = min(temp_cost, prices[i] * n);
                cost = min(temp_cost, cost);
            }
        }
    }
    if (cost != INT_MAX)
        printf("%d ", cost);
    else
    {
        printf("stayhome");
    }
    
}