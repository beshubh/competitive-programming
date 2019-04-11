#include <bits/stdc++.h>
using namespace std;
int m = pow(10,9) + 7;
int no_of_trees( int h){
    if( h ==  1 || h == 0){
        return 1;
    }
    
    int x = no_of_trees(h - 1);
    int y = no_of_trees(h - 2);
    long res1 = (long) x * x;
    long res2 = (long) x * y * 2;
    int ans1 = (int)(res1 % m);
    int ans2 = (int)(res2 % m);

    return (ans1 + ans2) % m;   
}
int main()
{
    int h;
    cin >> h;
    int ans = no_of_trees(h);
    cout << ans  << endl;
}