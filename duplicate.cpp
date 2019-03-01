#include<bits/stdc++.h>
using namespace std;

void FindTriplet(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    for (int i=0; i < size; i++){
        for(int j = i+1; j < n - 2;j++){
            int t =arr[i] + arr[j] + arr[j+1];
            if (t == x){
                cout << arr[i] << " " << arr[j] << " " << arr[j+1] << endl;
            }
        }
    }

}
int main(){

}