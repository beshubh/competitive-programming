// Problem : Fibonacci sequence with dp
#include <iostream>
using namespace std;
// recursive memoization technique
int fib(int n, int *arr)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (arr[n] > 0)
    {
        return arr[n];
    }
    int output = fib(n - 1, arr) + fib(n - 2, arr);
    arr[n] = output;
    return output;
}
// iterative
int fib1(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    int output = arr[n];
    delete[] arr;
    return output;
}
int main()
{
    int n = 0;
    cin >> n;
    int *arr = new int[n];
    int output = fib1(n);
    cout << output << endl;
}