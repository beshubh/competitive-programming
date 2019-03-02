#include<bits/stdc++.h>
using namespace std;
/**
 * well this problem could be solved by just iterating over two strings and making the pairs but its just 
 * a practice of recursion
 * */

string getString(int a){
      if(a == 2){
        return "abc";
    }
      if(a == 3){
        return "def";
    }
      if(a == 4){
        return "ghi";
    }
      if(a == 5){
        return "jkl";
    }
      if(a == 6){
        return "mno";
    }
      if(a == 7){
        return "pqrs";
    }
      if(a == 8){
        return "tuv";
    }
      if(a == 9){
        return "wxyz";
    }
    else
    {
        return " ";
    }
    
}
int keypad(int num, string output[]){
    if( num == 0 ){
        output[0] = "";
        return 1;
    }
    int lastDigit = num % 10;
    int smallNUmber = num/10;
    int smallOutput = keypad(smallNUmber, output);
    string options = getString(lastDigit);
    int len = options.length();
    // making copies the result given smaller ouput like if it is giving d, e, f and in options i have abc then it will make three copies
    //each having d, e, f | d, e, f | d, e, f
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < smallOutput; j++){
            output[j + (i + 1)*smallOutput] = output[j];   
        }
    }
    int k = 0;
    for (int i = 0; i < len; i++){
        for (int j = 0; j < smallOutput; j++){
            output[k++] = output[k] + options[i];
        }
    }
    return smallOutput * len;
}
int main(){
    int n;
    cin >>n;
    string * output = new string[1000];
    int count = combinations(n, output);
    for(int i = 0; i < count; i++){
        cout << output[i]<< endl;
    }
}