#include<bits/stdc++.h>
using namespace std;
int getCodes(string input,string output[10000]){
    if(input.length() == 0){
        output[0] = "";
        return 1;
    }
    int firstChar = input[0] - '0';
    char s = getChar(firstChar);
    string output1[1000],output2[1000];
    int size1 = getCodes(input.substr(1), output1)

}
char  getChar(int i){
    return (char)i + 'a' - 1;
}
int main(){
cout <<" This is the char :"<< getChar(3);

}