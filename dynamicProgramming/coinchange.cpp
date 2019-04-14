// Problem you are given an array of coins i.e denominations now using these coins you have to make the change for the given input with minimum no. of 
// return same 

#include <iostream>
using namespace std;

int dp[71][11];
int coin_change(int n, int *coins, int num_of_coins)
{
    if (n == 0)
    {
        return 1;
    }
    if (num_of_coins == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n][num_of_coins] > -1)
    {
        return dp[n][num_of_coins];
    }
    int first = coin_change(n - coins[0], coins, num_of_coins);
    int second = coin_change(n, coins + 1, num_of_coins - 1);
    dp[n][num_of_coins] = first + second;
    return first + second;
}

int countWaysToMakeChange(int denominations[], int numDenominations, int value){
    int ans = coin_change(value,denominations,numDenominations);
    return ans;
}

int main()
{
    for (int i = 0; i < 71; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            dp[i][j] = -1;
        }
    }
    int numDenominations;
  cin >> numDenominations;
  int* denominations = new int[numDenominations];
  for(int i = 0; i < numDenominations; i++){
    cin >> denominations[i];
  }
  int value;
  cin >> value;

  cout << countWaysToMakeChange(denominations, numDenominations, value) <<endl;

}