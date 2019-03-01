#include<bits/stdc++.h>
using namespace std;
long long  merge( int *a, int s, int mid , int e){
    int i = s;
    int j = mid;
    int k = 0;
    int temp[e-s+1];
    long long  ans = 0;
    while(i < mid && j <= e){
        if(a[i] < a[j]){
            ans += (e-j+1)*(a[i]);
            temp[k++] = a[i++];
            
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while((i < mid)){
        temp[k++] = a[i++];
    }
    while(j <= e){
        temp[k++] = a[j++];
    }
    for(int i = s,k=0; i<=e;i++,k++){
        a[i] = temp[k];
    }
    return ans;
}
long long mergesort(int *arr , int s , int e){
    long long count = 0;
    if(e > s){
        int mid = (s+e)/2;
        long long countLeft = mergesort(arr,s,mid);
        long long countRight = mergesort(arr,mid+1,e);
        long long mycount = merge(arr,s,mid + 1, e);
        return (mycount + countLeft + countRight);
    }
    return count;
}
long long solve(int *a,int n){
    long long ans = mergesort(a,0,n - 1);
    return ans;
}
int main(){
    int n = 0;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
         cin >> arr[i];
    }
    cout << solve(arr,n) << endl;
    
}