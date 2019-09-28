#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {1,4,5};
    int B[] = {2,3};
    int n = 3;
    int m = 2;
    int median = binary_search(A, B, 0, 2, n, m);
    cout << median << endl;
    return 0;
}