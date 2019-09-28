#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--) {
      long long n;
      cin >> n;
      long long ones = 0;
      string str;
      cin >> str;
      for(int i = 0;i < n; i++){
        if (str[i] == '1')
        {
          ones +=1;
        }
      }
      cout << ones*(ones + 1)/2;
  }
}
