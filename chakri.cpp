#include<bits/stdc++.h>
using namespace std;
int main() {
  	int n;
  	cin>>n;
  	int* arr=new int[n];
  	for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  	int mini = arr[0];
  	int maxi = arr[1];
    int res = 0;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(maxi < arr[i]){
            maxi = arr[i];
            c = i;
        }
        if( mini > arr[i] && c > i){
            mini = arr[i];
        }
        if ( maxi > arr[i]){
            res = maxi - mini;
        }
    }
    cout<<res<<endl;

    
  	
}