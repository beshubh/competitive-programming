#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int *shops = new int[n];
    for(int i = 0; i < n; i++){
        cin >> shops[i];
    }
    int *prefix_sum = new int[n];
    for(int i = 0; i < n; i++){
        prefix_sum[i] = 0;
    }
    prefix_sum[0] = shops[0];
    for( int i = 1; i < n; i++){
        prefix_sum[i] = shops[i] + prefix_sum[ i - 1];
    }
    int q = 0;
    cin >> q;
    while( q-- ){
        int price = 0;
        cin >> price;
        int start = 0;
        int end = n - 1;
        int ans = 0;
        int remaining_price = 0;
        while(start <= end){
            int mid = (start + end)/2;
            cout << mid << endl;
            if( price == prefix_sum[mid]){
                ans = mid + 1;
                remaining_price = price - prefix_sum[mid];
                break;
            }
            if( price > prefix_sum[mid] && price <prefix_sum[mid + 1]){
                ans = mid + 1;
                remaining_price = price - prefix_sum[mid];
                end = mid - 1;
            }
            if( price > prefix_sum[mid]){
                start = mid + 1;
            }

            if( price < prefix_sum[mid]){
                end = mid - 1;
            }
            if( price < prefix_sum[mid] && price > prefix_sum[mid - 1 ]){
                ans  = mid - 1 +1;
                remaining_price = price - prefix_sum[ mid - 1]; 
                start = mid + 1;
            }
        }
        cout << ans << " " << remaining_price << endl;
        
    }
    
}