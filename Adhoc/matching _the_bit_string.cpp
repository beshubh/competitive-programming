#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int cost = 0;
    for(int i = 0; i  < n; ){
        if(s[i] != t[i]){
            if(s[i] != s[i + 1] && s[i + 1] != t[i + 1]){
                cost++;
                i += 2;
            }
            else
            {
                cost++;
                i++;
            }
            

        }
        else
        {
            i++;
        }
        
    }
    cout << cost << endl;
    return 0;
}