#include<bits/stdc++.h>
using namespace std;
int subseq(string input, string *output){
    // base case 
    if(input.empty()){
        output[0] = "";;
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutput = subseq(smallString,output);
    for(int i = 0; i < smallOutput; i++){
        output[i + smallOutput ] = input[0] + output[i];
    }
    return 2 * smallOutput;
}

int main(){
    string input; 
    cin >> input;
    int c = input.length();
    int n = pow(2,c);
    string *ouput = new string[n];
    int scount = subseq(input, ouput);
    for(int i = 0; i < scount; i++){
        cout << ouput[i] << endl;
    }

}