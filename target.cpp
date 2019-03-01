#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int target,int n){
    int start = 0;
    int end = 0;
    int sum = arr[0];
    while(start < n && end < n){
        if(sum < target){
            end++;
            sum+=arr[end];
        }
        else if (sum > target)
        {
            sum-=arr[start];
            start++;
        }
        else
        {
            cout<<"true"<<endl;
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            return;
        }
        
        
    }
    cout<<"false";
    
}
int main(){
    int n,target;
    cin>>n>>target;
    int* arr=new int[n];
    int* temp =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,target,n);
}