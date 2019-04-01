#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        int p;
        cin >> i;
        cin >> p;
        int a = i + 1;
        for (int j = 1; j <= p; j++)
        {
            if (a > 11)
            {
                a = a - 11 - 1;
            }
            else
            {
                a++;
            }
        }
        if (i + p > 11)
        {
            cout << a << endl;
        }
        else
        {
            cout << a - 1 << endl;
        }
    }
}
