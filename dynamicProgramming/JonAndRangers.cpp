/**
 * Jon Snow and his favourite number
Send Feedback
Jon Snow now has to fight with White Walkers. He has n rangers, each of which has his own strength. 
Also Jon Snow has his favourite number x. Each ranger can fight with a white walker only if the 
strength of the white walker equals his strength. He however thinks that his rangers are weak and
 need to improve. Jon now thinks that if he takes the bitwise XOR of strengths of some of rangers 
 with his favourite number x, he might get soldiers of high strength. So, he decided to do the following operation k times:
Arrange all the rangers in a straight line in the order of increasing strengths.
Take the bitwise XOR of the strength of each alternate ranger with x and update it's strength.
Suppose, Jon has 5 rangers with strengths [9, 7, 11, 15, 5] and he performs the operation 1 
time with x = 2. He first arranges them in the order of their strengths, [5, 7, 9, 11, 15].
 Then he does the following:
The strength of first ranger is updated to 5 xor 2, i.e. 7.
The strength of second ranger remains the same, i.e. 7.
The strength of third ranger is updated to 9 xor 2, i.e. 11.
The strength of fourth ranger remains the same, i.e. 11.
The strength of fifth ranger is updated to 15 xor 2, i.e. 13.
The new strengths of the 5 rangers are [7, 7, 11, 11, 13]
Now, Jon wants to know the maximum and minimum strength of the rangers after performing the
 above operations k times. He wants your help for this task. Can you help him?
 * */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    int x;
    cin >> n;
    cin >> k;
    cin >> x;
    int * arr = new int[1025]();
    for(int i = 0; i< n; i++)
    {
        int a =0;
        cin >> a;
        arr[a]++;
    }
    int * output = new int[1025]();
    int count = 0;
    
    while(k--)
    {
        for(int i = 0; i < 1025; i++)
        {
            if(arr[i] == 0) continue;
            int extra_count = arr[i];
            if(arr[i] % 2 == 0){
                arr[i] /= 2;
                output[x ^ i] += arr[i];
            }
            else
            {
                if(count % 2 == 0){
                    int temp = (arr[i] + 1)/2;
                    arr[i] -= temp;
                    output[x^i] += temp;
                }
                else
                {
                    int temp = arr[i]/2;
                    arr[i] -= temp;
                    output[x^i] += temp;
                }
                
            }
            count += extra_count;
        }
    }
    for(int i = 0; i < 1025; i++)
    {
        arr[i] += output[i];
    }
    int min = 0;
    int max = 0;
    for(int i = 0; i < 1025; i++)
    {
        if(arr[i] != 0){
            min = i;
            break;
        }
    }
    for(int i = 1024; i >= 0; i--)
    {
        if(arr[i] != 0){
            max = i;
            break;
        }
    }
    cout << max << " " << min << endl;
    return 0;
}