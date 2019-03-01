#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int cows,ll pos[], int n, int d){
    int count = 1;
    ll last_position = pos[0];
    for( int i = 1; i < n; i++)
    { 
        if(pos[i] - last_position >= d){
            last_position = pos[i];
            count++;
        }
        if(count == cows){
            return true;
        }
    }
    return false;
}
int main(){
    int t = 0;
    cin >> t;
    while( t-- ){
        int n = 0;
        int cows = 0;
        cin >> n >> cows;
        ll * positions = new ll[n];
        for (int i = 0; i < n; i++){
            cin >> positions[i];
        }
        
        sort(positions,positions + n);
        ll start  = 0;
        ll end  = positions[n-1] - positions[0];
        ll ans = -1;
        while(start <= end){
            ll mid  = start + (end - start)/2;
            if(check(cows,positions,n,mid)){
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
    return 0;
}