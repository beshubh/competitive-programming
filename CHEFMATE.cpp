#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("compiling_error.txt", "w", stderr);
	int T;
  cin >> T;
  while (T--) {
      int x, y, k, n;
      cin >> x >> y >> k >> n;
      bool flag = false;
      int i = 0;
      for (;i < n; i++)
      {
          int p,c;
          cin >> p >> c;
          if(p >= x-y && c <= k){
            flag = true;
            break;
          }
      }
      if(flag) cout << "LuckyChef"<<' ';
      else cout << "UnluckyChef"<< ' ';
    }

}
