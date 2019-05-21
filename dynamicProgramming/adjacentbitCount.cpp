#include<bits/stdc++.h>
using namespace std;
int func(int n, int k, int first)
{
    if(n == 1){
        if(k == 0)
        {
            return 1;
        }
    }   
    if( k < 0)
    {       
        return 0;
    }
    cout << n << " " << k << endl;
    int temp1 = func(n - 1, k - 1, 1);
    int temp2 = func(n - 1, k, 0);
    return temp1 + temp2;
}
int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    int ans = func(n,k,0);
    cout << ans << endl;
    return 0;
    
}