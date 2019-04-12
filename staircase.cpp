#include <iostream>
using namespace std;
long staircase1(long n, long *arr)
{
    if (n <= 2)
    {
        return n;
    }
    if (n == 3)
    {
        return n + 1;
    }
    if (arr[n] > 0)
    {
        return arr[n];
    }
    long output = staircase1(n - 1,arr) + staircase1(n - 2,arr) + staircase1(n - 3,arr);
    arr[n] = output;
    return output;
}
int main()
{
    long arr[11];
    for(int i = 0; i < 11; i++){
        arr[i] =-1
    }
    cout << staircase(10,arr) << endl;
    return 0;
}