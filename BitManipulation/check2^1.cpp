#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = n - 1;
    int c = n & a;
    if (c == 0){
        cout << "true" <<endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    
    

}