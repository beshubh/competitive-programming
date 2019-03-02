#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/**
 * here we can take example of abc so this function will do the following steps
 * when abc is give it will be ignoring the first character and callin on the next remaining characters
 * 1 -> abc
 * 2-> bc
 * 3-> c
 * 4-> ""
 * ouput[0] = ""
 * then for loop will run and append the 0th character for smallOuput times which will be one in this case 
 * then ouput [1] = "" + c
 * and it goes on and returing the whole subsequence
 * 
 * */
int subseq(string input,string *output){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutput = subseq(smallString, output);
    for(int i  = 0; i < smallOutput; i++)
    {
        output[i + smallOutput] = input[0] + output[i];
    }
    return 2 * smallOutput;
}
int main(){
    string input ;
    cin >> input;
    int n = input.size();
    int size = pow(2,n);
    string *output = new string[size];
    int count = subseq(input, output);
    for(int i = 0; i < count; i++){
        cout << output[i] << endl;
    }

}