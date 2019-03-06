#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *input,int start, int end,int element){
    if( start < end){
        int mid = (start + end)/2;
        cout << input[mid] << endl;
        if(input[mid] == element){
            return mid;
        }
        if(input[mid] > element){
            return binarySearch(input, start, mid,element);
        }
        if( element > input[mid])
        {
            return binarySearch(input, mid + 1, end, element);
        }
        
    }
    else
    {
        return -1;
    }
    
}
int main(){
    cout << "size :";
    int n;
    cin >> n;
    cout <<"\n Elements : ";
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    int v = -1;
    cout << " Value  : " << endl;
    cin >> v;
    
cout << binarySearch(arr, 0, n,v) << endl;
}