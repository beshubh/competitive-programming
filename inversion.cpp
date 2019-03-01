#include<bits/stdc++.h>
using namespace std;
int  merge(int *a , int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    int *temp = new int[s+e];
    int ans  = 0;
    while(i <= mid && j <= e){
        if(a[i] > a[j]){
            temp[k++] = a[i++];
            ans++;
        }
        else
        {
            temp[k++] = a[j++];
        }
        
    }
    while( i<= mid){
        temp[k++] = a[i];
    }
    while( j <= e){
        temp[k++] = a[j];
    }
    for(int i = s; i < e; i++){
        a[i] = temp[i];
    }
    return ans;
    
}
int  mergeinversion(int *a,int s, int e){
    if(s>=e){
        return 0;
    }
    int mid = (s + e)/2;
    mergeinversion(a,s,mid);
    mergeinversion(a,mid+1,e);
    int  ans = merge(a,s,e);
    
    return ans;
}
void solve(int A[], int n)
{
	int s = 0;
    int e = n -1;
   cout <<  mergeinversion(A,s,e);
}
int main(){
    int n;
    cout << "Enter n:\n";
    cin>>n;
    cout << "Enter elements\n";
    int * array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    solve(array,n);
}
