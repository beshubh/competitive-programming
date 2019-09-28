#include <bits/stdc++.h>
using namespace std;
unordered_set<string> getPerms(string A)
{
    unordered_set<string> result;
    if(A.length() == 0)
    {
        result.insert("");
        return result;
    }
    char firstChar = A[0];
    string remString = A.substr(1);
    unordered_set<string> perms = getPerms(remString);
    for(string s: perms)
    {
        for (int i = 0; i <= s.length(); i++)
        {
            string perfix = s.substr(0, i);
            string sufix = s.substr(i);
            result.insert(perfix + firstChar + sufix);
        }
    }
    return result;
}
int main()
{
    string a = "abc";
    
    for(string s: res)
    {
        cout << s << endl;
    }
    return 0;
}