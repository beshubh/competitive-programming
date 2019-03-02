#include<iostream>
using namespace std;
int staircase(int n){
    if (n <= 2){
        return n;
    }
    if (n == 3){
        return n + 1;
    }
    return staircase(n-1) + staircase( n - 2) + staircase( n - 3);
}
int main(){
    cout << staircase(10) << endl;
    return 0;
}