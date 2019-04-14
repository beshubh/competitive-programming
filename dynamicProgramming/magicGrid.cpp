#include <bits/stdc++.h>
using namespace std;
int minimum_health(int **hm, int r, int c)
{
    hm[r - 1][c - 1] = 1;
    for (int i = c - 2; i >= 0; i--)
    {
        hm[r - 1][i] = hm[r - 1][i + 1] - hm[r - 1][i];
        if (hm[r - 1][i] <= 0)
            hm[r - 1][i] = 1; //reset
    }
    for (int i = r - 2; i >= 0; i--)
    {
        hm[i][c - 1] = hm[i + 1][c - 1] - hm[i][c - 1];
        if (hm[i][c - 1] <= 0)
        {
            hm[i][c - 1] = 1; //reset
        }
    }
    for (int i = r - 2; i >= 0; i--)
    {
        for (int j = c - 2; j >= 0; j--)
        {
            hm[i][j] = min(hm[i + 1][j], hm[i][j + 1]) - hm[i][j];
            if (hm[i][j] <= 0)
            {
                hm[i][j] = 1; //reset condition because minimum health required to go anywhere is 1
            }
        }
    }
    return hm[0][0];
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int R, C;
        cin >> R >> C;
        int **hm = new int *[R];
        for (int i = 0; i < R; i++)
        {
            hm[i] = new int[C];
        }
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> hm[i][j];
            }
        }
        int health = minimum_health(hm, R, C);
        cout << health << endl;
    }
}