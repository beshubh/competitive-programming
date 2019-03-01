#include<iostream>
using namespace std;
void replace(char s[],char c1, char c2){
    if(s[0] =='\0'){
        return;
    }
    if(s[0] != c1){
        replace(s + 1,c1,c2);
    }
    else if(s[0] == c1){
        s[0] = c2;
        replace(s+1, c1, c2);
    }    
}
void removeConsecutiveDuplicates( char *input){
    if( input[0] == '\0'){
        return;
    }
    if(input[0] != input[1]){
        removeConsecutiveDuplicates(input + 1);
    }
    if( input[0] == input[1] ){
        int i = 1;
        for( ; input[i] != '\0'; i++){
            input[i-1] = input[i];
        }
        input[i-1] = input[i];
        removeConsecutiveDuplicates(input);
    }
}
int main(){
    char s[] = "aabccba";
    removeConsecutivDuplicates(s);
    cout<< s << endl;
}