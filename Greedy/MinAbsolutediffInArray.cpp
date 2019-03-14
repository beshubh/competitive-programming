#include<bits/stdc++.h>
using namespace std;
int minAbsoluteDiff(int * a, int n){
    sort(a, a + n);
    int min = a[n - 1];
    for(int i = 1; i < n; i++){
        if( a[i] - a[i - 1] < min){
            min = a[i] - a[i - 1];
        }
    }
    return min;
}

int main()
{
    int n;
    cin >> n;
    int *arr =new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << minAbsoluteDiff(arr, n) << endl;
    return 0;

}