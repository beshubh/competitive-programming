#include <iostream>
using namespace std;
int main()
{
    int n;
    // creating the big array by considering the constraints of the height
    int * height = new int[50000000 + 2]();
    int maximum_x = 0;
    long area = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (height[x / 2] < y)
        {
            height[x / 2] = y;
        }
        if ((x / 2) > maximum_x)
        {
            maximum_x = x / 2;
        }
    }
    for (int i = maximum_x; i > 0; i--)
    {
        if(height[i] < height[i + 1] ){
            height[i] = height[i + 1];
        }
        area += height[i];

    }
    cout << 2 * area << endl;
    return 0;
}