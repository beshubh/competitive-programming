#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    int ans = 0;
    cin >> n >> k;
    int *arr = new int [n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for ( int i = 0,j = 0;i < n,j<n;){
        if(arr[j] - arr[i] < k){
            j++;
        }
        else
        {
            ans += n - j;
            i++;
        }
        
    }
    cout << ans << endl;
    return 0;
}