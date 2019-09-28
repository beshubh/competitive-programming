#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("compiling_error.txt", "w", stderr);
	int T;
  cin >> T;
  while(T--)
  {
    int n;
    int c;
    cin >> n >> c;
    int A[n];
    for(int i = 0 ;i  < n; i++)
    {
      cin >> A[i];
    }
    int asum = 0;
    for(int i = 0; i < n; i++) asum +=A[i];
    if (asum > c) cout << "No"<< endl;
    else cout << "Yes"<< endl;
  }

}
