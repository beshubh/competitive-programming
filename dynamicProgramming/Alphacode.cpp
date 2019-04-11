// Problem : You are given a number like 123 you have tell but are the possible codes(**remember codes not permutaions**) of it you can generate in alphabet
// e,g : 123 -> abc bac bca lc cl ..... actually you don't have to print all these codes but the number of codes means count
// of codes you can generate

#include <bits/stdc++.h>
using namespace std;

// int num_codes(int *number, int size)
// {
//     if (size == 1)
//     {
//         return 1;
//     }
//     if (size == 0)
//     {
//         return 1; //empty string
//     }
//     int output = num_codes(number, size - 1);
//     if (number[size - 2] * 10 + number[size - 1] <= 26)
//     {
//         output += num_codes(number, size - 2);
//     }
//     return output;
// }

// int num_codes2(int *number, int size, int *dp)
// {
//     if (size == 1)
//     {
//         return 1;
//     }
//     if (size == 0)
//     {
//         return 1; //empty string
//     }
//     if (dp[size] > 0)
//     {
//         return dp[size];
//     }
//     int output = num_codes(number, size - 1);
//     if (number[size - 2] * 10 + number[size - 1] <= 26)
//     {
//         output += num_codes(number, size - 2);
//     }
//     dp[size] = output;
//     return output;
// }

// iterative solution
int m = pow(10, 9) + 7;
int num_codes_iterative(int *input, int size)
{
    int *output = new int[size + 1];
    output[0] = 1;
    output[1] = 1;
    for (int i = 2; i <= size; i++)
    {
        output[i] = 0;
        if (input[i - 1] > 0)
        {
            output[i] =  output[i - 1];
        }
        if(input[i - 2] == 1 || input[i -2 ] == 2 && input[i - 1] < 7)
        {
            output[i] += output[i - 2];
        }
    }
    int ans = output[size];
    delete[] output;
    return ans;
}

int main()
{
    string str;
    while (str[0] != '0')
    {
        cin >> str;
        int n = str.length();
        int *number = new int[n];
        for (int i = 0; i < n; i++)
        {
            number[i] = str[i] - '0';
        }
        int ans = num_codes_iterative(number, n);
        if (str[0] != '0')
        {
            cout << ans << endl;
        }
    }
    return 0;
}