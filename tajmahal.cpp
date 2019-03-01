#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    int t = 0;
    arr[0] = -1;
    for( int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for ( int i = 1; i <= n; i++){
        if( (i + t*n ) >= arr[i]){
            cout << i << endl;
            break;
        }
        if(i == n){
            t++;
        }
    }
    
    delete []arr;
}