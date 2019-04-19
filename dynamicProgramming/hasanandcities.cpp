#include <bits/stdc++.h>
using namespace std;
#define N 3001
double x[N];
double y[N];
double f[N];
long double dp[N];
long double distance(int a, int b){
    long double dist = sqrt( ((y[b] - y[a]) * (y[b] - y[a])) + ( (x[b] - x[a])*(x[b] - x[a]) ));
    return dist;
}
int main()
{
    int n;
    cin >> n;
   
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i] >> f[i];
    }
    dp[1] = f[1];
    for(int i = 2; i <= n; i++)
    {
        dp[i] = -1ll<<60;
        for(int j = 1; j < i; j++)
        {
            dp[i] = max(dp[i],dp[j] - distance(j,i));
        }
        dp[i] += f[i];
    }
    cout.precision(6);
    cout << fixed<< dp[n]<< endl;
    return 0;
}