#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long x, y;
    cin >> x >> y;
    string str;
    cin >> str;
    long ans = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        
        if (str[i] == '0' && str[i - 1] == '1' && zero > 0)
        {
            
            ans += min(x, y);
        }
        if (str[i] == '0')
        {
            zero++;
        }
    }
    if (zero > 0)
    {
        cout << ans + y << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}