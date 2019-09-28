#include<bits/stdc++.h>
using namespace std;
int getSets(string s, int y)
{
    int l = s.length();
    int num = 0;
    int cnt = 1;
    for (int i = 0; i < l; i++)
    {
        num = num * 10 + (s[i] - '0');
        cout << num << endl;
        cout << "count " << cnt << endl;
        if(num > y)
        {
            cnt++;
            num = s[i] - '0';
            cout << "count 2 : " << cnt << endl;
        }
    }
    return cnt;
}

int main()
{
    string s = "1234";
    int sets = getSets(s,4);
    cout << sets << endl;
    return 0;
}