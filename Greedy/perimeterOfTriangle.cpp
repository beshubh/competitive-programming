#include <iostream>
#include <algorithm>
using namespace std;
void maxPerimeter(int *arr, int n)
{
    sort(arr, arr + n);
    int i = 0;
    int j = 1;
    int k = 2;
    int max = -1;
    int st = -1;
    int en = -1;
    while (k < n)
    {
        if (!(arr[i] + arr[j] <= arr[k]))
        {
            int curmax = arr[i] + arr[j] + arr[k];
            if (curmax > max)
            {
                st = i;
                en = k;
                max = curmax;
            }
        }

        i++;
        j++;
        k++;
    }
    if (st != -1 && en != -1)
    {
        for (int a = st; a <= en; a++)
        {
            cout << arr[a] << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }
    
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxPerimeter(arr, n);
    return 0;
}