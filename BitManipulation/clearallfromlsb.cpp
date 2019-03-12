#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin >> n >> i;
    int a = 1 << (i + 1);
    int b = a - 1;
    int m = ~b;
    int ans = n & m;
    cout << ans << endl;
    
}