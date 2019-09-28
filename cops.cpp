#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--) {
    int m, x, y;
    cin >> m >> x >> y;
    int A[20];
    for(int i = 0; i < m; i++)
    {
      cin >> A[i];
    }
    int cover = x*y;
    int flag = 0;
    int rangeP = 0;
    int rangeF = 0;
    int asum = 0;
    for(int i = 1; i <= 100; i++)
    {
      bool safe = true;
      for(int j = 0; j < m; j++)
      {
        rangeP = A[j] - cover;
        rangeF = A[j] + cover;
        if(i >= rangeP && i <= rangeF){
          safe = false;
        }
      }
      if(safe) asum +=1;
    }
    cout << asum << endl;
  }
}
