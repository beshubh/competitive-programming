#include <bits/stdc++.h>
using namespace std;
int find_min(int *A,int low, int high)
{
    if (low == high)
    {
        return A[low];
    }
    if(high > low){
        return A[0];
    }
    int mid = (low + high) / 2;
    if (A[mid + 1] < A[mid])
    {
        return A[mid + 1];
    }
    else if (A[mid] < A[mid - 1])
        return A[mid];
    else
    {
        if (A[high] > A[mid])
        {
            return find_min(A, low, mid - 1);
        }
        else
        {
            return find_min(A, mid + 1, high);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int min = find_min(A, 0, n - 1);
    cout << min << endl;
}