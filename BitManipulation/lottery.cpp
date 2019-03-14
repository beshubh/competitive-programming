#include <bits/stdc++.h>

using namespace std;

// Complete the winningLotteryTicket function below.
long winningLotteryTicket(vector<string> tickets) {
    long long * count = new long long[1025];
    for(int i = 0; i < tickets.size(); i++){
        string s = tickets[i];
        long long mask = 0;
        for(int j = 0; j < s.length(); j++){
            mask |=(1 << (s[j] -'0') );
        }
        count[mask]++;
    }
    // for(int i = 0; i < 1025; i++)
    // {
    //     if(count[i] >= 1) cout << "["<<i<<"]"<< count[i] << endl;
    // }
    
    long long res = 0;
    for(int i = 0; i < 1024; i++){
        for(int j = i; j < 1024; j++){
            if(count[i] >= 1 && count[j] >= 1){
                long long a = i | j;
                if( a == 1023){
                    // cout << i << " " << j << endl;
                    res++;
                }
            }
    }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> tickets(n);

    for (int i = 0; i < n; i++) {
        string tickets_item;
        getline(cin, tickets_item);

        tickets[i] = tickets_item;
    }

    long result = winningLotteryTicket(tickets);

    cout << result << "\n";
    return 0;
}
