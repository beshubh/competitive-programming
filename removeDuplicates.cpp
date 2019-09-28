#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(char *str)
{
    int n = strlen(str);
    unordered_set<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.find(str[i]) == st.end())
        {
            st.insert(str[i]);
        }
        else
        {
            str[i] = '|';
        }
        
    }
}
int main()
{
    char str[] = "aabcd";
    remove_duplicates(str);
    cout << str << endl;

    return 0;
}