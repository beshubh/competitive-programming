#include<bits/stdc++.h>
using namespace std;
unordered_set<string> permutations(string str){
    unordered_set<string> output;
    if(str.length() == 0){
        output.insert("");
        return output;
    }
    char firstChar = str[0];
    string remString = str.substr(1);
    unordered_set<string> perms  = permutations(remString);
    for(string s: perms){
        for(int i = 0; i <= s.length(); i++){
            string prefix = s.substr(0,i);
            string sufix = s.substr(i);
            output.insert(prefix + firstChar + sufix);
        }
    }
    return output;
}

int main(){
    string s = "abc";
    unordered_set<string> perms = permutations(s);
    for(string s: perms){
        cout << s << endl;
    }

}