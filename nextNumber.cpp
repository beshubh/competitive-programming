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
#define readStr(t) scanf("%s", &t);
#define readInt(t) scanf("%d", &t);
#define printStr(s) printf("%s", s);
#define printInt(t) printf("%d", t);
#define ll long long
#define pb push_back;

#define printList(i, n, a)      \
    for (int j = i; j < n; j++) \
        cout << (a[j]) << " ";
#define printListAsInt(i, n, a) \
    for (int j = i; j < n; j++) \
        cout << (a[j]);
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
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // cout << " hello there\n";
        ll idx = n - 1;
        ll i = 0;
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                idx = i;
                break;
            }
        }
        // printInt(i);
        if (i == -1)
        {
            cout << -1 << "\n";
            continue;
        }
        for (int i = n - 1; i > idx; i--)
        {
            if(arr[i] > arr[idx])
            {
                swap(arr[i], arr[idx]);
                break;
            }
        }
        reverse(arr.begin() + idx + 1, arr.end());
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[j];
        }
        cout << "\n";
    }

    return 0;
}
