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

#define printList(i, n, a)    \
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
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int low = 0;
    int high = n - 1;
    int k = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // cout << arr[mid] << "\n";
        if(arr[mid] == target)
        {
            k = mid;
            break;
        }
        if(arr[0] <= arr[mid])//left part is sorted
        {
            if(arr[0] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }    
        else{
            if(arr[mid] < target && target <= arr[n - 1])
                low = mid + 1;
            else
                high = mid - 1;
        }

    }
    cout << k << endl;
}

