#include<iostream>
using namespace std;
int main(){
    string s = "12345";
    int n  = s.length();
    int *nums = new int[n];
    for(int i = 0; i < n;i++){
        nums[i] = s[i] - '0';
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << endl;
    }
    return 0;
}