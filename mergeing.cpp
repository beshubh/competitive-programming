#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int l, int right){
    int i = l;
    int mid  = (l+right)/2;
    int j = mid + 1;
    int k = 0;
    int temp[right - l +1];
    while( i<= mid && j <= right){
        if( a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while( i <= mid ){
        temp[k++] = a[i++];
    }
    while( j <= right){
        temp[k++] = a[j++];
    }
    for(i = l, k = 0;i<=right;i++,k++){
        a[i] = temp[k];
    }
    

}
void mergesort(int *a ,int left, int right ){
    if( left >= right){
        return;
    }
    int mid  = (left + right)/2;
    mergesort(a, left, mid);
    mergesort(a,mid+1,right);
    merge(a,left,right);
}
int main(){
    int n;
    cout << " size: \n";
    cin >> n;
    int * a = new int [n];
    cout << " Elements: \n";
    for(int i =0;i < n; i++){
        cin >> a[i];
    }
    mergesort(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return  0;
}