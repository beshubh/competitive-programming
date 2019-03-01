#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        char ch[n+1];
        strcpy(ch,s.c_str());
        int sum = 0;
        for(int i =0;i < n;i++){
            sum+=ch[i] - '0';
        }
        cout<<sum<<endl;
    }
    
}