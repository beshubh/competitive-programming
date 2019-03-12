#include<iostream>
using namespace std;
int chekbit(int n, int i){
    i = i - 1;
    int a = 1 << i;
    int c = n & a;
    if ( c == 0 ){
        return -1;
    }
    else
    {
        return c;
    }
    
}
int main(){
    int n;
    cin >> n;
    int c = 0;
    while(c <= n){
        int a = chekbit(n,c);
        if (a  != -1){
            cout << a << endl;
            break;
        }
        c++;
    }
    
}