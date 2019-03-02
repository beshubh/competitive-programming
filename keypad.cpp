#include<bits/stdc++.h>
using namespace std;

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
void keypad(int num, string output){
    if( num == 0){
        cout << output << endl;
        return;
    }
    int lastDigit = num % 10;
    int smallNumber = num /10;
    string options = getString(lastDigit);
    for(int i = 0; i < options.length(); i++){
        keypad(smallNumber, options[i] + output );
    }

}

int main(){
    int n;
    cin >> n;
    keypad(n, "");
}