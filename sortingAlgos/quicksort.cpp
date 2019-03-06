#include<iostream>
using namespace std;
#include<algorithm>
int make_partition(int *arr, int si, int en){


    int i = si - 1;
    int j = si;
    int pivot = arr[en];

    for (; j< en; j++){
        if( arr[j] <=  pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[en]);

    return  i + 1;
}
void quicksort(int *arr, int si, int en){
    if(si >= en){
        return;
    }
    int c = make_partition(arr, si, en);
    cout << c <<endl;
    quicksort(arr, si, c - 1);
    quicksort(arr, c + 1, en);
}
void quickSort(int *arr, int size){
    quicksort(arr, 0, size - 1);
}
int main(){
    int a[10];


    int size_of_array = 0;
    cin >> size_of_array;
    int *arr = new int[size_of_array];
    for(int i = 0; i < size_of_array; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, size_of_array - 1);
    for(int i = 0; i < size_of_array; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}