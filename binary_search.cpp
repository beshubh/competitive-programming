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
#define printStr(s) printf("%s\n",s );
#define printInt(t) printf("%d\n",t );
#define ll long long;
#define pb push_back;

#define printList(i,n,a) for(int j = i; j < n; j++) cout << (a[j]) <<" ";

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return gcd(b,a % b);
  }
}
int lcm(int a, int b)
{
  return (a*b)/gcd(a,b);
}
int extendedGcd(int a, int b, int & x, int & y) {
    if (a == 0) {
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

vector<int> get_primes(int n){
  bool isPrime[n+1];
  for(int i = 0;i <= n; i++) isPrime[i] = true;
  isPrime[0] = false;
  isPrime[1] = false;
  vector<int> res;
  for(int i = 2; i <= n; i++)
  {
    if(isPrime[i]){
      res.push_back(i);
      for(int j = i; j <= n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  return res;
}
int binary_search(int lo, int hi,std::vector<int> A,int target){
  if(lo <= hi)
  {
    int mid = lo + (hi - lo) /2;
    if (A[mid] == target){
      return mid;
    }
    else{
      if(target < A[mid]) return binary_search(lo, mid -1, A, target);
      if(target > A[mid]) return binary_search(mid + 1, hi, A, target);
    }
  }
  else{
    return -1;
  }
}
int main(int argc, char const *argv[]) {
  // int t;
  // readInt(t);
  // while (t--) {
  //
  // }
  int a = 9;
  int b = 20;
  printInt(gcd(a,b));
  printInt(lcm(a,b))
  vector<int> primes  = get_primes(15);
  printList(0,primes.size(),primes);
  int x = binary_search(0,primes.size() - 1, primes,90);
  printInt(x);
  return 0;
}
