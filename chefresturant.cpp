#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    while( t--){
        int n,m=0;
        cin >> n ;
        cin >> m;
        vector<pair<int,int>> interval;
        for(int i = 0;i < n; i++){
            int a,b;
            cin >> a >> b;
            interval.push_back(make_pair(a,b));
        }
        sort(interval.begin(),interval.end());
        while(m--){
            int current_time;
            cin >> current_time;
            int position = lower_bound(interval.begin(),interval.end(),make_pair(current_time,0)) - interval.begin();
            if (position == 0){
                cout << interval[0].first -current_time << endl;
            }
            else{
                int ans = -1;
                if( interval[position - 1].second > current_time){
                    ans  = 0;
                }
                else if( position < interval.size()){
                    ans  = interval[position].first - current_time;
                }
                cout << ans << endl;
            }
        }
        
    }
}