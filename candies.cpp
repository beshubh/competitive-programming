#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int students, ll *boxes, int n, ll maxCandies){
    ll counter = 0;
    for ( int i = 0; i < n; i++ ){
        counter += boxes[i]/maxCandies;
        if(counter >= students){
            return true;
        }
    }
    return false;
    
}
int main(){
    int t = 0;
    cin >> t;
    while( t--){
        int n = 0;
        int k = 0;
        cin >> n >> k;
        ll *boxes = new ll[n];
        for ( int i = 0; i < n; i++ ){
            cin >> boxes[i];
        }
        sort( boxes, boxes + n);
        if( k == 1){
            cout << boxes[ n - 1];
        }
        else{
        ll start = 0;
        ll end = boxes[n-1];
        ll ans = -1;
        while( start <= end){
            ll mid = start + ( end - start )/2;
            if(check( k, boxes, n, mid)){
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            } 
        }
        cout << ans << endl;
    }
    }
}