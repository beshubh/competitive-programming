#include<iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e){
    int i = s;
    int j = mid + 1;
    int k = 0;
    int * temp = new int[e - s + 1];
    while( i <= mid && j <= e){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while( i <= mid){
        temp[k++] = arr[i++];
    }
    while( j <= e){
        temp[k++] = arr[j++];
    }
    for( i=s,k = 0; i <= e; i++, k++)
    {
        arr[i] = temp[k];
    }
}
void merge_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s + e)/2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1,e);
    merge(arr, s, mid, e);
}
void mergeSort(int input[], int size){
	merge_sort(input, 0 , size - 1);
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}