#include<bits/stdc++.h>
using namespace std;
struct Activity
{
    int start;
    int end;
};
bool compareActivity(Activity a1, Activity b1){
    return (a1.end < b1.end);
}
int main(){
    int n;
    cin >> n;
    Activity activity[n];
    int i = 0;
    while(i < n){
        int a;
        int b;
        cin >> a>> b;
        activity[i] = {a,b};
        i++;
        
    }
    sort(activity,activity + n, compareActivity);
    cout << "\n\n";
     for(int i = 0; i < n; i++)
    {
        cout << activity[i].start <<" "<< activity[i].end << endl;
    }g
    
    int res = 1;
    int track =  activity[0].end;
    for(int i = 0; i < n - 1; i++)
    {
        if(track < activity[i + 1].start){
            track = activity[i + 1].end;
            res++;
            
        }
    }
    cout << res << endl;
   
}