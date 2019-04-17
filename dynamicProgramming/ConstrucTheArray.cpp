// If there is someone other than me is seeing this problem then i  want to say that 
// you will not understand this problem please refer to some tutorial :)
#include<iostream>
using namespace std;
long  countWays(int n,int k, int x)
{
    int dp[n + 1][2];
    // if the first element is 1
    if(x == 1)
    {
        // then there is only one way to place a one here
        dp[0][0] = 1;
    }
    else
    {
        // the first element needs to be 1 
        // there is no way to place a non-one here 
        dp[0][1] = 0;
    }
    // if the first element was 1 then
    if(x == 1)
    {
        // we can't fill this element with 1
        //means we can fill this place 0 1's and 
        //k - 1 non-ones
        dp[1][0] = 0;
        dp[1][1] = k - 1;

    }
    else
    {
        // else if first element was not 1 then
        // we can't fill this place with same no. as the first no.
        // and we can fill this place with only one 1
        // and then the no. which is diff than the previous no. and 1
        // therefore we can fill this place in m - 2 ways
        dp[1][0]  = 1;
        dp[1][1] = k - 2;
    }
    for(int i = 2; i < n; i++)
    {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = dp[i - 1][0] * (k - 1) + dp[i -1][1] * (k - 2);

    }
    // last element needs to be so return 
    return dp[n - 1][0];
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >>k ;
    int x;
    cin >> x;
    int ans = countWays (n,k,x);
    cout << ans << endl;
    return 0;
}