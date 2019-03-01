#include<iostream>
using namespace std;
long long merge(int *a,int left,int mid,  int right){
    int i = left;
    int j = mid;
    int temp[right - left +1];
    int k = 0;
    long long count = 0;
    while(i < mid && j <= right){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else
        {
            count += right - i;
            temp[k++] = a[j++];
        }
    }
    while(i < mid){
        temp[k++] = a[i++];
    }
    while(j<=right){
        temp[k++] = a[j++];
    }
    for( i = left, k = 0; i <= right; i++, k++)
    {
        a[i] = temp[k];
    }
    
    return count;
}
long long countinversion(int *a,int left,int right){
    long long count = 0;
    if(right > left){
        int mid = ( left + right)/2;
        long long countleft = countinversion(a,left, mid);
        long long countright = countinversion(a, mid+1, right);
        long long mycount = merge(a, left, mid+1, right);
        return mycount + countleft + countright;
    }
    return count;
}
long long solve(int *a , int n){
 long long ans = countinversion(a,0,n-1);
 return ans;
}
int main(){
    int n;
    cout << " Size :" << endl;
    cin >> n;
    int* a = new int[n];
    cout << "Elements \n";
    for(int i = 0; i <  n; i++)
    {
        cin >> a[i];
    }
   cout << solve(a,n) << endl;
}