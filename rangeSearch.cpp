#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define readStr(t) scanf("%s\n", &t);
#define readInt(t) scanf("%d\n", &t);
#define printStr(s) printf("%s\n", s);
#define printInt(t) printf("%d\n", t);
#define ll long long;
#define pb push_back;

#define printList(i, n, a)      \
    for (int j = i; j < n; j++) \
        cout << (a[j]) << " ";

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int extendedGcd(int a, int b, int &x, int &y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = extendedGcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

vector<int> get_primes(int n)
{
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++)
        isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    vector<int> res;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            res.push_back(i);
            for (int j = i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return res;
}

bool co_primes(int a, int b)
{
    if (gcd(a, b) == 1)
        return true;
    else
    {
        return false;
    }
}
vector<int> searchRange(const vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    if (n == 1)
    {
        vector<int> r;
        if (B == A[0])
        {
            r.push_back(0);
            r.push_back(0);
            return r;
        }
        else
        {
            r.push_back(-1);
            r.push_back(-1);
        }
    }
    int target = B;
    int low = 0;
    int high = n - 1;
    int l = -1;
    int r = -1;
    // while (low < high)
    // {
    //     int mid = (low + mid) / 2 + 1;
    //     // cout << low << " " << high << "\n";
    //     if(A[mid] <= target)
    //     {
    //         low = mid;
    //     }
    //     if(A[mid] > target)
    //     {
    //         high = mid - 1;
    //     }
    // }
    if(A[low] == target)
    {
        r = high;
    }
    // binary search for left value of range
    low = 0;
    high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        // cout << A[mid] << "\n";
        if(A[mid] >= target)
        {
            high = mid;
        }
        if(A[mid] < target)
        {
            low = mid + 1;
        }
    }
    if(A[low]== target)
        l = low;
    cout << low << " " << high << endl;
    vector<int> res;
    res.push_back(l);
    res.push_back(r);
    return res;
}

int main(int argc, char const *argv[])
{
    int A[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
               2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4,
               4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6,
               6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
               7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10,
               10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> arr;
    int n = sizeof(A) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        arr.push_back(A[i]);
    }
    vector<int> res = searchRange(arr, 10);
    printList(0, res.size(), res);
}
